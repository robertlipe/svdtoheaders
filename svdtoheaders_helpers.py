import os
import xmltodict
import re  # Import regex module
from typing import Dict, Any, List, Union, Optional


# Custom Exceptions
class SVDError(Exception):
    """Base exception for SVD processing errors."""
    pass


class SVDFileError(SVDError):
    """Raised when there's an issue with the SVD file (e.g., not found)."""
    pass


class SVDParseError(SVDError):
    """Raised when there's an XML parsing error."""
    pass


class SVDContentError(SVDError):
    """Raised when mandatory SVD content is missing or malformed."""
    pass


class ClobberError(SVDError):
    """Raised when a file cannot be overwritten."""
    pass


# Define module-level constants for formatting
DEFINE_BASE_NAME_WIDTH = 20
DEFINE_NAME_COLUMN_WIDTH = 33


def read_svd(svdfile: str) -> Dict[str, Any]:
    """Reads an SVD file, parses it, and returns its content as a dictionary.

    Args:
      svdfile: The path to the SVD file.

    Returns:
      A dictionary representing the parsed SVD XML content.

    Raises:
      SVDFileError: If the specified SVD file does not exist.
      SVDParseError: If there's an XML parsing error.
      SVDError: For any other unexpected errors during file reading or parsing.
    """
    try:
        with open(svdfile, 'r') as fp:
            xml = fp.read()
            doc = xmltodict.parse(xml)
        return doc
    except FileNotFoundError as e:
        raise SVDFileError(f'SVD file not found at "{svdfile}"') from e
    except xmltodict.expat.ExpatError as e:
        raise SVDParseError('XML parsing failed for "' + svdfile + '". ' +
                            'Reason: ' + str(e)) from e
    except Exception as e:  # noqa: F841
        raise SVDError('An unexpected error occurred while reading the ' +
                       'SVD file: ' + str(e)) from e


def humanBytes(bytes: int) -> str:
    """Converts a byte count into a human-readable string (e.g., 1KB, 1MB).

    Note: For values less than 1024 bytes, it returns "1kB".

    Args:
      bytes: The number of bytes.

    Returns:
      A string representing the human-readable byte count.
    """
    if (bytes >= 1024**2):
        return str((int(bytes / 1024**2))) + "mB"
    if (bytes >= 1024):
        return str((int(bytes / 1024))) + "kB"
    return ("1kB")


def cleanse(string: str) -> str:
    """Reduces multiple whitespace in a string to single spaces.

    Args:
      string: The input string to cleanse.

    Returns:
      The cleansed string.
    """
    return " ".join(string.split())


def peripherals(doc: Dict[str, Any], prefix: str) -> List[str]:
    """Generate C defines for peripheral base addresses in the SVD document.

    Args:
      doc: The SVD document parsed into a dictionary.
      prefix: A string prefix to add to generated C defines (e.g., 'CH32V_').

    Returns:
      A sorted list of strings, where each string is a C #define for a
      peripheral's base address and its associated comment.
    """
    defines = []
    base_addresses = {}
    sizes = {}
    # Check for the existence of the top-level 'device' and 'peripherals' keys
    if ('device' not in doc or 'peripherals' not in doc['device'] or
            'peripheral' not in doc['device']['peripherals']):
        raise SVDContentError("Missing mandatory 'device' or 'peripherals' " +
                              "element in SVD file.")

    all_peripherals_data = doc['device']['peripherals']['peripheral']
    if not isinstance(all_peripherals_data, list):
        all_peripherals_data = [all_peripherals_data]

    for p in all_peripherals_data:
        try:
            name = p['name']
        except KeyError as e:  # noqa: F841
            raise SVDContentError("Missing mandatory 'name' element in a " +
                                  "peripheral.") from e

        try:
            base_address = int(p['baseAddress'], 0)
        except KeyError as e:  # noqa: F841
            raise SVDContentError("Missing mandatory 'baseAddress' element " +
                                  "in peripheral '" + name + "'.") from e

        address_block = p.get('addressBlock', {})
        size = int(address_block.get('size', "0"), 0)

        if '@derivedFrom' in p:
            derived_from = p['@derivedFrom']
            # BASE was already printed. derive size.
            size = sizes[derived_from]

        end_address = base_address + size - 1

        base_addresses[name] = base_address
        sizes[name] = size

        symname = f"{prefix}{name.upper()}_BASE"
        define = (f"#define {symname:<{DEFINE_BASE_NAME_WIDTH}} "
                  f"{hex(base_address)}")

        lname = cleanse(p.get('description', name))

        cmt = (f" /* {base_address:#x}-{end_address:#x}: {humanBytes(size)} "
               f"{lname} */")

        defines.append(define + cmt)

    defines.sort()
    return defines


