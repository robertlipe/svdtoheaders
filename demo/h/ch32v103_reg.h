
/* PWR - Power control */
#define CH32V103_PWR_BASE                 0x40007000
#define CH32V103_PWR_CTLR_OFFSET          0x0000
#define CH32V103_PWR_CTLR                 (CH32V103_PWR_BASE + CH32V103_PWR_CTLR_OFFSET)
#define CH32V103_PWR_CTLR_LPDS            (1 <<  0) /* 01: Low Power Deep Sleep */
#define CH32V103_PWR_CTLR_PDDS            (1 <<  1) /* 02: Power Down Deep Sleep */
#define CH32V103_PWR_CTLR_CWUF            (1 <<  2) /* 04: Clear Wake-up Flag */
#define CH32V103_PWR_CTLR_CSBF            (1 <<  3) /* 08: Clear STANDBY Flag */
#define CH32V103_PWR_CTLR_PVDE            (1 <<  4) /* 10: Power Voltage Detector Enable */
#define CH32V103_PWR_CTLR_PLS             (3 <<  5) /* 20: PVD Level Selection */
#define CH32V103_PWR_CTLR_PLS_MASK             (0x07)
#define CH32V103_PWR_CTLR_DBP             (1 <<  8) /* 100: Disable Backup Domain write protection */
#define CH32V103_PWR_CSR_OFFSET           0x0004
#define CH32V103_PWR_CSR                  (CH32V103_PWR_BASE + CH32V103_PWR_CSR_OFFSET)
#define CH32V103_PWR_CSR_WUF              (1 <<  0) /* 01: Wake-Up Flag */
#define CH32V103_PWR_CSR_SBF              (1 <<  1) /* 02: STANDBY Flag */
#define CH32V103_PWR_CSR_PVDO             (1 <<  2) /* 04: PVD Output */
#define CH32V103_PWR_CSR_EWUP             (1 <<  8) /* 100: Enable WKUP pin */

/* RCC - Reset and clock control */
#define CH32V103_RCC_BASE                 0x40021000
#define CH32V103_RCC_CTLR_OFFSET          0x0000
#define CH32V103_RCC_CTLR                 (CH32V103_RCC_BASE + CH32V103_RCC_CTLR_OFFSET)
#define CH32V103_RCC_CTLR_HSION           (1 <<  0) /* 01: Internal High Speed clock enable */
#define CH32V103_RCC_CTLR_HSIRDY          (1 <<  1) /* 02: Internal High Speed clock ready flag */
#define CH32V103_RCC_CTLR_HSITRIM         (5 <<  3) /* 08: Internal High Speed clock trimming */
#define CH32V103_RCC_CTLR_HSITRIM_MASK         (0x1f)
#define CH32V103_RCC_CTLR_HSICAL          (8 <<  8) /* 100: Internal High Speed clock Calibration */
#define CH32V103_RCC_CTLR_HSICAL_MASK          (0xff)
#define CH32V103_RCC_CTLR_HSEON           (1 << 16) /* 10000: External High Speed clock enable */
#define CH32V103_RCC_CTLR_HSERDY          (1 << 17) /* 20000: External High Speed clock ready flag */
#define CH32V103_RCC_CTLR_HSEBYP          (1 << 18) /* 40000: External High Speed clock Bypass */
#define CH32V103_RCC_CTLR_CSSON           (1 << 19) /* 80000: Clock Security System enable */
#define CH32V103_RCC_CTLR_PLLON           (1 << 24) /* 1000000: PLL enable */
#define CH32V103_RCC_CTLR_PLLRDY          (1 << 25) /* 2000000: PLL clock ready flag */
#define CH32V103_RCC_CFGR0_OFFSET         0x0004
#define CH32V103_RCC_CFGR0                (CH32V103_RCC_BASE + CH32V103_RCC_CFGR0_OFFSET)
#define CH32V103_RCC_CFGR0_SW             (2 <<  0) /* 01: System clock Switch */
#define CH32V103_RCC_CFGR0_SW_MASK             (0x03)
#define CH32V103_RCC_CFGR0_SWS            (2 <<  2) /* 04: System Clock Switch Status */
#define CH32V103_RCC_CFGR0_SWS_MASK            (0x03)
#define CH32V103_RCC_CFGR0_HPRE           (4 <<  4) /* 10: AHB prescaler */
#define CH32V103_RCC_CFGR0_HPRE_MASK           (0x0f)
#define CH32V103_RCC_CFGR0_PPRE1          (3 <<  8) /* 100: APB Low speed prescaler(APB1) */
#define CH32V103_RCC_CFGR0_PPRE1_MASK          (0x07)
#define CH32V103_RCC_CFGR0_PPRE2          (3 << 11) /* 800: APB High speed prescaler(APB2) */
#define CH32V103_RCC_CFGR0_PPRE2_MASK          (0x07)
#define CH32V103_RCC_CFGR0_ADCPRE         (2 << 14) /* 4000: ADC prescaler */
#define CH32V103_RCC_CFGR0_ADCPRE_MASK         (0x03)
#define CH32V103_RCC_CFGR0_PLLSRC         (1 << 16) /* 10000: PLL entry clock source */
#define CH32V103_RCC_CFGR0_PLLXTPRE       (1 << 17) /* 20000: HSE divider for PLL entry */
#define CH32V103_RCC_CFGR0_PLLMUL         (4 << 18) /* 40000: PLL Multiplication Factor */
#define CH32V103_RCC_CFGR0_PLLMUL_MASK         (0x0f)
#define CH32V103_RCC_CFGR0_USBPRE         (1 << 22) /* 400000: USB prescaler */
#define CH32V103_RCC_CFGR0_MCO            (3 << 24) /* 1000000: Microcontroller clock output */
#define CH32V103_RCC_CFGR0_MCO_MASK            (0x07)
#define CH32V103_RCC_INTR_OFFSET          0x0008
#define CH32V103_RCC_INTR                 (CH32V103_RCC_BASE + CH32V103_RCC_INTR_OFFSET)
#define CH32V103_RCC_INTR_LSIRDYF         (1 <<  0) /* 01: LSI Ready Interrupt flag */
#define CH32V103_RCC_INTR_LSERDYF         (1 <<  1) /* 02: LSE Ready Interrupt flag */
#define CH32V103_RCC_INTR_HSIRDYF         (1 <<  2) /* 04: HSI Ready Interrupt flag */
#define CH32V103_RCC_INTR_HSERDYF         (1 <<  3) /* 08: HSE Ready Interrupt flag */
#define CH32V103_RCC_INTR_PLLRDYF         (1 <<  4) /* 10: PLL Ready Interrupt flag */
#define CH32V103_RCC_INTR_CSSF            (1 <<  7) /* 80: Clock Security System Interrupt flag */
#define CH32V103_RCC_INTR_LSIRDYIE        (1 <<  8) /* 100: LSI Ready Interrupt Enable */
#define CH32V103_RCC_INTR_LSERDYIE        (1 <<  9) /* 200: LSE Ready Interrupt Enable */
#define CH32V103_RCC_INTR_HSIRDYIE        (1 << 10) /* 400: HSI Ready Interrupt Enable */
#define CH32V103_RCC_INTR_HSERDYIE        (1 << 11) /* 800: HSE Ready Interrupt Enable */
#define CH32V103_RCC_INTR_PLLRDYIE        (1 << 12) /* 1000: PLL Ready Interrupt Enable */
#define CH32V103_RCC_INTR_LSIRDYC         (1 << 16) /* 10000: LSI Ready Interrupt Clear */
#define CH32V103_RCC_INTR_LSERDYC         (1 << 17) /* 20000: LSE Ready Interrupt Clear */
#define CH32V103_RCC_INTR_HSIRDYC         (1 << 18) /* 40000: HSI Ready Interrupt Clear */
#define CH32V103_RCC_INTR_HSERDYC         (1 << 19) /* 80000: HSE Ready Interrupt Clear */
#define CH32V103_RCC_INTR_PLLRDYC         (1 << 20) /* 100000: PLL Ready Interrupt Clear */
#define CH32V103_RCC_INTR_CSSC            (1 << 23) /* 800000: Clock security system interrupt clear */
#define CH32V103_RCC_APB2PRSTR_OFFSET     0x000c
#define CH32V103_RCC_APB2PRSTR            (CH32V103_RCC_BASE + CH32V103_RCC_APB2PRSTR_OFFSET)
#define CH32V103_RCC_APB2PRSTR_AFIORST    (1 <<  0) /* 01: Alternate function I/O reset */
#define CH32V103_RCC_APB2PRSTR_IOPARST    (1 <<  2) /* 04: IO port A reset */
#define CH32V103_RCC_APB2PRSTR_IOPBRST    (1 <<  3) /* 08: IO port B reset */
#define CH32V103_RCC_APB2PRSTR_IOPCRST    (1 <<  4) /* 10: IO port C reset */
#define CH32V103_RCC_APB2PRSTR_IOPDRST    (1 <<  5) /* 20: IO port D reset */
#define CH32V103_RCC_APB2PRSTR_ADCRST     (1 <<  9) /* 200: ADC interface reset */
#define CH32V103_RCC_APB2PRSTR_TIM1RST    (1 << 11) /* 800: TIM1 timer reset */
#define CH32V103_RCC_APB2PRSTR_SPI1RST    (1 << 12) /* 1000: SPI 1 reset */
#define CH32V103_RCC_APB2PRSTR_USART1RST  (1 << 14) /* 4000: USART1 reset */
#define CH32V103_RCC_APB1PRSTR_OFFSET     0x0010
#define CH32V103_RCC_APB1PRSTR            (CH32V103_RCC_BASE + CH32V103_RCC_APB1PRSTR_OFFSET)
#define CH32V103_RCC_APB1PRSTR_TIM2RST    (1 <<  0) /* 01: Timer 2 reset */
#define CH32V103_RCC_APB1PRSTR_TIM3RST    (1 <<  1) /* 02: Timer 3 reset */
#define CH32V103_RCC_APB1PRSTR_TIM4RST    (1 <<  2) /* 04: Timer 4 reset */
#define CH32V103_RCC_APB1PRSTR_WWDGRST    (1 << 11) /* 800: Window watchdog reset */
#define CH32V103_RCC_APB1PRSTR_SPI2RST    (1 << 14) /* 4000: SPI2 reset */
#define CH32V103_RCC_APB1PRSTR_USART2RST  (1 << 17) /* 20000: USART 2 reset */
#define CH32V103_RCC_APB1PRSTR_USART3RST  (1 << 18) /* 40000: USART 3 reset */
#define CH32V103_RCC_APB1PRSTR_I2C1RST    (1 << 21) /* 200000: I2C1 reset */
#define CH32V103_RCC_APB1PRSTR_I2C2RST    (1 << 22) /* 400000: I2C2 reset */
#define CH32V103_RCC_APB1PRSTR_USBDRST    (1 << 23) /* 800000: USBD reset */
#define CH32V103_RCC_APB1PRSTR_CANRST     (1 << 25) /* 2000000: CAN reset */
#define CH32V103_RCC_APB1PRSTR_BKPRST     (1 << 27) /* 8000000: Backup interface reset */
#define CH32V103_RCC_APB1PRSTR_PWRRST     (1 << 28) /* 10000000: Power interface reset */
#define CH32V103_RCC_APB1PRSTR_DACRST     (1 << 29) /* 20000000: DAC interface reset */
#define CH32V103_RCC_AHBPCENR_OFFSET      0x0014
#define CH32V103_RCC_AHBPCENR             (CH32V103_RCC_BASE + CH32V103_RCC_AHBPCENR_OFFSET)
#define CH32V103_RCC_AHBPCENR_DMAEN       (1 <<  0) /* 01: DMA clock enable */
#define CH32V103_RCC_AHBPCENR_SRAMEN      (1 <<  2) /* 04: SRAM interface clock enable */
#define CH32V103_RCC_AHBPCENR_FLITFEN     (1 <<  4) /* 10: FLITF clock enable */
#define CH32V103_RCC_AHBPCENR_CRCEN       (1 <<  6) /* 40: CRC clock enable */
#define CH32V103_RCC_AHBPCENR_USBHDEN     (1 << 12) /* 1000: USBHD clock enable */
#define CH32V103_RCC_APB2PCENR_OFFSET     0x0018
#define CH32V103_RCC_APB2PCENR            (CH32V103_RCC_BASE + CH32V103_RCC_APB2PCENR_OFFSET)
#define CH32V103_RCC_APB2PCENR_AFIOEN     (1 <<  0) /* 01: Alternate function I/O clock enable */
#define CH32V103_RCC_APB2PCENR_IOPAEN     (1 <<  2) /* 04: I/O port A clock enable */
#define CH32V103_RCC_APB2PCENR_IOPBEN     (1 <<  3) /* 08: I/O port B clock enable */
#define CH32V103_RCC_APB2PCENR_IOPCEN     (1 <<  4) /* 10: I/O port C clock enable */
#define CH32V103_RCC_APB2PCENR_IOPDEN     (1 <<  5) /* 20: I/O port D clock enable */
#define CH32V103_RCC_APB2PCENR_ADCEN      (1 <<  9) /* 200: ADC interface clock enable */
#define CH32V103_RCC_APB2PCENR_TIM1EN     (1 << 11) /* 800: TIM1 Timer clock enable */
#define CH32V103_RCC_APB2PCENR_SPI1EN     (1 << 12) /* 1000: SPI 1 clock enable */
#define CH32V103_RCC_APB2PCENR_USART1EN   (1 << 14) /* 4000: USART1 clock enable */
#define CH32V103_RCC_APB1PCENR_OFFSET     0x001c
#define CH32V103_RCC_APB1PCENR            (CH32V103_RCC_BASE + CH32V103_RCC_APB1PCENR_OFFSET)
#define CH32V103_RCC_APB1PCENR_TIM2EN     (1 <<  0) /* 01: Timer 2 clock enable */
#define CH32V103_RCC_APB1PCENR_TIM3EN     (1 <<  1) /* 02: Timer 3 clock enable */
#define CH32V103_RCC_APB1PCENR_TIM4EN     (1 <<  2) /* 04: Timer 4 clock enable */
#define CH32V103_RCC_APB1PCENR_WWDGEN     (1 << 11) /* 800: Window watchdog clock enable */
#define CH32V103_RCC_APB1PCENR_SPI2EN     (1 << 14) /* 4000: SPI 2 clock enable */
#define CH32V103_RCC_APB1PCENR_USART2EN   (1 << 17) /* 20000: USART 2 clock enable */
#define CH32V103_RCC_APB1PCENR_USART3EN   (1 << 18) /* 40000: USART 3 clock enable */
#define CH32V103_RCC_APB1PCENR_I2C1EN     (1 << 21) /* 200000: I2C 1 clock enable */
#define CH32V103_RCC_APB1PCENR_I2C2EN     (1 << 22) /* 400000: I2C 2 clock enable */
#define CH32V103_RCC_APB1PCENR_USBDEN     (1 << 23) /* 800000: USBD clock enable */
#define CH32V103_RCC_APB1PCENR_CANEN      (1 << 25) /* 2000000: CAN clock enable */
#define CH32V103_RCC_APB1PCENR_BKPEN      (1 << 27) /* 8000000: Backup interface clock enable */
#define CH32V103_RCC_APB1PCENR_PWREN      (1 << 28) /* 10000000: Power interface clock enable */
#define CH32V103_RCC_APB1PCENR_DACEN      (1 << 29) /* 20000000: DAC interface clock enable */
#define CH32V103_RCC_BDCTLR_OFFSET        0x0020
#define CH32V103_RCC_BDCTLR               (CH32V103_RCC_BASE + CH32V103_RCC_BDCTLR_OFFSET)
#define CH32V103_RCC_BDCTLR_LSEON         (1 <<  0) /* 01: External Low Speed oscillator enable */
#define CH32V103_RCC_BDCTLR_LSERDY        (1 <<  1) /* 02: External Low Speed oscillator ready */
#define CH32V103_RCC_BDCTLR_LSEBYP        (1 <<  2) /* 04: External Low Speed oscillator bypass */
#define CH32V103_RCC_BDCTLR_RTCSEL        (2 <<  8) /* 100: RTC clock source selection */
#define CH32V103_RCC_BDCTLR_RTCSEL_MASK        (0x03)
#define CH32V103_RCC_BDCTLR_RTCEN         (1 << 15) /* 8000: RTC clock enable */
#define CH32V103_RCC_BDCTLR_BDRST         (1 << 16) /* 10000: Backup domain software reset */
#define CH32V103_RCC_RSTSCKR_OFFSET       0x0024
#define CH32V103_RCC_RSTSCKR              (CH32V103_RCC_BASE + CH32V103_RCC_RSTSCKR_OFFSET)
#define CH32V103_RCC_RSTSCKR_LSION        (1 <<  0) /* 01: Internal low speed oscillator enable */
#define CH32V103_RCC_RSTSCKR_LSIRDY       (1 <<  1) /* 02: Internal low speed oscillator ready */
#define CH32V103_RCC_RSTSCKR_RMVF         (1 << 24) /* 1000000: Remove reset flag */
#define CH32V103_RCC_RSTSCKR_PINRSTF      (1 << 26) /* 4000000: PIN reset flag */
#define CH32V103_RCC_RSTSCKR_PORRSTF      (1 << 27) /* 8000000: POR/PDR reset flag */
#define CH32V103_RCC_RSTSCKR_SFTRSTF      (1 << 28) /* 10000000: Software reset flag */
#define CH32V103_RCC_RSTSCKR_IWDGRSTF     (1 << 29) /* 20000000: Independent watchdog reset flag */
#define CH32V103_RCC_RSTSCKR_WWDGRSTF     (1 << 30) /* 40000000: Window watchdog reset flag */
#define CH32V103_RCC_RSTSCKR_LPWRRSTF     (1 << 31) /* 80000000: Low-power reset flag */
#define CH32V103_RCC_AHBRSTR_OFFSET       0x0028
#define CH32V103_RCC_AHBRSTR              (CH32V103_RCC_BASE + CH32V103_RCC_AHBRSTR_OFFSET)
#define CH32V103_RCC_AHBRSTR_USBHDRST     (1 << 12) /* 1000: USBHD reset */

/* EXTEND - extension configuration */
#define CH32V103_EXTEND_BASE              0x40023800
#define CH32V103_EXTEND_EXTEND_CTR_OFFSET 0x0000
#define CH32V103_EXTEND_EXTEND_CTR        (CH32V103_EXTEND_BASE + CH32V103_EXTEND_EXTEND_CTR_OFFSET)
#define CH32V103_EXTEND_EXTEND_CTR_USBDLS (1 <<  0) /* 01: USBD Lowspeed Enable */
#define CH32V103_EXTEND_EXTEND_CTR_USBDPU (1 <<  1) /* 02: USBD pullup Enable */
#define CH32V103_EXTEND_EXTEND_CTR_USBHDIO (1 <<  2) /* 04: USBHD IO(PB6/PB7) Enable */
#define CH32V103_EXTEND_EXTEND_CTR_USB5VSEL (1 <<  3) /* 08: USB 5V Enable */
#define CH32V103_EXTEND_EXTEND_CTR_HSIPRE (1 <<  4) /* 10: Whether HSI is divided */
#define CH32V103_EXTEND_EXTEND_CTR_LKUPEN (1 <<  6) /* 40: LOCKUP */
#define CH32V103_EXTEND_EXTEND_CTR_LKUPRESET (1 <<  7) /* 80: LOCKUP RESET */
#define CH32V103_EXTEND_EXTEND_CTR_ULLDOTRIM (2 <<  8) /* 100: ULLDOTRIM */
#define CH32V103_EXTEND_EXTEND_CTR_ULLDOTRIM_MASK (0x03)
#define CH32V103_EXTEND_EXTEND_CTR_LDOTRIM (1 << 10) /* 400: LDOTRIM */

/* GPIOA - General purpose I/O */
#define CH32V103_GPIOA_BASE               0x40010800
#define CH32V103_GPIOA_CFGLR_OFFSET       0x0000
#define CH32V103_GPIOA_CFGLR              (CH32V103_GPIOA_BASE + CH32V103_GPIOA_CFGLR_OFFSET)
#define CH32V103_GPIOA_CFGLR_MODE0        (2 <<  0) /* 01: Port n.0 mode bits */
#define CH32V103_GPIOA_CFGLR_MODE0_MASK        (0x03)
#define CH32V103_GPIOA_CFGLR_CNF0         (2 <<  2) /* 04: Port n.0 configuration bits */
#define CH32V103_GPIOA_CFGLR_CNF0_MASK         (0x03)
#define CH32V103_GPIOA_CFGLR_MODE1        (2 <<  4) /* 10: Port n.1 mode bits */
#define CH32V103_GPIOA_CFGLR_MODE1_MASK        (0x03)
#define CH32V103_GPIOA_CFGLR_CNF1         (2 <<  6) /* 40: Port n.1 configuration bits */
#define CH32V103_GPIOA_CFGLR_CNF1_MASK         (0x03)
#define CH32V103_GPIOA_CFGLR_MODE2        (2 <<  8) /* 100: Port n.2 mode bits */
#define CH32V103_GPIOA_CFGLR_MODE2_MASK        (0x03)
#define CH32V103_GPIOA_CFGLR_CNF2         (2 << 10) /* 400: Port n.2 configuration bits */
#define CH32V103_GPIOA_CFGLR_CNF2_MASK         (0x03)
#define CH32V103_GPIOA_CFGLR_MODE3        (2 << 12) /* 1000: Port n.3 mode bits */
#define CH32V103_GPIOA_CFGLR_MODE3_MASK        (0x03)
#define CH32V103_GPIOA_CFGLR_CNF3         (2 << 14) /* 4000: Port n.3 configuration bits */
#define CH32V103_GPIOA_CFGLR_CNF3_MASK         (0x03)
#define CH32V103_GPIOA_CFGLR_MODE4        (2 << 16) /* 10000: Port n.4 mode bits */
#define CH32V103_GPIOA_CFGLR_MODE4_MASK        (0x03)
#define CH32V103_GPIOA_CFGLR_CNF4         (2 << 18) /* 40000: Port n.4 configuration bits */
#define CH32V103_GPIOA_CFGLR_CNF4_MASK         (0x03)
#define CH32V103_GPIOA_CFGLR_MODE5        (2 << 20) /* 100000: Port n.5 mode bits */
#define CH32V103_GPIOA_CFGLR_MODE5_MASK        (0x03)
#define CH32V103_GPIOA_CFGLR_CNF5         (2 << 22) /* 400000: Port n.5 configuration bits */
#define CH32V103_GPIOA_CFGLR_CNF5_MASK         (0x03)
#define CH32V103_GPIOA_CFGLR_MODE6        (2 << 24) /* 1000000: Port n.6 mode bits */
#define CH32V103_GPIOA_CFGLR_MODE6_MASK        (0x03)
#define CH32V103_GPIOA_CFGLR_CNF6         (2 << 26) /* 4000000: Port n.6 configuration bits */
#define CH32V103_GPIOA_CFGLR_CNF6_MASK         (0x03)
#define CH32V103_GPIOA_CFGLR_MODE7        (2 << 28) /* 10000000: Port n.7 mode bits */
#define CH32V103_GPIOA_CFGLR_MODE7_MASK        (0x03)
#define CH32V103_GPIOA_CFGLR_CNF7         (2 << 30) /* 40000000: Port n.7 configuration bits */
#define CH32V103_GPIOA_CFGLR_CNF7_MASK         (0x03)
#define CH32V103_GPIOA_CFGHR_OFFSET       0x0004
#define CH32V103_GPIOA_CFGHR              (CH32V103_GPIOA_BASE + CH32V103_GPIOA_CFGHR_OFFSET)
#define CH32V103_GPIOA_CFGHR_MODE8        (2 <<  0) /* 01: Port n.8 mode bits */
#define CH32V103_GPIOA_CFGHR_MODE8_MASK        (0x03)
#define CH32V103_GPIOA_CFGHR_CNF8         (2 <<  2) /* 04: Port n.8 configuration bits */
#define CH32V103_GPIOA_CFGHR_CNF8_MASK         (0x03)
#define CH32V103_GPIOA_CFGHR_MODE9        (2 <<  4) /* 10: Port n.9 mode bits */
#define CH32V103_GPIOA_CFGHR_MODE9_MASK        (0x03)
#define CH32V103_GPIOA_CFGHR_CNF9         (2 <<  6) /* 40: Port n.9 configuration bits */
#define CH32V103_GPIOA_CFGHR_CNF9_MASK         (0x03)
#define CH32V103_GPIOA_CFGHR_MODE10       (2 <<  8) /* 100: Port n.10 mode bits */
#define CH32V103_GPIOA_CFGHR_MODE10_MASK       (0x03)
#define CH32V103_GPIOA_CFGHR_CNF10        (2 << 10) /* 400: Port n.10 configuration bits */
#define CH32V103_GPIOA_CFGHR_CNF10_MASK        (0x03)
#define CH32V103_GPIOA_CFGHR_MODE11       (2 << 12) /* 1000: Port n.11 mode bits */
#define CH32V103_GPIOA_CFGHR_MODE11_MASK       (0x03)
#define CH32V103_GPIOA_CFGHR_CNF11        (2 << 14) /* 4000: Port n.11 configuration bits */
#define CH32V103_GPIOA_CFGHR_CNF11_MASK        (0x03)
#define CH32V103_GPIOA_CFGHR_MODE12       (2 << 16) /* 10000: Port n.12 mode bits */
#define CH32V103_GPIOA_CFGHR_MODE12_MASK       (0x03)
#define CH32V103_GPIOA_CFGHR_CNF12        (2 << 18) /* 40000: Port n.12 configuration bits */
#define CH32V103_GPIOA_CFGHR_CNF12_MASK        (0x03)
#define CH32V103_GPIOA_CFGHR_MODE13       (2 << 20) /* 100000: Port n.13 mode bits */
#define CH32V103_GPIOA_CFGHR_MODE13_MASK       (0x03)
#define CH32V103_GPIOA_CFGHR_CNF13        (2 << 22) /* 400000: Port n.13 configuration bits */
#define CH32V103_GPIOA_CFGHR_CNF13_MASK        (0x03)
#define CH32V103_GPIOA_CFGHR_MODE14       (2 << 24) /* 1000000: Port n.14 mode bits */
#define CH32V103_GPIOA_CFGHR_MODE14_MASK       (0x03)
#define CH32V103_GPIOA_CFGHR_CNF14        (2 << 26) /* 4000000: Port n.14 configuration bits */
#define CH32V103_GPIOA_CFGHR_CNF14_MASK        (0x03)
#define CH32V103_GPIOA_CFGHR_MODE15       (2 << 28) /* 10000000: Port n.15 mode bits */
#define CH32V103_GPIOA_CFGHR_MODE15_MASK       (0x03)
#define CH32V103_GPIOA_CFGHR_CNF15        (2 << 30) /* 40000000: Port n.15 configuration bits */
#define CH32V103_GPIOA_CFGHR_CNF15_MASK        (0x03)
#define CH32V103_GPIOA_INDR_OFFSET        0x0008
#define CH32V103_GPIOA_INDR               (CH32V103_GPIOA_BASE + CH32V103_GPIOA_INDR_OFFSET)
#define CH32V103_GPIOA_INDR_IDR0          (1 <<  0) /* 01: Port input data */
#define CH32V103_GPIOA_INDR_IDR1          (1 <<  1) /* 02: Port input data */
#define CH32V103_GPIOA_INDR_IDR2          (1 <<  2) /* 04: Port input data */
#define CH32V103_GPIOA_INDR_IDR3          (1 <<  3) /* 08: Port input data */
#define CH32V103_GPIOA_INDR_IDR4          (1 <<  4) /* 10: Port input data */
#define CH32V103_GPIOA_INDR_IDR5          (1 <<  5) /* 20: Port input data */
#define CH32V103_GPIOA_INDR_IDR6          (1 <<  6) /* 40: Port input data */
#define CH32V103_GPIOA_INDR_IDR7          (1 <<  7) /* 80: Port input data */
#define CH32V103_GPIOA_INDR_IDR8          (1 <<  8) /* 100: Port input data */
#define CH32V103_GPIOA_INDR_IDR9          (1 <<  9) /* 200: Port input data */
#define CH32V103_GPIOA_INDR_IDR10         (1 << 10) /* 400: Port input data */
#define CH32V103_GPIOA_INDR_IDR11         (1 << 11) /* 800: Port input data */
#define CH32V103_GPIOA_INDR_IDR12         (1 << 12) /* 1000: Port input data */
#define CH32V103_GPIOA_INDR_IDR13         (1 << 13) /* 2000: Port input data */
#define CH32V103_GPIOA_INDR_IDR14         (1 << 14) /* 4000: Port input data */
#define CH32V103_GPIOA_INDR_IDR15         (1 << 15) /* 8000: Port input data */
#define CH32V103_GPIOA_OUTDR_OFFSET       0x000c
#define CH32V103_GPIOA_OUTDR              (CH32V103_GPIOA_BASE + CH32V103_GPIOA_OUTDR_OFFSET)
#define CH32V103_GPIOA_OUTDR_ODR0         (1 <<  0) /* 01: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR1         (1 <<  1) /* 02: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR2         (1 <<  2) /* 04: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR3         (1 <<  3) /* 08: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR4         (1 <<  4) /* 10: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR5         (1 <<  5) /* 20: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR6         (1 <<  6) /* 40: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR7         (1 <<  7) /* 80: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR8         (1 <<  8) /* 100: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR9         (1 <<  9) /* 200: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR10        (1 << 10) /* 400: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR11        (1 << 11) /* 800: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR12        (1 << 12) /* 1000: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR13        (1 << 13) /* 2000: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR14        (1 << 14) /* 4000: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR15        (1 << 15) /* 8000: Port output data */
#define CH32V103_GPIOA_BSHR_OFFSET        0x0010
#define CH32V103_GPIOA_BSHR               (CH32V103_GPIOA_BASE + CH32V103_GPIOA_BSHR_OFFSET)
#define CH32V103_GPIOA_BSHR_BS0           (1 <<  0) /* 01: Set bit 0 */
#define CH32V103_GPIOA_BSHR_BS1           (1 <<  1) /* 02: Set bit 1 */
#define CH32V103_GPIOA_BSHR_BS2           (1 <<  2) /* 04: Set bit 1 */
#define CH32V103_GPIOA_BSHR_BS3           (1 <<  3) /* 08: Set bit 3 */
#define CH32V103_GPIOA_BSHR_BS4           (1 <<  4) /* 10: Set bit 4 */
#define CH32V103_GPIOA_BSHR_BS5           (1 <<  5) /* 20: Set bit 5 */
#define CH32V103_GPIOA_BSHR_BS6           (1 <<  6) /* 40: Set bit 6 */
#define CH32V103_GPIOA_BSHR_BS7           (1 <<  7) /* 80: Set bit 7 */
#define CH32V103_GPIOA_BSHR_BS8           (1 <<  8) /* 100: Set bit 8 */
#define CH32V103_GPIOA_BSHR_BS9           (1 <<  9) /* 200: Set bit 9 */
#define CH32V103_GPIOA_BSHR_BS10          (1 << 10) /* 400: Set bit 10 */
#define CH32V103_GPIOA_BSHR_BS11          (1 << 11) /* 800: Set bit 11 */
#define CH32V103_GPIOA_BSHR_BS12          (1 << 12) /* 1000: Set bit 12 */
#define CH32V103_GPIOA_BSHR_BS13          (1 << 13) /* 2000: Set bit 13 */
#define CH32V103_GPIOA_BSHR_BS14          (1 << 14) /* 4000: Set bit 14 */
#define CH32V103_GPIOA_BSHR_BS15          (1 << 15) /* 8000: Set bit 15 */
#define CH32V103_GPIOA_BSHR_BR0           (1 << 16) /* 10000: Reset bit 0 */
#define CH32V103_GPIOA_BSHR_BR1           (1 << 17) /* 20000: Reset bit 1 */
#define CH32V103_GPIOA_BSHR_BR2           (1 << 18) /* 40000: Reset bit 2 */
#define CH32V103_GPIOA_BSHR_BR3           (1 << 19) /* 80000: Reset bit 3 */
#define CH32V103_GPIOA_BSHR_BR4           (1 << 20) /* 100000: Reset bit 4 */
#define CH32V103_GPIOA_BSHR_BR5           (1 << 21) /* 200000: Reset bit 5 */
#define CH32V103_GPIOA_BSHR_BR6           (1 << 22) /* 400000: Reset bit 6 */
#define CH32V103_GPIOA_BSHR_BR7           (1 << 23) /* 800000: Reset bit 7 */
#define CH32V103_GPIOA_BSHR_BR8           (1 << 24) /* 1000000: Reset bit 8 */
#define CH32V103_GPIOA_BSHR_BR9           (1 << 25) /* 2000000: Reset bit 9 */
#define CH32V103_GPIOA_BSHR_BR10          (1 << 26) /* 4000000: Reset bit 10 */
#define CH32V103_GPIOA_BSHR_BR11          (1 << 27) /* 8000000: Reset bit 11 */
#define CH32V103_GPIOA_BSHR_BR12          (1 << 28) /* 10000000: Reset bit 12 */
#define CH32V103_GPIOA_BSHR_BR13          (1 << 29) /* 20000000: Reset bit 13 */
#define CH32V103_GPIOA_BSHR_BR14          (1 << 30) /* 40000000: Reset bit 14 */
#define CH32V103_GPIOA_BSHR_BR15          (1 << 31) /* 80000000: Reset bit 15 */
#define CH32V103_GPIOA_BCR_OFFSET         0x0014
#define CH32V103_GPIOA_BCR                (CH32V103_GPIOA_BASE + CH32V103_GPIOA_BCR_OFFSET)
#define CH32V103_GPIOA_BCR_BR0            (1 <<  0) /* 01: Reset bit 0 */
#define CH32V103_GPIOA_BCR_BR1            (1 <<  1) /* 02: Reset bit 1 */
#define CH32V103_GPIOA_BCR_BR2            (1 <<  2) /* 04: Reset bit 1 */
#define CH32V103_GPIOA_BCR_BR3            (1 <<  3) /* 08: Reset bit 3 */
#define CH32V103_GPIOA_BCR_BR4            (1 <<  4) /* 10: Reset bit 4 */
#define CH32V103_GPIOA_BCR_BR5            (1 <<  5) /* 20: Reset bit 5 */
#define CH32V103_GPIOA_BCR_BR6            (1 <<  6) /* 40: Reset bit 6 */
#define CH32V103_GPIOA_BCR_BR7            (1 <<  7) /* 80: Reset bit 7 */
#define CH32V103_GPIOA_BCR_BR8            (1 <<  8) /* 100: Reset bit 8 */
#define CH32V103_GPIOA_BCR_BR9            (1 <<  9) /* 200: Reset bit 9 */
#define CH32V103_GPIOA_BCR_BR10           (1 << 10) /* 400: Reset bit 10 */
#define CH32V103_GPIOA_BCR_BR11           (1 << 11) /* 800: Reset bit 11 */
#define CH32V103_GPIOA_BCR_BR12           (1 << 12) /* 1000: Reset bit 12 */
#define CH32V103_GPIOA_BCR_BR13           (1 << 13) /* 2000: Reset bit 13 */
#define CH32V103_GPIOA_BCR_BR14           (1 << 14) /* 4000: Reset bit 14 */
#define CH32V103_GPIOA_BCR_BR15           (1 << 15) /* 8000: Reset bit 15 */
#define CH32V103_GPIOA_LCKR_OFFSET        0x0018
#define CH32V103_GPIOA_LCKR               (CH32V103_GPIOA_BASE + CH32V103_GPIOA_LCKR_OFFSET)
#define CH32V103_GPIOA_LCKR_LCK0          (1 <<  0) /* 01: Port A Lock bit 0 */
#define CH32V103_GPIOA_LCKR_LCK1          (1 <<  1) /* 02: Port A Lock bit 1 */
#define CH32V103_GPIOA_LCKR_LCK2          (1 <<  2) /* 04: Port A Lock bit 2 */
#define CH32V103_GPIOA_LCKR_LCK3          (1 <<  3) /* 08: Port A Lock bit 3 */
#define CH32V103_GPIOA_LCKR_LCK4          (1 <<  4) /* 10: Port A Lock bit 4 */
#define CH32V103_GPIOA_LCKR_LCK5          (1 <<  5) /* 20: Port A Lock bit 5 */
#define CH32V103_GPIOA_LCKR_LCK6          (1 <<  6) /* 40: Port A Lock bit 6 */
#define CH32V103_GPIOA_LCKR_LCK7          (1 <<  7) /* 80: Port A Lock bit 7 */
#define CH32V103_GPIOA_LCKR_LCK8          (1 <<  8) /* 100: Port A Lock bit 8 */
#define CH32V103_GPIOA_LCKR_LCK9          (1 <<  9) /* 200: Port A Lock bit 9 */
#define CH32V103_GPIOA_LCKR_LCK10         (1 << 10) /* 400: Port A Lock bit 10 */
#define CH32V103_GPIOA_LCKR_LCK11         (1 << 11) /* 800: Port A Lock bit 11 */
#define CH32V103_GPIOA_LCKR_LCK12         (1 << 12) /* 1000: Port A Lock bit 12 */
#define CH32V103_GPIOA_LCKR_LCK13         (1 << 13) /* 2000: Port A Lock bit 13 */
#define CH32V103_GPIOA_LCKR_LCK14         (1 << 14) /* 4000: Port A Lock bit 14 */
#define CH32V103_GPIOA_LCKR_LCK15         (1 << 15) /* 8000: Port A Lock bit 15 */
#define CH32V103_GPIOA_LCKR_LCKK          (1 << 16) /* 10000: Lock key */

/* No registers defined for peripheral GPIOB. Using those of GPIOA. */
#define CH32V103_GPIOB_BASE               0x40010c00
#define CH32V103_GPIOB_CFGLR_OFFSET       CH32V103_GPIOA_CFGLR_OFFSET
#define CH32V103_GPIOB_CFGLR              CH32V103_GPIOA_CFGLR
#define CH32V103_GPIOB_CFGLR_MODE0        CH32V103_GPIOA_CFGLR_MODE0
#define CH32V103_GPIOB_CFGLR_MODE0_MASK   CH32V103_GPIOA_CFGLR_MODE0_MASK
#define CH32V103_GPIOB_CFGLR_CNF0         CH32V103_GPIOA_CFGLR_CNF0
#define CH32V103_GPIOB_CFGLR_CNF0_MASK    CH32V103_GPIOA_CFGLR_CNF0_MASK
#define CH32V103_GPIOB_CFGLR_MODE1        CH32V103_GPIOA_CFGLR_MODE1
#define CH32V103_GPIOB_CFGLR_MODE1_MASK   CH32V103_GPIOA_CFGLR_MODE1_MASK
#define CH32V103_GPIOB_CFGLR_CNF1         CH32V103_GPIOA_CFGLR_CNF1
#define CH32V103_GPIOB_CFGLR_CNF1_MASK    CH32V103_GPIOA_CFGLR_CNF1_MASK
#define CH32V103_GPIOB_CFGLR_MODE2        CH32V103_GPIOA_CFGLR_MODE2
#define CH32V103_GPIOB_CFGLR_MODE2_MASK   CH32V103_GPIOA_CFGLR_MODE2_MASK
#define CH32V103_GPIOB_CFGLR_CNF2         CH32V103_GPIOA_CFGLR_CNF2
#define CH32V103_GPIOB_CFGLR_CNF2_MASK    CH32V103_GPIOA_CFGLR_CNF2_MASK
#define CH32V103_GPIOB_CFGLR_MODE3        CH32V103_GPIOA_CFGLR_MODE3
#define CH32V103_GPIOB_CFGLR_MODE3_MASK   CH32V103_GPIOA_CFGLR_MODE3_MASK
#define CH32V103_GPIOB_CFGLR_CNF3         CH32V103_GPIOA_CFGLR_CNF3
#define CH32V103_GPIOB_CFGLR_CNF3_MASK    CH32V103_GPIOA_CFGLR_CNF3_MASK
#define CH32V103_GPIOB_CFGLR_MODE4        CH32V103_GPIOA_CFGLR_MODE4
#define CH32V103_GPIOB_CFGLR_MODE4_MASK   CH32V103_GPIOA_CFGLR_MODE4_MASK
#define CH32V103_GPIOB_CFGLR_CNF4         CH32V103_GPIOA_CFGLR_CNF4
#define CH32V103_GPIOB_CFGLR_CNF4_MASK    CH32V103_GPIOA_CFGLR_CNF4_MASK
#define CH32V103_GPIOB_CFGLR_MODE5        CH32V103_GPIOA_CFGLR_MODE5
#define CH32V103_GPIOB_CFGLR_MODE5_MASK   CH32V103_GPIOA_CFGLR_MODE5_MASK
#define CH32V103_GPIOB_CFGLR_CNF5         CH32V103_GPIOA_CFGLR_CNF5
#define CH32V103_GPIOB_CFGLR_CNF5_MASK    CH32V103_GPIOA_CFGLR_CNF5_MASK
#define CH32V103_GPIOB_CFGLR_MODE6        CH32V103_GPIOA_CFGLR_MODE6
#define CH32V103_GPIOB_CFGLR_MODE6_MASK   CH32V103_GPIOA_CFGLR_MODE6_MASK
#define CH32V103_GPIOB_CFGLR_CNF6         CH32V103_GPIOA_CFGLR_CNF6
#define CH32V103_GPIOB_CFGLR_CNF6_MASK    CH32V103_GPIOA_CFGLR_CNF6_MASK
#define CH32V103_GPIOB_CFGLR_MODE7        CH32V103_GPIOA_CFGLR_MODE7
#define CH32V103_GPIOB_CFGLR_MODE7_MASK   CH32V103_GPIOA_CFGLR_MODE7_MASK
#define CH32V103_GPIOB_CFGLR_CNF7         CH32V103_GPIOA_CFGLR_CNF7
#define CH32V103_GPIOB_CFGLR_CNF7_MASK    CH32V103_GPIOA_CFGLR_CNF7_MASK
#define CH32V103_GPIOB_CFGHR_OFFSET       CH32V103_GPIOA_CFGHR_OFFSET
#define CH32V103_GPIOB_CFGHR              CH32V103_GPIOA_CFGHR
#define CH32V103_GPIOB_CFGHR_MODE8        CH32V103_GPIOA_CFGHR_MODE8
#define CH32V103_GPIOB_CFGHR_MODE8_MASK   CH32V103_GPIOA_CFGHR_MODE8_MASK
#define CH32V103_GPIOB_CFGHR_CNF8         CH32V103_GPIOA_CFGHR_CNF8
#define CH32V103_GPIOB_CFGHR_CNF8_MASK    CH32V103_GPIOA_CFGHR_CNF8_MASK
#define CH32V103_GPIOB_CFGHR_MODE9        CH32V103_GPIOA_CFGHR_MODE9
#define CH32V103_GPIOB_CFGHR_MODE9_MASK   CH32V103_GPIOA_CFGHR_MODE9_MASK
#define CH32V103_GPIOB_CFGHR_CNF9         CH32V103_GPIOA_CFGHR_CNF9
#define CH32V103_GPIOB_CFGHR_CNF9_MASK    CH32V103_GPIOA_CFGHR_CNF9_MASK
#define CH32V103_GPIOB_CFGHR_MODE10       CH32V103_GPIOA_CFGHR_MODE10
#define CH32V103_GPIOB_CFGHR_MODE10_MASK  CH32V103_GPIOA_CFGHR_MODE10_MASK
#define CH32V103_GPIOB_CFGHR_CNF10        CH32V103_GPIOA_CFGHR_CNF10
#define CH32V103_GPIOB_CFGHR_CNF10_MASK   CH32V103_GPIOA_CFGHR_CNF10_MASK
#define CH32V103_GPIOB_CFGHR_MODE11       CH32V103_GPIOA_CFGHR_MODE11
#define CH32V103_GPIOB_CFGHR_MODE11_MASK  CH32V103_GPIOA_CFGHR_MODE11_MASK
#define CH32V103_GPIOB_CFGHR_CNF11        CH32V103_GPIOA_CFGHR_CNF11
#define CH32V103_GPIOB_CFGHR_CNF11_MASK   CH32V103_GPIOA_CFGHR_CNF11_MASK
#define CH32V103_GPIOB_CFGHR_MODE12       CH32V103_GPIOA_CFGHR_MODE12
#define CH32V103_GPIOB_CFGHR_MODE12_MASK  CH32V103_GPIOA_CFGHR_MODE12_MASK
#define CH32V103_GPIOB_CFGHR_CNF12        CH32V103_GPIOA_CFGHR_CNF12
#define CH32V103_GPIOB_CFGHR_CNF12_MASK   CH32V103_GPIOA_CFGHR_CNF12_MASK
#define CH32V103_GPIOB_CFGHR_MODE13       CH32V103_GPIOA_CFGHR_MODE13
#define CH32V103_GPIOB_CFGHR_MODE13_MASK  CH32V103_GPIOA_CFGHR_MODE13_MASK
#define CH32V103_GPIOB_CFGHR_CNF13        CH32V103_GPIOA_CFGHR_CNF13
#define CH32V103_GPIOB_CFGHR_CNF13_MASK   CH32V103_GPIOA_CFGHR_CNF13_MASK
#define CH32V103_GPIOB_CFGHR_MODE14       CH32V103_GPIOA_CFGHR_MODE14
#define CH32V103_GPIOB_CFGHR_MODE14_MASK  CH32V103_GPIOA_CFGHR_MODE14_MASK
#define CH32V103_GPIOB_CFGHR_CNF14        CH32V103_GPIOA_CFGHR_CNF14
#define CH32V103_GPIOB_CFGHR_CNF14_MASK   CH32V103_GPIOA_CFGHR_CNF14_MASK
#define CH32V103_GPIOB_CFGHR_MODE15       CH32V103_GPIOA_CFGHR_MODE15
#define CH32V103_GPIOB_CFGHR_MODE15_MASK  CH32V103_GPIOA_CFGHR_MODE15_MASK
#define CH32V103_GPIOB_CFGHR_CNF15        CH32V103_GPIOA_CFGHR_CNF15
#define CH32V103_GPIOB_CFGHR_CNF15_MASK   CH32V103_GPIOA_CFGHR_CNF15_MASK
#define CH32V103_GPIOB_INDR_OFFSET        CH32V103_GPIOA_INDR_OFFSET
#define CH32V103_GPIOB_INDR               CH32V103_GPIOA_INDR
#define CH32V103_GPIOB_INDR_IDR0          CH32V103_GPIOA_INDR_IDR0
#define CH32V103_GPIOB_INDR_IDR1          CH32V103_GPIOA_INDR_IDR1
#define CH32V103_GPIOB_INDR_IDR2          CH32V103_GPIOA_INDR_IDR2
#define CH32V103_GPIOB_INDR_IDR3          CH32V103_GPIOA_INDR_IDR3
#define CH32V103_GPIOB_INDR_IDR4          CH32V103_GPIOA_INDR_IDR4
#define CH32V103_GPIOB_INDR_IDR5          CH32V103_GPIOA_INDR_IDR5
#define CH32V103_GPIOB_INDR_IDR6          CH32V103_GPIOA_INDR_IDR6
#define CH32V103_GPIOB_INDR_IDR7          CH32V103_GPIOA_INDR_IDR7
#define CH32V103_GPIOB_INDR_IDR8          CH32V103_GPIOA_INDR_IDR8
#define CH32V103_GPIOB_INDR_IDR9          CH32V103_GPIOA_INDR_IDR9
#define CH32V103_GPIOB_INDR_IDR10         CH32V103_GPIOA_INDR_IDR10
#define CH32V103_GPIOB_INDR_IDR11         CH32V103_GPIOA_INDR_IDR11
#define CH32V103_GPIOB_INDR_IDR12         CH32V103_GPIOA_INDR_IDR12
#define CH32V103_GPIOB_INDR_IDR13         CH32V103_GPIOA_INDR_IDR13
#define CH32V103_GPIOB_INDR_IDR14         CH32V103_GPIOA_INDR_IDR14
#define CH32V103_GPIOB_INDR_IDR15         CH32V103_GPIOA_INDR_IDR15
#define CH32V103_GPIOB_OUTDR_OFFSET       CH32V103_GPIOA_OUTDR_OFFSET
#define CH32V103_GPIOB_OUTDR              CH32V103_GPIOA_OUTDR
#define CH32V103_GPIOB_OUTDR_ODR0         CH32V103_GPIOA_OUTDR_ODR0
#define CH32V103_GPIOB_OUTDR_ODR1         CH32V103_GPIOA_OUTDR_ODR1
#define CH32V103_GPIOB_OUTDR_ODR2         CH32V103_GPIOA_OUTDR_ODR2
#define CH32V103_GPIOB_OUTDR_ODR3         CH32V103_GPIOA_OUTDR_ODR3
#define CH32V103_GPIOB_OUTDR_ODR4         CH32V103_GPIOA_OUTDR_ODR4
#define CH32V103_GPIOB_OUTDR_ODR5         CH32V103_GPIOA_OUTDR_ODR5
#define CH32V103_GPIOB_OUTDR_ODR6         CH32V103_GPIOA_OUTDR_ODR6
#define CH32V103_GPIOB_OUTDR_ODR7         CH32V103_GPIOA_OUTDR_ODR7
#define CH32V103_GPIOB_OUTDR_ODR8         CH32V103_GPIOA_OUTDR_ODR8
#define CH32V103_GPIOB_OUTDR_ODR9         CH32V103_GPIOA_OUTDR_ODR9
#define CH32V103_GPIOB_OUTDR_ODR10        CH32V103_GPIOA_OUTDR_ODR10
#define CH32V103_GPIOB_OUTDR_ODR11        CH32V103_GPIOA_OUTDR_ODR11
#define CH32V103_GPIOB_OUTDR_ODR12        CH32V103_GPIOA_OUTDR_ODR12
#define CH32V103_GPIOB_OUTDR_ODR13        CH32V103_GPIOA_OUTDR_ODR13
#define CH32V103_GPIOB_OUTDR_ODR14        CH32V103_GPIOA_OUTDR_ODR14
#define CH32V103_GPIOB_OUTDR_ODR15        CH32V103_GPIOA_OUTDR_ODR15
#define CH32V103_GPIOB_BSHR_OFFSET        CH32V103_GPIOA_BSHR_OFFSET
#define CH32V103_GPIOB_BSHR               CH32V103_GPIOA_BSHR
#define CH32V103_GPIOB_BSHR_BS0           CH32V103_GPIOA_BSHR_BS0
#define CH32V103_GPIOB_BSHR_BS1           CH32V103_GPIOA_BSHR_BS1
#define CH32V103_GPIOB_BSHR_BS2           CH32V103_GPIOA_BSHR_BS2
#define CH32V103_GPIOB_BSHR_BS3           CH32V103_GPIOA_BSHR_BS3
#define CH32V103_GPIOB_BSHR_BS4           CH32V103_GPIOA_BSHR_BS4
#define CH32V103_GPIOB_BSHR_BS5           CH32V103_GPIOA_BSHR_BS5
#define CH32V103_GPIOB_BSHR_BS6           CH32V103_GPIOA_BSHR_BS6
#define CH32V103_GPIOB_BSHR_BS7           CH32V103_GPIOA_BSHR_BS7
#define CH32V103_GPIOB_BSHR_BS8           CH32V103_GPIOA_BSHR_BS8
#define CH32V103_GPIOB_BSHR_BS9           CH32V103_GPIOA_BSHR_BS9
#define CH32V103_GPIOB_BSHR_BS10          CH32V103_GPIOA_BSHR_BS10
#define CH32V103_GPIOB_BSHR_BS11          CH32V103_GPIOA_BSHR_BS11
#define CH32V103_GPIOB_BSHR_BS12          CH32V103_GPIOA_BSHR_BS12
#define CH32V103_GPIOB_BSHR_BS13          CH32V103_GPIOA_BSHR_BS13
#define CH32V103_GPIOB_BSHR_BS14          CH32V103_GPIOA_BSHR_BS14
#define CH32V103_GPIOB_BSHR_BS15          CH32V103_GPIOA_BSHR_BS15
#define CH32V103_GPIOB_BSHR_BR0           CH32V103_GPIOA_BSHR_BR0
#define CH32V103_GPIOB_BSHR_BR1           CH32V103_GPIOA_BSHR_BR1
#define CH32V103_GPIOB_BSHR_BR2           CH32V103_GPIOA_BSHR_BR2
#define CH32V103_GPIOB_BSHR_BR3           CH32V103_GPIOA_BSHR_BR3
#define CH32V103_GPIOB_BSHR_BR4           CH32V103_GPIOA_BSHR_BR4
#define CH32V103_GPIOB_BSHR_BR5           CH32V103_GPIOA_BSHR_BR5
#define CH32V103_GPIOB_BSHR_BR6           CH32V103_GPIOA_BSHR_BR6
#define CH32V103_GPIOB_BSHR_BR7           CH32V103_GPIOA_BSHR_BR7
#define CH32V103_GPIOB_BSHR_BR8           CH32V103_GPIOA_BSHR_BR8
#define CH32V103_GPIOB_BSHR_BR9           CH32V103_GPIOA_BSHR_BR9
#define CH32V103_GPIOB_BSHR_BR10          CH32V103_GPIOA_BSHR_BR10
#define CH32V103_GPIOB_BSHR_BR11          CH32V103_GPIOA_BSHR_BR11
#define CH32V103_GPIOB_BSHR_BR12          CH32V103_GPIOA_BSHR_BR12
#define CH32V103_GPIOB_BSHR_BR13          CH32V103_GPIOA_BSHR_BR13
#define CH32V103_GPIOB_BSHR_BR14          CH32V103_GPIOA_BSHR_BR14
#define CH32V103_GPIOB_BSHR_BR15          CH32V103_GPIOA_BSHR_BR15
#define CH32V103_GPIOB_BCR_OFFSET         CH32V103_GPIOA_BCR_OFFSET
#define CH32V103_GPIOB_BCR                CH32V103_GPIOA_BCR
#define CH32V103_GPIOB_BCR_BR0            CH32V103_GPIOA_BCR_BR0
#define CH32V103_GPIOB_BCR_BR1            CH32V103_GPIOA_BCR_BR1
#define CH32V103_GPIOB_BCR_BR2            CH32V103_GPIOA_BCR_BR2
#define CH32V103_GPIOB_BCR_BR3            CH32V103_GPIOA_BCR_BR3
#define CH32V103_GPIOB_BCR_BR4            CH32V103_GPIOA_BCR_BR4
#define CH32V103_GPIOB_BCR_BR5            CH32V103_GPIOA_BCR_BR5
#define CH32V103_GPIOB_BCR_BR6            CH32V103_GPIOA_BCR_BR6
#define CH32V103_GPIOB_BCR_BR7            CH32V103_GPIOA_BCR_BR7
#define CH32V103_GPIOB_BCR_BR8            CH32V103_GPIOA_BCR_BR8
#define CH32V103_GPIOB_BCR_BR9            CH32V103_GPIOA_BCR_BR9
#define CH32V103_GPIOB_BCR_BR10           CH32V103_GPIOA_BCR_BR10
#define CH32V103_GPIOB_BCR_BR11           CH32V103_GPIOA_BCR_BR11
#define CH32V103_GPIOB_BCR_BR12           CH32V103_GPIOA_BCR_BR12
#define CH32V103_GPIOB_BCR_BR13           CH32V103_GPIOA_BCR_BR13
#define CH32V103_GPIOB_BCR_BR14           CH32V103_GPIOA_BCR_BR14
#define CH32V103_GPIOB_BCR_BR15           CH32V103_GPIOA_BCR_BR15
#define CH32V103_GPIOB_LCKR_OFFSET        CH32V103_GPIOA_LCKR_OFFSET
#define CH32V103_GPIOB_LCKR               CH32V103_GPIOA_LCKR
#define CH32V103_GPIOB_LCKR_LCK0          CH32V103_GPIOA_LCKR_LCK0
#define CH32V103_GPIOB_LCKR_LCK1          CH32V103_GPIOA_LCKR_LCK1
#define CH32V103_GPIOB_LCKR_LCK2          CH32V103_GPIOA_LCKR_LCK2
#define CH32V103_GPIOB_LCKR_LCK3          CH32V103_GPIOA_LCKR_LCK3
#define CH32V103_GPIOB_LCKR_LCK4          CH32V103_GPIOA_LCKR_LCK4
#define CH32V103_GPIOB_LCKR_LCK5          CH32V103_GPIOA_LCKR_LCK5
#define CH32V103_GPIOB_LCKR_LCK6          CH32V103_GPIOA_LCKR_LCK6
#define CH32V103_GPIOB_LCKR_LCK7          CH32V103_GPIOA_LCKR_LCK7
#define CH32V103_GPIOB_LCKR_LCK8          CH32V103_GPIOA_LCKR_LCK8
#define CH32V103_GPIOB_LCKR_LCK9          CH32V103_GPIOA_LCKR_LCK9
#define CH32V103_GPIOB_LCKR_LCK10         CH32V103_GPIOA_LCKR_LCK10
#define CH32V103_GPIOB_LCKR_LCK11         CH32V103_GPIOA_LCKR_LCK11
#define CH32V103_GPIOB_LCKR_LCK12         CH32V103_GPIOA_LCKR_LCK12
#define CH32V103_GPIOB_LCKR_LCK13         CH32V103_GPIOA_LCKR_LCK13
#define CH32V103_GPIOB_LCKR_LCK14         CH32V103_GPIOA_LCKR_LCK14
#define CH32V103_GPIOB_LCKR_LCK15         CH32V103_GPIOA_LCKR_LCK15
#define CH32V103_GPIOB_LCKR_LCKK          CH32V103_GPIOA_LCKR_LCKK

/* No registers defined for peripheral GPIOC. Using those of GPIOA. */
#define CH32V103_GPIOC_BASE               0x40011000
#define CH32V103_GPIOC_CFGLR_OFFSET       CH32V103_GPIOA_CFGLR_OFFSET
#define CH32V103_GPIOC_CFGLR              CH32V103_GPIOA_CFGLR
#define CH32V103_GPIOC_CFGLR_MODE0        CH32V103_GPIOA_CFGLR_MODE0
#define CH32V103_GPIOC_CFGLR_MODE0_MASK   CH32V103_GPIOA_CFGLR_MODE0_MASK
#define CH32V103_GPIOC_CFGLR_CNF0         CH32V103_GPIOA_CFGLR_CNF0
#define CH32V103_GPIOC_CFGLR_CNF0_MASK    CH32V103_GPIOA_CFGLR_CNF0_MASK
#define CH32V103_GPIOC_CFGLR_MODE1        CH32V103_GPIOA_CFGLR_MODE1
#define CH32V103_GPIOC_CFGLR_MODE1_MASK   CH32V103_GPIOA_CFGLR_MODE1_MASK
#define CH32V103_GPIOC_CFGLR_CNF1         CH32V103_GPIOA_CFGLR_CNF1
#define CH32V103_GPIOC_CFGLR_CNF1_MASK    CH32V103_GPIOA_CFGLR_CNF1_MASK
#define CH32V103_GPIOC_CFGLR_MODE2        CH32V103_GPIOA_CFGLR_MODE2
#define CH32V103_GPIOC_CFGLR_MODE2_MASK   CH32V103_GPIOA_CFGLR_MODE2_MASK
#define CH32V103_GPIOC_CFGLR_CNF2         CH32V103_GPIOA_CFGLR_CNF2
#define CH32V103_GPIOC_CFGLR_CNF2_MASK    CH32V103_GPIOA_CFGLR_CNF2_MASK
#define CH32V103_GPIOC_CFGLR_MODE3        CH32V103_GPIOA_CFGLR_MODE3
#define CH32V103_GPIOC_CFGLR_MODE3_MASK   CH32V103_GPIOA_CFGLR_MODE3_MASK
#define CH32V103_GPIOC_CFGLR_CNF3         CH32V103_GPIOA_CFGLR_CNF3
#define CH32V103_GPIOC_CFGLR_CNF3_MASK    CH32V103_GPIOA_CFGLR_CNF3_MASK
#define CH32V103_GPIOC_CFGLR_MODE4        CH32V103_GPIOA_CFGLR_MODE4
#define CH32V103_GPIOC_CFGLR_MODE4_MASK   CH32V103_GPIOA_CFGLR_MODE4_MASK
#define CH32V103_GPIOC_CFGLR_CNF4         CH32V103_GPIOA_CFGLR_CNF4
#define CH32V103_GPIOC_CFGLR_CNF4_MASK    CH32V103_GPIOA_CFGLR_CNF4_MASK
#define CH32V103_GPIOC_CFGLR_MODE5        CH32V103_GPIOA_CFGLR_MODE5
#define CH32V103_GPIOC_CFGLR_MODE5_MASK   CH32V103_GPIOA_CFGLR_MODE5_MASK
#define CH32V103_GPIOC_CFGLR_CNF5         CH32V103_GPIOA_CFGLR_CNF5
#define CH32V103_GPIOC_CFGLR_CNF5_MASK    CH32V103_GPIOA_CFGLR_CNF5_MASK
#define CH32V103_GPIOC_CFGLR_MODE6        CH32V103_GPIOA_CFGLR_MODE6
#define CH32V103_GPIOC_CFGLR_MODE6_MASK   CH32V103_GPIOA_CFGLR_MODE6_MASK
#define CH32V103_GPIOC_CFGLR_CNF6         CH32V103_GPIOA_CFGLR_CNF6
#define CH32V103_GPIOC_CFGLR_CNF6_MASK    CH32V103_GPIOA_CFGLR_CNF6_MASK
#define CH32V103_GPIOC_CFGLR_MODE7        CH32V103_GPIOA_CFGLR_MODE7
#define CH32V103_GPIOC_CFGLR_MODE7_MASK   CH32V103_GPIOA_CFGLR_MODE7_MASK
#define CH32V103_GPIOC_CFGLR_CNF7         CH32V103_GPIOA_CFGLR_CNF7
#define CH32V103_GPIOC_CFGLR_CNF7_MASK    CH32V103_GPIOA_CFGLR_CNF7_MASK
#define CH32V103_GPIOC_CFGHR_OFFSET       CH32V103_GPIOA_CFGHR_OFFSET
#define CH32V103_GPIOC_CFGHR              CH32V103_GPIOA_CFGHR
#define CH32V103_GPIOC_CFGHR_MODE8        CH32V103_GPIOA_CFGHR_MODE8
#define CH32V103_GPIOC_CFGHR_MODE8_MASK   CH32V103_GPIOA_CFGHR_MODE8_MASK
#define CH32V103_GPIOC_CFGHR_CNF8         CH32V103_GPIOA_CFGHR_CNF8
#define CH32V103_GPIOC_CFGHR_CNF8_MASK    CH32V103_GPIOA_CFGHR_CNF8_MASK
#define CH32V103_GPIOC_CFGHR_MODE9        CH32V103_GPIOA_CFGHR_MODE9
#define CH32V103_GPIOC_CFGHR_MODE9_MASK   CH32V103_GPIOA_CFGHR_MODE9_MASK
#define CH32V103_GPIOC_CFGHR_CNF9         CH32V103_GPIOA_CFGHR_CNF9
#define CH32V103_GPIOC_CFGHR_CNF9_MASK    CH32V103_GPIOA_CFGHR_CNF9_MASK
#define CH32V103_GPIOC_CFGHR_MODE10       CH32V103_GPIOA_CFGHR_MODE10
#define CH32V103_GPIOC_CFGHR_MODE10_MASK  CH32V103_GPIOA_CFGHR_MODE10_MASK
#define CH32V103_GPIOC_CFGHR_CNF10        CH32V103_GPIOA_CFGHR_CNF10
#define CH32V103_GPIOC_CFGHR_CNF10_MASK   CH32V103_GPIOA_CFGHR_CNF10_MASK
#define CH32V103_GPIOC_CFGHR_MODE11       CH32V103_GPIOA_CFGHR_MODE11
#define CH32V103_GPIOC_CFGHR_MODE11_MASK  CH32V103_GPIOA_CFGHR_MODE11_MASK
#define CH32V103_GPIOC_CFGHR_CNF11        CH32V103_GPIOA_CFGHR_CNF11
#define CH32V103_GPIOC_CFGHR_CNF11_MASK   CH32V103_GPIOA_CFGHR_CNF11_MASK
#define CH32V103_GPIOC_CFGHR_MODE12       CH32V103_GPIOA_CFGHR_MODE12
#define CH32V103_GPIOC_CFGHR_MODE12_MASK  CH32V103_GPIOA_CFGHR_MODE12_MASK
#define CH32V103_GPIOC_CFGHR_CNF12        CH32V103_GPIOA_CFGHR_CNF12
#define CH32V103_GPIOC_CFGHR_CNF12_MASK   CH32V103_GPIOA_CFGHR_CNF12_MASK
#define CH32V103_GPIOC_CFGHR_MODE13       CH32V103_GPIOA_CFGHR_MODE13
#define CH32V103_GPIOC_CFGHR_MODE13_MASK  CH32V103_GPIOA_CFGHR_MODE13_MASK
#define CH32V103_GPIOC_CFGHR_CNF13        CH32V103_GPIOA_CFGHR_CNF13
#define CH32V103_GPIOC_CFGHR_CNF13_MASK   CH32V103_GPIOA_CFGHR_CNF13_MASK
#define CH32V103_GPIOC_CFGHR_MODE14       CH32V103_GPIOA_CFGHR_MODE14
#define CH32V103_GPIOC_CFGHR_MODE14_MASK  CH32V103_GPIOA_CFGHR_MODE14_MASK
#define CH32V103_GPIOC_CFGHR_CNF14        CH32V103_GPIOA_CFGHR_CNF14
#define CH32V103_GPIOC_CFGHR_CNF14_MASK   CH32V103_GPIOA_CFGHR_CNF14_MASK
#define CH32V103_GPIOC_CFGHR_MODE15       CH32V103_GPIOA_CFGHR_MODE15
#define CH32V103_GPIOC_CFGHR_MODE15_MASK  CH32V103_GPIOA_CFGHR_MODE15_MASK
#define CH32V103_GPIOC_CFGHR_CNF15        CH32V103_GPIOA_CFGHR_CNF15
#define CH32V103_GPIOC_CFGHR_CNF15_MASK   CH32V103_GPIOA_CFGHR_CNF15_MASK
#define CH32V103_GPIOC_INDR_OFFSET        CH32V103_GPIOA_INDR_OFFSET
#define CH32V103_GPIOC_INDR               CH32V103_GPIOA_INDR
#define CH32V103_GPIOC_INDR_IDR0          CH32V103_GPIOA_INDR_IDR0
#define CH32V103_GPIOC_INDR_IDR1          CH32V103_GPIOA_INDR_IDR1
#define CH32V103_GPIOC_INDR_IDR2          CH32V103_GPIOA_INDR_IDR2
#define CH32V103_GPIOC_INDR_IDR3          CH32V103_GPIOA_INDR_IDR3
#define CH32V103_GPIOC_INDR_IDR4          CH32V103_GPIOA_INDR_IDR4
#define CH32V103_GPIOC_INDR_IDR5          CH32V103_GPIOA_INDR_IDR5
#define CH32V103_GPIOC_INDR_IDR6          CH32V103_GPIOA_INDR_IDR6
#define CH32V103_GPIOC_INDR_IDR7          CH32V103_GPIOA_INDR_IDR7
#define CH32V103_GPIOC_INDR_IDR8          CH32V103_GPIOA_INDR_IDR8
#define CH32V103_GPIOC_INDR_IDR9          CH32V103_GPIOA_INDR_IDR9
#define CH32V103_GPIOC_INDR_IDR10         CH32V103_GPIOA_INDR_IDR10
#define CH32V103_GPIOC_INDR_IDR11         CH32V103_GPIOA_INDR_IDR11
#define CH32V103_GPIOC_INDR_IDR12         CH32V103_GPIOA_INDR_IDR12
#define CH32V103_GPIOC_INDR_IDR13         CH32V103_GPIOA_INDR_IDR13
#define CH32V103_GPIOC_INDR_IDR14         CH32V103_GPIOA_INDR_IDR14
#define CH32V103_GPIOC_INDR_IDR15         CH32V103_GPIOA_INDR_IDR15
#define CH32V103_GPIOC_OUTDR_OFFSET       CH32V103_GPIOA_OUTDR_OFFSET
#define CH32V103_GPIOC_OUTDR              CH32V103_GPIOA_OUTDR
#define CH32V103_GPIOC_OUTDR_ODR0         CH32V103_GPIOA_OUTDR_ODR0
#define CH32V103_GPIOC_OUTDR_ODR1         CH32V103_GPIOA_OUTDR_ODR1
#define CH32V103_GPIOC_OUTDR_ODR2         CH32V103_GPIOA_OUTDR_ODR2
#define CH32V103_GPIOC_OUTDR_ODR3         CH32V103_GPIOA_OUTDR_ODR3
#define CH32V103_GPIOC_OUTDR_ODR4         CH32V103_GPIOA_OUTDR_ODR4
#define CH32V103_GPIOC_OUTDR_ODR5         CH32V103_GPIOA_OUTDR_ODR5
#define CH32V103_GPIOC_OUTDR_ODR6         CH32V103_GPIOA_OUTDR_ODR6
#define CH32V103_GPIOC_OUTDR_ODR7         CH32V103_GPIOA_OUTDR_ODR7
#define CH32V103_GPIOC_OUTDR_ODR8         CH32V103_GPIOA_OUTDR_ODR8
#define CH32V103_GPIOC_OUTDR_ODR9         CH32V103_GPIOA_OUTDR_ODR9
#define CH32V103_GPIOC_OUTDR_ODR10        CH32V103_GPIOA_OUTDR_ODR10
#define CH32V103_GPIOC_OUTDR_ODR11        CH32V103_GPIOA_OUTDR_ODR11
#define CH32V103_GPIOC_OUTDR_ODR12        CH32V103_GPIOA_OUTDR_ODR12
#define CH32V103_GPIOC_OUTDR_ODR13        CH32V103_GPIOA_OUTDR_ODR13
#define CH32V103_GPIOC_OUTDR_ODR14        CH32V103_GPIOA_OUTDR_ODR14
#define CH32V103_GPIOC_OUTDR_ODR15        CH32V103_GPIOA_OUTDR_ODR15
#define CH32V103_GPIOC_BSHR_OFFSET        CH32V103_GPIOA_BSHR_OFFSET
#define CH32V103_GPIOC_BSHR               CH32V103_GPIOA_BSHR
#define CH32V103_GPIOC_BSHR_BS0           CH32V103_GPIOA_BSHR_BS0
#define CH32V103_GPIOC_BSHR_BS1           CH32V103_GPIOA_BSHR_BS1
#define CH32V103_GPIOC_BSHR_BS2           CH32V103_GPIOA_BSHR_BS2
#define CH32V103_GPIOC_BSHR_BS3           CH32V103_GPIOA_BSHR_BS3
#define CH32V103_GPIOC_BSHR_BS4           CH32V103_GPIOA_BSHR_BS4
#define CH32V103_GPIOC_BSHR_BS5           CH32V103_GPIOA_BSHR_BS5
#define CH32V103_GPIOC_BSHR_BS6           CH32V103_GPIOA_BSHR_BS6
#define CH32V103_GPIOC_BSHR_BS7           CH32V103_GPIOA_BSHR_BS7
#define CH32V103_GPIOC_BSHR_BS8           CH32V103_GPIOA_BSHR_BS8
#define CH32V103_GPIOC_BSHR_BS9           CH32V103_GPIOA_BSHR_BS9
#define CH32V103_GPIOC_BSHR_BS10          CH32V103_GPIOA_BSHR_BS10
#define CH32V103_GPIOC_BSHR_BS11          CH32V103_GPIOA_BSHR_BS11
#define CH32V103_GPIOC_BSHR_BS12          CH32V103_GPIOA_BSHR_BS12
#define CH32V103_GPIOC_BSHR_BS13          CH32V103_GPIOA_BSHR_BS13
#define CH32V103_GPIOC_BSHR_BS14          CH32V103_GPIOA_BSHR_BS14
#define CH32V103_GPIOC_BSHR_BS15          CH32V103_GPIOA_BSHR_BS15
#define CH32V103_GPIOC_BSHR_BR0           CH32V103_GPIOA_BSHR_BR0
#define CH32V103_GPIOC_BSHR_BR1           CH32V103_GPIOA_BSHR_BR1
#define CH32V103_GPIOC_BSHR_BR2           CH32V103_GPIOA_BSHR_BR2
#define CH32V103_GPIOC_BSHR_BR3           CH32V103_GPIOA_BSHR_BR3
#define CH32V103_GPIOC_BSHR_BR4           CH32V103_GPIOA_BSHR_BR4
#define CH32V103_GPIOC_BSHR_BR5           CH32V103_GPIOA_BSHR_BR5
#define CH32V103_GPIOC_BSHR_BR6           CH32V103_GPIOA_BSHR_BR6
#define CH32V103_GPIOC_BSHR_BR7           CH32V103_GPIOA_BSHR_BR7
#define CH32V103_GPIOC_BSHR_BR8           CH32V103_GPIOA_BSHR_BR8
#define CH32V103_GPIOC_BSHR_BR9           CH32V103_GPIOA_BSHR_BR9
#define CH32V103_GPIOC_BSHR_BR10          CH32V103_GPIOA_BSHR_BR10
#define CH32V103_GPIOC_BSHR_BR11          CH32V103_GPIOA_BSHR_BR11
#define CH32V103_GPIOC_BSHR_BR12          CH32V103_GPIOA_BSHR_BR12
#define CH32V103_GPIOC_BSHR_BR13          CH32V103_GPIOA_BSHR_BR13
#define CH32V103_GPIOC_BSHR_BR14          CH32V103_GPIOA_BSHR_BR14
#define CH32V103_GPIOC_BSHR_BR15          CH32V103_GPIOA_BSHR_BR15
#define CH32V103_GPIOC_BCR_OFFSET         CH32V103_GPIOA_BCR_OFFSET
#define CH32V103_GPIOC_BCR                CH32V103_GPIOA_BCR
#define CH32V103_GPIOC_BCR_BR0            CH32V103_GPIOA_BCR_BR0
#define CH32V103_GPIOC_BCR_BR1            CH32V103_GPIOA_BCR_BR1
#define CH32V103_GPIOC_BCR_BR2            CH32V103_GPIOA_BCR_BR2
#define CH32V103_GPIOC_BCR_BR3            CH32V103_GPIOA_BCR_BR3
#define CH32V103_GPIOC_BCR_BR4            CH32V103_GPIOA_BCR_BR4
#define CH32V103_GPIOC_BCR_BR5            CH32V103_GPIOA_BCR_BR5
#define CH32V103_GPIOC_BCR_BR6            CH32V103_GPIOA_BCR_BR6
#define CH32V103_GPIOC_BCR_BR7            CH32V103_GPIOA_BCR_BR7
#define CH32V103_GPIOC_BCR_BR8            CH32V103_GPIOA_BCR_BR8
#define CH32V103_GPIOC_BCR_BR9            CH32V103_GPIOA_BCR_BR9
#define CH32V103_GPIOC_BCR_BR10           CH32V103_GPIOA_BCR_BR10
#define CH32V103_GPIOC_BCR_BR11           CH32V103_GPIOA_BCR_BR11
#define CH32V103_GPIOC_BCR_BR12           CH32V103_GPIOA_BCR_BR12
#define CH32V103_GPIOC_BCR_BR13           CH32V103_GPIOA_BCR_BR13
#define CH32V103_GPIOC_BCR_BR14           CH32V103_GPIOA_BCR_BR14
#define CH32V103_GPIOC_BCR_BR15           CH32V103_GPIOA_BCR_BR15
#define CH32V103_GPIOC_LCKR_OFFSET        CH32V103_GPIOA_LCKR_OFFSET
#define CH32V103_GPIOC_LCKR               CH32V103_GPIOA_LCKR
#define CH32V103_GPIOC_LCKR_LCK0          CH32V103_GPIOA_LCKR_LCK0
#define CH32V103_GPIOC_LCKR_LCK1          CH32V103_GPIOA_LCKR_LCK1
#define CH32V103_GPIOC_LCKR_LCK2          CH32V103_GPIOA_LCKR_LCK2
#define CH32V103_GPIOC_LCKR_LCK3          CH32V103_GPIOA_LCKR_LCK3
#define CH32V103_GPIOC_LCKR_LCK4          CH32V103_GPIOA_LCKR_LCK4
#define CH32V103_GPIOC_LCKR_LCK5          CH32V103_GPIOA_LCKR_LCK5
#define CH32V103_GPIOC_LCKR_LCK6          CH32V103_GPIOA_LCKR_LCK6
#define CH32V103_GPIOC_LCKR_LCK7          CH32V103_GPIOA_LCKR_LCK7
#define CH32V103_GPIOC_LCKR_LCK8          CH32V103_GPIOA_LCKR_LCK8
#define CH32V103_GPIOC_LCKR_LCK9          CH32V103_GPIOA_LCKR_LCK9
#define CH32V103_GPIOC_LCKR_LCK10         CH32V103_GPIOA_LCKR_LCK10
#define CH32V103_GPIOC_LCKR_LCK11         CH32V103_GPIOA_LCKR_LCK11
#define CH32V103_GPIOC_LCKR_LCK12         CH32V103_GPIOA_LCKR_LCK12
#define CH32V103_GPIOC_LCKR_LCK13         CH32V103_GPIOA_LCKR_LCK13
#define CH32V103_GPIOC_LCKR_LCK14         CH32V103_GPIOA_LCKR_LCK14
#define CH32V103_GPIOC_LCKR_LCK15         CH32V103_GPIOA_LCKR_LCK15
#define CH32V103_GPIOC_LCKR_LCKK          CH32V103_GPIOA_LCKR_LCKK

/* No registers defined for peripheral GPIOD. Using those of GPIOA. */
#define CH32V103_GPIOD_BASE               0x40011400
#define CH32V103_GPIOD_CFGLR_OFFSET       CH32V103_GPIOA_CFGLR_OFFSET
#define CH32V103_GPIOD_CFGLR              CH32V103_GPIOA_CFGLR
#define CH32V103_GPIOD_CFGLR_MODE0        CH32V103_GPIOA_CFGLR_MODE0
#define CH32V103_GPIOD_CFGLR_MODE0_MASK   CH32V103_GPIOA_CFGLR_MODE0_MASK
#define CH32V103_GPIOD_CFGLR_CNF0         CH32V103_GPIOA_CFGLR_CNF0
#define CH32V103_GPIOD_CFGLR_CNF0_MASK    CH32V103_GPIOA_CFGLR_CNF0_MASK
#define CH32V103_GPIOD_CFGLR_MODE1        CH32V103_GPIOA_CFGLR_MODE1
#define CH32V103_GPIOD_CFGLR_MODE1_MASK   CH32V103_GPIOA_CFGLR_MODE1_MASK
#define CH32V103_GPIOD_CFGLR_CNF1         CH32V103_GPIOA_CFGLR_CNF1
#define CH32V103_GPIOD_CFGLR_CNF1_MASK    CH32V103_GPIOA_CFGLR_CNF1_MASK
#define CH32V103_GPIOD_CFGLR_MODE2        CH32V103_GPIOA_CFGLR_MODE2
#define CH32V103_GPIOD_CFGLR_MODE2_MASK   CH32V103_GPIOA_CFGLR_MODE2_MASK
#define CH32V103_GPIOD_CFGLR_CNF2         CH32V103_GPIOA_CFGLR_CNF2
#define CH32V103_GPIOD_CFGLR_CNF2_MASK    CH32V103_GPIOA_CFGLR_CNF2_MASK
#define CH32V103_GPIOD_CFGLR_MODE3        CH32V103_GPIOA_CFGLR_MODE3
#define CH32V103_GPIOD_CFGLR_MODE3_MASK   CH32V103_GPIOA_CFGLR_MODE3_MASK
#define CH32V103_GPIOD_CFGLR_CNF3         CH32V103_GPIOA_CFGLR_CNF3
#define CH32V103_GPIOD_CFGLR_CNF3_MASK    CH32V103_GPIOA_CFGLR_CNF3_MASK
#define CH32V103_GPIOD_CFGLR_MODE4        CH32V103_GPIOA_CFGLR_MODE4
#define CH32V103_GPIOD_CFGLR_MODE4_MASK   CH32V103_GPIOA_CFGLR_MODE4_MASK
#define CH32V103_GPIOD_CFGLR_CNF4         CH32V103_GPIOA_CFGLR_CNF4
#define CH32V103_GPIOD_CFGLR_CNF4_MASK    CH32V103_GPIOA_CFGLR_CNF4_MASK
#define CH32V103_GPIOD_CFGLR_MODE5        CH32V103_GPIOA_CFGLR_MODE5
#define CH32V103_GPIOD_CFGLR_MODE5_MASK   CH32V103_GPIOA_CFGLR_MODE5_MASK
#define CH32V103_GPIOD_CFGLR_CNF5         CH32V103_GPIOA_CFGLR_CNF5
#define CH32V103_GPIOD_CFGLR_CNF5_MASK    CH32V103_GPIOA_CFGLR_CNF5_MASK
#define CH32V103_GPIOD_CFGLR_MODE6        CH32V103_GPIOA_CFGLR_MODE6
#define CH32V103_GPIOD_CFGLR_MODE6_MASK   CH32V103_GPIOA_CFGLR_MODE6_MASK
#define CH32V103_GPIOD_CFGLR_CNF6         CH32V103_GPIOA_CFGLR_CNF6
#define CH32V103_GPIOD_CFGLR_CNF6_MASK    CH32V103_GPIOA_CFGLR_CNF6_MASK
#define CH32V103_GPIOD_CFGLR_MODE7        CH32V103_GPIOA_CFGLR_MODE7
#define CH32V103_GPIOD_CFGLR_MODE7_MASK   CH32V103_GPIOA_CFGLR_MODE7_MASK
#define CH32V103_GPIOD_CFGLR_CNF7         CH32V103_GPIOA_CFGLR_CNF7
#define CH32V103_GPIOD_CFGLR_CNF7_MASK    CH32V103_GPIOA_CFGLR_CNF7_MASK
#define CH32V103_GPIOD_CFGHR_OFFSET       CH32V103_GPIOA_CFGHR_OFFSET
#define CH32V103_GPIOD_CFGHR              CH32V103_GPIOA_CFGHR
#define CH32V103_GPIOD_CFGHR_MODE8        CH32V103_GPIOA_CFGHR_MODE8
#define CH32V103_GPIOD_CFGHR_MODE8_MASK   CH32V103_GPIOA_CFGHR_MODE8_MASK
#define CH32V103_GPIOD_CFGHR_CNF8         CH32V103_GPIOA_CFGHR_CNF8
#define CH32V103_GPIOD_CFGHR_CNF8_MASK    CH32V103_GPIOA_CFGHR_CNF8_MASK
#define CH32V103_GPIOD_CFGHR_MODE9        CH32V103_GPIOA_CFGHR_MODE9
#define CH32V103_GPIOD_CFGHR_MODE9_MASK   CH32V103_GPIOA_CFGHR_MODE9_MASK
#define CH32V103_GPIOD_CFGHR_CNF9         CH32V103_GPIOA_CFGHR_CNF9
#define CH32V103_GPIOD_CFGHR_CNF9_MASK    CH32V103_GPIOA_CFGHR_CNF9_MASK
#define CH32V103_GPIOD_CFGHR_MODE10       CH32V103_GPIOA_CFGHR_MODE10
#define CH32V103_GPIOD_CFGHR_MODE10_MASK  CH32V103_GPIOA_CFGHR_MODE10_MASK
#define CH32V103_GPIOD_CFGHR_CNF10        CH32V103_GPIOA_CFGHR_CNF10
#define CH32V103_GPIOD_CFGHR_CNF10_MASK   CH32V103_GPIOA_CFGHR_CNF10_MASK
#define CH32V103_GPIOD_CFGHR_MODE11       CH32V103_GPIOA_CFGHR_MODE11
#define CH32V103_GPIOD_CFGHR_MODE11_MASK  CH32V103_GPIOA_CFGHR_MODE11_MASK
#define CH32V103_GPIOD_CFGHR_CNF11        CH32V103_GPIOA_CFGHR_CNF11
#define CH32V103_GPIOD_CFGHR_CNF11_MASK   CH32V103_GPIOA_CFGHR_CNF11_MASK
#define CH32V103_GPIOD_CFGHR_MODE12       CH32V103_GPIOA_CFGHR_MODE12
#define CH32V103_GPIOD_CFGHR_MODE12_MASK  CH32V103_GPIOA_CFGHR_MODE12_MASK
#define CH32V103_GPIOD_CFGHR_CNF12        CH32V103_GPIOA_CFGHR_CNF12
#define CH32V103_GPIOD_CFGHR_CNF12_MASK   CH32V103_GPIOA_CFGHR_CNF12_MASK
#define CH32V103_GPIOD_CFGHR_MODE13       CH32V103_GPIOA_CFGHR_MODE13
#define CH32V103_GPIOD_CFGHR_MODE13_MASK  CH32V103_GPIOA_CFGHR_MODE13_MASK
#define CH32V103_GPIOD_CFGHR_CNF13        CH32V103_GPIOA_CFGHR_CNF13
#define CH32V103_GPIOD_CFGHR_CNF13_MASK   CH32V103_GPIOA_CFGHR_CNF13_MASK
#define CH32V103_GPIOD_CFGHR_MODE14       CH32V103_GPIOA_CFGHR_MODE14
#define CH32V103_GPIOD_CFGHR_MODE14_MASK  CH32V103_GPIOA_CFGHR_MODE14_MASK
#define CH32V103_GPIOD_CFGHR_CNF14        CH32V103_GPIOA_CFGHR_CNF14
#define CH32V103_GPIOD_CFGHR_CNF14_MASK   CH32V103_GPIOA_CFGHR_CNF14_MASK
#define CH32V103_GPIOD_CFGHR_MODE15       CH32V103_GPIOA_CFGHR_MODE15
#define CH32V103_GPIOD_CFGHR_MODE15_MASK  CH32V103_GPIOA_CFGHR_MODE15_MASK
#define CH32V103_GPIOD_CFGHR_CNF15        CH32V103_GPIOA_CFGHR_CNF15
#define CH32V103_GPIOD_CFGHR_CNF15_MASK   CH32V103_GPIOA_CFGHR_CNF15_MASK
#define CH32V103_GPIOD_INDR_OFFSET        CH32V103_GPIOA_INDR_OFFSET
#define CH32V103_GPIOD_INDR               CH32V103_GPIOA_INDR
#define CH32V103_GPIOD_INDR_IDR0          CH32V103_GPIOA_INDR_IDR0
#define CH32V103_GPIOD_INDR_IDR1          CH32V103_GPIOA_INDR_IDR1
#define CH32V103_GPIOD_INDR_IDR2          CH32V103_GPIOA_INDR_IDR2
#define CH32V103_GPIOD_INDR_IDR3          CH32V103_GPIOA_INDR_IDR3
#define CH32V103_GPIOD_INDR_IDR4          CH32V103_GPIOA_INDR_IDR4
#define CH32V103_GPIOD_INDR_IDR5          CH32V103_GPIOA_INDR_IDR5
#define CH32V103_GPIOD_INDR_IDR6          CH32V103_GPIOA_INDR_IDR6
#define CH32V103_GPIOD_INDR_IDR7          CH32V103_GPIOA_INDR_IDR7
#define CH32V103_GPIOD_INDR_IDR8          CH32V103_GPIOA_INDR_IDR8
#define CH32V103_GPIOD_INDR_IDR9          CH32V103_GPIOA_INDR_IDR9
#define CH32V103_GPIOD_INDR_IDR10         CH32V103_GPIOA_INDR_IDR10
#define CH32V103_GPIOD_INDR_IDR11         CH32V103_GPIOA_INDR_IDR11
#define CH32V103_GPIOD_INDR_IDR12         CH32V103_GPIOA_INDR_IDR12
#define CH32V103_GPIOD_INDR_IDR13         CH32V103_GPIOA_INDR_IDR13
#define CH32V103_GPIOD_INDR_IDR14         CH32V103_GPIOA_INDR_IDR14
#define CH32V103_GPIOD_INDR_IDR15         CH32V103_GPIOA_INDR_IDR15
#define CH32V103_GPIOD_OUTDR_OFFSET       CH32V103_GPIOA_OUTDR_OFFSET
#define CH32V103_GPIOD_OUTDR              CH32V103_GPIOA_OUTDR
#define CH32V103_GPIOD_OUTDR_ODR0         CH32V103_GPIOA_OUTDR_ODR0
#define CH32V103_GPIOD_OUTDR_ODR1         CH32V103_GPIOA_OUTDR_ODR1
#define CH32V103_GPIOD_OUTDR_ODR2         CH32V103_GPIOA_OUTDR_ODR2
#define CH32V103_GPIOD_OUTDR_ODR3         CH32V103_GPIOA_OUTDR_ODR3
#define CH32V103_GPIOD_OUTDR_ODR4         CH32V103_GPIOA_OUTDR_ODR4
#define CH32V103_GPIOD_OUTDR_ODR5         CH32V103_GPIOA_OUTDR_ODR5
#define CH32V103_GPIOD_OUTDR_ODR6         CH32V103_GPIOA_OUTDR_ODR6
#define CH32V103_GPIOD_OUTDR_ODR7         CH32V103_GPIOA_OUTDR_ODR7
#define CH32V103_GPIOD_OUTDR_ODR8         CH32V103_GPIOA_OUTDR_ODR8
#define CH32V103_GPIOD_OUTDR_ODR9         CH32V103_GPIOA_OUTDR_ODR9
#define CH32V103_GPIOD_OUTDR_ODR10        CH32V103_GPIOA_OUTDR_ODR10
#define CH32V103_GPIOD_OUTDR_ODR11        CH32V103_GPIOA_OUTDR_ODR11
#define CH32V103_GPIOD_OUTDR_ODR12        CH32V103_GPIOA_OUTDR_ODR12
#define CH32V103_GPIOD_OUTDR_ODR13        CH32V103_GPIOA_OUTDR_ODR13
#define CH32V103_GPIOD_OUTDR_ODR14        CH32V103_GPIOA_OUTDR_ODR14
#define CH32V103_GPIOD_OUTDR_ODR15        CH32V103_GPIOA_OUTDR_ODR15
#define CH32V103_GPIOD_BSHR_OFFSET        CH32V103_GPIOA_BSHR_OFFSET
#define CH32V103_GPIOD_BSHR               CH32V103_GPIOA_BSHR
#define CH32V103_GPIOD_BSHR_BS0           CH32V103_GPIOA_BSHR_BS0
#define CH32V103_GPIOD_BSHR_BS1           CH32V103_GPIOA_BSHR_BS1
#define CH32V103_GPIOD_BSHR_BS2           CH32V103_GPIOA_BSHR_BS2
#define CH32V103_GPIOD_BSHR_BS3           CH32V103_GPIOA_BSHR_BS3
#define CH32V103_GPIOD_BSHR_BS4           CH32V103_GPIOA_BSHR_BS4
#define CH32V103_GPIOD_BSHR_BS5           CH32V103_GPIOA_BSHR_BS5
#define CH32V103_GPIOD_BSHR_BS6           CH32V103_GPIOA_BSHR_BS6
#define CH32V103_GPIOD_BSHR_BS7           CH32V103_GPIOA_BSHR_BS7
#define CH32V103_GPIOD_BSHR_BS8           CH32V103_GPIOA_BSHR_BS8
#define CH32V103_GPIOD_BSHR_BS9           CH32V103_GPIOA_BSHR_BS9
#define CH32V103_GPIOD_BSHR_BS10          CH32V103_GPIOA_BSHR_BS10
#define CH32V103_GPIOD_BSHR_BS11          CH32V103_GPIOA_BSHR_BS11
#define CH32V103_GPIOD_BSHR_BS12          CH32V103_GPIOA_BSHR_BS12
#define CH32V103_GPIOD_BSHR_BS13          CH32V103_GPIOA_BSHR_BS13
#define CH32V103_GPIOD_BSHR_BS14          CH32V103_GPIOA_BSHR_BS14
#define CH32V103_GPIOD_BSHR_BS15          CH32V103_GPIOA_BSHR_BS15
#define CH32V103_GPIOD_BSHR_BR0           CH32V103_GPIOA_BSHR_BR0
#define CH32V103_GPIOD_BSHR_BR1           CH32V103_GPIOA_BSHR_BR1
#define CH32V103_GPIOD_BSHR_BR2           CH32V103_GPIOA_BSHR_BR2
#define CH32V103_GPIOD_BSHR_BR3           CH32V103_GPIOA_BSHR_BR3
#define CH32V103_GPIOD_BSHR_BR4           CH32V103_GPIOA_BSHR_BR4
#define CH32V103_GPIOD_BSHR_BR5           CH32V103_GPIOA_BSHR_BR5
#define CH32V103_GPIOD_BSHR_BR6           CH32V103_GPIOA_BSHR_BR6
#define CH32V103_GPIOD_BSHR_BR7           CH32V103_GPIOA_BSHR_BR7
#define CH32V103_GPIOD_BSHR_BR8           CH32V103_GPIOA_BSHR_BR8
#define CH32V103_GPIOD_BSHR_BR9           CH32V103_GPIOA_BSHR_BR9
#define CH32V103_GPIOD_BSHR_BR10          CH32V103_GPIOA_BSHR_BR10
#define CH32V103_GPIOD_BSHR_BR11          CH32V103_GPIOA_BSHR_BR11
#define CH32V103_GPIOD_BSHR_BR12          CH32V103_GPIOA_BSHR_BR12
#define CH32V103_GPIOD_BSHR_BR13          CH32V103_GPIOA_BSHR_BR13
#define CH32V103_GPIOD_BSHR_BR14          CH32V103_GPIOA_BSHR_BR14
#define CH32V103_GPIOD_BSHR_BR15          CH32V103_GPIOA_BSHR_BR15
#define CH32V103_GPIOD_BCR_OFFSET         CH32V103_GPIOA_BCR_OFFSET
#define CH32V103_GPIOD_BCR                CH32V103_GPIOA_BCR
#define CH32V103_GPIOD_BCR_BR0            CH32V103_GPIOA_BCR_BR0
#define CH32V103_GPIOD_BCR_BR1            CH32V103_GPIOA_BCR_BR1
#define CH32V103_GPIOD_BCR_BR2            CH32V103_GPIOA_BCR_BR2
#define CH32V103_GPIOD_BCR_BR3            CH32V103_GPIOA_BCR_BR3
#define CH32V103_GPIOD_BCR_BR4            CH32V103_GPIOA_BCR_BR4
#define CH32V103_GPIOD_BCR_BR5            CH32V103_GPIOA_BCR_BR5
#define CH32V103_GPIOD_BCR_BR6            CH32V103_GPIOA_BCR_BR6
#define CH32V103_GPIOD_BCR_BR7            CH32V103_GPIOA_BCR_BR7
#define CH32V103_GPIOD_BCR_BR8            CH32V103_GPIOA_BCR_BR8
#define CH32V103_GPIOD_BCR_BR9            CH32V103_GPIOA_BCR_BR9
#define CH32V103_GPIOD_BCR_BR10           CH32V103_GPIOA_BCR_BR10
#define CH32V103_GPIOD_BCR_BR11           CH32V103_GPIOA_BCR_BR11
#define CH32V103_GPIOD_BCR_BR12           CH32V103_GPIOA_BCR_BR12
#define CH32V103_GPIOD_BCR_BR13           CH32V103_GPIOA_BCR_BR13
#define CH32V103_GPIOD_BCR_BR14           CH32V103_GPIOA_BCR_BR14
#define CH32V103_GPIOD_BCR_BR15           CH32V103_GPIOA_BCR_BR15
#define CH32V103_GPIOD_LCKR_OFFSET        CH32V103_GPIOA_LCKR_OFFSET
#define CH32V103_GPIOD_LCKR               CH32V103_GPIOA_LCKR
#define CH32V103_GPIOD_LCKR_LCK0          CH32V103_GPIOA_LCKR_LCK0
#define CH32V103_GPIOD_LCKR_LCK1          CH32V103_GPIOA_LCKR_LCK1
#define CH32V103_GPIOD_LCKR_LCK2          CH32V103_GPIOA_LCKR_LCK2
#define CH32V103_GPIOD_LCKR_LCK3          CH32V103_GPIOA_LCKR_LCK3
#define CH32V103_GPIOD_LCKR_LCK4          CH32V103_GPIOA_LCKR_LCK4
#define CH32V103_GPIOD_LCKR_LCK5          CH32V103_GPIOA_LCKR_LCK5
#define CH32V103_GPIOD_LCKR_LCK6          CH32V103_GPIOA_LCKR_LCK6
#define CH32V103_GPIOD_LCKR_LCK7          CH32V103_GPIOA_LCKR_LCK7
#define CH32V103_GPIOD_LCKR_LCK8          CH32V103_GPIOA_LCKR_LCK8
#define CH32V103_GPIOD_LCKR_LCK9          CH32V103_GPIOA_LCKR_LCK9
#define CH32V103_GPIOD_LCKR_LCK10         CH32V103_GPIOA_LCKR_LCK10
#define CH32V103_GPIOD_LCKR_LCK11         CH32V103_GPIOA_LCKR_LCK11
#define CH32V103_GPIOD_LCKR_LCK12         CH32V103_GPIOA_LCKR_LCK12
#define CH32V103_GPIOD_LCKR_LCK13         CH32V103_GPIOA_LCKR_LCK13
#define CH32V103_GPIOD_LCKR_LCK14         CH32V103_GPIOA_LCKR_LCK14
#define CH32V103_GPIOD_LCKR_LCK15         CH32V103_GPIOA_LCKR_LCK15
#define CH32V103_GPIOD_LCKR_LCKK          CH32V103_GPIOA_LCKR_LCKK

/* AFIO - Alternate function I/O */
#define CH32V103_AFIO_BASE                0x40010000
#define CH32V103_AFIO_ECR_OFFSET          0x0000
#define CH32V103_AFIO_ECR                 (CH32V103_AFIO_BASE + CH32V103_AFIO_ECR_OFFSET)
#define CH32V103_AFIO_ECR_PIN             (4 <<  0) /* 01: Pin selection */
#define CH32V103_AFIO_ECR_PIN_MASK             (0x0f)
#define CH32V103_AFIO_ECR_PORT            (3 <<  4) /* 10: Port selection */
#define CH32V103_AFIO_ECR_PORT_MASK            (0x07)
#define CH32V103_AFIO_ECR_EVOE            (1 <<  7) /* 80: Event Output Enable */
#define CH32V103_AFIO_PCFR1_OFFSET        0x0004
#define CH32V103_AFIO_PCFR1               (CH32V103_AFIO_BASE + CH32V103_AFIO_PCFR1_OFFSET)
#define CH32V103_AFIO_PCFR1_SPI1_REMAP    (1 <<  0) /* 01: SPI1 remapping */
#define CH32V103_AFIO_PCFR1_I2C1_REMAP    (1 <<  1) /* 02: I2C1 remapping */
#define CH32V103_AFIO_PCFR1_USART1_REMAP  (1 <<  2) /* 04: USART1 remapping */
#define CH32V103_AFIO_PCFR1_USART2_REMAP  (1 <<  3) /* 08: USART2 remapping */
#define CH32V103_AFIO_PCFR1_USART3_REMAP  (2 <<  4) /* 10: USART3 remapping */
#define CH32V103_AFIO_PCFR1_USART3_REMAP_MASK  (0x03)
#define CH32V103_AFIO_PCFR1_TIM1_REMAP    (2 <<  6) /* 40: TIM1 remapping */
#define CH32V103_AFIO_PCFR1_TIM1_REMAP_MASK    (0x03)
#define CH32V103_AFIO_PCFR1_TIM2_REMAP    (2 <<  8) /* 100: TIM2 remapping */
#define CH32V103_AFIO_PCFR1_TIM2_REMAP_MASK    (0x03)
#define CH32V103_AFIO_PCFR1_TIM3_REMAP    (2 << 10) /* 400: TIM3 remapping */
#define CH32V103_AFIO_PCFR1_TIM3_REMAP_MASK    (0x03)
#define CH32V103_AFIO_PCFR1_TIM4_REMAP    (1 << 12) /* 1000: TIM4 remapping */
#define CH32V103_AFIO_PCFR1_CAN_REMAP     (2 << 13) /* 2000: CAN1 remapping */
#define CH32V103_AFIO_PCFR1_CAN_REMAP_MASK     (0x03)
#define CH32V103_AFIO_PCFR1_PD01_REMAP    (1 << 15) /* 8000: Port D0/Port D1 mapping on OSCIN/OSCOUT */
#define CH32V103_AFIO_PCFR1_TIM5CH4_IREMAP (1 << 16) /* 10000: Set and cleared by software */
#define CH32V103_AFIO_PCFR1_ADC1_ETRGINJ_REMAP (1 << 17) /* 20000: ADC 1 External trigger injected conversion remapping */
#define CH32V103_AFIO_PCFR1_ADC1_ETRGREG_REMAP (1 << 18) /* 40000: ADC 1 external trigger regular conversion remapping */
#define CH32V103_AFIO_PCFR1_ADC2_ETRGINJ_REMAP (1 << 19) /* 80000: ADC 2 external trigger injected conversion remapping */
#define CH32V103_AFIO_PCFR1_ADC2_ETRGREG_REMAP (1 << 20) /* 100000: ADC 2 external trigger regular conversion remapping */
#define CH32V103_AFIO_PCFR1_SWJ_CFG       (3 << 24) /* 1000000: Serial wire JTAG configuration */
#define CH32V103_AFIO_PCFR1_SWJ_CFG_MASK       (0x07)
#define CH32V103_AFIO_EXTICR1_OFFSET      0x0008
#define CH32V103_AFIO_EXTICR1             (CH32V103_AFIO_BASE + CH32V103_AFIO_EXTICR1_OFFSET)
#define CH32V103_AFIO_EXTICR1_EXTI0       (4 <<  0) /* 01: EXTI0 configuration */
#define CH32V103_AFIO_EXTICR1_EXTI0_MASK       (0x0f)
#define CH32V103_AFIO_EXTICR1_EXTI1       (4 <<  4) /* 10: EXTI1 configuration */
#define CH32V103_AFIO_EXTICR1_EXTI1_MASK       (0x0f)
#define CH32V103_AFIO_EXTICR1_EXTI2       (4 <<  8) /* 100: EXTI2 configuration */
#define CH32V103_AFIO_EXTICR1_EXTI2_MASK       (0x0f)
#define CH32V103_AFIO_EXTICR1_EXTI3       (4 << 12) /* 1000: EXTI3 configuration */
#define CH32V103_AFIO_EXTICR1_EXTI3_MASK       (0x0f)
#define CH32V103_AFIO_EXTICR2_OFFSET      0x000c
#define CH32V103_AFIO_EXTICR2             (CH32V103_AFIO_BASE + CH32V103_AFIO_EXTICR2_OFFSET)
#define CH32V103_AFIO_EXTICR2_EXTI4       (4 <<  0) /* 01: EXTI4 configuration */
#define CH32V103_AFIO_EXTICR2_EXTI4_MASK       (0x0f)
#define CH32V103_AFIO_EXTICR2_EXTI5       (4 <<  4) /* 10: EXTI5 configuration */
#define CH32V103_AFIO_EXTICR2_EXTI5_MASK       (0x0f)
#define CH32V103_AFIO_EXTICR2_EXTI6       (4 <<  8) /* 100: EXTI6 configuration */
#define CH32V103_AFIO_EXTICR2_EXTI6_MASK       (0x0f)
#define CH32V103_AFIO_EXTICR2_EXTI7       (4 << 12) /* 1000: EXTI7 configuration */
#define CH32V103_AFIO_EXTICR2_EXTI7_MASK       (0x0f)
#define CH32V103_AFIO_EXTICR3_OFFSET      0x0010
#define CH32V103_AFIO_EXTICR3             (CH32V103_AFIO_BASE + CH32V103_AFIO_EXTICR3_OFFSET)
#define CH32V103_AFIO_EXTICR3_EXTI8       (4 <<  0) /* 01: EXTI8 configuration */
#define CH32V103_AFIO_EXTICR3_EXTI8_MASK       (0x0f)
#define CH32V103_AFIO_EXTICR3_EXTI9       (4 <<  4) /* 10: EXTI9 configuration */
#define CH32V103_AFIO_EXTICR3_EXTI9_MASK       (0x0f)
#define CH32V103_AFIO_EXTICR3_EXTI10      (4 <<  8) /* 100: EXTI10 configuration */
#define CH32V103_AFIO_EXTICR3_EXTI10_MASK      (0x0f)
#define CH32V103_AFIO_EXTICR3_EXTI11      (4 << 12) /* 1000: EXTI11 configuration */
#define CH32V103_AFIO_EXTICR3_EXTI11_MASK      (0x0f)
#define CH32V103_AFIO_EXTICR4_OFFSET      0x0014
#define CH32V103_AFIO_EXTICR4             (CH32V103_AFIO_BASE + CH32V103_AFIO_EXTICR4_OFFSET)
#define CH32V103_AFIO_EXTICR4_EXTI12      (4 <<  0) /* 01: EXTI12 configuration */
#define CH32V103_AFIO_EXTICR4_EXTI12_MASK      (0x0f)
#define CH32V103_AFIO_EXTICR4_EXTI13      (4 <<  4) /* 10: EXTI13 configuration */
#define CH32V103_AFIO_EXTICR4_EXTI13_MASK      (0x0f)
#define CH32V103_AFIO_EXTICR4_EXTI14      (4 <<  8) /* 100: EXTI14 configuration */
#define CH32V103_AFIO_EXTICR4_EXTI14_MASK      (0x0f)
#define CH32V103_AFIO_EXTICR4_EXTI15      (4 << 12) /* 1000: EXTI15 configuration */
#define CH32V103_AFIO_EXTICR4_EXTI15_MASK      (0x0f)
#define CH32V103_AFIO_PCFR2_OFFSET        0x001c
#define CH32V103_AFIO_PCFR2               (CH32V103_AFIO_BASE + CH32V103_AFIO_PCFR2_OFFSET)
#define CH32V103_AFIO_PCFR2_TIM9_REMAP    (1 <<  5) /* 20: TIM9 remapping */
#define CH32V103_AFIO_PCFR2_TIM10_REMAP   (1 <<  6) /* 40: TIM10 remapping */
#define CH32V103_AFIO_PCFR2_TIM11_REMAP   (1 <<  7) /* 80: TIM11 remapping */
#define CH32V103_AFIO_PCFR2_TIM13_REMAP   (1 <<  8) /* 100: TIM13 remapping */
#define CH32V103_AFIO_PCFR2_TIM14_REMAP   (1 <<  9) /* 200: TIM14 remapping */
#define CH32V103_AFIO_PCFR2_FSMC_NADV     (1 << 10) /* 400: NADV connect/disconnect */

/* EXTI - EXTI */
#define CH32V103_EXTI_BASE                0x40010400
#define CH32V103_EXTI_INTENR_OFFSET       0x0000
#define CH32V103_EXTI_INTENR              (CH32V103_EXTI_BASE + CH32V103_EXTI_INTENR_OFFSET)
#define CH32V103_EXTI_INTENR_MR0          (1 <<  0) /* 01: Interrupt Mask on line 0 */
#define CH32V103_EXTI_INTENR_MR1          (1 <<  1) /* 02: Interrupt Mask on line 1 */
#define CH32V103_EXTI_INTENR_MR2          (1 <<  2) /* 04: Interrupt Mask on line 2 */
#define CH32V103_EXTI_INTENR_MR3          (1 <<  3) /* 08: Interrupt Mask on line 3 */
#define CH32V103_EXTI_INTENR_MR4          (1 <<  4) /* 10: Interrupt Mask on line 4 */
#define CH32V103_EXTI_INTENR_MR5          (1 <<  5) /* 20: Interrupt Mask on line 5 */
#define CH32V103_EXTI_INTENR_MR6          (1 <<  6) /* 40: Interrupt Mask on line 6 */
#define CH32V103_EXTI_INTENR_MR7          (1 <<  7) /* 80: Interrupt Mask on line 7 */
#define CH32V103_EXTI_INTENR_MR8          (1 <<  8) /* 100: Interrupt Mask on line 8 */
#define CH32V103_EXTI_INTENR_MR9          (1 <<  9) /* 200: Interrupt Mask on line 9 */
#define CH32V103_EXTI_INTENR_MR10         (1 << 10) /* 400: Interrupt Mask on line 10 */
#define CH32V103_EXTI_INTENR_MR11         (1 << 11) /* 800: Interrupt Mask on line 11 */
#define CH32V103_EXTI_INTENR_MR12         (1 << 12) /* 1000: Interrupt Mask on line 12 */
#define CH32V103_EXTI_INTENR_MR13         (1 << 13) /* 2000: Interrupt Mask on line 13 */
#define CH32V103_EXTI_INTENR_MR14         (1 << 14) /* 4000: Interrupt Mask on line 14 */
#define CH32V103_EXTI_INTENR_MR15         (1 << 15) /* 8000: Interrupt Mask on line 15 */
#define CH32V103_EXTI_INTENR_MR16         (1 << 16) /* 10000: Interrupt Mask on line 16 */
#define CH32V103_EXTI_INTENR_MR17         (1 << 17) /* 20000: Interrupt Mask on line 17 */
#define CH32V103_EXTI_INTENR_MR18         (1 << 18) /* 40000: Interrupt Mask on line 18 */
#define CH32V103_EXTI_EVENR_OFFSET        0x0004
#define CH32V103_EXTI_EVENR               (CH32V103_EXTI_BASE + CH32V103_EXTI_EVENR_OFFSET)
#define CH32V103_EXTI_EVENR_MR0           (1 <<  0) /* 01: Event Mask on line 0 */
#define CH32V103_EXTI_EVENR_MR1           (1 <<  1) /* 02: Event Mask on line 1 */
#define CH32V103_EXTI_EVENR_MR2           (1 <<  2) /* 04: Event Mask on line 2 */
#define CH32V103_EXTI_EVENR_MR3           (1 <<  3) /* 08: Event Mask on line 3 */
#define CH32V103_EXTI_EVENR_MR4           (1 <<  4) /* 10: Event Mask on line 4 */
#define CH32V103_EXTI_EVENR_MR5           (1 <<  5) /* 20: Event Mask on line 5 */
#define CH32V103_EXTI_EVENR_MR6           (1 <<  6) /* 40: Event Mask on line 6 */
#define CH32V103_EXTI_EVENR_MR7           (1 <<  7) /* 80: Event Mask on line 7 */
#define CH32V103_EXTI_EVENR_MR8           (1 <<  8) /* 100: Event Mask on line 8 */
#define CH32V103_EXTI_EVENR_MR9           (1 <<  9) /* 200: Event Mask on line 9 */
#define CH32V103_EXTI_EVENR_MR10          (1 << 10) /* 400: Event Mask on line 10 */
#define CH32V103_EXTI_EVENR_MR11          (1 << 11) /* 800: Event Mask on line 11 */
#define CH32V103_EXTI_EVENR_MR12          (1 << 12) /* 1000: Event Mask on line 12 */
#define CH32V103_EXTI_EVENR_MR13          (1 << 13) /* 2000: Event Mask on line 13 */
#define CH32V103_EXTI_EVENR_MR14          (1 << 14) /* 4000: Event Mask on line 14 */
#define CH32V103_EXTI_EVENR_MR15          (1 << 15) /* 8000: Event Mask on line 15 */
#define CH32V103_EXTI_EVENR_MR16          (1 << 16) /* 10000: Event Mask on line 16 */
#define CH32V103_EXTI_EVENR_MR17          (1 << 17) /* 20000: Event Mask on line 17 */
#define CH32V103_EXTI_EVENR_MR18          (1 << 18) /* 40000: Event Mask on line 18 */
#define CH32V103_EXTI_RTENR_OFFSET        0x0008
#define CH32V103_EXTI_RTENR               (CH32V103_EXTI_BASE + CH32V103_EXTI_RTENR_OFFSET)
#define CH32V103_EXTI_RTENR_TR0           (1 <<  0) /* 01: Rising trigger event configuration of line 0 */
#define CH32V103_EXTI_RTENR_TR1           (1 <<  1) /* 02: Rising trigger event configuration of line 1 */
#define CH32V103_EXTI_RTENR_TR2           (1 <<  2) /* 04: Rising trigger event configuration of line 2 */
#define CH32V103_EXTI_RTENR_TR3           (1 <<  3) /* 08: Rising trigger event configuration of line 3 */
#define CH32V103_EXTI_RTENR_TR4           (1 <<  4) /* 10: Rising trigger event configuration of line 4 */
#define CH32V103_EXTI_RTENR_TR5           (1 <<  5) /* 20: Rising trigger event configuration of line 5 */
#define CH32V103_EXTI_RTENR_TR6           (1 <<  6) /* 40: Rising trigger event configuration of line 6 */
#define CH32V103_EXTI_RTENR_TR7           (1 <<  7) /* 80: Rising trigger event configuration of line 7 */
#define CH32V103_EXTI_RTENR_TR8           (1 <<  8) /* 100: Rising trigger event configuration of line 8 */
#define CH32V103_EXTI_RTENR_TR9           (1 <<  9) /* 200: Rising trigger event configuration of line 9 */
#define CH32V103_EXTI_RTENR_TR10          (1 << 10) /* 400: Rising trigger event configuration of line 10 */
#define CH32V103_EXTI_RTENR_TR11          (1 << 11) /* 800: Rising trigger event configuration of line 11 */
#define CH32V103_EXTI_RTENR_TR12          (1 << 12) /* 1000: Rising trigger event configuration of line 12 */
#define CH32V103_EXTI_RTENR_TR13          (1 << 13) /* 2000: Rising trigger event configuration of line 13 */
#define CH32V103_EXTI_RTENR_TR14          (1 << 14) /* 4000: Rising trigger event configuration of line 14 */
#define CH32V103_EXTI_RTENR_TR15          (1 << 15) /* 8000: Rising trigger event configuration of line 15 */
#define CH32V103_EXTI_RTENR_TR16          (1 << 16) /* 10000: Rising trigger event configuration of line 16 */
#define CH32V103_EXTI_RTENR_TR17          (1 << 17) /* 20000: Rising trigger event configuration of line 17 */
#define CH32V103_EXTI_RTENR_TR18          (1 << 18) /* 40000: Rising trigger event configuration of line 18 */
#define CH32V103_EXTI_FTENR_OFFSET        0x000c
#define CH32V103_EXTI_FTENR               (CH32V103_EXTI_BASE + CH32V103_EXTI_FTENR_OFFSET)
#define CH32V103_EXTI_FTENR_TR0           (1 <<  0) /* 01: Falling trigger event configuration of line 0 */
#define CH32V103_EXTI_FTENR_TR1           (1 <<  1) /* 02: Falling trigger event configuration of line 1 */
#define CH32V103_EXTI_FTENR_TR2           (1 <<  2) /* 04: Falling trigger event configuration of line 2 */
#define CH32V103_EXTI_FTENR_TR3           (1 <<  3) /* 08: Falling trigger event configuration of line 3 */
#define CH32V103_EXTI_FTENR_TR4           (1 <<  4) /* 10: Falling trigger event configuration of line 4 */
#define CH32V103_EXTI_FTENR_TR5           (1 <<  5) /* 20: Falling trigger event configuration of line 5 */
#define CH32V103_EXTI_FTENR_TR6           (1 <<  6) /* 40: Falling trigger event configuration of line 6 */
#define CH32V103_EXTI_FTENR_TR7           (1 <<  7) /* 80: Falling trigger event configuration of line 7 */
#define CH32V103_EXTI_FTENR_TR8           (1 <<  8) /* 100: Falling trigger event configuration of line 8 */
#define CH32V103_EXTI_FTENR_TR9           (1 <<  9) /* 200: Falling trigger event configuration of line 9 */
#define CH32V103_EXTI_FTENR_TR10          (1 << 10) /* 400: Falling trigger event configuration of line 10 */
#define CH32V103_EXTI_FTENR_TR11          (1 << 11) /* 800: Falling trigger event configuration of line 11 */
#define CH32V103_EXTI_FTENR_TR12          (1 << 12) /* 1000: Falling trigger event configuration of line 12 */
#define CH32V103_EXTI_FTENR_TR13          (1 << 13) /* 2000: Falling trigger event configuration of line 13 */
#define CH32V103_EXTI_FTENR_TR14          (1 << 14) /* 4000: Falling trigger event configuration of line 14 */
#define CH32V103_EXTI_FTENR_TR15          (1 << 15) /* 8000: Falling trigger event configuration of line 15 */
#define CH32V103_EXTI_FTENR_TR16          (1 << 16) /* 10000: Falling trigger event configuration of line 16 */
#define CH32V103_EXTI_FTENR_TR17          (1 << 17) /* 20000: Falling trigger event configuration of line 17 */
#define CH32V103_EXTI_FTENR_TR18          (1 << 18) /* 40000: Falling trigger event configuration of line 18 */
#define CH32V103_EXTI_SWIEVR_OFFSET       0x0010
#define CH32V103_EXTI_SWIEVR              (CH32V103_EXTI_BASE + CH32V103_EXTI_SWIEVR_OFFSET)
#define CH32V103_EXTI_SWIEVR_SWIER0       (1 <<  0) /* 01: Software Interrupt on line 0 */
#define CH32V103_EXTI_SWIEVR_SWIER1       (1 <<  1) /* 02: Software Interrupt on line 1 */
#define CH32V103_EXTI_SWIEVR_SWIER2       (1 <<  2) /* 04: Software Interrupt on line 2 */
#define CH32V103_EXTI_SWIEVR_SWIER3       (1 <<  3) /* 08: Software Interrupt on line 3 */
#define CH32V103_EXTI_SWIEVR_SWIER4       (1 <<  4) /* 10: Software Interrupt on line 4 */
#define CH32V103_EXTI_SWIEVR_SWIER5       (1 <<  5) /* 20: Software Interrupt on line 5 */
#define CH32V103_EXTI_SWIEVR_SWIER6       (1 <<  6) /* 40: Software Interrupt on line 6 */
#define CH32V103_EXTI_SWIEVR_SWIER7       (1 <<  7) /* 80: Software Interrupt on line 7 */
#define CH32V103_EXTI_SWIEVR_SWIER8       (1 <<  8) /* 100: Software Interrupt on line 8 */
#define CH32V103_EXTI_SWIEVR_SWIER9       (1 <<  9) /* 200: Software Interrupt on line 9 */
#define CH32V103_EXTI_SWIEVR_SWIER10      (1 << 10) /* 400: Software Interrupt on line 10 */
#define CH32V103_EXTI_SWIEVR_SWIER11      (1 << 11) /* 800: Software Interrupt on line 11 */
#define CH32V103_EXTI_SWIEVR_SWIER12      (1 << 12) /* 1000: Software Interrupt on line 12 */
#define CH32V103_EXTI_SWIEVR_SWIER13      (1 << 13) /* 2000: Software Interrupt on line 13 */
#define CH32V103_EXTI_SWIEVR_SWIER14      (1 << 14) /* 4000: Software Interrupt on line 14 */
#define CH32V103_EXTI_SWIEVR_SWIER15      (1 << 15) /* 8000: Software Interrupt on line 15 */
#define CH32V103_EXTI_SWIEVR_SWIER16      (1 << 16) /* 10000: Software Interrupt on line 16 */
#define CH32V103_EXTI_SWIEVR_SWIER17      (1 << 17) /* 20000: Software Interrupt on line 17 */
#define CH32V103_EXTI_SWIEVR_SWIER18      (1 << 18) /* 40000: Software Interrupt on line 18 */
#define CH32V103_EXTI_INTFR_OFFSET        0x0014
#define CH32V103_EXTI_INTFR               (CH32V103_EXTI_BASE + CH32V103_EXTI_INTFR_OFFSET)
#define CH32V103_EXTI_INTFR_PR0           (1 <<  0) /* 01: Pending bit 0 */
#define CH32V103_EXTI_INTFR_PR1           (1 <<  1) /* 02: Pending bit 1 */
#define CH32V103_EXTI_INTFR_PR2           (1 <<  2) /* 04: Pending bit 2 */
#define CH32V103_EXTI_INTFR_PR3           (1 <<  3) /* 08: Pending bit 3 */
#define CH32V103_EXTI_INTFR_PR4           (1 <<  4) /* 10: Pending bit 4 */
#define CH32V103_EXTI_INTFR_PR5           (1 <<  5) /* 20: Pending bit 5 */
#define CH32V103_EXTI_INTFR_PR6           (1 <<  6) /* 40: Pending bit 6 */
#define CH32V103_EXTI_INTFR_PR7           (1 <<  7) /* 80: Pending bit 7 */
#define CH32V103_EXTI_INTFR_PR8           (1 <<  8) /* 100: Pending bit 8 */
#define CH32V103_EXTI_INTFR_PR9           (1 <<  9) /* 200: Pending bit 9 */
#define CH32V103_EXTI_INTFR_PR10          (1 << 10) /* 400: Pending bit 10 */
#define CH32V103_EXTI_INTFR_PR11          (1 << 11) /* 800: Pending bit 11 */
#define CH32V103_EXTI_INTFR_PR12          (1 << 12) /* 1000: Pending bit 12 */
#define CH32V103_EXTI_INTFR_PR13          (1 << 13) /* 2000: Pending bit 13 */
#define CH32V103_EXTI_INTFR_PR14          (1 << 14) /* 4000: Pending bit 14 */
#define CH32V103_EXTI_INTFR_PR15          (1 << 15) /* 8000: Pending bit 15 */
#define CH32V103_EXTI_INTFR_PR16          (1 << 16) /* 10000: Pending bit 16 */
#define CH32V103_EXTI_INTFR_PR17          (1 << 17) /* 20000: Pending bit 17 */
#define CH32V103_EXTI_INTFR_PR18          (1 << 18) /* 40000: Pending bit 18 */

/* DMA - DMA controller */
#define CH32V103_DMA_BASE                 0x40020000
#define CH32V103_DMA_INTFR_OFFSET         0x0000
#define CH32V103_DMA_INTFR                (CH32V103_DMA_BASE + CH32V103_DMA_INTFR_OFFSET)
#define CH32V103_DMA_INTFR_GIF1           (1 <<  0) /* 01: Channel 1 Global interrupt flag */
#define CH32V103_DMA_INTFR_TCIF1          (1 <<  1) /* 02: Channel 1 Transfer Complete flag */
#define CH32V103_DMA_INTFR_HTIF1          (1 <<  2) /* 04: Channel 1 Half Transfer Complete flag */
#define CH32V103_DMA_INTFR_TEIF1          (1 <<  3) /* 08: Channel 1 Transfer Error flag */
#define CH32V103_DMA_INTFR_GIF2           (1 <<  4) /* 10: Channel 2 Global interrupt flag */
#define CH32V103_DMA_INTFR_TCIF2          (1 <<  5) /* 20: Channel 2 Transfer Complete flag */
#define CH32V103_DMA_INTFR_HTIF2          (1 <<  6) /* 40: Channel 2 Half Transfer Complete flag */
#define CH32V103_DMA_INTFR_TEIF2          (1 <<  7) /* 80: Channel 2 Transfer Error flag */
#define CH32V103_DMA_INTFR_GIF3           (1 <<  8) /* 100: Channel 3 Global interrupt flag */
#define CH32V103_DMA_INTFR_TCIF3          (1 <<  9) /* 200: Channel 3 Transfer Complete flag */
#define CH32V103_DMA_INTFR_HTIF3          (1 << 10) /* 400: Channel 3 Half Transfer Complete flag */
#define CH32V103_DMA_INTFR_TEIF3          (1 << 11) /* 800: Channel 3 Transfer Error flag */
#define CH32V103_DMA_INTFR_GIF4           (1 << 12) /* 1000: Channel 4 Global interrupt flag */
#define CH32V103_DMA_INTFR_TCIF4          (1 << 13) /* 2000: Channel 4 Transfer Complete flag */
#define CH32V103_DMA_INTFR_HTIF4          (1 << 14) /* 4000: Channel 4 Half Transfer Complete flag */
#define CH32V103_DMA_INTFR_TEIF4          (1 << 15) /* 8000: Channel 4 Transfer Error flag */
#define CH32V103_DMA_INTFR_GIF5           (1 << 16) /* 10000: Channel 5 Global interrupt flag */
#define CH32V103_DMA_INTFR_TCIF5          (1 << 17) /* 20000: Channel 5 Transfer Complete flag */
#define CH32V103_DMA_INTFR_HTIF5          (1 << 18) /* 40000: Channel 5 Half Transfer Complete flag */
#define CH32V103_DMA_INTFR_TEIF5          (1 << 19) /* 80000: Channel 5 Transfer Error flag */
#define CH32V103_DMA_INTFR_GIF6           (1 << 20) /* 100000: Channel 6 Global interrupt flag */
#define CH32V103_DMA_INTFR_TCIF6          (1 << 21) /* 200000: Channel 6 Transfer Complete flag */
#define CH32V103_DMA_INTFR_HTIF6          (1 << 22) /* 400000: Channel 6 Half Transfer Complete flag */
#define CH32V103_DMA_INTFR_TEIF6          (1 << 23) /* 800000: Channel 6 Transfer Error flag */
#define CH32V103_DMA_INTFR_GIF7           (1 << 24) /* 1000000: Channel 7 Global interrupt flag */
#define CH32V103_DMA_INTFR_TCIF7          (1 << 25) /* 2000000: Channel 7 Transfer Complete flag */
#define CH32V103_DMA_INTFR_HTIF7          (1 << 26) /* 4000000: Channel 7 Half Transfer Complete flag */
#define CH32V103_DMA_INTFR_TEIF7          (1 << 27) /* 8000000: Channel 7 Transfer Error flag */
#define CH32V103_DMA_INTFCR_OFFSET        0x0004
#define CH32V103_DMA_INTFCR               (CH32V103_DMA_BASE + CH32V103_DMA_INTFCR_OFFSET)
#define CH32V103_DMA_INTFCR_CGIF1         (1 <<  0) /* 01: Channel 1 Global interrupt clear */
#define CH32V103_DMA_INTFCR_CGIF2         (1 <<  4) /* 10: Channel 2 Global interrupt clear */
#define CH32V103_DMA_INTFCR_CGIF3         (1 <<  8) /* 100: Channel 3 Global interrupt clear */
#define CH32V103_DMA_INTFCR_CGIF4         (1 << 12) /* 1000: Channel 4 Global interrupt clear */
#define CH32V103_DMA_INTFCR_CGIF5         (1 << 16) /* 10000: Channel 5 Global interrupt clear */
#define CH32V103_DMA_INTFCR_CGIF6         (1 << 20) /* 100000: Channel 6 Global interrupt clear */
#define CH32V103_DMA_INTFCR_CGIF7         (1 << 24) /* 1000000: Channel 7 Global interrupt clear */
#define CH32V103_DMA_INTFCR_CTCIF1        (1 <<  1) /* 02: Channel 1 Transfer Complete clear */
#define CH32V103_DMA_INTFCR_CTCIF2        (1 <<  5) /* 20: Channel 2 Transfer Complete clear */
#define CH32V103_DMA_INTFCR_CTCIF3        (1 <<  9) /* 200: Channel 3 Transfer Complete clear */
#define CH32V103_DMA_INTFCR_CTCIF4        (1 << 13) /* 2000: Channel 4 Transfer Complete clear */
#define CH32V103_DMA_INTFCR_CTCIF5        (1 << 17) /* 20000: Channel 5 Transfer Complete clear */
#define CH32V103_DMA_INTFCR_CTCIF6        (1 << 21) /* 200000: Channel 6 Transfer Complete clear */
#define CH32V103_DMA_INTFCR_CTCIF7        (1 << 25) /* 2000000: Channel 7 Transfer Complete clear */
#define CH32V103_DMA_INTFCR_CHTIF1        (1 <<  2) /* 04: Channel 1 Half Transfer clear */
#define CH32V103_DMA_INTFCR_CHTIF2        (1 <<  6) /* 40: Channel 2 Half Transfer clear */
#define CH32V103_DMA_INTFCR_CHTIF3        (1 << 10) /* 400: Channel 3 Half Transfer clear */
#define CH32V103_DMA_INTFCR_CHTIF4        (1 << 14) /* 4000: Channel 4 Half Transfer clear */
#define CH32V103_DMA_INTFCR_CHTIF5        (1 << 18) /* 40000: Channel 5 Half Transfer clear */
#define CH32V103_DMA_INTFCR_CHTIF6        (1 << 22) /* 400000: Channel 6 Half Transfer clear */
#define CH32V103_DMA_INTFCR_CHTIF7        (1 << 26) /* 4000000: Channel 7 Half Transfer clear */
#define CH32V103_DMA_INTFCR_CTEIF1        (1 <<  3) /* 08: Channel 1 Transfer Error clear */
#define CH32V103_DMA_INTFCR_CTEIF2        (1 <<  7) /* 80: Channel 2 Transfer Error clear */
#define CH32V103_DMA_INTFCR_CTEIF3        (1 << 11) /* 800: Channel 3 Transfer Error clear */
#define CH32V103_DMA_INTFCR_CTEIF4        (1 << 15) /* 8000: Channel 4 Transfer Error clear */
#define CH32V103_DMA_INTFCR_CTEIF5        (1 << 19) /* 80000: Channel 5 Transfer Error clear */
#define CH32V103_DMA_INTFCR_CTEIF6        (1 << 23) /* 800000: Channel 6 Transfer Error clear */
#define CH32V103_DMA_INTFCR_CTEIF7        (1 << 27) /* 8000000: Channel 7 Transfer Error clear */
#define CH32V103_DMA_CFGR1_OFFSET         0x0008
#define CH32V103_DMA_CFGR1                (CH32V103_DMA_BASE + CH32V103_DMA_CFGR1_OFFSET)
#define CH32V103_DMA_CFGR1_EN             (1 <<  0) /* 01: Channel enable */
#define CH32V103_DMA_CFGR1_TCIE           (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V103_DMA_CFGR1_HTIE           (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V103_DMA_CFGR1_TEIE           (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V103_DMA_CFGR1_DIR            (1 <<  4) /* 10: Data transfer direction */
#define CH32V103_DMA_CFGR1_CIRC           (1 <<  5) /* 20: Circular mode */
#define CH32V103_DMA_CFGR1_PINC           (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V103_DMA_CFGR1_MINC           (1 <<  7) /* 80: Memory increment mode */
#define CH32V103_DMA_CFGR1_PSIZE          (2 <<  8) /* 100: Peripheral size */
#define CH32V103_DMA_CFGR1_PSIZE_MASK          (0x03)
#define CH32V103_DMA_CFGR1_MSIZE          (2 << 10) /* 400: Memory size */
#define CH32V103_DMA_CFGR1_MSIZE_MASK          (0x03)
#define CH32V103_DMA_CFGR1_PL             (2 << 12) /* 1000: Channel Priority level */
#define CH32V103_DMA_CFGR1_PL_MASK             (0x03)
#define CH32V103_DMA_CFGR1_MEM2MEM        (1 << 14) /* 4000: Memory to memory mode */
#define CH32V103_DMA_CNTR1_OFFSET         0x000c
#define CH32V103_DMA_CNTR1                (CH32V103_DMA_BASE + CH32V103_DMA_CNTR1_OFFSET)
#define CH32V103_DMA_CNTR1_NDT            (16 <<  0) /* 01: Number of data to transfer */
#define CH32V103_DMA_CNTR1_NDT_MASK            (0xffff)
#define CH32V103_DMA_PADDR1_OFFSET        0x0010
#define CH32V103_DMA_PADDR1               (CH32V103_DMA_BASE + CH32V103_DMA_PADDR1_OFFSET)
#define CH32V103_DMA_PADDR1_PA            (32 <<  0) /* 01: Peripheral address */
#define CH32V103_DMA_PADDR1_PA_MASK            (0xffffffff)
#define CH32V103_DMA_MADDR1_OFFSET        0x0014
#define CH32V103_DMA_MADDR1               (CH32V103_DMA_BASE + CH32V103_DMA_MADDR1_OFFSET)
#define CH32V103_DMA_MADDR1_MA            (32 <<  0) /* 01: Memory address */
#define CH32V103_DMA_MADDR1_MA_MASK            (0xffffffff)
#define CH32V103_DMA_CFGR2_OFFSET         0x001c
#define CH32V103_DMA_CFGR2                (CH32V103_DMA_BASE + CH32V103_DMA_CFGR2_OFFSET)
#define CH32V103_DMA_CFGR2_EN             (1 <<  0) /* 01: Channel enable */
#define CH32V103_DMA_CFGR2_TCIE           (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V103_DMA_CFGR2_HTIE           (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V103_DMA_CFGR2_TEIE           (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V103_DMA_CFGR2_DIR            (1 <<  4) /* 10: Data transfer direction */
#define CH32V103_DMA_CFGR2_CIRC           (1 <<  5) /* 20: Circular mode */
#define CH32V103_DMA_CFGR2_PINC           (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V103_DMA_CFGR2_MINC           (1 <<  7) /* 80: Memory increment mode */
#define CH32V103_DMA_CFGR2_PSIZE          (2 <<  8) /* 100: Peripheral size */
#define CH32V103_DMA_CFGR2_PSIZE_MASK          (0x03)
#define CH32V103_DMA_CFGR2_MSIZE          (2 << 10) /* 400: Memory size */
#define CH32V103_DMA_CFGR2_MSIZE_MASK          (0x03)
#define CH32V103_DMA_CFGR2_PL             (2 << 12) /* 1000: Channel Priority level */
#define CH32V103_DMA_CFGR2_PL_MASK             (0x03)
#define CH32V103_DMA_CFGR2_MEM2MEM        (1 << 14) /* 4000: Memory to memory mode */
#define CH32V103_DMA_CNTR2_OFFSET         0x0020
#define CH32V103_DMA_CNTR2                (CH32V103_DMA_BASE + CH32V103_DMA_CNTR2_OFFSET)
#define CH32V103_DMA_CNTR2_NDT            (16 <<  0) /* 01: Number of data to transfer */
#define CH32V103_DMA_CNTR2_NDT_MASK            (0xffff)
#define CH32V103_DMA_PADDR2_OFFSET        0x0024
#define CH32V103_DMA_PADDR2               (CH32V103_DMA_BASE + CH32V103_DMA_PADDR2_OFFSET)
#define CH32V103_DMA_PADDR2_PA            (32 <<  0) /* 01: Peripheral address */
#define CH32V103_DMA_PADDR2_PA_MASK            (0xffffffff)
#define CH32V103_DMA_MADDR2_OFFSET        0x0028
#define CH32V103_DMA_MADDR2               (CH32V103_DMA_BASE + CH32V103_DMA_MADDR2_OFFSET)
#define CH32V103_DMA_MADDR2_MA            (32 <<  0) /* 01: Memory address */
#define CH32V103_DMA_MADDR2_MA_MASK            (0xffffffff)
#define CH32V103_DMA_CFGR3_OFFSET         0x0030
#define CH32V103_DMA_CFGR3                (CH32V103_DMA_BASE + CH32V103_DMA_CFGR3_OFFSET)
#define CH32V103_DMA_CFGR3_EN             (1 <<  0) /* 01: Channel enable */
#define CH32V103_DMA_CFGR3_TCIE           (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V103_DMA_CFGR3_HTIE           (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V103_DMA_CFGR3_TEIE           (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V103_DMA_CFGR3_DIR            (1 <<  4) /* 10: Data transfer direction */
#define CH32V103_DMA_CFGR3_CIRC           (1 <<  5) /* 20: Circular mode */
#define CH32V103_DMA_CFGR3_PINC           (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V103_DMA_CFGR3_MINC           (1 <<  7) /* 80: Memory increment mode */
#define CH32V103_DMA_CFGR3_PSIZE          (2 <<  8) /* 100: Peripheral size */
#define CH32V103_DMA_CFGR3_PSIZE_MASK          (0x03)
#define CH32V103_DMA_CFGR3_MSIZE          (2 << 10) /* 400: Memory size */
#define CH32V103_DMA_CFGR3_MSIZE_MASK          (0x03)
#define CH32V103_DMA_CFGR3_PL             (2 << 12) /* 1000: Channel Priority level */
#define CH32V103_DMA_CFGR3_PL_MASK             (0x03)
#define CH32V103_DMA_CFGR3_MEM2MEM        (1 << 14) /* 4000: Memory to memory mode */
#define CH32V103_DMA_CNTR3_OFFSET         0x0034
#define CH32V103_DMA_CNTR3                (CH32V103_DMA_BASE + CH32V103_DMA_CNTR3_OFFSET)
#define CH32V103_DMA_CNTR3_NDT            (16 <<  0) /* 01: Number of data to transfer */
#define CH32V103_DMA_CNTR3_NDT_MASK            (0xffff)
#define CH32V103_DMA_PADDR3_OFFSET        0x0038
#define CH32V103_DMA_PADDR3               (CH32V103_DMA_BASE + CH32V103_DMA_PADDR3_OFFSET)
#define CH32V103_DMA_PADDR3_PA            (32 <<  0) /* 01: Peripheral address */
#define CH32V103_DMA_PADDR3_PA_MASK            (0xffffffff)
#define CH32V103_DMA_MADDR3_OFFSET        0x003c
#define CH32V103_DMA_MADDR3               (CH32V103_DMA_BASE + CH32V103_DMA_MADDR3_OFFSET)
#define CH32V103_DMA_MADDR3_MA            (32 <<  0) /* 01: Memory address */
#define CH32V103_DMA_MADDR3_MA_MASK            (0xffffffff)
#define CH32V103_DMA_CFGR4_OFFSET         0x0044
#define CH32V103_DMA_CFGR4                (CH32V103_DMA_BASE + CH32V103_DMA_CFGR4_OFFSET)
#define CH32V103_DMA_CFGR4_EN             (1 <<  0) /* 01: Channel enable */
#define CH32V103_DMA_CFGR4_TCIE           (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V103_DMA_CFGR4_HTIE           (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V103_DMA_CFGR4_TEIE           (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V103_DMA_CFGR4_DIR            (1 <<  4) /* 10: Data transfer direction */
#define CH32V103_DMA_CFGR4_CIRC           (1 <<  5) /* 20: Circular mode */
#define CH32V103_DMA_CFGR4_PINC           (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V103_DMA_CFGR4_MINC           (1 <<  7) /* 80: Memory increment mode */
#define CH32V103_DMA_CFGR4_PSIZE          (2 <<  8) /* 100: Peripheral size */
#define CH32V103_DMA_CFGR4_PSIZE_MASK          (0x03)
#define CH32V103_DMA_CFGR4_MSIZE          (2 << 10) /* 400: Memory size */
#define CH32V103_DMA_CFGR4_MSIZE_MASK          (0x03)
#define CH32V103_DMA_CFGR4_PL             (2 << 12) /* 1000: Channel Priority level */
#define CH32V103_DMA_CFGR4_PL_MASK             (0x03)
#define CH32V103_DMA_CFGR4_MEM2MEM        (1 << 14) /* 4000: Memory to memory mode */
#define CH32V103_DMA_CNTR4_OFFSET         0x0048
#define CH32V103_DMA_CNTR4                (CH32V103_DMA_BASE + CH32V103_DMA_CNTR4_OFFSET)
#define CH32V103_DMA_CNTR4_NDT            (16 <<  0) /* 01: Number of data to transfer */
#define CH32V103_DMA_CNTR4_NDT_MASK            (0xffff)
#define CH32V103_DMA_PADDR4_OFFSET        0x004c
#define CH32V103_DMA_PADDR4               (CH32V103_DMA_BASE + CH32V103_DMA_PADDR4_OFFSET)
#define CH32V103_DMA_PADDR4_PA            (32 <<  0) /* 01: Peripheral address */
#define CH32V103_DMA_PADDR4_PA_MASK            (0xffffffff)
#define CH32V103_DMA_MADDR4_OFFSET        0x0050
#define CH32V103_DMA_MADDR4               (CH32V103_DMA_BASE + CH32V103_DMA_MADDR4_OFFSET)
#define CH32V103_DMA_MADDR4_MA            (32 <<  0) /* 01: Memory address */
#define CH32V103_DMA_MADDR4_MA_MASK            (0xffffffff)
#define CH32V103_DMA_CFGR5_OFFSET         0x0058
#define CH32V103_DMA_CFGR5                (CH32V103_DMA_BASE + CH32V103_DMA_CFGR5_OFFSET)
#define CH32V103_DMA_CFGR5_EN             (1 <<  0) /* 01: Channel enable */
#define CH32V103_DMA_CFGR5_TCIE           (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V103_DMA_CFGR5_HTIE           (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V103_DMA_CFGR5_TEIE           (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V103_DMA_CFGR5_DIR            (1 <<  4) /* 10: Data transfer direction */
#define CH32V103_DMA_CFGR5_CIRC           (1 <<  5) /* 20: Circular mode */
#define CH32V103_DMA_CFGR5_PINC           (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V103_DMA_CFGR5_MINC           (1 <<  7) /* 80: Memory increment mode */
#define CH32V103_DMA_CFGR5_PSIZE          (2 <<  8) /* 100: Peripheral size */
#define CH32V103_DMA_CFGR5_PSIZE_MASK          (0x03)
#define CH32V103_DMA_CFGR5_MSIZE          (2 << 10) /* 400: Memory size */
#define CH32V103_DMA_CFGR5_MSIZE_MASK          (0x03)
#define CH32V103_DMA_CFGR5_PL             (2 << 12) /* 1000: Channel Priority level */
#define CH32V103_DMA_CFGR5_PL_MASK             (0x03)
#define CH32V103_DMA_CFGR5_MEM2MEM        (1 << 14) /* 4000: Memory to memory mode */
#define CH32V103_DMA_CNTR5_OFFSET         0x005c
#define CH32V103_DMA_CNTR5                (CH32V103_DMA_BASE + CH32V103_DMA_CNTR5_OFFSET)
#define CH32V103_DMA_CNTR5_NDT            (16 <<  0) /* 01: Number of data to transfer */
#define CH32V103_DMA_CNTR5_NDT_MASK            (0xffff)
#define CH32V103_DMA_PADDR5_OFFSET        0x0060
#define CH32V103_DMA_PADDR5               (CH32V103_DMA_BASE + CH32V103_DMA_PADDR5_OFFSET)
#define CH32V103_DMA_PADDR5_PA            (32 <<  0) /* 01: Peripheral address */
#define CH32V103_DMA_PADDR5_PA_MASK            (0xffffffff)
#define CH32V103_DMA_MADDR5_OFFSET        0x0064
#define CH32V103_DMA_MADDR5               (CH32V103_DMA_BASE + CH32V103_DMA_MADDR5_OFFSET)
#define CH32V103_DMA_MADDR5_MA            (32 <<  0) /* 01: Memory address */
#define CH32V103_DMA_MADDR5_MA_MASK            (0xffffffff)
#define CH32V103_DMA_CFGR6_OFFSET         0x006c
#define CH32V103_DMA_CFGR6                (CH32V103_DMA_BASE + CH32V103_DMA_CFGR6_OFFSET)
#define CH32V103_DMA_CFGR6_EN             (1 <<  0) /* 01: Channel enable */
#define CH32V103_DMA_CFGR6_TCIE           (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V103_DMA_CFGR6_HTIE           (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V103_DMA_CFGR6_TEIE           (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V103_DMA_CFGR6_DIR            (1 <<  4) /* 10: Data transfer direction */
#define CH32V103_DMA_CFGR6_CIRC           (1 <<  5) /* 20: Circular mode */
#define CH32V103_DMA_CFGR6_PINC           (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V103_DMA_CFGR6_MINC           (1 <<  7) /* 80: Memory increment mode */
#define CH32V103_DMA_CFGR6_PSIZE          (2 <<  8) /* 100: Peripheral size */
#define CH32V103_DMA_CFGR6_PSIZE_MASK          (0x03)
#define CH32V103_DMA_CFGR6_MSIZE          (2 << 10) /* 400: Memory size */
#define CH32V103_DMA_CFGR6_MSIZE_MASK          (0x03)
#define CH32V103_DMA_CFGR6_PL             (2 << 12) /* 1000: Channel Priority level */
#define CH32V103_DMA_CFGR6_PL_MASK             (0x03)
#define CH32V103_DMA_CFGR6_MEM2MEM        (1 << 14) /* 4000: Memory to memory mode */
#define CH32V103_DMA_CNTR6_OFFSET         0x0070
#define CH32V103_DMA_CNTR6                (CH32V103_DMA_BASE + CH32V103_DMA_CNTR6_OFFSET)
#define CH32V103_DMA_CNTR6_NDT            (16 <<  0) /* 01: Number of data to transfer */
#define CH32V103_DMA_CNTR6_NDT_MASK            (0xffff)
#define CH32V103_DMA_PADDR6_OFFSET        0x0074
#define CH32V103_DMA_PADDR6               (CH32V103_DMA_BASE + CH32V103_DMA_PADDR6_OFFSET)
#define CH32V103_DMA_PADDR6_PA            (32 <<  0) /* 01: Peripheral address */
#define CH32V103_DMA_PADDR6_PA_MASK            (0xffffffff)
#define CH32V103_DMA_MADDR6_OFFSET        0x0078
#define CH32V103_DMA_MADDR6               (CH32V103_DMA_BASE + CH32V103_DMA_MADDR6_OFFSET)
#define CH32V103_DMA_MADDR6_MA            (32 <<  0) /* 01: Memory address */
#define CH32V103_DMA_MADDR6_MA_MASK            (0xffffffff)
#define CH32V103_DMA_CFGR7_OFFSET         0x0080
#define CH32V103_DMA_CFGR7                (CH32V103_DMA_BASE + CH32V103_DMA_CFGR7_OFFSET)
#define CH32V103_DMA_CFGR7_EN             (1 <<  0) /* 01: Channel enable */
#define CH32V103_DMA_CFGR7_TCIE           (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V103_DMA_CFGR7_HTIE           (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V103_DMA_CFGR7_TEIE           (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V103_DMA_CFGR7_DIR            (1 <<  4) /* 10: Data transfer direction */
#define CH32V103_DMA_CFGR7_CIRC           (1 <<  5) /* 20: Circular mode */
#define CH32V103_DMA_CFGR7_PINC           (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V103_DMA_CFGR7_MINC           (1 <<  7) /* 80: Memory increment mode */
#define CH32V103_DMA_CFGR7_PSIZE          (2 <<  8) /* 100: Peripheral size */
#define CH32V103_DMA_CFGR7_PSIZE_MASK          (0x03)
#define CH32V103_DMA_CFGR7_MSIZE          (2 << 10) /* 400: Memory size */
#define CH32V103_DMA_CFGR7_MSIZE_MASK          (0x03)
#define CH32V103_DMA_CFGR7_PL             (2 << 12) /* 1000: Channel Priority level */
#define CH32V103_DMA_CFGR7_PL_MASK             (0x03)
#define CH32V103_DMA_CFGR7_MEM2MEM        (1 << 14) /* 4000: Memory to memory mode */
#define CH32V103_DMA_CNTR7_OFFSET         0x0084
#define CH32V103_DMA_CNTR7                (CH32V103_DMA_BASE + CH32V103_DMA_CNTR7_OFFSET)
#define CH32V103_DMA_CNTR7_NDT            (16 <<  0) /* 01: Number of data to transfer */
#define CH32V103_DMA_CNTR7_NDT_MASK            (0xffff)
#define CH32V103_DMA_PADDR7_OFFSET        0x0088
#define CH32V103_DMA_PADDR7               (CH32V103_DMA_BASE + CH32V103_DMA_PADDR7_OFFSET)
#define CH32V103_DMA_PADDR7_PA            (32 <<  0) /* 01: Peripheral address */
#define CH32V103_DMA_PADDR7_PA_MASK            (0xffffffff)
#define CH32V103_DMA_MADDR7_OFFSET        0x008c
#define CH32V103_DMA_MADDR7               (CH32V103_DMA_BASE + CH32V103_DMA_MADDR7_OFFSET)
#define CH32V103_DMA_MADDR7_MA            (32 <<  0) /* 01: Memory address */
#define CH32V103_DMA_MADDR7_MA_MASK            (0xffffffff)

/* RTC - Real time clock */
#define CH32V103_RTC_BASE                 0x40002800
#define CH32V103_RTC_CTLRH_OFFSET         0x0000
#define CH32V103_RTC_CTLRH                (CH32V103_RTC_BASE + CH32V103_RTC_CTLRH_OFFSET)
#define CH32V103_RTC_CTLRH_SECIE          (1 <<  0) /* 01: Second interrupt Enable */
#define CH32V103_RTC_CTLRH_ALRIE          (1 <<  1) /* 02: Alarm interrupt Enable */
#define CH32V103_RTC_CTLRH_OWIE           (1 <<  2) /* 04: Overflow interrupt Enable */
#define CH32V103_RTC_CTLRL_OFFSET         0x0004
#define CH32V103_RTC_CTLRL                (CH32V103_RTC_BASE + CH32V103_RTC_CTLRL_OFFSET)
#define CH32V103_RTC_CTLRL_SECF           (1 <<  0) /* 01: Second Flag */
#define CH32V103_RTC_CTLRL_ALRF           (1 <<  1) /* 02: Alarm Flag */
#define CH32V103_RTC_CTLRL_OWF            (1 <<  2) /* 04: Overflow Flag */
#define CH32V103_RTC_CTLRL_RSF            (1 <<  3) /* 08: Registers Synchronized Flag */
#define CH32V103_RTC_CTLRL_CNF            (1 <<  4) /* 10: Configuration Flag */
#define CH32V103_RTC_CTLRL_RTOFF          (1 <<  5) /* 20: RTC operation OFF */
#define CH32V103_RTC_PSCRH_OFFSET         0x0008
#define CH32V103_RTC_PSCRH                (CH32V103_RTC_BASE + CH32V103_RTC_PSCRH_OFFSET)
#define CH32V103_RTC_PSCRH_PRLH           (4 <<  0) /* 01: RTC Prescaler Load Register High */
#define CH32V103_RTC_PSCRH_PRLH_MASK           (0x0f)
#define CH32V103_RTC_PSCRL_OFFSET         0x000c
#define CH32V103_RTC_PSCRL                (CH32V103_RTC_BASE + CH32V103_RTC_PSCRL_OFFSET)
#define CH32V103_RTC_PSCRL_PRLL           (16 <<  0) /* 01: RTC Prescaler Divider Register Low */
#define CH32V103_RTC_PSCRL_PRLL_MASK           (0xffff)
#define CH32V103_RTC_DIVH_OFFSET          0x0010
#define CH32V103_RTC_DIVH                 (CH32V103_RTC_BASE + CH32V103_RTC_DIVH_OFFSET)
#define CH32V103_RTC_DIVH_DIVH            (4 <<  0) /* 01: RTC prescaler divider register high */
#define CH32V103_RTC_DIVH_DIVH_MASK            (0x0f)
#define CH32V103_RTC_DIVL_OFFSET          0x0014
#define CH32V103_RTC_DIVL                 (CH32V103_RTC_BASE + CH32V103_RTC_DIVL_OFFSET)
#define CH32V103_RTC_DIVL_DIVL            (16 <<  0) /* 01: RTC prescaler divider register Low */
#define CH32V103_RTC_DIVL_DIVL_MASK            (0xffff)
#define CH32V103_RTC_CNTH_OFFSET          0x0018
#define CH32V103_RTC_CNTH                 (CH32V103_RTC_BASE + CH32V103_RTC_CNTH_OFFSET)
#define CH32V103_RTC_CNTH_CNTH            (16 <<  0) /* 01: RTC counter register high */
#define CH32V103_RTC_CNTH_CNTH_MASK            (0xffff)
#define CH32V103_RTC_CNTL_OFFSET          0x001c
#define CH32V103_RTC_CNTL                 (CH32V103_RTC_BASE + CH32V103_RTC_CNTL_OFFSET)
#define CH32V103_RTC_CNTL_CNTL            (16 <<  0) /* 01: RTC counter register Low */
#define CH32V103_RTC_CNTL_CNTL_MASK            (0xffff)
#define CH32V103_RTC_ALRMH_OFFSET         0x0020
#define CH32V103_RTC_ALRMH                (CH32V103_RTC_BASE + CH32V103_RTC_ALRMH_OFFSET)
#define CH32V103_RTC_ALRMH_ALRMH          (16 <<  0) /* 01: RTC alarm register high */
#define CH32V103_RTC_ALRMH_ALRMH_MASK          (0xffff)
#define CH32V103_RTC_ALRML_OFFSET         0x0024
#define CH32V103_RTC_ALRML                (CH32V103_RTC_BASE + CH32V103_RTC_ALRML_OFFSET)
#define CH32V103_RTC_ALRML_ALRML          (16 <<  0) /* 01: RTC alarm register low */
#define CH32V103_RTC_ALRML_ALRML_MASK          (0xffff)

/* BKP - Backup registers */
#define CH32V103_BKP_BASE                 0x40006c00
#define CH32V103_BKP_DATAR1_OFFSET        0x0004
#define CH32V103_BKP_DATAR1               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR1_OFFSET)
#define CH32V103_BKP_DATAR1_D1            (16 <<  0) /* 01: Backup data */
#define CH32V103_BKP_DATAR1_D1_MASK            (0xffff)
#define CH32V103_BKP_DATAR2_OFFSET        0x0008
#define CH32V103_BKP_DATAR2               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR2_OFFSET)
#define CH32V103_BKP_DATAR2_D2            (16 <<  0) /* 01: Backup data */
#define CH32V103_BKP_DATAR2_D2_MASK            (0xffff)
#define CH32V103_BKP_DATAR3_OFFSET        0x000c
#define CH32V103_BKP_DATAR3               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR3_OFFSET)
#define CH32V103_BKP_DATAR3_D3            (16 <<  0) /* 01: Backup data */
#define CH32V103_BKP_DATAR3_D3_MASK            (0xffff)
#define CH32V103_BKP_DATAR4_OFFSET        0x0010
#define CH32V103_BKP_DATAR4               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR4_OFFSET)
#define CH32V103_BKP_DATAR4_D4            (16 <<  0) /* 01: Backup data */
#define CH32V103_BKP_DATAR4_D4_MASK            (0xffff)
#define CH32V103_BKP_DATAR5_OFFSET        0x0014
#define CH32V103_BKP_DATAR5               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR5_OFFSET)
#define CH32V103_BKP_DATAR5_D5            (16 <<  0) /* 01: Backup data */
#define CH32V103_BKP_DATAR5_D5_MASK            (0xffff)
#define CH32V103_BKP_DATAR6_OFFSET        0x0018
#define CH32V103_BKP_DATAR6               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR6_OFFSET)
#define CH32V103_BKP_DATAR6_D6            (16 <<  0) /* 01: Backup data */
#define CH32V103_BKP_DATAR6_D6_MASK            (0xffff)
#define CH32V103_BKP_DATAR7_OFFSET        0x001c
#define CH32V103_BKP_DATAR7               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR7_OFFSET)
#define CH32V103_BKP_DATAR7_D7            (16 <<  0) /* 01: Backup data */
#define CH32V103_BKP_DATAR7_D7_MASK            (0xffff)
#define CH32V103_BKP_DATAR8_OFFSET        0x0020
#define CH32V103_BKP_DATAR8               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR8_OFFSET)
#define CH32V103_BKP_DATAR8_D8            (16 <<  0) /* 01: Backup data */
#define CH32V103_BKP_DATAR8_D8_MASK            (0xffff)
#define CH32V103_BKP_DATAR9_OFFSET        0x0024
#define CH32V103_BKP_DATAR9               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR9_OFFSET)
#define CH32V103_BKP_DATAR9_D9            (16 <<  0) /* 01: Backup data */
#define CH32V103_BKP_DATAR9_D9_MASK            (0xffff)
#define CH32V103_BKP_DATAR10_OFFSET       0x0028
#define CH32V103_BKP_DATAR10              (CH32V103_BKP_BASE + CH32V103_BKP_DATAR10_OFFSET)
#define CH32V103_BKP_DATAR10_D10          (16 <<  0) /* 01: Backup data */
#define CH32V103_BKP_DATAR10_D10_MASK          (0xffff)
#define CH32V103_BKP_OCTLR_OFFSET         0x002c
#define CH32V103_BKP_OCTLR                (CH32V103_BKP_BASE + CH32V103_BKP_OCTLR_OFFSET)
#define CH32V103_BKP_OCTLR_CAL            (7 <<  0) /* 01: Calibration value */
#define CH32V103_BKP_OCTLR_CAL_MASK            (0x7f)
#define CH32V103_BKP_OCTLR_CCO            (1 <<  7) /* 80: Calibration Clock Output */
#define CH32V103_BKP_OCTLR_ASOE           (1 <<  8) /* 100: Alarm or second output enable */
#define CH32V103_BKP_OCTLR_ASOS           (1 <<  9) /* 200: Alarm or second output selection */
#define CH32V103_BKP_TPCTLR_OFFSET        0x0030
#define CH32V103_BKP_TPCTLR               (CH32V103_BKP_BASE + CH32V103_BKP_TPCTLR_OFFSET)
#define CH32V103_BKP_TPCTLR_TPE           (1 <<  0) /* 01: Tamper pin enable */
#define CH32V103_BKP_TPCTLR_TPAL          (1 <<  1) /* 02: Tamper pin active level */
#define CH32V103_BKP_TPCSR_OFFSET         0x0034
#define CH32V103_BKP_TPCSR                (CH32V103_BKP_BASE + CH32V103_BKP_TPCSR_OFFSET)
#define CH32V103_BKP_TPCSR_CTE            (1 <<  0) /* 01: Clear Tamper event */
#define CH32V103_BKP_TPCSR_CTI            (1 <<  1) /* 02: Clear Tamper Interrupt */
#define CH32V103_BKP_TPCSR_TPIE           (1 <<  2) /* 04: Tamper Pin interrupt enable */
#define CH32V103_BKP_TPCSR_TEF            (1 <<  8) /* 100: Tamper Event Flag */
#define CH32V103_BKP_TPCSR_TIF            (1 <<  9) /* 200: Tamper Interrupt Flag */

/* IWDG - Independent watchdog */
#define CH32V103_IWDG_BASE                0x40003000
#define CH32V103_IWDG_CTLR_OFFSET         0x0000
#define CH32V103_IWDG_CTLR                (CH32V103_IWDG_BASE + CH32V103_IWDG_CTLR_OFFSET)
#define CH32V103_IWDG_CTLR_KEY            (16 <<  0) /* 01: Key value */
#define CH32V103_IWDG_CTLR_KEY_MASK            (0xffff)
#define CH32V103_IWDG_PSCR_OFFSET         0x0004
#define CH32V103_IWDG_PSCR                (CH32V103_IWDG_BASE + CH32V103_IWDG_PSCR_OFFSET)
#define CH32V103_IWDG_PSCR_PR             (3 <<  0) /* 01: Prescaler divider */
#define CH32V103_IWDG_PSCR_PR_MASK             (0x07)
#define CH32V103_IWDG_RLDR_OFFSET         0x0008
#define CH32V103_IWDG_RLDR                (CH32V103_IWDG_BASE + CH32V103_IWDG_RLDR_OFFSET)
#define CH32V103_IWDG_RLDR_RL             (12 <<  0) /* 01: Watchdog counter reload value */
#define CH32V103_IWDG_RLDR_RL_MASK             (0xfff)
#define CH32V103_IWDG_STATR_OFFSET        0x000c
#define CH32V103_IWDG_STATR               (CH32V103_IWDG_BASE + CH32V103_IWDG_STATR_OFFSET)
#define CH32V103_IWDG_STATR_PVU           (1 <<  0) /* 01: Watchdog prescaler value update */
#define CH32V103_IWDG_STATR_RVU           (1 <<  1) /* 02: Watchdog counter reload value update */

/* WWDG - Window watchdog */
#define CH32V103_WWDG_BASE                0x40002c00
#define CH32V103_WWDG_CTLR_OFFSET         0x0000
#define CH32V103_WWDG_CTLR                (CH32V103_WWDG_BASE + CH32V103_WWDG_CTLR_OFFSET)
#define CH32V103_WWDG_CTLR_T              (7 <<  0) /* 01: 7-bit counter (MSB to LSB) */
#define CH32V103_WWDG_CTLR_T_MASK              (0x7f)
#define CH32V103_WWDG_CTLR_WDGA           (1 <<  7) /* 80: Activation bit */
#define CH32V103_WWDG_CFGR_OFFSET         0x0004
#define CH32V103_WWDG_CFGR                (CH32V103_WWDG_BASE + CH32V103_WWDG_CFGR_OFFSET)
#define CH32V103_WWDG_CFGR_W              (7 <<  0) /* 01: 7-bit window value */
#define CH32V103_WWDG_CFGR_W_MASK              (0x7f)
#define CH32V103_WWDG_CFGR_WDGTB          (2 <<  7) /* 80: Timer Base */
#define CH32V103_WWDG_CFGR_WDGTB_MASK          (0x03)
#define CH32V103_WWDG_CFGR_EWI            (1 <<  9) /* 200: Early Wakeup Interrupt */
#define CH32V103_WWDG_STATR_OFFSET        0x0008
#define CH32V103_WWDG_STATR               (CH32V103_WWDG_BASE + CH32V103_WWDG_STATR_OFFSET)
#define CH32V103_WWDG_STATR_WEIF          (1 <<  0) /* 01: Early Wakeup Interrupt Flag */

/* TIM1 - Advanced timer */
#define CH32V103_TIM1_BASE                0x40012c00
#define CH32V103_TIM1_CTLR1_OFFSET        0x0000
#define CH32V103_TIM1_CTLR1               (CH32V103_TIM1_BASE + CH32V103_TIM1_CTLR1_OFFSET)
#define CH32V103_TIM1_CTLR1_CKD           (2 <<  8) /* 100: Clock division */
#define CH32V103_TIM1_CTLR1_CKD_MASK           (0x03)
#define CH32V103_TIM1_CTLR1_ARPE          (1 <<  7) /* 80: Auto-reload preload enable */
#define CH32V103_TIM1_CTLR1_CMS           (2 <<  5) /* 20: Center-aligned mode selection */
#define CH32V103_TIM1_CTLR1_CMS_MASK           (0x03)
#define CH32V103_TIM1_CTLR1_DIR           (1 <<  4) /* 10: Direction */
#define CH32V103_TIM1_CTLR1_OPM           (1 <<  3) /* 08: One-pulse mode */
#define CH32V103_TIM1_CTLR1_URS           (1 <<  2) /* 04: Update request source */
#define CH32V103_TIM1_CTLR1_UDIS          (1 <<  1) /* 02: Update disable */
#define CH32V103_TIM1_CTLR1_CEN           (1 <<  0) /* 01: Counter enable */
#define CH32V103_TIM1_CTLR2_OFFSET        0x0004
#define CH32V103_TIM1_CTLR2               (CH32V103_TIM1_BASE + CH32V103_TIM1_CTLR2_OFFSET)
#define CH32V103_TIM1_CTLR2_OIS4          (1 << 14) /* 4000: Output Idle state 4 */
#define CH32V103_TIM1_CTLR2_OIS3N         (1 << 13) /* 2000: Output Idle state 3 */
#define CH32V103_TIM1_CTLR2_OIS3          (1 << 12) /* 1000: Output Idle state 3 */
#define CH32V103_TIM1_CTLR2_OIS2N         (1 << 11) /* 800: Output Idle state 2 */
#define CH32V103_TIM1_CTLR2_OIS2          (1 << 10) /* 400: Output Idle state 2 */
#define CH32V103_TIM1_CTLR2_OIS1N         (1 <<  9) /* 200: Output Idle state 1 */
#define CH32V103_TIM1_CTLR2_OIS1          (1 <<  8) /* 100: Output Idle state 1 */
#define CH32V103_TIM1_CTLR2_TI1S          (1 <<  7) /* 80: TI1 selection */
#define CH32V103_TIM1_CTLR2_MMS           (3 <<  4) /* 10: Master mode selection */
#define CH32V103_TIM1_CTLR2_MMS_MASK           (0x07)
#define CH32V103_TIM1_CTLR2_CCDS          (1 <<  3) /* 08: Capture/compare DMA selection */
#define CH32V103_TIM1_CTLR2_CCUS          (1 <<  2) /* 04: Capture/compare control update selection */
#define CH32V103_TIM1_CTLR2_CCPC          (1 <<  0) /* 01: Capture/compare preloaded control */
#define CH32V103_TIM1_SMCFGR_OFFSET       0x0008
#define CH32V103_TIM1_SMCFGR              (CH32V103_TIM1_BASE + CH32V103_TIM1_SMCFGR_OFFSET)
#define CH32V103_TIM1_SMCFGR_ETP          (1 << 15) /* 8000: External trigger polarity */
#define CH32V103_TIM1_SMCFGR_ECE          (1 << 14) /* 4000: External clock enable */
#define CH32V103_TIM1_SMCFGR_ETPS         (2 << 12) /* 1000: External trigger prescaler */
#define CH32V103_TIM1_SMCFGR_ETPS_MASK         (0x03)
#define CH32V103_TIM1_SMCFGR_ETF          (4 <<  8) /* 100: External trigger filter */
#define CH32V103_TIM1_SMCFGR_ETF_MASK          (0x0f)
#define CH32V103_TIM1_SMCFGR_MSM          (1 <<  7) /* 80: Master/Slave mode */
#define CH32V103_TIM1_SMCFGR_TS           (3 <<  4) /* 10: Trigger selection */
#define CH32V103_TIM1_SMCFGR_TS_MASK           (0x07)
#define CH32V103_TIM1_SMCFGR_SMS          (3 <<  0) /* 01: Slave mode selection */
#define CH32V103_TIM1_SMCFGR_SMS_MASK          (0x07)
#define CH32V103_TIM1_DMAINTENR_OFFSET    0x000c
#define CH32V103_TIM1_DMAINTENR           (CH32V103_TIM1_BASE + CH32V103_TIM1_DMAINTENR_OFFSET)
#define CH32V103_TIM1_DMAINTENR_TDE       (1 << 14) /* 4000: Trigger DMA request enable */
#define CH32V103_TIM1_DMAINTENR_COMDE     (1 << 13) /* 2000: COM DMA request enable */
#define CH32V103_TIM1_DMAINTENR_CC4DE     (1 << 12) /* 1000: Capture/Compare 4 DMA request enable */
#define CH32V103_TIM1_DMAINTENR_CC3DE     (1 << 11) /* 800: Capture/Compare 3 DMA request enable */
#define CH32V103_TIM1_DMAINTENR_CC2DE     (1 << 10) /* 400: Capture/Compare 2 DMA request enable */
#define CH32V103_TIM1_DMAINTENR_CC1DE     (1 <<  9) /* 200: Capture/Compare 1 DMA request enable */
#define CH32V103_TIM1_DMAINTENR_UDE       (1 <<  8) /* 100: Update DMA request enable */
#define CH32V103_TIM1_DMAINTENR_TIE       (1 <<  6) /* 40: Trigger interrupt enable */
#define CH32V103_TIM1_DMAINTENR_CC4IE     (1 <<  4) /* 10: Capture/Compare 4 interrupt enable */
#define CH32V103_TIM1_DMAINTENR_CC3IE     (1 <<  3) /* 08: Capture/Compare 3 interrupt enable */
#define CH32V103_TIM1_DMAINTENR_CC2IE     (1 <<  2) /* 04: Capture/Compare 2 interrupt enable */
#define CH32V103_TIM1_DMAINTENR_CC1IE     (1 <<  1) /* 02: Capture/Compare 1 interrupt enable */
#define CH32V103_TIM1_DMAINTENR_UIE       (1 <<  0) /* 01: Update interrupt enable */
#define CH32V103_TIM1_DMAINTENR_BIE       (1 <<  7) /* 80: Break interrupt enable */
#define CH32V103_TIM1_DMAINTENR_COMIE     (1 <<  5) /* 20: COM interrupt enable */
#define CH32V103_TIM1_INTFR_OFFSET        0x0010
#define CH32V103_TIM1_INTFR               (CH32V103_TIM1_BASE + CH32V103_TIM1_INTFR_OFFSET)
#define CH32V103_TIM1_INTFR_CC4OF         (1 << 12) /* 1000: Capture/Compare 4 overcapture flag */
#define CH32V103_TIM1_INTFR_CC3OF         (1 << 11) /* 800: Capture/Compare 3 overcapture flag */
#define CH32V103_TIM1_INTFR_CC2OF         (1 << 10) /* 400: Capture/compare 2 overcapture flag */
#define CH32V103_TIM1_INTFR_CC1OF         (1 <<  9) /* 200: Capture/Compare 1 overcapture flag */
#define CH32V103_TIM1_INTFR_BIF           (1 <<  7) /* 80: Break interrupt flag */
#define CH32V103_TIM1_INTFR_TIF           (1 <<  6) /* 40: Trigger interrupt flag */
#define CH32V103_TIM1_INTFR_COMIF         (1 <<  5) /* 20: COM interrupt flag */
#define CH32V103_TIM1_INTFR_CC4IF         (1 <<  4) /* 10: Capture/Compare 4 interrupt flag */
#define CH32V103_TIM1_INTFR_CC3IF         (1 <<  3) /* 08: Capture/Compare 3 interrupt flag */
#define CH32V103_TIM1_INTFR_CC2IF         (1 <<  2) /* 04: Capture/Compare 2 interrupt flag */
#define CH32V103_TIM1_INTFR_CC1IF         (1 <<  1) /* 02: Capture/compare 1 interrupt flag */
#define CH32V103_TIM1_INTFR_UIF           (1 <<  0) /* 01: Update interrupt flag */
#define CH32V103_TIM1_SWEVGR_OFFSET       0x0014
#define CH32V103_TIM1_SWEVGR              (CH32V103_TIM1_BASE + CH32V103_TIM1_SWEVGR_OFFSET)
#define CH32V103_TIM1_SWEVGR_BG           (1 <<  7) /* 80: Break generation */
#define CH32V103_TIM1_SWEVGR_TG           (1 <<  6) /* 40: Trigger generation */
#define CH32V103_TIM1_SWEVGR_COMG         (1 <<  5) /* 20: Capture/Compare control update generation */
#define CH32V103_TIM1_SWEVGR_CC4G         (1 <<  4) /* 10: Capture/compare 4 generation */
#define CH32V103_TIM1_SWEVGR_CC3G         (1 <<  3) /* 08: Capture/compare 3 generation */
#define CH32V103_TIM1_SWEVGR_CC2G         (1 <<  2) /* 04: Capture/compare 2 generation */
#define CH32V103_TIM1_SWEVGR_CC1G         (1 <<  1) /* 02: Capture/compare 1 generation */
#define CH32V103_TIM1_SWEVGR_UG           (1 <<  0) /* 01: Update generation */
#define CH32V103_TIM1_CHCTLR1_Output_OFFSET 0x0018
#define CH32V103_TIM1_CHCTLR1_Output      (CH32V103_TIM1_BASE + CH32V103_TIM1_CHCTLR1_Output_OFFSET)
#define CH32V103_TIM1_CHCTLR1_Output_OC2CE (1 << 15) /* 8000: Output Compare 2 clear enable */
#define CH32V103_TIM1_CHCTLR1_Output_OC2M (3 << 12) /* 1000: Output Compare 2 mode */
#define CH32V103_TIM1_CHCTLR1_Output_OC2M_MASK (0x07)
#define CH32V103_TIM1_CHCTLR1_Output_OC2PE (1 << 11) /* 800: Output Compare 2 preload enable */
#define CH32V103_TIM1_CHCTLR1_Output_OC2FE (1 << 10) /* 400: Output Compare 2 fast enable */
#define CH32V103_TIM1_CHCTLR1_Output_CC2S (2 <<  8) /* 100: Capture/Compare 2 selection */
#define CH32V103_TIM1_CHCTLR1_Output_CC2S_MASK (0x03)
#define CH32V103_TIM1_CHCTLR1_Output_OC1CE (1 <<  7) /* 80: Output Compare 1 clear enable */
#define CH32V103_TIM1_CHCTLR1_Output_OC1M (3 <<  4) /* 10: Output Compare 1 mode */
#define CH32V103_TIM1_CHCTLR1_Output_OC1M_MASK (0x07)
#define CH32V103_TIM1_CHCTLR1_Output_OC1PE (1 <<  3) /* 08: Output Compare 1 preload enable */
#define CH32V103_TIM1_CHCTLR1_Output_OC1FE (1 <<  2) /* 04: Output Compare 1 fast enable */
#define CH32V103_TIM1_CHCTLR1_Output_CC1S (2 <<  0) /* 01: Capture/Compare 1 selection */
#define CH32V103_TIM1_CHCTLR1_Output_CC1S_MASK (0x03)
#define CH32V103_TIM1_CHCTLR1_Input_OFFSET 0x0018
#define CH32V103_TIM1_CHCTLR1_Input       (CH32V103_TIM1_BASE + CH32V103_TIM1_CHCTLR1_Input_OFFSET)
#define CH32V103_TIM1_CHCTLR1_Input_IC2F  (4 << 12) /* 1000: Input capture 2 filter */
#define CH32V103_TIM1_CHCTLR1_Input_IC2F_MASK  (0x0f)
#define CH32V103_TIM1_CHCTLR1_Input_IC2PSC (2 << 10) /* 400: Input capture 2 prescaler */
#define CH32V103_TIM1_CHCTLR1_Input_IC2PSC_MASK (0x03)
#define CH32V103_TIM1_CHCTLR1_Input_CC2S  (2 <<  8) /* 100: Capture/Compare 2 selection */
#define CH32V103_TIM1_CHCTLR1_Input_CC2S_MASK  (0x03)
#define CH32V103_TIM1_CHCTLR1_Input_IC1F  (4 <<  4) /* 10: Input capture 1 filter */
#define CH32V103_TIM1_CHCTLR1_Input_IC1F_MASK  (0x0f)
#define CH32V103_TIM1_CHCTLR1_Input_IC1PSC (2 <<  2) /* 04: Input capture 1 prescaler */
#define CH32V103_TIM1_CHCTLR1_Input_IC1PSC_MASK (0x03)
#define CH32V103_TIM1_CHCTLR1_Input_CC1S  (2 <<  0) /* 01: Capture/Compare 1 selection */
#define CH32V103_TIM1_CHCTLR1_Input_CC1S_MASK  (0x03)
#define CH32V103_TIM1_CHCTLR2_Output_OFFSET 0x001c
#define CH32V103_TIM1_CHCTLR2_Output      (CH32V103_TIM1_BASE + CH32V103_TIM1_CHCTLR2_Output_OFFSET)
#define CH32V103_TIM1_CHCTLR2_Output_OC4CE (1 << 15) /* 8000: Output compare 4 clear enable */
#define CH32V103_TIM1_CHCTLR2_Output_OC4M (3 << 12) /* 1000: Output compare 4 mode */
#define CH32V103_TIM1_CHCTLR2_Output_OC4M_MASK (0x07)
#define CH32V103_TIM1_CHCTLR2_Output_OC4PE (1 << 11) /* 800: Output compare 4 preload enable */
#define CH32V103_TIM1_CHCTLR2_Output_OC4FE (1 << 10) /* 400: Output compare 4 fast enable */
#define CH32V103_TIM1_CHCTLR2_Output_CC4S (2 <<  8) /* 100: Capture/Compare 4 selection */
#define CH32V103_TIM1_CHCTLR2_Output_CC4S_MASK (0x03)
#define CH32V103_TIM1_CHCTLR2_Output_OC3CE (1 <<  7) /* 80: Output compare 3 clear enable */
#define CH32V103_TIM1_CHCTLR2_Output_OC3M (3 <<  4) /* 10: Output compare 3 mode */
#define CH32V103_TIM1_CHCTLR2_Output_OC3M_MASK (0x07)
#define CH32V103_TIM1_CHCTLR2_Output_OC3PE (1 <<  3) /* 08: Output compare 3 preload enable */
#define CH32V103_TIM1_CHCTLR2_Output_OC3FE (1 <<  2) /* 04: Output compare 3 fast enable */
#define CH32V103_TIM1_CHCTLR2_Output_CC3S (2 <<  0) /* 01: Capture/Compare 3 selection */
#define CH32V103_TIM1_CHCTLR2_Output_CC3S_MASK (0x03)
#define CH32V103_TIM1_CHCTLR2_Input_OFFSET 0x001c
#define CH32V103_TIM1_CHCTLR2_Input       (CH32V103_TIM1_BASE + CH32V103_TIM1_CHCTLR2_Input_OFFSET)
#define CH32V103_TIM1_CHCTLR2_Input_IC4F  (4 << 12) /* 1000: Input capture 4 filter */
#define CH32V103_TIM1_CHCTLR2_Input_IC4F_MASK  (0x0f)
#define CH32V103_TIM1_CHCTLR2_Input_IC4PSC (2 << 10) /* 400: Input capture 4 prescaler */
#define CH32V103_TIM1_CHCTLR2_Input_IC4PSC_MASK (0x03)
#define CH32V103_TIM1_CHCTLR2_Input_CC4S  (2 <<  8) /* 100: Capture/Compare 4 selection */
#define CH32V103_TIM1_CHCTLR2_Input_CC4S_MASK  (0x03)
#define CH32V103_TIM1_CHCTLR2_Input_IC3F  (4 <<  4) /* 10: Input capture 3 filter */
#define CH32V103_TIM1_CHCTLR2_Input_IC3F_MASK  (0x0f)
#define CH32V103_TIM1_CHCTLR2_Input_IC3PSC (2 <<  2) /* 04: Input capture 3 prescaler */
#define CH32V103_TIM1_CHCTLR2_Input_IC3PSC_MASK (0x03)
#define CH32V103_TIM1_CHCTLR2_Input_CC3S  (2 <<  0) /* 01: Capture/compare 3 selection */
#define CH32V103_TIM1_CHCTLR2_Input_CC3S_MASK  (0x03)
#define CH32V103_TIM1_CCER_OFFSET         0x0020
#define CH32V103_TIM1_CCER                (CH32V103_TIM1_BASE + CH32V103_TIM1_CCER_OFFSET)
#define CH32V103_TIM1_CCER_CC4P           (1 << 13) /* 2000: Capture/Compare 3 output Polarity */
#define CH32V103_TIM1_CCER_CC4E           (1 << 12) /* 1000: Capture/Compare 4 output enable */
#define CH32V103_TIM1_CCER_CC3NP          (1 << 11) /* 800: Capture/Compare 3 output Polarity */
#define CH32V103_TIM1_CCER_CC3NE          (1 << 10) /* 400: Capture/Compare 3 complementary output enable */
#define CH32V103_TIM1_CCER_CC3P           (1 <<  9) /* 200: Capture/Compare 3 output Polarity */
#define CH32V103_TIM1_CCER_CC3E           (1 <<  8) /* 100: Capture/Compare 3 output enable */
#define CH32V103_TIM1_CCER_CC2NP          (1 <<  7) /* 80: Capture/Compare 2 output Polarity */
#define CH32V103_TIM1_CCER_CC2NE          (1 <<  6) /* 40: Capture/Compare 2 complementary output enable */
#define CH32V103_TIM1_CCER_CC2P           (1 <<  5) /* 20: Capture/Compare 2 output Polarity */
#define CH32V103_TIM1_CCER_CC2E           (1 <<  4) /* 10: Capture/Compare 2 output enable */
#define CH32V103_TIM1_CCER_CC1NP          (1 <<  3) /* 08: Capture/Compare 1 output Polarity */
#define CH32V103_TIM1_CCER_CC1NE          (1 <<  2) /* 04: Capture/Compare 1 complementary output enable */
#define CH32V103_TIM1_CCER_CC1P           (1 <<  1) /* 02: Capture/Compare 1 output Polarity */
#define CH32V103_TIM1_CCER_CC1E           (1 <<  0) /* 01: Capture/Compare 1 output enable */
#define CH32V103_TIM1_CNT_OFFSET          0x0024
#define CH32V103_TIM1_CNT                 (CH32V103_TIM1_BASE + CH32V103_TIM1_CNT_OFFSET)
#define CH32V103_TIM1_CNT_CNT             (16 <<  0) /* 01: counter value */
#define CH32V103_TIM1_CNT_CNT_MASK             (0xffff)
#define CH32V103_TIM1_PSC_OFFSET          0x0028
#define CH32V103_TIM1_PSC                 (CH32V103_TIM1_BASE + CH32V103_TIM1_PSC_OFFSET)
#define CH32V103_TIM1_PSC_PSC             (16 <<  0) /* 01: Prescaler value */
#define CH32V103_TIM1_PSC_PSC_MASK             (0xffff)
#define CH32V103_TIM1_ATRLR_OFFSET        0x002c
#define CH32V103_TIM1_ATRLR               (CH32V103_TIM1_BASE + CH32V103_TIM1_ATRLR_OFFSET)
#define CH32V103_TIM1_ATRLR_ARR           (16 <<  0) /* 01: Auto-reload value */
#define CH32V103_TIM1_ATRLR_ARR_MASK           (0xffff)
#define CH32V103_TIM1_CH1CVR_OFFSET       0x0034
#define CH32V103_TIM1_CH1CVR              (CH32V103_TIM1_BASE + CH32V103_TIM1_CH1CVR_OFFSET)
#define CH32V103_TIM1_CH1CVR_CCR1         (16 <<  0) /* 01: Capture/Compare 1 value */
#define CH32V103_TIM1_CH1CVR_CCR1_MASK         (0xffff)
#define CH32V103_TIM1_CH2CVR_OFFSET       0x0038
#define CH32V103_TIM1_CH2CVR              (CH32V103_TIM1_BASE + CH32V103_TIM1_CH2CVR_OFFSET)
#define CH32V103_TIM1_CH2CVR_CCR2         (16 <<  0) /* 01: Capture/Compare 2 value */
#define CH32V103_TIM1_CH2CVR_CCR2_MASK         (0xffff)
#define CH32V103_TIM1_CH3CVR_OFFSET       0x003c
#define CH32V103_TIM1_CH3CVR              (CH32V103_TIM1_BASE + CH32V103_TIM1_CH3CVR_OFFSET)
#define CH32V103_TIM1_CH3CVR_CCR3         (16 <<  0) /* 01: Capture/Compare value */
#define CH32V103_TIM1_CH3CVR_CCR3_MASK         (0xffff)
#define CH32V103_TIM1_CH4CVR_OFFSET       0x0040
#define CH32V103_TIM1_CH4CVR              (CH32V103_TIM1_BASE + CH32V103_TIM1_CH4CVR_OFFSET)
#define CH32V103_TIM1_CH4CVR_CCR4         (16 <<  0) /* 01: Capture/Compare value */
#define CH32V103_TIM1_CH4CVR_CCR4_MASK         (0xffff)
#define CH32V103_TIM1_DMACFGR_OFFSET      0x0048
#define CH32V103_TIM1_DMACFGR             (CH32V103_TIM1_BASE + CH32V103_TIM1_DMACFGR_OFFSET)
#define CH32V103_TIM1_DMACFGR_DBL         (5 <<  8) /* 100: DMA burst length */
#define CH32V103_TIM1_DMACFGR_DBL_MASK         (0x1f)
#define CH32V103_TIM1_DMACFGR_DBA         (5 <<  0) /* 01: DMA base address */
#define CH32V103_TIM1_DMACFGR_DBA_MASK         (0x1f)
#define CH32V103_TIM1_DMAR_OFFSET         0x004c
#define CH32V103_TIM1_DMAR                (CH32V103_TIM1_BASE + CH32V103_TIM1_DMAR_OFFSET)
#define CH32V103_TIM1_DMAR_DMAB           (16 <<  0) /* 01: DMA register for burst accesses */
#define CH32V103_TIM1_DMAR_DMAB_MASK           (0xffff)
#define CH32V103_TIM1_RPTCR_OFFSET        0x0030
#define CH32V103_TIM1_RPTCR               (CH32V103_TIM1_BASE + CH32V103_TIM1_RPTCR_OFFSET)
#define CH32V103_TIM1_RPTCR_REP           (8 <<  0) /* 01: Repetition counter value */
#define CH32V103_TIM1_RPTCR_REP_MASK           (0xff)
#define CH32V103_TIM1_BDTR_OFFSET         0x0044
#define CH32V103_TIM1_BDTR                (CH32V103_TIM1_BASE + CH32V103_TIM1_BDTR_OFFSET)
#define CH32V103_TIM1_BDTR_MOE            (1 << 15) /* 8000: Main output enable */
#define CH32V103_TIM1_BDTR_AOE            (1 << 14) /* 4000: Automatic output enable */
#define CH32V103_TIM1_BDTR_BKP            (1 << 13) /* 2000: Break polarity */
#define CH32V103_TIM1_BDTR_BKE            (1 << 12) /* 1000: Break enable */
#define CH32V103_TIM1_BDTR_OSSR           (1 << 11) /* 800: Off-state selection for Run mode */
#define CH32V103_TIM1_BDTR_OSSI           (1 << 10) /* 400: Off-state selection for Idle mode */
#define CH32V103_TIM1_BDTR_LOCK           (2 <<  8) /* 100: Lock configuration */
#define CH32V103_TIM1_BDTR_LOCK_MASK           (0x03)
#define CH32V103_TIM1_BDTR_DTG            (8 <<  0) /* 01: Dead-time generator setup */
#define CH32V103_TIM1_BDTR_DTG_MASK            (0xff)

/* TIM2 - General purpose timer */
#define CH32V103_TIM2_BASE                0x40000000
#define CH32V103_TIM2_CTLR1_OFFSET        0x0000
#define CH32V103_TIM2_CTLR1               (CH32V103_TIM2_BASE + CH32V103_TIM2_CTLR1_OFFSET)
#define CH32V103_TIM2_CTLR1_CKD           (2 <<  8) /* 100: Clock division */
#define CH32V103_TIM2_CTLR1_CKD_MASK           (0x03)
#define CH32V103_TIM2_CTLR1_ARPE          (1 <<  7) /* 80: Auto-reload preload enable */
#define CH32V103_TIM2_CTLR1_CMS           (2 <<  5) /* 20: Center-aligned mode selection */
#define CH32V103_TIM2_CTLR1_CMS_MASK           (0x03)
#define CH32V103_TIM2_CTLR1_DIR           (1 <<  4) /* 10: Direction */
#define CH32V103_TIM2_CTLR1_OPM           (1 <<  3) /* 08: One-pulse mode */
#define CH32V103_TIM2_CTLR1_URS           (1 <<  2) /* 04: Update request source */
#define CH32V103_TIM2_CTLR1_UDIS          (1 <<  1) /* 02: Update disable */
#define CH32V103_TIM2_CTLR1_CEN           (1 <<  0) /* 01: Counter enable */
#define CH32V103_TIM2_CTLR2_OFFSET        0x0004
#define CH32V103_TIM2_CTLR2               (CH32V103_TIM2_BASE + CH32V103_TIM2_CTLR2_OFFSET)
#define CH32V103_TIM2_CTLR2_TI1S          (1 <<  7) /* 80: TI1 selection */
#define CH32V103_TIM2_CTLR2_MMS           (3 <<  4) /* 10: Master mode selection */
#define CH32V103_TIM2_CTLR2_MMS_MASK           (0x07)
#define CH32V103_TIM2_CTLR2_CCDS          (1 <<  3) /* 08: Capture/compare DMA selection */
#define CH32V103_TIM2_CTLR2_CCUS          (1 <<  2) /* 04: Capture/compare control update selection */
#define CH32V103_TIM2_CTLR2_CCPC          (1 <<  0) /* 01: Capture/compare preloaded control */
#define CH32V103_TIM2_SMCFGR_OFFSET       0x0008
#define CH32V103_TIM2_SMCFGR              (CH32V103_TIM2_BASE + CH32V103_TIM2_SMCFGR_OFFSET)
#define CH32V103_TIM2_SMCFGR_ETP          (1 << 15) /* 8000: External trigger polarity */
#define CH32V103_TIM2_SMCFGR_ECE          (1 << 14) /* 4000: External clock enable */
#define CH32V103_TIM2_SMCFGR_ETPS         (2 << 12) /* 1000: External trigger prescaler */
#define CH32V103_TIM2_SMCFGR_ETPS_MASK         (0x03)
#define CH32V103_TIM2_SMCFGR_ETF          (4 <<  8) /* 100: External trigger filter */
#define CH32V103_TIM2_SMCFGR_ETF_MASK          (0x0f)
#define CH32V103_TIM2_SMCFGR_MSM          (1 <<  7) /* 80: Master/Slave mode */
#define CH32V103_TIM2_SMCFGR_TS           (3 <<  4) /* 10: Trigger selection */
#define CH32V103_TIM2_SMCFGR_TS_MASK           (0x07)
#define CH32V103_TIM2_SMCFGR_SMS          (3 <<  0) /* 01: Slave mode selection */
#define CH32V103_TIM2_SMCFGR_SMS_MASK          (0x07)
#define CH32V103_TIM2_DMAINTENR_OFFSET    0x000c
#define CH32V103_TIM2_DMAINTENR           (CH32V103_TIM2_BASE + CH32V103_TIM2_DMAINTENR_OFFSET)
#define CH32V103_TIM2_DMAINTENR_TDE       (1 << 14) /* 4000: Trigger DMA request enable */
#define CH32V103_TIM2_DMAINTENR_CC4DE     (1 << 12) /* 1000: Capture/Compare 4 DMA request enable */
#define CH32V103_TIM2_DMAINTENR_CC3DE     (1 << 11) /* 800: Capture/Compare 3 DMA request enable */
#define CH32V103_TIM2_DMAINTENR_CC2DE     (1 << 10) /* 400: Capture/Compare 2 DMA request enable */
#define CH32V103_TIM2_DMAINTENR_CC1DE     (1 <<  9) /* 200: Capture/Compare 1 DMA request enable */
#define CH32V103_TIM2_DMAINTENR_UDE       (1 <<  8) /* 100: Update DMA request enable */
#define CH32V103_TIM2_DMAINTENR_TIE       (1 <<  6) /* 40: Trigger interrupt enable */
#define CH32V103_TIM2_DMAINTENR_CC4IE     (1 <<  4) /* 10: Capture/Compare 4 interrupt enable */
#define CH32V103_TIM2_DMAINTENR_CC3IE     (1 <<  3) /* 08: Capture/Compare 3 interrupt enable */
#define CH32V103_TIM2_DMAINTENR_CC2IE     (1 <<  2) /* 04: Capture/Compare 2 interrupt enable */
#define CH32V103_TIM2_DMAINTENR_CC1IE     (1 <<  1) /* 02: Capture/Compare 1 interrupt enable */
#define CH32V103_TIM2_DMAINTENR_UIE       (1 <<  0) /* 01: Update interrupt enable */
#define CH32V103_TIM2_INTFR_OFFSET        0x0010
#define CH32V103_TIM2_INTFR               (CH32V103_TIM2_BASE + CH32V103_TIM2_INTFR_OFFSET)
#define CH32V103_TIM2_INTFR_CC4OF         (1 << 12) /* 1000: Capture/Compare 4 overcapture flag */
#define CH32V103_TIM2_INTFR_CC3OF         (1 << 11) /* 800: Capture/Compare 3 overcapture flag */
#define CH32V103_TIM2_INTFR_CC2OF         (1 << 10) /* 400: Capture/compare 2 overcapture flag */
#define CH32V103_TIM2_INTFR_CC1OF         (1 <<  9) /* 200: Capture/Compare 1 overcapture flag */
#define CH32V103_TIM2_INTFR_TIF           (1 <<  6) /* 40: Trigger interrupt flag */
#define CH32V103_TIM2_INTFR_CC4IF         (1 <<  4) /* 10: Capture/Compare 4 interrupt flag */
#define CH32V103_TIM2_INTFR_CC3IF         (1 <<  3) /* 08: Capture/Compare 3 interrupt flag */
#define CH32V103_TIM2_INTFR_CC2IF         (1 <<  2) /* 04: Capture/Compare 2 interrupt flag */
#define CH32V103_TIM2_INTFR_CC1IF         (1 <<  1) /* 02: Capture/compare 1 interrupt flag */
#define CH32V103_TIM2_INTFR_UIF           (1 <<  0) /* 01: Update interrupt flag */
#define CH32V103_TIM2_SWEVGR_OFFSET       0x0014
#define CH32V103_TIM2_SWEVGR              (CH32V103_TIM2_BASE + CH32V103_TIM2_SWEVGR_OFFSET)
#define CH32V103_TIM2_SWEVGR_BG           (1 <<  7) /* 80: Break generation */
#define CH32V103_TIM2_SWEVGR_TG           (1 <<  6) /* 40: Trigger generation */
#define CH32V103_TIM2_SWEVGR_COMG         (1 <<  5) /* 20: Capture/Compare control update generation */
#define CH32V103_TIM2_SWEVGR_CC4G         (1 <<  4) /* 10: Capture/compare 4 generation */
#define CH32V103_TIM2_SWEVGR_CC3G         (1 <<  3) /* 08: Capture/compare 3 generation */
#define CH32V103_TIM2_SWEVGR_CC2G         (1 <<  2) /* 04: Capture/compare 2 generation */
#define CH32V103_TIM2_SWEVGR_CC1G         (1 <<  1) /* 02: Capture/compare 1 generation */
#define CH32V103_TIM2_SWEVGR_UG           (1 <<  0) /* 01: Update generation */
#define CH32V103_TIM2_CHCTLR1_Output_OFFSET 0x0018
#define CH32V103_TIM2_CHCTLR1_Output      (CH32V103_TIM2_BASE + CH32V103_TIM2_CHCTLR1_Output_OFFSET)
#define CH32V103_TIM2_CHCTLR1_Output_OC2CE (1 << 15) /* 8000: Output compare 2 clear enable */
#define CH32V103_TIM2_CHCTLR1_Output_OC2M (3 << 12) /* 1000: Output compare 2 mode */
#define CH32V103_TIM2_CHCTLR1_Output_OC2M_MASK (0x07)
#define CH32V103_TIM2_CHCTLR1_Output_OC2PE (1 << 11) /* 800: Output compare 2 preload enable */
#define CH32V103_TIM2_CHCTLR1_Output_OC2FE (1 << 10) /* 400: Output compare 2 fast enable */
#define CH32V103_TIM2_CHCTLR1_Output_CC2S (2 <<  8) /* 100: Capture/Compare 2 selection */
#define CH32V103_TIM2_CHCTLR1_Output_CC2S_MASK (0x03)
#define CH32V103_TIM2_CHCTLR1_Output_OC1CE (1 <<  7) /* 80: Output compare 1 clear enable */
#define CH32V103_TIM2_CHCTLR1_Output_OC1M (3 <<  4) /* 10: Output compare 1 mode */
#define CH32V103_TIM2_CHCTLR1_Output_OC1M_MASK (0x07)
#define CH32V103_TIM2_CHCTLR1_Output_OC1PE (1 <<  3) /* 08: Output compare 1 preload enable */
#define CH32V103_TIM2_CHCTLR1_Output_OC1FE (1 <<  2) /* 04: Output compare 1 fast enable */
#define CH32V103_TIM2_CHCTLR1_Output_CC1S (2 <<  0) /* 01: Capture/Compare 1 selection */
#define CH32V103_TIM2_CHCTLR1_Output_CC1S_MASK (0x03)
#define CH32V103_TIM2_CHCTLR1_Input_OFFSET 0x0018
#define CH32V103_TIM2_CHCTLR1_Input       (CH32V103_TIM2_BASE + CH32V103_TIM2_CHCTLR1_Input_OFFSET)
#define CH32V103_TIM2_CHCTLR1_Input_IC2F  (4 << 12) /* 1000: Input capture 2 filter */
#define CH32V103_TIM2_CHCTLR1_Input_IC2F_MASK  (0x0f)
#define CH32V103_TIM2_CHCTLR1_Input_IC2PSC (2 << 10) /* 400: Input capture 2 prescaler */
#define CH32V103_TIM2_CHCTLR1_Input_IC2PSC_MASK (0x03)
#define CH32V103_TIM2_CHCTLR1_Input_CC2S  (2 <<  8) /* 100: Capture/compare 2 selection */
#define CH32V103_TIM2_CHCTLR1_Input_CC2S_MASK  (0x03)
#define CH32V103_TIM2_CHCTLR1_Input_IC1F  (4 <<  4) /* 10: Input capture 1 filter */
#define CH32V103_TIM2_CHCTLR1_Input_IC1F_MASK  (0x0f)
#define CH32V103_TIM2_CHCTLR1_Input_IC1PSC (2 <<  2) /* 04: Input capture 1 prescaler */
#define CH32V103_TIM2_CHCTLR1_Input_IC1PSC_MASK (0x03)
#define CH32V103_TIM2_CHCTLR1_Input_CC1S  (2 <<  0) /* 01: Capture/Compare 1 selection */
#define CH32V103_TIM2_CHCTLR1_Input_CC1S_MASK  (0x03)
#define CH32V103_TIM2_CHCTLR2_Output_OFFSET 0x001c
#define CH32V103_TIM2_CHCTLR2_Output      (CH32V103_TIM2_BASE + CH32V103_TIM2_CHCTLR2_Output_OFFSET)
#define CH32V103_TIM2_CHCTLR2_Output_OC4CE (1 << 15) /* 8000: Output compare 4 clear enable */
#define CH32V103_TIM2_CHCTLR2_Output_OC4M (3 << 12) /* 1000: Output compare 4 mode */
#define CH32V103_TIM2_CHCTLR2_Output_OC4M_MASK (0x07)
#define CH32V103_TIM2_CHCTLR2_Output_OC4PE (1 << 11) /* 800: Output compare 4 preload enable */
#define CH32V103_TIM2_CHCTLR2_Output_OC4FE (1 << 10) /* 400: Output compare 4 fast enable */
#define CH32V103_TIM2_CHCTLR2_Output_CC4S (2 <<  8) /* 100: Capture/Compare 4 selection */
#define CH32V103_TIM2_CHCTLR2_Output_CC4S_MASK (0x03)
#define CH32V103_TIM2_CHCTLR2_Output_OC3CE (1 <<  7) /* 80: Output compare 3 clear enable */
#define CH32V103_TIM2_CHCTLR2_Output_OC3M (3 <<  4) /* 10: Output compare 3 mode */
#define CH32V103_TIM2_CHCTLR2_Output_OC3M_MASK (0x07)
#define CH32V103_TIM2_CHCTLR2_Output_OC3PE (1 <<  3) /* 08: Output compare 3 preload enable */
#define CH32V103_TIM2_CHCTLR2_Output_OC3FE (1 <<  2) /* 04: Output compare 3 fast enable */
#define CH32V103_TIM2_CHCTLR2_Output_CC3S (2 <<  0) /* 01: Capture/Compare 3 selection */
#define CH32V103_TIM2_CHCTLR2_Output_CC3S_MASK (0x03)
#define CH32V103_TIM2_CHCTLR2_Input_OFFSET 0x001c
#define CH32V103_TIM2_CHCTLR2_Input       (CH32V103_TIM2_BASE + CH32V103_TIM2_CHCTLR2_Input_OFFSET)
#define CH32V103_TIM2_CHCTLR2_Input_IC4F  (4 << 12) /* 1000: Input capture 4 filter */
#define CH32V103_TIM2_CHCTLR2_Input_IC4F_MASK  (0x0f)
#define CH32V103_TIM2_CHCTLR2_Input_IC4PSC (2 << 10) /* 400: Input capture 4 prescaler */
#define CH32V103_TIM2_CHCTLR2_Input_IC4PSC_MASK (0x03)
#define CH32V103_TIM2_CHCTLR2_Input_CC4S  (2 <<  8) /* 100: Capture/Compare 4 selection */
#define CH32V103_TIM2_CHCTLR2_Input_CC4S_MASK  (0x03)
#define CH32V103_TIM2_CHCTLR2_Input_IC3F  (4 <<  4) /* 10: Input capture 3 filter */
#define CH32V103_TIM2_CHCTLR2_Input_IC3F_MASK  (0x0f)
#define CH32V103_TIM2_CHCTLR2_Input_IC3PSC (2 <<  2) /* 04: Input capture 3 prescaler */
#define CH32V103_TIM2_CHCTLR2_Input_IC3PSC_MASK (0x03)
#define CH32V103_TIM2_CHCTLR2_Input_CC3S  (2 <<  0) /* 01: Capture/Compare 3 selection */
#define CH32V103_TIM2_CHCTLR2_Input_CC3S_MASK  (0x03)
#define CH32V103_TIM2_CCER_OFFSET         0x0020
#define CH32V103_TIM2_CCER                (CH32V103_TIM2_BASE + CH32V103_TIM2_CCER_OFFSET)
#define CH32V103_TIM2_CCER_CC4P           (1 << 13) /* 2000: Capture/Compare 3 output Polarity */
#define CH32V103_TIM2_CCER_CC4E           (1 << 12) /* 1000: Capture/Compare 4 output enable */
#define CH32V103_TIM2_CCER_CC3P           (1 <<  9) /* 200: Capture/Compare 3 output Polarity */
#define CH32V103_TIM2_CCER_CC3E           (1 <<  8) /* 100: Capture/Compare 3 output enable */
#define CH32V103_TIM2_CCER_CC2P           (1 <<  5) /* 20: Capture/Compare 2 output Polarity */
#define CH32V103_TIM2_CCER_CC2E           (1 <<  4) /* 10: Capture/Compare 2 output enable */
#define CH32V103_TIM2_CCER_CC1P           (1 <<  1) /* 02: Capture/Compare 1 output Polarity */
#define CH32V103_TIM2_CCER_CC1E           (1 <<  0) /* 01: Capture/Compare 1 output enable */
#define CH32V103_TIM2_CNT_OFFSET          0x0024
#define CH32V103_TIM2_CNT                 (CH32V103_TIM2_BASE + CH32V103_TIM2_CNT_OFFSET)
#define CH32V103_TIM2_CNT_CNT             (16 <<  0) /* 01: counter value */
#define CH32V103_TIM2_CNT_CNT_MASK             (0xffff)
#define CH32V103_TIM2_PSC_OFFSET          0x0028
#define CH32V103_TIM2_PSC                 (CH32V103_TIM2_BASE + CH32V103_TIM2_PSC_OFFSET)
#define CH32V103_TIM2_PSC_PSC             (16 <<  0) /* 01: Prescaler value */
#define CH32V103_TIM2_PSC_PSC_MASK             (0xffff)
#define CH32V103_TIM2_ATRLR_OFFSET        0x002c
#define CH32V103_TIM2_ATRLR               (CH32V103_TIM2_BASE + CH32V103_TIM2_ATRLR_OFFSET)
#define CH32V103_TIM2_ATRLR_ARR           (16 <<  0) /* 01: Auto-reload value */
#define CH32V103_TIM2_ATRLR_ARR_MASK           (0xffff)
#define CH32V103_TIM2_CH1CVR_OFFSET       0x0034
#define CH32V103_TIM2_CH1CVR              (CH32V103_TIM2_BASE + CH32V103_TIM2_CH1CVR_OFFSET)
#define CH32V103_TIM2_CH1CVR_CCR1         (16 <<  0) /* 01: Capture/Compare 1 value */
#define CH32V103_TIM2_CH1CVR_CCR1_MASK         (0xffff)
#define CH32V103_TIM2_CH2CVR_OFFSET       0x0038
#define CH32V103_TIM2_CH2CVR              (CH32V103_TIM2_BASE + CH32V103_TIM2_CH2CVR_OFFSET)
#define CH32V103_TIM2_CH2CVR_CCR2         (16 <<  0) /* 01: Capture/Compare 2 value */
#define CH32V103_TIM2_CH2CVR_CCR2_MASK         (0xffff)
#define CH32V103_TIM2_CH3CVR_OFFSET       0x003c
#define CH32V103_TIM2_CH3CVR              (CH32V103_TIM2_BASE + CH32V103_TIM2_CH3CVR_OFFSET)
#define CH32V103_TIM2_CH3CVR_CCR3         (16 <<  0) /* 01: Capture/Compare value */
#define CH32V103_TIM2_CH3CVR_CCR3_MASK         (0xffff)
#define CH32V103_TIM2_CH4CVR_OFFSET       0x0040
#define CH32V103_TIM2_CH4CVR              (CH32V103_TIM2_BASE + CH32V103_TIM2_CH4CVR_OFFSET)
#define CH32V103_TIM2_CH4CVR_CCR4         (16 <<  0) /* 01: Capture/Compare value */
#define CH32V103_TIM2_CH4CVR_CCR4_MASK         (0xffff)
#define CH32V103_TIM2_DMACFGR_OFFSET      0x0048
#define CH32V103_TIM2_DMACFGR             (CH32V103_TIM2_BASE + CH32V103_TIM2_DMACFGR_OFFSET)
#define CH32V103_TIM2_DMACFGR_DBL         (5 <<  8) /* 100: DMA burst length */
#define CH32V103_TIM2_DMACFGR_DBL_MASK         (0x1f)
#define CH32V103_TIM2_DMACFGR_DBA         (5 <<  0) /* 01: DMA base address */
#define CH32V103_TIM2_DMACFGR_DBA_MASK         (0x1f)
#define CH32V103_TIM2_DMAR_OFFSET         0x004c
#define CH32V103_TIM2_DMAR                (CH32V103_TIM2_BASE + CH32V103_TIM2_DMAR_OFFSET)
#define CH32V103_TIM2_DMAR_DMAB           (16 <<  0) /* 01: DMA register for burst accesses */
#define CH32V103_TIM2_DMAR_DMAB_MASK           (0xffff)

/* No registers defined for peripheral TIM3. Using those of TIM2. */
#define CH32V103_TIM3_BASE                0x40000400
#define CH32V103_TIM3_CTLR1_OFFSET        CH32V103_TIM2_CTLR1_OFFSET
#define CH32V103_TIM3_CTLR1               CH32V103_TIM2_CTLR1
#define CH32V103_TIM3_CTLR1_CKD           CH32V103_TIM2_CTLR1_CKD
#define CH32V103_TIM3_CTLR1_CKD_MASK      CH32V103_TIM2_CTLR1_CKD_MASK
#define CH32V103_TIM3_CTLR1_ARPE          CH32V103_TIM2_CTLR1_ARPE
#define CH32V103_TIM3_CTLR1_CMS           CH32V103_TIM2_CTLR1_CMS
#define CH32V103_TIM3_CTLR1_CMS_MASK      CH32V103_TIM2_CTLR1_CMS_MASK
#define CH32V103_TIM3_CTLR1_DIR           CH32V103_TIM2_CTLR1_DIR
#define CH32V103_TIM3_CTLR1_OPM           CH32V103_TIM2_CTLR1_OPM
#define CH32V103_TIM3_CTLR1_URS           CH32V103_TIM2_CTLR1_URS
#define CH32V103_TIM3_CTLR1_UDIS          CH32V103_TIM2_CTLR1_UDIS
#define CH32V103_TIM3_CTLR1_CEN           CH32V103_TIM2_CTLR1_CEN
#define CH32V103_TIM3_CTLR2_OFFSET        CH32V103_TIM2_CTLR2_OFFSET
#define CH32V103_TIM3_CTLR2               CH32V103_TIM2_CTLR2
#define CH32V103_TIM3_CTLR2_TI1S          CH32V103_TIM2_CTLR2_TI1S
#define CH32V103_TIM3_CTLR2_MMS           CH32V103_TIM2_CTLR2_MMS
#define CH32V103_TIM3_CTLR2_MMS_MASK      CH32V103_TIM2_CTLR2_MMS_MASK
#define CH32V103_TIM3_CTLR2_CCDS          CH32V103_TIM2_CTLR2_CCDS
#define CH32V103_TIM3_CTLR2_CCUS          CH32V103_TIM2_CTLR2_CCUS
#define CH32V103_TIM3_CTLR2_CCPC          CH32V103_TIM2_CTLR2_CCPC
#define CH32V103_TIM3_SMCFGR_OFFSET       CH32V103_TIM2_SMCFGR_OFFSET
#define CH32V103_TIM3_SMCFGR              CH32V103_TIM2_SMCFGR
#define CH32V103_TIM3_SMCFGR_ETP          CH32V103_TIM2_SMCFGR_ETP
#define CH32V103_TIM3_SMCFGR_ECE          CH32V103_TIM2_SMCFGR_ECE
#define CH32V103_TIM3_SMCFGR_ETPS         CH32V103_TIM2_SMCFGR_ETPS
#define CH32V103_TIM3_SMCFGR_ETPS_MASK    CH32V103_TIM2_SMCFGR_ETPS_MASK
#define CH32V103_TIM3_SMCFGR_ETF          CH32V103_TIM2_SMCFGR_ETF
#define CH32V103_TIM3_SMCFGR_ETF_MASK     CH32V103_TIM2_SMCFGR_ETF_MASK
#define CH32V103_TIM3_SMCFGR_MSM          CH32V103_TIM2_SMCFGR_MSM
#define CH32V103_TIM3_SMCFGR_TS           CH32V103_TIM2_SMCFGR_TS
#define CH32V103_TIM3_SMCFGR_TS_MASK      CH32V103_TIM2_SMCFGR_TS_MASK
#define CH32V103_TIM3_SMCFGR_SMS          CH32V103_TIM2_SMCFGR_SMS
#define CH32V103_TIM3_SMCFGR_SMS_MASK     CH32V103_TIM2_SMCFGR_SMS_MASK
#define CH32V103_TIM3_DMAINTENR_OFFSET    CH32V103_TIM2_DMAINTENR_OFFSET
#define CH32V103_TIM3_DMAINTENR           CH32V103_TIM2_DMAINTENR
#define CH32V103_TIM3_DMAINTENR_TDE       CH32V103_TIM2_DMAINTENR_TDE
#define CH32V103_TIM3_DMAINTENR_CC4DE     CH32V103_TIM2_DMAINTENR_CC4DE
#define CH32V103_TIM3_DMAINTENR_CC3DE     CH32V103_TIM2_DMAINTENR_CC3DE
#define CH32V103_TIM3_DMAINTENR_CC2DE     CH32V103_TIM2_DMAINTENR_CC2DE
#define CH32V103_TIM3_DMAINTENR_CC1DE     CH32V103_TIM2_DMAINTENR_CC1DE
#define CH32V103_TIM3_DMAINTENR_UDE       CH32V103_TIM2_DMAINTENR_UDE
#define CH32V103_TIM3_DMAINTENR_TIE       CH32V103_TIM2_DMAINTENR_TIE
#define CH32V103_TIM3_DMAINTENR_CC4IE     CH32V103_TIM2_DMAINTENR_CC4IE
#define CH32V103_TIM3_DMAINTENR_CC3IE     CH32V103_TIM2_DMAINTENR_CC3IE
#define CH32V103_TIM3_DMAINTENR_CC2IE     CH32V103_TIM2_DMAINTENR_CC2IE
#define CH32V103_TIM3_DMAINTENR_CC1IE     CH32V103_TIM2_DMAINTENR_CC1IE
#define CH32V103_TIM3_DMAINTENR_UIE       CH32V103_TIM2_DMAINTENR_UIE
#define CH32V103_TIM3_INTFR_OFFSET        CH32V103_TIM2_INTFR_OFFSET
#define CH32V103_TIM3_INTFR               CH32V103_TIM2_INTFR
#define CH32V103_TIM3_INTFR_CC4OF         CH32V103_TIM2_INTFR_CC4OF
#define CH32V103_TIM3_INTFR_CC3OF         CH32V103_TIM2_INTFR_CC3OF
#define CH32V103_TIM3_INTFR_CC2OF         CH32V103_TIM2_INTFR_CC2OF
#define CH32V103_TIM3_INTFR_CC1OF         CH32V103_TIM2_INTFR_CC1OF
#define CH32V103_TIM3_INTFR_TIF           CH32V103_TIM2_INTFR_TIF
#define CH32V103_TIM3_INTFR_CC4IF         CH32V103_TIM2_INTFR_CC4IF
#define CH32V103_TIM3_INTFR_CC3IF         CH32V103_TIM2_INTFR_CC3IF
#define CH32V103_TIM3_INTFR_CC2IF         CH32V103_TIM2_INTFR_CC2IF
#define CH32V103_TIM3_INTFR_CC1IF         CH32V103_TIM2_INTFR_CC1IF
#define CH32V103_TIM3_INTFR_UIF           CH32V103_TIM2_INTFR_UIF
#define CH32V103_TIM3_SWEVGR_OFFSET       CH32V103_TIM2_SWEVGR_OFFSET
#define CH32V103_TIM3_SWEVGR              CH32V103_TIM2_SWEVGR
#define CH32V103_TIM3_SWEVGR_BG           CH32V103_TIM2_SWEVGR_BG
#define CH32V103_TIM3_SWEVGR_TG           CH32V103_TIM2_SWEVGR_TG
#define CH32V103_TIM3_SWEVGR_COMG         CH32V103_TIM2_SWEVGR_COMG
#define CH32V103_TIM3_SWEVGR_CC4G         CH32V103_TIM2_SWEVGR_CC4G
#define CH32V103_TIM3_SWEVGR_CC3G         CH32V103_TIM2_SWEVGR_CC3G
#define CH32V103_TIM3_SWEVGR_CC2G         CH32V103_TIM2_SWEVGR_CC2G
#define CH32V103_TIM3_SWEVGR_CC1G         CH32V103_TIM2_SWEVGR_CC1G
#define CH32V103_TIM3_SWEVGR_UG           CH32V103_TIM2_SWEVGR_UG
#define CH32V103_TIM3_CHCTLR1_Output_OFFSET CH32V103_TIM2_CHCTLR1_Output_OFFSET
#define CH32V103_TIM3_CHCTLR1_Output      CH32V103_TIM2_CHCTLR1_Output
#define CH32V103_TIM3_CHCTLR1_Output_OC2CE CH32V103_TIM2_CHCTLR1_Output_OC2CE
#define CH32V103_TIM3_CHCTLR1_Output_OC2M CH32V103_TIM2_CHCTLR1_Output_OC2M
#define CH32V103_TIM3_CHCTLR1_Output_OC2M_MASK CH32V103_TIM2_CHCTLR1_Output_OC2M_MASK
#define CH32V103_TIM3_CHCTLR1_Output_OC2PE CH32V103_TIM2_CHCTLR1_Output_OC2PE
#define CH32V103_TIM3_CHCTLR1_Output_OC2FE CH32V103_TIM2_CHCTLR1_Output_OC2FE
#define CH32V103_TIM3_CHCTLR1_Output_CC2S CH32V103_TIM2_CHCTLR1_Output_CC2S
#define CH32V103_TIM3_CHCTLR1_Output_CC2S_MASK CH32V103_TIM2_CHCTLR1_Output_CC2S_MASK
#define CH32V103_TIM3_CHCTLR1_Output_OC1CE CH32V103_TIM2_CHCTLR1_Output_OC1CE
#define CH32V103_TIM3_CHCTLR1_Output_OC1M CH32V103_TIM2_CHCTLR1_Output_OC1M
#define CH32V103_TIM3_CHCTLR1_Output_OC1M_MASK CH32V103_TIM2_CHCTLR1_Output_OC1M_MASK
#define CH32V103_TIM3_CHCTLR1_Output_OC1PE CH32V103_TIM2_CHCTLR1_Output_OC1PE
#define CH32V103_TIM3_CHCTLR1_Output_OC1FE CH32V103_TIM2_CHCTLR1_Output_OC1FE
#define CH32V103_TIM3_CHCTLR1_Output_CC1S CH32V103_TIM2_CHCTLR1_Output_CC1S
#define CH32V103_TIM3_CHCTLR1_Output_CC1S_MASK CH32V103_TIM2_CHCTLR1_Output_CC1S_MASK
#define CH32V103_TIM3_CHCTLR1_Input_OFFSET CH32V103_TIM2_CHCTLR1_Input_OFFSET
#define CH32V103_TIM3_CHCTLR1_Input       CH32V103_TIM2_CHCTLR1_Input
#define CH32V103_TIM3_CHCTLR1_Input_IC2F  CH32V103_TIM2_CHCTLR1_Input_IC2F
#define CH32V103_TIM3_CHCTLR1_Input_IC2F_MASK CH32V103_TIM2_CHCTLR1_Input_IC2F_MASK
#define CH32V103_TIM3_CHCTLR1_Input_IC2PSC CH32V103_TIM2_CHCTLR1_Input_IC2PSC
#define CH32V103_TIM3_CHCTLR1_Input_IC2PSC_MASK CH32V103_TIM2_CHCTLR1_Input_IC2PSC_MASK
#define CH32V103_TIM3_CHCTLR1_Input_CC2S  CH32V103_TIM2_CHCTLR1_Input_CC2S
#define CH32V103_TIM3_CHCTLR1_Input_CC2S_MASK CH32V103_TIM2_CHCTLR1_Input_CC2S_MASK
#define CH32V103_TIM3_CHCTLR1_Input_IC1F  CH32V103_TIM2_CHCTLR1_Input_IC1F
#define CH32V103_TIM3_CHCTLR1_Input_IC1F_MASK CH32V103_TIM2_CHCTLR1_Input_IC1F_MASK
#define CH32V103_TIM3_CHCTLR1_Input_IC1PSC CH32V103_TIM2_CHCTLR1_Input_IC1PSC
#define CH32V103_TIM3_CHCTLR1_Input_IC1PSC_MASK CH32V103_TIM2_CHCTLR1_Input_IC1PSC_MASK
#define CH32V103_TIM3_CHCTLR1_Input_CC1S  CH32V103_TIM2_CHCTLR1_Input_CC1S
#define CH32V103_TIM3_CHCTLR1_Input_CC1S_MASK CH32V103_TIM2_CHCTLR1_Input_CC1S_MASK
#define CH32V103_TIM3_CHCTLR2_Output_OFFSET CH32V103_TIM2_CHCTLR2_Output_OFFSET
#define CH32V103_TIM3_CHCTLR2_Output      CH32V103_TIM2_CHCTLR2_Output
#define CH32V103_TIM3_CHCTLR2_Output_OC4CE CH32V103_TIM2_CHCTLR2_Output_OC4CE
#define CH32V103_TIM3_CHCTLR2_Output_OC4M CH32V103_TIM2_CHCTLR2_Output_OC4M
#define CH32V103_TIM3_CHCTLR2_Output_OC4M_MASK CH32V103_TIM2_CHCTLR2_Output_OC4M_MASK
#define CH32V103_TIM3_CHCTLR2_Output_OC4PE CH32V103_TIM2_CHCTLR2_Output_OC4PE
#define CH32V103_TIM3_CHCTLR2_Output_OC4FE CH32V103_TIM2_CHCTLR2_Output_OC4FE
#define CH32V103_TIM3_CHCTLR2_Output_CC4S CH32V103_TIM2_CHCTLR2_Output_CC4S
#define CH32V103_TIM3_CHCTLR2_Output_CC4S_MASK CH32V103_TIM2_CHCTLR2_Output_CC4S_MASK
#define CH32V103_TIM3_CHCTLR2_Output_OC3CE CH32V103_TIM2_CHCTLR2_Output_OC3CE
#define CH32V103_TIM3_CHCTLR2_Output_OC3M CH32V103_TIM2_CHCTLR2_Output_OC3M
#define CH32V103_TIM3_CHCTLR2_Output_OC3M_MASK CH32V103_TIM2_CHCTLR2_Output_OC3M_MASK
#define CH32V103_TIM3_CHCTLR2_Output_OC3PE CH32V103_TIM2_CHCTLR2_Output_OC3PE
#define CH32V103_TIM3_CHCTLR2_Output_OC3FE CH32V103_TIM2_CHCTLR2_Output_OC3FE
#define CH32V103_TIM3_CHCTLR2_Output_CC3S CH32V103_TIM2_CHCTLR2_Output_CC3S
#define CH32V103_TIM3_CHCTLR2_Output_CC3S_MASK CH32V103_TIM2_CHCTLR2_Output_CC3S_MASK
#define CH32V103_TIM3_CHCTLR2_Input_OFFSET CH32V103_TIM2_CHCTLR2_Input_OFFSET
#define CH32V103_TIM3_CHCTLR2_Input       CH32V103_TIM2_CHCTLR2_Input
#define CH32V103_TIM3_CHCTLR2_Input_IC4F  CH32V103_TIM2_CHCTLR2_Input_IC4F
#define CH32V103_TIM3_CHCTLR2_Input_IC4F_MASK CH32V103_TIM2_CHCTLR2_Input_IC4F_MASK
#define CH32V103_TIM3_CHCTLR2_Input_IC4PSC CH32V103_TIM2_CHCTLR2_Input_IC4PSC
#define CH32V103_TIM3_CHCTLR2_Input_IC4PSC_MASK CH32V103_TIM2_CHCTLR2_Input_IC4PSC_MASK
#define CH32V103_TIM3_CHCTLR2_Input_CC4S  CH32V103_TIM2_CHCTLR2_Input_CC4S
#define CH32V103_TIM3_CHCTLR2_Input_CC4S_MASK CH32V103_TIM2_CHCTLR2_Input_CC4S_MASK
#define CH32V103_TIM3_CHCTLR2_Input_IC3F  CH32V103_TIM2_CHCTLR2_Input_IC3F
#define CH32V103_TIM3_CHCTLR2_Input_IC3F_MASK CH32V103_TIM2_CHCTLR2_Input_IC3F_MASK
#define CH32V103_TIM3_CHCTLR2_Input_IC3PSC CH32V103_TIM2_CHCTLR2_Input_IC3PSC
#define CH32V103_TIM3_CHCTLR2_Input_IC3PSC_MASK CH32V103_TIM2_CHCTLR2_Input_IC3PSC_MASK
#define CH32V103_TIM3_CHCTLR2_Input_CC3S  CH32V103_TIM2_CHCTLR2_Input_CC3S
#define CH32V103_TIM3_CHCTLR2_Input_CC3S_MASK CH32V103_TIM2_CHCTLR2_Input_CC3S_MASK
#define CH32V103_TIM3_CCER_OFFSET         CH32V103_TIM2_CCER_OFFSET
#define CH32V103_TIM3_CCER                CH32V103_TIM2_CCER
#define CH32V103_TIM3_CCER_CC4P           CH32V103_TIM2_CCER_CC4P
#define CH32V103_TIM3_CCER_CC4E           CH32V103_TIM2_CCER_CC4E
#define CH32V103_TIM3_CCER_CC3P           CH32V103_TIM2_CCER_CC3P
#define CH32V103_TIM3_CCER_CC3E           CH32V103_TIM2_CCER_CC3E
#define CH32V103_TIM3_CCER_CC2P           CH32V103_TIM2_CCER_CC2P
#define CH32V103_TIM3_CCER_CC2E           CH32V103_TIM2_CCER_CC2E
#define CH32V103_TIM3_CCER_CC1P           CH32V103_TIM2_CCER_CC1P
#define CH32V103_TIM3_CCER_CC1E           CH32V103_TIM2_CCER_CC1E
#define CH32V103_TIM3_CNT_OFFSET          CH32V103_TIM2_CNT_OFFSET
#define CH32V103_TIM3_CNT                 CH32V103_TIM2_CNT
#define CH32V103_TIM3_CNT_CNT             CH32V103_TIM2_CNT_CNT
#define CH32V103_TIM3_CNT_CNT_MASK        CH32V103_TIM2_CNT_CNT_MASK
#define CH32V103_TIM3_PSC_OFFSET          CH32V103_TIM2_PSC_OFFSET
#define CH32V103_TIM3_PSC                 CH32V103_TIM2_PSC
#define CH32V103_TIM3_PSC_PSC             CH32V103_TIM2_PSC_PSC
#define CH32V103_TIM3_PSC_PSC_MASK        CH32V103_TIM2_PSC_PSC_MASK
#define CH32V103_TIM3_ATRLR_OFFSET        CH32V103_TIM2_ATRLR_OFFSET
#define CH32V103_TIM3_ATRLR               CH32V103_TIM2_ATRLR
#define CH32V103_TIM3_ATRLR_ARR           CH32V103_TIM2_ATRLR_ARR
#define CH32V103_TIM3_ATRLR_ARR_MASK      CH32V103_TIM2_ATRLR_ARR_MASK
#define CH32V103_TIM3_CH1CVR_OFFSET       CH32V103_TIM2_CH1CVR_OFFSET
#define CH32V103_TIM3_CH1CVR              CH32V103_TIM2_CH1CVR
#define CH32V103_TIM3_CH1CVR_CCR1         CH32V103_TIM2_CH1CVR_CCR1
#define CH32V103_TIM3_CH1CVR_CCR1_MASK    CH32V103_TIM2_CH1CVR_CCR1_MASK
#define CH32V103_TIM3_CH2CVR_OFFSET       CH32V103_TIM2_CH2CVR_OFFSET
#define CH32V103_TIM3_CH2CVR              CH32V103_TIM2_CH2CVR
#define CH32V103_TIM3_CH2CVR_CCR2         CH32V103_TIM2_CH2CVR_CCR2
#define CH32V103_TIM3_CH2CVR_CCR2_MASK    CH32V103_TIM2_CH2CVR_CCR2_MASK
#define CH32V103_TIM3_CH3CVR_OFFSET       CH32V103_TIM2_CH3CVR_OFFSET
#define CH32V103_TIM3_CH3CVR              CH32V103_TIM2_CH3CVR
#define CH32V103_TIM3_CH3CVR_CCR3         CH32V103_TIM2_CH3CVR_CCR3
#define CH32V103_TIM3_CH3CVR_CCR3_MASK    CH32V103_TIM2_CH3CVR_CCR3_MASK
#define CH32V103_TIM3_CH4CVR_OFFSET       CH32V103_TIM2_CH4CVR_OFFSET
#define CH32V103_TIM3_CH4CVR              CH32V103_TIM2_CH4CVR
#define CH32V103_TIM3_CH4CVR_CCR4         CH32V103_TIM2_CH4CVR_CCR4
#define CH32V103_TIM3_CH4CVR_CCR4_MASK    CH32V103_TIM2_CH4CVR_CCR4_MASK
#define CH32V103_TIM3_DMACFGR_OFFSET      CH32V103_TIM2_DMACFGR_OFFSET
#define CH32V103_TIM3_DMACFGR             CH32V103_TIM2_DMACFGR
#define CH32V103_TIM3_DMACFGR_DBL         CH32V103_TIM2_DMACFGR_DBL
#define CH32V103_TIM3_DMACFGR_DBL_MASK    CH32V103_TIM2_DMACFGR_DBL_MASK
#define CH32V103_TIM3_DMACFGR_DBA         CH32V103_TIM2_DMACFGR_DBA
#define CH32V103_TIM3_DMACFGR_DBA_MASK    CH32V103_TIM2_DMACFGR_DBA_MASK
#define CH32V103_TIM3_DMAR_OFFSET         CH32V103_TIM2_DMAR_OFFSET
#define CH32V103_TIM3_DMAR                CH32V103_TIM2_DMAR
#define CH32V103_TIM3_DMAR_DMAB           CH32V103_TIM2_DMAR_DMAB
#define CH32V103_TIM3_DMAR_DMAB_MASK      CH32V103_TIM2_DMAR_DMAB_MASK

/* No registers defined for peripheral TIM4. Using those of TIM2. */
#define CH32V103_TIM4_BASE                0x40000800
#define CH32V103_TIM4_CTLR1_OFFSET        CH32V103_TIM2_CTLR1_OFFSET
#define CH32V103_TIM4_CTLR1               CH32V103_TIM2_CTLR1
#define CH32V103_TIM4_CTLR1_CKD           CH32V103_TIM2_CTLR1_CKD
#define CH32V103_TIM4_CTLR1_CKD_MASK      CH32V103_TIM2_CTLR1_CKD_MASK
#define CH32V103_TIM4_CTLR1_ARPE          CH32V103_TIM2_CTLR1_ARPE
#define CH32V103_TIM4_CTLR1_CMS           CH32V103_TIM2_CTLR1_CMS
#define CH32V103_TIM4_CTLR1_CMS_MASK      CH32V103_TIM2_CTLR1_CMS_MASK
#define CH32V103_TIM4_CTLR1_DIR           CH32V103_TIM2_CTLR1_DIR
#define CH32V103_TIM4_CTLR1_OPM           CH32V103_TIM2_CTLR1_OPM
#define CH32V103_TIM4_CTLR1_URS           CH32V103_TIM2_CTLR1_URS
#define CH32V103_TIM4_CTLR1_UDIS          CH32V103_TIM2_CTLR1_UDIS
#define CH32V103_TIM4_CTLR1_CEN           CH32V103_TIM2_CTLR1_CEN
#define CH32V103_TIM4_CTLR2_OFFSET        CH32V103_TIM2_CTLR2_OFFSET
#define CH32V103_TIM4_CTLR2               CH32V103_TIM2_CTLR2
#define CH32V103_TIM4_CTLR2_TI1S          CH32V103_TIM2_CTLR2_TI1S
#define CH32V103_TIM4_CTLR2_MMS           CH32V103_TIM2_CTLR2_MMS
#define CH32V103_TIM4_CTLR2_MMS_MASK      CH32V103_TIM2_CTLR2_MMS_MASK
#define CH32V103_TIM4_CTLR2_CCDS          CH32V103_TIM2_CTLR2_CCDS
#define CH32V103_TIM4_CTLR2_CCUS          CH32V103_TIM2_CTLR2_CCUS
#define CH32V103_TIM4_CTLR2_CCPC          CH32V103_TIM2_CTLR2_CCPC
#define CH32V103_TIM4_SMCFGR_OFFSET       CH32V103_TIM2_SMCFGR_OFFSET
#define CH32V103_TIM4_SMCFGR              CH32V103_TIM2_SMCFGR
#define CH32V103_TIM4_SMCFGR_ETP          CH32V103_TIM2_SMCFGR_ETP
#define CH32V103_TIM4_SMCFGR_ECE          CH32V103_TIM2_SMCFGR_ECE
#define CH32V103_TIM4_SMCFGR_ETPS         CH32V103_TIM2_SMCFGR_ETPS
#define CH32V103_TIM4_SMCFGR_ETPS_MASK    CH32V103_TIM2_SMCFGR_ETPS_MASK
#define CH32V103_TIM4_SMCFGR_ETF          CH32V103_TIM2_SMCFGR_ETF
#define CH32V103_TIM4_SMCFGR_ETF_MASK     CH32V103_TIM2_SMCFGR_ETF_MASK
#define CH32V103_TIM4_SMCFGR_MSM          CH32V103_TIM2_SMCFGR_MSM
#define CH32V103_TIM4_SMCFGR_TS           CH32V103_TIM2_SMCFGR_TS
#define CH32V103_TIM4_SMCFGR_TS_MASK      CH32V103_TIM2_SMCFGR_TS_MASK
#define CH32V103_TIM4_SMCFGR_SMS          CH32V103_TIM2_SMCFGR_SMS
#define CH32V103_TIM4_SMCFGR_SMS_MASK     CH32V103_TIM2_SMCFGR_SMS_MASK
#define CH32V103_TIM4_DMAINTENR_OFFSET    CH32V103_TIM2_DMAINTENR_OFFSET
#define CH32V103_TIM4_DMAINTENR           CH32V103_TIM2_DMAINTENR
#define CH32V103_TIM4_DMAINTENR_TDE       CH32V103_TIM2_DMAINTENR_TDE
#define CH32V103_TIM4_DMAINTENR_CC4DE     CH32V103_TIM2_DMAINTENR_CC4DE
#define CH32V103_TIM4_DMAINTENR_CC3DE     CH32V103_TIM2_DMAINTENR_CC3DE
#define CH32V103_TIM4_DMAINTENR_CC2DE     CH32V103_TIM2_DMAINTENR_CC2DE
#define CH32V103_TIM4_DMAINTENR_CC1DE     CH32V103_TIM2_DMAINTENR_CC1DE
#define CH32V103_TIM4_DMAINTENR_UDE       CH32V103_TIM2_DMAINTENR_UDE
#define CH32V103_TIM4_DMAINTENR_TIE       CH32V103_TIM2_DMAINTENR_TIE
#define CH32V103_TIM4_DMAINTENR_CC4IE     CH32V103_TIM2_DMAINTENR_CC4IE
#define CH32V103_TIM4_DMAINTENR_CC3IE     CH32V103_TIM2_DMAINTENR_CC3IE
#define CH32V103_TIM4_DMAINTENR_CC2IE     CH32V103_TIM2_DMAINTENR_CC2IE
#define CH32V103_TIM4_DMAINTENR_CC1IE     CH32V103_TIM2_DMAINTENR_CC1IE
#define CH32V103_TIM4_DMAINTENR_UIE       CH32V103_TIM2_DMAINTENR_UIE
#define CH32V103_TIM4_INTFR_OFFSET        CH32V103_TIM2_INTFR_OFFSET
#define CH32V103_TIM4_INTFR               CH32V103_TIM2_INTFR
#define CH32V103_TIM4_INTFR_CC4OF         CH32V103_TIM2_INTFR_CC4OF
#define CH32V103_TIM4_INTFR_CC3OF         CH32V103_TIM2_INTFR_CC3OF
#define CH32V103_TIM4_INTFR_CC2OF         CH32V103_TIM2_INTFR_CC2OF
#define CH32V103_TIM4_INTFR_CC1OF         CH32V103_TIM2_INTFR_CC1OF
#define CH32V103_TIM4_INTFR_TIF           CH32V103_TIM2_INTFR_TIF
#define CH32V103_TIM4_INTFR_CC4IF         CH32V103_TIM2_INTFR_CC4IF
#define CH32V103_TIM4_INTFR_CC3IF         CH32V103_TIM2_INTFR_CC3IF
#define CH32V103_TIM4_INTFR_CC2IF         CH32V103_TIM2_INTFR_CC2IF
#define CH32V103_TIM4_INTFR_CC1IF         CH32V103_TIM2_INTFR_CC1IF
#define CH32V103_TIM4_INTFR_UIF           CH32V103_TIM2_INTFR_UIF
#define CH32V103_TIM4_SWEVGR_OFFSET       CH32V103_TIM2_SWEVGR_OFFSET
#define CH32V103_TIM4_SWEVGR              CH32V103_TIM2_SWEVGR
#define CH32V103_TIM4_SWEVGR_BG           CH32V103_TIM2_SWEVGR_BG
#define CH32V103_TIM4_SWEVGR_TG           CH32V103_TIM2_SWEVGR_TG
#define CH32V103_TIM4_SWEVGR_COMG         CH32V103_TIM2_SWEVGR_COMG
#define CH32V103_TIM4_SWEVGR_CC4G         CH32V103_TIM2_SWEVGR_CC4G
#define CH32V103_TIM4_SWEVGR_CC3G         CH32V103_TIM2_SWEVGR_CC3G
#define CH32V103_TIM4_SWEVGR_CC2G         CH32V103_TIM2_SWEVGR_CC2G
#define CH32V103_TIM4_SWEVGR_CC1G         CH32V103_TIM2_SWEVGR_CC1G
#define CH32V103_TIM4_SWEVGR_UG           CH32V103_TIM2_SWEVGR_UG
#define CH32V103_TIM4_CHCTLR1_Output_OFFSET CH32V103_TIM2_CHCTLR1_Output_OFFSET
#define CH32V103_TIM4_CHCTLR1_Output      CH32V103_TIM2_CHCTLR1_Output
#define CH32V103_TIM4_CHCTLR1_Output_OC2CE CH32V103_TIM2_CHCTLR1_Output_OC2CE
#define CH32V103_TIM4_CHCTLR1_Output_OC2M CH32V103_TIM2_CHCTLR1_Output_OC2M
#define CH32V103_TIM4_CHCTLR1_Output_OC2M_MASK CH32V103_TIM2_CHCTLR1_Output_OC2M_MASK
#define CH32V103_TIM4_CHCTLR1_Output_OC2PE CH32V103_TIM2_CHCTLR1_Output_OC2PE
#define CH32V103_TIM4_CHCTLR1_Output_OC2FE CH32V103_TIM2_CHCTLR1_Output_OC2FE
#define CH32V103_TIM4_CHCTLR1_Output_CC2S CH32V103_TIM2_CHCTLR1_Output_CC2S
#define CH32V103_TIM4_CHCTLR1_Output_CC2S_MASK CH32V103_TIM2_CHCTLR1_Output_CC2S_MASK
#define CH32V103_TIM4_CHCTLR1_Output_OC1CE CH32V103_TIM2_CHCTLR1_Output_OC1CE
#define CH32V103_TIM4_CHCTLR1_Output_OC1M CH32V103_TIM2_CHCTLR1_Output_OC1M
#define CH32V103_TIM4_CHCTLR1_Output_OC1M_MASK CH32V103_TIM2_CHCTLR1_Output_OC1M_MASK
#define CH32V103_TIM4_CHCTLR1_Output_OC1PE CH32V103_TIM2_CHCTLR1_Output_OC1PE
#define CH32V103_TIM4_CHCTLR1_Output_OC1FE CH32V103_TIM2_CHCTLR1_Output_OC1FE
#define CH32V103_TIM4_CHCTLR1_Output_CC1S CH32V103_TIM2_CHCTLR1_Output_CC1S
#define CH32V103_TIM4_CHCTLR1_Output_CC1S_MASK CH32V103_TIM2_CHCTLR1_Output_CC1S_MASK
#define CH32V103_TIM4_CHCTLR1_Input_OFFSET CH32V103_TIM2_CHCTLR1_Input_OFFSET
#define CH32V103_TIM4_CHCTLR1_Input       CH32V103_TIM2_CHCTLR1_Input
#define CH32V103_TIM4_CHCTLR1_Input_IC2F  CH32V103_TIM2_CHCTLR1_Input_IC2F
#define CH32V103_TIM4_CHCTLR1_Input_IC2F_MASK CH32V103_TIM2_CHCTLR1_Input_IC2F_MASK
#define CH32V103_TIM4_CHCTLR1_Input_IC2PSC CH32V103_TIM2_CHCTLR1_Input_IC2PSC
#define CH32V103_TIM4_CHCTLR1_Input_IC2PSC_MASK CH32V103_TIM2_CHCTLR1_Input_IC2PSC_MASK
#define CH32V103_TIM4_CHCTLR1_Input_CC2S  CH32V103_TIM2_CHCTLR1_Input_CC2S
#define CH32V103_TIM4_CHCTLR1_Input_CC2S_MASK CH32V103_TIM2_CHCTLR1_Input_CC2S_MASK
#define CH32V103_TIM4_CHCTLR1_Input_IC1F  CH32V103_TIM2_CHCTLR1_Input_IC1F
#define CH32V103_TIM4_CHCTLR1_Input_IC1F_MASK CH32V103_TIM2_CHCTLR1_Input_IC1F_MASK
#define CH32V103_TIM4_CHCTLR1_Input_IC1PSC CH32V103_TIM2_CHCTLR1_Input_IC1PSC
#define CH32V103_TIM4_CHCTLR1_Input_IC1PSC_MASK CH32V103_TIM2_CHCTLR1_Input_IC1PSC_MASK
#define CH32V103_TIM4_CHCTLR1_Input_CC1S  CH32V103_TIM2_CHCTLR1_Input_CC1S
#define CH32V103_TIM4_CHCTLR1_Input_CC1S_MASK CH32V103_TIM2_CHCTLR1_Input_CC1S_MASK
#define CH32V103_TIM4_CHCTLR2_Output_OFFSET CH32V103_TIM2_CHCTLR2_Output_OFFSET
#define CH32V103_TIM4_CHCTLR2_Output      CH32V103_TIM2_CHCTLR2_Output
#define CH32V103_TIM4_CHCTLR2_Output_OC4CE CH32V103_TIM2_CHCTLR2_Output_OC4CE
#define CH32V103_TIM4_CHCTLR2_Output_OC4M CH32V103_TIM2_CHCTLR2_Output_OC4M
#define CH32V103_TIM4_CHCTLR2_Output_OC4M_MASK CH32V103_TIM2_CHCTLR2_Output_OC4M_MASK
#define CH32V103_TIM4_CHCTLR2_Output_OC4PE CH32V103_TIM2_CHCTLR2_Output_OC4PE
#define CH32V103_TIM4_CHCTLR2_Output_OC4FE CH32V103_TIM2_CHCTLR2_Output_OC4FE
#define CH32V103_TIM4_CHCTLR2_Output_CC4S CH32V103_TIM2_CHCTLR2_Output_CC4S
#define CH32V103_TIM4_CHCTLR2_Output_CC4S_MASK CH32V103_TIM2_CHCTLR2_Output_CC4S_MASK
#define CH32V103_TIM4_CHCTLR2_Output_OC3CE CH32V103_TIM2_CHCTLR2_Output_OC3CE
#define CH32V103_TIM4_CHCTLR2_Output_OC3M CH32V103_TIM2_CHCTLR2_Output_OC3M
#define CH32V103_TIM4_CHCTLR2_Output_OC3M_MASK CH32V103_TIM2_CHCTLR2_Output_OC3M_MASK
#define CH32V103_TIM4_CHCTLR2_Output_OC3PE CH32V103_TIM2_CHCTLR2_Output_OC3PE
#define CH32V103_TIM4_CHCTLR2_Output_OC3FE CH32V103_TIM2_CHCTLR2_Output_OC3FE
#define CH32V103_TIM4_CHCTLR2_Output_CC3S CH32V103_TIM2_CHCTLR2_Output_CC3S
#define CH32V103_TIM4_CHCTLR2_Output_CC3S_MASK CH32V103_TIM2_CHCTLR2_Output_CC3S_MASK
#define CH32V103_TIM4_CHCTLR2_Input_OFFSET CH32V103_TIM2_CHCTLR2_Input_OFFSET
#define CH32V103_TIM4_CHCTLR2_Input       CH32V103_TIM2_CHCTLR2_Input
#define CH32V103_TIM4_CHCTLR2_Input_IC4F  CH32V103_TIM2_CHCTLR2_Input_IC4F
#define CH32V103_TIM4_CHCTLR2_Input_IC4F_MASK CH32V103_TIM2_CHCTLR2_Input_IC4F_MASK
#define CH32V103_TIM4_CHCTLR2_Input_IC4PSC CH32V103_TIM2_CHCTLR2_Input_IC4PSC
#define CH32V103_TIM4_CHCTLR2_Input_IC4PSC_MASK CH32V103_TIM2_CHCTLR2_Input_IC4PSC_MASK
#define CH32V103_TIM4_CHCTLR2_Input_CC4S  CH32V103_TIM2_CHCTLR2_Input_CC4S
#define CH32V103_TIM4_CHCTLR2_Input_CC4S_MASK CH32V103_TIM2_CHCTLR2_Input_CC4S_MASK
#define CH32V103_TIM4_CHCTLR2_Input_IC3F  CH32V103_TIM2_CHCTLR2_Input_IC3F
#define CH32V103_TIM4_CHCTLR2_Input_IC3F_MASK CH32V103_TIM2_CHCTLR2_Input_IC3F_MASK
#define CH32V103_TIM4_CHCTLR2_Input_IC3PSC CH32V103_TIM2_CHCTLR2_Input_IC3PSC
#define CH32V103_TIM4_CHCTLR2_Input_IC3PSC_MASK CH32V103_TIM2_CHCTLR2_Input_IC3PSC_MASK
#define CH32V103_TIM4_CHCTLR2_Input_CC3S  CH32V103_TIM2_CHCTLR2_Input_CC3S
#define CH32V103_TIM4_CHCTLR2_Input_CC3S_MASK CH32V103_TIM2_CHCTLR2_Input_CC3S_MASK
#define CH32V103_TIM4_CCER_OFFSET         CH32V103_TIM2_CCER_OFFSET
#define CH32V103_TIM4_CCER                CH32V103_TIM2_CCER
#define CH32V103_TIM4_CCER_CC4P           CH32V103_TIM2_CCER_CC4P
#define CH32V103_TIM4_CCER_CC4E           CH32V103_TIM2_CCER_CC4E
#define CH32V103_TIM4_CCER_CC3P           CH32V103_TIM2_CCER_CC3P
#define CH32V103_TIM4_CCER_CC3E           CH32V103_TIM2_CCER_CC3E
#define CH32V103_TIM4_CCER_CC2P           CH32V103_TIM2_CCER_CC2P
#define CH32V103_TIM4_CCER_CC2E           CH32V103_TIM2_CCER_CC2E
#define CH32V103_TIM4_CCER_CC1P           CH32V103_TIM2_CCER_CC1P
#define CH32V103_TIM4_CCER_CC1E           CH32V103_TIM2_CCER_CC1E
#define CH32V103_TIM4_CNT_OFFSET          CH32V103_TIM2_CNT_OFFSET
#define CH32V103_TIM4_CNT                 CH32V103_TIM2_CNT
#define CH32V103_TIM4_CNT_CNT             CH32V103_TIM2_CNT_CNT
#define CH32V103_TIM4_CNT_CNT_MASK        CH32V103_TIM2_CNT_CNT_MASK
#define CH32V103_TIM4_PSC_OFFSET          CH32V103_TIM2_PSC_OFFSET
#define CH32V103_TIM4_PSC                 CH32V103_TIM2_PSC
#define CH32V103_TIM4_PSC_PSC             CH32V103_TIM2_PSC_PSC
#define CH32V103_TIM4_PSC_PSC_MASK        CH32V103_TIM2_PSC_PSC_MASK
#define CH32V103_TIM4_ATRLR_OFFSET        CH32V103_TIM2_ATRLR_OFFSET
#define CH32V103_TIM4_ATRLR               CH32V103_TIM2_ATRLR
#define CH32V103_TIM4_ATRLR_ARR           CH32V103_TIM2_ATRLR_ARR
#define CH32V103_TIM4_ATRLR_ARR_MASK      CH32V103_TIM2_ATRLR_ARR_MASK
#define CH32V103_TIM4_CH1CVR_OFFSET       CH32V103_TIM2_CH1CVR_OFFSET
#define CH32V103_TIM4_CH1CVR              CH32V103_TIM2_CH1CVR
#define CH32V103_TIM4_CH1CVR_CCR1         CH32V103_TIM2_CH1CVR_CCR1
#define CH32V103_TIM4_CH1CVR_CCR1_MASK    CH32V103_TIM2_CH1CVR_CCR1_MASK
#define CH32V103_TIM4_CH2CVR_OFFSET       CH32V103_TIM2_CH2CVR_OFFSET
#define CH32V103_TIM4_CH2CVR              CH32V103_TIM2_CH2CVR
#define CH32V103_TIM4_CH2CVR_CCR2         CH32V103_TIM2_CH2CVR_CCR2
#define CH32V103_TIM4_CH2CVR_CCR2_MASK    CH32V103_TIM2_CH2CVR_CCR2_MASK
#define CH32V103_TIM4_CH3CVR_OFFSET       CH32V103_TIM2_CH3CVR_OFFSET
#define CH32V103_TIM4_CH3CVR              CH32V103_TIM2_CH3CVR
#define CH32V103_TIM4_CH3CVR_CCR3         CH32V103_TIM2_CH3CVR_CCR3
#define CH32V103_TIM4_CH3CVR_CCR3_MASK    CH32V103_TIM2_CH3CVR_CCR3_MASK
#define CH32V103_TIM4_CH4CVR_OFFSET       CH32V103_TIM2_CH4CVR_OFFSET
#define CH32V103_TIM4_CH4CVR              CH32V103_TIM2_CH4CVR
#define CH32V103_TIM4_CH4CVR_CCR4         CH32V103_TIM2_CH4CVR_CCR4
#define CH32V103_TIM4_CH4CVR_CCR4_MASK    CH32V103_TIM2_CH4CVR_CCR4_MASK
#define CH32V103_TIM4_DMACFGR_OFFSET      CH32V103_TIM2_DMACFGR_OFFSET
#define CH32V103_TIM4_DMACFGR             CH32V103_TIM2_DMACFGR
#define CH32V103_TIM4_DMACFGR_DBL         CH32V103_TIM2_DMACFGR_DBL
#define CH32V103_TIM4_DMACFGR_DBL_MASK    CH32V103_TIM2_DMACFGR_DBL_MASK
#define CH32V103_TIM4_DMACFGR_DBA         CH32V103_TIM2_DMACFGR_DBA
#define CH32V103_TIM4_DMACFGR_DBA_MASK    CH32V103_TIM2_DMACFGR_DBA_MASK
#define CH32V103_TIM4_DMAR_OFFSET         CH32V103_TIM2_DMAR_OFFSET
#define CH32V103_TIM4_DMAR                CH32V103_TIM2_DMAR
#define CH32V103_TIM4_DMAR_DMAB           CH32V103_TIM2_DMAR_DMAB
#define CH32V103_TIM4_DMAR_DMAB_MASK      CH32V103_TIM2_DMAR_DMAB_MASK

/* I2C1 - Inter integrated circuit */
#define CH32V103_I2C1_BASE                0x40005400
#define CH32V103_I2C1_CTLR1_OFFSET        0x0000
#define CH32V103_I2C1_CTLR1               (CH32V103_I2C1_BASE + CH32V103_I2C1_CTLR1_OFFSET)
#define CH32V103_I2C1_CTLR1_SWRST         (1 << 15) /* 8000: Software reset */
#define CH32V103_I2C1_CTLR1_ALERT         (1 << 13) /* 2000: SMBus alert */
#define CH32V103_I2C1_CTLR1_PEC           (1 << 12) /* 1000: Packet error checking */
#define CH32V103_I2C1_CTLR1_POS           (1 << 11) /* 800: Acknowledge/PEC Position (for data reception) */
#define CH32V103_I2C1_CTLR1_ACK           (1 << 10) /* 400: Acknowledge enable */
#define CH32V103_I2C1_CTLR1_STOP          (1 <<  9) /* 200: Stop generation */
#define CH32V103_I2C1_CTLR1_START         (1 <<  8) /* 100: Start generation */
#define CH32V103_I2C1_CTLR1_NOSTRETCH     (1 <<  7) /* 80: Clock stretching disable (Slave mode) */
#define CH32V103_I2C1_CTLR1_ENGC          (1 <<  6) /* 40: General call enable */
#define CH32V103_I2C1_CTLR1_ENPEC         (1 <<  5) /* 20: PEC enable */
#define CH32V103_I2C1_CTLR1_ENARP         (1 <<  4) /* 10: ARP enable */
#define CH32V103_I2C1_CTLR1_SMBTYPE       (1 <<  3) /* 08: SMBus type */
#define CH32V103_I2C1_CTLR1_SMBUS         (1 <<  1) /* 02: SMBus mode */
#define CH32V103_I2C1_CTLR1_PE            (1 <<  0) /* 01: Peripheral enable */
#define CH32V103_I2C1_CTLR2_OFFSET        0x0004
#define CH32V103_I2C1_CTLR2               (CH32V103_I2C1_BASE + CH32V103_I2C1_CTLR2_OFFSET)
#define CH32V103_I2C1_CTLR2_LAST          (1 << 12) /* 1000: DMA last transfer */
#define CH32V103_I2C1_CTLR2_DMAEN         (1 << 11) /* 800: DMA requests enable */
#define CH32V103_I2C1_CTLR2_ITBUFEN       (1 << 10) /* 400: Buffer interrupt enable */
#define CH32V103_I2C1_CTLR2_ITEVTEN       (1 <<  9) /* 200: Event interrupt enable */
#define CH32V103_I2C1_CTLR2_ITERREN       (1 <<  8) /* 100: Error interrupt enable */
#define CH32V103_I2C1_CTLR2_FREQ          (6 <<  0) /* 01: Peripheral clock frequency */
#define CH32V103_I2C1_CTLR2_FREQ_MASK          (0x3f)
#define CH32V103_I2C1_OADDR1_OFFSET       0x0008
#define CH32V103_I2C1_OADDR1              (CH32V103_I2C1_BASE + CH32V103_I2C1_OADDR1_OFFSET)
#define CH32V103_I2C1_OADDR1_ADDMODE      (1 << 15) /* 8000: Addressing mode (slave mode) */
#define CH32V103_I2C1_OADDR1_MUST1        (1 << 14) /* 4000: must set 1 bit */
#define CH32V103_I2C1_OADDR1_ADD9_8       (2 <<  8) /* 100: Interface address */
#define CH32V103_I2C1_OADDR1_ADD9_8_MASK       (0x03)
#define CH32V103_I2C1_OADDR1_ADD7_1       (7 <<  1) /* 02: Interface address */
#define CH32V103_I2C1_OADDR1_ADD7_1_MASK       (0x7f)
#define CH32V103_I2C1_OADDR1_ADD0         (1 <<  0) /* 01: Interface address */
#define CH32V103_I2C1_OADDR2_OFFSET       0x000c
#define CH32V103_I2C1_OADDR2              (CH32V103_I2C1_BASE + CH32V103_I2C1_OADDR2_OFFSET)
#define CH32V103_I2C1_OADDR2_ADD2         (7 <<  1) /* 02: Interface address */
#define CH32V103_I2C1_OADDR2_ADD2_MASK         (0x7f)
#define CH32V103_I2C1_OADDR2_ENDUAL       (1 <<  0) /* 01: Dual addressing mode enable */
#define CH32V103_I2C1_DATAR_OFFSET        0x0010
#define CH32V103_I2C1_DATAR               (CH32V103_I2C1_BASE + CH32V103_I2C1_DATAR_OFFSET)
#define CH32V103_I2C1_DATAR_DR            (8 <<  0) /* 01: 8-bit data register */
#define CH32V103_I2C1_DATAR_DR_MASK            (0xff)
#define CH32V103_I2C1_STAR1_OFFSET        0x0014
#define CH32V103_I2C1_STAR1               (CH32V103_I2C1_BASE + CH32V103_I2C1_STAR1_OFFSET)
#define CH32V103_I2C1_STAR1_SMBALERT      (1 << 15) /* 8000: SMBus alert */
#define CH32V103_I2C1_STAR1_TIMEOUT       (1 << 14) /* 4000: Timeout or Tlow error */
#define CH32V103_I2C1_STAR1_PECERR        (1 << 12) /* 1000: PEC Error in reception */
#define CH32V103_I2C1_STAR1_OVR           (1 << 11) /* 800: Overrun/Underrun */
#define CH32V103_I2C1_STAR1_AF            (1 << 10) /* 400: Acknowledge failure */
#define CH32V103_I2C1_STAR1_ARLO          (1 <<  9) /* 200: Arbitration lost (master mode) */
#define CH32V103_I2C1_STAR1_BERR          (1 <<  8) /* 100: Bus error */
#define CH32V103_I2C1_STAR1_TxE           (1 <<  7) /* 80: Data register empty (transmitters) */
#define CH32V103_I2C1_STAR1_RxNE          (1 <<  6) /* 40: Data register not empty (receivers) */
#define CH32V103_I2C1_STAR1_STOPF         (1 <<  4) /* 10: Stop detection (slave mode) */
#define CH32V103_I2C1_STAR1_ADD10         (1 <<  3) /* 08: 10-bit header sent (Master mode) */
#define CH32V103_I2C1_STAR1_BTF           (1 <<  2) /* 04: Byte transfer finished */
#define CH32V103_I2C1_STAR1_ADDR          (1 <<  1) /* 02: Address sent (master mode)/matched (slave mode) */
#define CH32V103_I2C1_STAR1_SB            (1 <<  0) /* 01: Start bit (Master mode) */
#define CH32V103_I2C1_STAR2_OFFSET        0x0018
#define CH32V103_I2C1_STAR2               (CH32V103_I2C1_BASE + CH32V103_I2C1_STAR2_OFFSET)
#define CH32V103_I2C1_STAR2_PEC           (8 <<  8) /* 100: acket error checking register */
#define CH32V103_I2C1_STAR2_PEC_MASK           (0xff)
#define CH32V103_I2C1_STAR2_DUALF         (1 <<  7) /* 80: Dual flag (Slave mode) */
#define CH32V103_I2C1_STAR2_SMBHOST       (1 <<  6) /* 40: SMBus host header (Slave mode) */
#define CH32V103_I2C1_STAR2_SMBDEFAULT    (1 <<  5) /* 20: SMBus device default address (Slave mode) */
#define CH32V103_I2C1_STAR2_GENCALL       (1 <<  4) /* 10: General call address (Slave mode) */
#define CH32V103_I2C1_STAR2_TRA           (1 <<  2) /* 04: Transmitter/receiver */
#define CH32V103_I2C1_STAR2_BUSY          (1 <<  1) /* 02: Bus busy */
#define CH32V103_I2C1_STAR2_MSL           (1 <<  0) /* 01: Master/slave */
#define CH32V103_I2C1_CKCFGR_OFFSET       0x001c
#define CH32V103_I2C1_CKCFGR              (CH32V103_I2C1_BASE + CH32V103_I2C1_CKCFGR_OFFSET)
#define CH32V103_I2C1_CKCFGR_F_S          (1 << 15) /* 8000: I2C master mode selection */
#define CH32V103_I2C1_CKCFGR_DUTY         (1 << 14) /* 4000: Fast mode duty cycle */
#define CH32V103_I2C1_CKCFGR_CCR          (12 <<  0) /* 01: Clock control register in Fast/Standard mode (Master mode) */
#define CH32V103_I2C1_CKCFGR_CCR_MASK          (0xfff)
#define CH32V103_I2C1_RTR_OFFSET          0x0020
#define CH32V103_I2C1_RTR                 (CH32V103_I2C1_BASE + CH32V103_I2C1_RTR_OFFSET)
#define CH32V103_I2C1_RTR_TRISE           (6 <<  0) /* 01: Maximum rise time in Fast/Standard mode (Master mode) */
#define CH32V103_I2C1_RTR_TRISE_MASK           (0x3f)

/* No registers defined for peripheral I2C2. Using those of I2C1. */
#define CH32V103_I2C2_BASE                0x40005800
#define CH32V103_I2C2_CTLR1_OFFSET        CH32V103_I2C1_CTLR1_OFFSET
#define CH32V103_I2C2_CTLR1               CH32V103_I2C1_CTLR1
#define CH32V103_I2C2_CTLR1_SWRST         CH32V103_I2C1_CTLR1_SWRST
#define CH32V103_I2C2_CTLR1_ALERT         CH32V103_I2C1_CTLR1_ALERT
#define CH32V103_I2C2_CTLR1_PEC           CH32V103_I2C1_CTLR1_PEC
#define CH32V103_I2C2_CTLR1_POS           CH32V103_I2C1_CTLR1_POS
#define CH32V103_I2C2_CTLR1_ACK           CH32V103_I2C1_CTLR1_ACK
#define CH32V103_I2C2_CTLR1_STOP          CH32V103_I2C1_CTLR1_STOP
#define CH32V103_I2C2_CTLR1_START         CH32V103_I2C1_CTLR1_START
#define CH32V103_I2C2_CTLR1_NOSTRETCH     CH32V103_I2C1_CTLR1_NOSTRETCH
#define CH32V103_I2C2_CTLR1_ENGC          CH32V103_I2C1_CTLR1_ENGC
#define CH32V103_I2C2_CTLR1_ENPEC         CH32V103_I2C1_CTLR1_ENPEC
#define CH32V103_I2C2_CTLR1_ENARP         CH32V103_I2C1_CTLR1_ENARP
#define CH32V103_I2C2_CTLR1_SMBTYPE       CH32V103_I2C1_CTLR1_SMBTYPE
#define CH32V103_I2C2_CTLR1_SMBUS         CH32V103_I2C1_CTLR1_SMBUS
#define CH32V103_I2C2_CTLR1_PE            CH32V103_I2C1_CTLR1_PE
#define CH32V103_I2C2_CTLR2_OFFSET        CH32V103_I2C1_CTLR2_OFFSET
#define CH32V103_I2C2_CTLR2               CH32V103_I2C1_CTLR2
#define CH32V103_I2C2_CTLR2_LAST          CH32V103_I2C1_CTLR2_LAST
#define CH32V103_I2C2_CTLR2_DMAEN         CH32V103_I2C1_CTLR2_DMAEN
#define CH32V103_I2C2_CTLR2_ITBUFEN       CH32V103_I2C1_CTLR2_ITBUFEN
#define CH32V103_I2C2_CTLR2_ITEVTEN       CH32V103_I2C1_CTLR2_ITEVTEN
#define CH32V103_I2C2_CTLR2_ITERREN       CH32V103_I2C1_CTLR2_ITERREN
#define CH32V103_I2C2_CTLR2_FREQ          CH32V103_I2C1_CTLR2_FREQ
#define CH32V103_I2C2_CTLR2_FREQ_MASK     CH32V103_I2C1_CTLR2_FREQ_MASK
#define CH32V103_I2C2_OADDR1_OFFSET       CH32V103_I2C1_OADDR1_OFFSET
#define CH32V103_I2C2_OADDR1              CH32V103_I2C1_OADDR1
#define CH32V103_I2C2_OADDR1_ADDMODE      CH32V103_I2C1_OADDR1_ADDMODE
#define CH32V103_I2C2_OADDR1_MUST1        CH32V103_I2C1_OADDR1_MUST1
#define CH32V103_I2C2_OADDR1_ADD9_8       CH32V103_I2C1_OADDR1_ADD9_8
#define CH32V103_I2C2_OADDR1_ADD9_8_MASK  CH32V103_I2C1_OADDR1_ADD9_8_MASK
#define CH32V103_I2C2_OADDR1_ADD7_1       CH32V103_I2C1_OADDR1_ADD7_1
#define CH32V103_I2C2_OADDR1_ADD7_1_MASK  CH32V103_I2C1_OADDR1_ADD7_1_MASK
#define CH32V103_I2C2_OADDR1_ADD0         CH32V103_I2C1_OADDR1_ADD0
#define CH32V103_I2C2_OADDR2_OFFSET       CH32V103_I2C1_OADDR2_OFFSET
#define CH32V103_I2C2_OADDR2              CH32V103_I2C1_OADDR2
#define CH32V103_I2C2_OADDR2_ADD2         CH32V103_I2C1_OADDR2_ADD2
#define CH32V103_I2C2_OADDR2_ADD2_MASK    CH32V103_I2C1_OADDR2_ADD2_MASK
#define CH32V103_I2C2_OADDR2_ENDUAL       CH32V103_I2C1_OADDR2_ENDUAL
#define CH32V103_I2C2_DATAR_OFFSET        CH32V103_I2C1_DATAR_OFFSET
#define CH32V103_I2C2_DATAR               CH32V103_I2C1_DATAR
#define CH32V103_I2C2_DATAR_DR            CH32V103_I2C1_DATAR_DR
#define CH32V103_I2C2_DATAR_DR_MASK       CH32V103_I2C1_DATAR_DR_MASK
#define CH32V103_I2C2_STAR1_OFFSET        CH32V103_I2C1_STAR1_OFFSET
#define CH32V103_I2C2_STAR1               CH32V103_I2C1_STAR1
#define CH32V103_I2C2_STAR1_SMBALERT      CH32V103_I2C1_STAR1_SMBALERT
#define CH32V103_I2C2_STAR1_TIMEOUT       CH32V103_I2C1_STAR1_TIMEOUT
#define CH32V103_I2C2_STAR1_PECERR        CH32V103_I2C1_STAR1_PECERR
#define CH32V103_I2C2_STAR1_OVR           CH32V103_I2C1_STAR1_OVR
#define CH32V103_I2C2_STAR1_AF            CH32V103_I2C1_STAR1_AF
#define CH32V103_I2C2_STAR1_ARLO          CH32V103_I2C1_STAR1_ARLO
#define CH32V103_I2C2_STAR1_BERR          CH32V103_I2C1_STAR1_BERR
#define CH32V103_I2C2_STAR1_TxE           CH32V103_I2C1_STAR1_TxE
#define CH32V103_I2C2_STAR1_RxNE          CH32V103_I2C1_STAR1_RxNE
#define CH32V103_I2C2_STAR1_STOPF         CH32V103_I2C1_STAR1_STOPF
#define CH32V103_I2C2_STAR1_ADD10         CH32V103_I2C1_STAR1_ADD10
#define CH32V103_I2C2_STAR1_BTF           CH32V103_I2C1_STAR1_BTF
#define CH32V103_I2C2_STAR1_ADDR          CH32V103_I2C1_STAR1_ADDR
#define CH32V103_I2C2_STAR1_SB            CH32V103_I2C1_STAR1_SB
#define CH32V103_I2C2_STAR2_OFFSET        CH32V103_I2C1_STAR2_OFFSET
#define CH32V103_I2C2_STAR2               CH32V103_I2C1_STAR2
#define CH32V103_I2C2_STAR2_PEC           CH32V103_I2C1_STAR2_PEC
#define CH32V103_I2C2_STAR2_PEC_MASK      CH32V103_I2C1_STAR2_PEC_MASK
#define CH32V103_I2C2_STAR2_DUALF         CH32V103_I2C1_STAR2_DUALF
#define CH32V103_I2C2_STAR2_SMBHOST       CH32V103_I2C1_STAR2_SMBHOST
#define CH32V103_I2C2_STAR2_SMBDEFAULT    CH32V103_I2C1_STAR2_SMBDEFAULT
#define CH32V103_I2C2_STAR2_GENCALL       CH32V103_I2C1_STAR2_GENCALL
#define CH32V103_I2C2_STAR2_TRA           CH32V103_I2C1_STAR2_TRA
#define CH32V103_I2C2_STAR2_BUSY          CH32V103_I2C1_STAR2_BUSY
#define CH32V103_I2C2_STAR2_MSL           CH32V103_I2C1_STAR2_MSL
#define CH32V103_I2C2_CKCFGR_OFFSET       CH32V103_I2C1_CKCFGR_OFFSET
#define CH32V103_I2C2_CKCFGR              CH32V103_I2C1_CKCFGR
#define CH32V103_I2C2_CKCFGR_F_S          CH32V103_I2C1_CKCFGR_F_S
#define CH32V103_I2C2_CKCFGR_DUTY         CH32V103_I2C1_CKCFGR_DUTY
#define CH32V103_I2C2_CKCFGR_CCR          CH32V103_I2C1_CKCFGR_CCR
#define CH32V103_I2C2_CKCFGR_CCR_MASK     CH32V103_I2C1_CKCFGR_CCR_MASK
#define CH32V103_I2C2_RTR_OFFSET          CH32V103_I2C1_RTR_OFFSET
#define CH32V103_I2C2_RTR                 CH32V103_I2C1_RTR
#define CH32V103_I2C2_RTR_TRISE           CH32V103_I2C1_RTR_TRISE
#define CH32V103_I2C2_RTR_TRISE_MASK      CH32V103_I2C1_RTR_TRISE_MASK

/* SPI1 - Serial peripheral interface */
#define CH32V103_SPI1_BASE                0x40013000
#define CH32V103_SPI1_CTLR1_OFFSET        0x0000
#define CH32V103_SPI1_CTLR1               (CH32V103_SPI1_BASE + CH32V103_SPI1_CTLR1_OFFSET)
#define CH32V103_SPI1_CTLR1_BIDIMODE      (1 << 15) /* 8000: Bidirectional data mode enable */
#define CH32V103_SPI1_CTLR1_BIDIOE        (1 << 14) /* 4000: Output enable in bidirectional mode */
#define CH32V103_SPI1_CTLR1_CRCEN         (1 << 13) /* 2000: Hardware CRC calculation enable */
#define CH32V103_SPI1_CTLR1_CRCNEXT       (1 << 12) /* 1000: CRC transfer next */
#define CH32V103_SPI1_CTLR1_DFF           (1 << 11) /* 800: Data frame format */
#define CH32V103_SPI1_CTLR1_RXONLY        (1 << 10) /* 400: Receive only */
#define CH32V103_SPI1_CTLR1_SSM           (1 <<  9) /* 200: Software slave management */
#define CH32V103_SPI1_CTLR1_SSI           (1 <<  8) /* 100: Internal slave select */
#define CH32V103_SPI1_CTLR1_LSBFIRST      (1 <<  7) /* 80: Frame format */
#define CH32V103_SPI1_CTLR1_SPE           (1 <<  6) /* 40: SPI enable */
#define CH32V103_SPI1_CTLR1_BR            (3 <<  3) /* 08: Baud rate control */
#define CH32V103_SPI1_CTLR1_BR_MASK            (0x07)
#define CH32V103_SPI1_CTLR1_MSTR          (1 <<  2) /* 04: Master selection */
#define CH32V103_SPI1_CTLR1_CPOL          (1 <<  1) /* 02: Clock polarity */
#define CH32V103_SPI1_CTLR1_CPHA          (1 <<  0) /* 01: Clock phase */
#define CH32V103_SPI1_CTLR2_OFFSET        0x0004
#define CH32V103_SPI1_CTLR2               (CH32V103_SPI1_BASE + CH32V103_SPI1_CTLR2_OFFSET)
#define CH32V103_SPI1_CTLR2_TXEIE         (1 <<  7) /* 80: Tx buffer empty interrupt enable */
#define CH32V103_SPI1_CTLR2_RXNEIE        (1 <<  6) /* 40: RX buffer not empty interrupt enable */
#define CH32V103_SPI1_CTLR2_ERRIE         (1 <<  5) /* 20: Error interrupt enable */
#define CH32V103_SPI1_CTLR2_SSOE          (1 <<  2) /* 04: SS output enable */
#define CH32V103_SPI1_CTLR2_TXDMAEN       (1 <<  1) /* 02: Tx buffer DMA enable */
#define CH32V103_SPI1_CTLR2_RXDMAEN       (1 <<  0) /* 01: Rx buffer DMA enable */
#define CH32V103_SPI1_STATR_OFFSET        0x0008
#define CH32V103_SPI1_STATR               (CH32V103_SPI1_BASE + CH32V103_SPI1_STATR_OFFSET)
#define CH32V103_SPI1_STATR_BSY           (1 <<  7) /* 80: Busy flag */
#define CH32V103_SPI1_STATR_OVR           (1 <<  6) /* 40: Overrun flag */
#define CH32V103_SPI1_STATR_MODF          (1 <<  5) /* 20: Mode fault */
#define CH32V103_SPI1_STATR_CRCERR        (1 <<  4) /* 10: CRC error flag */
#define CH32V103_SPI1_STATR_TXE           (1 <<  1) /* 02: Transmit buffer empty */
#define CH32V103_SPI1_STATR_RXNE          (1 <<  0) /* 01: Receive buffer not empty */
#define CH32V103_SPI1_DATAR_OFFSET        0x000c
#define CH32V103_SPI1_DATAR               (CH32V103_SPI1_BASE + CH32V103_SPI1_DATAR_OFFSET)
#define CH32V103_SPI1_DATAR_DATAR         (16 <<  0) /* 01: Data register */
#define CH32V103_SPI1_DATAR_DATAR_MASK         (0xffff)
#define CH32V103_SPI1_CRCR_OFFSET         0x0010
#define CH32V103_SPI1_CRCR                (CH32V103_SPI1_BASE + CH32V103_SPI1_CRCR_OFFSET)
#define CH32V103_SPI1_CRCR_CRCPOLY        (16 <<  0) /* 01: CRC polynomial register */
#define CH32V103_SPI1_CRCR_CRCPOLY_MASK        (0xffff)
#define CH32V103_SPI1_RCRCR_OFFSET        0x0014
#define CH32V103_SPI1_RCRCR               (CH32V103_SPI1_BASE + CH32V103_SPI1_RCRCR_OFFSET)
#define CH32V103_SPI1_RCRCR_RxCRC         (16 <<  0) /* 01: Rx CRC register */
#define CH32V103_SPI1_RCRCR_RxCRC_MASK         (0xffff)
#define CH32V103_SPI1_TCRCR_OFFSET        0x0018
#define CH32V103_SPI1_TCRCR               (CH32V103_SPI1_BASE + CH32V103_SPI1_TCRCR_OFFSET)
#define CH32V103_SPI1_TCRCR_TxCRC         (16 <<  0) /* 01: Tx CRC register */
#define CH32V103_SPI1_TCRCR_TxCRC_MASK         (0xffff)
#define CH32V103_SPI1_I2SCFGR_OFFSET      0x001c
#define CH32V103_SPI1_I2SCFGR             (CH32V103_SPI1_BASE + CH32V103_SPI1_I2SCFGR_OFFSET)
#define CH32V103_SPI1_I2SCFGR_I2SMOD      (1 << 11) /* 800: I2S mode selection */
#define CH32V103_SPI1_I2SCFGR_I2SE        (1 << 10) /* 400: I2S Enable */
#define CH32V103_SPI1_I2SCFGR_I2SCFG      (2 <<  8) /* 100: I2S configuration mode */
#define CH32V103_SPI1_I2SCFGR_I2SCFG_MASK      (0x03)
#define CH32V103_SPI1_I2SCFGR_PCMSYNC     (1 <<  7) /* 80: PCM frame synchronization */
#define CH32V103_SPI1_I2SCFGR_I2SSTD      (2 <<  4) /* 10: I2S standard selection */
#define CH32V103_SPI1_I2SCFGR_I2SSTD_MASK      (0x03)
#define CH32V103_SPI1_I2SCFGR_CKPOL       (1 <<  3) /* 08: Steady state clock polarity */
#define CH32V103_SPI1_I2SCFGR_DATLEN      (2 <<  1) /* 02: Data length to be transferred */
#define CH32V103_SPI1_I2SCFGR_DATLEN_MASK      (0x03)
#define CH32V103_SPI1_I2SCFGR_CHLEN       (1 <<  0) /* 01: Channel length (number of bits per audio channel) */
#define CH32V103_SPI1_I2SPR_OFFSET        0x0020
#define CH32V103_SPI1_I2SPR               (CH32V103_SPI1_BASE + CH32V103_SPI1_I2SPR_OFFSET)
#define CH32V103_SPI1_I2SPR_MCKOE         (1 <<  9) /* 200: Master clock output enable */
#define CH32V103_SPI1_I2SPR_ODD           (1 <<  8) /* 100: Odd factor for the prescaler */
#define CH32V103_SPI1_I2SPR_I2SDIV        (8 <<  0) /* 01: I2S Linear prescaler */
#define CH32V103_SPI1_I2SPR_I2SDIV_MASK        (0xff)

/* No registers defined for peripheral SPI2. Using those of SPI1. */
#define CH32V103_SPI2_BASE                0x40003800
#define CH32V103_SPI2_CTLR1_OFFSET        CH32V103_SPI1_CTLR1_OFFSET
#define CH32V103_SPI2_CTLR1               CH32V103_SPI1_CTLR1
#define CH32V103_SPI2_CTLR1_BIDIMODE      CH32V103_SPI1_CTLR1_BIDIMODE
#define CH32V103_SPI2_CTLR1_BIDIOE        CH32V103_SPI1_CTLR1_BIDIOE
#define CH32V103_SPI2_CTLR1_CRCEN         CH32V103_SPI1_CTLR1_CRCEN
#define CH32V103_SPI2_CTLR1_CRCNEXT       CH32V103_SPI1_CTLR1_CRCNEXT
#define CH32V103_SPI2_CTLR1_DFF           CH32V103_SPI1_CTLR1_DFF
#define CH32V103_SPI2_CTLR1_RXONLY        CH32V103_SPI1_CTLR1_RXONLY
#define CH32V103_SPI2_CTLR1_SSM           CH32V103_SPI1_CTLR1_SSM
#define CH32V103_SPI2_CTLR1_SSI           CH32V103_SPI1_CTLR1_SSI
#define CH32V103_SPI2_CTLR1_LSBFIRST      CH32V103_SPI1_CTLR1_LSBFIRST
#define CH32V103_SPI2_CTLR1_SPE           CH32V103_SPI1_CTLR1_SPE
#define CH32V103_SPI2_CTLR1_BR            CH32V103_SPI1_CTLR1_BR
#define CH32V103_SPI2_CTLR1_BR_MASK       CH32V103_SPI1_CTLR1_BR_MASK
#define CH32V103_SPI2_CTLR1_MSTR          CH32V103_SPI1_CTLR1_MSTR
#define CH32V103_SPI2_CTLR1_CPOL          CH32V103_SPI1_CTLR1_CPOL
#define CH32V103_SPI2_CTLR1_CPHA          CH32V103_SPI1_CTLR1_CPHA
#define CH32V103_SPI2_CTLR2_OFFSET        CH32V103_SPI1_CTLR2_OFFSET
#define CH32V103_SPI2_CTLR2               CH32V103_SPI1_CTLR2
#define CH32V103_SPI2_CTLR2_TXEIE         CH32V103_SPI1_CTLR2_TXEIE
#define CH32V103_SPI2_CTLR2_RXNEIE        CH32V103_SPI1_CTLR2_RXNEIE
#define CH32V103_SPI2_CTLR2_ERRIE         CH32V103_SPI1_CTLR2_ERRIE
#define CH32V103_SPI2_CTLR2_SSOE          CH32V103_SPI1_CTLR2_SSOE
#define CH32V103_SPI2_CTLR2_TXDMAEN       CH32V103_SPI1_CTLR2_TXDMAEN
#define CH32V103_SPI2_CTLR2_RXDMAEN       CH32V103_SPI1_CTLR2_RXDMAEN
#define CH32V103_SPI2_STATR_OFFSET        CH32V103_SPI1_STATR_OFFSET
#define CH32V103_SPI2_STATR               CH32V103_SPI1_STATR
#define CH32V103_SPI2_STATR_BSY           CH32V103_SPI1_STATR_BSY
#define CH32V103_SPI2_STATR_OVR           CH32V103_SPI1_STATR_OVR
#define CH32V103_SPI2_STATR_MODF          CH32V103_SPI1_STATR_MODF
#define CH32V103_SPI2_STATR_CRCERR        CH32V103_SPI1_STATR_CRCERR
#define CH32V103_SPI2_STATR_TXE           CH32V103_SPI1_STATR_TXE
#define CH32V103_SPI2_STATR_RXNE          CH32V103_SPI1_STATR_RXNE
#define CH32V103_SPI2_DATAR_OFFSET        CH32V103_SPI1_DATAR_OFFSET
#define CH32V103_SPI2_DATAR               CH32V103_SPI1_DATAR
#define CH32V103_SPI2_DATAR_DATAR         CH32V103_SPI1_DATAR_DATAR
#define CH32V103_SPI2_DATAR_DATAR_MASK    CH32V103_SPI1_DATAR_DATAR_MASK
#define CH32V103_SPI2_CRCR_OFFSET         CH32V103_SPI1_CRCR_OFFSET
#define CH32V103_SPI2_CRCR                CH32V103_SPI1_CRCR
#define CH32V103_SPI2_CRCR_CRCPOLY        CH32V103_SPI1_CRCR_CRCPOLY
#define CH32V103_SPI2_CRCR_CRCPOLY_MASK   CH32V103_SPI1_CRCR_CRCPOLY_MASK
#define CH32V103_SPI2_RCRCR_OFFSET        CH32V103_SPI1_RCRCR_OFFSET
#define CH32V103_SPI2_RCRCR               CH32V103_SPI1_RCRCR
#define CH32V103_SPI2_RCRCR_RxCRC         CH32V103_SPI1_RCRCR_RxCRC
#define CH32V103_SPI2_RCRCR_RxCRC_MASK    CH32V103_SPI1_RCRCR_RxCRC_MASK
#define CH32V103_SPI2_TCRCR_OFFSET        CH32V103_SPI1_TCRCR_OFFSET
#define CH32V103_SPI2_TCRCR               CH32V103_SPI1_TCRCR
#define CH32V103_SPI2_TCRCR_TxCRC         CH32V103_SPI1_TCRCR_TxCRC
#define CH32V103_SPI2_TCRCR_TxCRC_MASK    CH32V103_SPI1_TCRCR_TxCRC_MASK
#define CH32V103_SPI2_I2SCFGR_OFFSET      CH32V103_SPI1_I2SCFGR_OFFSET
#define CH32V103_SPI2_I2SCFGR             CH32V103_SPI1_I2SCFGR
#define CH32V103_SPI2_I2SCFGR_I2SMOD      CH32V103_SPI1_I2SCFGR_I2SMOD
#define CH32V103_SPI2_I2SCFGR_I2SE        CH32V103_SPI1_I2SCFGR_I2SE
#define CH32V103_SPI2_I2SCFGR_I2SCFG      CH32V103_SPI1_I2SCFGR_I2SCFG
#define CH32V103_SPI2_I2SCFGR_I2SCFG_MASK CH32V103_SPI1_I2SCFGR_I2SCFG_MASK
#define CH32V103_SPI2_I2SCFGR_PCMSYNC     CH32V103_SPI1_I2SCFGR_PCMSYNC
#define CH32V103_SPI2_I2SCFGR_I2SSTD      CH32V103_SPI1_I2SCFGR_I2SSTD
#define CH32V103_SPI2_I2SCFGR_I2SSTD_MASK CH32V103_SPI1_I2SCFGR_I2SSTD_MASK
#define CH32V103_SPI2_I2SCFGR_CKPOL       CH32V103_SPI1_I2SCFGR_CKPOL
#define CH32V103_SPI2_I2SCFGR_DATLEN      CH32V103_SPI1_I2SCFGR_DATLEN
#define CH32V103_SPI2_I2SCFGR_DATLEN_MASK CH32V103_SPI1_I2SCFGR_DATLEN_MASK
#define CH32V103_SPI2_I2SCFGR_CHLEN       CH32V103_SPI1_I2SCFGR_CHLEN
#define CH32V103_SPI2_I2SPR_OFFSET        CH32V103_SPI1_I2SPR_OFFSET
#define CH32V103_SPI2_I2SPR               CH32V103_SPI1_I2SPR
#define CH32V103_SPI2_I2SPR_MCKOE         CH32V103_SPI1_I2SPR_MCKOE
#define CH32V103_SPI2_I2SPR_ODD           CH32V103_SPI1_I2SPR_ODD
#define CH32V103_SPI2_I2SPR_I2SDIV        CH32V103_SPI1_I2SPR_I2SDIV
#define CH32V103_SPI2_I2SPR_I2SDIV_MASK   CH32V103_SPI1_I2SPR_I2SDIV_MASK

/* USART1 - Universal synchronous asynchronous receiver transmitter */
#define CH32V103_USART1_BASE              0x40013800
#define CH32V103_USART1_STATR_OFFSET      0x0000
#define CH32V103_USART1_STATR             (CH32V103_USART1_BASE + CH32V103_USART1_STATR_OFFSET)
#define CH32V103_USART1_STATR_CTS         (1 <<  9) /* 200: CTS flag */
#define CH32V103_USART1_STATR_LBD         (1 <<  8) /* 100: LIN break detection flag */
#define CH32V103_USART1_STATR_TXE         (1 <<  7) /* 80: Transmit data register empty */
#define CH32V103_USART1_STATR_TC          (1 <<  6) /* 40: Transmission complete */
#define CH32V103_USART1_STATR_RXNE        (1 <<  5) /* 20: Read data register not empty */
#define CH32V103_USART1_STATR_IDLE        (1 <<  4) /* 10: IDLE line detected */
#define CH32V103_USART1_STATR_ORE         (1 <<  3) /* 08: Overrun error */
#define CH32V103_USART1_STATR_NE          (1 <<  2) /* 04: Noise error flag */
#define CH32V103_USART1_STATR_FE          (1 <<  1) /* 02: Framing error */
#define CH32V103_USART1_STATR_PE          (1 <<  0) /* 01: Parity error */
#define CH32V103_USART1_DATAR_OFFSET      0x0004
#define CH32V103_USART1_DATAR             (CH32V103_USART1_BASE + CH32V103_USART1_DATAR_OFFSET)
#define CH32V103_USART1_DATAR_DR          (9 <<  0) /* 01: Data value */
#define CH32V103_USART1_DATAR_DR_MASK          (0x1ff)
#define CH32V103_USART1_BRR_OFFSET        0x0008
#define CH32V103_USART1_BRR               (CH32V103_USART1_BASE + CH32V103_USART1_BRR_OFFSET)
#define CH32V103_USART1_BRR_DIV_Mantissa  (12 <<  4) /* 10: mantissa of USARTDIV */
#define CH32V103_USART1_BRR_DIV_Mantissa_MASK  (0xfff)
#define CH32V103_USART1_BRR_DIV_Fraction  (4 <<  0) /* 01: fraction of USARTDIV */
#define CH32V103_USART1_BRR_DIV_Fraction_MASK  (0x0f)
#define CH32V103_USART1_CTLR1_OFFSET      0x000c
#define CH32V103_USART1_CTLR1             (CH32V103_USART1_BASE + CH32V103_USART1_CTLR1_OFFSET)
#define CH32V103_USART1_CTLR1_UE          (1 << 13) /* 2000: USART enable */
#define CH32V103_USART1_CTLR1_M           (1 << 12) /* 1000: Word length */
#define CH32V103_USART1_CTLR1_WAKE        (1 << 11) /* 800: Wakeup method */
#define CH32V103_USART1_CTLR1_PCE         (1 << 10) /* 400: Parity control enable */
#define CH32V103_USART1_CTLR1_PS          (1 <<  9) /* 200: Parity selection */
#define CH32V103_USART1_CTLR1_PEIE        (1 <<  8) /* 100: PE interrupt enable */
#define CH32V103_USART1_CTLR1_TXEIE       (1 <<  7) /* 80: TXE interrupt enable */
#define CH32V103_USART1_CTLR1_TCIE        (1 <<  6) /* 40: Transmission complete interrupt enable */
#define CH32V103_USART1_CTLR1_RXNEIE      (1 <<  5) /* 20: RXNE interrupt enable */
#define CH32V103_USART1_CTLR1_IDLEIE      (1 <<  4) /* 10: IDLE interrupt enable */
#define CH32V103_USART1_CTLR1_TE          (1 <<  3) /* 08: Transmitter enable */
#define CH32V103_USART1_CTLR1_RE          (1 <<  2) /* 04: Receiver enable */
#define CH32V103_USART1_CTLR1_RWU         (1 <<  1) /* 02: Receiver wakeup */
#define CH32V103_USART1_CTLR1_SBK         (1 <<  0) /* 01: Send break */
#define CH32V103_USART1_CTLR2_OFFSET      0x0010
#define CH32V103_USART1_CTLR2             (CH32V103_USART1_BASE + CH32V103_USART1_CTLR2_OFFSET)
#define CH32V103_USART1_CTLR2_LINEN       (1 << 14) /* 4000: LIN mode enable */
#define CH32V103_USART1_CTLR2_STOP        (2 << 12) /* 1000: STOP bits */
#define CH32V103_USART1_CTLR2_STOP_MASK        (0x03)
#define CH32V103_USART1_CTLR2_CLKEN       (1 << 11) /* 800: Clock enable */
#define CH32V103_USART1_CTLR2_CPOL        (1 << 10) /* 400: Clock polarity */
#define CH32V103_USART1_CTLR2_CPHA        (1 <<  9) /* 200: Clock phase */
#define CH32V103_USART1_CTLR2_LBCL        (1 <<  8) /* 100: Last bit clock pulse */
#define CH32V103_USART1_CTLR2_LBDIE       (1 <<  6) /* 40: LIN break detection interrupt enable */
#define CH32V103_USART1_CTLR2_LBDL        (1 <<  5) /* 20: lin break detection length */
#define CH32V103_USART1_CTLR2_ADD         (4 <<  0) /* 01: Address of the USART node */
#define CH32V103_USART1_CTLR2_ADD_MASK         (0x0f)
#define CH32V103_USART1_CTLR3_OFFSET      0x0014
#define CH32V103_USART1_CTLR3             (CH32V103_USART1_BASE + CH32V103_USART1_CTLR3_OFFSET)
#define CH32V103_USART1_CTLR3_CTSIE       (1 << 10) /* 400: CTS interrupt enable */
#define CH32V103_USART1_CTLR3_CTSE        (1 <<  9) /* 200: CTS enable */
#define CH32V103_USART1_CTLR3_RTSE        (1 <<  8) /* 100: RTS enable */
#define CH32V103_USART1_CTLR3_DMAT        (1 <<  7) /* 80: DMA enable transmitter */
#define CH32V103_USART1_CTLR3_DMAR        (1 <<  6) /* 40: DMA enable receiver */
#define CH32V103_USART1_CTLR3_SCEN        (1 <<  5) /* 20: Smartcard mode enable */
#define CH32V103_USART1_CTLR3_NACK        (1 <<  4) /* 10: Smartcard NACK enable */
#define CH32V103_USART1_CTLR3_HDSEL       (1 <<  3) /* 08: Half-duplex selection */
#define CH32V103_USART1_CTLR3_IRLP        (1 <<  2) /* 04: IrDA low-power */
#define CH32V103_USART1_CTLR3_IREN        (1 <<  1) /* 02: IrDA mode enable */
#define CH32V103_USART1_CTLR3_EIE         (1 <<  0) /* 01: Error interrupt enable */
#define CH32V103_USART1_GPR_OFFSET        0x0018
#define CH32V103_USART1_GPR               (CH32V103_USART1_BASE + CH32V103_USART1_GPR_OFFSET)
#define CH32V103_USART1_GPR_GT            (8 <<  8) /* 100: Guard time value */
#define CH32V103_USART1_GPR_GT_MASK            (0xff)
#define CH32V103_USART1_GPR_PSC           (8 <<  0) /* 01: Prescaler value */
#define CH32V103_USART1_GPR_PSC_MASK           (0xff)

/* No registers defined for peripheral USART2. Using those of USART1. */
#define CH32V103_USART2_BASE              0x40004400
#define CH32V103_USART2_STATR_OFFSET      CH32V103_USART1_STATR_OFFSET
#define CH32V103_USART2_STATR             CH32V103_USART1_STATR
#define CH32V103_USART2_STATR_CTS         CH32V103_USART1_STATR_CTS
#define CH32V103_USART2_STATR_LBD         CH32V103_USART1_STATR_LBD
#define CH32V103_USART2_STATR_TXE         CH32V103_USART1_STATR_TXE
#define CH32V103_USART2_STATR_TC          CH32V103_USART1_STATR_TC
#define CH32V103_USART2_STATR_RXNE        CH32V103_USART1_STATR_RXNE
#define CH32V103_USART2_STATR_IDLE        CH32V103_USART1_STATR_IDLE
#define CH32V103_USART2_STATR_ORE         CH32V103_USART1_STATR_ORE
#define CH32V103_USART2_STATR_NE          CH32V103_USART1_STATR_NE
#define CH32V103_USART2_STATR_FE          CH32V103_USART1_STATR_FE
#define CH32V103_USART2_STATR_PE          CH32V103_USART1_STATR_PE
#define CH32V103_USART2_DATAR_OFFSET      CH32V103_USART1_DATAR_OFFSET
#define CH32V103_USART2_DATAR             CH32V103_USART1_DATAR
#define CH32V103_USART2_DATAR_DR          CH32V103_USART1_DATAR_DR
#define CH32V103_USART2_DATAR_DR_MASK     CH32V103_USART1_DATAR_DR_MASK
#define CH32V103_USART2_BRR_OFFSET        CH32V103_USART1_BRR_OFFSET
#define CH32V103_USART2_BRR               CH32V103_USART1_BRR
#define CH32V103_USART2_BRR_DIV_Mantissa  CH32V103_USART1_BRR_DIV_Mantissa
#define CH32V103_USART2_BRR_DIV_Mantissa_MASK CH32V103_USART1_BRR_DIV_Mantissa_MASK
#define CH32V103_USART2_BRR_DIV_Fraction  CH32V103_USART1_BRR_DIV_Fraction
#define CH32V103_USART2_BRR_DIV_Fraction_MASK CH32V103_USART1_BRR_DIV_Fraction_MASK
#define CH32V103_USART2_CTLR1_OFFSET      CH32V103_USART1_CTLR1_OFFSET
#define CH32V103_USART2_CTLR1             CH32V103_USART1_CTLR1
#define CH32V103_USART2_CTLR1_UE          CH32V103_USART1_CTLR1_UE
#define CH32V103_USART2_CTLR1_M           CH32V103_USART1_CTLR1_M
#define CH32V103_USART2_CTLR1_WAKE        CH32V103_USART1_CTLR1_WAKE
#define CH32V103_USART2_CTLR1_PCE         CH32V103_USART1_CTLR1_PCE
#define CH32V103_USART2_CTLR1_PS          CH32V103_USART1_CTLR1_PS
#define CH32V103_USART2_CTLR1_PEIE        CH32V103_USART1_CTLR1_PEIE
#define CH32V103_USART2_CTLR1_TXEIE       CH32V103_USART1_CTLR1_TXEIE
#define CH32V103_USART2_CTLR1_TCIE        CH32V103_USART1_CTLR1_TCIE
#define CH32V103_USART2_CTLR1_RXNEIE      CH32V103_USART1_CTLR1_RXNEIE
#define CH32V103_USART2_CTLR1_IDLEIE      CH32V103_USART1_CTLR1_IDLEIE
#define CH32V103_USART2_CTLR1_TE          CH32V103_USART1_CTLR1_TE
#define CH32V103_USART2_CTLR1_RE          CH32V103_USART1_CTLR1_RE
#define CH32V103_USART2_CTLR1_RWU         CH32V103_USART1_CTLR1_RWU
#define CH32V103_USART2_CTLR1_SBK         CH32V103_USART1_CTLR1_SBK
#define CH32V103_USART2_CTLR2_OFFSET      CH32V103_USART1_CTLR2_OFFSET
#define CH32V103_USART2_CTLR2             CH32V103_USART1_CTLR2
#define CH32V103_USART2_CTLR2_LINEN       CH32V103_USART1_CTLR2_LINEN
#define CH32V103_USART2_CTLR2_STOP        CH32V103_USART1_CTLR2_STOP
#define CH32V103_USART2_CTLR2_STOP_MASK   CH32V103_USART1_CTLR2_STOP_MASK
#define CH32V103_USART2_CTLR2_CLKEN       CH32V103_USART1_CTLR2_CLKEN
#define CH32V103_USART2_CTLR2_CPOL        CH32V103_USART1_CTLR2_CPOL
#define CH32V103_USART2_CTLR2_CPHA        CH32V103_USART1_CTLR2_CPHA
#define CH32V103_USART2_CTLR2_LBCL        CH32V103_USART1_CTLR2_LBCL
#define CH32V103_USART2_CTLR2_LBDIE       CH32V103_USART1_CTLR2_LBDIE
#define CH32V103_USART2_CTLR2_LBDL        CH32V103_USART1_CTLR2_LBDL
#define CH32V103_USART2_CTLR2_ADD         CH32V103_USART1_CTLR2_ADD
#define CH32V103_USART2_CTLR2_ADD_MASK    CH32V103_USART1_CTLR2_ADD_MASK
#define CH32V103_USART2_CTLR3_OFFSET      CH32V103_USART1_CTLR3_OFFSET
#define CH32V103_USART2_CTLR3             CH32V103_USART1_CTLR3
#define CH32V103_USART2_CTLR3_CTSIE       CH32V103_USART1_CTLR3_CTSIE
#define CH32V103_USART2_CTLR3_CTSE        CH32V103_USART1_CTLR3_CTSE
#define CH32V103_USART2_CTLR3_RTSE        CH32V103_USART1_CTLR3_RTSE
#define CH32V103_USART2_CTLR3_DMAT        CH32V103_USART1_CTLR3_DMAT
#define CH32V103_USART2_CTLR3_DMAR        CH32V103_USART1_CTLR3_DMAR
#define CH32V103_USART2_CTLR3_SCEN        CH32V103_USART1_CTLR3_SCEN
#define CH32V103_USART2_CTLR3_NACK        CH32V103_USART1_CTLR3_NACK
#define CH32V103_USART2_CTLR3_HDSEL       CH32V103_USART1_CTLR3_HDSEL
#define CH32V103_USART2_CTLR3_IRLP        CH32V103_USART1_CTLR3_IRLP
#define CH32V103_USART2_CTLR3_IREN        CH32V103_USART1_CTLR3_IREN
#define CH32V103_USART2_CTLR3_EIE         CH32V103_USART1_CTLR3_EIE
#define CH32V103_USART2_GPR_OFFSET        CH32V103_USART1_GPR_OFFSET
#define CH32V103_USART2_GPR               CH32V103_USART1_GPR
#define CH32V103_USART2_GPR_GT            CH32V103_USART1_GPR_GT
#define CH32V103_USART2_GPR_GT_MASK       CH32V103_USART1_GPR_GT_MASK
#define CH32V103_USART2_GPR_PSC           CH32V103_USART1_GPR_PSC
#define CH32V103_USART2_GPR_PSC_MASK      CH32V103_USART1_GPR_PSC_MASK

/* No registers defined for peripheral USART3. Using those of USART1. */
#define CH32V103_USART3_BASE              0x40004800
#define CH32V103_USART3_STATR_OFFSET      CH32V103_USART1_STATR_OFFSET
#define CH32V103_USART3_STATR             CH32V103_USART1_STATR
#define CH32V103_USART3_STATR_CTS         CH32V103_USART1_STATR_CTS
#define CH32V103_USART3_STATR_LBD         CH32V103_USART1_STATR_LBD
#define CH32V103_USART3_STATR_TXE         CH32V103_USART1_STATR_TXE
#define CH32V103_USART3_STATR_TC          CH32V103_USART1_STATR_TC
#define CH32V103_USART3_STATR_RXNE        CH32V103_USART1_STATR_RXNE
#define CH32V103_USART3_STATR_IDLE        CH32V103_USART1_STATR_IDLE
#define CH32V103_USART3_STATR_ORE         CH32V103_USART1_STATR_ORE
#define CH32V103_USART3_STATR_NE          CH32V103_USART1_STATR_NE
#define CH32V103_USART3_STATR_FE          CH32V103_USART1_STATR_FE
#define CH32V103_USART3_STATR_PE          CH32V103_USART1_STATR_PE
#define CH32V103_USART3_DATAR_OFFSET      CH32V103_USART1_DATAR_OFFSET
#define CH32V103_USART3_DATAR             CH32V103_USART1_DATAR
#define CH32V103_USART3_DATAR_DR          CH32V103_USART1_DATAR_DR
#define CH32V103_USART3_DATAR_DR_MASK     CH32V103_USART1_DATAR_DR_MASK
#define CH32V103_USART3_BRR_OFFSET        CH32V103_USART1_BRR_OFFSET
#define CH32V103_USART3_BRR               CH32V103_USART1_BRR
#define CH32V103_USART3_BRR_DIV_Mantissa  CH32V103_USART1_BRR_DIV_Mantissa
#define CH32V103_USART3_BRR_DIV_Mantissa_MASK CH32V103_USART1_BRR_DIV_Mantissa_MASK
#define CH32V103_USART3_BRR_DIV_Fraction  CH32V103_USART1_BRR_DIV_Fraction
#define CH32V103_USART3_BRR_DIV_Fraction_MASK CH32V103_USART1_BRR_DIV_Fraction_MASK
#define CH32V103_USART3_CTLR1_OFFSET      CH32V103_USART1_CTLR1_OFFSET
#define CH32V103_USART3_CTLR1             CH32V103_USART1_CTLR1
#define CH32V103_USART3_CTLR1_UE          CH32V103_USART1_CTLR1_UE
#define CH32V103_USART3_CTLR1_M           CH32V103_USART1_CTLR1_M
#define CH32V103_USART3_CTLR1_WAKE        CH32V103_USART1_CTLR1_WAKE
#define CH32V103_USART3_CTLR1_PCE         CH32V103_USART1_CTLR1_PCE
#define CH32V103_USART3_CTLR1_PS          CH32V103_USART1_CTLR1_PS
#define CH32V103_USART3_CTLR1_PEIE        CH32V103_USART1_CTLR1_PEIE
#define CH32V103_USART3_CTLR1_TXEIE       CH32V103_USART1_CTLR1_TXEIE
#define CH32V103_USART3_CTLR1_TCIE        CH32V103_USART1_CTLR1_TCIE
#define CH32V103_USART3_CTLR1_RXNEIE      CH32V103_USART1_CTLR1_RXNEIE
#define CH32V103_USART3_CTLR1_IDLEIE      CH32V103_USART1_CTLR1_IDLEIE
#define CH32V103_USART3_CTLR1_TE          CH32V103_USART1_CTLR1_TE
#define CH32V103_USART3_CTLR1_RE          CH32V103_USART1_CTLR1_RE
#define CH32V103_USART3_CTLR1_RWU         CH32V103_USART1_CTLR1_RWU
#define CH32V103_USART3_CTLR1_SBK         CH32V103_USART1_CTLR1_SBK
#define CH32V103_USART3_CTLR2_OFFSET      CH32V103_USART1_CTLR2_OFFSET
#define CH32V103_USART3_CTLR2             CH32V103_USART1_CTLR2
#define CH32V103_USART3_CTLR2_LINEN       CH32V103_USART1_CTLR2_LINEN
#define CH32V103_USART3_CTLR2_STOP        CH32V103_USART1_CTLR2_STOP
#define CH32V103_USART3_CTLR2_STOP_MASK   CH32V103_USART1_CTLR2_STOP_MASK
#define CH32V103_USART3_CTLR2_CLKEN       CH32V103_USART1_CTLR2_CLKEN
#define CH32V103_USART3_CTLR2_CPOL        CH32V103_USART1_CTLR2_CPOL
#define CH32V103_USART3_CTLR2_CPHA        CH32V103_USART1_CTLR2_CPHA
#define CH32V103_USART3_CTLR2_LBCL        CH32V103_USART1_CTLR2_LBCL
#define CH32V103_USART3_CTLR2_LBDIE       CH32V103_USART1_CTLR2_LBDIE
#define CH32V103_USART3_CTLR2_LBDL        CH32V103_USART1_CTLR2_LBDL
#define CH32V103_USART3_CTLR2_ADD         CH32V103_USART1_CTLR2_ADD
#define CH32V103_USART3_CTLR2_ADD_MASK    CH32V103_USART1_CTLR2_ADD_MASK
#define CH32V103_USART3_CTLR3_OFFSET      CH32V103_USART1_CTLR3_OFFSET
#define CH32V103_USART3_CTLR3             CH32V103_USART1_CTLR3
#define CH32V103_USART3_CTLR3_CTSIE       CH32V103_USART1_CTLR3_CTSIE
#define CH32V103_USART3_CTLR3_CTSE        CH32V103_USART1_CTLR3_CTSE
#define CH32V103_USART3_CTLR3_RTSE        CH32V103_USART1_CTLR3_RTSE
#define CH32V103_USART3_CTLR3_DMAT        CH32V103_USART1_CTLR3_DMAT
#define CH32V103_USART3_CTLR3_DMAR        CH32V103_USART1_CTLR3_DMAR
#define CH32V103_USART3_CTLR3_SCEN        CH32V103_USART1_CTLR3_SCEN
#define CH32V103_USART3_CTLR3_NACK        CH32V103_USART1_CTLR3_NACK
#define CH32V103_USART3_CTLR3_HDSEL       CH32V103_USART1_CTLR3_HDSEL
#define CH32V103_USART3_CTLR3_IRLP        CH32V103_USART1_CTLR3_IRLP
#define CH32V103_USART3_CTLR3_IREN        CH32V103_USART1_CTLR3_IREN
#define CH32V103_USART3_CTLR3_EIE         CH32V103_USART1_CTLR3_EIE
#define CH32V103_USART3_GPR_OFFSET        CH32V103_USART1_GPR_OFFSET
#define CH32V103_USART3_GPR               CH32V103_USART1_GPR
#define CH32V103_USART3_GPR_GT            CH32V103_USART1_GPR_GT
#define CH32V103_USART3_GPR_GT_MASK       CH32V103_USART1_GPR_GT_MASK
#define CH32V103_USART3_GPR_PSC           CH32V103_USART1_GPR_PSC
#define CH32V103_USART3_GPR_PSC_MASK      CH32V103_USART1_GPR_PSC_MASK

/* ADC - Analog to digital converter */
#define CH32V103_ADC_BASE                 0x40012400
#define CH32V103_ADC_STATR_OFFSET         0x0000
#define CH32V103_ADC_STATR                (CH32V103_ADC_BASE + CH32V103_ADC_STATR_OFFSET)
#define CH32V103_ADC_STATR_STRT           (1 <<  4) /* 10: Regular channel start flag */
#define CH32V103_ADC_STATR_JSTRT          (1 <<  3) /* 08: Injected channel start flag */
#define CH32V103_ADC_STATR_JEOC           (1 <<  2) /* 04: Injected channel end of conversion */
#define CH32V103_ADC_STATR_EOC            (1 <<  1) /* 02: Regular channel end of conversion */
#define CH32V103_ADC_STATR_AWD            (1 <<  0) /* 01: Analog watchdog flag */
#define CH32V103_ADC_CTLR1_OFFSET         0x0004
#define CH32V103_ADC_CTLR1                (CH32V103_ADC_BASE + CH32V103_ADC_CTLR1_OFFSET)
#define CH32V103_ADC_CTLR1_TKENABLE       (1 << 24) /* 1000000: Touch key enable, including TKEY_F and TKEY_V */
#define CH32V103_ADC_CTLR1_AWDEN          (1 << 23) /* 800000: Analog watchdog enable on regular channels */
#define CH32V103_ADC_CTLR1_JAWDEN         (1 << 22) /* 400000: Analog watchdog enable on injected channels */
#define CH32V103_ADC_CTLR1_DUALMOD        (4 << 16) /* 10000: Dual mode selection */
#define CH32V103_ADC_CTLR1_DUALMOD_MASK        (0x0f)
#define CH32V103_ADC_CTLR1_DISCNUM        (3 << 13) /* 2000: Discontinuous mode channel count */
#define CH32V103_ADC_CTLR1_DISCNUM_MASK        (0x07)
#define CH32V103_ADC_CTLR1_JDISCEN        (1 << 12) /* 1000: Discontinuous mode on injected channels */
#define CH32V103_ADC_CTLR1_DISCEN         (1 << 11) /* 800: Discontinuous mode on regular channels */
#define CH32V103_ADC_CTLR1_JAUTO          (1 << 10) /* 400: Automatic injected group conversion */
#define CH32V103_ADC_CTLR1_AWDSGL         (1 <<  9) /* 200: Enable the watchdog on a single channel in scan mode */
#define CH32V103_ADC_CTLR1_SCAN           (1 <<  8) /* 100: Scan mode */
#define CH32V103_ADC_CTLR1_JEOCIE         (1 <<  7) /* 80: Interrupt enable for injected channels */
#define CH32V103_ADC_CTLR1_AWDIE          (1 <<  6) /* 40: Analog watchdog interrupt enable */
#define CH32V103_ADC_CTLR1_EOCIE          (1 <<  5) /* 20: Interrupt enable for EOC */
#define CH32V103_ADC_CTLR1_AWDCH          (5 <<  0) /* 01: Analog watchdog channel select bits */
#define CH32V103_ADC_CTLR1_AWDCH_MASK          (0x1f)
#define CH32V103_ADC_CTLR2_OFFSET         0x0008
#define CH32V103_ADC_CTLR2                (CH32V103_ADC_BASE + CH32V103_ADC_CTLR2_OFFSET)
#define CH32V103_ADC_CTLR2_TSVREFE        (1 << 23) /* 800000: Temperature sensor and VREFINT enable */
#define CH32V103_ADC_CTLR2_SWSTART        (1 << 22) /* 400000: Start conversion of regular channels */
#define CH32V103_ADC_CTLR2_JSWSTART       (1 << 21) /* 200000: Start conversion of injected channels */
#define CH32V103_ADC_CTLR2_EXTTRIG        (1 << 20) /* 100000: External trigger conversion mode for regular channels */
#define CH32V103_ADC_CTLR2_EXTSEL         (3 << 17) /* 20000: External event select for regular group */
#define CH32V103_ADC_CTLR2_EXTSEL_MASK         (0x07)
#define CH32V103_ADC_CTLR2_JEXTTRIG       (1 << 15) /* 8000: External trigger conversion mode for injected channels */
#define CH32V103_ADC_CTLR2_JEXTSEL        (3 << 12) /* 1000: External event select for injected group */
#define CH32V103_ADC_CTLR2_JEXTSEL_MASK        (0x07)
#define CH32V103_ADC_CTLR2_ALIGN          (1 << 11) /* 800: Data alignment */
#define CH32V103_ADC_CTLR2_DMA            (1 <<  8) /* 100: Direct memory access mode */
#define CH32V103_ADC_CTLR2_RSTCAL         (1 <<  3) /* 08: Reset calibration */
#define CH32V103_ADC_CTLR2_CAL            (1 <<  2) /* 04: A/D calibration */
#define CH32V103_ADC_CTLR2_CONT           (1 <<  1) /* 02: Continuous conversion */
#define CH32V103_ADC_CTLR2_ADON           (1 <<  0) /* 01: A/D converter ON / OFF */
#define CH32V103_ADC_SAMPTR1_OFFSET       0x000c
#define CH32V103_ADC_SAMPTR1              (CH32V103_ADC_BASE + CH32V103_ADC_SAMPTR1_OFFSET)
#define CH32V103_ADC_SAMPTR1_SMP10        (3 <<  0) /* 01: Channel 10 sample time selection */
#define CH32V103_ADC_SAMPTR1_SMP10_MASK        (0x07)
#define CH32V103_ADC_SAMPTR1_SMP11        (3 <<  3) /* 08: Channel 11 sample time selection */
#define CH32V103_ADC_SAMPTR1_SMP11_MASK        (0x07)
#define CH32V103_ADC_SAMPTR1_SMP12        (3 <<  6) /* 40: Channel 12 sample time selection */
#define CH32V103_ADC_SAMPTR1_SMP12_MASK        (0x07)
#define CH32V103_ADC_SAMPTR1_SMP13        (3 <<  9) /* 200: Channel 13 sample time selection */
#define CH32V103_ADC_SAMPTR1_SMP13_MASK        (0x07)
#define CH32V103_ADC_SAMPTR1_SMP14        (3 << 12) /* 1000: Channel 14 sample time selection */
#define CH32V103_ADC_SAMPTR1_SMP14_MASK        (0x07)
#define CH32V103_ADC_SAMPTR1_SMP15        (3 << 15) /* 8000: Channel 15 sample time selection */
#define CH32V103_ADC_SAMPTR1_SMP15_MASK        (0x07)
#define CH32V103_ADC_SAMPTR1_SMP16        (3 << 18) /* 40000: Channel 16 sample time selection */
#define CH32V103_ADC_SAMPTR1_SMP16_MASK        (0x07)
#define CH32V103_ADC_SAMPTR1_SMP17        (3 << 21) /* 200000: Channel 17 sample time selection */
#define CH32V103_ADC_SAMPTR1_SMP17_MASK        (0x07)
#define CH32V103_ADC_SAMPTR2_OFFSET       0x0010
#define CH32V103_ADC_SAMPTR2              (CH32V103_ADC_BASE + CH32V103_ADC_SAMPTR2_OFFSET)
#define CH32V103_ADC_SAMPTR2_SMP0         (3 <<  0) /* 01: Channel 0 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP0_MASK         (0x07)
#define CH32V103_ADC_SAMPTR2_SMP1         (3 <<  3) /* 08: Channel 1 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP1_MASK         (0x07)
#define CH32V103_ADC_SAMPTR2_SMP2         (3 <<  6) /* 40: Channel 2 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP2_MASK         (0x07)
#define CH32V103_ADC_SAMPTR2_SMP3         (3 <<  9) /* 200: Channel 3 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP3_MASK         (0x07)
#define CH32V103_ADC_SAMPTR2_SMP4         (3 << 12) /* 1000: Channel 4 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP4_MASK         (0x07)
#define CH32V103_ADC_SAMPTR2_SMP5         (3 << 15) /* 8000: Channel 5 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP5_MASK         (0x07)
#define CH32V103_ADC_SAMPTR2_SMP6         (3 << 18) /* 40000: Channel 6 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP6_MASK         (0x07)
#define CH32V103_ADC_SAMPTR2_SMP7         (3 << 21) /* 200000: Channel 7 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP7_MASK         (0x07)
#define CH32V103_ADC_SAMPTR2_SMP8         (3 << 24) /* 1000000: Channel 8 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP8_MASK         (0x07)
#define CH32V103_ADC_SAMPTR2_SMP9         (3 << 27) /* 8000000: Channel 9 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP9_MASK         (0x07)
#define CH32V103_ADC_IOFR1_OFFSET         0x0014
#define CH32V103_ADC_IOFR1                (CH32V103_ADC_BASE + CH32V103_ADC_IOFR1_OFFSET)
#define CH32V103_ADC_IOFR1_JOFFSET1       (12 <<  0) /* 01: Data offset for injected channel x */
#define CH32V103_ADC_IOFR1_JOFFSET1_MASK       (0xfff)
#define CH32V103_ADC_IOFR2_OFFSET         0x0018
#define CH32V103_ADC_IOFR2                (CH32V103_ADC_BASE + CH32V103_ADC_IOFR2_OFFSET)
#define CH32V103_ADC_IOFR2_JOFFSET2       (12 <<  0) /* 01: Data offset for injected channel x */
#define CH32V103_ADC_IOFR2_JOFFSET2_MASK       (0xfff)
#define CH32V103_ADC_IOFR3_OFFSET         0x001c
#define CH32V103_ADC_IOFR3                (CH32V103_ADC_BASE + CH32V103_ADC_IOFR3_OFFSET)
#define CH32V103_ADC_IOFR3_JOFFSET3       (12 <<  0) /* 01: Data offset for injected channel x */
#define CH32V103_ADC_IOFR3_JOFFSET3_MASK       (0xfff)
#define CH32V103_ADC_IOFR4_OFFSET         0x0020
#define CH32V103_ADC_IOFR4                (CH32V103_ADC_BASE + CH32V103_ADC_IOFR4_OFFSET)
#define CH32V103_ADC_IOFR4_JOFFSET4       (12 <<  0) /* 01: Data offset for injected channel x */
#define CH32V103_ADC_IOFR4_JOFFSET4_MASK       (0xfff)
#define CH32V103_ADC_WDHTR_OFFSET         0x0024
#define CH32V103_ADC_WDHTR                (CH32V103_ADC_BASE + CH32V103_ADC_WDHTR_OFFSET)
#define CH32V103_ADC_WDHTR_HT             (12 <<  0) /* 01: Analog watchdog higher threshold */
#define CH32V103_ADC_WDHTR_HT_MASK             (0xfff)
#define CH32V103_ADC_WDLTR_OFFSET         0x0028
#define CH32V103_ADC_WDLTR                (CH32V103_ADC_BASE + CH32V103_ADC_WDLTR_OFFSET)
#define CH32V103_ADC_WDLTR_LT             (12 <<  0) /* 01: Analog watchdog lower threshold */
#define CH32V103_ADC_WDLTR_LT_MASK             (0xfff)
#define CH32V103_ADC_RSQR1_OFFSET         0x002c
#define CH32V103_ADC_RSQR1                (CH32V103_ADC_BASE + CH32V103_ADC_RSQR1_OFFSET)
#define CH32V103_ADC_RSQR1_L              (4 << 20) /* 100000: Regular channel sequence length */
#define CH32V103_ADC_RSQR1_L_MASK              (0x0f)
#define CH32V103_ADC_RSQR1_SQ16           (5 << 15) /* 8000: 16th conversion in regular sequence */
#define CH32V103_ADC_RSQR1_SQ16_MASK           (0x1f)
#define CH32V103_ADC_RSQR1_SQ15           (5 << 10) /* 400: 15th conversion in regular sequence */
#define CH32V103_ADC_RSQR1_SQ15_MASK           (0x1f)
#define CH32V103_ADC_RSQR1_SQ14           (5 <<  5) /* 20: 14th conversion in regular sequence */
#define CH32V103_ADC_RSQR1_SQ14_MASK           (0x1f)
#define CH32V103_ADC_RSQR1_SQ13           (5 <<  0) /* 01: 13th conversion in regular sequence */
#define CH32V103_ADC_RSQR1_SQ13_MASK           (0x1f)
#define CH32V103_ADC_RSQR2_OFFSET         0x0030
#define CH32V103_ADC_RSQR2                (CH32V103_ADC_BASE + CH32V103_ADC_RSQR2_OFFSET)
#define CH32V103_ADC_RSQR2_SQ12           (5 << 25) /* 2000000: 12th conversion in regular sequence */
#define CH32V103_ADC_RSQR2_SQ12_MASK           (0x1f)
#define CH32V103_ADC_RSQR2_SQ11           (5 << 20) /* 100000: 11th conversion in regular sequence */
#define CH32V103_ADC_RSQR2_SQ11_MASK           (0x1f)
#define CH32V103_ADC_RSQR2_SQ10           (5 << 15) /* 8000: 10th conversion in regular sequence */
#define CH32V103_ADC_RSQR2_SQ10_MASK           (0x1f)
#define CH32V103_ADC_RSQR2_SQ9            (5 << 10) /* 400: 9th conversion in regular sequence */
#define CH32V103_ADC_RSQR2_SQ9_MASK            (0x1f)
#define CH32V103_ADC_RSQR2_SQ8            (5 <<  5) /* 20: 8th conversion in regular sequence */
#define CH32V103_ADC_RSQR2_SQ8_MASK            (0x1f)
#define CH32V103_ADC_RSQR2_SQ7            (5 <<  0) /* 01: 7th conversion in regular sequence */
#define CH32V103_ADC_RSQR2_SQ7_MASK            (0x1f)
#define CH32V103_ADC_RSQR3_OFFSET         0x0034
#define CH32V103_ADC_RSQR3                (CH32V103_ADC_BASE + CH32V103_ADC_RSQR3_OFFSET)
#define CH32V103_ADC_RSQR3_SQ6            (5 << 25) /* 2000000: 6th conversion in regular sequence */
#define CH32V103_ADC_RSQR3_SQ6_MASK            (0x1f)
#define CH32V103_ADC_RSQR3_SQ5            (5 << 20) /* 100000: 5th conversion in regular sequence */
#define CH32V103_ADC_RSQR3_SQ5_MASK            (0x1f)
#define CH32V103_ADC_RSQR3_SQ4            (5 << 15) /* 8000: 4th conversion in regular sequence */
#define CH32V103_ADC_RSQR3_SQ4_MASK            (0x1f)
#define CH32V103_ADC_RSQR3_SQ3            (5 << 10) /* 400: 3rd conversion in regular sequence */
#define CH32V103_ADC_RSQR3_SQ3_MASK            (0x1f)
#define CH32V103_ADC_RSQR3_SQ2            (5 <<  5) /* 20: 2nd conversion in regular sequence */
#define CH32V103_ADC_RSQR3_SQ2_MASK            (0x1f)
#define CH32V103_ADC_RSQR3_SQ1            (5 <<  0) /* 01: 1st conversion in regular sequence */
#define CH32V103_ADC_RSQR3_SQ1_MASK            (0x1f)
#define CH32V103_ADC_ISQR_OFFSET          0x0038
#define CH32V103_ADC_ISQR                 (CH32V103_ADC_BASE + CH32V103_ADC_ISQR_OFFSET)
#define CH32V103_ADC_ISQR_JL              (2 << 20) /* 100000: Injected sequence length */
#define CH32V103_ADC_ISQR_JL_MASK              (0x03)
#define CH32V103_ADC_ISQR_JSQ4            (5 << 15) /* 8000: 4th conversion in injected sequence */
#define CH32V103_ADC_ISQR_JSQ4_MASK            (0x1f)
#define CH32V103_ADC_ISQR_JSQ3            (5 << 10) /* 400: 3rd conversion in injected sequence */
#define CH32V103_ADC_ISQR_JSQ3_MASK            (0x1f)
#define CH32V103_ADC_ISQR_JSQ2            (5 <<  5) /* 20: 2nd conversion in injected sequence */
#define CH32V103_ADC_ISQR_JSQ2_MASK            (0x1f)
#define CH32V103_ADC_ISQR_JSQ1            (5 <<  0) /* 01: 1st conversion in injected sequence */
#define CH32V103_ADC_ISQR_JSQ1_MASK            (0x1f)
#define CH32V103_ADC_IDATAR1_OFFSET       0x003c
#define CH32V103_ADC_IDATAR1              (CH32V103_ADC_BASE + CH32V103_ADC_IDATAR1_OFFSET)
#define CH32V103_ADC_IDATAR1_JDATA        (16 <<  0) /* 01: Injected data */
#define CH32V103_ADC_IDATAR1_JDATA_MASK        (0xffff)
#define CH32V103_ADC_IDATAR2_OFFSET       0x0040
#define CH32V103_ADC_IDATAR2              (CH32V103_ADC_BASE + CH32V103_ADC_IDATAR2_OFFSET)
#define CH32V103_ADC_IDATAR2_JDATA        (16 <<  0) /* 01: Injected data */
#define CH32V103_ADC_IDATAR2_JDATA_MASK        (0xffff)
#define CH32V103_ADC_IDATAR3_OFFSET       0x0044
#define CH32V103_ADC_IDATAR3              (CH32V103_ADC_BASE + CH32V103_ADC_IDATAR3_OFFSET)
#define CH32V103_ADC_IDATAR3_JDATA        (16 <<  0) /* 01: Injected data */
#define CH32V103_ADC_IDATAR3_JDATA_MASK        (0xffff)
#define CH32V103_ADC_IDATAR4_OFFSET       0x0048
#define CH32V103_ADC_IDATAR4              (CH32V103_ADC_BASE + CH32V103_ADC_IDATAR4_OFFSET)
#define CH32V103_ADC_IDATAR4_JDATA        (16 <<  0) /* 01: Injected data */
#define CH32V103_ADC_IDATAR4_JDATA_MASK        (0xffff)
#define CH32V103_ADC_RDATAR_OFFSET        0x004c
#define CH32V103_ADC_RDATAR               (CH32V103_ADC_BASE + CH32V103_ADC_RDATAR_OFFSET)
#define CH32V103_ADC_RDATAR_DATA          (16 <<  0) /* 01: Regular data */
#define CH32V103_ADC_RDATAR_DATA_MASK          (0xffff)
#define CH32V103_ADC_RDATAR_ADC2DATA      (16 << 16) /* 10000: ADC2 data */
#define CH32V103_ADC_RDATAR_ADC2DATA_MASK      (0xffff)

/* DAC1 - Digital to analog converter */
#define CH32V103_DAC1_BASE                0x40007400
#define CH32V103_DAC1_CTLR_OFFSET         0x0000
#define CH32V103_DAC1_CTLR                (CH32V103_DAC1_BASE + CH32V103_DAC1_CTLR_OFFSET)
#define CH32V103_DAC1_CTLR_EN1            (1 <<  0) /* 01: DAC channel1 enable */
#define CH32V103_DAC1_CTLR_BOFF1          (1 <<  1) /* 02: DAC channel1 output buffer disable */
#define CH32V103_DAC1_CTLR_TEN1           (1 <<  2) /* 04: DAC channel1 trigger enable */
#define CH32V103_DAC1_CTLR_TSEL1          (3 <<  3) /* 08: DAC channel1 trigger selection */
#define CH32V103_DAC1_CTLR_TSEL1_MASK          (0x07)
#define CH32V103_DAC1_CTLR_WAVE1          (2 <<  6) /* 40: DAC channel1 noise/triangle wave generation enable */
#define CH32V103_DAC1_CTLR_WAVE1_MASK          (0x03)
#define CH32V103_DAC1_CTLR_MAMP1          (4 <<  8) /* 100: DAC channel1 mask/amplitude selector */
#define CH32V103_DAC1_CTLR_MAMP1_MASK          (0x0f)
#define CH32V103_DAC1_CTLR_DMAEN1         (1 << 12) /* 1000: DAC channel1 DMA enable */
#define CH32V103_DAC1_CTLR_EN2            (1 << 16) /* 10000: DAC channel2 enable */
#define CH32V103_DAC1_CTLR_BOFF2          (1 << 17) /* 20000: DAC channel2 output buffer disable */
#define CH32V103_DAC1_CTLR_TEN2           (1 << 18) /* 40000: DAC channel2 trigger enable */
#define CH32V103_DAC1_CTLR_TSEL2          (3 << 19) /* 80000: DAC channel2 trigger selection */
#define CH32V103_DAC1_CTLR_TSEL2_MASK          (0x07)
#define CH32V103_DAC1_CTLR_WAVE2          (2 << 22) /* 400000: DAC channel2 noise/triangle wave generation enable */
#define CH32V103_DAC1_CTLR_WAVE2_MASK          (0x03)
#define CH32V103_DAC1_CTLR_MAMP2          (4 << 24) /* 1000000: DAC channel2 mask/amplitude selector */
#define CH32V103_DAC1_CTLR_MAMP2_MASK          (0x0f)
#define CH32V103_DAC1_CTLR_DMAEN2         (1 << 28) /* 10000000: DAC channel2 DMA enable */
#define CH32V103_DAC1_SWTR_OFFSET         0x0004
#define CH32V103_DAC1_SWTR                (CH32V103_DAC1_BASE + CH32V103_DAC1_SWTR_OFFSET)
#define CH32V103_DAC1_SWTR_SWTRIG1        (1 <<  0) /* 01: DAC channel1 software trigger */
#define CH32V103_DAC1_SWTR_SWTRIG2        (1 <<  1) /* 02: DAC channel2 software trigger */
#define CH32V103_DAC1_R12BDHR1_OFFSET     0x0008
#define CH32V103_DAC1_R12BDHR1            (CH32V103_DAC1_BASE + CH32V103_DAC1_R12BDHR1_OFFSET)
#define CH32V103_DAC1_R12BDHR1_DACC1DHR   (12 <<  0) /* 01: DAC channel1 12-bit right-aligned data */
#define CH32V103_DAC1_R12BDHR1_DACC1DHR_MASK   (0xfff)
#define CH32V103_DAC1_L12BDHR1_OFFSET     0x000c
#define CH32V103_DAC1_L12BDHR1            (CH32V103_DAC1_BASE + CH32V103_DAC1_L12BDHR1_OFFSET)
#define CH32V103_DAC1_L12BDHR1_DACC1DHR   (12 <<  4) /* 10: DAC channel1 12-bit left-aligned data */
#define CH32V103_DAC1_L12BDHR1_DACC1DHR_MASK   (0xfff)
#define CH32V103_DAC1_R12BDHR2_OFFSET     0x0014
#define CH32V103_DAC1_R12BDHR2            (CH32V103_DAC1_BASE + CH32V103_DAC1_R12BDHR2_OFFSET)
#define CH32V103_DAC1_R12BDHR2_DACC2DHR   (12 <<  0) /* 01: DAC channel2 12-bit right-aligned data */
#define CH32V103_DAC1_R12BDHR2_DACC2DHR_MASK   (0xfff)
#define CH32V103_DAC1_L12BDHR2_OFFSET     0x0018
#define CH32V103_DAC1_L12BDHR2            (CH32V103_DAC1_BASE + CH32V103_DAC1_L12BDHR2_OFFSET)
#define CH32V103_DAC1_L12BDHR2_DACC2DHR   (12 <<  4) /* 10: DAC channel2 12-bit left-aligned data */
#define CH32V103_DAC1_L12BDHR2_DACC2DHR_MASK   (0xfff)
#define CH32V103_DAC1_DOR1_OFFSET         0x002c
#define CH32V103_DAC1_DOR1                (CH32V103_DAC1_BASE + CH32V103_DAC1_DOR1_OFFSET)
#define CH32V103_DAC1_DOR1_DACC1DOR       (12 <<  0) /* 01: DAC channel1 data output */
#define CH32V103_DAC1_DOR1_DACC1DOR_MASK       (0xfff)
#define CH32V103_DAC1_DOR2_OFFSET         0x0030
#define CH32V103_DAC1_DOR2                (CH32V103_DAC1_BASE + CH32V103_DAC1_DOR2_OFFSET)
#define CH32V103_DAC1_DOR2_DACC2DOR       (12 <<  0) /* 01: DAC channel2 data output */
#define CH32V103_DAC1_DOR2_DACC2DOR_MASK       (0xfff)

/* DBG - Debug support */
#define CH32V103_DBG_BASE                 0xe0042000
#define CH32V103_DBG_IDCODE_OFFSET        0x0000
#define CH32V103_DBG_IDCODE               (CH32V103_DBG_BASE + CH32V103_DBG_IDCODE_OFFSET)
#define CH32V103_DBG_IDCODE_DEV_ID        (12 <<  0) /* 01: DEV_ID */
#define CH32V103_DBG_IDCODE_DEV_ID_MASK        (0xfff)
#define CH32V103_DBG_IDCODE_REV_ID        (16 << 16) /* 10000: REV_ID */
#define CH32V103_DBG_IDCODE_REV_ID_MASK        (0xffff)
#define CH32V103_DBG_CFGR_OFFSET          0x0004
#define CH32V103_DBG_CFGR                 (CH32V103_DBG_BASE + CH32V103_DBG_CFGR_OFFSET)
#define CH32V103_DBG_CFGR_DBG_SLEEP       (1 <<  0) /* 01: DBG_SLEEP */
#define CH32V103_DBG_CFGR_DBG_STOP        (1 <<  1) /* 02: DBG_STOP */
#define CH32V103_DBG_CFGR_DBG_STANDBY     (1 <<  2) /* 04: DBG_STANDBY */
#define CH32V103_DBG_CFGR_TRACE_IOEN      (1 <<  5) /* 20: TRACE_IOEN */
#define CH32V103_DBG_CFGR_TRACE_MODE      (2 <<  6) /* 40: TRACE_MODE */
#define CH32V103_DBG_CFGR_TRACE_MODE_MASK      (0x03)
#define CH32V103_DBG_CFGR_DBG_IWDG_STOP   (1 <<  8) /* 100: DBG_IWDG_STOP */
#define CH32V103_DBG_CFGR_DBG_WWDG_STOP   (1 <<  9) /* 200: DBG_WWDG_STOP */
#define CH32V103_DBG_CFGR_DBG_TIM1_STOP   (1 << 10) /* 400: DBG_TIM1_STOP */
#define CH32V103_DBG_CFGR_DBG_TIM2_STOP   (1 << 11) /* 800: DBG_TIM2_STOP */
#define CH32V103_DBG_CFGR_DBG_TIM3_STOP   (1 << 12) /* 1000: DBG_TIM3_STOP */
#define CH32V103_DBG_CFGR_DBG_TIM4_STOP   (1 << 13) /* 2000: DBG_TIM4_STOP */
#define CH32V103_DBG_CFGR_DBG_CAN1_STOP   (1 << 14) /* 4000: DBG_CAN1_STOP */
#define CH32V103_DBG_CFGR_DBG_I2C1_SMBUS_TIMEOUT (1 << 15) /* 8000: DBG_I2C1_SMBUS_TIMEOUT */
#define CH32V103_DBG_CFGR_DBG_I2C2_SMBUS_TIMEOUT (1 << 16) /* 10000: DBG_I2C2_SMBUS_TIMEOUT */
#define CH32V103_DBG_CFGR_DBG_TIM8_STOP   (1 << 17) /* 20000: DBG_TIM8_STOP */
#define CH32V103_DBG_CFGR_DBG_TIM5_STOP   (1 << 18) /* 40000: DBG_TIM5_STOP */
#define CH32V103_DBG_CFGR_DBG_TIM6_STOP   (1 << 19) /* 80000: DBG_TIM6_STOP */
#define CH32V103_DBG_CFGR_DBG_TIM7_STOP   (1 << 20) /* 100000: DBG_TIM7_STOP */
#define CH32V103_DBG_CFGR_DBG_CAN2_STOP   (1 << 21) /* 200000: DBG_CAN2_STOP */

/* USBHD - USB register */
#define CH32V103_USBHD_BASE               0x40023400
#define CH32V103_USBHD_R8_USB_CTRL_OFFSET 0x0000
#define CH32V103_USBHD_R8_USB_CTRL        (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_USB_CTRL_OFFSET)
#define CH32V103_USBHD_R8_UDEV_CTRL__R8_UHOST_CTRL_OFFSET 0x0001
#define CH32V103_USBHD_R8_UDEV_CTRL__R8_UHOST_CTRL (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UDEV_CTRL__R8_UHOST_CTRL_OFFSET)
#define CH32V103_USBHD_R8_USB_INT_EN_OFFSET 0x0002
#define CH32V103_USBHD_R8_USB_INT_EN      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_USB_INT_EN_OFFSET)
#define CH32V103_USBHD_R8_USB_DEV_AD_OFFSET 0x0003
#define CH32V103_USBHD_R8_USB_DEV_AD      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_USB_DEV_AD_OFFSET)
#define CH32V103_USBHD_R8_USB_MIS_ST_OFFSET 0x0005
#define CH32V103_USBHD_R8_USB_MIS_ST      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_USB_MIS_ST_OFFSET)
#define CH32V103_USBHD_R8_USB_INT_FG_OFFSET 0x0006
#define CH32V103_USBHD_R8_USB_INT_FG      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_USB_INT_FG_OFFSET)
#define CH32V103_USBHD_R8_USB_INT_ST_OFFSET 0x0007
#define CH32V103_USBHD_R8_USB_INT_ST      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_USB_INT_ST_OFFSET)
#define CH32V103_USBHD_R8_USB_RX_LEN_OFFSET 0x0008
#define CH32V103_USBHD_R8_USB_RX_LEN      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_USB_RX_LEN_OFFSET)
#define CH32V103_USBHD_R8_UEP4_1_MOD_OFFSET 0x000c
#define CH32V103_USBHD_R8_UEP4_1_MOD      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP4_1_MOD_OFFSET)
#define CH32V103_USBHD_R8_UEP2_3_MOD__R8_UH_EP_MOD_OFFSET 0x000d
#define CH32V103_USBHD_R8_UEP2_3_MOD__R8_UH_EP_MOD (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP2_3_MOD__R8_UH_EP_MOD_OFFSET)
#define CH32V103_USBHD_R16_UEP0_DMA_OFFSET 0x0010
#define CH32V103_USBHD_R16_UEP0_DMA       (CH32V103_USBHD_BASE + CH32V103_USBHD_R16_UEP0_DMA_OFFSET)
#define CH32V103_USBHD_R16_UEP1_DMA_OFFSET 0x0014
#define CH32V103_USBHD_R16_UEP1_DMA       (CH32V103_USBHD_BASE + CH32V103_USBHD_R16_UEP1_DMA_OFFSET)
#define CH32V103_USBHD_R16_UEP2_DMA__R16_UH_RX_DMA_OFFSET 0x0018
#define CH32V103_USBHD_R16_UEP2_DMA__R16_UH_RX_DMA (CH32V103_USBHD_BASE + CH32V103_USBHD_R16_UEP2_DMA__R16_UH_RX_DMA_OFFSET)
#define CH32V103_USBHD_R16_UEP3_DMA__R16_UH_TX_DMA_OFFSET 0x001c
#define CH32V103_USBHD_R16_UEP3_DMA__R16_UH_TX_DMA (CH32V103_USBHD_BASE + CH32V103_USBHD_R16_UEP3_DMA__R16_UH_TX_DMA_OFFSET)
#define CH32V103_USBHD_R8_UEP0_T_LEN_OFFSET 0x0020
#define CH32V103_USBHD_R8_UEP0_T_LEN      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP0_T_LEN_OFFSET)
#define CH32V103_USBHD_R8_UEP0_CTRL_OFFSET 0x0022
#define CH32V103_USBHD_R8_UEP0_CTRL       (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP0_CTRL_OFFSET)
#define CH32V103_USBHD_R8_UEP1_T_LEN_OFFSET 0x0024
#define CH32V103_USBHD_R8_UEP1_T_LEN      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP1_T_LEN_OFFSET)
#define CH32V103_USBHD_R8_UEP1_CTRL__R8_UH_SETUP_OFFSET 0x0026
#define CH32V103_USBHD_R8_UEP1_CTRL__R8_UH_SETUP (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP1_CTRL__R8_UH_SETUP_OFFSET)
#define CH32V103_USBHD_R8_UEP2_T_LEN__R8_UH_EP_PID_OFFSET 0x0028
#define CH32V103_USBHD_R8_UEP2_T_LEN__R8_UH_EP_PID (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP2_T_LEN__R8_UH_EP_PID_OFFSET)
#define CH32V103_USBHD_R8_UEP2_CTRL__R8_UH_RX_CTRL_OFFSET 0x002a
#define CH32V103_USBHD_R8_UEP2_CTRL__R8_UH_RX_CTRL (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP2_CTRL__R8_UH_RX_CTRL_OFFSET)
#define CH32V103_USBHD_R8_UEP3_T_LEN__R8_UH_TX_LEN_OFFSET 0x002c
#define CH32V103_USBHD_R8_UEP3_T_LEN__R8_UH_TX_LEN (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP3_T_LEN__R8_UH_TX_LEN_OFFSET)
#define CH32V103_USBHD_R8_UEP3_CTRL__R8_UH_TX_CTRL_OFFSET 0x002e
#define CH32V103_USBHD_R8_UEP3_CTRL__R8_UH_TX_CTRL (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP3_CTRL__R8_UH_TX_CTRL_OFFSET)
#define CH32V103_USBHD_R8_UEP4_T_LEN_OFFSET 0x0030
#define CH32V103_USBHD_R8_UEP4_T_LEN      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP4_T_LEN_OFFSET)
#define CH32V103_USBHD_R8_UEP4_CTRL_OFFSET 0x0032
#define CH32V103_USBHD_R8_UEP4_CTRL       (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP4_CTRL_OFFSET)
#define CH32V103_USBHD_R8_USB_TYPE_C_CTRL_OFFSET 0x0038
#define CH32V103_USBHD_R8_USB_TYPE_C_CTRL (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_USB_TYPE_C_CTRL_OFFSET)

/* CRC - CRC calculation unit */
#define CH32V103_CRC_BASE                 0x40023000
#define CH32V103_CRC_DATAR_OFFSET         0x0000
#define CH32V103_CRC_DATAR                (CH32V103_CRC_BASE + CH32V103_CRC_DATAR_OFFSET)
#define CH32V103_CRC_DATAR_DATA           (32 <<  0) /* 01: Data Register */
#define CH32V103_CRC_DATAR_DATA_MASK           (0xffffffff)
#define CH32V103_CRC_IDATAR_OFFSET        0x0004
#define CH32V103_CRC_IDATAR               (CH32V103_CRC_BASE + CH32V103_CRC_IDATAR_OFFSET)
#define CH32V103_CRC_IDATAR_IDATA         (8 <<  0) /* 01: Independent Data register */
#define CH32V103_CRC_IDATAR_IDATA_MASK         (0xff)
#define CH32V103_CRC_CTLR_OFFSET          0x0008
#define CH32V103_CRC_CTLR                 (CH32V103_CRC_BASE + CH32V103_CRC_CTLR_OFFSET)
#define CH32V103_CRC_CTLR_RST             (1 <<  0) /* 01: Reset bit */

/* FLASH - FLASH */
#define CH32V103_FLASH_BASE               0x40022000
#define CH32V103_FLASH_ACTLR_OFFSET       0x0000
#define CH32V103_FLASH_ACTLR              (CH32V103_FLASH_BASE + CH32V103_FLASH_ACTLR_OFFSET)
#define CH32V103_FLASH_ACTLR_LATENCY      (3 <<  0) /* 01: Latency */
#define CH32V103_FLASH_ACTLR_LATENCY_MASK      (0x07)
#define CH32V103_FLASH_ACTLR_PRFTBE       (1 <<  4) /* 10: Prefetch buffer enable */
#define CH32V103_FLASH_ACTLR_PRFTBS       (1 <<  5) /* 20: Prefetch buffer status */
#define CH32V103_FLASH_KEYR_OFFSET        0x0004
#define CH32V103_FLASH_KEYR               (CH32V103_FLASH_BASE + CH32V103_FLASH_KEYR_OFFSET)
#define CH32V103_FLASH_KEYR_KEYR          (32 <<  0) /* 01: FPEC key */
#define CH32V103_FLASH_KEYR_KEYR_MASK          (0xffffffff)
#define CH32V103_FLASH_OBKEYR_OFFSET      0x0008
#define CH32V103_FLASH_OBKEYR             (CH32V103_FLASH_BASE + CH32V103_FLASH_OBKEYR_OFFSET)
#define CH32V103_FLASH_OBKEYR_OBKEYR      (32 <<  0) /* 01: Option byte key */
#define CH32V103_FLASH_OBKEYR_OBKEYR_MASK      (0xffffffff)
#define CH32V103_FLASH_STATR_OFFSET       0x000c
#define CH32V103_FLASH_STATR              (CH32V103_FLASH_BASE + CH32V103_FLASH_STATR_OFFSET)
#define CH32V103_FLASH_STATR_EOP          (1 <<  5) /* 20: End of operation */
#define CH32V103_FLASH_STATR_WRPRTERR     (1 <<  4) /* 10: Write protection error */
#define CH32V103_FLASH_STATR_PGERR        (1 <<  2) /* 04: Programming error */
#define CH32V103_FLASH_STATR_BSY          (1 <<  0) /* 01: Busy */
#define CH32V103_FLASH_CTLR_OFFSET        0x0010
#define CH32V103_FLASH_CTLR               (CH32V103_FLASH_BASE + CH32V103_FLASH_CTLR_OFFSET)
#define CH32V103_FLASH_CTLR_PG            (1 <<  0) /* 01: Programming */
#define CH32V103_FLASH_CTLR_PER           (1 <<  1) /* 02: Page Erase */
#define CH32V103_FLASH_CTLR_MER           (1 <<  2) /* 04: Mass Erase */
#define CH32V103_FLASH_CTLR_OBPG          (1 <<  4) /* 10: Option byte programming */
#define CH32V103_FLASH_CTLR_OBER          (1 <<  5) /* 20: Option byte erase */
#define CH32V103_FLASH_CTLR_STRT          (1 <<  6) /* 40: Start */
#define CH32V103_FLASH_CTLR_LOCK          (1 <<  7) /* 80: Lock */
#define CH32V103_FLASH_CTLR_OBWRE         (1 <<  9) /* 200: Option bytes write enable */
#define CH32V103_FLASH_CTLR_ERRIE         (1 << 10) /* 400: Error interrupt enable */
#define CH32V103_FLASH_CTLR_EOPIE         (1 << 12) /* 1000: End of operation interrupt enable */
#define CH32V103_FLASH_CTLR_FLOCK         (1 << 15) /* 8000: FAST programming lock */
#define CH32V103_FLASH_CTLR_FTPG          (1 << 16) /* 10000: execute fast programming */
#define CH32V103_FLASH_CTLR_FTER          (1 << 17) /* 20000: execute fast 128byte erase */
#define CH32V103_FLASH_CTLR_BUFLOAD       (1 << 18) /* 40000: execute data load inner buffer */
#define CH32V103_FLASH_CTLR_BUFRST        (1 << 19) /* 80000: execute inner buffer reset */
#define CH32V103_FLASH_ADDR_OFFSET        0x0014
#define CH32V103_FLASH_ADDR               (CH32V103_FLASH_BASE + CH32V103_FLASH_ADDR_OFFSET)
#define CH32V103_FLASH_ADDR_FAR           (32 <<  0) /* 01: Flash Address */
#define CH32V103_FLASH_ADDR_FAR_MASK           (0xffffffff)
#define CH32V103_FLASH_OBR_OFFSET         0x001c
#define CH32V103_FLASH_OBR                (CH32V103_FLASH_BASE + CH32V103_FLASH_OBR_OFFSET)
#define CH32V103_FLASH_OBR_OPTERR         (1 <<  0) /* 01: Option byte error */
#define CH32V103_FLASH_OBR_RDPRT          (1 <<  1) /* 02: Read protection */
#define CH32V103_FLASH_OBR_IWDG_SW        (1 <<  2) /* 04: IWDG_SW */
#define CH32V103_FLASH_OBR_nRST_STOP      (1 <<  3) /* 08: nRST_STOP */
#define CH32V103_FLASH_OBR_nRST_STDBY     (1 <<  4) /* 10: nRST_STDBY */
#define CH32V103_FLASH_OBR_USBD_MODE      (1 <<  5) /* 20: USBD compatible speed mode configure */
#define CH32V103_FLASH_OBR_USBD_PU        (1 <<  6) /* 40: USBD compatible inner pull up resistance configure */
#define CH32V103_FLASH_OBR_POR_CTR        (1 <<  7) /* 80: Power on reset time */
#define CH32V103_FLASH_OBR_Data0          (8 << 10) /* 400: Data0 */
#define CH32V103_FLASH_OBR_Data0_MASK          (0xff)
#define CH32V103_FLASH_OBR_Data1          (8 << 18) /* 40000: Data1 */
#define CH32V103_FLASH_OBR_Data1_MASK          (0xff)
#define CH32V103_FLASH_WPR_OFFSET         0x0020
#define CH32V103_FLASH_WPR                (CH32V103_FLASH_BASE + CH32V103_FLASH_WPR_OFFSET)
#define CH32V103_FLASH_WPR_WRP            (32 <<  0) /* 01: Write protect */
#define CH32V103_FLASH_WPR_WRP_MASK            (0xffffffff)
#define CH32V103_FLASH_MODEKEYR_OFFSET    0x0024
#define CH32V103_FLASH_MODEKEYR           (CH32V103_FLASH_BASE + CH32V103_FLASH_MODEKEYR_OFFSET)
#define CH32V103_FLASH_MODEKEYR_MODEKEYR  (32 <<  0) /* 01: high speed write /erase mode ENABLE */
#define CH32V103_FLASH_MODEKEYR_MODEKEYR_MASK  (0xffffffff)

/* PFIC - Programmable Fast Interrupt Controller */
#define CH32V103_PFIC_BASE                0xe000e000
#define CH32V103_PFIC_ISR1_OFFSET         0x0000
#define CH32V103_PFIC_ISR1                (CH32V103_PFIC_BASE + CH32V103_PFIC_ISR1_OFFSET)
#define CH32V103_PFIC_ISR1_INTENSTA2_3    (2 <<  2) /* 04: Interrupt ID Status */
#define CH32V103_PFIC_ISR1_INTENSTA2_3_MASK    (0x03)
#define CH32V103_PFIC_ISR1_INTENSTA12_31  (20 << 12) /* 1000: Interrupt ID Status */
#define CH32V103_PFIC_ISR1_INTENSTA12_31_MASK  (0xfffff)
#define CH32V103_PFIC_ISR2_OFFSET         0x0004
#define CH32V103_PFIC_ISR2                (CH32V103_PFIC_BASE + CH32V103_PFIC_ISR2_OFFSET)
#define CH32V103_PFIC_ISR2_INTENSTA       (28 <<  0) /* 01: Interrupt ID Status */
#define CH32V103_PFIC_ISR2_INTENSTA_MASK       (0xfffffff)
#define CH32V103_PFIC_IPR1_OFFSET         0x0020
#define CH32V103_PFIC_IPR1                (CH32V103_PFIC_BASE + CH32V103_PFIC_IPR1_OFFSET)
#define CH32V103_PFIC_IPR1_PENDSTA2_3     (2 <<  2) /* 04: PENDSTA */
#define CH32V103_PFIC_IPR1_PENDSTA2_3_MASK     (0x03)
#define CH32V103_PFIC_IPR1_PENDSTA12_31   (20 << 12) /* 1000: PENDSTA */
#define CH32V103_PFIC_IPR1_PENDSTA12_31_MASK   (0xfffff)
#define CH32V103_PFIC_IPR2_OFFSET         0x0024
#define CH32V103_PFIC_IPR2                (CH32V103_PFIC_BASE + CH32V103_PFIC_IPR2_OFFSET)
#define CH32V103_PFIC_IPR2_PENDSTA        (28 <<  0) /* 01: PENDSTA */
#define CH32V103_PFIC_IPR2_PENDSTA_MASK        (0xfffffff)
#define CH32V103_PFIC_ITHRESDR_OFFSET     0x0040
#define CH32V103_PFIC_ITHRESDR            (CH32V103_PFIC_BASE + CH32V103_PFIC_ITHRESDR_OFFSET)
#define CH32V103_PFIC_ITHRESDR_THRESHOLD  (8 <<  0) /* 01: THRESHOLD */
#define CH32V103_PFIC_ITHRESDR_THRESHOLD_MASK  (0xff)
#define CH32V103_PFIC_FIBADDRR_OFFSET     0x0044
#define CH32V103_PFIC_FIBADDRR            (CH32V103_PFIC_BASE + CH32V103_PFIC_FIBADDRR_OFFSET)
#define CH32V103_PFIC_FIBADDRR_BASEADDR   (4 << 28) /* 10000000: BASEADDR */
#define CH32V103_PFIC_FIBADDRR_BASEADDR_MASK   (0x0f)
#define CH32V103_PFIC_CFGR_OFFSET         0x0048
#define CH32V103_PFIC_CFGR                (CH32V103_PFIC_BASE + CH32V103_PFIC_CFGR_OFFSET)
#define CH32V103_PFIC_CFGR_HWSTKCTRL      (1 <<  0) /* 01: HWSTKCTRL */
#define CH32V103_PFIC_CFGR_NESTCTRL       (1 <<  1) /* 02: NESTCTRL */
#define CH32V103_PFIC_CFGR_NMISET         (1 <<  2) /* 04: NMISET */
#define CH32V103_PFIC_CFGR_NMIRESET       (1 <<  3) /* 08: NMIRESET */
#define CH32V103_PFIC_CFGR_EXCSET         (1 <<  4) /* 10: EXCSET */
#define CH32V103_PFIC_CFGR_EXCRESET       (1 <<  5) /* 20: EXCRESET */
#define CH32V103_PFIC_CFGR_PFICRSET       (1 <<  6) /* 40: PFICRSET */
#define CH32V103_PFIC_CFGR_SYSRESET       (1 <<  7) /* 80: SYSRESET */
#define CH32V103_PFIC_CFGR_KEYCODE        (16 << 16) /* 10000: KEYCODE */
#define CH32V103_PFIC_CFGR_KEYCODE_MASK        (0xffff)
#define CH32V103_PFIC_GISR_OFFSET         0x004c
#define CH32V103_PFIC_GISR                (CH32V103_PFIC_BASE + CH32V103_PFIC_GISR_OFFSET)
#define CH32V103_PFIC_GISR_NESTSTA        (8 <<  0) /* 01: NESTSTA */
#define CH32V103_PFIC_GISR_NESTSTA_MASK        (0xff)
#define CH32V103_PFIC_GISR_GACTSTA        (1 <<  8) /* 100: GACTSTA */
#define CH32V103_PFIC_GISR_GPENDSTA       (1 <<  9) /* 200: GPENDSTA */
#define CH32V103_PFIC_FIFOADDRR0_OFFSET   0x0060
#define CH32V103_PFIC_FIFOADDRR0          (CH32V103_PFIC_BASE + CH32V103_PFIC_FIFOADDRR0_OFFSET)
#define CH32V103_PFIC_FIFOADDRR0_OFFADDR0 (24 <<  0) /* 01: OFFADDR0 */
#define CH32V103_PFIC_FIFOADDRR0_OFFADDR0_MASK (0xffffff)
#define CH32V103_PFIC_FIFOADDRR0_IRQID0   (8 << 24) /* 1000000: IRQID0 */
#define CH32V103_PFIC_FIFOADDRR0_IRQID0_MASK   (0xff)
#define CH32V103_PFIC_FIFOADDRR1_OFFSET   0x0064
#define CH32V103_PFIC_FIFOADDRR1          (CH32V103_PFIC_BASE + CH32V103_PFIC_FIFOADDRR1_OFFSET)
#define CH32V103_PFIC_FIFOADDRR1_OFFADDR1 (24 <<  0) /* 01: OFFADDR1 */
#define CH32V103_PFIC_FIFOADDRR1_OFFADDR1_MASK (0xffffff)
#define CH32V103_PFIC_FIFOADDRR1_IRQID1   (8 << 24) /* 1000000: IRQID1 */
#define CH32V103_PFIC_FIFOADDRR1_IRQID1_MASK   (0xff)
#define CH32V103_PFIC_FIFOADDRR2_OFFSET   0x0068
#define CH32V103_PFIC_FIFOADDRR2          (CH32V103_PFIC_BASE + CH32V103_PFIC_FIFOADDRR2_OFFSET)
#define CH32V103_PFIC_FIFOADDRR2_OFFADDR2 (24 <<  0) /* 01: OFFADDR2 */
#define CH32V103_PFIC_FIFOADDRR2_OFFADDR2_MASK (0xffffff)
#define CH32V103_PFIC_FIFOADDRR2_IRQID2   (8 << 24) /* 1000000: IRQID2 */
#define CH32V103_PFIC_FIFOADDRR2_IRQID2_MASK   (0xff)
#define CH32V103_PFIC_FIFOADDRR3_OFFSET   0x006c
#define CH32V103_PFIC_FIFOADDRR3          (CH32V103_PFIC_BASE + CH32V103_PFIC_FIFOADDRR3_OFFSET)
#define CH32V103_PFIC_FIFOADDRR3_OFFADDR3 (24 <<  0) /* 01: OFFADDR3 */
#define CH32V103_PFIC_FIFOADDRR3_OFFADDR3_MASK (0xffffff)
#define CH32V103_PFIC_FIFOADDRR3_IRQID3   (8 << 24) /* 1000000: IRQID3 */
#define CH32V103_PFIC_FIFOADDRR3_IRQID3_MASK   (0xff)
#define CH32V103_PFIC_IENR1_OFFSET        0x0100
#define CH32V103_PFIC_IENR1               (CH32V103_PFIC_BASE + CH32V103_PFIC_IENR1_OFFSET)
#define CH32V103_PFIC_IENR1_INTEN         (20 << 12) /* 1000: INTEN */
#define CH32V103_PFIC_IENR1_INTEN_MASK         (0xfffff)
#define CH32V103_PFIC_IENR2_OFFSET        0x0104
#define CH32V103_PFIC_IENR2               (CH32V103_PFIC_BASE + CH32V103_PFIC_IENR2_OFFSET)
#define CH32V103_PFIC_IENR2_INTEN         (28 <<  0) /* 01: INTEN */
#define CH32V103_PFIC_IENR2_INTEN_MASK         (0xfffffff)
#define CH32V103_PFIC_IRER1_OFFSET        0x0180
#define CH32V103_PFIC_IRER1               (CH32V103_PFIC_BASE + CH32V103_PFIC_IRER1_OFFSET)
#define CH32V103_PFIC_IRER1_INTRSET       (20 << 12) /* 1000: INTRSET */
#define CH32V103_PFIC_IRER1_INTRSET_MASK       (0xfffff)
#define CH32V103_PFIC_IRER2_OFFSET        0x0184
#define CH32V103_PFIC_IRER2               (CH32V103_PFIC_BASE + CH32V103_PFIC_IRER2_OFFSET)
#define CH32V103_PFIC_IRER2_INTRSET       (28 <<  0) /* 01: INTRSET */
#define CH32V103_PFIC_IRER2_INTRSET_MASK       (0xfffffff)
#define CH32V103_PFIC_IPSR1_OFFSET        0x0200
#define CH32V103_PFIC_IPSR1               (CH32V103_PFIC_BASE + CH32V103_PFIC_IPSR1_OFFSET)
#define CH32V103_PFIC_IPSR1_PENDSET2_3    (2 <<  2) /* 04: PENDSET */
#define CH32V103_PFIC_IPSR1_PENDSET2_3_MASK    (0x03)
#define CH32V103_PFIC_IPSR1_PENDSET12_31  (20 << 12) /* 1000: PENDSET */
#define CH32V103_PFIC_IPSR1_PENDSET12_31_MASK  (0xfffff)
#define CH32V103_PFIC_IPSR2_OFFSET        0x0204
#define CH32V103_PFIC_IPSR2               (CH32V103_PFIC_BASE + CH32V103_PFIC_IPSR2_OFFSET)
#define CH32V103_PFIC_IPSR2_PENDSET       (28 <<  0) /* 01: PENDSET */
#define CH32V103_PFIC_IPSR2_PENDSET_MASK       (0xfffffff)
#define CH32V103_PFIC_IPRR1_OFFSET        0x0280
#define CH32V103_PFIC_IPRR1               (CH32V103_PFIC_BASE + CH32V103_PFIC_IPRR1_OFFSET)
#define CH32V103_PFIC_IPRR1_PENDRESET2_3  (2 <<  2) /* 04: PENDRESET */
#define CH32V103_PFIC_IPRR1_PENDRESET2_3_MASK  (0x03)
#define CH32V103_PFIC_IPRR1_PENDRESET12_31 (20 << 12) /* 1000: PENDRESET */
#define CH32V103_PFIC_IPRR1_PENDRESET12_31_MASK (0xfffff)
#define CH32V103_PFIC_IPRR2_OFFSET        0x0284
#define CH32V103_PFIC_IPRR2               (CH32V103_PFIC_BASE + CH32V103_PFIC_IPRR2_OFFSET)
#define CH32V103_PFIC_IPRR2_PENDRESET     (28 <<  0) /* 01: PENDRESET */
#define CH32V103_PFIC_IPRR2_PENDRESET_MASK     (0xfffffff)
#define CH32V103_PFIC_IACTR1_OFFSET       0x0300
#define CH32V103_PFIC_IACTR1              (CH32V103_PFIC_BASE + CH32V103_PFIC_IACTR1_OFFSET)
#define CH32V103_PFIC_IACTR1_IACTS        (20 << 12) /* 1000: IACTS */
#define CH32V103_PFIC_IACTR1_IACTS_MASK        (0xfffff)
#define CH32V103_PFIC_IACTR2_OFFSET       0x0304
#define CH32V103_PFIC_IACTR2              (CH32V103_PFIC_BASE + CH32V103_PFIC_IACTR2_OFFSET)
#define CH32V103_PFIC_IACTR2_IACTS        (28 <<  0) /* 01: IACTS */
#define CH32V103_PFIC_IACTR2_IACTS_MASK        (0xfffffff)
#define CH32V103_PFIC_SCTLR_OFFSET        0x0d10
#define CH32V103_PFIC_SCTLR               (CH32V103_PFIC_BASE + CH32V103_PFIC_SCTLR_OFFSET)
#define CH32V103_PFIC_SCTLR_SLEEPONEXIT   (1 <<  1) /* 02: SLEEPONEXIT */
#define CH32V103_PFIC_SCTLR_SLEEPDEEP     (1 <<  2) /* 04: SLEEPDEEP */
#define CH32V103_PFIC_SCTLR_WFITOWFE      (1 <<  3) /* 08: WFITOWFE */
#define CH32V103_PFIC_SCTLR_SEVONPEND     (1 <<  4) /* 10: SEVONPEND */
#define CH32V103_PFIC_SCTLR_SETEVENT      (1 <<  5) /* 20: SETEVENT */
#define CH32V103_PFIC_STK_CTLR_OFFSET     0x1000
#define CH32V103_PFIC_STK_CTLR            (CH32V103_PFIC_BASE + CH32V103_PFIC_STK_CTLR_OFFSET)
#define CH32V103_PFIC_STK_CTLR_STE        (28 <<  0) /* 01: STE */
#define CH32V103_PFIC_STK_CTLR_STE_MASK        (0xfffffff)

/* USBD - Universal serial bus full-speed device interface */
#define CH32V103_USBD_BASE                0x40005c00
#define CH32V103_USBD_EP0R_OFFSET         0x0000
#define CH32V103_USBD_EP0R                (CH32V103_USBD_BASE + CH32V103_USBD_EP0R_OFFSET)
#define CH32V103_USBD_EP0R_EA             (4 <<  0) /* 01: Endpoint address */
#define CH32V103_USBD_EP0R_EA_MASK             (0x0f)
#define CH32V103_USBD_EP0R_STAT_TX        (2 <<  4) /* 10: Status bits, for transmission transfers */
#define CH32V103_USBD_EP0R_STAT_TX_MASK        (0x03)
#define CH32V103_USBD_EP0R_DTOG_TX        (1 <<  6) /* 40: Data Toggle, for transmission transfers */
#define CH32V103_USBD_EP0R_CTR_TX         (1 <<  7) /* 80: Correct Transfer for transmission */
#define CH32V103_USBD_EP0R_EP_KIND        (1 <<  8) /* 100: Endpoint kind */
#define CH32V103_USBD_EP0R_EP_TYPE        (2 <<  9) /* 200: Endpoint type */
#define CH32V103_USBD_EP0R_EP_TYPE_MASK        (0x03)
#define CH32V103_USBD_EP0R_SETUP          (1 << 11) /* 800: Setup transaction completed */
#define CH32V103_USBD_EP0R_STAT_RX        (2 << 12) /* 1000: Status bits, for reception transfers */
#define CH32V103_USBD_EP0R_STAT_RX_MASK        (0x03)
#define CH32V103_USBD_EP0R_DTOG_RX        (1 << 14) /* 4000: Data Toggle, for reception transfers */
#define CH32V103_USBD_EP0R_CTR_RX         (1 << 15) /* 8000: Correct transfer for reception */
#define CH32V103_USBD_EP1R_OFFSET         0x0004
#define CH32V103_USBD_EP1R                (CH32V103_USBD_BASE + CH32V103_USBD_EP1R_OFFSET)
#define CH32V103_USBD_EP1R_EA             (4 <<  0) /* 01: Endpoint address */
#define CH32V103_USBD_EP1R_EA_MASK             (0x0f)
#define CH32V103_USBD_EP1R_STAT_TX        (2 <<  4) /* 10: Status bits, for transmission transfers */
#define CH32V103_USBD_EP1R_STAT_TX_MASK        (0x03)
#define CH32V103_USBD_EP1R_DTOG_TX        (1 <<  6) /* 40: Data Toggle, for transmission transfers */
#define CH32V103_USBD_EP1R_CTR_TX         (1 <<  7) /* 80: Correct Transfer for transmission */
#define CH32V103_USBD_EP1R_EP_KIND        (1 <<  8) /* 100: Endpoint kind */
#define CH32V103_USBD_EP1R_EP_TYPE        (2 <<  9) /* 200: Endpoint type */
#define CH32V103_USBD_EP1R_EP_TYPE_MASK        (0x03)
#define CH32V103_USBD_EP1R_SETUP          (1 << 11) /* 800: Setup transaction completed */
#define CH32V103_USBD_EP1R_STAT_RX        (2 << 12) /* 1000: Status bits, for reception transfers */
#define CH32V103_USBD_EP1R_STAT_RX_MASK        (0x03)
#define CH32V103_USBD_EP1R_DTOG_RX        (1 << 14) /* 4000: Data Toggle, for reception transfers */
#define CH32V103_USBD_EP1R_CTR_RX         (1 << 15) /* 8000: Correct transfer for reception */
#define CH32V103_USBD_EP2R_OFFSET         0x0008
#define CH32V103_USBD_EP2R                (CH32V103_USBD_BASE + CH32V103_USBD_EP2R_OFFSET)
#define CH32V103_USBD_EP2R_EA             (4 <<  0) /* 01: Endpoint address */
#define CH32V103_USBD_EP2R_EA_MASK             (0x0f)
#define CH32V103_USBD_EP2R_STAT_TX        (2 <<  4) /* 10: Status bits, for transmission transfers */
#define CH32V103_USBD_EP2R_STAT_TX_MASK        (0x03)
#define CH32V103_USBD_EP2R_DTOG_TX        (1 <<  6) /* 40: Data Toggle, for transmission transfers */
#define CH32V103_USBD_EP2R_CTR_TX         (1 <<  7) /* 80: Correct Transfer for transmission */
#define CH32V103_USBD_EP2R_EP_KIND        (1 <<  8) /* 100: Endpoint kind */
#define CH32V103_USBD_EP2R_EP_TYPE        (2 <<  9) /* 200: Endpoint type */
#define CH32V103_USBD_EP2R_EP_TYPE_MASK        (0x03)
#define CH32V103_USBD_EP2R_SETUP          (1 << 11) /* 800: Setup transaction completed */
#define CH32V103_USBD_EP2R_STAT_RX        (2 << 12) /* 1000: Status bits, for reception transfers */
#define CH32V103_USBD_EP2R_STAT_RX_MASK        (0x03)
#define CH32V103_USBD_EP2R_DTOG_RX        (1 << 14) /* 4000: Data Toggle, for reception transfers */
#define CH32V103_USBD_EP2R_CTR_RX         (1 << 15) /* 8000: Correct transfer for reception */
#define CH32V103_USBD_EP3R_OFFSET         0x000c
#define CH32V103_USBD_EP3R                (CH32V103_USBD_BASE + CH32V103_USBD_EP3R_OFFSET)
#define CH32V103_USBD_EP3R_EA             (4 <<  0) /* 01: Endpoint address */
#define CH32V103_USBD_EP3R_EA_MASK             (0x0f)
#define CH32V103_USBD_EP3R_STAT_TX        (2 <<  4) /* 10: Status bits, for transmission transfers */
#define CH32V103_USBD_EP3R_STAT_TX_MASK        (0x03)
#define CH32V103_USBD_EP3R_DTOG_TX        (1 <<  6) /* 40: Data Toggle, for transmission transfers */
#define CH32V103_USBD_EP3R_CTR_TX         (1 <<  7) /* 80: Correct Transfer for transmission */
#define CH32V103_USBD_EP3R_EP_KIND        (1 <<  8) /* 100: Endpoint kind */
#define CH32V103_USBD_EP3R_EP_TYPE        (2 <<  9) /* 200: Endpoint type */
#define CH32V103_USBD_EP3R_EP_TYPE_MASK        (0x03)
#define CH32V103_USBD_EP3R_SETUP          (1 << 11) /* 800: Setup transaction completed */
#define CH32V103_USBD_EP3R_STAT_RX        (2 << 12) /* 1000: Status bits, for reception transfers */
#define CH32V103_USBD_EP3R_STAT_RX_MASK        (0x03)
#define CH32V103_USBD_EP3R_DTOG_RX        (1 << 14) /* 4000: Data Toggle, for reception transfers */
#define CH32V103_USBD_EP3R_CTR_RX         (1 << 15) /* 8000: Correct transfer for reception */
#define CH32V103_USBD_EP4R_OFFSET         0x0010
#define CH32V103_USBD_EP4R                (CH32V103_USBD_BASE + CH32V103_USBD_EP4R_OFFSET)
#define CH32V103_USBD_EP4R_EA             (4 <<  0) /* 01: Endpoint address */
#define CH32V103_USBD_EP4R_EA_MASK             (0x0f)
#define CH32V103_USBD_EP4R_STAT_TX        (2 <<  4) /* 10: Status bits, for transmission transfers */
#define CH32V103_USBD_EP4R_STAT_TX_MASK        (0x03)
#define CH32V103_USBD_EP4R_DTOG_TX        (1 <<  6) /* 40: Data Toggle, for transmission transfers */
#define CH32V103_USBD_EP4R_CTR_TX         (1 <<  7) /* 80: Correct Transfer for transmission */
#define CH32V103_USBD_EP4R_EP_KIND        (1 <<  8) /* 100: Endpoint kind */
#define CH32V103_USBD_EP4R_EP_TYPE        (2 <<  9) /* 200: Endpoint type */
#define CH32V103_USBD_EP4R_EP_TYPE_MASK        (0x03)
#define CH32V103_USBD_EP4R_SETUP          (1 << 11) /* 800: Setup transaction completed */
#define CH32V103_USBD_EP4R_STAT_RX        (2 << 12) /* 1000: Status bits, for reception transfers */
#define CH32V103_USBD_EP4R_STAT_RX_MASK        (0x03)
#define CH32V103_USBD_EP4R_DTOG_RX        (1 << 14) /* 4000: Data Toggle, for reception transfers */
#define CH32V103_USBD_EP4R_CTR_RX         (1 << 15) /* 8000: Correct transfer for reception */
#define CH32V103_USBD_EP5R_OFFSET         0x0014
#define CH32V103_USBD_EP5R                (CH32V103_USBD_BASE + CH32V103_USBD_EP5R_OFFSET)
#define CH32V103_USBD_EP5R_EA             (4 <<  0) /* 01: Endpoint address */
#define CH32V103_USBD_EP5R_EA_MASK             (0x0f)
#define CH32V103_USBD_EP5R_STAT_TX        (2 <<  4) /* 10: Status bits, for transmission transfers */
#define CH32V103_USBD_EP5R_STAT_TX_MASK        (0x03)
#define CH32V103_USBD_EP5R_DTOG_TX        (1 <<  6) /* 40: Data Toggle, for transmission transfers */
#define CH32V103_USBD_EP5R_CTR_TX         (1 <<  7) /* 80: Correct Transfer for transmission */
#define CH32V103_USBD_EP5R_EP_KIND        (1 <<  8) /* 100: Endpoint kind */
#define CH32V103_USBD_EP5R_EP_TYPE        (2 <<  9) /* 200: Endpoint type */
#define CH32V103_USBD_EP5R_EP_TYPE_MASK        (0x03)
#define CH32V103_USBD_EP5R_SETUP          (1 << 11) /* 800: Setup transaction completed */
#define CH32V103_USBD_EP5R_STAT_RX        (2 << 12) /* 1000: Status bits, for reception transfers */
#define CH32V103_USBD_EP5R_STAT_RX_MASK        (0x03)
#define CH32V103_USBD_EP5R_DTOG_RX        (1 << 14) /* 4000: Data Toggle, for reception transfers */
#define CH32V103_USBD_EP5R_CTR_RX         (1 << 15) /* 8000: Correct transfer for reception */
#define CH32V103_USBD_EP6R_OFFSET         0x0018
#define CH32V103_USBD_EP6R                (CH32V103_USBD_BASE + CH32V103_USBD_EP6R_OFFSET)
#define CH32V103_USBD_EP6R_EA             (4 <<  0) /* 01: Endpoint address */
#define CH32V103_USBD_EP6R_EA_MASK             (0x0f)
#define CH32V103_USBD_EP6R_STAT_TX        (2 <<  4) /* 10: Status bits, for transmission transfers */
#define CH32V103_USBD_EP6R_STAT_TX_MASK        (0x03)
#define CH32V103_USBD_EP6R_DTOG_TX        (1 <<  6) /* 40: Data Toggle, for transmission transfers */
#define CH32V103_USBD_EP6R_CTR_TX         (1 <<  7) /* 80: Correct Transfer for transmission */
#define CH32V103_USBD_EP6R_EP_KIND        (1 <<  8) /* 100: Endpoint kind */
#define CH32V103_USBD_EP6R_EP_TYPE        (2 <<  9) /* 200: Endpoint type */
#define CH32V103_USBD_EP6R_EP_TYPE_MASK        (0x03)
#define CH32V103_USBD_EP6R_SETUP          (1 << 11) /* 800: Setup transaction completed */
#define CH32V103_USBD_EP6R_STAT_RX        (2 << 12) /* 1000: Status bits, for reception transfers */
#define CH32V103_USBD_EP6R_STAT_RX_MASK        (0x03)
#define CH32V103_USBD_EP6R_DTOG_RX        (1 << 14) /* 4000: Data Toggle, for reception transfers */
#define CH32V103_USBD_EP6R_CTR_RX         (1 << 15) /* 8000: Correct transfer for reception */
#define CH32V103_USBD_EP7R_OFFSET         0x001c
#define CH32V103_USBD_EP7R                (CH32V103_USBD_BASE + CH32V103_USBD_EP7R_OFFSET)
#define CH32V103_USBD_EP7R_EA             (4 <<  0) /* 01: Endpoint address */
#define CH32V103_USBD_EP7R_EA_MASK             (0x0f)
#define CH32V103_USBD_EP7R_STAT_TX        (2 <<  4) /* 10: Status bits, for transmission transfers */
#define CH32V103_USBD_EP7R_STAT_TX_MASK        (0x03)
#define CH32V103_USBD_EP7R_DTOG_TX        (1 <<  6) /* 40: Data Toggle, for transmission transfers */
#define CH32V103_USBD_EP7R_CTR_TX         (1 <<  7) /* 80: Correct Transfer for transmission */
#define CH32V103_USBD_EP7R_EP_KIND        (1 <<  8) /* 100: Endpoint kind */
#define CH32V103_USBD_EP7R_EP_TYPE        (2 <<  9) /* 200: Endpoint type */
#define CH32V103_USBD_EP7R_EP_TYPE_MASK        (0x03)
#define CH32V103_USBD_EP7R_SETUP          (1 << 11) /* 800: Setup transaction completed */
#define CH32V103_USBD_EP7R_STAT_RX        (2 << 12) /* 1000: Status bits, for reception transfers */
#define CH32V103_USBD_EP7R_STAT_RX_MASK        (0x03)
#define CH32V103_USBD_EP7R_DTOG_RX        (1 << 14) /* 4000: Data Toggle, for reception transfers */
#define CH32V103_USBD_EP7R_CTR_RX         (1 << 15) /* 8000: Correct transfer for reception */
#define CH32V103_USBD_CNTR_OFFSET         0x0040
#define CH32V103_USBD_CNTR                (CH32V103_USBD_BASE + CH32V103_USBD_CNTR_OFFSET)
#define CH32V103_USBD_CNTR_FRES           (1 <<  0) /* 01: Force USB Reset */
#define CH32V103_USBD_CNTR_PDWN           (1 <<  1) /* 02: Power down */
#define CH32V103_USBD_CNTR_LPMODE         (1 <<  2) /* 04: Low-power mode */
#define CH32V103_USBD_CNTR_FSUSP          (1 <<  3) /* 08: Force suspend */
#define CH32V103_USBD_CNTR_RESUME         (1 <<  4) /* 10: Resume request */
#define CH32V103_USBD_CNTR_ESOFM          (1 <<  8) /* 100: Expected start of frame interrupt mask */
#define CH32V103_USBD_CNTR_SOFM           (1 <<  9) /* 200: Start of frame interrupt mask */
#define CH32V103_USBD_CNTR_RESETM         (1 << 10) /* 400: USB reset interrupt mask */
#define CH32V103_USBD_CNTR_SUSPM          (1 << 11) /* 800: Suspend mode interrupt mask */
#define CH32V103_USBD_CNTR_WKUPM          (1 << 12) /* 1000: Wakeup interrupt mask */
#define CH32V103_USBD_CNTR_ERRM           (1 << 13) /* 2000: Error interrupt mask */
#define CH32V103_USBD_CNTR_PMAOVRM        (1 << 14) /* 4000: Packet memory area over / underrun interrupt mask */
#define CH32V103_USBD_CNTR_CTRM           (1 << 15) /* 8000: Correct transfer interrupt mask */
#define CH32V103_USBD_ISTR_OFFSET         0x0044
#define CH32V103_USBD_ISTR                (CH32V103_USBD_BASE + CH32V103_USBD_ISTR_OFFSET)
#define CH32V103_USBD_ISTR_EP_ID          (4 <<  0) /* 01: Endpoint Identifier */
#define CH32V103_USBD_ISTR_EP_ID_MASK          (0x0f)
#define CH32V103_USBD_ISTR_DIR            (1 <<  4) /* 10: Direction of transaction */
#define CH32V103_USBD_ISTR_ESOF           (1 <<  8) /* 100: Expected start frame */
#define CH32V103_USBD_ISTR_SOF            (1 <<  9) /* 200: start of frame */
#define CH32V103_USBD_ISTR_RESET          (1 << 10) /* 400: reset request */
#define CH32V103_USBD_ISTR_SUSP           (1 << 11) /* 800: Suspend mode request */
#define CH32V103_USBD_ISTR_WKUP           (1 << 12) /* 1000: Wakeup */
#define CH32V103_USBD_ISTR_ERR            (1 << 13) /* 2000: Error */
#define CH32V103_USBD_ISTR_PMAOVR         (1 << 14) /* 4000: Packet memory area over / underrun */
#define CH32V103_USBD_ISTR_CTR            (1 << 15) /* 8000: Correct transfer */
#define CH32V103_USBD_FNR_OFFSET          0x0048
#define CH32V103_USBD_FNR                 (CH32V103_USBD_BASE + CH32V103_USBD_FNR_OFFSET)
#define CH32V103_USBD_FNR_FN              (11 <<  0) /* 01: Frame number */
#define CH32V103_USBD_FNR_FN_MASK              (0x7ff)
#define CH32V103_USBD_FNR_LSOF            (2 << 11) /* 800: Lost SOF */
#define CH32V103_USBD_FNR_LSOF_MASK            (0x03)
#define CH32V103_USBD_FNR_LCK             (1 << 13) /* 2000: Locked */
#define CH32V103_USBD_FNR_RXDM            (1 << 14) /* 4000: Receive data - line status */
#define CH32V103_USBD_FNR_RXDP            (1 << 15) /* 8000: Receive data + line status */
#define CH32V103_USBD_DADDR_OFFSET        0x004c
#define CH32V103_USBD_DADDR               (CH32V103_USBD_BASE + CH32V103_USBD_DADDR_OFFSET)
#define CH32V103_USBD_DADDR_ADD           (7 <<  0) /* 01: Device address */
#define CH32V103_USBD_DADDR_ADD_MASK           (0x7f)
#define CH32V103_USBD_DADDR_EF            (1 <<  7) /* 80: Enable function */
#define CH32V103_USBD_BTABLE_OFFSET       0x0050
#define CH32V103_USBD_BTABLE              (CH32V103_USBD_BASE + CH32V103_USBD_BTABLE_OFFSET)
#define CH32V103_USBD_BTABLE_BTABLE       (13 <<  3) /* 08: Buffer table */
#define CH32V103_USBD_BTABLE_BTABLE_MASK       (0x1fff)
