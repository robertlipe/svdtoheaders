
/* PWR - Power control */
#define CH32V003_PWR_BASE                 0x40007000
#define CH32V003_PWR_CTLR_OFFSET          0x0000
#define CH32V003_PWR_CTLR                 (CH32V003_PWR_BASE + CH32V003_PWR_CTLR_OFFSET)
#define CH32V003_PWR_CTLR_PDDS            (1 <<  1) /* 02: Power Down Deep Sleep */
#define CH32V003_PWR_CTLR_PVDE            (1 <<  4) /* 10: Power Voltage Detector Enable */
#define CH32V003_PWR_CTLR_PLS             (3 <<  5) /* 20: PVD Level Selection */
#define CH32V003_PWR_CTLR_PLS_MASK             (0x07)
#define CH32V003_PWR_CSR_OFFSET           0x0004
#define CH32V003_PWR_CSR                  (CH32V003_PWR_BASE + CH32V003_PWR_CSR_OFFSET)
#define CH32V003_PWR_CSR_PVDO             (1 <<  2) /* 04: PVD Output */
#define CH32V003_PWR_AWUCSR_OFFSET        0x0008
#define CH32V003_PWR_AWUCSR               (CH32V003_PWR_BASE + CH32V003_PWR_AWUCSR_OFFSET)
#define CH32V003_PWR_AWUCSR_AWUEN         (1 <<  1) /* 02: Automatic wake-up enable */
#define CH32V003_PWR_AWUAPR_OFFSET        0x000c
#define CH32V003_PWR_AWUAPR               (CH32V003_PWR_BASE + CH32V003_PWR_AWUAPR_OFFSET)
#define CH32V003_PWR_AWUAPR_AWUAPR        (6 <<  0) /* 01: AWU window value */
#define CH32V003_PWR_AWUAPR_AWUAPR_MASK        (0x3f)
#define CH32V003_PWR_AWUPSC_OFFSET        0x0010
#define CH32V003_PWR_AWUPSC               (CH32V003_PWR_BASE + CH32V003_PWR_AWUPSC_OFFSET)
#define CH32V003_PWR_AWUPSC_AWUPSC        (4 <<  0) /* 01: Wake-up prescaler */
#define CH32V003_PWR_AWUPSC_AWUPSC_MASK        (0x0f)

/* RCC - Reset and clock control */
#define CH32V003_RCC_BASE                 0x40021000
#define CH32V003_RCC_CTLR_OFFSET          0x0000
#define CH32V003_RCC_CTLR                 (CH32V003_RCC_BASE + CH32V003_RCC_CTLR_OFFSET)
#define CH32V003_RCC_CTLR_HSION           (1 <<  0) /* 01: Internal High Speed clock enable */
#define CH32V003_RCC_CTLR_HSIRDY          (1 <<  1) /* 02: Internal High Speed clock ready flag */
#define CH32V003_RCC_CTLR_HSITRIM         (5 <<  3) /* 08: Internal High Speed clock trimming */
#define CH32V003_RCC_CTLR_HSITRIM_MASK         (0x1f)
#define CH32V003_RCC_CTLR_HSICAL          (8 <<  8) /* 100: Internal High Speed clock Calibration */
#define CH32V003_RCC_CTLR_HSICAL_MASK          (0xff)
#define CH32V003_RCC_CTLR_HSEON           (1 << 16) /* 10000: External High Speed clock enable */
#define CH32V003_RCC_CTLR_HSERDY          (1 << 17) /* 20000: External High Speed clock ready flag */
#define CH32V003_RCC_CTLR_HSEBYP          (1 << 18) /* 40000: External High Speed clock Bypass */
#define CH32V003_RCC_CTLR_CSSON           (1 << 19) /* 80000: Clock Security System enable */
#define CH32V003_RCC_CTLR_PLLON           (1 << 24) /* 1000000: PLL enable */
#define CH32V003_RCC_CTLR_PLLRDY          (1 << 25) /* 2000000: PLL clock ready flag */
#define CH32V003_RCC_CFGR0_OFFSET         0x0004
#define CH32V003_RCC_CFGR0                (CH32V003_RCC_BASE + CH32V003_RCC_CFGR0_OFFSET)
#define CH32V003_RCC_CFGR0_SW             (2 <<  0) /* 01: System clock Switch */
#define CH32V003_RCC_CFGR0_SW_MASK             (0x03)
#define CH32V003_RCC_CFGR0_SWS            (2 <<  2) /* 04: System Clock Switch Status */
#define CH32V003_RCC_CFGR0_SWS_MASK            (0x03)
#define CH32V003_RCC_CFGR0_HPRE           (4 <<  4) /* 10: AHB prescaler */
#define CH32V003_RCC_CFGR0_HPRE_MASK           (0x0f)
#define CH32V003_RCC_CFGR0_PPRE1          (3 <<  8) /* 100: APB Low speed prescaler (APB1) */
#define CH32V003_RCC_CFGR0_PPRE1_MASK          (0x07)
#define CH32V003_RCC_CFGR0_PPRE2          (3 << 11) /* 800: APB High speed prescaler (APB2) */
#define CH32V003_RCC_CFGR0_PPRE2_MASK          (0x07)
#define CH32V003_RCC_CFGR0_ADCPRE         (2 << 14) /* 4000: ADC prescaler */
#define CH32V003_RCC_CFGR0_ADCPRE_MASK         (0x03)
#define CH32V003_RCC_CFGR0_PLLSRC         (1 << 16) /* 10000: PLL entry clock source */
#define CH32V003_RCC_CFGR0_MCO            (3 << 24) /* 1000000: Microcontroller clock output */
#define CH32V003_RCC_CFGR0_MCO_MASK            (0x07)
#define CH32V003_RCC_INTR_OFFSET          0x0008
#define CH32V003_RCC_INTR                 (CH32V003_RCC_BASE + CH32V003_RCC_INTR_OFFSET)
#define CH32V003_RCC_INTR_LSIRDYF         (1 <<  0) /* 01: LSI Ready Interrupt flag */
#define CH32V003_RCC_INTR_HSIRDYF         (1 <<  2) /* 04: HSI Ready Interrupt flag */
#define CH32V003_RCC_INTR_HSERDYF         (1 <<  3) /* 08: HSE Ready Interrupt flag */
#define CH32V003_RCC_INTR_PLLRDYF         (1 <<  4) /* 10: PLL Ready Interrupt flag */
#define CH32V003_RCC_INTR_CSSF            (1 <<  7) /* 80: Clock Security System Interrupt flag */
#define CH32V003_RCC_INTR_LSIRDYIE        (1 <<  8) /* 100: LSI Ready Interrupt Enable */
#define CH32V003_RCC_INTR_HSIRDYIE        (1 << 10) /* 400: HSI Ready Interrupt Enable */
#define CH32V003_RCC_INTR_HSERDYIE        (1 << 11) /* 800: HSE Ready Interrupt Enable */
#define CH32V003_RCC_INTR_PLLRDYIE        (1 << 12) /* 1000: PLL Ready Interrupt Enable */
#define CH32V003_RCC_INTR_LSIRDYC         (1 << 16) /* 10000: LSI Ready Interrupt Clear */
#define CH32V003_RCC_INTR_HSIRDYC         (1 << 18) /* 40000: HSI Ready Interrupt Clear */
#define CH32V003_RCC_INTR_HSERDYC         (1 << 19) /* 80000: HSE Ready Interrupt Clear */
#define CH32V003_RCC_INTR_PLLRDYC         (1 << 20) /* 100000: PLL Ready Interrupt Clear */
#define CH32V003_RCC_INTR_CSSC            (1 << 23) /* 800000: Clock security system interrupt clear */
#define CH32V003_RCC_APB2PRSTR_OFFSET     0x000c
#define CH32V003_RCC_APB2PRSTR            (CH32V003_RCC_BASE + CH32V003_RCC_APB2PRSTR_OFFSET)
#define CH32V003_RCC_APB2PRSTR_AFIORST    (1 <<  0) /* 01: Alternate function I/O reset */
#define CH32V003_RCC_APB2PRSTR_IOPARST    (1 <<  2) /* 04: IO port A reset */
#define CH32V003_RCC_APB2PRSTR_IOPCRST    (1 <<  4) /* 10: IO port C reset */
#define CH32V003_RCC_APB2PRSTR_IOPDRST    (1 <<  5) /* 20: IO port D reset */
#define CH32V003_RCC_APB2PRSTR_ADC1RST    (1 <<  9) /* 200: ADC 1 interface reset */
#define CH32V003_RCC_APB2PRSTR_TIM1RST    (1 << 11) /* 800: TIM1 timer reset */
#define CH32V003_RCC_APB2PRSTR_SPI1RST    (1 << 12) /* 1000: SPI 1 reset */
#define CH32V003_RCC_APB2PRSTR_USART1RST  (1 << 14) /* 4000: USART1 reset */
#define CH32V003_RCC_APB1PRSTR_OFFSET     0x0010
#define CH32V003_RCC_APB1PRSTR            (CH32V003_RCC_BASE + CH32V003_RCC_APB1PRSTR_OFFSET)
#define CH32V003_RCC_APB1PRSTR_WWDGRST    (1 << 11) /* 800: Window watchdog reset */
#define CH32V003_RCC_APB1PRSTR_I2C1RST    (1 << 21) /* 200000: I2C1 reset */
#define CH32V003_RCC_APB1PRSTR_PWRRST     (1 << 28) /* 10000000: Power interface reset */
#define CH32V003_RCC_AHBPCENR_OFFSET      0x0014
#define CH32V003_RCC_AHBPCENR             (CH32V003_RCC_BASE + CH32V003_RCC_AHBPCENR_OFFSET)
#define CH32V003_RCC_AHBPCENR_DMA1EN      (1 <<  0) /* 01: DMA clock enable */
#define CH32V003_RCC_AHBPCENR_SRAMEN      (1 <<  2) /* 04: SRAM interface clock enable */
#define CH32V003_RCC_APB2PCENR_OFFSET     0x0018
#define CH32V003_RCC_APB2PCENR            (CH32V003_RCC_BASE + CH32V003_RCC_APB2PCENR_OFFSET)
#define CH32V003_RCC_APB2PCENR_AFIOEN     (1 <<  0) /* 01: Alternate function I/O clock enable */
#define CH32V003_RCC_APB2PCENR_IOPAEN     (1 <<  2) /* 04: I/O port A clock enable */
#define CH32V003_RCC_APB2PCENR_IOPCEN     (1 <<  4) /* 10: I/O port C clock enable */
#define CH32V003_RCC_APB2PCENR_IOPDEN     (1 <<  5) /* 20: I/O port D clock enable */
#define CH32V003_RCC_APB2PCENR_ADC1EN     (1 <<  9) /* 200: ADC1 interface clock enable */
#define CH32V003_RCC_APB2PCENR_TIM1EN     (1 << 11) /* 800: TIM1 Timer clock enable */
#define CH32V003_RCC_APB2PCENR_SPI1EN     (1 << 12) /* 1000: SPI 1 clock enable */
#define CH32V003_RCC_APB2PCENR_USART1EN   (1 << 14) /* 4000: USART1 clock enable */
#define CH32V003_RCC_APB1PCENR_OFFSET     0x001c
#define CH32V003_RCC_APB1PCENR            (CH32V003_RCC_BASE + CH32V003_RCC_APB1PCENR_OFFSET)
#define CH32V003_RCC_APB1PCENR_TIM2EN     (1 <<  0) /* 01: Timer 2 clock enable */
#define CH32V003_RCC_APB1PCENR_WWDGEN     (1 << 11) /* 800: Window watchdog clock enable */
#define CH32V003_RCC_APB1PCENR_I2C1EN     (1 << 21) /* 200000: I2C 1 clock enable */
#define CH32V003_RCC_APB1PCENR_PWREN      (1 << 28) /* 10000000: Power interface clock enable */
#define CH32V003_RCC_RSTSCKR_OFFSET       0x0024
#define CH32V003_RCC_RSTSCKR              (CH32V003_RCC_BASE + CH32V003_RCC_RSTSCKR_OFFSET)
#define CH32V003_RCC_RSTSCKR_LSION        (1 <<  0) /* 01: Internal low speed oscillator enable */
#define CH32V003_RCC_RSTSCKR_LSIRDY       (1 <<  1) /* 02: Internal low speed oscillator ready */
#define CH32V003_RCC_RSTSCKR_RMVF         (1 << 24) /* 1000000: Remove reset flag */
#define CH32V003_RCC_RSTSCKR_PINRSTF      (1 << 26) /* 4000000: PIN reset flag */
#define CH32V003_RCC_RSTSCKR_PORRSTF      (1 << 27) /* 8000000: POR/PDR reset flag */
#define CH32V003_RCC_RSTSCKR_SFTRSTF      (1 << 28) /* 10000000: Software reset flag */
#define CH32V003_RCC_RSTSCKR_IWDGRSTF     (1 << 29) /* 20000000: Independent watchdog reset flag */
#define CH32V003_RCC_RSTSCKR_WWDGRSTF     (1 << 30) /* 40000000: Window watchdog reset flag */
#define CH32V003_RCC_RSTSCKR_LPWRRSTF     (1 << 31) /* 80000000: Low-power reset flag */

/* EXTEND - Extend configuration */
#define CH32V003_EXTEND_BASE              0x40023800
#define CH32V003_EXTEND_EXTEND_CTR_OFFSET 0x0000
#define CH32V003_EXTEND_EXTEND_CTR        (CH32V003_EXTEND_BASE + CH32V003_EXTEND_EXTEND_CTR_OFFSET)
#define CH32V003_EXTEND_EXTEND_CTR_PLL_CFG (4 <<  0) /* 01: Configure the PLL clock delay time */
#define CH32V003_EXTEND_EXTEND_CTR_PLL_CFG_MASK (0x0f)
#define CH32V003_EXTEND_EXTEND_CTR_LOCKUP_EN (1 <<  6) /* 40: LOCKUP_Enable */
#define CH32V003_EXTEND_EXTEND_CTR_LOCKUP_RESET (1 <<  7) /* 80: LOCKUP RESET */
#define CH32V003_EXTEND_EXTEND_CTR_LDO_TRIM (1 << 10) /* 400: LDO_TRIM */
#define CH32V003_EXTEND_EXTEND_CTR_FLASH_CLK_TRIM (3 << 11) /* 800: FLASH clock trimming */
#define CH32V003_EXTEND_EXTEND_CTR_FLASH_CLK_TRIM_MASK (0x07)
#define CH32V003_EXTEND_EXTEND_CTR_WR_EN  (1 << 14) /* 4000: Control Register write enable */
#define CH32V003_EXTEND_EXTEND_CTR_WR_LOCK (1 << 15) /* 8000: Control Register write lock */
#define CH32V003_EXTEND_EXTEND_CTR_OPA_EN (1 << 16) /* 10000: OPA Enalbe */
#define CH32V003_EXTEND_EXTEND_CTR_OPA_NSEL (1 << 17) /* 20000: OPA negative end channel selection */
#define CH32V003_EXTEND_EXTEND_CTR_OPA_PSEL (1 << 18) /* 40000: OPA positive end channel selection */
#define CH32V003_EXTEND_EXTEND_KR_OFFSET  0x0004
#define CH32V003_EXTEND_EXTEND_KR         (CH32V003_EXTEND_BASE + CH32V003_EXTEND_EXTEND_KR_OFFSET)
#define CH32V003_EXTEND_EXTEND_KR_KEY     (32 <<  0) /* 01: Write key value */
#define CH32V003_EXTEND_EXTEND_KR_KEY_MASK     (0xffffffff)

/* GPIOA - General purpose I/O */
#define CH32V003_GPIOA_BASE               0x40010800
#define CH32V003_GPIOA_CFGLR_OFFSET       0x0000
#define CH32V003_GPIOA_CFGLR              (CH32V003_GPIOA_BASE + CH32V003_GPIOA_CFGLR_OFFSET)
#define CH32V003_GPIOA_CFGLR_MODE0        (2 <<  0) /* 01: Port n.0 mode bits */
#define CH32V003_GPIOA_CFGLR_MODE0_MASK        (0x03)
#define CH32V003_GPIOA_CFGLR_CNF0         (2 <<  2) /* 04: Port n.0 configuration bits */
#define CH32V003_GPIOA_CFGLR_CNF0_MASK         (0x03)
#define CH32V003_GPIOA_CFGLR_MODE1        (2 <<  4) /* 10: Port n.1 mode bits */
#define CH32V003_GPIOA_CFGLR_MODE1_MASK        (0x03)
#define CH32V003_GPIOA_CFGLR_CNF1         (2 <<  6) /* 40: Port n.1 configuration bits */
#define CH32V003_GPIOA_CFGLR_CNF1_MASK         (0x03)
#define CH32V003_GPIOA_CFGLR_MODE2        (2 <<  8) /* 100: Port n.2 mode bits */
#define CH32V003_GPIOA_CFGLR_MODE2_MASK        (0x03)
#define CH32V003_GPIOA_CFGLR_CNF2         (2 << 10) /* 400: Port n.2 configuration bits */
#define CH32V003_GPIOA_CFGLR_CNF2_MASK         (0x03)
#define CH32V003_GPIOA_CFGLR_MODE3        (2 << 12) /* 1000: Port n.3 mode bits */
#define CH32V003_GPIOA_CFGLR_MODE3_MASK        (0x03)
#define CH32V003_GPIOA_CFGLR_CNF3         (2 << 14) /* 4000: Port n.3 configuration bits */
#define CH32V003_GPIOA_CFGLR_CNF3_MASK         (0x03)
#define CH32V003_GPIOA_CFGLR_MODE4        (2 << 16) /* 10000: Port n.4 mode bits */
#define CH32V003_GPIOA_CFGLR_MODE4_MASK        (0x03)
#define CH32V003_GPIOA_CFGLR_CNF4         (2 << 18) /* 40000: Port n.4 configuration bits */
#define CH32V003_GPIOA_CFGLR_CNF4_MASK         (0x03)
#define CH32V003_GPIOA_CFGLR_MODE5        (2 << 20) /* 100000: Port n.5 mode bits */
#define CH32V003_GPIOA_CFGLR_MODE5_MASK        (0x03)
#define CH32V003_GPIOA_CFGLR_CNF5         (2 << 22) /* 400000: Port n.5 configuration bits */
#define CH32V003_GPIOA_CFGLR_CNF5_MASK         (0x03)
#define CH32V003_GPIOA_CFGLR_MODE6        (2 << 24) /* 1000000: Port n.6 mode bits */
#define CH32V003_GPIOA_CFGLR_MODE6_MASK        (0x03)
#define CH32V003_GPIOA_CFGLR_CNF6         (2 << 26) /* 4000000: Port n.6 configuration bits */
#define CH32V003_GPIOA_CFGLR_CNF6_MASK         (0x03)
#define CH32V003_GPIOA_CFGLR_MODE7        (2 << 28) /* 10000000: Port n.7 mode bits */
#define CH32V003_GPIOA_CFGLR_MODE7_MASK        (0x03)
#define CH32V003_GPIOA_CFGLR_CNF7         (2 << 30) /* 40000000: Port n.7 configuration bits */
#define CH32V003_GPIOA_CFGLR_CNF7_MASK         (0x03)
#define CH32V003_GPIOA_INDR_OFFSET        0x0008
#define CH32V003_GPIOA_INDR               (CH32V003_GPIOA_BASE + CH32V003_GPIOA_INDR_OFFSET)
#define CH32V003_GPIOA_INDR_IDR0          (1 <<  0) /* 01: Port input data */
#define CH32V003_GPIOA_INDR_IDR1          (1 <<  1) /* 02: Port input data */
#define CH32V003_GPIOA_INDR_IDR2          (1 <<  2) /* 04: Port input data */
#define CH32V003_GPIOA_INDR_IDR3          (1 <<  3) /* 08: Port input data */
#define CH32V003_GPIOA_INDR_IDR4          (1 <<  4) /* 10: Port input data */
#define CH32V003_GPIOA_INDR_IDR5          (1 <<  5) /* 20: Port input data */
#define CH32V003_GPIOA_INDR_IDR6          (1 <<  6) /* 40: Port input data */
#define CH32V003_GPIOA_INDR_IDR7          (1 <<  7) /* 80: Port input data */
#define CH32V003_GPIOA_OUTDR_OFFSET       0x000c
#define CH32V003_GPIOA_OUTDR              (CH32V003_GPIOA_BASE + CH32V003_GPIOA_OUTDR_OFFSET)
#define CH32V003_GPIOA_OUTDR_ODR0         (1 <<  0) /* 01: Port output data */
#define CH32V003_GPIOA_OUTDR_ODR1         (1 <<  1) /* 02: Port output data */
#define CH32V003_GPIOA_OUTDR_ODR2         (1 <<  2) /* 04: Port output data */
#define CH32V003_GPIOA_OUTDR_ODR3         (1 <<  3) /* 08: Port output data */
#define CH32V003_GPIOA_OUTDR_ODR4         (1 <<  4) /* 10: Port output data */
#define CH32V003_GPIOA_OUTDR_ODR5         (1 <<  5) /* 20: Port output data */
#define CH32V003_GPIOA_OUTDR_ODR6         (1 <<  6) /* 40: Port output data */
#define CH32V003_GPIOA_OUTDR_ODR7         (1 <<  7) /* 80: Port output data */
#define CH32V003_GPIOA_BSHR_OFFSET        0x0010
#define CH32V003_GPIOA_BSHR               (CH32V003_GPIOA_BASE + CH32V003_GPIOA_BSHR_OFFSET)
#define CH32V003_GPIOA_BSHR_BS0           (1 <<  0) /* 01: Set bit 0 */
#define CH32V003_GPIOA_BSHR_BS1           (1 <<  1) /* 02: Set bit 1 */
#define CH32V003_GPIOA_BSHR_BS2           (1 <<  2) /* 04: Set bit 1 */
#define CH32V003_GPIOA_BSHR_BS3           (1 <<  3) /* 08: Set bit 3 */
#define CH32V003_GPIOA_BSHR_BS4           (1 <<  4) /* 10: Set bit 4 */
#define CH32V003_GPIOA_BSHR_BS5           (1 <<  5) /* 20: Set bit 5 */
#define CH32V003_GPIOA_BSHR_BS6           (1 <<  6) /* 40: Set bit 6 */
#define CH32V003_GPIOA_BSHR_BS7           (1 <<  7) /* 80: Set bit 7 */
#define CH32V003_GPIOA_BSHR_BR0           (1 << 16) /* 10000: Reset bit 0 */
#define CH32V003_GPIOA_BSHR_BR1           (1 << 17) /* 20000: Reset bit 1 */
#define CH32V003_GPIOA_BSHR_BR2           (1 << 18) /* 40000: Reset bit 2 */
#define CH32V003_GPIOA_BSHR_BR3           (1 << 19) /* 80000: Reset bit 3 */
#define CH32V003_GPIOA_BSHR_BR4           (1 << 20) /* 100000: Reset bit 4 */
#define CH32V003_GPIOA_BSHR_BR5           (1 << 21) /* 200000: Reset bit 5 */
#define CH32V003_GPIOA_BSHR_BR6           (1 << 22) /* 400000: Reset bit 6 */
#define CH32V003_GPIOA_BSHR_BR7           (1 << 23) /* 800000: Reset bit 7 */
#define CH32V003_GPIOA_BCR_OFFSET         0x0014
#define CH32V003_GPIOA_BCR                (CH32V003_GPIOA_BASE + CH32V003_GPIOA_BCR_OFFSET)
#define CH32V003_GPIOA_BCR_BR0            (1 <<  0) /* 01: Reset bit 0 */
#define CH32V003_GPIOA_BCR_BR1            (1 <<  1) /* 02: Reset bit 1 */
#define CH32V003_GPIOA_BCR_BR2            (1 <<  2) /* 04: Reset bit 1 */
#define CH32V003_GPIOA_BCR_BR3            (1 <<  3) /* 08: Reset bit 3 */
#define CH32V003_GPIOA_BCR_BR4            (1 <<  4) /* 10: Reset bit 4 */
#define CH32V003_GPIOA_BCR_BR5            (1 <<  5) /* 20: Reset bit 5 */
#define CH32V003_GPIOA_BCR_BR6            (1 <<  6) /* 40: Reset bit 6 */
#define CH32V003_GPIOA_BCR_BR7            (1 <<  7) /* 80: Reset bit 7 */
#define CH32V003_GPIOA_LCKR_OFFSET        0x0018
#define CH32V003_GPIOA_LCKR               (CH32V003_GPIOA_BASE + CH32V003_GPIOA_LCKR_OFFSET)
#define CH32V003_GPIOA_LCKR_LCK0          (1 <<  0) /* 01: Port A Lock bit 0 */
#define CH32V003_GPIOA_LCKR_LCK1          (1 <<  1) /* 02: Port A Lock bit 1 */
#define CH32V003_GPIOA_LCKR_LCK2          (1 <<  2) /* 04: Port A Lock bit 2 */
#define CH32V003_GPIOA_LCKR_LCK3          (1 <<  3) /* 08: Port A Lock bit 3 */
#define CH32V003_GPIOA_LCKR_LCK4          (1 <<  4) /* 10: Port A Lock bit 4 */
#define CH32V003_GPIOA_LCKR_LCK5          (1 <<  5) /* 20: Port A Lock bit 5 */
#define CH32V003_GPIOA_LCKR_LCK6          (1 <<  6) /* 40: Port A Lock bit 6 */
#define CH32V003_GPIOA_LCKR_LCK7          (1 <<  7) /* 80: Port A Lock bit 7 */
#define CH32V003_GPIOA_LCKR_LCKK          (1 <<  8) /* 100: Lock key */