def _process_fields(rv: List[str], prefix: str, p_name_clean: str,
                    r_name: str,
                    fields: Union[Dict[str, Any], List[Dict[str, Any]], None],
                    column: int) -> None:
    """Append C defines from a list of fields or single-field dict to rv.

    Handles bit offsets, bit widths, masks, and enums within fields.

    Args:
      rv: The list of C #define strings to append to.
      prefix: The C symbol prefix for defines (e.g., 'CH32V_').
      p_name_clean: The cleaned name of the parent peripheral.
      r_name: The name of the parent register.
      fields: A dictionary representing a single field, a list of field
              dictionaries, or None.
      column: The column width for aligning #define names.
    """
    if isinstance(fields, dict):
        fields = [fields]
    if fields:
        for field in fields:
            try:
                f_name = field['name']
            except KeyError as e:  # noqa: F841
                raise SVDContentError(
                    "Missing mandatory 'name' element in a " +
                    "field within register '" + r_name + "'" +
                    " of peripheral '" + p_name_clean + "'.") from e
            f_descr = cleanse(field.get('description', 'N/A'))

            bit_offset = None
            bit_width = None

            if 'bitOffset' in field and 'bitWidth' in field:
                bit_offset = int(field['bitOffset'])
                bit_width = int(field['bitWidth'])
            elif 'lsb' in field and 'msb' in field:
                lsb = int(field['lsb'])
                msb = int(field['msb'])
                bit_offset = lsb
                bit_width = msb - lsb + 1
            elif 'bitRange' in field:
                bit_range_str = str(field['bitRange'])  # Ensure it's a string
                match = re.match(
                    r'\[(\d+):(\d+)\]',
                    bit_range_str)  # Corrected regex
                if not match:
                    raise SVDContentError(
                        "Malformed 'bitRange' element '" + bit_range_str + "'"
                        " in field '" + f_name + "' within register '" +
                        r_name + "' of peripheral '" +
                        p_name_clean + "'. Expected format '[msb:lsb]'.")
                msb = int(match.group(1))
                lsb = int(match.group(2))
                bit_offset = lsb
                bit_width = msb - lsb + 1
            else:
                raise SVDContentError(
                    "Missing mandatory bit positioning elements "
                    "('bitOffset'/'bitWidth', 'lsb'/'msb', or 'bitRange')"
                    "in field '" + f_name + "'" +
                    "within register '" + r_name + "'" +
                    "of peripheral '" + p_name_clean + "'.")

            mask = (1 << bit_width) - 1

            b_name = prefix + p_name_clean + '_' + r_name + '_' + f_name
            f_descr = cleanse(field.get('description', 'N/A'))
            if bit_width == 1:
                val = 1 << bit_offset
                rv.append(f'#define {b_name:<{column}} (1 << {bit_offset:>2})'
                          f' /* {val:08x}: {f_descr} */')
            else:
                val = mask << bit_offset
                rv.append(f'#define {b_name:<{column}} (0x{mask:x} << ' 
                          f'{bit_offset})' 
                          f' /* {val:08x}: {f_descr} */')
                maskname = b_name + "_MASK"
                rv.append(f'#define {maskname:<{column}} (0x{mask:x} << ' 
                          f'{bit_offset})')

            if 'enumeratedValues' in field:
                enumerated_values = field['enumeratedValues'].get(
                    'enumeratedValue', [])
                if not isinstance(enumerated_values, list):
                    enumerated_values = [enumerated_values]
                for ev in enumerated_values:
                    try:
                        ev_name = ev['name']
                        ev_value = ev['value']
                    except KeyError as e:  # noqa: F841
                        raise SVDContentError(
                            "Missing mandatory 'name' or 'value' element in " +
                            "an enumeratedValue within field '" + f_name + "'"
                            "of register '" + r_name + "' of peripheral '" +
                            p_name_clean + "'.") from e
                    ev_define_name = f"{b_name}_{ev_name}"
                    rv.append(f'#define {ev_define_name:<{column}} {ev_value}')


