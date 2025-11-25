import os
import subprocess
import tempfile
import pytest

S2H = './svdtoheaders'

def run_svdtoheaders(args):
    cmd = ['venv/bin/python', S2H] + args
    return subprocess.run(cmd, capture_output=True, text=True)

def test_simple_generation():
    with tempfile.TemporaryDirectory() as tmpdir:
        reg_file = os.path.join(tmpdir, 'simple_reg.h')
        map_file = os.path.join(tmpdir, 'simple_map.h')

        args = ['-s', 'tests/simple.svd', '-p', 'TEST_', '-r', reg_file, '-m', map_file, '-o']
        result = run_svdtoheaders(args)

        print(result.stdout)
        print(result.stderr)

        with open(reg_file, 'r') as f:
            content = f.read()
            lines = content.splitlines()
            assert '#define TEST_TEST_PERIPH_CTRL_SINGLE      (1 <<  1) /* 00000002: A single bit field. */' in lines
            assert '#define TEST_TEST_PERIPH_CTRL_MULTI       (0xf << 8) /* 00000f00: A multi-bit field. */' in lines
            assert '#define TEST_TEST_PERIPH_CTRL_MULTI_MASK  (0xf << 8)' in lines

        with open(map_file, 'r') as f:
            content = f.read()
            lines = content.splitlines()
            assert '#define TEST_DERIVED_PERIPH_BASE 0x40002000 /* 0x40002000-0x400020ff: 1kB A test derived peripheral. */' in lines
            assert '#define TEST_TEST_PERIPH_BASE 0x40001000 /* 0x40001000-0x400010ff: 1kB A test peripheral. */' in lines
def test_derived_generation():
    with tempfile.TemporaryDirectory() as tmpdir:
        reg_file = os.path.join(tmpdir, 'derived_reg.h')

        args = ['-s', 'tests/simple.svd', '-p', 'DERIVED_', '-r', reg_file, '-o']
        result = run_svdtoheaders(args)

        assert result.returncode == 0

        with open(reg_file, 'r') as f:
            content = f.read()
            lines = content.splitlines()
            print(lines)
            assert '#define DERIVED_TEST_PERIPH_CTRL_SINGLE   (1 <<  1) /* 00000002: A single bit field. */' in lines
            assert '#define DERIVED_TEST_PERIPH_CTRL_MULTI    (0xf << 8) /* 00000f00: A multi-bit field. */' in lines
            assert '#define DERIVED_TEST_PERIPH_CTRL_MULTI_MASK (0xf << 8)' in lines

def test_array_generation():
    with tempfile.TemporaryDirectory() as tmpdir:
        reg_file = os.path.join(tmpdir, 'array_reg.h')

        args = ['-s', 'tests/array.svd', '-p', 'TEST_', '-r', reg_file, '-o']
        result = run_svdtoheaders(args)

        assert result.returncode == 0

        with open(reg_file, 'r') as f:
            content = f.read()
            lines = content.splitlines()
            print(lines)
            
            # Helper to check for defines, ignoring whitespace
            def check_define(name, value):
                for line in lines:
                    if name in line and value in line:
                        return True
                return False

            assert check_define('#define TEST_ARRAY_PERIPH_CHANNEL0_OFFSET', '0x0010')
            assert check_define('#define TEST_ARRAY_PERIPH_CHANNEL0', '(TEST_ARRAY_PERIPH_BASE + TEST_ARRAY_PERIPH_CHANNEL0_OFFSET)')
            assert check_define('#define TEST_ARRAY_PERIPH_CHANNEL1_OFFSET', '0x0014')
            assert check_define('#define TEST_ARRAY_PERIPH_CHANNEL1', '(TEST_ARRAY_PERIPH_BASE + TEST_ARRAY_PERIPH_CHANNEL1_OFFSET)')
            assert check_define('#define TEST_ARRAY_PERIPH_CHANNEL2_OFFSET', '0x0018')
            assert check_define('#define TEST_ARRAY_PERIPH_CHANNEL2', '(TEST_ARRAY_PERIPH_BASE + TEST_ARRAY_PERIPH_CHANNEL2_OFFSET)')
            assert check_define('#define TEST_ARRAY_PERIPH_CHANNEL3_OFFSET', '0x001c')
            assert check_define('#define TEST_ARRAY_PERIPH_CHANNEL3', '(TEST_ARRAY_PERIPH_BASE + TEST_ARRAY_PERIPH_CHANNEL3_OFFSET)')

            assert check_define('#define TEST_ARRAY_PERIPH_CHANNEL0_CONFIG', '(0xff << 0)')
            assert check_define('#define TEST_ARRAY_PERIPH_CHANNEL1_CONFIG', '(0xff << 0)')
            assert check_define('#define TEST_ARRAY_PERIPH_CHANNEL2_CONFIG', '(0xff << 0)')
            assert check_define('#define TEST_ARRAY_PERIPH_CHANNEL3_CONFIG', '(0xff << 0)')

