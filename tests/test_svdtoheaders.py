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

from svdtoheaders_helpers import humanBytes, cleanse, clobberOk, ClobberError

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

def test_baseline_comparison():
    # List of (svd_file, prefix, output_type, output_filename_base) tuples
    # output_type can be 'reg' or 'map'
    test_cases = [
        ('simple.svd', 'TEST_', 'reg', 'simple_reg.h'),
        ('simple.svd', 'TEST_', 'map', 'simple_map.h'),
        ('simple.svd', 'DERIVED_', 'reg', 'derived_reg.h'),
        ('array.svd', 'TEST_', 'reg', 'array_reg.h'),
        ('cluster.svd', 'TEST_', 'reg', 'cluster_reg.h'),
        ('enum.svd', 'TEST_', 'reg', 'enum_reg.h'),
        ('access.svd', 'TEST_', 'reg', 'access_reg.h'),
    ]

    for svd_file, prefix, output_type, output_filename_base in test_cases:
        with tempfile.TemporaryDirectory() as tmpdir:
            generated_file_path = os.path.join(tmpdir, output_filename_base)
            baseline_file_path = os.path.join('tests', 'baseline_output', output_filename_base)

            args = ['-s', os.path.join('tests', svd_file), '-p', prefix]
            if output_type == 'reg':
                args.extend(['-r', generated_file_path])
            elif output_type == 'map':
                args.extend(['-m', generated_file_path])
            args.append('-o') # Allow overwrite in temp directory

            result = run_svdtoheaders(args)
            assert result.returncode == 0, f"svdtoheaders failed for {svd_file} with prefix {prefix}: {result.stderr}"

            with open(generated_file_path, 'r') as f_gen, open(baseline_file_path, 'r') as f_base:
                generated_content = f_gen.read()
                baseline_content = f_base.read()
                assert generated_content == baseline_content, f"Output mismatch for {output_filename_base} from {svd_file} with prefix {prefix}"