/* No registers defined for peripheral GPIOC. Using those of GPIOA. */
#define CH32V003_GPIOC_BASE               0x40011000
#define CH32V003_GPIOC_CFGLR_OFFSET       CH32V003_GPIOA_CFGLR_OFFSET
#define CH32V003_GPIOC_CFGLR              CH32V003_GPIOA_CFGLR
#define CH32V003_GPIOC_CFGLR_MODE0        CH32V003_GPIOA_CFGLR_MODE0
#define CH32V003_GPIOC_CFGLR_MODE0_MASK   CH32V003_GPIOA_CFGLR_MODE0_MASK
#define CH32V003_GPIOC_CFGLR_CNF0         CH32V003_GPIOA_CFGLR_CNF0
#define CH32V003_GPIOC_CFGLR_CNF0_MASK    CH32V003_GPIOA_CFGLR_CNF0_MASK
#define CH32V003_GPIOC_CFGLR_MODE1        CH32V003_GPIOA_CFGLR_MODE1
#define CH32V003_GPIOC_CFGLR_MODE1_MASK   CH32V003_GPIOA_CFGLR_MODE1_MASK
#define CH32V003_GPIOC_CFGLR_CNF1         CH32V003_GPIOA_CFGLR_CNF1
#define CH32V003_GPIOC_CFGLR_CNF1_MASK    CH32V003_GPIOA_CFGLR_CNF1_MASK
#define CH32V003_GPIOC_CFGLR_MODE2        CH32V003_GPIOA_CFGLR_MODE2
#define CH32V003_GPIOC_CFGLR_MODE2_MASK   CH32V003_GPIOA_CFGLR_MODE2_MASK
#define CH32V003_GPIOC_CFGLR_CNF2         CH32V003_GPIOA_CFGLR_CNF2
#define CH32V003_GPIOC_CFGLR_CNF2_MASK    CH32V003_GPIOA_CFGLR_CNF2_MASK
#define CH32V003_GPIOC_CFGLR_MODE3        CH32V003_GPIOA_CFGLR_MODE3
#define CH32V003_GPIOC_CFGLR_MODE3_MASK   CH32V003_GPIOA_CFGLR_MODE3_MASK
#define CH32V003_GPIOC_CFGLR_CNF3         CH32V003_GPIOA_CFGLR_CNF3
#define CH32V003_GPIOC_CFGLR_CNF3_MASK    CH32V003_GPIOA_CFGLR_CNF3_MASK
#define CH32V003_GPIOC_CFGLR_MODE4        CH32V003_GPIOA_CFGLR_MODE4
#define CH32V003_GPIOC_CFGLR_MODE4_MASK   CH32V003_GPIOA_CFGLR_MODE4_MASK
#define CH32V003_GPIOC_CFGLR_CNF4         CH32V003_GPIOA_CFGLR_CNF4
#define CH32V003_GPIOC_CFGLR_CNF4_MASK    CH32V003_GPIOA_CFGLR_CNF4_MASK
#define CH32V003_GPIOC_CFGLR_MODE5        CH32V003_GPIOA_CFGLR_MODE5
#define CH32V003_GPIOC_CFGLR_MODE5_MASK   CH32V003_GPIOA_CFGLR_MODE5_MASK
#define CH32V003_GPIOC_CFGLR_CNF5         CH32V003_GPIOA_CFGLR_CNF5
#define CH32V003_GPIOC_CFGLR_CNF5_MASK    CH32V003_GPIOA_CFGLR_CNF5_MASK
#define CH32V003_GPIOC_CFGLR_MODE6        CH32V003_GPIOA_CFGLR_MODE6
#define CH32V003_GPIOC_CFGLR_MODE6_MASK   CH32V003_GPIOA_CFGLR_MODE6_MASK
#define CH32V003_GPIOC_CFGLR_CNF6         CH32V003_GPIOA_CFGLR_CNF6
#define CH32V003_GPIOC_CFGLR_CNF6_MASK    CH32V003_GPIOA_CFGLR_CNF6_MASK
#define CH32V003_GPIOC_CFGLR_MODE7        CH32V003_GPIOA_CFGLR_MODE7
#define CH32V003_GPIOC_CFGLR_MODE7_MASK   CH32V003_GPIOA_CFGLR_MODE7_MASK
#define CH32V003_GPIOC_CFGLR_CNF7         CH32V003_GPIOA_CFGLR_CNF7
#define CH32V003_GPIOC_CFGLR_CNF7_MASK    CH32V003_GPIOA_CFGLR_CNF7_MASK
#define CH32V003_GPIOC_INDR_OFFSET        CH32V003_GPIOA_INDR_OFFSET
#define CH32V003_GPIOC_INDR               CH32V003_GPIOA_INDR
#define CH32V003_GPIOC_INDR_IDR0          CH32V003_GPIOA_INDR_IDR0
#define CH32V003_GPIOC_INDR_IDR1          CH32V003_GPIOA_INDR_IDR1
#define CH32V003_GPIOC_INDR_IDR2          CH32V003_GPIOA_INDR_IDR2
#define CH32V003_GPIOC_INDR_IDR3          CH32V003_GPIOA_INDR_IDR3
#define CH32V003_GPIOC_INDR_IDR4          CH32V003_GPIOA_INDR_IDR4
#define CH32V003_GPIOC_INDR_IDR5          CH32V003_GPIOA_INDR_IDR5
#define CH32V003_GPIOC_INDR_IDR6          CH32V003_GPIOA_INDR_IDR6
#define CH32V003_GPIOC_INDR_IDR7          CH32V003_GPIOA_INDR_IDR7
#define CH32V003_GPIOC_OUTDR_OFFSET       CH32V003_GPIOA_OUTDR_OFFSET
#define CH32V003_GPIOC_OUTDR              CH32V003_GPIOA_OUTDR
#define CH32V003_GPIOC_OUTDR_ODR0         CH32V003_GPIOA_OUTDR_ODR0
#define CH32V003_GPIOC_OUTDR_ODR1         CH32V003_GPIOA_OUTDR_ODR1
#define CH32V003_GPIOC_OUTDR_ODR2         CH32V003_GPIOA_OUTDR_ODR2
#define CH32V003_GPIOC_OUTDR_ODR3         CH32V003_GPIOA_OUTDR_ODR3
#define CH32V003_GPIOC_OUTDR_ODR4         CH32V003_GPIOA_OUTDR_ODR4
#define CH32V003_GPIOC_OUTDR_ODR5         CH32V003_GPIOA_OUTDR_ODR5
#define CH32V003_GPIOC_OUTDR_ODR6         CH32V003_GPIOA_OUTDR_ODR6
#define CH32V003_GPIOC_OUTDR_ODR7         CH32V003_GPIOA_OUTDR_ODR7
#define CH32V003_GPIOC_BSHR_OFFSET        CH32V003_GPIOA_BSHR_OFFSET
#define CH32V003_GPIOC_BSHR               CH32V003_GPIOA_BSHR
#define CH32V003_GPIOC_BSHR_BS0           CH32V003_GPIOA_BSHR_BS0
#define CH32V003_GPIOC_BSHR_BS1           CH32V003_GPIOA_BSHR_BS1
#define CH32V003_GPIOC_BSHR_BS2           CH32V003_GPIOA_BSHR_BS2
#define CH32V003_GPIOC_BSHR_BS3           CH32V003_GPIOA_BSHR_BS3
#define CH32V003_GPIOC_BSHR_BS4           CH32V003_GPIOA_BSHR_BS4
#define CH32V003_GPIOC_BSHR_BS5           CH32V003_GPIOA_BSHR_BS5
#define CH32V003_GPIOC_BSHR_BS6           CH32V003_GPIOA_BSHR_BS6
#define CH32V003_GPIOC_BSHR_BS7           CH32V003_GPIOA_BSHR_BS7
#define CH32V003_GPIOC_BSHR_BR0           CH32V003_GPIOA_BSHR_BR0
#define CH32V003_GPIOC_BSHR_BR1           CH32V003_GPIOA_BSHR_BR1
#define CH32V003_GPIOC_BSHR_BR2           CH32V003_GPIOA_BSHR_BR2
#define CH32V003_GPIOC_BSHR_BR3           CH32V003_GPIOA_BSHR_BR3
#define CH32V003_GPIOC_BSHR_BR4           CH32V003_GPIOA_BSHR_BR4
#define CH32V003_GPIOC_BSHR_BR5           CH32V003_GPIOA_BSHR_BR5
#define CH32V003_GPIOC_BSHR_BR6           CH32V003_GPIOA_BSHR_BR6
#define CH32V003_GPIOC_BSHR_BR7           CH32V003_GPIOA_BSHR_BR7
#define CH32V003_GPIOC_BCR_OFFSET         CH32V003_GPIOA_BCR_OFFSET
#define CH32V003_GPIOC_BCR                CH32V003_GPIOA_BCR
#define CH32V003_GPIOC_BCR_BR0            CH32V003_GPIOA_BCR_BR0
#define CH32V003_GPIOC_BCR_BR1            CH32V003_GPIOA_BCR_BR1
#define CH32V003_GPIOC_BCR_BR2            CH32V003_GPIOA_BCR_BR2
#define CH32V003_GPIOC_BCR_BR3            CH32V003_GPIOA_BCR_BR3
#define CH32V003_GPIOC_BCR_BR4            CH32V003_GPIOA_BCR_BR4
#define CH32V003_GPIOC_BCR_BR5            CH32V003_GPIOA_BCR_BR5
#define CH32V003_GPIOC_BCR_BR6            CH32V003_GPIOA_BCR_BR6
#define CH32V003_GPIOC_BCR_BR7            CH32V003_GPIOA_BCR_BR7
#define CH32V003_GPIOC_LCKR_OFFSET        CH32V003_GPIOA_LCKR_OFFSET
#define CH32V003_GPIOC_LCKR               CH32V003_GPIOA_LCKR
#define CH32V003_GPIOC_LCKR_LCK0          CH32V003_GPIOA_LCKR_LCK0
#define CH32V003_GPIOC_LCKR_LCK1          CH32V003_GPIOA_LCKR_LCK1
#define CH32V003_GPIOC_LCKR_LCK2          CH32V003_GPIOA_LCKR_LCK2
#define CH32V003_GPIOC_LCKR_LCK3          CH32V003_GPIOA_LCKR_LCK3
#define CH32V003_GPIOC_LCKR_LCK4          CH32V003_GPIOA_LCKR_LCK4
#define CH32V003_GPIOC_LCKR_LCK5          CH32V003_GPIOA_LCKR_LCK5
#define CH32V003_GPIOC_LCKR_LCK6          CH32V003_GPIOA_LCKR_LCK6
#define CH32V003_GPIOC_LCKR_LCK7          CH32V003_GPIOA_LCKR_LCK7
#define CH32V003_GPIOC_LCKR_LCKK          CH32V003_GPIOA_LCKR_LCKK

/* No registers defined for peripheral GPIOD. Using those of GPIOA. */
#define CH32V003_GPIOD_BASE               0x40011400
#define CH32V003_GPIOD_CFGLR_OFFSET       CH32V003_GPIOA_CFGLR_OFFSET
#define CH32V003_GPIOD_CFGLR              CH32V003_GPIOA_CFGLR
#define CH32V003_GPIOD_CFGLR_MODE0        CH32V003_GPIOA_CFGLR_MODE0
#define CH32V003_GPIOD_CFGLR_MODE0_MASK   CH32V003_GPIOA_CFGLR_MODE0_MASK
#define CH32V003_GPIOD_CFGLR_CNF0         CH32V003_GPIOA_CFGLR_CNF0
#define CH32V003_GPIOD_CFGLR_CNF0_MASK    CH32V003_GPIOA_CFGLR_CNF0_MASK
#define CH32V003_GPIOD_CFGLR_MODE1        CH32V003_GPIOA_CFGLR_MODE1
#define CH32V003_GPIOD_CFGLR_MODE1_MASK   CH32V003_GPIOA_CFGLR_MODE1_MASK
#define CH32V003_GPIOD_CFGLR_CNF1         CH32V003_GPIOA_CFGLR_CNF1
#define CH32V003_GPIOD_CFGLR_CNF1_MASK    CH32V003_GPIOA_CFGLR_CNF1_MASK
#define CH32V003_GPIOD_CFGLR_MODE2        CH32V003_GPIOA_CFGLR_MODE2
#define CH32V003_GPIOD_CFGLR_MODE2_MASK   CH32V003_GPIOA_CFGLR_MODE2_MASK
#define CH32V003_GPIOD_CFGLR_CNF2         CH32V003_GPIOA_CFGLR_CNF2
#define CH32V003_GPIOD_CFGLR_CNF2_MASK    CH32V003_GPIOA_CFGLR_CNF2_MASK
#define CH32V003_GPIOD_CFGLR_MODE3        CH32V003_GPIOA_CFGLR_MODE3
#define CH32V003_GPIOD_CFGLR_MODE3_MASK   CH32V003_GPIOA_CFGLR_MODE3_MASK
#define CH32V003_GPIOD_CFGLR_CNF3         CH32V003_GPIOA_CFGLR_CNF3
#define CH32V003_GPIOD_CFGLR_CNF3_MASK    CH32V003_GPIOA_CFGLR_CNF3_MASK
#define CH32V003_GPIOD_CFGLR_MODE4        CH32V003_GPIOA_CFGLR_MODE4
#define CH32V003_GPIOD_CFGLR_MODE4_MASK   CH32V003_GPIOA_CFGLR_MODE4_MASK
#define CH32V003_GPIOD_CFGLR_CNF4         CH32V003_GPIOA_CFGLR_CNF4
#define CH32V003_GPIOD_CFGLR_CNF4_MASK    CH32V003_GPIOA_CFGLR_CNF4_MASK
#define CH32V003_GPIOD_CFGLR_MODE5        CH32V003_GPIOA_CFGLR_MODE5
#define CH32V003_GPIOD_CFGLR_MODE5_MASK   CH32V003_GPIOA_CFGLR_MODE5_MASK
#define CH32V003_GPIOD_CFGLR_CNF5         CH32V003_GPIOA_CFGLR_CNF5
#define CH32V003_GPIOD_CFGLR_CNF5_MASK    CH32V003_GPIOA_CFGLR_CNF5_MASK
#define CH32V003_GPIOD_CFGLR_MODE6        CH32V003_GPIOA_CFGLR_MODE6
#define CH32V003_GPIOD_CFGLR_MODE6_MASK   CH32V003_GPIOA_CFGLR_MODE6_MASK
#define CH32V003_GPIOD_CFGLR_CNF6         CH32V003_GPIOA_CFGLR_CNF6
#define CH32V003_GPIOD_CFGLR_CNF6_MASK    CH32V003_GPIOA_CFGLR_CNF6_MASK
#define CH32V003_GPIOD_CFGLR_MODE7        CH32V003_GPIOA_CFGLR_MODE7
#define CH32V003_GPIOD_CFGLR_MODE7_MASK   CH32V003_GPIOA_CFGLR_MODE7_MASK
#define CH32V003_GPIOD_CFGLR_CNF7         CH32V003_GPIOA_CFGLR_CNF7
#define CH32V003_GPIOD_CFGLR_CNF7_MASK    CH32V003_GPIOA_CFGLR_CNF7_MASK
#define CH32V003_GPIOD_INDR_OFFSET        CH32V003_GPIOA_INDR_OFFSET
#define CH32V003_GPIOD_INDR               CH32V003_GPIOA_INDR
#define CH32V003_GPIOD_INDR_IDR0          CH32V003_GPIOA_INDR_IDR0
#define CH32V003_GPIOD_INDR_IDR1          CH32V003_GPIOA_INDR_IDR1
#define CH32V003_GPIOD_INDR_IDR2          CH32V003_GPIOA_INDR_IDR2
#define CH32V003_GPIOD_INDR_IDR3          CH32V003_GPIOA_INDR_IDR3
#define CH32V003_GPIOD_INDR_IDR4          CH32V003_GPIOA_INDR_IDR4
#define CH32V003_GPIOD_INDR_IDR5          CH32V003_GPIOA_INDR_IDR5
#define CH32V003_GPIOD_INDR_IDR6          CH32V003_GPIOA_INDR_IDR6
#define CH32V003_GPIOD_INDR_IDR7          CH32V003_GPIOA_INDR_IDR7
#define CH32V003_GPIOD_OUTDR_OFFSET       CH32V003_GPIOA_OUTDR_OFFSET
#define CH32V003_GPIOD_OUTDR              CH32V003_GPIOA_OUTDR
#define CH32V003_GPIOD_OUTDR_ODR0         CH32V003_GPIOA_OUTDR_ODR0
#define CH32V003_GPIOD_OUTDR_ODR1         CH32V003_GPIOA_OUTDR_ODR1
#define CH32V003_GPIOD_OUTDR_ODR2         CH32V003_GPIOA_OUTDR_ODR2
#define CH32V003_GPIOD_OUTDR_ODR3         CH32V003_GPIOA_OUTDR_ODR3
#define CH32V003_GPIOD_OUTDR_ODR4         CH32V003_GPIOA_OUTDR_ODR4
#define CH32V003_GPIOD_OUTDR_ODR5         CH32V003_GPIOA_OUTDR_ODR5
#define CH32V003_GPIOD_OUTDR_ODR6         CH32V003_GPIOA_OUTDR_ODR6
#define CH32V003_GPIOD_OUTDR_ODR7         CH32V003_GPIOA_OUTDR_ODR7
#define CH32V003_GPIOD_BSHR_OFFSET        CH32V003_GPIOA_BSHR_OFFSET
#define CH32V003_GPIOD_BSHR               CH32V003_GPIOA_BSHR
#define CH32V003_GPIOD_BSHR_BS0           CH32V003_GPIOA_BSHR_BS0
#define CH32V003_GPIOD_BSHR_BS1           CH32V003_GPIOA_BSHR_BS1
#define CH32V003_GPIOD_BSHR_BS2           CH32V003_GPIOA_BSHR_BS2
#define CH32V003_GPIOD_BSHR_BS3           CH32V003_GPIOA_BSHR_BS3
#define CH32V003_GPIOD_BSHR_BS4           CH32V003_GPIOA_BSHR_BS4
#define CH32V003_GPIOD_BSHR_BS5           CH32V003_GPIOA_BSHR_BS5
#define CH32V003_GPIOD_BSHR_BS6           CH32V003_GPIOA_BSHR_BS6
#define CH32V003_GPIOD_BSHR_BS7           CH32V003_GPIOA_BSHR_BS7
#define CH32V003_GPIOD_BSHR_BR0           CH32V003_GPIOA_BSHR_BR0
#define CH32V003_GPIOD_BSHR_BR1           CH32V003_GPIOA_BSHR_BR1
#define CH32V003_GPIOD_BSHR_BR2           CH32V003_GPIOA_BSHR_BR2
#define CH32V003_GPIOD_BSHR_BR3           CH32V003_GPIOA_BSHR_BR3
#define CH32V003_GPIOD_BSHR_BR4           CH32V003_GPIOA_BSHR_BR4
#define CH32V003_GPIOD_BSHR_BR5           CH32V003_GPIOA_BSHR_BR5
#define CH32V003_GPIOD_BSHR_BR6           CH32V003_GPIOA_BSHR_BR6
#define CH32V003_GPIOD_BSHR_BR7           CH32V003_GPIOA_BSHR_BR7
#define CH32V003_GPIOD_BCR_OFFSET         CH32V003_GPIOA_BCR_OFFSET
#define CH32V003_GPIOD_BCR                CH32V003_GPIOA_BCR
#define CH32V003_GPIOD_BCR_BR0            CH32V003_GPIOA_BCR_BR0
#define CH32V003_GPIOD_BCR_BR1            CH32V003_GPIOA_BCR_BR1
#define CH32V003_GPIOD_BCR_BR2            CH32V003_GPIOA_BCR_BR2
#define CH32V003_GPIOD_BCR_BR3            CH32V003_GPIOA_BCR_BR3
#define CH32V003_GPIOD_BCR_BR4            CH32V003_GPIOA_BCR_BR4
#define CH32V003_GPIOD_BCR_BR5            CH32V003_GPIOA_BCR_BR5
#define CH32V003_GPIOD_BCR_BR6            CH32V003_GPIOA_BCR_BR6
#define CH32V003_GPIOD_BCR_BR7            CH32V003_GPIOA_BCR_BR7
#define CH32V003_GPIOD_LCKR_OFFSET        CH32V003_GPIOA_LCKR_OFFSET
#define CH32V003_GPIOD_LCKR               CH32V003_GPIOA_LCKR
#define CH32V003_GPIOD_LCKR_LCK0          CH32V003_GPIOA_LCKR_LCK0
#define CH32V003_GPIOD_LCKR_LCK1          CH32V003_GPIOA_LCKR_LCK1
#define CH32V003_GPIOD_LCKR_LCK2          CH32V003_GPIOA_LCKR_LCK2
#define CH32V003_GPIOD_LCKR_LCK3          CH32V003_GPIOA_LCKR_LCK3
#define CH32V003_GPIOD_LCKR_LCK4          CH32V003_GPIOA_LCKR_LCK4
#define CH32V003_GPIOD_LCKR_LCK5          CH32V003_GPIOA_LCKR_LCK5
#define CH32V003_GPIOD_LCKR_LCK6          CH32V003_GPIOA_LCKR_LCK6
#define CH32V003_GPIOD_LCKR_LCK7          CH32V003_GPIOA_LCKR_LCK7
#define CH32V003_GPIOD_LCKR_LCKK          CH32V003_GPIOA_LCKR_LCKK

/* AFIO - Alternate function I/O */
#define CH32V003_AFIO_BASE                0x40010000
#define CH32V003_AFIO_PCFR_OFFSET         0x0004
#define CH32V003_AFIO_PCFR                (CH32V003_AFIO_BASE + CH32V003_AFIO_PCFR_OFFSET)
#define CH32V003_AFIO_PCFR_SPI1RM         (1 <<  0) /* 01: SPI1 remapping */
#define CH32V003_AFIO_PCFR_I2C1RM         (1 <<  1) /* 02: I2C1 remapping */
#define CH32V003_AFIO_PCFR_USART1RM       (1 <<  2) /* 04: USART1 remapping */
#define CH32V003_AFIO_PCFR_TIM1RM         (2 <<  6) /* 40: TIM1 remapping */
#define CH32V003_AFIO_PCFR_TIM1RM_MASK         (0x03)
#define CH32V003_AFIO_PCFR_TIM2RM         (2 <<  8) /* 100: TIM2 remapping */
#define CH32V003_AFIO_PCFR_TIM2RM_MASK         (0x03)
#define CH32V003_AFIO_PCFR_PA12RM         (1 << 15) /* 8000: Port A1/Port A2 mapping on OSCIN/OSCOUT */
#define CH32V003_AFIO_PCFR_ADC1_ETRGINJ_RM (1 << 17) /* 20000: ADC 1 External trigger injected conversion remapping */
#define CH32V003_AFIO_PCFR_ADC1_ETRGREG_RM (1 << 18) /* 40000: ADC 1 external trigger regular conversion remapping */
#define CH32V003_AFIO_PCFR_USART1REMAP1   (1 << 21) /* 200000: USART1 remapping */
#define CH32V003_AFIO_PCFR_I2C1REMAP1     (1 << 22) /* 400000: I2C1 remapping */
#define CH32V003_AFIO_PCFR_TIM1_IREMAP    (1 << 23) /* 800000: TIM1_CH1 channel selection */
#define CH32V003_AFIO_PCFR_SWCFG          (3 << 24) /* 1000000: Serial wire JTAG configuration */
#define CH32V003_AFIO_PCFR_SWCFG_MASK          (0x07)
#define CH32V003_AFIO_EXTICR_OFFSET       0x0008
#define CH32V003_AFIO_EXTICR              (CH32V003_AFIO_BASE + CH32V003_AFIO_EXTICR_OFFSET)
#define CH32V003_AFIO_EXTICR_EXTI0        (2 <<  0) /* 01: EXTI0 configuration */
#define CH32V003_AFIO_EXTICR_EXTI0_MASK        (0x03)
#define CH32V003_AFIO_EXTICR_EXTI1        (2 <<  2) /* 04: EXTI1 configuration */
#define CH32V003_AFIO_EXTICR_EXTI1_MASK        (0x03)
#define CH32V003_AFIO_EXTICR_EXTI2        (2 <<  4) /* 10: EXTI2 configuration */
#define CH32V003_AFIO_EXTICR_EXTI2_MASK        (0x03)
#define CH32V003_AFIO_EXTICR_EXTI3        (2 <<  6) /* 40: EXTI3 configuration */
#define CH32V003_AFIO_EXTICR_EXTI3_MASK        (0x03)
#define CH32V003_AFIO_EXTICR_EXTI4        (2 <<  8) /* 100: EXTI4 configuration */
#define CH32V003_AFIO_EXTICR_EXTI4_MASK        (0x03)
#define CH32V003_AFIO_EXTICR_EXTI5        (2 << 10) /* 400: EXTI5 configuration */
#define CH32V003_AFIO_EXTICR_EXTI5_MASK        (0x03)
#define CH32V003_AFIO_EXTICR_EXTI6        (2 << 12) /* 1000: EXTI6 configuration */
#define CH32V003_AFIO_EXTICR_EXTI6_MASK        (0x03)
#define CH32V003_AFIO_EXTICR_EXTI7        (2 << 14) /* 4000: EXTI7 configuration */
#define CH32V003_AFIO_EXTICR_EXTI7_MASK        (0x03)

