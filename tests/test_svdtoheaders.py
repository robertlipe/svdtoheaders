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
