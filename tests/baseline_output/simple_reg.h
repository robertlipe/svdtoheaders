
/* TEST_PERIPH - A test peripheral. */
#define TEST_TEST_PERIPH_BASE             0x40001000
#define TEST_TEST_PERIPH_CTRL_OFFSET      0x0004
#define TEST_TEST_PERIPH_CTRL             (TEST_TEST_PERIPH_BASE + TEST_TEST_PERIPH_CTRL_OFFSET) /* read-write */
#define TEST_TEST_PERIPH_CTRL_SINGLE      (1 <<  1) /* 00000002: A single bit field. */
#define TEST_TEST_PERIPH_CTRL_MULTI       (0xf << 8) /* 00000f00: A multi-bit field. */
#define TEST_TEST_PERIPH_CTRL_MULTI_MASK  (0xf << 8)