/* EXTI - EXTI */
#define CH32V003_EXTI_BASE                0x40010400
#define CH32V003_EXTI_INTENR_OFFSET       0x0000
#define CH32V003_EXTI_INTENR              (CH32V003_EXTI_BASE + CH32V003_EXTI_INTENR_OFFSET)
#define CH32V003_EXTI_INTENR_MR0          (1 <<  0) /* 01: Interrupt Mask on line 0 */
#define CH32V003_EXTI_INTENR_MR1          (1 <<  1) /* 02: Interrupt Mask on line 1 */
#define CH32V003_EXTI_INTENR_MR2          (1 <<  2) /* 04: Interrupt Mask on line 2 */
#define CH32V003_EXTI_INTENR_MR3          (1 <<  3) /* 08: Interrupt Mask on line 3 */
#define CH32V003_EXTI_INTENR_MR4          (1 <<  4) /* 10: Interrupt Mask on line 4 */
#define CH32V003_EXTI_INTENR_MR5          (1 <<  5) /* 20: Interrupt Mask on line 5 */
#define CH32V003_EXTI_INTENR_MR6          (1 <<  6) /* 40: Interrupt Mask on line 6 */
#define CH32V003_EXTI_INTENR_MR7          (1 <<  7) /* 80: Interrupt Mask on line 7 */
#define CH32V003_EXTI_INTENR_MR8          (1 <<  8) /* 100: Interrupt Mask on line 8 */
#define CH32V003_EXTI_INTENR_MR9          (1 <<  9) /* 200: Interrupt Mask on line 9 */
#define CH32V003_EXTI_EVENR_OFFSET        0x0004
#define CH32V003_EXTI_EVENR               (CH32V003_EXTI_BASE + CH32V003_EXTI_EVENR_OFFSET)
#define CH32V003_EXTI_EVENR_MR0           (1 <<  0) /* 01: Event Mask on line 0 */
#define CH32V003_EXTI_EVENR_MR1           (1 <<  1) /* 02: Event Mask on line 1 */
#define CH32V003_EXTI_EVENR_MR2           (1 <<  2) /* 04: Event Mask on line 2 */
#define CH32V003_EXTI_EVENR_MR3           (1 <<  3) /* 08: Event Mask on line 3 */
#define CH32V003_EXTI_EVENR_MR4           (1 <<  4) /* 10: Event Mask on line 4 */
#define CH32V003_EXTI_EVENR_MR5           (1 <<  5) /* 20: Event Mask on line 5 */
#define CH32V003_EXTI_EVENR_MR6           (1 <<  6) /* 40: Event Mask on line 6 */
#define CH32V003_EXTI_EVENR_MR7           (1 <<  7) /* 80: Event Mask on line 7 */
#define CH32V003_EXTI_EVENR_MR8           (1 <<  8) /* 100: Event Mask on line 8 */
#define CH32V003_EXTI_EVENR_MR9           (1 <<  9) /* 200: Event Mask on line 9 */
#define CH32V003_EXTI_RTENR_OFFSET        0x0008
#define CH32V003_EXTI_RTENR               (CH32V003_EXTI_BASE + CH32V003_EXTI_RTENR_OFFSET)
#define CH32V003_EXTI_RTENR_TR0           (1 <<  0) /* 01: Rising trigger event configuration of line 0 */
#define CH32V003_EXTI_RTENR_TR1           (1 <<  1) /* 02: Rising trigger event configuration of line 1 */
#define CH32V003_EXTI_RTENR_TR2           (1 <<  2) /* 04: Rising trigger event configuration of line 2 */
#define CH32V003_EXTI_RTENR_TR3           (1 <<  3) /* 08: Rising trigger event configuration of line 3 */
#define CH32V003_EXTI_RTENR_TR4           (1 <<  4) /* 10: Rising trigger event configuration of line 4 */
#define CH32V003_EXTI_RTENR_TR5           (1 <<  5) /* 20: Rising trigger event configuration of line 5 */
#define CH32V003_EXTI_RTENR_TR6           (1 <<  6) /* 40: Rising trigger event configuration of line 6 */
#define CH32V003_EXTI_RTENR_TR7           (1 <<  7) /* 80: Rising trigger event configuration of line 7 */
#define CH32V003_EXTI_RTENR_TR8           (1 <<  8) /* 100: Rising trigger event configuration of line 8 */
#define CH32V003_EXTI_RTENR_TR9           (1 <<  9) /* 200: Rising trigger event configuration of line 9 */
#define CH32V003_EXTI_FTENR_OFFSET        0x000c
#define CH32V003_EXTI_FTENR               (CH32V003_EXTI_BASE + CH32V003_EXTI_FTENR_OFFSET)
#define CH32V003_EXTI_FTENR_TR0           (1 <<  0) /* 01: Falling trigger event configuration of line 0 */
#define CH32V003_EXTI_FTENR_TR1           (1 <<  1) /* 02: Falling trigger event configuration of line 1 */
#define CH32V003_EXTI_FTENR_TR2           (1 <<  2) /* 04: Falling trigger event configuration of line 2 */
#define CH32V003_EXTI_FTENR_TR3           (1 <<  3) /* 08: Falling trigger event configuration of line 3 */
#define CH32V003_EXTI_FTENR_TR4           (1 <<  4) /* 10: Falling trigger event configuration of line 4 */
#define CH32V003_EXTI_FTENR_TR5           (1 <<  5) /* 20: Falling trigger event configuration of line 5 */
#define CH32V003_EXTI_FTENR_TR6           (1 <<  6) /* 40: Falling trigger event configuration of line 6 */
#define CH32V003_EXTI_FTENR_TR7           (1 <<  7) /* 80: Falling trigger event configuration of line 7 */
#define CH32V003_EXTI_FTENR_TR8           (1 <<  8) /* 100: Falling trigger event configuration of line 8 */
#define CH32V003_EXTI_FTENR_TR9           (1 <<  9) /* 200: Falling trigger event configuration of line 9 */
#define CH32V003_EXTI_SWIEVR_OFFSET       0x0010
#define CH32V003_EXTI_SWIEVR              (CH32V003_EXTI_BASE + CH32V003_EXTI_SWIEVR_OFFSET)
#define CH32V003_EXTI_SWIEVR_SWIER0       (1 <<  0) /* 01: Software Interrupt on line 0 */
#define CH32V003_EXTI_SWIEVR_SWIER1       (1 <<  1) /* 02: Software Interrupt on line 1 */
#define CH32V003_EXTI_SWIEVR_SWIER2       (1 <<  2) /* 04: Software Interrupt on line 2 */
#define CH32V003_EXTI_SWIEVR_SWIER3       (1 <<  3) /* 08: Software Interrupt on line 3 */
#define CH32V003_EXTI_SWIEVR_SWIER4       (1 <<  4) /* 10: Software Interrupt on line 4 */
#define CH32V003_EXTI_SWIEVR_SWIER5       (1 <<  5) /* 20: Software Interrupt on line 5 */
#define CH32V003_EXTI_SWIEVR_SWIER6       (1 <<  6) /* 40: Software Interrupt on line 6 */
#define CH32V003_EXTI_SWIEVR_SWIER7       (1 <<  7) /* 80: Software Interrupt on line 7 */
#define CH32V003_EXTI_SWIEVR_SWIER8       (1 <<  8) /* 100: Software Interrupt on line 8 */
#define CH32V003_EXTI_SWIEVR_SWIER9       (1 <<  9) /* 200: Software Interrupt on line 9 */
#define CH32V003_EXTI_INTFR_OFFSET        0x0014
#define CH32V003_EXTI_INTFR               (CH32V003_EXTI_BASE + CH32V003_EXTI_INTFR_OFFSET)
#define CH32V003_EXTI_INTFR_PR0           (1 <<  0) /* 01: Pending bit 0 */
#define CH32V003_EXTI_INTFR_PR1           (1 <<  1) /* 02: Pending bit 1 */
#define CH32V003_EXTI_INTFR_PR2           (1 <<  2) /* 04: Pending bit 2 */
#define CH32V003_EXTI_INTFR_PR3           (1 <<  3) /* 08: Pending bit 3 */
#define CH32V003_EXTI_INTFR_PR4           (1 <<  4) /* 10: Pending bit 4 */
#define CH32V003_EXTI_INTFR_PR5           (1 <<  5) /* 20: Pending bit 5 */
#define CH32V003_EXTI_INTFR_PR6           (1 <<  6) /* 40: Pending bit 6 */
#define CH32V003_EXTI_INTFR_PR7           (1 <<  7) /* 80: Pending bit 7 */
#define CH32V003_EXTI_INTFR_PR8           (1 <<  8) /* 100: Pending bit 8 */
#define CH32V003_EXTI_INTFR_PR9           (1 <<  9) /* 200: Pending bit 9 */

/* DMA1 - DMA1 controller */
#define CH32V003_DMA1_BASE                0x40020000
#define CH32V003_DMA1_INTFR_OFFSET        0x0000
#define CH32V003_DMA1_INTFR               (CH32V003_DMA1_BASE + CH32V003_DMA1_INTFR_OFFSET)
#define CH32V003_DMA1_INTFR_GIF1          (1 <<  0) /* 01: Channel 1 Global interrupt flag */
#define CH32V003_DMA1_INTFR_TCIF1         (1 <<  1) /* 02: Channel 1 Transfer Complete flag */
#define CH32V003_DMA1_INTFR_HTIF1         (1 <<  2) /* 04: Channel 1 Half Transfer Complete flag */
#define CH32V003_DMA1_INTFR_TEIF1         (1 <<  3) /* 08: Channel 1 Transfer Error flag */
#define CH32V003_DMA1_INTFR_GIF2          (1 <<  4) /* 10: Channel 2 Global interrupt flag */
#define CH32V003_DMA1_INTFR_TCIF2         (1 <<  5) /* 20: Channel 2 Transfer Complete flag */
#define CH32V003_DMA1_INTFR_HTIF2         (1 <<  6) /* 40: Channel 2 Half Transfer Complete flag */
#define CH32V003_DMA1_INTFR_TEIF2         (1 <<  7) /* 80: Channel 2 Transfer Error flag */
#define CH32V003_DMA1_INTFR_GIF3          (1 <<  8) /* 100: Channel 3 Global interrupt flag */
#define CH32V003_DMA1_INTFR_TCIF3         (1 <<  9) /* 200: Channel 3 Transfer Complete flag */
#define CH32V003_DMA1_INTFR_HTIF3         (1 << 10) /* 400: Channel 3 Half Transfer Complete flag */
#define CH32V003_DMA1_INTFR_TEIF3         (1 << 11) /* 800: Channel 3 Transfer Error flag */
#define CH32V003_DMA1_INTFR_GIF4          (1 << 12) /* 1000: Channel 4 Global interrupt flag */
#define CH32V003_DMA1_INTFR_TCIF4         (1 << 13) /* 2000: Channel 4 Transfer Complete flag */
#define CH32V003_DMA1_INTFR_HTIF4         (1 << 14) /* 4000: Channel 4 Half Transfer Complete flag */
#define CH32V003_DMA1_INTFR_TEIF4         (1 << 15) /* 8000: Channel 4 Transfer Error flag */
#define CH32V003_DMA1_INTFR_GIF5          (1 << 16) /* 10000: Channel 5 Global interrupt flag */
#define CH32V003_DMA1_INTFR_TCIF5         (1 << 17) /* 20000: Channel 5 Transfer Complete flag */
#define CH32V003_DMA1_INTFR_HTIF5         (1 << 18) /* 40000: Channel 5 Half Transfer Complete flag */
#define CH32V003_DMA1_INTFR_TEIF5         (1 << 19) /* 80000: Channel 5 Transfer Error flag */
#define CH32V003_DMA1_INTFR_GIF6          (1 << 20) /* 100000: Channel 6 Global interrupt flag */
#define CH32V003_DMA1_INTFR_TCIF6         (1 << 21) /* 200000: Channel 6 Transfer Complete flag */
#define CH32V003_DMA1_INTFR_HTIF6         (1 << 22) /* 400000: Channel 6 Half Transfer Complete flag */
#define CH32V003_DMA1_INTFR_TEIF6         (1 << 23) /* 800000: Channel 6 Transfer Error flag */
#define CH32V003_DMA1_INTFR_GIF7          (1 << 24) /* 1000000: Channel 7 Global interrupt flag */
#define CH32V003_DMA1_INTFR_TCIF7         (1 << 25) /* 2000000: Channel 7 Transfer Complete flag */
#define CH32V003_DMA1_INTFR_HTIF7         (1 << 26) /* 4000000: Channel 7 Half Transfer Complete flag */
#define CH32V003_DMA1_INTFR_TEIF7         (1 << 27) /* 8000000: Channel 7 Transfer Error flag */
#define CH32V003_DMA1_INTFCR_OFFSET       0x0004
#define CH32V003_DMA1_INTFCR              (CH32V003_DMA1_BASE + CH32V003_DMA1_INTFCR_OFFSET)
#define CH32V003_DMA1_INTFCR_CGIF1        (1 <<  0) /* 01: Channel 1 Global interrupt clear */
#define CH32V003_DMA1_INTFCR_CGIF2        (1 <<  4) /* 10: Channel 2 Global interrupt clear */
#define CH32V003_DMA1_INTFCR_CGIF3        (1 <<  8) /* 100: Channel 3 Global interrupt clear */
#define CH32V003_DMA1_INTFCR_CGIF4        (1 << 12) /* 1000: Channel 4 Global interrupt clear */
#define CH32V003_DMA1_INTFCR_CGIF5        (1 << 16) /* 10000: Channel 5 Global interrupt clear */
#define CH32V003_DMA1_INTFCR_CGIF6        (1 << 20) /* 100000: Channel 6 Global interrupt clear */
#define CH32V003_DMA1_INTFCR_CGIF7        (1 << 24) /* 1000000: Channel 7 Global interrupt clear */
#define CH32V003_DMA1_INTFCR_CTCIF1       (1 <<  1) /* 02: Channel 1 Transfer Complete clear */
#define CH32V003_DMA1_INTFCR_CTCIF2       (1 <<  5) /* 20: Channel 2 Transfer Complete clear */
#define CH32V003_DMA1_INTFCR_CTCIF3       (1 <<  9) /* 200: Channel 3 Transfer Complete clear */
#define CH32V003_DMA1_INTFCR_CTCIF4       (1 << 13) /* 2000: Channel 4 Transfer Complete clear */
#define CH32V003_DMA1_INTFCR_CTCIF5       (1 << 17) /* 20000: Channel 5 Transfer Complete clear */
#define CH32V003_DMA1_INTFCR_CTCIF6       (1 << 21) /* 200000: Channel 6 Transfer Complete clear */
#define CH32V003_DMA1_INTFCR_CTCIF7       (1 << 25) /* 2000000: Channel 7 Transfer Complete clear */
#define CH32V003_DMA1_INTFCR_CHTIF1       (1 <<  2) /* 04: Channel 1 Half Transfer clear */
#define CH32V003_DMA1_INTFCR_CHTIF2       (1 <<  6) /* 40: Channel 2 Half Transfer clear */
#define CH32V003_DMA1_INTFCR_CHTIF3       (1 << 10) /* 400: Channel 3 Half Transfer clear */
#define CH32V003_DMA1_INTFCR_CHTIF4       (1 << 14) /* 4000: Channel 4 Half Transfer clear */
#define CH32V003_DMA1_INTFCR_CHTIF5       (1 << 18) /* 40000: Channel 5 Half Transfer clear */
#define CH32V003_DMA1_INTFCR_CHTIF6       (1 << 22) /* 400000: Channel 6 Half Transfer clear */
#define CH32V003_DMA1_INTFCR_CHTIF7       (1 << 26) /* 4000000: Channel 7 Half Transfer clear */
#define CH32V003_DMA1_INTFCR_CTEIF1       (1 <<  3) /* 08: Channel 1 Transfer Error clear */
#define CH32V003_DMA1_INTFCR_CTEIF2       (1 <<  7) /* 80: Channel 2 Transfer Error clear */
#define CH32V003_DMA1_INTFCR_CTEIF3       (1 << 11) /* 800: Channel 3 Transfer Error clear */
#define CH32V003_DMA1_INTFCR_CTEIF4       (1 << 15) /* 8000: Channel 4 Transfer Error clear */
#define CH32V003_DMA1_INTFCR_CTEIF5       (1 << 19) /* 80000: Channel 5 Transfer Error clear */
#define CH32V003_DMA1_INTFCR_CTEIF6       (1 << 23) /* 800000: Channel 6 Transfer Error clear */
#define CH32V003_DMA1_INTFCR_CTEIF7       (1 << 27) /* 8000000: Channel 7 Transfer Error clear */
#define CH32V003_DMA1_CFGR1_OFFSET        0x0008
#define CH32V003_DMA1_CFGR1               (CH32V003_DMA1_BASE + CH32V003_DMA1_CFGR1_OFFSET)
#define CH32V003_DMA1_CFGR1_EN            (1 <<  0) /* 01: Channel enable */
#define CH32V003_DMA1_CFGR1_TCIE          (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V003_DMA1_CFGR1_HTIE          (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V003_DMA1_CFGR1_TEIE          (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V003_DMA1_CFGR1_DIR           (1 <<  4) /* 10: Data transfer direction */
#define CH32V003_DMA1_CFGR1_CIRC          (1 <<  5) /* 20: Circular mode */
#define CH32V003_DMA1_CFGR1_PINC          (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V003_DMA1_CFGR1_MINC          (1 <<  7) /* 80: Memory increment mode */
#define CH32V003_DMA1_CFGR1_PSIZE         (2 <<  8) /* 100: Peripheral size */
#define CH32V003_DMA1_CFGR1_PSIZE_MASK         (0x03)
#define CH32V003_DMA1_CFGR1_MSIZE         (2 << 10) /* 400: Memory size */
#define CH32V003_DMA1_CFGR1_MSIZE_MASK         (0x03)
#define CH32V003_DMA1_CFGR1_PL            (2 << 12) /* 1000: Channel Priority level */
#define CH32V003_DMA1_CFGR1_PL_MASK            (0x03)
#define CH32V003_DMA1_CFGR1_MEM2MEM       (1 << 14) /* 4000: Memory to memory mode */
#define CH32V003_DMA1_CNTR1_OFFSET        0x000c
#define CH32V003_DMA1_CNTR1               (CH32V003_DMA1_BASE + CH32V003_DMA1_CNTR1_OFFSET)
#define CH32V003_DMA1_CNTR1_NDT           (16 <<  0) /* 01: Number of data to transfer */
#define CH32V003_DMA1_CNTR1_NDT_MASK           (0xffff)
#define CH32V003_DMA1_PADDR1_OFFSET       0x0010
#define CH32V003_DMA1_PADDR1              (CH32V003_DMA1_BASE + CH32V003_DMA1_PADDR1_OFFSET)
#define CH32V003_DMA1_PADDR1_PA           (32 <<  0) /* 01: Peripheral address */
#define CH32V003_DMA1_PADDR1_PA_MASK           (0xffffffff)
#define CH32V003_DMA1_MADDR1_OFFSET       0x0014
#define CH32V003_DMA1_MADDR1              (CH32V003_DMA1_BASE + CH32V003_DMA1_MADDR1_OFFSET)
#define CH32V003_DMA1_MADDR1_MA           (32 <<  0) /* 01: Memory address */
#define CH32V003_DMA1_MADDR1_MA_MASK           (0xffffffff)
#define CH32V003_DMA1_CFGR2_OFFSET        0x001c
#define CH32V003_DMA1_CFGR2               (CH32V003_DMA1_BASE + CH32V003_DMA1_CFGR2_OFFSET)
#define CH32V003_DMA1_CFGR2_EN            (1 <<  0) /* 01: Channel enable */
#define CH32V003_DMA1_CFGR2_TCIE          (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V003_DMA1_CFGR2_HTIE          (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V003_DMA1_CFGR2_TEIE          (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V003_DMA1_CFGR2_DIR           (1 <<  4) /* 10: Data transfer direction */
#define CH32V003_DMA1_CFGR2_CIRC          (1 <<  5) /* 20: Circular mode */
#define CH32V003_DMA1_CFGR2_PINC          (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V003_DMA1_CFGR2_MINC          (1 <<  7) /* 80: Memory increment mode */
#define CH32V003_DMA1_CFGR2_PSIZE         (2 <<  8) /* 100: Peripheral size */
#define CH32V003_DMA1_CFGR2_PSIZE_MASK         (0x03)
#define CH32V003_DMA1_CFGR2_MSIZE         (2 << 10) /* 400: Memory size */
#define CH32V003_DMA1_CFGR2_MSIZE_MASK         (0x03)
#define CH32V003_DMA1_CFGR2_PL            (2 << 12) /* 1000: Channel Priority level */
#define CH32V003_DMA1_CFGR2_PL_MASK            (0x03)
#define CH32V003_DMA1_CFGR2_MEM2MEM       (1 << 14) /* 4000: Memory to memory mode */
#define CH32V003_DMA1_CNTR2_OFFSET        0x0020
#define CH32V003_DMA1_CNTR2               (CH32V003_DMA1_BASE + CH32V003_DMA1_CNTR2_OFFSET)
#define CH32V003_DMA1_CNTR2_NDT           (16 <<  0) /* 01: Number of data to transfer */
#define CH32V003_DMA1_CNTR2_NDT_MASK           (0xffff)
#define CH32V003_DMA1_PADDR2_OFFSET       0x0024
#define CH32V003_DMA1_PADDR2              (CH32V003_DMA1_BASE + CH32V003_DMA1_PADDR2_OFFSET)
#define CH32V003_DMA1_PADDR2_PA           (32 <<  0) /* 01: Peripheral address */
#define CH32V003_DMA1_PADDR2_PA_MASK           (0xffffffff)
#define CH32V003_DMA1_MADDR2_OFFSET       0x0028
#define CH32V003_DMA1_MADDR2              (CH32V003_DMA1_BASE + CH32V003_DMA1_MADDR2_OFFSET)
#define CH32V003_DMA1_MADDR2_MA           (32 <<  0) /* 01: Memory address */
#define CH32V003_DMA1_MADDR2_MA_MASK           (0xffffffff)
#define CH32V003_DMA1_CFGR3_OFFSET        0x0030
#define CH32V003_DMA1_CFGR3               (CH32V003_DMA1_BASE + CH32V003_DMA1_CFGR3_OFFSET)
#define CH32V003_DMA1_CFGR3_EN            (1 <<  0) /* 01: Channel enable */
#define CH32V003_DMA1_CFGR3_TCIE          (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V003_DMA1_CFGR3_HTIE          (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V003_DMA1_CFGR3_TEIE          (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V003_DMA1_CFGR3_DIR           (1 <<  4) /* 10: Data transfer direction */
#define CH32V003_DMA1_CFGR3_CIRC          (1 <<  5) /* 20: Circular mode */
#define CH32V003_DMA1_CFGR3_PINC          (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V003_DMA1_CFGR3_MINC          (1 <<  7) /* 80: Memory increment mode */
#define CH32V003_DMA1_CFGR3_PSIZE         (2 <<  8) /* 100: Peripheral size */
#define CH32V003_DMA1_CFGR3_PSIZE_MASK         (0x03)
#define CH32V003_DMA1_CFGR3_MSIZE         (2 << 10) /* 400: Memory size */
#define CH32V003_DMA1_CFGR3_MSIZE_MASK         (0x03)
#define CH32V003_DMA1_CFGR3_PL            (2 << 12) /* 1000: Channel Priority level */
#define CH32V003_DMA1_CFGR3_PL_MASK            (0x03)
#define CH32V003_DMA1_CFGR3_MEM2MEM       (1 << 14) /* 4000: Memory to memory mode */
#define CH32V003_DMA1_CNTR3_OFFSET        0x0034
#define CH32V003_DMA1_CNTR3               (CH32V003_DMA1_BASE + CH32V003_DMA1_CNTR3_OFFSET)
#define CH32V003_DMA1_CNTR3_NDT           (16 <<  0) /* 01: Number of data to transfer */
#define CH32V003_DMA1_CNTR3_NDT_MASK           (0xffff)
#define CH32V003_DMA1_PADDR3_OFFSET       0x0038
#define CH32V003_DMA1_PADDR3              (CH32V003_DMA1_BASE + CH32V003_DMA1_PADDR3_OFFSET)
#define CH32V003_DMA1_PADDR3_PA           (32 <<  0) /* 01: Peripheral address */
#define CH32V003_DMA1_PADDR3_PA_MASK           (0xffffffff)
#define CH32V003_DMA1_MADDR3_OFFSET       0x003c
#define CH32V003_DMA1_MADDR3              (CH32V003_DMA1_BASE + CH32V003_DMA1_MADDR3_OFFSET)
#define CH32V003_DMA1_MADDR3_MA           (32 <<  0) /* 01: Memory address */
#define CH32V003_DMA1_MADDR3_MA_MASK           (0xffffffff)
#define CH32V003_DMA1_CFGR4_OFFSET        0x0044
#define CH32V003_DMA1_CFGR4               (CH32V003_DMA1_BASE + CH32V003_DMA1_CFGR4_OFFSET)
#define CH32V003_DMA1_CFGR4_EN            (1 <<  0) /* 01: Channel enable */
#define CH32V003_DMA1_CFGR4_TCIE          (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V003_DMA1_CFGR4_HTIE          (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V003_DMA1_CFGR4_TEIE          (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V003_DMA1_CFGR4_DIR           (1 <<  4) /* 10: Data transfer direction */
#define CH32V003_DMA1_CFGR4_CIRC          (1 <<  5) /* 20: Circular mode */
#define CH32V003_DMA1_CFGR4_PINC          (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V003_DMA1_CFGR4_MINC          (1 <<  7) /* 80: Memory increment mode */
#define CH32V003_DMA1_CFGR4_PSIZE         (2 <<  8) /* 100: Peripheral size */
#define CH32V003_DMA1_CFGR4_PSIZE_MASK         (0x03)
#define CH32V003_DMA1_CFGR4_MSIZE         (2 << 10) /* 400: Memory size */
#define CH32V003_DMA1_CFGR4_MSIZE_MASK         (0x03)
#define CH32V003_DMA1_CFGR4_PL            (2 << 12) /* 1000: Channel Priority level */
#define CH32V003_DMA1_CFGR4_PL_MASK            (0x03)
#define CH32V003_DMA1_CFGR4_MEM2MEM       (1 << 14) /* 4000: Memory to memory mode */
#define CH32V003_DMA1_CNTR4_OFFSET        0x0048
#define CH32V003_DMA1_CNTR4               (CH32V003_DMA1_BASE + CH32V003_DMA1_CNTR4_OFFSET)
#define CH32V003_DMA1_CNTR4_NDT           (16 <<  0) /* 01: Number of data to transfer */
#define CH32V003_DMA1_CNTR4_NDT_MASK           (0xffff)
#define CH32V003_DMA1_PADDR4_OFFSET       0x004c
#define CH32V003_DMA1_PADDR4              (CH32V003_DMA1_BASE + CH32V003_DMA1_PADDR4_OFFSET)
#define CH32V003_DMA1_PADDR4_PA           (32 <<  0) /* 01: Peripheral address */
#define CH32V003_DMA1_PADDR4_PA_MASK           (0xffffffff)
#define CH32V003_DMA1_MADDR4_OFFSET       0x0050
#define CH32V003_DMA1_MADDR4              (CH32V003_DMA1_BASE + CH32V003_DMA1_MADDR4_OFFSET)
#define CH32V003_DMA1_MADDR4_MA           (32 <<  0) /* 01: Memory address */
#define CH32V003_DMA1_MADDR4_MA_MASK           (0xffffffff)
#define CH32V003_DMA1_CFGR5_OFFSET        0x0058
#define CH32V003_DMA1_CFGR5               (CH32V003_DMA1_BASE + CH32V003_DMA1_CFGR5_OFFSET)
#define CH32V003_DMA1_CFGR5_EN            (1 <<  0) /* 01: Channel enable */
#define CH32V003_DMA1_CFGR5_TCIE          (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V003_DMA1_CFGR5_HTIE          (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V003_DMA1_CFGR5_TEIE          (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V003_DMA1_CFGR5_DIR           (1 <<  4) /* 10: Data transfer direction */
#define CH32V003_DMA1_CFGR5_CIRC          (1 <<  5) /* 20: Circular mode */
#define CH32V003_DMA1_CFGR5_PINC          (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V003_DMA1_CFGR5_MINC          (1 <<  7) /* 80: Memory increment mode */
#define CH32V003_DMA1_CFGR5_PSIZE         (2 <<  8) /* 100: Peripheral size */
#define CH32V003_DMA1_CFGR5_PSIZE_MASK         (0x03)
#define CH32V003_DMA1_CFGR5_MSIZE         (2 << 10) /* 400: Memory size */
#define CH32V003_DMA1_CFGR5_MSIZE_MASK         (0x03)
#define CH32V003_DMA1_CFGR5_PL            (2 << 12) /* 1000: Channel Priority level */
#define CH32V003_DMA1_CFGR5_PL_MASK            (0x03)
#define CH32V003_DMA1_CFGR5_MEM2MEM       (1 << 14) /* 4000: Memory to memory mode */
#define CH32V003_DMA1_CNTR5_OFFSET        0x005c
#define CH32V003_DMA1_CNTR5               (CH32V003_DMA1_BASE + CH32V003_DMA1_CNTR5_OFFSET)
#define CH32V003_DMA1_CNTR5_NDT           (16 <<  0) /* 01: Number of data to transfer */
#define CH32V003_DMA1_CNTR5_NDT_MASK           (0xffff)
#define CH32V003_DMA1_PADDR5_OFFSET       0x0060
#define CH32V003_DMA1_PADDR5              (CH32V003_DMA1_BASE + CH32V003_DMA1_PADDR5_OFFSET)
#define CH32V003_DMA1_PADDR5_PA           (32 <<  0) /* 01: Peripheral address */
#define CH32V003_DMA1_PADDR5_PA_MASK           (0xffffffff)
#define CH32V003_DMA1_MADDR5_OFFSET       0x0064
#define CH32V003_DMA1_MADDR5              (CH32V003_DMA1_BASE + CH32V003_DMA1_MADDR5_OFFSET)
#define CH32V003_DMA1_MADDR5_MA           (32 <<  0) /* 01: Memory address */
#define CH32V003_DMA1_MADDR5_MA_MASK           (0xffffffff)
#define CH32V003_DMA1_CFGR6_OFFSET        0x006c
#define CH32V003_DMA1_CFGR6               (CH32V003_DMA1_BASE + CH32V003_DMA1_CFGR6_OFFSET)
#define CH32V003_DMA1_CFGR6_EN            (1 <<  0) /* 01: Channel enable */
#define CH32V003_DMA1_CFGR6_TCIE          (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V003_DMA1_CFGR6_HTIE          (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V003_DMA1_CFGR6_TEIE          (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V003_DMA1_CFGR6_DIR           (1 <<  4) /* 10: Data transfer direction */
#define CH32V003_DMA1_CFGR6_CIRC          (1 <<  5) /* 20: Circular mode */
#define CH32V003_DMA1_CFGR6_PINC          (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V003_DMA1_CFGR6_MINC          (1 <<  7) /* 80: Memory increment mode */
#define CH32V003_DMA1_CFGR6_PSIZE         (2 <<  8) /* 100: Peripheral size */
#define CH32V003_DMA1_CFGR6_PSIZE_MASK         (0x03)
#define CH32V003_DMA1_CFGR6_MSIZE         (2 << 10) /* 400: Memory size */
#define CH32V003_DMA1_CFGR6_MSIZE_MASK         (0x03)
#define CH32V003_DMA1_CFGR6_PL            (2 << 12) /* 1000: Channel Priority level */
#define CH32V003_DMA1_CFGR6_PL_MASK            (0x03)
#define CH32V003_DMA1_CFGR6_MEM2MEM       (1 << 14) /* 4000: Memory to memory mode */
#define CH32V003_DMA1_CNTR6_OFFSET        0x0070
#define CH32V003_DMA1_CNTR6               (CH32V003_DMA1_BASE + CH32V003_DMA1_CNTR6_OFFSET)
#define CH32V003_DMA1_CNTR6_NDT           (16 <<  0) /* 01: Number of data to transfer */
#define CH32V003_DMA1_CNTR6_NDT_MASK           (0xffff)
#define CH32V003_DMA1_PADDR6_OFFSET       0x0074
#define CH32V003_DMA1_PADDR6              (CH32V003_DMA1_BASE + CH32V003_DMA1_PADDR6_OFFSET)
#define CH32V003_DMA1_PADDR6_PA           (32 <<  0) /* 01: Peripheral address */
#define CH32V003_DMA1_PADDR6_PA_MASK           (0xffffffff)
#define CH32V003_DMA1_MADDR6_OFFSET       0x0078
#define CH32V003_DMA1_MADDR6              (CH32V003_DMA1_BASE + CH32V003_DMA1_MADDR6_OFFSET)
#define CH32V003_DMA1_MADDR6_MA           (32 <<  0) /* 01: Memory address */
#define CH32V003_DMA1_MADDR6_MA_MASK           (0xffffffff)
#define CH32V003_DMA1_CFGR7_OFFSET        0x0080
#define CH32V003_DMA1_CFGR7               (CH32V003_DMA1_BASE + CH32V003_DMA1_CFGR7_OFFSET)
#define CH32V003_DMA1_CFGR7_EN            (1 <<  0) /* 01: Channel enable */
#define CH32V003_DMA1_CFGR7_TCIE          (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V003_DMA1_CFGR7_HTIE          (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V003_DMA1_CFGR7_TEIE          (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V003_DMA1_CFGR7_DIR           (1 <<  4) /* 10: Data transfer direction */
#define CH32V003_DMA1_CFGR7_CIRC          (1 <<  5) /* 20: Circular mode */
#define CH32V003_DMA1_CFGR7_PINC          (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V003_DMA1_CFGR7_MINC          (1 <<  7) /* 80: Memory increment mode */
#define CH32V003_DMA1_CFGR7_PSIZE         (2 <<  8) /* 100: Peripheral size */
#define CH32V003_DMA1_CFGR7_PSIZE_MASK         (0x03)
#define CH32V003_DMA1_CFGR7_MSIZE         (2 << 10) /* 400: Memory size */
#define CH32V003_DMA1_CFGR7_MSIZE_MASK         (0x03)
#define CH32V003_DMA1_CFGR7_PL            (2 << 12) /* 1000: Channel Priority level */
#define CH32V003_DMA1_CFGR7_PL_MASK            (0x03)
#define CH32V003_DMA1_CFGR7_MEM2MEM       (1 << 14) /* 4000: Memory to memory mode */
#define CH32V003_DMA1_CNTR7_OFFSET        0x0084
#define CH32V003_DMA1_CNTR7               (CH32V003_DMA1_BASE + CH32V003_DMA1_CNTR7_OFFSET)
#define CH32V003_DMA1_CNTR7_NDT           (16 <<  0) /* 01: Number of data to transfer */
#define CH32V003_DMA1_CNTR7_NDT_MASK           (0xffff)
#define CH32V003_DMA1_PADDR7_OFFSET       0x0088
#define CH32V003_DMA1_PADDR7              (CH32V003_DMA1_BASE + CH32V003_DMA1_PADDR7_OFFSET)
#define CH32V003_DMA1_PADDR7_PA           (32 <<  0) /* 01: Peripheral address */
#define CH32V003_DMA1_PADDR7_PA_MASK           (0xffffffff)
#define CH32V003_DMA1_MADDR7_OFFSET       0x008c
#define CH32V003_DMA1_MADDR7              (CH32V003_DMA1_BASE + CH32V003_DMA1_MADDR7_OFFSET)
#define CH32V003_DMA1_MADDR7_MA           (32 <<  0) /* 01: Memory address */
#define CH32V003_DMA1_MADDR7_MA_MASK           (0xffffffff)

