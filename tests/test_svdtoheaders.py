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