def test_cluster_generation():
    with tempfile.TemporaryDirectory() as tmpdir:
        reg_file = os.path.join(tmpdir, 'cluster_reg.h')

        args = ['-s', 'tests/cluster.svd', '-p', 'TEST_', '-r', reg_file, '-o']
        result = run_svdtoheaders(args)

        assert result.returncode == 0

        with open(reg_file, 'r') as f:
            content = f.read()
            lines = content.splitlines()
            print(lines)
            
            # Helper to check for defines, ignoring whitespace
            def check_define(name, value):
                for line in lines:
                    if name in line and value in line:
                        return True
                return False

            assert check_define('#define TEST_CLUSTER_PERIPH_TIMER0_CONTROL_OFFSET', '0x0000')
            assert check_define('#define TEST_CLUSTER_PERIPH_TIMER0_CONTROL', '(TEST_CLUSTER_PERIPH_BASE + TEST_CLUSTER_PERIPH_TIMER0_CONTROL_OFFSET)')
            assert check_define('#define TEST_CLUSTER_PERIPH_TIMER0_DATA_OFFSET', '0x0004')
            assert check_define('#define TEST_CLUSTER_PERIPH_TIMER0_DATA', '(TEST_CLUSTER_PERIPH_BASE + TEST_CLUSTER_PERIPH_TIMER0_DATA_OFFSET)')
            assert check_define('#define TEST_CLUSTER_PERIPH_TIMER1_CONTROL_OFFSET', '0x0010')
            assert check_define('#define TEST_CLUSTER_PERIPH_TIMER1_CONTROL', '(TEST_CLUSTER_PERIPH_BASE + TEST_CLUSTER_PERIPH_TIMER1_CONTROL_OFFSET)')
            assert check_define('#define TEST_CLUSTER_PERIPH_TIMER1_DATA_OFFSET', '0x0014')
            assert check_define('#define TEST_CLUSTER_PERIPH_TIMER1_DATA', '(TEST_CLUSTER_PERIPH_BASE + TEST_CLUSTER_PERIPH_TIMER1_DATA_OFFSET)')

def test_enum_generation():
    with tempfile.TemporaryDirectory() as tmpdir:
        reg_file = os.path.join(tmpdir, 'enum_reg.h')

        args = ['-s', 'tests/enum.svd', '-p', 'TEST_', '-r', reg_file, '-o']
        result = run_svdtoheaders(args)

        assert result.returncode == 0

        with open(reg_file, 'r') as f:
            content = f.read()
            lines = content.splitlines()
            print(lines)
            
            # Helper to check for defines, ignoring whitespace
            def check_define(name, value):
                for line in lines:
                    if name in line and value in line:
                        return True
                return False

            assert check_define('#define TEST_ENUM_PERIPH_CONFIG_MODE_DISABLED', '0')
            assert check_define('#define TEST_ENUM_PERIPH_CONFIG_MODE_ENABLED', '1')