/* IWDG - Independent watchdog */
#define CH32V003_IWDG_BASE                0x40003000
#define CH32V003_IWDG_CTLR_OFFSET         0x0000
#define CH32V003_IWDG_CTLR                (CH32V003_IWDG_BASE + CH32V003_IWDG_CTLR_OFFSET)
#define CH32V003_IWDG_CTLR_KEY            (16 <<  0) /* 01: Key value */
#define CH32V003_IWDG_CTLR_KEY_MASK            (0xffff)
#define CH32V003_IWDG_PSCR_OFFSET         0x0004
#define CH32V003_IWDG_PSCR                (CH32V003_IWDG_BASE + CH32V003_IWDG_PSCR_OFFSET)
#define CH32V003_IWDG_PSCR_PR             (3 <<  0) /* 01: Prescaler divider */
#define CH32V003_IWDG_PSCR_PR_MASK             (0x07)
#define CH32V003_IWDG_RLDR_OFFSET         0x0008
#define CH32V003_IWDG_RLDR                (CH32V003_IWDG_BASE + CH32V003_IWDG_RLDR_OFFSET)
#define CH32V003_IWDG_RLDR_RL             (12 <<  0) /* 01: Watchdog counter reload value */
#define CH32V003_IWDG_RLDR_RL_MASK             (0xfff)
#define CH32V003_IWDG_STATR_OFFSET        0x000c
#define CH32V003_IWDG_STATR               (CH32V003_IWDG_BASE + CH32V003_IWDG_STATR_OFFSET)
#define CH32V003_IWDG_STATR_PVU           (1 <<  0) /* 01: Watchdog prescaler value update */
#define CH32V003_IWDG_STATR_RVU           (1 <<  1) /* 02: Watchdog counter reload value update */

/* WWDG - Window watchdog */
#define CH32V003_WWDG_BASE                0x40002c00
#define CH32V003_WWDG_CTLR_OFFSET         0x0000
#define CH32V003_WWDG_CTLR                (CH32V003_WWDG_BASE + CH32V003_WWDG_CTLR_OFFSET)
#define CH32V003_WWDG_CTLR_T              (7 <<  0) /* 01: 7-bit counter (MSB to LSB) */
#define CH32V003_WWDG_CTLR_T_MASK              (0x7f)
#define CH32V003_WWDG_CTLR_WDGA           (1 <<  7) /* 80: Activation bit */
#define CH32V003_WWDG_CFGR_OFFSET         0x0004
#define CH32V003_WWDG_CFGR                (CH32V003_WWDG_BASE + CH32V003_WWDG_CFGR_OFFSET)
#define CH32V003_WWDG_CFGR_W              (7 <<  0) /* 01: 7-bit window value */
#define CH32V003_WWDG_CFGR_W_MASK              (0x7f)
#define CH32V003_WWDG_CFGR_WDGTB          (2 <<  7) /* 80: Timer Base */
#define CH32V003_WWDG_CFGR_WDGTB_MASK          (0x03)
#define CH32V003_WWDG_CFGR_EWI            (1 <<  9) /* 200: Early Wakeup Interrupt */
#define CH32V003_WWDG_STATR_OFFSET        0x0008
#define CH32V003_WWDG_STATR               (CH32V003_WWDG_BASE + CH32V003_WWDG_STATR_OFFSET)
#define CH32V003_WWDG_STATR_WEIF          (1 <<  0) /* 01: Early Wakeup Interrupt Flag */

/* TIM1 - Advanced timer */
#define CH32V003_TIM1_BASE                0x40012c00
#define CH32V003_TIM1_CTLR1_OFFSET        0x0000
#define CH32V003_TIM1_CTLR1               (CH32V003_TIM1_BASE + CH32V003_TIM1_CTLR1_OFFSET)
#define CH32V003_TIM1_CTLR1_TMR_CAP_LVL_EN (1 << 15) /* 8000: Timer capture level indication enable */
#define CH32V003_TIM1_CTLR1_TMR_CAP_OV_EN (1 << 14) /* 4000: Timer capture value configuration enable */
#define CH32V003_TIM1_CTLR1_CKD           (2 <<  8) /* 100: Clock division */
#define CH32V003_TIM1_CTLR1_CKD_MASK           (0x03)
#define CH32V003_TIM1_CTLR1_ARPE          (1 <<  7) /* 80: Auto-reload preload enable */
#define CH32V003_TIM1_CTLR1_CMS           (2 <<  5) /* 20: Center-aligned mode selection */
#define CH32V003_TIM1_CTLR1_CMS_MASK           (0x03)
#define CH32V003_TIM1_CTLR1_DIR           (1 <<  4) /* 10: Direction */
#define CH32V003_TIM1_CTLR1_OPM           (1 <<  3) /* 08: One-pulse mode */
#define CH32V003_TIM1_CTLR1_URS           (1 <<  2) /* 04: Update request source */
#define CH32V003_TIM1_CTLR1_UDIS          (1 <<  1) /* 02: Update disable */
#define CH32V003_TIM1_CTLR1_CEN           (1 <<  0) /* 01: Counter enable */
#define CH32V003_TIM1_CTLR2_OFFSET        0x0004
#define CH32V003_TIM1_CTLR2               (CH32V003_TIM1_BASE + CH32V003_TIM1_CTLR2_OFFSET)
#define CH32V003_TIM1_CTLR2_OIS4          (1 << 14) /* 4000: Output Idle state 4 */
#define CH32V003_TIM1_CTLR2_OIS3N         (1 << 13) /* 2000: Output Idle state 3 */
#define CH32V003_TIM1_CTLR2_OIS3          (1 << 12) /* 1000: Output Idle state 3 */
#define CH32V003_TIM1_CTLR2_OIS2N         (1 << 11) /* 800: Output Idle state 2 */
#define CH32V003_TIM1_CTLR2_OIS2          (1 << 10) /* 400: Output Idle state 2 */
#define CH32V003_TIM1_CTLR2_OIS1N         (1 <<  9) /* 200: Output Idle state 1 */
#define CH32V003_TIM1_CTLR2_OIS1          (1 <<  8) /* 100: Output Idle state 1 */
#define CH32V003_TIM1_CTLR2_TI1S          (1 <<  7) /* 80: TI1 selection */
#define CH32V003_TIM1_CTLR2_MMS           (3 <<  4) /* 10: Master mode selection */
#define CH32V003_TIM1_CTLR2_MMS_MASK           (0x07)
#define CH32V003_TIM1_CTLR2_CCDS          (1 <<  3) /* 08: Capture/compare DMA selection */
#define CH32V003_TIM1_CTLR2_CCUS          (1 <<  2) /* 04: Capture/compare control update selection */
#define CH32V003_TIM1_CTLR2_CCPC          (1 <<  0) /* 01: Capture/compare preloaded control */
#define CH32V003_TIM1_SMCFGR_OFFSET       0x0008
#define CH32V003_TIM1_SMCFGR              (CH32V003_TIM1_BASE + CH32V003_TIM1_SMCFGR_OFFSET)
#define CH32V003_TIM1_SMCFGR_ETP          (1 << 15) /* 8000: External trigger polarity */
#define CH32V003_TIM1_SMCFGR_ECE          (1 << 14) /* 4000: External clock enable */
#define CH32V003_TIM1_SMCFGR_ETPS         (2 << 12) /* 1000: External trigger prescaler */
#define CH32V003_TIM1_SMCFGR_ETPS_MASK         (0x03)
#define CH32V003_TIM1_SMCFGR_ETF          (4 <<  8) /* 100: External trigger filter */
#define CH32V003_TIM1_SMCFGR_ETF_MASK          (0x0f)
#define CH32V003_TIM1_SMCFGR_MSM          (1 <<  7) /* 80: Master/Slave mode */
#define CH32V003_TIM1_SMCFGR_TS           (3 <<  4) /* 10: Trigger selection */
#define CH32V003_TIM1_SMCFGR_TS_MASK           (0x07)
#define CH32V003_TIM1_SMCFGR_SMS          (3 <<  0) /* 01: Slave mode selection */
#define CH32V003_TIM1_SMCFGR_SMS_MASK          (0x07)
#define CH32V003_TIM1_DMAINTENR_OFFSET    0x000c
#define CH32V003_TIM1_DMAINTENR           (CH32V003_TIM1_BASE + CH32V003_TIM1_DMAINTENR_OFFSET)
#define CH32V003_TIM1_DMAINTENR_TDE       (1 << 14) /* 4000: Trigger DMA request enable */
#define CH32V003_TIM1_DMAINTENR_COMDE     (1 << 13) /* 2000: COM DMA request enable */
#define CH32V003_TIM1_DMAINTENR_CC4DE     (1 << 12) /* 1000: Capture/Compare 4 DMA request enable */
#define CH32V003_TIM1_DMAINTENR_CC3DE     (1 << 11) /* 800: Capture/Compare 3 DMA request enable */
#define CH32V003_TIM1_DMAINTENR_CC2DE     (1 << 10) /* 400: Capture/Compare 2 DMA request enable */
#define CH32V003_TIM1_DMAINTENR_CC1DE     (1 <<  9) /* 200: Capture/Compare 1 DMA request enable */
#define CH32V003_TIM1_DMAINTENR_UDE       (1 <<  8) /* 100: Update DMA request enable */
#define CH32V003_TIM1_DMAINTENR_BIE       (1 <<  7) /* 80: Break interrupt enable */
#define CH32V003_TIM1_DMAINTENR_TIE       (1 <<  6) /* 40: Trigger interrupt enable */
#define CH32V003_TIM1_DMAINTENR_COMIE     (1 <<  5) /* 20: COM interrupt enable */
#define CH32V003_TIM1_DMAINTENR_CC4IE     (1 <<  4) /* 10: Capture/Compare 4 interrupt enable */
#define CH32V003_TIM1_DMAINTENR_CC3IE     (1 <<  3) /* 08: Capture/Compare 3 interrupt enable */
#define CH32V003_TIM1_DMAINTENR_CC2IE     (1 <<  2) /* 04: Capture/Compare 2 interrupt enable */
#define CH32V003_TIM1_DMAINTENR_CC1IE     (1 <<  1) /* 02: Capture/Compare 1 interrupt enable */
#define CH32V003_TIM1_DMAINTENR_UIE       (1 <<  0) /* 01: Update interrupt enable */
#define CH32V003_TIM1_INTFR_OFFSET        0x0010
#define CH32V003_TIM1_INTFR               (CH32V003_TIM1_BASE + CH32V003_TIM1_INTFR_OFFSET)
#define CH32V003_TIM1_INTFR_CC4OF         (1 << 12) /* 1000: Capture/Compare 4 overcapture flag */
#define CH32V003_TIM1_INTFR_CC3OF         (1 << 11) /* 800: Capture/Compare 3 overcapture flag */
#define CH32V003_TIM1_INTFR_CC2OF         (1 << 10) /* 400: Capture/compare 2 overcapture flag */
#define CH32V003_TIM1_INTFR_CC1OF         (1 <<  9) /* 200: Capture/Compare 1 overcapture flag */
#define CH32V003_TIM1_INTFR_BIF           (1 <<  7) /* 80: Break interrupt flag */
#define CH32V003_TIM1_INTFR_TIF           (1 <<  6) /* 40: Trigger interrupt flag */
#define CH32V003_TIM1_INTFR_COMIF         (1 <<  5) /* 20: COM interrupt flag */
#define CH32V003_TIM1_INTFR_CC4IF         (1 <<  4) /* 10: Capture/Compare 4 interrupt flag */
#define CH32V003_TIM1_INTFR_CC3IF         (1 <<  3) /* 08: Capture/Compare 3 interrupt flag */
#define CH32V003_TIM1_INTFR_CC2IF         (1 <<  2) /* 04: Capture/Compare 2 interrupt flag */
#define CH32V003_TIM1_INTFR_CC1IF         (1 <<  1) /* 02: Capture/compare 1 interrupt flag */
#define CH32V003_TIM1_INTFR_UIF           (1 <<  0) /* 01: Update interrupt flag */
#define CH32V003_TIM1_SWEVGR_OFFSET       0x0014
#define CH32V003_TIM1_SWEVGR              (CH32V003_TIM1_BASE + CH32V003_TIM1_SWEVGR_OFFSET)
#define CH32V003_TIM1_SWEVGR_BG           (1 <<  7) /* 80: Break generation */
#define CH32V003_TIM1_SWEVGR_TG           (1 <<  6) /* 40: Trigger generation */
#define CH32V003_TIM1_SWEVGR_COMG         (1 <<  5) /* 20: Capture/Compare control update generation */
#define CH32V003_TIM1_SWEVGR_CC4G         (1 <<  4) /* 10: Capture/compare 4 generation */
#define CH32V003_TIM1_SWEVGR_CC3G         (1 <<  3) /* 08: Capture/compare 3 generation */
#define CH32V003_TIM1_SWEVGR_CC2G         (1 <<  2) /* 04: Capture/compare 2 generation */
#define CH32V003_TIM1_SWEVGR_CC1G         (1 <<  1) /* 02: Capture/compare 1 generation */
#define CH32V003_TIM1_SWEVGR_UG           (1 <<  0) /* 01: Update generation */
#define CH32V003_TIM1_CHCTLR1_Output_OFFSET 0x0018
#define CH32V003_TIM1_CHCTLR1_Output      (CH32V003_TIM1_BASE + CH32V003_TIM1_CHCTLR1_Output_OFFSET)
#define CH32V003_TIM1_CHCTLR1_Output_OC2CE (1 << 15) /* 8000: Output Compare 2 clear enable */
#define CH32V003_TIM1_CHCTLR1_Output_OC2M (3 << 12) /* 1000: Output Compare 2 mode */
#define CH32V003_TIM1_CHCTLR1_Output_OC2M_MASK (0x07)
#define CH32V003_TIM1_CHCTLR1_Output_OC2PE (1 << 11) /* 800: Output Compare 2 preload enable */
#define CH32V003_TIM1_CHCTLR1_Output_OC2FE (1 << 10) /* 400: Output Compare 2 fast enable */
#define CH32V003_TIM1_CHCTLR1_Output_CC2S (2 <<  8) /* 100: Capture/Compare 2 selection */
#define CH32V003_TIM1_CHCTLR1_Output_CC2S_MASK (0x03)
#define CH32V003_TIM1_CHCTLR1_Output_OC1CE (1 <<  7) /* 80: Output Compare 1 clear enable */
#define CH32V003_TIM1_CHCTLR1_Output_OC1M (3 <<  4) /* 10: Output Compare 1 mode */
#define CH32V003_TIM1_CHCTLR1_Output_OC1M_MASK (0x07)
#define CH32V003_TIM1_CHCTLR1_Output_OC1PE (1 <<  3) /* 08: Output Compare 1 preload enable */
#define CH32V003_TIM1_CHCTLR1_Output_OC1FE (1 <<  2) /* 04: Output Compare 1 fast enable */
#define CH32V003_TIM1_CHCTLR1_Output_CC1S (2 <<  0) /* 01: Capture/Compare 1 selection */
#define CH32V003_TIM1_CHCTLR1_Output_CC1S_MASK (0x03)
#define CH32V003_TIM1_CHCTLR1_Input_OFFSET 0x0018
#define CH32V003_TIM1_CHCTLR1_Input       (CH32V003_TIM1_BASE + CH32V003_TIM1_CHCTLR1_Input_OFFSET)
#define CH32V003_TIM1_CHCTLR1_Input_IC2F  (4 << 12) /* 1000: Input capture 2 filter */
#define CH32V003_TIM1_CHCTLR1_Input_IC2F_MASK  (0x0f)
#define CH32V003_TIM1_CHCTLR1_Input_IC2PCS (2 << 10) /* 400: Input capture 2 prescaler */
#define CH32V003_TIM1_CHCTLR1_Input_IC2PCS_MASK (0x03)
#define CH32V003_TIM1_CHCTLR1_Input_CC2S  (2 <<  8) /* 100: Capture/Compare 2 selection */
#define CH32V003_TIM1_CHCTLR1_Input_CC2S_MASK  (0x03)
#define CH32V003_TIM1_CHCTLR1_Input_IC1F  (4 <<  4) /* 10: Input capture 1 filter */
#define CH32V003_TIM1_CHCTLR1_Input_IC1F_MASK  (0x0f)
#define CH32V003_TIM1_CHCTLR1_Input_IC1PSC (2 <<  2) /* 04: Input capture 1 prescaler */
#define CH32V003_TIM1_CHCTLR1_Input_IC1PSC_MASK (0x03)
#define CH32V003_TIM1_CHCTLR1_Input_CC1S  (2 <<  0) /* 01: Capture/Compare 1 selection */
#define CH32V003_TIM1_CHCTLR1_Input_CC1S_MASK  (0x03)
#define CH32V003_TIM1_CHCTLR2_Output_OFFSET 0x001c
#define CH32V003_TIM1_CHCTLR2_Output      (CH32V003_TIM1_BASE + CH32V003_TIM1_CHCTLR2_Output_OFFSET)
#define CH32V003_TIM1_CHCTLR2_Output_OC4CE (1 << 15) /* 8000: Output compare 4 clear enable */
#define CH32V003_TIM1_CHCTLR2_Output_OC4M (3 << 12) /* 1000: Output compare 4 mode */
#define CH32V003_TIM1_CHCTLR2_Output_OC4M_MASK (0x07)
#define CH32V003_TIM1_CHCTLR2_Output_OC4PE (1 << 11) /* 800: Output compare 4 preload enable */
#define CH32V003_TIM1_CHCTLR2_Output_OC4FE (1 << 10) /* 400: Output compare 4 fast enable */
#define CH32V003_TIM1_CHCTLR2_Output_CC4S (2 <<  8) /* 100: Capture/Compare 4 selection */
#define CH32V003_TIM1_CHCTLR2_Output_CC4S_MASK (0x03)
#define CH32V003_TIM1_CHCTLR2_Output_OC3CE (1 <<  7) /* 80: Output compare 3 clear enable */
#define CH32V003_TIM1_CHCTLR2_Output_OC3M (3 <<  4) /* 10: Output compare 3 mode */
#define CH32V003_TIM1_CHCTLR2_Output_OC3M_MASK (0x07)
#define CH32V003_TIM1_CHCTLR2_Output_OC3PE (1 <<  3) /* 08: Output compare 3 preload enable */
#define CH32V003_TIM1_CHCTLR2_Output_OC3FE (1 <<  2) /* 04: Output compare 3 fast enable */
#define CH32V003_TIM1_CHCTLR2_Output_CC3S (2 <<  0) /* 01: Capture/Compare 3 selection */
#define CH32V003_TIM1_CHCTLR2_Output_CC3S_MASK (0x03)
#define CH32V003_TIM1_CHCTLR2_Input_OFFSET 0x001c
#define CH32V003_TIM1_CHCTLR2_Input       (CH32V003_TIM1_BASE + CH32V003_TIM1_CHCTLR2_Input_OFFSET)
#define CH32V003_TIM1_CHCTLR2_Input_IC4F  (4 << 12) /* 1000: Input capture 4 filter */
#define CH32V003_TIM1_CHCTLR2_Input_IC4F_MASK  (0x0f)
#define CH32V003_TIM1_CHCTLR2_Input_IC4PSC (2 << 10) /* 400: Input capture 4 prescaler */
#define CH32V003_TIM1_CHCTLR2_Input_IC4PSC_MASK (0x03)
#define CH32V003_TIM1_CHCTLR2_Input_CC4S  (2 <<  8) /* 100: Capture/Compare 4 selection */
#define CH32V003_TIM1_CHCTLR2_Input_CC4S_MASK  (0x03)
#define CH32V003_TIM1_CHCTLR2_Input_IC3F  (4 <<  4) /* 10: Input capture 3 filter */
#define CH32V003_TIM1_CHCTLR2_Input_IC3F_MASK  (0x0f)
#define CH32V003_TIM1_CHCTLR2_Input_IC3PSC (2 <<  2) /* 04: Input capture 3 prescaler */
#define CH32V003_TIM1_CHCTLR2_Input_IC3PSC_MASK (0x03)
#define CH32V003_TIM1_CHCTLR2_Input_CC3S  (2 <<  0) /* 01: Capture/compare 3 selection */
#define CH32V003_TIM1_CHCTLR2_Input_CC3S_MASK  (0x03)
#define CH32V003_TIM1_CCER_OFFSET         0x0020
#define CH32V003_TIM1_CCER                (CH32V003_TIM1_BASE + CH32V003_TIM1_CCER_OFFSET)
#define CH32V003_TIM1_CCER_CC4P           (1 << 13) /* 2000: Capture/Compare 3 output Polarity */
#define CH32V003_TIM1_CCER_CC4E           (1 << 12) /* 1000: Capture/Compare 4 output enable */
#define CH32V003_TIM1_CCER_CC3NP          (1 << 11) /* 800: Capture/Compare 3 output Polarity */
#define CH32V003_TIM1_CCER_CC3NE          (1 << 10) /* 400: Capture/Compare 3 complementary output enable */
#define CH32V003_TIM1_CCER_CC3P           (1 <<  9) /* 200: Capture/Compare 3 output Polarity */
#define CH32V003_TIM1_CCER_CC3E           (1 <<  8) /* 100: Capture/Compare 3 output enable */
#define CH32V003_TIM1_CCER_CC2NP          (1 <<  7) /* 80: Capture/Compare 2 output Polarity */
#define CH32V003_TIM1_CCER_CC2NE          (1 <<  6) /* 40: Capture/Compare 2 complementary output enable */
#define CH32V003_TIM1_CCER_CC2P           (1 <<  5) /* 20: Capture/Compare 2 output Polarity */
#define CH32V003_TIM1_CCER_CC2E           (1 <<  4) /* 10: Capture/Compare 2 output enable */
#define CH32V003_TIM1_CCER_CC1NP          (1 <<  3) /* 08: Capture/Compare 1 output Polarity */
#define CH32V003_TIM1_CCER_CC1NE          (1 <<  2) /* 04: Capture/Compare 1 complementary output enable */
#define CH32V003_TIM1_CCER_CC1P           (1 <<  1) /* 02: Capture/Compare 1 output Polarity */
#define CH32V003_TIM1_CCER_CC1E           (1 <<  0) /* 01: Capture/Compare 1 output enable */
#define CH32V003_TIM1_CNT_OFFSET          0x0024
#define CH32V003_TIM1_CNT                 (CH32V003_TIM1_BASE + CH32V003_TIM1_CNT_OFFSET)
#define CH32V003_TIM1_CNT_CNT             (16 <<  0) /* 01: counter value */
#define CH32V003_TIM1_CNT_CNT_MASK             (0xffff)
#define CH32V003_TIM1_PSC_OFFSET          0x0028
#define CH32V003_TIM1_PSC                 (CH32V003_TIM1_BASE + CH32V003_TIM1_PSC_OFFSET)
#define CH32V003_TIM1_PSC_PSC             (16 <<  0) /* 01: Prescaler value */
#define CH32V003_TIM1_PSC_PSC_MASK             (0xffff)
#define CH32V003_TIM1_ATRLR_OFFSET        0x002c
#define CH32V003_TIM1_ATRLR               (CH32V003_TIM1_BASE + CH32V003_TIM1_ATRLR_OFFSET)
#define CH32V003_TIM1_ATRLR_ATRLR         (16 <<  0) /* 01: Auto-reload value */
#define CH32V003_TIM1_ATRLR_ATRLR_MASK         (0xffff)
#define CH32V003_TIM1_RPTCR_OFFSET        0x0030
#define CH32V003_TIM1_RPTCR               (CH32V003_TIM1_BASE + CH32V003_TIM1_RPTCR_OFFSET)
#define CH32V003_TIM1_RPTCR_RPTCR         (8 <<  0) /* 01: Repetition counter value */
#define CH32V003_TIM1_RPTCR_RPTCR_MASK         (0xff)
#define CH32V003_TIM1_CH1CVR_OFFSET       0x0034
#define CH32V003_TIM1_CH1CVR              (CH32V003_TIM1_BASE + CH32V003_TIM1_CH1CVR_OFFSET)
#define CH32V003_TIM1_CH1CVR_CH1CVR       (16 <<  0) /* 01: Capture/Compare 1 value */
#define CH32V003_TIM1_CH1CVR_CH1CVR_MASK       (0xffff)
#define CH32V003_TIM1_CH2CVR_OFFSET       0x0038
#define CH32V003_TIM1_CH2CVR              (CH32V003_TIM1_BASE + CH32V003_TIM1_CH2CVR_OFFSET)
#define CH32V003_TIM1_CH2CVR_CH2CVR       (16 <<  0) /* 01: Capture/Compare 2 value */
#define CH32V003_TIM1_CH2CVR_CH2CVR_MASK       (0xffff)
#define CH32V003_TIM1_CH3CVR_OFFSET       0x003c
#define CH32V003_TIM1_CH3CVR              (CH32V003_TIM1_BASE + CH32V003_TIM1_CH3CVR_OFFSET)
#define CH32V003_TIM1_CH3CVR_CH3CVR       (16 <<  0) /* 01: Capture/Compare value */
#define CH32V003_TIM1_CH3CVR_CH3CVR_MASK       (0xffff)
#define CH32V003_TIM1_CH4CVR_OFFSET       0x0040
#define CH32V003_TIM1_CH4CVR              (CH32V003_TIM1_BASE + CH32V003_TIM1_CH4CVR_OFFSET)
#define CH32V003_TIM1_CH4CVR_CH4CVR       (16 <<  0) /* 01: Capture/Compare value */
#define CH32V003_TIM1_CH4CVR_CH4CVR_MASK       (0xffff)
#define CH32V003_TIM1_BDTR_OFFSET         0x0044
#define CH32V003_TIM1_BDTR                (CH32V003_TIM1_BASE + CH32V003_TIM1_BDTR_OFFSET)
#define CH32V003_TIM1_BDTR_MOE            (1 << 15) /* 8000: Main output enable */
#define CH32V003_TIM1_BDTR_AOE            (1 << 14) /* 4000: Automatic output enable */
#define CH32V003_TIM1_BDTR_BKP            (1 << 13) /* 2000: Break polarity */
#define CH32V003_TIM1_BDTR_BKE            (1 << 12) /* 1000: Break enable */
#define CH32V003_TIM1_BDTR_OSSR           (1 << 11) /* 800: Off-state selection for Run mode */
#define CH32V003_TIM1_BDTR_OSSI           (1 << 10) /* 400: Off-state selection for Idle mode */
#define CH32V003_TIM1_BDTR_LOCK           (2 <<  8) /* 100: Lock configuration */
#define CH32V003_TIM1_BDTR_LOCK_MASK           (0x03)
#define CH32V003_TIM1_BDTR_DTG            (8 <<  0) /* 01: Dead-time generator setup */
#define CH32V003_TIM1_BDTR_DTG_MASK            (0xff)
#define CH32V003_TIM1_DMACFGR_OFFSET      0x0048
#define CH32V003_TIM1_DMACFGR             (CH32V003_TIM1_BASE + CH32V003_TIM1_DMACFGR_OFFSET)
#define CH32V003_TIM1_DMACFGR_DBL         (5 <<  8) /* 100: DMA burst length */
#define CH32V003_TIM1_DMACFGR_DBL_MASK         (0x1f)
#define CH32V003_TIM1_DMACFGR_DBA         (5 <<  0) /* 01: DMA base address */
#define CH32V003_TIM1_DMACFGR_DBA_MASK         (0x1f)
#define CH32V003_TIM1_DMAADR_OFFSET       0x004c
#define CH32V003_TIM1_DMAADR              (CH32V003_TIM1_BASE + CH32V003_TIM1_DMAADR_OFFSET)
#define CH32V003_TIM1_DMAADR_DMAADR       (16 <<  0) /* 01: DMA register for burst accesses */
#define CH32V003_TIM1_DMAADR_DMAADR_MASK       (0xffff)