def _process_register_block(
    rv: List[str], prefix: str, p_name_clean: str,
    r_name: str,
    r_base: int,
    access: Optional[str],
    fields_data: Union[Dict[str, Any], List[Dict[str, Any]], None],
    column: int,
    reg_base_sym: str,
    cluster_offset: int = 0
) -> None:
    """Process a single register block (offset, define, and fields)."""
    regname = f"{prefix}{p_name_clean}_{r_name}"

    # Apply cluster_offset to r_base for the final offset calculation
    effective_r_base = r_base + cluster_offset

    offsetname = f"{regname}_OFFSET"

    rv.append(f'#define {offsetname:<{column}} 0x{effective_r_base:04x}')

    define_line = (
        f'#define {regname:<{column}} ({reg_base_sym} + ' 
        f'{offsetname})')

    if access:
        define_line += f' /* {access} */'

    rv.append(define_line)

    _process_fields(rv, prefix, p_name_clean, r_name, fields_data, column)


def _process_peripheral_registers_list(
    rv: List[str], prefix: str, p_name_clean: str,
    registers_list: Union[Dict[str, Any], List[Dict[str, Any]]],
    column: int,
    reg_base_sym: str,
    cluster_offset: int = 0
) -> None:
    """Helper to process a list of registers directly under a peripheral.

    Args:
      rv: The list of C #define strings to append to.
      prefix: The C symbol prefix for defines.
      p_name_clean: The cleaned name of the parent peripheral.
      registers_list: A dictionary representing a single register, or a list of
                      register dictionaries.
      column: The column width for aligning #define names.
      reg_base_sym: The C symbol for the peripheral's base address.
      cluster_offset: The base offset of the current cluster instance (0 for
                      non-clustered registers).
    """

    if isinstance(registers_list, dict):
        registers_list = [registers_list]

    for register in registers_list:
        try:
            r_name = register['name']
        except KeyError as e:  # noqa: F841
            raise SVDContentError("Missing mandatory 'name' element in a " +
                                  "register within peripheral '" +
                                  p_name_clean + "'.") from e
        try:
            r_base = int(register['addressOffset'], 0)
        except KeyError as e:  # noqa: F841
            raise SVDContentError(
                "Missing mandatory 'addressOffset' element " +
                "in register '" +
                r_name + "' " +
                "within peripheral '" +
                p_name_clean + "'.") from e
        if 'dim' in register:
            dim = int(register['dim'])
            dim_increment = int(register['dimIncrement'], 0)
            name_template = register['name']
            base_offset = int(register['addressOffset'], 0)

            for i in range(dim):
                r_name = name_template.replace('[%s]', str(i)).replace(
                    '%s', str(i))
                r_base = base_offset + i * dim_increment
                access = register.get('access')
                fields = (register.get('fields') or {}).get('field', [])
                _process_register_block(rv, prefix, p_name_clean, r_name,
                                        r_base, access, fields, column,
                                        reg_base_sym, cluster_offset)

        else:
            access = register.get('access')
            fields = (register.get('fields') or {}).get('field', [])
            _process_register_block(rv, prefix, p_name_clean, r_name,
                                    r_base, access, fields, column,
                                    reg_base_sym, cluster_offset)


def _process_cluster(
    rv: List[str], prefix: str, p_name_clean: str,
    cluster_data: Dict[str, Any],
    column: int,
    reg_base_sym: str
) -> None:
    """Helper to process a single cluster and its registers."""
    try:
        c_name = cluster_data['name']
    except KeyError as e:  # noqa: F841
        raise SVDContentError(
            "Missing mandatory 'name' element in a cluster" +
            " within peripheral '" +
            p_name_clean + "'.") from e
    try:
        c_base = int(cluster_data['addressOffset'], 0)
    except KeyError as e:  # noqa: F841
        raise SVDContentError(
            "Missing mandatory 'addressOffset' element in cluster '" + c_name +
            "' within peripheral '" + p_name_clean + "'.") from e
    if 'dim' in cluster_data:

        dim = int(cluster_data['dim'])
        dim_increment = int(cluster_data['dimIncrement'], 0)
        name_template = cluster_data['name']
        base_offset = int(cluster_data['addressOffset'], 0)

        for i in range(dim):
            c_name = name_template.replace(
                '[%s]', str(i)).replace(
                '%s', str(i))
            # This is the base offset for the current cluster instance
            c_base = base_offset + i * dim_increment

            cluster_registers = cluster_data.get('register', [])

            _process_peripheral_registers_list(rv, prefix,
                                               f"{p_name_clean}_{c_name}",
                                               cluster_registers, column,
                                               reg_base_sym, c_base)

    else:

        cluster_registers = cluster_data.get('register', [])

        _process_peripheral_registers_list(rv, prefix,
                                           f"{p_name_clean}_{c_name}",
                                           cluster_registers, column,
                                           reg_base_sym, c_base)