def test_access_generation():
    with tempfile.TemporaryDirectory() as tmpdir:
        reg_file = os.path.join(tmpdir, 'access_reg.h')

        args = ['-s', 'tests/access.svd', '-p', 'TEST_', '-r', reg_file, '-o']
        result = run_svdtoheaders(args)

        assert result.returncode == 0

        with open(reg_file, 'r') as f:
            content = f.read()
            lines = content.splitlines()
            print(lines)
            
            # Helper to check for defines, ignoring whitespace
            def check_define(name, value):
                for line in lines:
                    if name in line and value in line:
                        return True
                return False

            assert check_define('#define TEST_ACCESS_PERIPH_RO_REG', '/* read-only */')
            assert check_define('#define TEST_ACCESS_PERIPH_WO_REG', '/* write-only */')
            assert check_define('#define TEST_ACCESS_PERIPH_RW_REG', '/* read-write */')



def test_svd_content_error():
    with tempfile.TemporaryDirectory() as tmpdir:
        reg_file = os.path.join(tmpdir, 'malformed_reg.h')

        args = ['-s', 'tests/malformed.svd', '-p', 'MALFORMED_', '-r', reg_file, '-o']
        result = run_svdtoheaders(args)

        # Assert that the script failed with a non-zero exit code
        assert result.returncode != 0

        # Assert that the specific error message for missing 'name' is present
        assert "Error: SVDContentError: Missing mandatory 'name' element" in result.stderr

from svdtoheaders_helpers import humanBytes, cleanse, clobberOk, ClobberError, _process_register_block, _process_peripheral_registers_list, _process_cluster, DEFINE_NAME_COLUMN_WIDTH, SVDContentError

def test_humanBytes():
    assert humanBytes(0) == "1kB"
    assert humanBytes(1) == "1kB"
    assert humanBytes(1023) == "1kB"
    assert humanBytes(1024) == "1kB" # Based on current implementation (int(bytes / 1024))
    assert humanBytes(1025) == "1kB"
    assert humanBytes(2047) == "1kB"
    assert humanBytes(2048) == "2kB"
    assert humanBytes(1024 * 1024 - 1) == "1023kB"
    assert humanBytes(1024 * 1024) == "1mB"
    assert humanBytes(1024 * 1024 + 1) == "1mB"
    assert humanBytes(2 * 1024 * 1024) == "2mB"

def test_cleanse():
    assert cleanse("  hello world  ") == "hello world"
    assert cleanse("hello   world") == "hello world"
    assert cleanse("  hello\nworld  ") == "hello world"
    assert cleanse("hello") == "hello"
    assert cleanse("") == ""
    assert cleanse("   ") == ""

def test_clobberOk_no_overwrite_no_file(mocker):
    mocker.patch('os.path.isfile', return_value=False)
    assert clobberOk("non_existent_file.txt", False) == True

def test_clobberOk_overwrite_no_file(mocker):
    mocker.patch('os.path.isfile', return_value=False)
    assert clobberOk("non_existent_file.txt", True) == True

def test_clobberOk_overwrite_file_exists(mocker):
    mocker.patch('os.path.isfile', return_value=True)
    assert clobberOk("existing_file.txt", True) == True

def test_clobberOk_no_overwrite_file_exists(mocker):
    mocker.patch('os.path.isfile', return_value=True)
    with pytest.raises(ClobberError) as excinfo:
        clobberOk("existing_file.txt", False)
    assert 'Unable to overwrite existing file' in str(excinfo.value)

def test_process_register_block(mocker):
    mock_process_fields = mocker.patch('svdtoheaders_helpers._process_fields')

    rv = []
    prefix = "TEST_"
    p_name_clean = "PERIPH"
    r_name = "REG"
    r_base = 0x100
    access = "read-write"
    fields_data = [{"name": "FIELD0", "bitOffset": 0, "bitWidth": 1}]
    column = DEFINE_NAME_COLUMN_WIDTH
    reg_base_sym = "TEST_PERIPH_BASE"
    cluster_offset = 0x10

    _process_register_block(rv, prefix, p_name_clean, r_name, r_base, access, fields_data, column, reg_base_sym, cluster_offset)

    expected_rv = [
        '#define TEST_PERIPH_REG_OFFSET            0x0110',
        '#define TEST_PERIPH_REG                   (TEST_PERIPH_BASE + TEST_PERIPH_REG_OFFSET) /* read-write */'
    ]

    assert rv == expected_rv
    mock_process_fields.assert_called_once_with(rv, prefix, p_name_clean, r_name, fields_data, column)