/* TIM2 - General purpose timer */
#define CH32V003_TIM2_BASE                0x40000000
#define CH32V003_TIM2_CTLR1_OFFSET        0x0000
#define CH32V003_TIM2_CTLR1               (CH32V003_TIM2_BASE + CH32V003_TIM2_CTLR1_OFFSET)
#define CH32V003_TIM2_CTLR1_TMR_CAP_LVL_EN (1 << 15) /* 8000: Timer capture level indication enable */
#define CH32V003_TIM2_CTLR1_TMR_CAP_OV_EN (1 << 14) /* 4000: Timer capture value configuration enable */
#define CH32V003_TIM2_CTLR1_CKD           (2 <<  8) /* 100: Clock division */
#define CH32V003_TIM2_CTLR1_CKD_MASK           (0x03)
#define CH32V003_TIM2_CTLR1_ARPE          (1 <<  7) /* 80: Auto-reload preload enable */
#define CH32V003_TIM2_CTLR1_CMS           (2 <<  5) /* 20: Center-aligned mode selection */
#define CH32V003_TIM2_CTLR1_CMS_MASK           (0x03)
#define CH32V003_TIM2_CTLR1_DIR           (1 <<  4) /* 10: Direction */
#define CH32V003_TIM2_CTLR1_OPM           (1 <<  3) /* 08: One-pulse mode */
#define CH32V003_TIM2_CTLR1_URS           (1 <<  2) /* 04: Update request source */
#define CH32V003_TIM2_CTLR1_UDIS          (1 <<  1) /* 02: Update disable */
#define CH32V003_TIM2_CTLR1_CEN           (1 <<  0) /* 01: Counter enable */
#define CH32V003_TIM2_CTLR2_OFFSET        0x0004
#define CH32V003_TIM2_CTLR2               (CH32V003_TIM2_BASE + CH32V003_TIM2_CTLR2_OFFSET)
#define CH32V003_TIM2_CTLR2_TI1S          (1 <<  7) /* 80: TI1 selection */
#define CH32V003_TIM2_CTLR2_MMS           (3 <<  4) /* 10: Master mode selection */
#define CH32V003_TIM2_CTLR2_MMS_MASK           (0x07)
#define CH32V003_TIM2_CTLR2_CCDS          (1 <<  3) /* 08: Capture/compare DMA selection */
#define CH32V003_TIM2_SMCFGR_OFFSET       0x0008
#define CH32V003_TIM2_SMCFGR              (CH32V003_TIM2_BASE + CH32V003_TIM2_SMCFGR_OFFSET)
#define CH32V003_TIM2_SMCFGR_ETP          (1 << 15) /* 8000: External trigger polarity */
#define CH32V003_TIM2_SMCFGR_ECE          (1 << 14) /* 4000: External clock enable */
#define CH32V003_TIM2_SMCFGR_ETPS         (2 << 12) /* 1000: External trigger prescaler */
#define CH32V003_TIM2_SMCFGR_ETPS_MASK         (0x03)
#define CH32V003_TIM2_SMCFGR_ETF          (4 <<  8) /* 100: External trigger filter */
#define CH32V003_TIM2_SMCFGR_ETF_MASK          (0x0f)
#define CH32V003_TIM2_SMCFGR_MSM          (1 <<  7) /* 80: Master/Slave mode */
#define CH32V003_TIM2_SMCFGR_TS           (3 <<  4) /* 10: Trigger selection */
#define CH32V003_TIM2_SMCFGR_TS_MASK           (0x07)
#define CH32V003_TIM2_SMCFGR_SMS          (3 <<  0) /* 01: Slave mode selection */
#define CH32V003_TIM2_SMCFGR_SMS_MASK          (0x07)
#define CH32V003_TIM2_DMAINTENR_OFFSET    0x000c
#define CH32V003_TIM2_DMAINTENR           (CH32V003_TIM2_BASE + CH32V003_TIM2_DMAINTENR_OFFSET)
#define CH32V003_TIM2_DMAINTENR_TDE       (1 << 14) /* 4000: Trigger DMA request enable */
#define CH32V003_TIM2_DMAINTENR_CC4DE     (1 << 12) /* 1000: Capture/Compare 4 DMA request enable */
#define CH32V003_TIM2_DMAINTENR_CC3DE     (1 << 11) /* 800: Capture/Compare 3 DMA request enable */
#define CH32V003_TIM2_DMAINTENR_CC2DE     (1 << 10) /* 400: Capture/Compare 2 DMA request enable */
#define CH32V003_TIM2_DMAINTENR_CC1DE     (1 <<  9) /* 200: Capture/Compare 1 DMA request enable */
#define CH32V003_TIM2_DMAINTENR_UDE       (1 <<  8) /* 100: Update DMA request enable */
#define CH32V003_TIM2_DMAINTENR_TIE       (1 <<  6) /* 40: Trigger interrupt enable */
#define CH32V003_TIM2_DMAINTENR_CC4IE     (1 <<  4) /* 10: Capture/Compare 4 interrupt enable */
#define CH32V003_TIM2_DMAINTENR_CC3IE     (1 <<  3) /* 08: Capture/Compare 3 interrupt enable */
#define CH32V003_TIM2_DMAINTENR_CC2IE     (1 <<  2) /* 04: Capture/Compare 2 interrupt enable */
#define CH32V003_TIM2_DMAINTENR_CC1IE     (1 <<  1) /* 02: Capture/Compare 1 interrupt enable */
#define CH32V003_TIM2_DMAINTENR_UIE       (1 <<  0) /* 01: Update interrupt enable */
#define CH32V003_TIM2_INTFR_OFFSET        0x0010
#define CH32V003_TIM2_INTFR               (CH32V003_TIM2_BASE + CH32V003_TIM2_INTFR_OFFSET)
#define CH32V003_TIM2_INTFR_CC4OF         (1 << 12) /* 1000: Capture/Compare 4 overcapture flag */
#define CH32V003_TIM2_INTFR_CC3OF         (1 << 11) /* 800: Capture/Compare 3 overcapture flag */
#define CH32V003_TIM2_INTFR_CC2OF         (1 << 10) /* 400: Capture/compare 2 overcapture flag */
#define CH32V003_TIM2_INTFR_CC1OF         (1 <<  9) /* 200: Capture/Compare 1 overcapture flag */
#define CH32V003_TIM2_INTFR_TIF           (1 <<  6) /* 40: Trigger interrupt flag */
#define CH32V003_TIM2_INTFR_CC4IF         (1 <<  4) /* 10: Capture/Compare 4 interrupt flag */
#define CH32V003_TIM2_INTFR_CC3IF         (1 <<  3) /* 08: Capture/Compare 3 interrupt flag */
#define CH32V003_TIM2_INTFR_CC2IF         (1 <<  2) /* 04: Capture/Compare 2 interrupt flag */
#define CH32V003_TIM2_INTFR_CC1IF         (1 <<  1) /* 02: Capture/compare 1 interrupt flag */
#define CH32V003_TIM2_INTFR_UIF           (1 <<  0) /* 01: Update interrupt flag */
#define CH32V003_TIM2_SWEVGR_OFFSET       0x0014
#define CH32V003_TIM2_SWEVGR              (CH32V003_TIM2_BASE + CH32V003_TIM2_SWEVGR_OFFSET)
#define CH32V003_TIM2_SWEVGR_TG           (1 <<  6) /* 40: Trigger generation */
#define CH32V003_TIM2_SWEVGR_CC4G         (1 <<  4) /* 10: Capture/compare 4 generation */
#define CH32V003_TIM2_SWEVGR_CC3G         (1 <<  3) /* 08: Capture/compare 3 generation */
#define CH32V003_TIM2_SWEVGR_CC2G         (1 <<  2) /* 04: Capture/compare 2 generation */
#define CH32V003_TIM2_SWEVGR_CC1G         (1 <<  1) /* 02: Capture/compare 1 generation */
#define CH32V003_TIM2_SWEVGR_UG           (1 <<  0) /* 01: Update generation */
#define CH32V003_TIM2_CHCTLR1_Output_OFFSET 0x0018
#define CH32V003_TIM2_CHCTLR1_Output      (CH32V003_TIM2_BASE + CH32V003_TIM2_CHCTLR1_Output_OFFSET)
#define CH32V003_TIM2_CHCTLR1_Output_OC2CE (1 << 15) /* 8000: Output compare 2 clear enable */
#define CH32V003_TIM2_CHCTLR1_Output_OC2M (3 << 12) /* 1000: Output compare 2 mode */
#define CH32V003_TIM2_CHCTLR1_Output_OC2M_MASK (0x07)
#define CH32V003_TIM2_CHCTLR1_Output_OC2PE (1 << 11) /* 800: Output compare 2 preload enable */
#define CH32V003_TIM2_CHCTLR1_Output_OC2FE (1 << 10) /* 400: Output compare 2 fast enable */
#define CH32V003_TIM2_CHCTLR1_Output_CC2S (2 <<  8) /* 100: Capture/Compare 2 selection */
#define CH32V003_TIM2_CHCTLR1_Output_CC2S_MASK (0x03)
#define CH32V003_TIM2_CHCTLR1_Output_OC1CE (1 <<  7) /* 80: Output compare 1 clear enable */
#define CH32V003_TIM2_CHCTLR1_Output_OC1M (3 <<  4) /* 10: Output compare 1 mode */
#define CH32V003_TIM2_CHCTLR1_Output_OC1M_MASK (0x07)
#define CH32V003_TIM2_CHCTLR1_Output_OC1PE (1 <<  3) /* 08: Output compare 1 preload enable */
#define CH32V003_TIM2_CHCTLR1_Output_OC1FE (1 <<  2) /* 04: Output compare 1 fast enable */
#define CH32V003_TIM2_CHCTLR1_Output_CC1S (2 <<  0) /* 01: Capture/Compare 1 selection */
#define CH32V003_TIM2_CHCTLR1_Output_CC1S_MASK (0x03)
#define CH32V003_TIM2_CHCTLR1_Input_OFFSET 0x0018
#define CH32V003_TIM2_CHCTLR1_Input       (CH32V003_TIM2_BASE + CH32V003_TIM2_CHCTLR1_Input_OFFSET)
#define CH32V003_TIM2_CHCTLR1_Input_IC2F  (4 << 12) /* 1000: Input capture 2 filter */
#define CH32V003_TIM2_CHCTLR1_Input_IC2F_MASK  (0x0f)
#define CH32V003_TIM2_CHCTLR1_Input_IC2PSC (2 << 10) /* 400: Input capture 2 prescaler */
#define CH32V003_TIM2_CHCTLR1_Input_IC2PSC_MASK (0x03)
#define CH32V003_TIM2_CHCTLR1_Input_CC2S  (2 <<  8) /* 100: Capture/compare 2 selection */
#define CH32V003_TIM2_CHCTLR1_Input_CC2S_MASK  (0x03)
#define CH32V003_TIM2_CHCTLR1_Input_IC1F  (4 <<  4) /* 10: Input capture 1 filter */
#define CH32V003_TIM2_CHCTLR1_Input_IC1F_MASK  (0x0f)
#define CH32V003_TIM2_CHCTLR1_Input_IC1PSC (2 <<  2) /* 04: Input capture 1 prescaler */
#define CH32V003_TIM2_CHCTLR1_Input_IC1PSC_MASK (0x03)
#define CH32V003_TIM2_CHCTLR1_Input_CC1S  (2 <<  0) /* 01: Capture/Compare 1 selection */
#define CH32V003_TIM2_CHCTLR1_Input_CC1S_MASK  (0x03)
#define CH32V003_TIM2_CHCTLR2_Output_OFFSET 0x001c
#define CH32V003_TIM2_CHCTLR2_Output      (CH32V003_TIM2_BASE + CH32V003_TIM2_CHCTLR2_Output_OFFSET)
#define CH32V003_TIM2_CHCTLR2_Output_OC4CE (1 << 15) /* 8000: Output compare 4 clear enable */
#define CH32V003_TIM2_CHCTLR2_Output_OC4M (3 << 12) /* 1000: Output compare 4 mode */
#define CH32V003_TIM2_CHCTLR2_Output_OC4M_MASK (0x07)
#define CH32V003_TIM2_CHCTLR2_Output_OC4PE (1 << 11) /* 800: Output compare 4 preload enable */
#define CH32V003_TIM2_CHCTLR2_Output_OC4FE (1 << 10) /* 400: Output compare 4 fast enable */
#define CH32V003_TIM2_CHCTLR2_Output_CC4S (2 <<  8) /* 100: Capture/Compare 4 selection */
#define CH32V003_TIM2_CHCTLR2_Output_CC4S_MASK (0x03)
#define CH32V003_TIM2_CHCTLR2_Output_OC3CE (1 <<  7) /* 80: Output compare 3 clear enable */
#define CH32V003_TIM2_CHCTLR2_Output_OC3M (3 <<  4) /* 10: Output compare 3 mode */
#define CH32V003_TIM2_CHCTLR2_Output_OC3M_MASK (0x07)
#define CH32V003_TIM2_CHCTLR2_Output_OC3PE (1 <<  3) /* 08: Output compare 3 preload enable */
#define CH32V003_TIM2_CHCTLR2_Output_OC3FE (1 <<  2) /* 04: Output compare 3 fast enable */
#define CH32V003_TIM2_CHCTLR2_Output_CC3S (2 <<  0) /* 01: Capture/Compare 3 selection */
#define CH32V003_TIM2_CHCTLR2_Output_CC3S_MASK (0x03)
#define CH32V003_TIM2_CHCTLR2_Input_OFFSET 0x001c
#define CH32V003_TIM2_CHCTLR2_Input       (CH32V003_TIM2_BASE + CH32V003_TIM2_CHCTLR2_Input_OFFSET)
#define CH32V003_TIM2_CHCTLR2_Input_IC4F  (4 << 12) /* 1000: Input capture 4 filter */
#define CH32V003_TIM2_CHCTLR2_Input_IC4F_MASK  (0x0f)
#define CH32V003_TIM2_CHCTLR2_Input_IC4PSC (2 << 10) /* 400: Input capture 4 prescaler */
#define CH32V003_TIM2_CHCTLR2_Input_IC4PSC_MASK (0x03)
#define CH32V003_TIM2_CHCTLR2_Input_CC4S  (2 <<  8) /* 100: Capture/Compare 4 selection */
#define CH32V003_TIM2_CHCTLR2_Input_CC4S_MASK  (0x03)
#define CH32V003_TIM2_CHCTLR2_Input_IC3F  (4 <<  4) /* 10: Input capture 3 filter */
#define CH32V003_TIM2_CHCTLR2_Input_IC3F_MASK  (0x0f)
#define CH32V003_TIM2_CHCTLR2_Input_IC3PSC (2 <<  2) /* 04: Input capture 3 prescaler */
#define CH32V003_TIM2_CHCTLR2_Input_IC3PSC_MASK (0x03)
#define CH32V003_TIM2_CHCTLR2_Input_CC3S  (2 <<  0) /* 01: Capture/Compare 3 selection */
#define CH32V003_TIM2_CHCTLR2_Input_CC3S_MASK  (0x03)
#define CH32V003_TIM2_CCER_OFFSET         0x0020
#define CH32V003_TIM2_CCER                (CH32V003_TIM2_BASE + CH32V003_TIM2_CCER_OFFSET)
#define CH32V003_TIM2_CCER_CC4P           (1 << 13) /* 2000: Capture/Compare 3 output Polarity */
#define CH32V003_TIM2_CCER_CC4E           (1 << 12) /* 1000: Capture/Compare 4 output enable */
#define CH32V003_TIM2_CCER_CC3P           (1 <<  9) /* 200: Capture/Compare 3 output Polarity */
#define CH32V003_TIM2_CCER_CC3E           (1 <<  8) /* 100: Capture/Compare 3 output enable */
#define CH32V003_TIM2_CCER_CC2P           (1 <<  5) /* 20: Capture/Compare 2 output Polarity */
#define CH32V003_TIM2_CCER_CC2E           (1 <<  4) /* 10: Capture/Compare 2 output enable */
#define CH32V003_TIM2_CCER_CC1P           (1 <<  1) /* 02: Capture/Compare 1 output Polarity */
#define CH32V003_TIM2_CCER_CC1E           (1 <<  0) /* 01: Capture/Compare 1 output enable */
#define CH32V003_TIM2_CNT_OFFSET          0x0024
#define CH32V003_TIM2_CNT                 (CH32V003_TIM2_BASE + CH32V003_TIM2_CNT_OFFSET)
#define CH32V003_TIM2_CNT_CNT             (16 <<  0) /* 01: counter value */
#define CH32V003_TIM2_CNT_CNT_MASK             (0xffff)
#define CH32V003_TIM2_PSC_OFFSET          0x0028
#define CH32V003_TIM2_PSC                 (CH32V003_TIM2_BASE + CH32V003_TIM2_PSC_OFFSET)
#define CH32V003_TIM2_PSC_PSC             (16 <<  0) /* 01: Prescaler value */
#define CH32V003_TIM2_PSC_PSC_MASK             (0xffff)
#define CH32V003_TIM2_ATRLR_OFFSET        0x002c
#define CH32V003_TIM2_ATRLR               (CH32V003_TIM2_BASE + CH32V003_TIM2_ATRLR_OFFSET)
#define CH32V003_TIM2_ATRLR_ATRLR         (16 <<  0) /* 01: Auto-reload value */
#define CH32V003_TIM2_ATRLR_ATRLR_MASK         (0xffff)
#define CH32V003_TIM2_CH1CVR_OFFSET       0x0034
#define CH32V003_TIM2_CH1CVR              (CH32V003_TIM2_BASE + CH32V003_TIM2_CH1CVR_OFFSET)
#define CH32V003_TIM2_CH1CVR_CH1CVR       (16 <<  0) /* 01: Capture/Compare 1 value */
#define CH32V003_TIM2_CH1CVR_CH1CVR_MASK       (0xffff)
#define CH32V003_TIM2_CH2CVR_OFFSET       0x0038
#define CH32V003_TIM2_CH2CVR              (CH32V003_TIM2_BASE + CH32V003_TIM2_CH2CVR_OFFSET)
#define CH32V003_TIM2_CH2CVR_CH2CVR       (16 <<  0) /* 01: Capture/Compare 2 value */
#define CH32V003_TIM2_CH2CVR_CH2CVR_MASK       (0xffff)
#define CH32V003_TIM2_CH3CVR_OFFSET       0x003c
#define CH32V003_TIM2_CH3CVR              (CH32V003_TIM2_BASE + CH32V003_TIM2_CH3CVR_OFFSET)
#define CH32V003_TIM2_CH3CVR_CH3CVR       (16 <<  0) /* 01: Capture/Compare value */
#define CH32V003_TIM2_CH3CVR_CH3CVR_MASK       (0xffff)
#define CH32V003_TIM2_CH4CVR_OFFSET       0x0040
#define CH32V003_TIM2_CH4CVR              (CH32V003_TIM2_BASE + CH32V003_TIM2_CH4CVR_OFFSET)
#define CH32V003_TIM2_CH4CVR_CH4CVR       (16 <<  0) /* 01: Capture/Compare value */
#define CH32V003_TIM2_CH4CVR_CH4CVR_MASK       (0xffff)
#define CH32V003_TIM2_DMACFGR_OFFSET      0x0048
#define CH32V003_TIM2_DMACFGR             (CH32V003_TIM2_BASE + CH32V003_TIM2_DMACFGR_OFFSET)
#define CH32V003_TIM2_DMACFGR_DBL         (5 <<  8) /* 100: DMA burst length */
#define CH32V003_TIM2_DMACFGR_DBL_MASK         (0x1f)
#define CH32V003_TIM2_DMACFGR_DBA         (5 <<  0) /* 01: DMA base address */
#define CH32V003_TIM2_DMACFGR_DBA_MASK         (0x1f)
#define CH32V003_TIM2_DMAADR_OFFSET       0x004c
#define CH32V003_TIM2_DMAADR              (CH32V003_TIM2_BASE + CH32V003_TIM2_DMAADR_OFFSET)
#define CH32V003_TIM2_DMAADR_DMAADR       (16 <<  0) /* 01: DMA register for burst accesses */
#define CH32V003_TIM2_DMAADR_DMAADR_MASK       (0xffff)