def registers(doc: Dict[str, Any], prefix: str) -> List[str]:
    """Processes the SVD document to extract register and field information,

    generating C #defines for register bases, offsets, and bit fields.

    Handles both base and derived peripherals, including clusters and register
    arrays.

    Args:
      doc: The SVD document parsed into a dictionary.
      prefix: A string prefix to add to generated C defines (e.g., 'CH32V_').

    Returns:
      A list of strings, where each string is a C #define for a register,
      offset, bit field, or enumerated value.
    """

    rv = []

    # The heirarchy in the SVD is DEVICE->Peripherals->Registers->Fields
    all_peripherals = doc['device'].get(
        'peripherals', {}).get(
        'peripheral', [])

    if not isinstance(all_peripherals, list):
        all_peripherals = [all_peripherals]

    # Check for mandatory elements before iteration if possible
    # For now, relying on checks within _process_cluster and
    # _process_peripheral_registers_list
    # Create a lookup for all peripherals by name

    peripheral_map = {}
    for p in all_peripherals:
        try:
            name = p['name']
        except KeyError as e:  # noqa: F841
            raise SVDContentError("Missing mandatory 'name' element in a "
                                  "peripheral.") from e
        peripheral_map[name] = p

    # First pass: process base peripherals
    for p_name, peripheral in peripheral_map.items():

        if '@derivedFrom' in peripheral:
            continue

        registers_in_peripheral = peripheral.get('registers', {})

        registers_list = registers_in_peripheral.get('register', [])

        clusters_list = registers_in_peripheral.get('cluster', [])

        if isinstance(registers_list, dict):
            registers_list = [registers_list]
        if isinstance(clusters_list, dict):
            clusters_list = [clusters_list]

        try:
            baseAddress = int(peripheral['baseAddress'], 0)
        except KeyError as e:  # noqa: F841
            raise SVDContentError("Missing mandatory 'baseAddress' element "
                                  "in peripheral '" + p_name + "'.") from e
        p_name_clean = cleanse(p_name)

        column = DEFINE_NAME_COLUMN_WIDTH

        if registers_list or clusters_list:

            p_descr = cleanse(peripheral.get('description', ''))

            rv.append(f'\n/* {p_name_clean} - {p_descr} */')

            reg_base = f"{prefix}{p_name_clean}_BASE"

            rv.append(f'#define {reg_base:<{column}} 0x{baseAddress:x}')

            for cluster in clusters_list:
                _process_cluster(rv, prefix, p_name_clean, cluster, column,
                                 reg_base)

            _process_peripheral_registers_list(rv, prefix, p_name_clean,
                                               registers_list, column,
                                               reg_base)

    # Second pass: process derived peripherals
    for p_name, peripheral in peripheral_map.items():

        if '@derivedFrom' not in peripheral:
            continue

        d_name = peripheral['@derivedFrom']

        if d_name not in peripheral_map:
            rv.append(f'\n/* WARNING: Base peripheral "{d_name}" not found '
                      f'for derived peripheral "{p_name}" */')
            continue

        base_peripheral = peripheral_map[d_name]

        p_name_clean = cleanse(p_name)

        d_name_clean = cleanse(d_name)
        try:
            baseAddress = int(peripheral['baseAddress'], 0)
        except KeyError as e:  # noqa: F841
            raise SVDContentError(
                "Missing mandatory 'baseAddress' element " +
                "in derived peripheral '" +
                p_name + "'.") from e

        column = DEFINE_NAME_COLUMN_WIDTH

        rv.append(f'\n/* {p_name_clean} is derived from {d_name_clean}. */')

        reg_base = f"{prefix}{p_name_clean}_BASE"

        rv.append(f'#define {reg_base:<{column}} 0x{baseAddress:x}')

        registers_in_peripheral = base_peripheral.get('registers', {})

        registers_list = registers_in_peripheral.get('register', [])

        clusters_list = registers_in_peripheral.get('cluster', [])

        if isinstance(registers_list, dict):
            registers_list = [registers_list]
        if isinstance(clusters_list, dict):
            clusters_list = [clusters_list]

        for cluster in clusters_list:
            _process_cluster(rv, prefix, p_name_clean, cluster, column,
                             reg_base)

        _process_peripheral_registers_list(rv, prefix, p_name_clean,
                                           registers_list, column,
                                           reg_base)
    return rv


def clobberOk(file, overwrite):
    if overwrite or not (os.path.isfile(file)):
        return True
    raise ClobberError(f'Unable to overwrite existing file "{file}".')