def test_process_peripheral_registers_list_single_register(mocker):
    mock_process_register_block = mocker.patch('svdtoheaders_helpers._process_register_block')

    rv = []
    prefix = "TEST_"
    p_name_clean = "PERIPH"
    registers_list = {
        "name": "REG_SINGLE",
        "addressOffset": "0x0",
        "access": "read-write",
        "fields": {
            "field": {
                "name": "FIELD0",
                "bitOffset": "0",
                "bitWidth": "1"
            }
        }
    }
    column = DEFINE_NAME_COLUMN_WIDTH
    reg_base_sym = "TEST_PERIPH_BASE"
    cluster_offset = 0x0

    _process_peripheral_registers_list(rv, prefix, p_name_clean, registers_list, column, reg_base_sym, cluster_offset)

    mock_process_register_block.assert_called_once_with(
        rv, prefix, p_name_clean, "REG_SINGLE", 0x0, "read-write", registers_list['fields']['field'], column, reg_base_sym, cluster_offset
    )

def test_process_peripheral_registers_list_array_register(mocker):
    mock_process_register_block = mocker.patch('svdtoheaders_helpers._process_register_block')

    rv = []
    prefix = "TEST_"
    p_name_clean = "PERIPH"
    registers_list = {
        "dim": "2",
        "dimIncrement": "0x4",
        "name": "REG_ARRAY[%s]",
        "addressOffset": "0x10",
        "access": "read-only",
        "fields": {
            "field": {
                "name": "FIELD0",
                "bitOffset": "0",
                "bitWidth": "1"
            }
        }
    }
    column = DEFINE_NAME_COLUMN_WIDTH
    reg_base_sym = "TEST_PERIPH_BASE"
    cluster_offset = 0x0

    _process_peripheral_registers_list(rv, prefix, p_name_clean, registers_list, column, reg_base_sym, cluster_offset)

    assert mock_process_register_block.call_count == 2
    mock_process_register_block.assert_any_call(
        rv, prefix, p_name_clean, "REG_ARRAY0", 0x10, "read-only", registers_list['fields']['field'], column, reg_base_sym, cluster_offset
    )
    mock_process_register_block.assert_any_call(
        rv, prefix, p_name_clean, "REG_ARRAY1", 0x14, "read-only", registers_list['fields']['field'], column, reg_base_sym, cluster_offset
    )

def test_process_peripheral_registers_list_missing_name(mocker):
    mock_process_register_block = mocker.patch('svdtoheaders_helpers._process_register_block')

    rv = []
    prefix = "TEST_"
    p_name_clean = "PERIPH"
    registers_list = {
        "addressOffset": "0x0",
        "access": "read-write"
    } # Missing 'name'
    column = DEFINE_NAME_COLUMN_WIDTH
    reg_base_sym = "TEST_PERIPH_BASE"
    cluster_offset = 0x0

    with pytest.raises(SVDContentError) as excinfo:
        _process_peripheral_registers_list(rv, prefix, p_name_clean, registers_list, column, reg_base_sym, cluster_offset)
    assert "Missing mandatory 'name' element in a register within peripheral 'PERIPH'." in str(excinfo.value)
    mock_process_register_block.assert_not_called()

def test_process_peripheral_registers_list_missing_addressOffset(mocker):
    mock_process_register_block = mocker.patch('svdtoheaders_helpers._process_register_block')

    rv = []
    prefix = "TEST_"
    p_name_clean = "PERIPH"
    registers_list = {
        "name": "REG_MISSING_ADDR",
        "access": "read-write"
    } # Missing 'addressOffset'
    column = DEFINE_NAME_COLUMN_WIDTH
    reg_base_sym = "TEST_PERIPH_BASE"
    cluster_offset = 0x0

    with pytest.raises(SVDContentError) as excinfo:
        _process_peripheral_registers_list(rv, prefix, p_name_clean, registers_list, column, reg_base_sym, cluster_offset)
    assert "Missing mandatory 'addressOffset' element in register 'REG_MISSING_ADDR' within peripheral 'PERIPH'." in str(excinfo.value)
    mock_process_register_block.assert_not_called()