/* I2C1 - Inter integrated circuit */
#define CH32V003_I2C1_BASE                0x40005400
#define CH32V003_I2C1_CTLR1_OFFSET        0x0000
#define CH32V003_I2C1_CTLR1               (CH32V003_I2C1_BASE + CH32V003_I2C1_CTLR1_OFFSET)
#define CH32V003_I2C1_CTLR1_SWRST         (1 << 15) /* 8000: Software reset */
#define CH32V003_I2C1_CTLR1_PEC           (1 << 12) /* 1000: Packet error checking */
#define CH32V003_I2C1_CTLR1_POS           (1 << 11) /* 800: Acknowledge/PEC Position (for data reception) */
#define CH32V003_I2C1_CTLR1_ACK           (1 << 10) /* 400: Acknowledge enable */
#define CH32V003_I2C1_CTLR1_STOP          (1 <<  9) /* 200: Stop generation */
#define CH32V003_I2C1_CTLR1_START         (1 <<  8) /* 100: Start generation */
#define CH32V003_I2C1_CTLR1_NOSTRETCH     (1 <<  7) /* 80: Clock stretching disable (Slave mode) */
#define CH32V003_I2C1_CTLR1_ENGC          (1 <<  6) /* 40: General call enable */
#define CH32V003_I2C1_CTLR1_ENPEC         (1 <<  5) /* 20: PEC enable */
#define CH32V003_I2C1_CTLR1_ENARP         (1 <<  4) /* 10: ARP enable */
#define CH32V003_I2C1_CTLR1_PE            (1 <<  0) /* 01: Peripheral enable */
#define CH32V003_I2C1_CTLR2_OFFSET        0x0004
#define CH32V003_I2C1_CTLR2               (CH32V003_I2C1_BASE + CH32V003_I2C1_CTLR2_OFFSET)
#define CH32V003_I2C1_CTLR2_LAST          (1 << 12) /* 1000: DMA last transfer */
#define CH32V003_I2C1_CTLR2_DMAEN         (1 << 11) /* 800: DMA requests enable */
#define CH32V003_I2C1_CTLR2_ITBUFEN       (1 << 10) /* 400: Buffer interrupt enable */
#define CH32V003_I2C1_CTLR2_ITEVTEN       (1 <<  9) /* 200: Event interrupt enable */
#define CH32V003_I2C1_CTLR2_ITERREN       (1 <<  8) /* 100: Error interrupt enable */
#define CH32V003_I2C1_CTLR2_FREQ          (6 <<  0) /* 01: Peripheral clock frequency */
#define CH32V003_I2C1_CTLR2_FREQ_MASK          (0x3f)
#define CH32V003_I2C1_OADDR1_OFFSET       0x0008
#define CH32V003_I2C1_OADDR1              (CH32V003_I2C1_BASE + CH32V003_I2C1_OADDR1_OFFSET)
#define CH32V003_I2C1_OADDR1_ADDMODE      (1 << 15) /* 8000: Addressing mode (slave mode) */
#define CH32V003_I2C1_OADDR1_ADD9_8       (2 <<  8) /* 100: Interface address */
#define CH32V003_I2C1_OADDR1_ADD9_8_MASK       (0x03)
#define CH32V003_I2C1_OADDR1_ADD7_1       (7 <<  1) /* 02: Interface address */
#define CH32V003_I2C1_OADDR1_ADD7_1_MASK       (0x7f)
#define CH32V003_I2C1_OADDR1_ADD0         (1 <<  0) /* 01: Interface address */
#define CH32V003_I2C1_OADDR2_OFFSET       0x000c
#define CH32V003_I2C1_OADDR2              (CH32V003_I2C1_BASE + CH32V003_I2C1_OADDR2_OFFSET)
#define CH32V003_I2C1_OADDR2_ADD2         (7 <<  1) /* 02: Interface address */
#define CH32V003_I2C1_OADDR2_ADD2_MASK         (0x7f)
#define CH32V003_I2C1_OADDR2_ENDUAL       (1 <<  0) /* 01: Dual addressing mode enable */
#define CH32V003_I2C1_DATAR_OFFSET        0x0010
#define CH32V003_I2C1_DATAR               (CH32V003_I2C1_BASE + CH32V003_I2C1_DATAR_OFFSET)
#define CH32V003_I2C1_DATAR_DATAR         (8 <<  0) /* 01: 8-bit data register */
#define CH32V003_I2C1_DATAR_DATAR_MASK         (0xff)
#define CH32V003_I2C1_STAR1_OFFSET        0x0014
#define CH32V003_I2C1_STAR1               (CH32V003_I2C1_BASE + CH32V003_I2C1_STAR1_OFFSET)
#define CH32V003_I2C1_STAR1_PECERR        (1 << 12) /* 1000: PEC Error in reception */
#define CH32V003_I2C1_STAR1_OVR           (1 << 11) /* 800: Overrun/Underrun */
#define CH32V003_I2C1_STAR1_AF            (1 << 10) /* 400: Acknowledge failure */
#define CH32V003_I2C1_STAR1_ARLO          (1 <<  9) /* 200: Arbitration lost (master mode) */
#define CH32V003_I2C1_STAR1_BERR          (1 <<  8) /* 100: Bus error */
#define CH32V003_I2C1_STAR1_TxE           (1 <<  7) /* 80: Data register empty (transmitters) */
#define CH32V003_I2C1_STAR1_RxNE          (1 <<  6) /* 40: Data register not empty (receivers) */
#define CH32V003_I2C1_STAR1_STOPF         (1 <<  4) /* 10: Stop detection (slave mode) */
#define CH32V003_I2C1_STAR1_ADD10         (1 <<  3) /* 08: 10-bit header sent (Master mode) */
#define CH32V003_I2C1_STAR1_BTF           (1 <<  2) /* 04: Byte transfer finished */
#define CH32V003_I2C1_STAR1_ADDR          (1 <<  1) /* 02: Address sent (master mode)/matched (slave mode) */
#define CH32V003_I2C1_STAR1_SB            (1 <<  0) /* 01: Start bit (Master mode) */
#define CH32V003_I2C1_STAR2_OFFSET        0x0018
#define CH32V003_I2C1_STAR2               (CH32V003_I2C1_BASE + CH32V003_I2C1_STAR2_OFFSET)
#define CH32V003_I2C1_STAR2_PEC           (8 <<  8) /* 100: acket error checking register */
#define CH32V003_I2C1_STAR2_PEC_MASK           (0xff)
#define CH32V003_I2C1_STAR2_DUALF         (1 <<  7) /* 80: Dual flag (Slave mode) */
#define CH32V003_I2C1_STAR2_GENCALL       (1 <<  4) /* 10: General call address (Slave mode) */
#define CH32V003_I2C1_STAR2_TRA           (1 <<  2) /* 04: Transmitter/receiver */
#define CH32V003_I2C1_STAR2_BUSY          (1 <<  1) /* 02: Bus busy */
#define CH32V003_I2C1_STAR2_MSL           (1 <<  0) /* 01: Master/slave */
#define CH32V003_I2C1_CKCFGR_OFFSET       0x001c
#define CH32V003_I2C1_CKCFGR              (CH32V003_I2C1_BASE + CH32V003_I2C1_CKCFGR_OFFSET)
#define CH32V003_I2C1_CKCFGR_F_S          (1 << 15) /* 8000: I2C master mode selection */
#define CH32V003_I2C1_CKCFGR_DUTY         (1 << 14) /* 4000: Fast mode duty cycle */
#define CH32V003_I2C1_CKCFGR_CCR          (12 <<  0) /* 01: Clock control register in Fast/Standard mode (Master mode) */
#define CH32V003_I2C1_CKCFGR_CCR_MASK          (0xfff)

/* SPI1 - Serial peripheral interface */
#define CH32V003_SPI1_BASE                0x40013000
#define CH32V003_SPI1_CTLR1_OFFSET        0x0000
#define CH32V003_SPI1_CTLR1               (CH32V003_SPI1_BASE + CH32V003_SPI1_CTLR1_OFFSET)
#define CH32V003_SPI1_CTLR1_BIDIMODE      (1 << 15) /* 8000: Bidirectional data mode enable */
#define CH32V003_SPI1_CTLR1_BIDIOE        (1 << 14) /* 4000: Output enable in bidirectional mode */
#define CH32V003_SPI1_CTLR1_CRCEN         (1 << 13) /* 2000: Hardware CRC calculation enable */
#define CH32V003_SPI1_CTLR1_CRCNEXT       (1 << 12) /* 1000: CRC transfer next */
#define CH32V003_SPI1_CTLR1_DFF           (1 << 11) /* 800: Data frame format */
#define CH32V003_SPI1_CTLR1_RXONLY        (1 << 10) /* 400: Receive only */
#define CH32V003_SPI1_CTLR1_SSM           (1 <<  9) /* 200: Software slave management */
#define CH32V003_SPI1_CTLR1_SSI           (1 <<  8) /* 100: Internal slave select */
#define CH32V003_SPI1_CTLR1_LSBFIRST      (1 <<  7) /* 80: Frame format */
#define CH32V003_SPI1_CTLR1_SPE           (1 <<  6) /* 40: SPI enable */
#define CH32V003_SPI1_CTLR1_BR            (3 <<  3) /* 08: Baud rate control */
#define CH32V003_SPI1_CTLR1_BR_MASK            (0x07)
#define CH32V003_SPI1_CTLR1_MSTR          (1 <<  2) /* 04: Master selection */
#define CH32V003_SPI1_CTLR1_CPOL          (1 <<  1) /* 02: Clock polarity */
#define CH32V003_SPI1_CTLR1_CPHA          (1 <<  0) /* 01: Clock phase */
#define CH32V003_SPI1_CTLR2_OFFSET        0x0004
#define CH32V003_SPI1_CTLR2               (CH32V003_SPI1_BASE + CH32V003_SPI1_CTLR2_OFFSET)
#define CH32V003_SPI1_CTLR2_TXEIE         (1 <<  7) /* 80: Tx buffer empty interrupt enable */
#define CH32V003_SPI1_CTLR2_RXNEIE        (1 <<  6) /* 40: RX buffer not empty interrupt enable */
#define CH32V003_SPI1_CTLR2_ERRIE         (1 <<  5) /* 20: Error interrupt enable */
#define CH32V003_SPI1_CTLR2_SSOE          (1 <<  2) /* 04: SS output enable */
#define CH32V003_SPI1_CTLR2_TXDMAEN       (1 <<  1) /* 02: Tx buffer DMA enable */
#define CH32V003_SPI1_CTLR2_RXDMAEN       (1 <<  0) /* 01: Rx buffer DMA enable */
#define CH32V003_SPI1_STATR_OFFSET        0x0008
#define CH32V003_SPI1_STATR               (CH32V003_SPI1_BASE + CH32V003_SPI1_STATR_OFFSET)
#define CH32V003_SPI1_STATR_BSY           (1 <<  7) /* 80: Busy flag */
#define CH32V003_SPI1_STATR_OVR           (1 <<  6) /* 40: Overrun flag */
#define CH32V003_SPI1_STATR_MODF          (1 <<  5) /* 20: Mode fault */
#define CH32V003_SPI1_STATR_CRCERR        (1 <<  4) /* 10: CRC error flag */
#define CH32V003_SPI1_STATR_CHSID         (1 <<  2) /* 04: Channel side */
#define CH32V003_SPI1_STATR_UDR           (1 <<  3) /* 08: Underrun flag */
#define CH32V003_SPI1_STATR_TXE           (1 <<  1) /* 02: Transmit buffer empty */
#define CH32V003_SPI1_STATR_RXNE          (1 <<  0) /* 01: Receive buffer not empty */
#define CH32V003_SPI1_DATAR_OFFSET        0x000c
#define CH32V003_SPI1_DATAR               (CH32V003_SPI1_BASE + CH32V003_SPI1_DATAR_OFFSET)
#define CH32V003_SPI1_DATAR_DATAR         (16 <<  0) /* 01: Data register */
#define CH32V003_SPI1_DATAR_DATAR_MASK         (0xffff)
#define CH32V003_SPI1_CRCR_OFFSET         0x0010
#define CH32V003_SPI1_CRCR                (CH32V003_SPI1_BASE + CH32V003_SPI1_CRCR_OFFSET)
#define CH32V003_SPI1_CRCR_CRCPOLY        (16 <<  0) /* 01: CRC polynomial register */
#define CH32V003_SPI1_CRCR_CRCPOLY_MASK        (0xffff)
#define CH32V003_SPI1_RCRCR_OFFSET        0x0014
#define CH32V003_SPI1_RCRCR               (CH32V003_SPI1_BASE + CH32V003_SPI1_RCRCR_OFFSET)
#define CH32V003_SPI1_RCRCR_RXCRC         (16 <<  0) /* 01: Rx CRC register */
#define CH32V003_SPI1_RCRCR_RXCRC_MASK         (0xffff)
#define CH32V003_SPI1_TCRCR_OFFSET        0x0018
#define CH32V003_SPI1_TCRCR               (CH32V003_SPI1_BASE + CH32V003_SPI1_TCRCR_OFFSET)
#define CH32V003_SPI1_TCRCR_TXCRC         (16 <<  0) /* 01: Tx CRC register */
#define CH32V003_SPI1_TCRCR_TXCRC_MASK         (0xffff)
#define CH32V003_SPI1_HSCR_OFFSET         0x0024
#define CH32V003_SPI1_HSCR                (CH32V003_SPI1_BASE + CH32V003_SPI1_HSCR_OFFSET)
#define CH32V003_SPI1_HSCR_HSRXEN         (1 <<  0) /* 01: High speed mode read enable */

/* USART1 - Universal synchronous asynchronous receiver transmitter */
#define CH32V003_USART1_BASE              0x40013800
#define CH32V003_USART1_STATR_OFFSET      0x0000
#define CH32V003_USART1_STATR             (CH32V003_USART1_BASE + CH32V003_USART1_STATR_OFFSET)
#define CH32V003_USART1_STATR_CTS         (1 <<  9) /* 200: CTS flag */
#define CH32V003_USART1_STATR_LBD         (1 <<  8) /* 100: LIN break detection flag */
#define CH32V003_USART1_STATR_TXE         (1 <<  7) /* 80: Transmit data register empty */
#define CH32V003_USART1_STATR_TC          (1 <<  6) /* 40: Transmission complete */
#define CH32V003_USART1_STATR_RXNE        (1 <<  5) /* 20: Read data register not empty */
#define CH32V003_USART1_STATR_IDLE        (1 <<  4) /* 10: IDLE line detected */
#define CH32V003_USART1_STATR_ORE         (1 <<  3) /* 08: Overrun error */
#define CH32V003_USART1_STATR_NE          (1 <<  2) /* 04: Noise error flag */
#define CH32V003_USART1_STATR_FE          (1 <<  1) /* 02: Framing error */
#define CH32V003_USART1_STATR_PE          (1 <<  0) /* 01: Parity error */
#define CH32V003_USART1_DATAR_OFFSET      0x0004
#define CH32V003_USART1_DATAR             (CH32V003_USART1_BASE + CH32V003_USART1_DATAR_OFFSET)
#define CH32V003_USART1_DATAR_DR          (9 <<  0) /* 01: Data value */
#define CH32V003_USART1_DATAR_DR_MASK          (0x1ff)
#define CH32V003_USART1_BRR_OFFSET        0x0008
#define CH32V003_USART1_BRR               (CH32V003_USART1_BASE + CH32V003_USART1_BRR_OFFSET)
#define CH32V003_USART1_BRR_DIV_Mantissa  (12 <<  4) /* 10: mantissa of USARTDIV */
#define CH32V003_USART1_BRR_DIV_Mantissa_MASK  (0xfff)
#define CH32V003_USART1_BRR_DIV_Fraction  (4 <<  0) /* 01: fraction of USARTDIV */
#define CH32V003_USART1_BRR_DIV_Fraction_MASK  (0x0f)
#define CH32V003_USART1_CTLR1_OFFSET      0x000c
#define CH32V003_USART1_CTLR1             (CH32V003_USART1_BASE + CH32V003_USART1_CTLR1_OFFSET)
#define CH32V003_USART1_CTLR1_UE          (1 << 13) /* 2000: USART enable */
#define CH32V003_USART1_CTLR1_M           (1 << 12) /* 1000: Word length */
#define CH32V003_USART1_CTLR1_WAKE        (1 << 11) /* 800: Wakeup method */
#define CH32V003_USART1_CTLR1_PCE         (1 << 10) /* 400: Parity control enable */
#define CH32V003_USART1_CTLR1_PS          (1 <<  9) /* 200: Parity selection */
#define CH32V003_USART1_CTLR1_PEIE        (1 <<  8) /* 100: PE interrupt enable */
#define CH32V003_USART1_CTLR1_TXEIE       (1 <<  7) /* 80: TXE interrupt enable */
#define CH32V003_USART1_CTLR1_TCIE        (1 <<  6) /* 40: Transmission complete interrupt enable */
#define CH32V003_USART1_CTLR1_RXNEIE      (1 <<  5) /* 20: RXNE interrupt enable */
#define CH32V003_USART1_CTLR1_IDLEIE      (1 <<  4) /* 10: IDLE interrupt enable */
#define CH32V003_USART1_CTLR1_TE          (1 <<  3) /* 08: Transmitter enable */
#define CH32V003_USART1_CTLR1_RE          (1 <<  2) /* 04: Receiver enable */
#define CH32V003_USART1_CTLR1_RWU         (1 <<  1) /* 02: Receiver wakeup */
#define CH32V003_USART1_CTLR1_SBK         (1 <<  0) /* 01: Send break */
#define CH32V003_USART1_CTLR2_OFFSET      0x0010
#define CH32V003_USART1_CTLR2             (CH32V003_USART1_BASE + CH32V003_USART1_CTLR2_OFFSET)
#define CH32V003_USART1_CTLR2_LINEN       (1 << 14) /* 4000: LIN mode enable */
#define CH32V003_USART1_CTLR2_STOP        (2 << 12) /* 1000: STOP bits */
#define CH32V003_USART1_CTLR2_STOP_MASK        (0x03)
#define CH32V003_USART1_CTLR2_CLKEN       (1 << 11) /* 800: Clock enable */
#define CH32V003_USART1_CTLR2_CPOL        (1 << 10) /* 400: Clock polarity */
#define CH32V003_USART1_CTLR2_CPHA        (1 <<  9) /* 200: Clock phase */
#define CH32V003_USART1_CTLR2_LBCL        (1 <<  8) /* 100: Last bit clock pulse */
#define CH32V003_USART1_CTLR2_LBDIE       (1 <<  6) /* 40: LIN break detection interrupt enable */
#define CH32V003_USART1_CTLR2_LBDL        (1 <<  5) /* 20: lin break detection length */
#define CH32V003_USART1_CTLR2_ADD         (4 <<  0) /* 01: Address of the USART node */
#define CH32V003_USART1_CTLR2_ADD_MASK         (0x0f)
#define CH32V003_USART1_CTLR3_OFFSET      0x0014
#define CH32V003_USART1_CTLR3             (CH32V003_USART1_BASE + CH32V003_USART1_CTLR3_OFFSET)
#define CH32V003_USART1_CTLR3_CTSIE       (1 << 10) /* 400: CTS interrupt enable */
#define CH32V003_USART1_CTLR3_CTSE        (1 <<  9) /* 200: CTS enable */
#define CH32V003_USART1_CTLR3_RTSE        (1 <<  8) /* 100: RTS enable */
#define CH32V003_USART1_CTLR3_DMAT        (1 <<  7) /* 80: DMA enable transmitter */
#define CH32V003_USART1_CTLR3_DMAR        (1 <<  6) /* 40: DMA enable receiver */
#define CH32V003_USART1_CTLR3_SCEN        (1 <<  5) /* 20: Smartcard mode enable */
#define CH32V003_USART1_CTLR3_NACK        (1 <<  4) /* 10: Smartcard NACK enable */
#define CH32V003_USART1_CTLR3_HDSEL       (1 <<  3) /* 08: Half-duplex selection */
#define CH32V003_USART1_CTLR3_IRLP        (1 <<  2) /* 04: IrDA low-power */
#define CH32V003_USART1_CTLR3_IREN        (1 <<  1) /* 02: IrDA mode enable */
#define CH32V003_USART1_CTLR3_EIE         (1 <<  0) /* 01: Error interrupt enable */
#define CH32V003_USART1_GPR_OFFSET        0x0018
#define CH32V003_USART1_GPR               (CH32V003_USART1_BASE + CH32V003_USART1_GPR_OFFSET)
#define CH32V003_USART1_GPR_GT            (8 <<  8) /* 100: Guard time value */
#define CH32V003_USART1_GPR_GT_MASK            (0xff)
#define CH32V003_USART1_GPR_PSC           (8 <<  0) /* 01: Prescaler value */
#define CH32V003_USART1_GPR_PSC_MASK           (0xff)

/* ADC1 - Analog to digital converter */
#define CH32V003_ADC1_BASE                0x40012400
#define CH32V003_ADC1_STATR_OFFSET        0x0000
#define CH32V003_ADC1_STATR               (CH32V003_ADC1_BASE + CH32V003_ADC1_STATR_OFFSET)
#define CH32V003_ADC1_STATR_STRT          (1 <<  4) /* 10: Regular channel start flag */
#define CH32V003_ADC1_STATR_JSTRT         (1 <<  3) /* 08: Injected channel start flag */
#define CH32V003_ADC1_STATR_JEOC          (1 <<  2) /* 04: Injected channel end of conversion */
#define CH32V003_ADC1_STATR_EOC           (1 <<  1) /* 02: Regular channel end of conversion */
#define CH32V003_ADC1_STATR_AWD           (1 <<  0) /* 01: Analog watchdog flag */
#define CH32V003_ADC1_CTLR1_OFFSET        0x0004
#define CH32V003_ADC1_CTLR1               (CH32V003_ADC1_BASE + CH32V003_ADC1_CTLR1_OFFSET)
#define CH32V003_ADC1_CTLR1_ADC_CAL_VOL   (2 << 25) /* 2000000: ADC Calibration voltage selection */
#define CH32V003_ADC1_CTLR1_ADC_CAL_VOL_MASK   (0x03)
#define CH32V003_ADC1_CTLR1_AWDEN         (1 << 23) /* 800000: Analog watchdog enable on regular channels */
#define CH32V003_ADC1_CTLR1_JAWDEN        (1 << 22) /* 400000: Analog watchdog enable on injected channels */
#define CH32V003_ADC1_CTLR1_DISCNUM       (3 << 13) /* 2000: Discontinuous mode channel count */
#define CH32V003_ADC1_CTLR1_DISCNUM_MASK       (0x07)
#define CH32V003_ADC1_CTLR1_JDISCEN       (1 << 12) /* 1000: Discontinuous mode on injected channels */
#define CH32V003_ADC1_CTLR1_DISCEN        (1 << 11) /* 800: Discontinuous mode on regular channels */
#define CH32V003_ADC1_CTLR1_JAUTO         (1 << 10) /* 400: Automatic injected group conversion */
#define CH32V003_ADC1_CTLR1_AWDSGL        (1 <<  9) /* 200: Enable the watchdog on a single channel in scan mode */
#define CH32V003_ADC1_CTLR1_SCAN          (1 <<  8) /* 100: Scan mode enable */
#define CH32V003_ADC1_CTLR1_JEOCIE        (1 <<  7) /* 80: Interrupt enable for injected channels */
#define CH32V003_ADC1_CTLR1_AWDIE         (1 <<  6) /* 40: Analog watchdog interrupt enable */
#define CH32V003_ADC1_CTLR1_EOCIE         (1 <<  5) /* 20: Interrupt enable for EOC */
#define CH32V003_ADC1_CTLR1_AWDCH         (5 <<  0) /* 01: Analog watchdog channel select bits */
#define CH32V003_ADC1_CTLR1_AWDCH_MASK         (0x1f)
#define CH32V003_ADC1_CTLR2_OFFSET        0x0008
#define CH32V003_ADC1_CTLR2               (CH32V003_ADC1_BASE + CH32V003_ADC1_CTLR2_OFFSET)
#define CH32V003_ADC1_CTLR2_SWSTART       (1 << 22) /* 400000: Start conversion of regular channels */
#define CH32V003_ADC1_CTLR2_JSWSTART      (1 << 21) /* 200000: Start conversion of injected channels */
#define CH32V003_ADC1_CTLR2_EXTTRIG       (1 << 20) /* 100000: External trigger conversion mode for regular channels */
#define CH32V003_ADC1_CTLR2_EXTSEL        (3 << 17) /* 20000: External event select for regular group */
#define CH32V003_ADC1_CTLR2_EXTSEL_MASK        (0x07)
#define CH32V003_ADC1_CTLR2_JEXTTRIG      (1 << 15) /* 8000: External trigger conversion mode for injected channels */
#define CH32V003_ADC1_CTLR2_JEXTSEL       (3 << 12) /* 1000: External event select for injected group */
#define CH32V003_ADC1_CTLR2_JEXTSEL_MASK       (0x07)
#define CH32V003_ADC1_CTLR2_ALIGN         (1 << 11) /* 800: Data alignment */
#define CH32V003_ADC1_CTLR2_DMA           (1 <<  8) /* 100: Direct memory access mode */
#define CH32V003_ADC1_CTLR2_RSTCAL        (1 <<  3) /* 08: Reset calibration */
#define CH32V003_ADC1_CTLR2_CAL           (1 <<  2) /* 04: A/D calibration */
#define CH32V003_ADC1_CTLR2_CONT          (1 <<  1) /* 02: Continuous conversion */
#define CH32V003_ADC1_CTLR2_ADON          (1 <<  0) /* 01: A/D converter ON / OFF */
#define CH32V003_ADC1_SAMPTR1_CHARGE1_OFFSET 0x000c
#define CH32V003_ADC1_SAMPTR1_CHARGE1     (CH32V003_ADC1_BASE + CH32V003_ADC1_SAMPTR1_CHARGE1_OFFSET)
#define CH32V003_ADC1_SAMPTR1_CHARGE1_SMP10_TKCG10 (3 <<  0) /* 01: Channel 10 sample time selection */
#define CH32V003_ADC1_SAMPTR1_CHARGE1_SMP10_TKCG10_MASK (0x07)
#define CH32V003_ADC1_SAMPTR1_CHARGE1_SMP11_TKCG11 (3 <<  3) /* 08: Channel 11 sample time selection */
#define CH32V003_ADC1_SAMPTR1_CHARGE1_SMP11_TKCG11_MASK (0x07)
#define CH32V003_ADC1_SAMPTR1_CHARGE1_SMP12_TKCG12 (3 <<  6) /* 40: Channel 12 sample time selection */
#define CH32V003_ADC1_SAMPTR1_CHARGE1_SMP12_TKCG12_MASK (0x07)
#define CH32V003_ADC1_SAMPTR1_CHARGE1_SMP13_TKCG13 (3 <<  9) /* 200: Channel 13 sample time selection */
#define CH32V003_ADC1_SAMPTR1_CHARGE1_SMP13_TKCG13_MASK (0x07)
#define CH32V003_ADC1_SAMPTR1_CHARGE1_SMP14_TKCG14 (3 << 12) /* 1000: Channel 14 sample time selection */
#define CH32V003_ADC1_SAMPTR1_CHARGE1_SMP14_TKCG14_MASK (0x07)
#define CH32V003_ADC1_SAMPTR1_CHARGE1_SMP15_TKCG15 (3 << 15) /* 8000: Channel 15 sample time selection */
#define CH32V003_ADC1_SAMPTR1_CHARGE1_SMP15_TKCG15_MASK (0x07)
#define CH32V003_ADC1_SAMPTR2_CHARGE2_OFFSET 0x0010
#define CH32V003_ADC1_SAMPTR2_CHARGE2     (CH32V003_ADC1_BASE + CH32V003_ADC1_SAMPTR2_CHARGE2_OFFSET)
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP0_TKCG0 (3 <<  0) /* 01: Channel 0 sample time selection */
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP0_TKCG0_MASK (0x07)
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP1_TKCG1 (3 <<  3) /* 08: Channel 1 sample time selection */
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP1_TKCG1_MASK (0x07)
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP2_TKCG2 (3 <<  6) /* 40: Channel 2 sample time selection */
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP2_TKCG2_MASK (0x07)
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP3_TKCG3 (3 <<  9) /* 200: Channel 3 sample time selection */
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP3_TKCG3_MASK (0x07)
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP4_TKCG4 (3 << 12) /* 1000: Channel 4 sample time selection */
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP4_TKCG4_MASK (0x07)
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP5_TKCG5 (3 << 15) /* 8000: Channel 5 sample time selection */
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP5_TKCG5_MASK (0x07)
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP6_TKCG6 (3 << 18) /* 40000: Channel 6 sample time selection */
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP6_TKCG6_MASK (0x07)
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP7_TKCG7 (3 << 21) /* 200000: Channel 7 sample time selection */
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP7_TKCG7_MASK (0x07)
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP8_TKCG8 (3 << 24) /* 1000000: Channel 8 sample time selection */
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP8_TKCG8_MASK (0x07)
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP9_TKCG9 (3 << 27) /* 8000000: Channel 9 sample time selection */
#define CH32V003_ADC1_SAMPTR2_CHARGE2_SMP9_TKCG9_MASK (0x07)
#define CH32V003_ADC1_IOFR1_OFFSET        0x0014
#define CH32V003_ADC1_IOFR1               (CH32V003_ADC1_BASE + CH32V003_ADC1_IOFR1_OFFSET)
#define CH32V003_ADC1_IOFR1_JOFFSET1      (10 <<  0) /* 01: Data offset for injected channel x */
#define CH32V003_ADC1_IOFR1_JOFFSET1_MASK      (0x3ff)
#define CH32V003_ADC1_IOFR2_OFFSET        0x0018
#define CH32V003_ADC1_IOFR2               (CH32V003_ADC1_BASE + CH32V003_ADC1_IOFR2_OFFSET)
#define CH32V003_ADC1_IOFR2_JOFFSET2      (10 <<  0) /* 01: Data offset for injected channel x */
#define CH32V003_ADC1_IOFR2_JOFFSET2_MASK      (0x3ff)
#define CH32V003_ADC1_IOFR3_OFFSET        0x001c
#define CH32V003_ADC1_IOFR3               (CH32V003_ADC1_BASE + CH32V003_ADC1_IOFR3_OFFSET)
#define CH32V003_ADC1_IOFR3_JOFFSET3      (10 <<  0) /* 01: Data offset for injected channel x */
#define CH32V003_ADC1_IOFR3_JOFFSET3_MASK      (0x3ff)
#define CH32V003_ADC1_IOFR4_OFFSET        0x0020
#define CH32V003_ADC1_IOFR4               (CH32V003_ADC1_BASE + CH32V003_ADC1_IOFR4_OFFSET)
#define CH32V003_ADC1_IOFR4_JOFFSET4      (10 <<  0) /* 01: Data offset for injected channel x */
#define CH32V003_ADC1_IOFR4_JOFFSET4_MASK      (0x3ff)
#define CH32V003_ADC1_WDHTR_OFFSET        0x0024
#define CH32V003_ADC1_WDHTR               (CH32V003_ADC1_BASE + CH32V003_ADC1_WDHTR_OFFSET)
#define CH32V003_ADC1_WDHTR_HT            (10 <<  0) /* 01: Analog watchdog higher threshold */
#define CH32V003_ADC1_WDHTR_HT_MASK            (0x3ff)
#define CH32V003_ADC1_WDLTR_OFFSET        0x0028
#define CH32V003_ADC1_WDLTR               (CH32V003_ADC1_BASE + CH32V003_ADC1_WDLTR_OFFSET)
#define CH32V003_ADC1_WDLTR_LT            (10 <<  0) /* 01: Analog watchdog lower threshold */
#define CH32V003_ADC1_WDLTR_LT_MASK            (0x3ff)
#define CH32V003_ADC1_RSQR1_OFFSET        0x002c
#define CH32V003_ADC1_RSQR1               (CH32V003_ADC1_BASE + CH32V003_ADC1_RSQR1_OFFSET)
#define CH32V003_ADC1_RSQR1_L             (4 << 20) /* 100000: Regular channel sequence length */
#define CH32V003_ADC1_RSQR1_L_MASK             (0x0f)
#define CH32V003_ADC1_RSQR1_SQ16          (5 << 15) /* 8000: 16th conversion in regular sequence */
#define CH32V003_ADC1_RSQR1_SQ16_MASK          (0x1f)
#define CH32V003_ADC1_RSQR1_SQ15          (5 << 10) /* 400: 15th conversion in regular sequence */
#define CH32V003_ADC1_RSQR1_SQ15_MASK          (0x1f)
#define CH32V003_ADC1_RSQR1_SQ14          (5 <<  5) /* 20: 14th conversion in regular sequence */
#define CH32V003_ADC1_RSQR1_SQ14_MASK          (0x1f)
#define CH32V003_ADC1_RSQR1_SQ13          (5 <<  0) /* 01: 13th conversion in regular sequence */
#define CH32V003_ADC1_RSQR1_SQ13_MASK          (0x1f)
#define CH32V003_ADC1_RSQR2_OFFSET        0x0030
#define CH32V003_ADC1_RSQR2               (CH32V003_ADC1_BASE + CH32V003_ADC1_RSQR2_OFFSET)
#define CH32V003_ADC1_RSQR2_SQ12          (5 << 25) /* 2000000: 12th conversion in regular sequence */
#define CH32V003_ADC1_RSQR2_SQ12_MASK          (0x1f)
#define CH32V003_ADC1_RSQR2_SQ11          (5 << 20) /* 100000: 11th conversion in regular sequence */
#define CH32V003_ADC1_RSQR2_SQ11_MASK          (0x1f)
#define CH32V003_ADC1_RSQR2_SQ10          (5 << 15) /* 8000: 10th conversion in regular sequence */
#define CH32V003_ADC1_RSQR2_SQ10_MASK          (0x1f)
#define CH32V003_ADC1_RSQR2_SQ9           (5 << 10) /* 400: 9th conversion in regular sequence */
#define CH32V003_ADC1_RSQR2_SQ9_MASK           (0x1f)
#define CH32V003_ADC1_RSQR2_SQ8           (5 <<  5) /* 20: 8th conversion in regular sequence */
#define CH32V003_ADC1_RSQR2_SQ8_MASK           (0x1f)
#define CH32V003_ADC1_RSQR2_SQ7           (5 <<  0) /* 01: 7th conversion in regular sequence */
#define CH32V003_ADC1_RSQR2_SQ7_MASK           (0x1f)
#define CH32V003_ADC1_RSQR3_OFFSET        0x0034
#define CH32V003_ADC1_RSQR3               (CH32V003_ADC1_BASE + CH32V003_ADC1_RSQR3_OFFSET)
#define CH32V003_ADC1_RSQR3_SQ6           (5 << 25) /* 2000000: 6th conversion in regular sequence */
#define CH32V003_ADC1_RSQR3_SQ6_MASK           (0x1f)
#define CH32V003_ADC1_RSQR3_SQ5           (5 << 20) /* 100000: 5th conversion in regular sequence */
#define CH32V003_ADC1_RSQR3_SQ5_MASK           (0x1f)
#define CH32V003_ADC1_RSQR3_SQ4           (5 << 15) /* 8000: 4th conversion in regular sequence */
#define CH32V003_ADC1_RSQR3_SQ4_MASK           (0x1f)
#define CH32V003_ADC1_RSQR3_SQ3           (5 << 10) /* 400: 3rd conversion in regular sequence */
#define CH32V003_ADC1_RSQR3_SQ3_MASK           (0x1f)
#define CH32V003_ADC1_RSQR3_SQ2           (5 <<  5) /* 20: 2nd conversion in regular sequence */
#define CH32V003_ADC1_RSQR3_SQ2_MASK           (0x1f)
#define CH32V003_ADC1_RSQR3_SQ1           (5 <<  0) /* 01: 1st conversion in regular sequence */
#define CH32V003_ADC1_RSQR3_SQ1_MASK           (0x1f)
#define CH32V003_ADC1_ISQR_OFFSET         0x0038
#define CH32V003_ADC1_ISQR                (CH32V003_ADC1_BASE + CH32V003_ADC1_ISQR_OFFSET)
#define CH32V003_ADC1_ISQR_JL             (2 << 20) /* 100000: Injected sequence length */
#define CH32V003_ADC1_ISQR_JL_MASK             (0x03)
#define CH32V003_ADC1_ISQR_JSQ4           (5 << 15) /* 8000: 4th conversion in injected sequence */
#define CH32V003_ADC1_ISQR_JSQ4_MASK           (0x1f)
#define CH32V003_ADC1_ISQR_JSQ3           (5 << 10) /* 400: 3rd conversion in injected sequence */
#define CH32V003_ADC1_ISQR_JSQ3_MASK           (0x1f)
#define CH32V003_ADC1_ISQR_JSQ2           (5 <<  5) /* 20: 2nd conversion in injected sequence */
#define CH32V003_ADC1_ISQR_JSQ2_MASK           (0x1f)
#define CH32V003_ADC1_ISQR_JSQ1           (5 <<  0) /* 01: 1st conversion in injected sequence */
#define CH32V003_ADC1_ISQR_JSQ1_MASK           (0x1f)
#define CH32V003_ADC1_IDATAR1_OFFSET      0x003c
#define CH32V003_ADC1_IDATAR1             (CH32V003_ADC1_BASE + CH32V003_ADC1_IDATAR1_OFFSET)
#define CH32V003_ADC1_IDATAR1_IDATA       (16 <<  0) /* 01: Injected data */
#define CH32V003_ADC1_IDATAR1_IDATA_MASK       (0xffff)
#define CH32V003_ADC1_IDATAR2_OFFSET      0x0040
#define CH32V003_ADC1_IDATAR2             (CH32V003_ADC1_BASE + CH32V003_ADC1_IDATAR2_OFFSET)
#define CH32V003_ADC1_IDATAR2_IDATA       (16 <<  0) /* 01: Injected data */
#define CH32V003_ADC1_IDATAR2_IDATA_MASK       (0xffff)
#define CH32V003_ADC1_IDATAR3_OFFSET      0x0044
#define CH32V003_ADC1_IDATAR3             (CH32V003_ADC1_BASE + CH32V003_ADC1_IDATAR3_OFFSET)
#define CH32V003_ADC1_IDATAR3_IDATA       (16 <<  0) /* 01: Injected data */
#define CH32V003_ADC1_IDATAR3_IDATA_MASK       (0xffff)
#define CH32V003_ADC1_IDATAR4_OFFSET      0x0048
#define CH32V003_ADC1_IDATAR4             (CH32V003_ADC1_BASE + CH32V003_ADC1_IDATAR4_OFFSET)
#define CH32V003_ADC1_IDATAR4_IDATA       (16 <<  0) /* 01: Injected data */
#define CH32V003_ADC1_IDATAR4_IDATA_MASK       (0xffff)
#define CH32V003_ADC1_RDATAR_OFFSET       0x004c
#define CH32V003_ADC1_RDATAR              (CH32V003_ADC1_BASE + CH32V003_ADC1_RDATAR_OFFSET)
#define CH32V003_ADC1_RDATAR_DATA         (32 <<  0) /* 01: Regular data */
#define CH32V003_ADC1_RDATAR_DATA_MASK         (0xffffffff)
#define CH32V003_ADC1_DLYR_OFFSET         0x0050
#define CH32V003_ADC1_DLYR                (CH32V003_ADC1_BASE + CH32V003_ADC1_DLYR_OFFSET)
#define CH32V003_ADC1_DLYR_DLYVLU         (9 <<  0) /* 01: External trigger data delay time configuration */
#define CH32V003_ADC1_DLYR_DLYVLU_MASK         (0x1ff)
#define CH32V003_ADC1_DLYR_DLYSRC         (1 <<  9) /* 200: External trigger source delay selection */

/* DBG - Debug support */
#define CH32V003_DBG_BASE                 0xe000d000
#define CH32V003_DBG_CFGR1_OFFSET         0x0000
#define CH32V003_DBG_CFGR1                (CH32V003_DBG_BASE + CH32V003_DBG_CFGR1_OFFSET)
#define CH32V003_DBG_CFGR1_DEG_IWDG       (1 <<  0) /* 01: DEG_IWDG */
#define CH32V003_DBG_CFGR1_DEG_WWDG       (1 <<  1) /* 02: DEG_WWDG */
#define CH32V003_DBG_CFGR1_DEG_I2C1       (1 <<  2) /* 04: DEG_I2C1 */
#define CH32V003_DBG_CFGR1_DEG_TIM1       (1 <<  4) /* 10: DEG_TIM1 */
#define CH32V003_DBG_CFGR1_DEG_TIM2       (1 <<  5) /* 20: DEG_TIM2 */
#define CH32V003_DBG_CFGR2_OFFSET         0x0004
#define CH32V003_DBG_CFGR2                (CH32V003_DBG_BASE + CH32V003_DBG_CFGR2_OFFSET)
#define CH32V003_DBG_CFGR2_DBG_SLEEP      (1 <<  0) /* 01: DBG_SLEEP */
#define CH32V003_DBG_CFGR2_DBG_STOP       (1 <<  1) /* 02: DBG_STOP */
#define CH32V003_DBG_CFGR2_DBG_STANDBY    (1 <<  2) /* 04: DBG_STANDBY */

/* ESIG - Device electronic signature */
#define CH32V003_ESIG_BASE                0x1ffff7e0
#define CH32V003_ESIG_FLACAP_OFFSET       0x0000
#define CH32V003_ESIG_FLACAP              (CH32V003_ESIG_BASE + CH32V003_ESIG_FLACAP_OFFSET)
#define CH32V003_ESIG_FLACAP_FLASHSIZE    (16 <<  0) /* 01: Flash size */
#define CH32V003_ESIG_FLACAP_FLASHSIZE_MASK    (0xffff)
#define CH32V003_ESIG_UNIID1_OFFSET       0x0008
#define CH32V003_ESIG_UNIID1              (CH32V003_ESIG_BASE + CH32V003_ESIG_UNIID1_OFFSET)
#define CH32V003_ESIG_UNIID1_U_ID         (32 <<  0) /* 01: Unique identity[31:0] */
#define CH32V003_ESIG_UNIID1_U_ID_MASK         (0xffffffff)
#define CH32V003_ESIG_UNIID2_OFFSET       0x000c
#define CH32V003_ESIG_UNIID2              (CH32V003_ESIG_BASE + CH32V003_ESIG_UNIID2_OFFSET)
#define CH32V003_ESIG_UNIID2_U_ID         (32 <<  0) /* 01: Unique identity[63:32] */
#define CH32V003_ESIG_UNIID2_U_ID_MASK         (0xffffffff)
#define CH32V003_ESIG_UNIID3_OFFSET       0x0010
#define CH32V003_ESIG_UNIID3              (CH32V003_ESIG_BASE + CH32V003_ESIG_UNIID3_OFFSET)
#define CH32V003_ESIG_UNIID3_U_ID         (32 <<  0) /* 01: Unique identity[95:64] */
#define CH32V003_ESIG_UNIID3_U_ID_MASK         (0xffffffff)

/* FLASH - FLASH */
#define CH32V003_FLASH_BASE               0x40022000
#define CH32V003_FLASH_ACTLR_OFFSET       0x0000
#define CH32V003_FLASH_ACTLR              (CH32V003_FLASH_BASE + CH32V003_FLASH_ACTLR_OFFSET)
#define CH32V003_FLASH_ACTLR_LATENCY      (1 <<  0) /* 01: Number of FLASH wait states */
#define CH32V003_FLASH_KEYR_OFFSET        0x0004
#define CH32V003_FLASH_KEYR               (CH32V003_FLASH_BASE + CH32V003_FLASH_KEYR_OFFSET)
#define CH32V003_FLASH_KEYR_KEYR          (32 <<  0) /* 01: FPEC key */
#define CH32V003_FLASH_KEYR_KEYR_MASK          (0xffffffff)
#define CH32V003_FLASH_OBKEYR_OFFSET      0x0008
#define CH32V003_FLASH_OBKEYR             (CH32V003_FLASH_BASE + CH32V003_FLASH_OBKEYR_OFFSET)
#define CH32V003_FLASH_OBKEYR_OPTKEY      (32 <<  0) /* 01: Option byte key */
#define CH32V003_FLASH_OBKEYR_OPTKEY_MASK      (0xffffffff)
#define CH32V003_FLASH_STATR_OFFSET       0x000c
#define CH32V003_FLASH_STATR              (CH32V003_FLASH_BASE + CH32V003_FLASH_STATR_OFFSET)
#define CH32V003_FLASH_STATR_BOOT_LOCK    (1 << 15) /* 8000: BOOT lock */
#define CH32V003_FLASH_STATR_BOOT_MODE    (1 << 14) /* 4000: BOOT mode */
#define CH32V003_FLASH_STATR_EOP          (1 <<  5) /* 20: End of operation */
#define CH32V003_FLASH_STATR_WRPRTERR     (1 <<  4) /* 10: Write protection error */
#define CH32V003_FLASH_STATR_BSY          (1 <<  0) /* 01: Busy */
#define CH32V003_FLASH_CTLR_OFFSET        0x0010
#define CH32V003_FLASH_CTLR               (CH32V003_FLASH_BASE + CH32V003_FLASH_CTLR_OFFSET)
#define CH32V003_FLASH_CTLR_PG            (1 <<  0) /* 01: Programming */
#define CH32V003_FLASH_CTLR_PER           (1 <<  1) /* 02: Page Erase */
#define CH32V003_FLASH_CTLR_MER           (1 <<  2) /* 04: Mass Erase */
#define CH32V003_FLASH_CTLR_OBPG          (1 <<  4) /* 10: Option byte programming */
#define CH32V003_FLASH_CTLR_OBER          (1 <<  5) /* 20: Option byte erase */
#define CH32V003_FLASH_CTLR_STRT          (1 <<  6) /* 40: Start */
#define CH32V003_FLASH_CTLR_LOCK          (1 <<  7) /* 80: Lock */
#define CH32V003_FLASH_CTLR_OBWRE         (1 <<  9) /* 200: Option bytes write enable */
#define CH32V003_FLASH_CTLR_ERRIE         (1 << 10) /* 400: Error interrupt enable */
#define CH32V003_FLASH_CTLR_EOPIE         (1 << 12) /* 1000: End of operation interrupt enable */
#define CH32V003_FLASH_CTLR_FLOCK         (1 << 15) /* 8000: Fast programmable lock */
#define CH32V003_FLASH_CTLR_PAGE_PG       (1 << 16) /* 10000: Fast programming */
#define CH32V003_FLASH_CTLR_PAGE_ER       (1 << 17) /* 20000: Fast erase */
#define CH32V003_FLASH_CTLR_BUFLOAD       (1 << 18) /* 40000: Buffer load */
#define CH32V003_FLASH_CTLR_BUFRST        (1 << 19) /* 80000: Buffer reset */
#define CH32V003_FLASH_ADDR_OFFSET        0x0014
#define CH32V003_FLASH_ADDR               (CH32V003_FLASH_BASE + CH32V003_FLASH_ADDR_OFFSET)
#define CH32V003_FLASH_ADDR_ADDR          (32 <<  0) /* 01: Flash Address */
#define CH32V003_FLASH_ADDR_ADDR_MASK          (0xffffffff)
#define CH32V003_FLASH_OBR_OFFSET         0x001c
#define CH32V003_FLASH_OBR                (CH32V003_FLASH_BASE + CH32V003_FLASH_OBR_OFFSET)
#define CH32V003_FLASH_OBR_OBERR          (1 <<  0) /* 01: Option byte error */
#define CH32V003_FLASH_OBR_RDPRT          (1 <<  1) /* 02: Read protection */
#define CH32V003_FLASH_OBR_IWDG_SW        (1 <<  2) /* 04: IWDG_SW */
#define CH32V003_FLASH_OBR_STOP_RST       (1 <<  3) /* 08: STOP_RST */
#define CH32V003_FLASH_OBR_STANDY_RST     (1 <<  4) /* 10: STANDY_RST */
#define CH32V003_FLASH_OBR_CFG_RST_MODE   (2 <<  5) /* 20: CFG_RST_MODE */
#define CH32V003_FLASH_OBR_CFG_RST_MODE_MASK   (0x03)
#define CH32V003_FLASH_OBR_DATA0          (8 << 10) /* 400: DATA0 */
#define CH32V003_FLASH_OBR_DATA0_MASK          (0xff)
#define CH32V003_FLASH_OBR_DATA1          (8 << 18) /* 40000: DATA1 */
#define CH32V003_FLASH_OBR_DATA1_MASK          (0xff)
#define CH32V003_FLASH_WPR_OFFSET         0x0020
#define CH32V003_FLASH_WPR                (CH32V003_FLASH_BASE + CH32V003_FLASH_WPR_OFFSET)
#define CH32V003_FLASH_WPR_WRP            (32 <<  0) /* 01: Write protect */
#define CH32V003_FLASH_WPR_WRP_MASK            (0xffffffff)
#define CH32V003_FLASH_MODEKEYR_OFFSET    0x0024
#define CH32V003_FLASH_MODEKEYR           (CH32V003_FLASH_BASE + CH32V003_FLASH_MODEKEYR_OFFSET)
#define CH32V003_FLASH_MODEKEYR_MODEKEYR  (32 <<  0) /* 01: Mode select */
#define CH32V003_FLASH_MODEKEYR_MODEKEYR_MASK  (0xffffffff)
#define CH32V003_FLASH_BOOT_MODEKEYP_OFFSET 0x0028
#define CH32V003_FLASH_BOOT_MODEKEYP      (CH32V003_FLASH_BASE + CH32V003_FLASH_BOOT_MODEKEYP_OFFSET)
#define CH32V003_FLASH_BOOT_MODEKEYP_MODEKEYR (32 <<  0) /* 01: Boot mode key */
#define CH32V003_FLASH_BOOT_MODEKEYP_MODEKEYR_MASK (0xffffffff)