def test_process_cluster_single_cluster(mocker):
    mock_process_peripheral_registers_list = mocker.patch('svdtoheaders_helpers._process_peripheral_registers_list')

    rv = []
    prefix = "TEST_"
    p_name_clean = "PERIPH"
    cluster_data = {
        "name": "CLUSTER_SINGLE",
        "addressOffset": "0x0",
        "register": {
            "name": "REG_IN_CLUSTER",
            "addressOffset": "0x0",
            "access": "read-write"
        }
    }
    column = DEFINE_NAME_COLUMN_WIDTH
    reg_base_sym = "TEST_PERIPH_BASE"

    _process_cluster(rv, prefix, p_name_clean, cluster_data, column, reg_base_sym)

    mock_process_peripheral_registers_list.assert_called_once_with(
        rv, prefix, f"{p_name_clean}_{cluster_data['name']}", cluster_data['register'], column, reg_base_sym, int(cluster_data['addressOffset'], 0)
    )

def test_process_cluster_array_cluster(mocker):
    mock_process_peripheral_registers_list = mocker.patch('svdtoheaders_helpers._process_peripheral_registers_list')

    rv = []
    prefix = "TEST_"
    p_name_clean = "PERIPH"
    cluster_data = {
        "dim": "2",
        "dimIncrement": "0x10",
        "name": "CLUSTER_ARRAY[%s]",
        "addressOffset": "0x0",
        "register": {
            "name": "REG_IN_CLUSTER",
            "addressOffset": "0x0",
            "access": "read-write"
        }
    }
    column = DEFINE_NAME_COLUMN_WIDTH
    reg_base_sym = "TEST_PERIPH_BASE"

    _process_cluster(rv, prefix, p_name_clean, cluster_data, column, reg_base_sym)

    assert mock_process_peripheral_registers_list.call_count == 2
    mock_process_peripheral_registers_list.assert_any_call(
        rv, prefix, f"{p_name_clean}_CLUSTER_ARRAY0", cluster_data['register'], column, reg_base_sym, 0x0
    )
    mock_process_peripheral_registers_list.assert_any_call(
        rv, prefix, f"{p_name_clean}_CLUSTER_ARRAY1", cluster_data['register'], column, reg_base_sym, 0x10
    )

def test_process_cluster_missing_name(mocker):
    mock_process_peripheral_registers_list = mocker.patch('svdtoheaders_helpers._process_peripheral_registers_list')

    rv = []
    prefix = "TEST_"
    p_name_clean = "PERIPH"
    cluster_data = {
        "addressOffset": "0x0",
        "register": {
            "name": "REG_IN_CLUSTER",
            "addressOffset": "0x0",
            "access": "read-write"
        }
    } # Missing 'name'
    column = DEFINE_NAME_COLUMN_WIDTH
    reg_base_sym = "TEST_PERIPH_BASE"

    with pytest.raises(SVDContentError) as excinfo:
        _process_cluster(rv, prefix, p_name_clean, cluster_data, column, reg_base_sym)
    assert "Missing mandatory 'name' element in a cluster within peripheral 'PERIPH'." in str(excinfo.value)
    mock_process_peripheral_registers_list.assert_not_called()