/* PFIC - Programmable Fast Interrupt Controller */
#define CH32V003_PFIC_BASE                0xe000e000
#define CH32V003_PFIC_ISR1_OFFSET         0x0000
#define CH32V003_PFIC_ISR1                (CH32V003_PFIC_BASE + CH32V003_PFIC_ISR1_OFFSET)
#define CH32V003_PFIC_ISR1_INTENSTA2_3    (2 <<  2) /* 04: Interrupt ID Status */
#define CH32V003_PFIC_ISR1_INTENSTA2_3_MASK    (0x03)
#define CH32V003_PFIC_ISR1_INTENSTA12_31  (20 << 12) /* 1000: Interrupt ID Status */
#define CH32V003_PFIC_ISR1_INTENSTA12_31_MASK  (0xfffff)
#define CH32V003_PFIC_ISR2_OFFSET         0x0004
#define CH32V003_PFIC_ISR2                (CH32V003_PFIC_BASE + CH32V003_PFIC_ISR2_OFFSET)
#define CH32V003_PFIC_ISR2_INTENSTA       (32 <<  0) /* 01: Interrupt ID Status */
#define CH32V003_PFIC_ISR2_INTENSTA_MASK       (0xffffffff)
#define CH32V003_PFIC_ISR3_OFFSET         0x0008
#define CH32V003_PFIC_ISR3                (CH32V003_PFIC_BASE + CH32V003_PFIC_ISR3_OFFSET)
#define CH32V003_PFIC_ISR3_INTENSTA       (32 <<  0) /* 01: Interrupt ID Status */
#define CH32V003_PFIC_ISR3_INTENSTA_MASK       (0xffffffff)
#define CH32V003_PFIC_ISR4_OFFSET         0x000c
#define CH32V003_PFIC_ISR4                (CH32V003_PFIC_BASE + CH32V003_PFIC_ISR4_OFFSET)
#define CH32V003_PFIC_ISR4_INTENSTA       (8 <<  0) /* 01: Interrupt ID Status */
#define CH32V003_PFIC_ISR4_INTENSTA_MASK       (0xff)
#define CH32V003_PFIC_IPR1_OFFSET         0x0020
#define CH32V003_PFIC_IPR1                (CH32V003_PFIC_BASE + CH32V003_PFIC_IPR1_OFFSET)
#define CH32V003_PFIC_IPR1_PENDSTA2_3     (2 <<  2) /* 04: PENDSTA */
#define CH32V003_PFIC_IPR1_PENDSTA2_3_MASK     (0x03)
#define CH32V003_PFIC_IPR1_PENDSTA12_31   (20 << 12) /* 1000: PENDSTA */
#define CH32V003_PFIC_IPR1_PENDSTA12_31_MASK   (0xfffff)
#define CH32V003_PFIC_IPR2_OFFSET         0x0024
#define CH32V003_PFIC_IPR2                (CH32V003_PFIC_BASE + CH32V003_PFIC_IPR2_OFFSET)
#define CH32V003_PFIC_IPR2_PENDSTA        (32 <<  0) /* 01: PENDSTA */
#define CH32V003_PFIC_IPR2_PENDSTA_MASK        (0xffffffff)
#define CH32V003_PFIC_IPR3_OFFSET         0x0028
#define CH32V003_PFIC_IPR3                (CH32V003_PFIC_BASE + CH32V003_PFIC_IPR3_OFFSET)
#define CH32V003_PFIC_IPR3_PENDSTA        (32 <<  0) /* 01: PENDSTA */
#define CH32V003_PFIC_IPR3_PENDSTA_MASK        (0xffffffff)
#define CH32V003_PFIC_IPR4_OFFSET         0x002c
#define CH32V003_PFIC_IPR4                (CH32V003_PFIC_BASE + CH32V003_PFIC_IPR4_OFFSET)
#define CH32V003_PFIC_IPR4_PENDSTA        (8 <<  0) /* 01: PENDSTA */
#define CH32V003_PFIC_IPR4_PENDSTA_MASK        (0xff)
#define CH32V003_PFIC_ITHRESDR_OFFSET     0x0040
#define CH32V003_PFIC_ITHRESDR            (CH32V003_PFIC_BASE + CH32V003_PFIC_ITHRESDR_OFFSET)
#define CH32V003_PFIC_ITHRESDR_THRESHOLD  (8 <<  0) /* 01: THRESHOLD */
#define CH32V003_PFIC_ITHRESDR_THRESHOLD_MASK  (0xff)
#define CH32V003_PFIC_CFGR_OFFSET         0x0048
#define CH32V003_PFIC_CFGR                (CH32V003_PFIC_BASE + CH32V003_PFIC_CFGR_OFFSET)
#define CH32V003_PFIC_CFGR_RESETSYS       (1 <<  7) /* 80: RESETSYS */
#define CH32V003_PFIC_CFGR_KEYCODE        (16 << 16) /* 10000: KEYCODE */
#define CH32V003_PFIC_CFGR_KEYCODE_MASK        (0xffff)
#define CH32V003_PFIC_GISR_OFFSET         0x004c
#define CH32V003_PFIC_GISR                (CH32V003_PFIC_BASE + CH32V003_PFIC_GISR_OFFSET)
#define CH32V003_PFIC_GISR_NESTSTA        (8 <<  0) /* 01: NESTSTA */
#define CH32V003_PFIC_GISR_NESTSTA_MASK        (0xff)
#define CH32V003_PFIC_GISR_GACTSTA        (1 <<  8) /* 100: GACTSTA */
#define CH32V003_PFIC_GISR_GPENDSTA       (1 <<  9) /* 200: GPENDSTA */
#define CH32V003_PFIC_VTFIDR_OFFSET       0x0050
#define CH32V003_PFIC_VTFIDR              (CH32V003_PFIC_BASE + CH32V003_PFIC_VTFIDR_OFFSET)
#define CH32V003_PFIC_VTFIDR_VTFID0       (8 <<  0) /* 01: VTFID0 */
#define CH32V003_PFIC_VTFIDR_VTFID0_MASK       (0xff)
#define CH32V003_PFIC_VTFIDR_VTFID1       (8 <<  8) /* 100: VTFID1 */
#define CH32V003_PFIC_VTFIDR_VTFID1_MASK       (0xff)
#define CH32V003_PFIC_VTFIDR_VTFID2       (8 << 16) /* 10000: VTFID2 */
#define CH32V003_PFIC_VTFIDR_VTFID2_MASK       (0xff)
#define CH32V003_PFIC_VTFIDR_VTFID3       (8 << 24) /* 1000000: VTFID3 */
#define CH32V003_PFIC_VTFIDR_VTFID3_MASK       (0xff)
#define CH32V003_PFIC_VTFADDRR0_OFFSET    0x0060
#define CH32V003_PFIC_VTFADDRR0           (CH32V003_PFIC_BASE + CH32V003_PFIC_VTFADDRR0_OFFSET)
#define CH32V003_PFIC_VTFADDRR0_VTF0EN    (1 <<  0) /* 01: VTF0EN */
#define CH32V003_PFIC_VTFADDRR0_ADDR0     (31 <<  1) /* 02: ADDR0 */
#define CH32V003_PFIC_VTFADDRR0_ADDR0_MASK     (0x7fffffff)
#define CH32V003_PFIC_VTFADDRR1_OFFSET    0x0064
#define CH32V003_PFIC_VTFADDRR1           (CH32V003_PFIC_BASE + CH32V003_PFIC_VTFADDRR1_OFFSET)
#define CH32V003_PFIC_VTFADDRR1_VTF1EN    (1 <<  0) /* 01: VTF1EN */
#define CH32V003_PFIC_VTFADDRR1_ADDR1     (31 <<  1) /* 02: ADDR1 */
#define CH32V003_PFIC_VTFADDRR1_ADDR1_MASK     (0x7fffffff)
#define CH32V003_PFIC_VTFADDRR2_OFFSET    0x0068
#define CH32V003_PFIC_VTFADDRR2           (CH32V003_PFIC_BASE + CH32V003_PFIC_VTFADDRR2_OFFSET)
#define CH32V003_PFIC_VTFADDRR2_VTF2EN    (1 <<  0) /* 01: VTF2EN */
#define CH32V003_PFIC_VTFADDRR2_ADDR2     (31 <<  1) /* 02: ADDR2 */
#define CH32V003_PFIC_VTFADDRR2_ADDR2_MASK     (0x7fffffff)
#define CH32V003_PFIC_VTFADDRR3_OFFSET    0x006c
#define CH32V003_PFIC_VTFADDRR3           (CH32V003_PFIC_BASE + CH32V003_PFIC_VTFADDRR3_OFFSET)
#define CH32V003_PFIC_VTFADDRR3_VTF3EN    (1 <<  0) /* 01: VTF3EN */
#define CH32V003_PFIC_VTFADDRR3_ADDR3     (31 <<  1) /* 02: ADDR3 */
#define CH32V003_PFIC_VTFADDRR3_ADDR3_MASK     (0x7fffffff)
#define CH32V003_PFIC_IENR1_OFFSET        0x0100
#define CH32V003_PFIC_IENR1               (CH32V003_PFIC_BASE + CH32V003_PFIC_IENR1_OFFSET)
#define CH32V003_PFIC_IENR1_INTEN         (20 << 12) /* 1000: INTEN */
#define CH32V003_PFIC_IENR1_INTEN_MASK         (0xfffff)
#define CH32V003_PFIC_IENR2_OFFSET        0x0104
#define CH32V003_PFIC_IENR2               (CH32V003_PFIC_BASE + CH32V003_PFIC_IENR2_OFFSET)
#define CH32V003_PFIC_IENR2_INTEN         (32 <<  0) /* 01: INTEN */
#define CH32V003_PFIC_IENR2_INTEN_MASK         (0xffffffff)
#define CH32V003_PFIC_IENR3_OFFSET        0x0108
#define CH32V003_PFIC_IENR3               (CH32V003_PFIC_BASE + CH32V003_PFIC_IENR3_OFFSET)
#define CH32V003_PFIC_IENR3_INTEN         (32 <<  0) /* 01: INTEN */
#define CH32V003_PFIC_IENR3_INTEN_MASK         (0xffffffff)
#define CH32V003_PFIC_IENR4_OFFSET        0x010c
#define CH32V003_PFIC_IENR4               (CH32V003_PFIC_BASE + CH32V003_PFIC_IENR4_OFFSET)
#define CH32V003_PFIC_IENR4_INTEN         (8 <<  0) /* 01: INTEN */
#define CH32V003_PFIC_IENR4_INTEN_MASK         (0xff)
#define CH32V003_PFIC_IRER1_OFFSET        0x0180
#define CH32V003_PFIC_IRER1               (CH32V003_PFIC_BASE + CH32V003_PFIC_IRER1_OFFSET)
#define CH32V003_PFIC_IRER1_INTRSET       (20 << 12) /* 1000: INTRSET */
#define CH32V003_PFIC_IRER1_INTRSET_MASK       (0xfffff)
#define CH32V003_PFIC_IRER2_OFFSET        0x0184
#define CH32V003_PFIC_IRER2               (CH32V003_PFIC_BASE + CH32V003_PFIC_IRER2_OFFSET)
#define CH32V003_PFIC_IRER2_INTRSET       (32 <<  0) /* 01: INTRSET */
#define CH32V003_PFIC_IRER2_INTRSET_MASK       (0xffffffff)
#define CH32V003_PFIC_IRER3_OFFSET        0x0188
#define CH32V003_PFIC_IRER3               (CH32V003_PFIC_BASE + CH32V003_PFIC_IRER3_OFFSET)
#define CH32V003_PFIC_IRER3_INTRSET       (32 <<  0) /* 01: INTRSET */
#define CH32V003_PFIC_IRER3_INTRSET_MASK       (0xffffffff)
#define CH32V003_PFIC_IRER4_OFFSET        0x018c
#define CH32V003_PFIC_IRER4               (CH32V003_PFIC_BASE + CH32V003_PFIC_IRER4_OFFSET)
#define CH32V003_PFIC_IRER4_INTRSET       (8 <<  0) /* 01: INTRSET */
#define CH32V003_PFIC_IRER4_INTRSET_MASK       (0xff)
#define CH32V003_PFIC_IPSR1_OFFSET        0x0200
#define CH32V003_PFIC_IPSR1               (CH32V003_PFIC_BASE + CH32V003_PFIC_IPSR1_OFFSET)
#define CH32V003_PFIC_IPSR1_PENDSET2_3    (2 <<  2) /* 04: PENDSET */
#define CH32V003_PFIC_IPSR1_PENDSET2_3_MASK    (0x03)
#define CH32V003_PFIC_IPSR1_PENDSET12_31  (20 << 12) /* 1000: PENDSET */
#define CH32V003_PFIC_IPSR1_PENDSET12_31_MASK  (0xfffff)
#define CH32V003_PFIC_IPSR2_OFFSET        0x0204
#define CH32V003_PFIC_IPSR2               (CH32V003_PFIC_BASE + CH32V003_PFIC_IPSR2_OFFSET)
#define CH32V003_PFIC_IPSR2_PENDSET       (32 <<  0) /* 01: PENDSET */
#define CH32V003_PFIC_IPSR2_PENDSET_MASK       (0xffffffff)
#define CH32V003_PFIC_IPSR3_OFFSET        0x0208
#define CH32V003_PFIC_IPSR3               (CH32V003_PFIC_BASE + CH32V003_PFIC_IPSR3_OFFSET)
#define CH32V003_PFIC_IPSR3_PENDSET       (32 <<  0) /* 01: PENDSET */
#define CH32V003_PFIC_IPSR3_PENDSET_MASK       (0xffffffff)
#define CH32V003_PFIC_IPSR4_OFFSET        0x020c
#define CH32V003_PFIC_IPSR4               (CH32V003_PFIC_BASE + CH32V003_PFIC_IPSR4_OFFSET)
#define CH32V003_PFIC_IPSR4_PENDSET       (8 <<  0) /* 01: PENDSET */
#define CH32V003_PFIC_IPSR4_PENDSET_MASK       (0xff)
#define CH32V003_PFIC_IPRR1_OFFSET        0x0280
#define CH32V003_PFIC_IPRR1               (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRR1_OFFSET)
#define CH32V003_PFIC_IPRR1_PENDRESET2_3  (2 <<  2) /* 04: PENDRESET */
#define CH32V003_PFIC_IPRR1_PENDRESET2_3_MASK  (0x03)
#define CH32V003_PFIC_IPRR1_PENDRESET12_31 (20 << 12) /* 1000: PENDRESET */
#define CH32V003_PFIC_IPRR1_PENDRESET12_31_MASK (0xfffff)
#define CH32V003_PFIC_IPRR2_OFFSET        0x0284
#define CH32V003_PFIC_IPRR2               (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRR2_OFFSET)
#define CH32V003_PFIC_IPRR2_PENDRESET     (32 <<  0) /* 01: PENDRESET */
#define CH32V003_PFIC_IPRR2_PENDRESET_MASK     (0xffffffff)
#define CH32V003_PFIC_IPRR3_OFFSET        0x0288
#define CH32V003_PFIC_IPRR3               (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRR3_OFFSET)
#define CH32V003_PFIC_IPRR3_PENDRESET     (32 <<  0) /* 01: PENDRESET */
#define CH32V003_PFIC_IPRR3_PENDRESET_MASK     (0xffffffff)
#define CH32V003_PFIC_IPRR4_OFFSET        0x028c
#define CH32V003_PFIC_IPRR4               (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRR4_OFFSET)
#define CH32V003_PFIC_IPRR4_PENDRESET     (8 <<  0) /* 01: PENDRESET */
#define CH32V003_PFIC_IPRR4_PENDRESET_MASK     (0xff)
#define CH32V003_PFIC_IACTR1_OFFSET       0x0300
#define CH32V003_PFIC_IACTR1              (CH32V003_PFIC_BASE + CH32V003_PFIC_IACTR1_OFFSET)
#define CH32V003_PFIC_IACTR1_IACTS2_3     (2 <<  2) /* 04: IACTS */
#define CH32V003_PFIC_IACTR1_IACTS2_3_MASK     (0x03)
#define CH32V003_PFIC_IACTR1_IACTS12_31   (20 << 12) /* 1000: IACTS */
#define CH32V003_PFIC_IACTR1_IACTS12_31_MASK   (0xfffff)
#define CH32V003_PFIC_IACTR2_OFFSET       0x0304
#define CH32V003_PFIC_IACTR2              (CH32V003_PFIC_BASE + CH32V003_PFIC_IACTR2_OFFSET)
#define CH32V003_PFIC_IACTR2_IACTS        (32 <<  0) /* 01: IACTS */
#define CH32V003_PFIC_IACTR2_IACTS_MASK        (0xffffffff)
#define CH32V003_PFIC_IACTR3_OFFSET       0x0308
#define CH32V003_PFIC_IACTR3              (CH32V003_PFIC_BASE + CH32V003_PFIC_IACTR3_OFFSET)
#define CH32V003_PFIC_IACTR3_IACTS        (32 <<  0) /* 01: IACTS */
#define CH32V003_PFIC_IACTR3_IACTS_MASK        (0xffffffff)
#define CH32V003_PFIC_IACTR4_OFFSET       0x030c
#define CH32V003_PFIC_IACTR4              (CH32V003_PFIC_BASE + CH32V003_PFIC_IACTR4_OFFSET)
#define CH32V003_PFIC_IACTR4_IACTS        (8 <<  0) /* 01: IACTS */
#define CH32V003_PFIC_IACTR4_IACTS_MASK        (0xff)
#define CH32V003_PFIC_IPRIOR0_OFFSET      0x0400
#define CH32V003_PFIC_IPRIOR0             (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR0_OFFSET)
#define CH32V003_PFIC_IPRIOR1_OFFSET      0x0401
#define CH32V003_PFIC_IPRIOR1             (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR1_OFFSET)
#define CH32V003_PFIC_IPRIOR2_OFFSET      0x0402
#define CH32V003_PFIC_IPRIOR2             (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR2_OFFSET)
#define CH32V003_PFIC_IPRIOR3_OFFSET      0x0403
#define CH32V003_PFIC_IPRIOR3             (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR3_OFFSET)
#define CH32V003_PFIC_IPRIOR4_OFFSET      0x0404
#define CH32V003_PFIC_IPRIOR4             (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR4_OFFSET)
#define CH32V003_PFIC_IPRIOR5_OFFSET      0x0405
#define CH32V003_PFIC_IPRIOR5             (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR5_OFFSET)
#define CH32V003_PFIC_IPRIOR6_OFFSET      0x0406
#define CH32V003_PFIC_IPRIOR6             (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR6_OFFSET)
#define CH32V003_PFIC_IPRIOR7_OFFSET      0x0407
#define CH32V003_PFIC_IPRIOR7             (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR7_OFFSET)
#define CH32V003_PFIC_IPRIOR8_OFFSET      0x0408
#define CH32V003_PFIC_IPRIOR8             (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR8_OFFSET)
#define CH32V003_PFIC_IPRIOR9_OFFSET      0x0409
#define CH32V003_PFIC_IPRIOR9             (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR9_OFFSET)
#define CH32V003_PFIC_IPRIOR10_OFFSET     0x040a
#define CH32V003_PFIC_IPRIOR10            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR10_OFFSET)
#define CH32V003_PFIC_IPRIOR11_OFFSET     0x040b
#define CH32V003_PFIC_IPRIOR11            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR11_OFFSET)
#define CH32V003_PFIC_IPRIOR12_OFFSET     0x040c
#define CH32V003_PFIC_IPRIOR12            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR12_OFFSET)
#define CH32V003_PFIC_IPRIOR13_OFFSET     0x040d
#define CH32V003_PFIC_IPRIOR13            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR13_OFFSET)
#define CH32V003_PFIC_IPRIOR14_OFFSET     0x040e
#define CH32V003_PFIC_IPRIOR14            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR14_OFFSET)
#define CH32V003_PFIC_IPRIOR15_OFFSET     0x040f
#define CH32V003_PFIC_IPRIOR15            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR15_OFFSET)
#define CH32V003_PFIC_IPRIOR16_OFFSET     0x0410
#define CH32V003_PFIC_IPRIOR16            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR16_OFFSET)
#define CH32V003_PFIC_IPRIOR17_OFFSET     0x0411
#define CH32V003_PFIC_IPRIOR17            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR17_OFFSET)
#define CH32V003_PFIC_IPRIOR18_OFFSET     0x0412
#define CH32V003_PFIC_IPRIOR18            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR18_OFFSET)
#define CH32V003_PFIC_IPRIOR19_OFFSET     0x0413
#define CH32V003_PFIC_IPRIOR19            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR19_OFFSET)
#define CH32V003_PFIC_IPRIOR20_OFFSET     0x0414
#define CH32V003_PFIC_IPRIOR20            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR20_OFFSET)
#define CH32V003_PFIC_IPRIOR21_OFFSET     0x0415
#define CH32V003_PFIC_IPRIOR21            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR21_OFFSET)
#define CH32V003_PFIC_IPRIOR22_OFFSET     0x0416
#define CH32V003_PFIC_IPRIOR22            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR22_OFFSET)
#define CH32V003_PFIC_IPRIOR23_OFFSET     0x0417
#define CH32V003_PFIC_IPRIOR23            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR23_OFFSET)
#define CH32V003_PFIC_IPRIOR24_OFFSET     0x0418
#define CH32V003_PFIC_IPRIOR24            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR24_OFFSET)
#define CH32V003_PFIC_IPRIOR25_OFFSET     0x0419
#define CH32V003_PFIC_IPRIOR25            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR25_OFFSET)
#define CH32V003_PFIC_IPRIOR26_OFFSET     0x041a
#define CH32V003_PFIC_IPRIOR26            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR26_OFFSET)
#define CH32V003_PFIC_IPRIOR27_OFFSET     0x041b
#define CH32V003_PFIC_IPRIOR27            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR27_OFFSET)
#define CH32V003_PFIC_IPRIOR28_OFFSET     0x041c
#define CH32V003_PFIC_IPRIOR28            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR28_OFFSET)
#define CH32V003_PFIC_IPRIOR29_OFFSET     0x041d
#define CH32V003_PFIC_IPRIOR29            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR29_OFFSET)
#define CH32V003_PFIC_IPRIOR30_OFFSET     0x041e
#define CH32V003_PFIC_IPRIOR30            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR30_OFFSET)
#define CH32V003_PFIC_IPRIOR31_OFFSET     0x041f
#define CH32V003_PFIC_IPRIOR31            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR31_OFFSET)
#define CH32V003_PFIC_IPRIOR32_OFFSET     0x0420
#define CH32V003_PFIC_IPRIOR32            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR32_OFFSET)
#define CH32V003_PFIC_IPRIOR33_OFFSET     0x0421
#define CH32V003_PFIC_IPRIOR33            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR33_OFFSET)
#define CH32V003_PFIC_IPRIOR34_OFFSET     0x0422
#define CH32V003_PFIC_IPRIOR34            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR34_OFFSET)
#define CH32V003_PFIC_IPRIOR35_OFFSET     0x0423
#define CH32V003_PFIC_IPRIOR35            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR35_OFFSET)
#define CH32V003_PFIC_IPRIOR36_OFFSET     0x0424
#define CH32V003_PFIC_IPRIOR36            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR36_OFFSET)
#define CH32V003_PFIC_IPRIOR37_OFFSET     0x0425
#define CH32V003_PFIC_IPRIOR37            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR37_OFFSET)
#define CH32V003_PFIC_IPRIOR38_OFFSET     0x0426
#define CH32V003_PFIC_IPRIOR38            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR38_OFFSET)
#define CH32V003_PFIC_IPRIOR39_OFFSET     0x0427
#define CH32V003_PFIC_IPRIOR39            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR39_OFFSET)
#define CH32V003_PFIC_IPRIOR40_OFFSET     0x0428
#define CH32V003_PFIC_IPRIOR40            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR40_OFFSET)
#define CH32V003_PFIC_IPRIOR41_OFFSET     0x0429
#define CH32V003_PFIC_IPRIOR41            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR41_OFFSET)
#define CH32V003_PFIC_IPRIOR42_OFFSET     0x042a
#define CH32V003_PFIC_IPRIOR42            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR42_OFFSET)
#define CH32V003_PFIC_IPRIOR43_OFFSET     0x042b
#define CH32V003_PFIC_IPRIOR43            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR43_OFFSET)
#define CH32V003_PFIC_IPRIOR44_OFFSET     0x042c
#define CH32V003_PFIC_IPRIOR44            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR44_OFFSET)
#define CH32V003_PFIC_IPRIOR45_OFFSET     0x042d
#define CH32V003_PFIC_IPRIOR45            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR45_OFFSET)
#define CH32V003_PFIC_IPRIOR46_OFFSET     0x042e
#define CH32V003_PFIC_IPRIOR46            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR46_OFFSET)
#define CH32V003_PFIC_IPRIOR47_OFFSET     0x042f
#define CH32V003_PFIC_IPRIOR47            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR47_OFFSET)
#define CH32V003_PFIC_IPRIOR48_OFFSET     0x0430
#define CH32V003_PFIC_IPRIOR48            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR48_OFFSET)
#define CH32V003_PFIC_IPRIOR49_OFFSET     0x0431
#define CH32V003_PFIC_IPRIOR49            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR49_OFFSET)
#define CH32V003_PFIC_IPRIOR50_OFFSET     0x0432
#define CH32V003_PFIC_IPRIOR50            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR50_OFFSET)
#define CH32V003_PFIC_IPRIOR51_OFFSET     0x0433
#define CH32V003_PFIC_IPRIOR51            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR51_OFFSET)
#define CH32V003_PFIC_IPRIOR52_OFFSET     0x0434
#define CH32V003_PFIC_IPRIOR52            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR52_OFFSET)
#define CH32V003_PFIC_IPRIOR53_OFFSET     0x0435
#define CH32V003_PFIC_IPRIOR53            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR53_OFFSET)
#define CH32V003_PFIC_IPRIOR54_OFFSET     0x0436
#define CH32V003_PFIC_IPRIOR54            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR54_OFFSET)
#define CH32V003_PFIC_IPRIOR55_OFFSET     0x0437
#define CH32V003_PFIC_IPRIOR55            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR55_OFFSET)
#define CH32V003_PFIC_IPRIOR56_OFFSET     0x0438
#define CH32V003_PFIC_IPRIOR56            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR56_OFFSET)
#define CH32V003_PFIC_IPRIOR57_OFFSET     0x0439
#define CH32V003_PFIC_IPRIOR57            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR57_OFFSET)
#define CH32V003_PFIC_IPRIOR58_OFFSET     0x043a
#define CH32V003_PFIC_IPRIOR58            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR58_OFFSET)
#define CH32V003_PFIC_IPRIOR59_OFFSET     0x043b
#define CH32V003_PFIC_IPRIOR59            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR59_OFFSET)
#define CH32V003_PFIC_IPRIOR60_OFFSET     0x043c
#define CH32V003_PFIC_IPRIOR60            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR60_OFFSET)
#define CH32V003_PFIC_IPRIOR61_OFFSET     0x043d
#define CH32V003_PFIC_IPRIOR61            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR61_OFFSET)
#define CH32V003_PFIC_IPRIOR62_OFFSET     0x043e
#define CH32V003_PFIC_IPRIOR62            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR62_OFFSET)
#define CH32V003_PFIC_IPRIOR63_OFFSET     0x043f
#define CH32V003_PFIC_IPRIOR63            (CH32V003_PFIC_BASE + CH32V003_PFIC_IPRIOR63_OFFSET)
#define CH32V003_PFIC_SCTLR_OFFSET        0x0d10
#define CH32V003_PFIC_SCTLR               (CH32V003_PFIC_BASE + CH32V003_PFIC_SCTLR_OFFSET)
#define CH32V003_PFIC_SCTLR_SLEEPONEXIT   (1 <<  1) /* 02: SLEEPONEXIT */
#define CH32V003_PFIC_SCTLR_SLEEPDEEP     (1 <<  2) /* 04: SLEEPDEEP */
#define CH32V003_PFIC_SCTLR_WFITOWFE      (1 <<  3) /* 08: WFITOWFE */
#define CH32V003_PFIC_SCTLR_SEVONPEND     (1 <<  4) /* 10: SEVONPEND */
#define CH32V003_PFIC_SCTLR_SETEVENT      (1 <<  5) /* 20: SETEVENT */
#define CH32V003_PFIC_SCTLR_SYSRESET      (1 << 31) /* 80000000: SYSRESET */
#define CH32V003_PFIC_STK_CTLR_OFFSET     0x1000
#define CH32V003_PFIC_STK_CTLR            (CH32V003_PFIC_BASE + CH32V003_PFIC_STK_CTLR_OFFSET)
#define CH32V003_PFIC_STK_CTLR_STE        (1 <<  0) /* 01: System counter enable */
#define CH32V003_PFIC_STK_CTLR_STIE       (1 <<  1) /* 02: System counter interrupt enable */
#define CH32V003_PFIC_STK_CTLR_STCLK      (1 <<  2) /* 04: System selects the clock source */
#define CH32V003_PFIC_STK_CTLR_STRE       (1 <<  3) /* 08: System reload register */
#define CH32V003_PFIC_STK_CTLR_MODE       (1 <<  4) /* 10: System Mode */
#define CH32V003_PFIC_STK_CTLR_INIT       (1 <<  5) /* 20: System Initialization update */
#define CH32V003_PFIC_STK_CTLR_SWIE       (1 << 31) /* 80000000: System software triggered interrupts enable */
#define CH32V003_PFIC_STK_SR_OFFSET       0x1004
#define CH32V003_PFIC_STK_SR              (CH32V003_PFIC_BASE + CH32V003_PFIC_STK_SR_OFFSET)
#define CH32V003_PFIC_STK_SR_CNTIF        (1 <<  0) /* 01: CNTIF */
#define CH32V003_PFIC_STK_CNTL_OFFSET     0x1008
#define CH32V003_PFIC_STK_CNTL            (CH32V003_PFIC_BASE + CH32V003_PFIC_STK_CNTL_OFFSET)
#define CH32V003_PFIC_STK_CNTL_CNTL       (32 <<  0) /* 01: CNTL */
#define CH32V003_PFIC_STK_CNTL_CNTL_MASK       (0xffffffff)
#define CH32V003_PFIC_STK_CMPLR_OFFSET    0x1010
#define CH32V003_PFIC_STK_CMPLR           (CH32V003_PFIC_BASE + CH32V003_PFIC_STK_CMPLR_OFFSET)
#define CH32V003_PFIC_STK_CMPLR_CMPL      (32 <<  0) /* 01: CMPL */
#define CH32V003_PFIC_STK_CMPLR_CMPL_MASK      (0xffffffff)