def test_process_cluster_missing_addressOffset(mocker):
    mock_process_peripheral_registers_list = mocker.patch('svdtoheaders_helpers._process_peripheral_registers_list')

    rv = []
    prefix = "TEST_"
    p_name_clean = "PERIPH"
    cluster_data = {
        "name": "CLUSTER_MISSING_ADDR",
        "register": {
            "name": "REG_IN_CLUSTER",
            "addressOffset": "0x0",
            "access": "read-write"
        }
    } # Missing 'addressOffset'
    column = DEFINE_NAME_COLUMN_WIDTH
    reg_base_sym = "TEST_PERIPH_BASE"

    with pytest.raises(SVDContentError) as excinfo:
        _process_cluster(rv, prefix, p_name_clean, cluster_data, column, reg_base_sym)
    assert "Missing mandatory 'addressOffset' element in cluster 'CLUSTER_MISSING_ADDR' within peripheral 'PERIPH'." in str(excinfo.value)
    mock_process_peripheral_registers_list.assert_not_called()


def test_non_existent_svd_file():
    with tempfile.TemporaryDirectory() as tmpdir:
        reg_file = os.path.join(tmpdir, 'output.h')
        non_existent_svd = os.path.join(tmpdir, 'non_existent.svd')

        args = ['-s', non_existent_svd, '-p', 'TEST_', '-r', reg_file, '-o']
        result = run_svdtoheaders(args)

        assert result.returncode != 0
        assert f"Error: SVDFileError: SVD file not found at \"{non_existent_svd}\"" in result.stderr


def test_clobber_integration_error():
    with tempfile.TemporaryDirectory() as tmpdir:
        reg_file = os.path.join(tmpdir, 'clobber_test.h')
        svd_file = os.path.join('tests', 'simple.svd')

        # First, successfully write the file
        args_initial = ['-s', svd_file, '-p', 'TEST_', '-r', reg_file, '-o']
        result_initial = run_svdtoheaders(args_initial)
        assert result_initial.returncode == 0
        assert os.path.exists(reg_file)

        # Then, attempt to overwrite without -o flag, expecting ClobberError
        args_clobber = ['-s', svd_file, '-p', 'TEST_', '-r', reg_file] # No -o flag
        result_clobber = run_svdtoheaders(args_clobber)

        assert result_clobber.returncode != 0
        assert f"Error: ClobberError: Unable to overwrite existing file \"{reg_file}\"" in result_clobber.stderr

def test_baseline_comparison():
    # List of (svd_file_path_relative_to_root, prefix, output_type, output_filename_base) tuples
    test_cases = [
        ('tests/simple.svd', 'TEST_', 'reg', 'simple_reg.h'),
        ('tests/simple.svd', 'TEST_', 'map', 'simple_map.h'),
        ('tests/simple.svd', 'DERIVED_', 'reg', 'derived_reg.h'),
        ('tests/array.svd', 'TEST_', 'reg', 'array_reg.h'),
        ('tests/cluster.svd', 'TEST_', 'reg', 'cluster_reg.h'),
        ('tests/enum.svd', 'TEST_', 'reg', 'enum_reg.h'),
        ('tests/access.svd', 'TEST_', 'reg', 'access_reg.h'),
        ('demo/svd/ch32v30x.svd', 'CH32V_', 'reg', 'ch32v30x_reg.h'),
        ('demo/svd/ch32v30x.svd', 'CH32V_', 'map', 'ch32v30x_map.h'),
    ]

    for svd_file_path, prefix, output_type, output_filename_base in test_cases:
        with tempfile.TemporaryDirectory() as tmpdir:
            generated_file_path = os.path.join(tmpdir, output_filename_base)
            baseline_file_path = os.path.join('tests', 'baseline_output', output_filename_base)

            args = ['-s', svd_file_path, '-p', prefix]
            if output_type == 'reg':
                args.extend(['-r', generated_file_path])
            elif output_type == 'map':
                args.extend(['-m', generated_file_path])
            args.append('-o') # Allow overwrite in temp directory

            result = run_svdtoheaders(args)
            assert result.returncode == 0, f"svdtoheaders failed for {svd_file_path} with prefix {prefix}: {result.stderr}"

            with open(generated_file_path, 'r') as f_gen, open(baseline_file_path, 'r') as f_base:
                generated_content = f_gen.read()
                baseline_content = f_base.read()
                assert generated_content == baseline_content, f"Output mismatch for {output_filename_base} from {svd_file_path} with prefix {prefix}"