
/* PWR - Power control */
#define CH32V103_PWR_BASE                 0x40007000
#define CH32V103_PWR_CTLR_OFFSET          0x0000
#define CH32V103_PWR_CTLR                 (CH32V103_PWR_BASE + CH32V103_PWR_CTLR_OFFSET) /* read-write */
#define CH32V103_PWR_CTLR_LPDS            (1 <<  0) /* 00000001: Low Power Deep Sleep */
#define CH32V103_PWR_CTLR_PDDS            (1 <<  1) /* 00000002: Power Down Deep Sleep */
#define CH32V103_PWR_CTLR_CWUF            (1 <<  2) /* 00000004: Clear Wake-up Flag */
#define CH32V103_PWR_CTLR_CSBF            (1 <<  3) /* 00000008: Clear STANDBY Flag */
#define CH32V103_PWR_CTLR_PVDE            (1 <<  4) /* 00000010: Power Voltage Detector Enable */
#define CH32V103_PWR_CTLR_PLS             (0x7 << 5) /* 000000e0: PVD Level Selection */
#define CH32V103_PWR_CTLR_PLS_MASK        (0x7 << 5)
#define CH32V103_PWR_CTLR_DBP             (1 <<  8) /* 00000100: Disable Backup Domain write protection */
#define CH32V103_PWR_CSR_OFFSET           0x0004
#define CH32V103_PWR_CSR                  (CH32V103_PWR_BASE + CH32V103_PWR_CSR_OFFSET)
#define CH32V103_PWR_CSR_WUF              (1 <<  0) /* 00000001: Wake-Up Flag */
#define CH32V103_PWR_CSR_SBF              (1 <<  1) /* 00000002: STANDBY Flag */
#define CH32V103_PWR_CSR_PVDO             (1 <<  2) /* 00000004: PVD Output */
#define CH32V103_PWR_CSR_EWUP             (1 <<  8) /* 00000100: Enable WKUP pin */

/* RCC - Reset and clock control */
#define CH32V103_RCC_BASE                 0x40021000
#define CH32V103_RCC_CTLR_OFFSET          0x0000
#define CH32V103_RCC_CTLR                 (CH32V103_RCC_BASE + CH32V103_RCC_CTLR_OFFSET)
#define CH32V103_RCC_CTLR_HSION           (1 <<  0) /* 00000001: Internal High Speed clock enable */
#define CH32V103_RCC_CTLR_HSIRDY          (1 <<  1) /* 00000002: Internal High Speed clock ready flag */
#define CH32V103_RCC_CTLR_HSITRIM         (0x1f << 3) /* 000000f8: Internal High Speed clock trimming */
#define CH32V103_RCC_CTLR_HSITRIM_MASK    (0x1f << 3)
#define CH32V103_RCC_CTLR_HSICAL          (0xff << 8) /* 0000ff00: Internal High Speed clock Calibration */
#define CH32V103_RCC_CTLR_HSICAL_MASK     (0xff << 8)
#define CH32V103_RCC_CTLR_HSEON           (1 << 16) /* 00010000: External High Speed clock enable */
#define CH32V103_RCC_CTLR_HSERDY          (1 << 17) /* 00020000: External High Speed clock ready flag */
#define CH32V103_RCC_CTLR_HSEBYP          (1 << 18) /* 00040000: External High Speed clock Bypass */
#define CH32V103_RCC_CTLR_CSSON           (1 << 19) /* 00080000: Clock Security System enable */
#define CH32V103_RCC_CTLR_PLLON           (1 << 24) /* 01000000: PLL enable */
#define CH32V103_RCC_CTLR_PLLRDY          (1 << 25) /* 02000000: PLL clock ready flag */
#define CH32V103_RCC_CFGR0_OFFSET         0x0004
#define CH32V103_RCC_CFGR0                (CH32V103_RCC_BASE + CH32V103_RCC_CFGR0_OFFSET)
#define CH32V103_RCC_CFGR0_SW             (0x3 << 0) /* 00000003: System clock Switch */
#define CH32V103_RCC_CFGR0_SW_MASK        (0x3 << 0)
#define CH32V103_RCC_CFGR0_SWS            (0x3 << 2) /* 0000000c: System Clock Switch Status */
#define CH32V103_RCC_CFGR0_SWS_MASK       (0x3 << 2)
#define CH32V103_RCC_CFGR0_HPRE           (0xf << 4) /* 000000f0: AHB prescaler */
#define CH32V103_RCC_CFGR0_HPRE_MASK      (0xf << 4)
#define CH32V103_RCC_CFGR0_PPRE1          (0x7 << 8) /* 00000700: APB Low speed prescaler(APB1) */
#define CH32V103_RCC_CFGR0_PPRE1_MASK     (0x7 << 8)
#define CH32V103_RCC_CFGR0_PPRE2          (0x7 << 11) /* 00003800: APB High speed prescaler(APB2) */
#define CH32V103_RCC_CFGR0_PPRE2_MASK     (0x7 << 11)
#define CH32V103_RCC_CFGR0_ADCPRE         (0x3 << 14) /* 0000c000: ADC prescaler */
#define CH32V103_RCC_CFGR0_ADCPRE_MASK    (0x3 << 14)
#define CH32V103_RCC_CFGR0_PLLSRC         (1 << 16) /* 00010000: PLL entry clock source */
#define CH32V103_RCC_CFGR0_PLLXTPRE       (1 << 17) /* 00020000: HSE divider for PLL entry */
#define CH32V103_RCC_CFGR0_PLLMUL         (0xf << 18) /* 003c0000: PLL Multiplication Factor */
#define CH32V103_RCC_CFGR0_PLLMUL_MASK    (0xf << 18)
#define CH32V103_RCC_CFGR0_USBPRE         (1 << 22) /* 00400000: USB prescaler */
#define CH32V103_RCC_CFGR0_MCO            (0x7 << 24) /* 07000000: Microcontroller clock output */
#define CH32V103_RCC_CFGR0_MCO_MASK       (0x7 << 24)
#define CH32V103_RCC_INTR_OFFSET          0x0008
#define CH32V103_RCC_INTR                 (CH32V103_RCC_BASE + CH32V103_RCC_INTR_OFFSET)
#define CH32V103_RCC_INTR_LSIRDYF         (1 <<  0) /* 00000001: LSI Ready Interrupt flag */
#define CH32V103_RCC_INTR_LSERDYF         (1 <<  1) /* 00000002: LSE Ready Interrupt flag */
#define CH32V103_RCC_INTR_HSIRDYF         (1 <<  2) /* 00000004: HSI Ready Interrupt flag */
#define CH32V103_RCC_INTR_HSERDYF         (1 <<  3) /* 00000008: HSE Ready Interrupt flag */
#define CH32V103_RCC_INTR_PLLRDYF         (1 <<  4) /* 00000010: PLL Ready Interrupt flag */
#define CH32V103_RCC_INTR_CSSF            (1 <<  7) /* 00000080: Clock Security System Interrupt flag */
#define CH32V103_RCC_INTR_LSIRDYIE        (1 <<  8) /* 00000100: LSI Ready Interrupt Enable */
#define CH32V103_RCC_INTR_LSERDYIE        (1 <<  9) /* 00000200: LSE Ready Interrupt Enable */
#define CH32V103_RCC_INTR_HSIRDYIE        (1 << 10) /* 00000400: HSI Ready Interrupt Enable */
#define CH32V103_RCC_INTR_HSERDYIE        (1 << 11) /* 00000800: HSE Ready Interrupt Enable */
#define CH32V103_RCC_INTR_PLLRDYIE        (1 << 12) /* 00001000: PLL Ready Interrupt Enable */
#define CH32V103_RCC_INTR_LSIRDYC         (1 << 16) /* 00010000: LSI Ready Interrupt Clear */
#define CH32V103_RCC_INTR_LSERDYC         (1 << 17) /* 00020000: LSE Ready Interrupt Clear */
#define CH32V103_RCC_INTR_HSIRDYC         (1 << 18) /* 00040000: HSI Ready Interrupt Clear */
#define CH32V103_RCC_INTR_HSERDYC         (1 << 19) /* 00080000: HSE Ready Interrupt Clear */
#define CH32V103_RCC_INTR_PLLRDYC         (1 << 20) /* 00100000: PLL Ready Interrupt Clear */
#define CH32V103_RCC_INTR_CSSC            (1 << 23) /* 00800000: Clock security system interrupt clear */
#define CH32V103_RCC_APB2PRSTR_OFFSET     0x000c
#define CH32V103_RCC_APB2PRSTR            (CH32V103_RCC_BASE + CH32V103_RCC_APB2PRSTR_OFFSET) /* read-write */
#define CH32V103_RCC_APB2PRSTR_AFIORST    (1 <<  0) /* 00000001: Alternate function I/O reset */
#define CH32V103_RCC_APB2PRSTR_IOPARST    (1 <<  2) /* 00000004: IO port A reset */
#define CH32V103_RCC_APB2PRSTR_IOPBRST    (1 <<  3) /* 00000008: IO port B reset */
#define CH32V103_RCC_APB2PRSTR_IOPCRST    (1 <<  4) /* 00000010: IO port C reset */
#define CH32V103_RCC_APB2PRSTR_IOPDRST    (1 <<  5) /* 00000020: IO port D reset */
#define CH32V103_RCC_APB2PRSTR_ADCRST     (1 <<  9) /* 00000200: ADC interface reset */
#define CH32V103_RCC_APB2PRSTR_TIM1RST    (1 << 11) /* 00000800: TIM1 timer reset */
#define CH32V103_RCC_APB2PRSTR_SPI1RST    (1 << 12) /* 00001000: SPI 1 reset */
#define CH32V103_RCC_APB2PRSTR_USART1RST  (1 << 14) /* 00004000: USART1 reset */
#define CH32V103_RCC_APB1PRSTR_OFFSET     0x0010
#define CH32V103_RCC_APB1PRSTR            (CH32V103_RCC_BASE + CH32V103_RCC_APB1PRSTR_OFFSET) /* read-write */
#define CH32V103_RCC_APB1PRSTR_TIM2RST    (1 <<  0) /* 00000001: Timer 2 reset */
#define CH32V103_RCC_APB1PRSTR_TIM3RST    (1 <<  1) /* 00000002: Timer 3 reset */
#define CH32V103_RCC_APB1PRSTR_TIM4RST    (1 <<  2) /* 00000004: Timer 4 reset */
#define CH32V103_RCC_APB1PRSTR_WWDGRST    (1 << 11) /* 00000800: Window watchdog reset */
#define CH32V103_RCC_APB1PRSTR_SPI2RST    (1 << 14) /* 00004000: SPI2 reset */
#define CH32V103_RCC_APB1PRSTR_USART2RST  (1 << 17) /* 00020000: USART 2 reset */
#define CH32V103_RCC_APB1PRSTR_USART3RST  (1 << 18) /* 00040000: USART 3 reset */
#define CH32V103_RCC_APB1PRSTR_I2C1RST    (1 << 21) /* 00200000: I2C1 reset */
#define CH32V103_RCC_APB1PRSTR_I2C2RST    (1 << 22) /* 00400000: I2C2 reset */
#define CH32V103_RCC_APB1PRSTR_USBDRST    (1 << 23) /* 00800000: USBD reset */
#define CH32V103_RCC_APB1PRSTR_CANRST     (1 << 25) /* 02000000: CAN reset */
#define CH32V103_RCC_APB1PRSTR_BKPRST     (1 << 27) /* 08000000: Backup interface reset */
#define CH32V103_RCC_APB1PRSTR_PWRRST     (1 << 28) /* 10000000: Power interface reset */
#define CH32V103_RCC_APB1PRSTR_DACRST     (1 << 29) /* 20000000: DAC interface reset */
#define CH32V103_RCC_AHBPCENR_OFFSET      0x0014
#define CH32V103_RCC_AHBPCENR             (CH32V103_RCC_BASE + CH32V103_RCC_AHBPCENR_OFFSET) /* read-write */
#define CH32V103_RCC_AHBPCENR_DMAEN       (1 <<  0) /* 00000001: DMA clock enable */
#define CH32V103_RCC_AHBPCENR_SRAMEN      (1 <<  2) /* 00000004: SRAM interface clock enable */
#define CH32V103_RCC_AHBPCENR_FLITFEN     (1 <<  4) /* 00000010: FLITF clock enable */
#define CH32V103_RCC_AHBPCENR_CRCEN       (1 <<  6) /* 00000040: CRC clock enable */
#define CH32V103_RCC_AHBPCENR_USBHDEN     (1 << 12) /* 00001000: USBHD clock enable */
#define CH32V103_RCC_APB2PCENR_OFFSET     0x0018
#define CH32V103_RCC_APB2PCENR            (CH32V103_RCC_BASE + CH32V103_RCC_APB2PCENR_OFFSET) /* read-write */
#define CH32V103_RCC_APB2PCENR_AFIOEN     (1 <<  0) /* 00000001: Alternate function I/O clock enable */
#define CH32V103_RCC_APB2PCENR_IOPAEN     (1 <<  2) /* 00000004: I/O port A clock enable */
#define CH32V103_RCC_APB2PCENR_IOPBEN     (1 <<  3) /* 00000008: I/O port B clock enable */
#define CH32V103_RCC_APB2PCENR_IOPCEN     (1 <<  4) /* 00000010: I/O port C clock enable */
#define CH32V103_RCC_APB2PCENR_IOPDEN     (1 <<  5) /* 00000020: I/O port D clock enable */
#define CH32V103_RCC_APB2PCENR_ADCEN      (1 <<  9) /* 00000200: ADC interface clock enable */
#define CH32V103_RCC_APB2PCENR_TIM1EN     (1 << 11) /* 00000800: TIM1 Timer clock enable */
#define CH32V103_RCC_APB2PCENR_SPI1EN     (1 << 12) /* 00001000: SPI 1 clock enable */
#define CH32V103_RCC_APB2PCENR_USART1EN   (1 << 14) /* 00004000: USART1 clock enable */
#define CH32V103_RCC_APB1PCENR_OFFSET     0x001c
#define CH32V103_RCC_APB1PCENR            (CH32V103_RCC_BASE + CH32V103_RCC_APB1PCENR_OFFSET) /* read-write */
#define CH32V103_RCC_APB1PCENR_TIM2EN     (1 <<  0) /* 00000001: Timer 2 clock enable */
#define CH32V103_RCC_APB1PCENR_TIM3EN     (1 <<  1) /* 00000002: Timer 3 clock enable */
#define CH32V103_RCC_APB1PCENR_TIM4EN     (1 <<  2) /* 00000004: Timer 4 clock enable */
#define CH32V103_RCC_APB1PCENR_WWDGEN     (1 << 11) /* 00000800: Window watchdog clock enable */
#define CH32V103_RCC_APB1PCENR_SPI2EN     (1 << 14) /* 00004000: SPI 2 clock enable */
#define CH32V103_RCC_APB1PCENR_USART2EN   (1 << 17) /* 00020000: USART 2 clock enable */
#define CH32V103_RCC_APB1PCENR_USART3EN   (1 << 18) /* 00040000: USART 3 clock enable */
#define CH32V103_RCC_APB1PCENR_I2C1EN     (1 << 21) /* 00200000: I2C 1 clock enable */
#define CH32V103_RCC_APB1PCENR_I2C2EN     (1 << 22) /* 00400000: I2C 2 clock enable */
#define CH32V103_RCC_APB1PCENR_USBDEN     (1 << 23) /* 00800000: USBD clock enable */
#define CH32V103_RCC_APB1PCENR_CANEN      (1 << 25) /* 02000000: CAN clock enable */
#define CH32V103_RCC_APB1PCENR_BKPEN      (1 << 27) /* 08000000: Backup interface clock enable */
#define CH32V103_RCC_APB1PCENR_PWREN      (1 << 28) /* 10000000: Power interface clock enable */
#define CH32V103_RCC_APB1PCENR_DACEN      (1 << 29) /* 20000000: DAC interface clock enable */
#define CH32V103_RCC_BDCTLR_OFFSET        0x0020
#define CH32V103_RCC_BDCTLR               (CH32V103_RCC_BASE + CH32V103_RCC_BDCTLR_OFFSET)
#define CH32V103_RCC_BDCTLR_LSEON         (1 <<  0) /* 00000001: External Low Speed oscillator enable */
#define CH32V103_RCC_BDCTLR_LSERDY        (1 <<  1) /* 00000002: External Low Speed oscillator ready */
#define CH32V103_RCC_BDCTLR_LSEBYP        (1 <<  2) /* 00000004: External Low Speed oscillator bypass */
#define CH32V103_RCC_BDCTLR_RTCSEL        (0x3 << 8) /* 00000300: RTC clock source selection */
#define CH32V103_RCC_BDCTLR_RTCSEL_MASK   (0x3 << 8)
#define CH32V103_RCC_BDCTLR_RTCEN         (1 << 15) /* 00008000: RTC clock enable */
#define CH32V103_RCC_BDCTLR_BDRST         (1 << 16) /* 00010000: Backup domain software reset */
#define CH32V103_RCC_RSTSCKR_OFFSET       0x0024
#define CH32V103_RCC_RSTSCKR              (CH32V103_RCC_BASE + CH32V103_RCC_RSTSCKR_OFFSET)
#define CH32V103_RCC_RSTSCKR_LSION        (1 <<  0) /* 00000001: Internal low speed oscillator enable */
#define CH32V103_RCC_RSTSCKR_LSIRDY       (1 <<  1) /* 00000002: Internal low speed oscillator ready */
#define CH32V103_RCC_RSTSCKR_RMVF         (1 << 24) /* 01000000: Remove reset flag */
#define CH32V103_RCC_RSTSCKR_PINRSTF      (1 << 26) /* 04000000: PIN reset flag */
#define CH32V103_RCC_RSTSCKR_PORRSTF      (1 << 27) /* 08000000: POR/PDR reset flag */
#define CH32V103_RCC_RSTSCKR_SFTRSTF      (1 << 28) /* 10000000: Software reset flag */
#define CH32V103_RCC_RSTSCKR_IWDGRSTF     (1 << 29) /* 20000000: Independent watchdog reset flag */
#define CH32V103_RCC_RSTSCKR_WWDGRSTF     (1 << 30) /* 40000000: Window watchdog reset flag */
#define CH32V103_RCC_RSTSCKR_LPWRRSTF     (1 << 31) /* 80000000: Low-power reset flag */
#define CH32V103_RCC_AHBRSTR_OFFSET       0x0028
#define CH32V103_RCC_AHBRSTR              (CH32V103_RCC_BASE + CH32V103_RCC_AHBRSTR_OFFSET)
#define CH32V103_RCC_AHBRSTR_USBHDRST     (1 << 12) /* 00001000: USBHD reset */

/* EXTEND - extension configuration */
#define CH32V103_EXTEND_BASE              0x40023800
#define CH32V103_EXTEND_EXTEND_CTR_OFFSET 0x0000
#define CH32V103_EXTEND_EXTEND_CTR        (CH32V103_EXTEND_BASE + CH32V103_EXTEND_EXTEND_CTR_OFFSET)
#define CH32V103_EXTEND_EXTEND_CTR_USBDLS (1 <<  0) /* 00000001: USBD Lowspeed Enable */
#define CH32V103_EXTEND_EXTEND_CTR_USBDPU (1 <<  1) /* 00000002: USBD pullup Enable */
#define CH32V103_EXTEND_EXTEND_CTR_USBHDIO (1 <<  2) /* 00000004: USBHD IO(PB6/PB7) Enable */
#define CH32V103_EXTEND_EXTEND_CTR_USB5VSEL (1 <<  3) /* 00000008: USB 5V Enable */
#define CH32V103_EXTEND_EXTEND_CTR_HSIPRE (1 <<  4) /* 00000010: Whether HSI is divided */
#define CH32V103_EXTEND_EXTEND_CTR_LKUPEN (1 <<  6) /* 00000040: LOCKUP */
#define CH32V103_EXTEND_EXTEND_CTR_LKUPRESET (1 <<  7) /* 00000080: LOCKUP RESET */
#define CH32V103_EXTEND_EXTEND_CTR_ULLDOTRIM (0x3 << 8) /* 00000300: ULLDOTRIM */
#define CH32V103_EXTEND_EXTEND_CTR_ULLDOTRIM_MASK (0x3 << 8)
#define CH32V103_EXTEND_EXTEND_CTR_LDOTRIM (1 << 10) /* 00000400: LDOTRIM */

/* GPIOA - General purpose I/O */
#define CH32V103_GPIOA_BASE               0x40010800
#define CH32V103_GPIOA_CFGLR_OFFSET       0x0000
#define CH32V103_GPIOA_CFGLR              (CH32V103_GPIOA_BASE + CH32V103_GPIOA_CFGLR_OFFSET) /* read-write */
#define CH32V103_GPIOA_CFGLR_MODE0        (0x3 << 0) /* 00000003: Port n.0 mode bits */
#define CH32V103_GPIOA_CFGLR_MODE0_MASK   (0x3 << 0)
#define CH32V103_GPIOA_CFGLR_CNF0         (0x3 << 2) /* 0000000c: Port n.0 configuration bits */
#define CH32V103_GPIOA_CFGLR_CNF0_MASK    (0x3 << 2)
#define CH32V103_GPIOA_CFGLR_MODE1        (0x3 << 4) /* 00000030: Port n.1 mode bits */
#define CH32V103_GPIOA_CFGLR_MODE1_MASK   (0x3 << 4)
#define CH32V103_GPIOA_CFGLR_CNF1         (0x3 << 6) /* 000000c0: Port n.1 configuration bits */
#define CH32V103_GPIOA_CFGLR_CNF1_MASK    (0x3 << 6)
#define CH32V103_GPIOA_CFGLR_MODE2        (0x3 << 8) /* 00000300: Port n.2 mode bits */
#define CH32V103_GPIOA_CFGLR_MODE2_MASK   (0x3 << 8)
#define CH32V103_GPIOA_CFGLR_CNF2         (0x3 << 10) /* 00000c00: Port n.2 configuration bits */
#define CH32V103_GPIOA_CFGLR_CNF2_MASK    (0x3 << 10)
#define CH32V103_GPIOA_CFGLR_MODE3        (0x3 << 12) /* 00003000: Port n.3 mode bits */
#define CH32V103_GPIOA_CFGLR_MODE3_MASK   (0x3 << 12)
#define CH32V103_GPIOA_CFGLR_CNF3         (0x3 << 14) /* 0000c000: Port n.3 configuration bits */
#define CH32V103_GPIOA_CFGLR_CNF3_MASK    (0x3 << 14)
#define CH32V103_GPIOA_CFGLR_MODE4        (0x3 << 16) /* 00030000: Port n.4 mode bits */
#define CH32V103_GPIOA_CFGLR_MODE4_MASK   (0x3 << 16)
#define CH32V103_GPIOA_CFGLR_CNF4         (0x3 << 18) /* 000c0000: Port n.4 configuration bits */
#define CH32V103_GPIOA_CFGLR_CNF4_MASK    (0x3 << 18)
#define CH32V103_GPIOA_CFGLR_MODE5        (0x3 << 20) /* 00300000: Port n.5 mode bits */
#define CH32V103_GPIOA_CFGLR_MODE5_MASK   (0x3 << 20)
#define CH32V103_GPIOA_CFGLR_CNF5         (0x3 << 22) /* 00c00000: Port n.5 configuration bits */
#define CH32V103_GPIOA_CFGLR_CNF5_MASK    (0x3 << 22)
#define CH32V103_GPIOA_CFGLR_MODE6        (0x3 << 24) /* 03000000: Port n.6 mode bits */
#define CH32V103_GPIOA_CFGLR_MODE6_MASK   (0x3 << 24)
#define CH32V103_GPIOA_CFGLR_CNF6         (0x3 << 26) /* 0c000000: Port n.6 configuration bits */
#define CH32V103_GPIOA_CFGLR_CNF6_MASK    (0x3 << 26)
#define CH32V103_GPIOA_CFGLR_MODE7        (0x3 << 28) /* 30000000: Port n.7 mode bits */
#define CH32V103_GPIOA_CFGLR_MODE7_MASK   (0x3 << 28)
#define CH32V103_GPIOA_CFGLR_CNF7         (0x3 << 30) /* c0000000: Port n.7 configuration bits */
#define CH32V103_GPIOA_CFGLR_CNF7_MASK    (0x3 << 30)
#define CH32V103_GPIOA_CFGHR_OFFSET       0x0004
#define CH32V103_GPIOA_CFGHR              (CH32V103_GPIOA_BASE + CH32V103_GPIOA_CFGHR_OFFSET) /* read-write */
#define CH32V103_GPIOA_CFGHR_MODE8        (0x3 << 0) /* 00000003: Port n.8 mode bits */
#define CH32V103_GPIOA_CFGHR_MODE8_MASK   (0x3 << 0)
#define CH32V103_GPIOA_CFGHR_CNF8         (0x3 << 2) /* 0000000c: Port n.8 configuration bits */
#define CH32V103_GPIOA_CFGHR_CNF8_MASK    (0x3 << 2)
#define CH32V103_GPIOA_CFGHR_MODE9        (0x3 << 4) /* 00000030: Port n.9 mode bits */
#define CH32V103_GPIOA_CFGHR_MODE9_MASK   (0x3 << 4)
#define CH32V103_GPIOA_CFGHR_CNF9         (0x3 << 6) /* 000000c0: Port n.9 configuration bits */
#define CH32V103_GPIOA_CFGHR_CNF9_MASK    (0x3 << 6)
#define CH32V103_GPIOA_CFGHR_MODE10       (0x3 << 8) /* 00000300: Port n.10 mode bits */
#define CH32V103_GPIOA_CFGHR_MODE10_MASK  (0x3 << 8)
#define CH32V103_GPIOA_CFGHR_CNF10        (0x3 << 10) /* 00000c00: Port n.10 configuration bits */
#define CH32V103_GPIOA_CFGHR_CNF10_MASK   (0x3 << 10)
#define CH32V103_GPIOA_CFGHR_MODE11       (0x3 << 12) /* 00003000: Port n.11 mode bits */
#define CH32V103_GPIOA_CFGHR_MODE11_MASK  (0x3 << 12)
#define CH32V103_GPIOA_CFGHR_CNF11        (0x3 << 14) /* 0000c000: Port n.11 configuration bits */
#define CH32V103_GPIOA_CFGHR_CNF11_MASK   (0x3 << 14)
#define CH32V103_GPIOA_CFGHR_MODE12       (0x3 << 16) /* 00030000: Port n.12 mode bits */
#define CH32V103_GPIOA_CFGHR_MODE12_MASK  (0x3 << 16)
#define CH32V103_GPIOA_CFGHR_CNF12        (0x3 << 18) /* 000c0000: Port n.12 configuration bits */
#define CH32V103_GPIOA_CFGHR_CNF12_MASK   (0x3 << 18)
#define CH32V103_GPIOA_CFGHR_MODE13       (0x3 << 20) /* 00300000: Port n.13 mode bits */
#define CH32V103_GPIOA_CFGHR_MODE13_MASK  (0x3 << 20)
#define CH32V103_GPIOA_CFGHR_CNF13        (0x3 << 22) /* 00c00000: Port n.13 configuration bits */
#define CH32V103_GPIOA_CFGHR_CNF13_MASK   (0x3 << 22)
#define CH32V103_GPIOA_CFGHR_MODE14       (0x3 << 24) /* 03000000: Port n.14 mode bits */
#define CH32V103_GPIOA_CFGHR_MODE14_MASK  (0x3 << 24)
#define CH32V103_GPIOA_CFGHR_CNF14        (0x3 << 26) /* 0c000000: Port n.14 configuration bits */
#define CH32V103_GPIOA_CFGHR_CNF14_MASK   (0x3 << 26)
#define CH32V103_GPIOA_CFGHR_MODE15       (0x3 << 28) /* 30000000: Port n.15 mode bits */
#define CH32V103_GPIOA_CFGHR_MODE15_MASK  (0x3 << 28)
#define CH32V103_GPIOA_CFGHR_CNF15        (0x3 << 30) /* c0000000: Port n.15 configuration bits */
#define CH32V103_GPIOA_CFGHR_CNF15_MASK   (0x3 << 30)
#define CH32V103_GPIOA_INDR_OFFSET        0x0008
#define CH32V103_GPIOA_INDR               (CH32V103_GPIOA_BASE + CH32V103_GPIOA_INDR_OFFSET) /* read-only */
#define CH32V103_GPIOA_INDR_IDR0          (1 <<  0) /* 00000001: Port input data */
#define CH32V103_GPIOA_INDR_IDR1          (1 <<  1) /* 00000002: Port input data */
#define CH32V103_GPIOA_INDR_IDR2          (1 <<  2) /* 00000004: Port input data */
#define CH32V103_GPIOA_INDR_IDR3          (1 <<  3) /* 00000008: Port input data */
#define CH32V103_GPIOA_INDR_IDR4          (1 <<  4) /* 00000010: Port input data */
#define CH32V103_GPIOA_INDR_IDR5          (1 <<  5) /* 00000020: Port input data */
#define CH32V103_GPIOA_INDR_IDR6          (1 <<  6) /* 00000040: Port input data */
#define CH32V103_GPIOA_INDR_IDR7          (1 <<  7) /* 00000080: Port input data */
#define CH32V103_GPIOA_INDR_IDR8          (1 <<  8) /* 00000100: Port input data */
#define CH32V103_GPIOA_INDR_IDR9          (1 <<  9) /* 00000200: Port input data */
#define CH32V103_GPIOA_INDR_IDR10         (1 << 10) /* 00000400: Port input data */
#define CH32V103_GPIOA_INDR_IDR11         (1 << 11) /* 00000800: Port input data */
#define CH32V103_GPIOA_INDR_IDR12         (1 << 12) /* 00001000: Port input data */
#define CH32V103_GPIOA_INDR_IDR13         (1 << 13) /* 00002000: Port input data */
#define CH32V103_GPIOA_INDR_IDR14         (1 << 14) /* 00004000: Port input data */
#define CH32V103_GPIOA_INDR_IDR15         (1 << 15) /* 00008000: Port input data */
#define CH32V103_GPIOA_OUTDR_OFFSET       0x000c
#define CH32V103_GPIOA_OUTDR              (CH32V103_GPIOA_BASE + CH32V103_GPIOA_OUTDR_OFFSET) /* read-write */
#define CH32V103_GPIOA_OUTDR_ODR0         (1 <<  0) /* 00000001: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR1         (1 <<  1) /* 00000002: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR2         (1 <<  2) /* 00000004: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR3         (1 <<  3) /* 00000008: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR4         (1 <<  4) /* 00000010: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR5         (1 <<  5) /* 00000020: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR6         (1 <<  6) /* 00000040: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR7         (1 <<  7) /* 00000080: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR8         (1 <<  8) /* 00000100: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR9         (1 <<  9) /* 00000200: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR10        (1 << 10) /* 00000400: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR11        (1 << 11) /* 00000800: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR12        (1 << 12) /* 00001000: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR13        (1 << 13) /* 00002000: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR14        (1 << 14) /* 00004000: Port output data */
#define CH32V103_GPIOA_OUTDR_ODR15        (1 << 15) /* 00008000: Port output data */
#define CH32V103_GPIOA_BSHR_OFFSET        0x0010
#define CH32V103_GPIOA_BSHR               (CH32V103_GPIOA_BASE + CH32V103_GPIOA_BSHR_OFFSET) /* write-only */
#define CH32V103_GPIOA_BSHR_BS0           (1 <<  0) /* 00000001: Set bit 0 */
#define CH32V103_GPIOA_BSHR_BS1           (1 <<  1) /* 00000002: Set bit 1 */
#define CH32V103_GPIOA_BSHR_BS2           (1 <<  2) /* 00000004: Set bit 1 */
#define CH32V103_GPIOA_BSHR_BS3           (1 <<  3) /* 00000008: Set bit 3 */
#define CH32V103_GPIOA_BSHR_BS4           (1 <<  4) /* 00000010: Set bit 4 */
#define CH32V103_GPIOA_BSHR_BS5           (1 <<  5) /* 00000020: Set bit 5 */
#define CH32V103_GPIOA_BSHR_BS6           (1 <<  6) /* 00000040: Set bit 6 */
#define CH32V103_GPIOA_BSHR_BS7           (1 <<  7) /* 00000080: Set bit 7 */
#define CH32V103_GPIOA_BSHR_BS8           (1 <<  8) /* 00000100: Set bit 8 */
#define CH32V103_GPIOA_BSHR_BS9           (1 <<  9) /* 00000200: Set bit 9 */
#define CH32V103_GPIOA_BSHR_BS10          (1 << 10) /* 00000400: Set bit 10 */
#define CH32V103_GPIOA_BSHR_BS11          (1 << 11) /* 00000800: Set bit 11 */
#define CH32V103_GPIOA_BSHR_BS12          (1 << 12) /* 00001000: Set bit 12 */
#define CH32V103_GPIOA_BSHR_BS13          (1 << 13) /* 00002000: Set bit 13 */
#define CH32V103_GPIOA_BSHR_BS14          (1 << 14) /* 00004000: Set bit 14 */
#define CH32V103_GPIOA_BSHR_BS15          (1 << 15) /* 00008000: Set bit 15 */
#define CH32V103_GPIOA_BSHR_BR0           (1 << 16) /* 00010000: Reset bit 0 */
#define CH32V103_GPIOA_BSHR_BR1           (1 << 17) /* 00020000: Reset bit 1 */
#define CH32V103_GPIOA_BSHR_BR2           (1 << 18) /* 00040000: Reset bit 2 */
#define CH32V103_GPIOA_BSHR_BR3           (1 << 19) /* 00080000: Reset bit 3 */
#define CH32V103_GPIOA_BSHR_BR4           (1 << 20) /* 00100000: Reset bit 4 */
#define CH32V103_GPIOA_BSHR_BR5           (1 << 21) /* 00200000: Reset bit 5 */
#define CH32V103_GPIOA_BSHR_BR6           (1 << 22) /* 00400000: Reset bit 6 */
#define CH32V103_GPIOA_BSHR_BR7           (1 << 23) /* 00800000: Reset bit 7 */
#define CH32V103_GPIOA_BSHR_BR8           (1 << 24) /* 01000000: Reset bit 8 */
#define CH32V103_GPIOA_BSHR_BR9           (1 << 25) /* 02000000: Reset bit 9 */
#define CH32V103_GPIOA_BSHR_BR10          (1 << 26) /* 04000000: Reset bit 10 */
#define CH32V103_GPIOA_BSHR_BR11          (1 << 27) /* 08000000: Reset bit 11 */
#define CH32V103_GPIOA_BSHR_BR12          (1 << 28) /* 10000000: Reset bit 12 */
#define CH32V103_GPIOA_BSHR_BR13          (1 << 29) /* 20000000: Reset bit 13 */
#define CH32V103_GPIOA_BSHR_BR14          (1 << 30) /* 40000000: Reset bit 14 */
#define CH32V103_GPIOA_BSHR_BR15          (1 << 31) /* 80000000: Reset bit 15 */
#define CH32V103_GPIOA_BCR_OFFSET         0x0014
#define CH32V103_GPIOA_BCR                (CH32V103_GPIOA_BASE + CH32V103_GPIOA_BCR_OFFSET) /* write-only */
#define CH32V103_GPIOA_BCR_BR0            (1 <<  0) /* 00000001: Reset bit 0 */
#define CH32V103_GPIOA_BCR_BR1            (1 <<  1) /* 00000002: Reset bit 1 */
#define CH32V103_GPIOA_BCR_BR2            (1 <<  2) /* 00000004: Reset bit 1 */
#define CH32V103_GPIOA_BCR_BR3            (1 <<  3) /* 00000008: Reset bit 3 */
#define CH32V103_GPIOA_BCR_BR4            (1 <<  4) /* 00000010: Reset bit 4 */
#define CH32V103_GPIOA_BCR_BR5            (1 <<  5) /* 00000020: Reset bit 5 */
#define CH32V103_GPIOA_BCR_BR6            (1 <<  6) /* 00000040: Reset bit 6 */
#define CH32V103_GPIOA_BCR_BR7            (1 <<  7) /* 00000080: Reset bit 7 */
#define CH32V103_GPIOA_BCR_BR8            (1 <<  8) /* 00000100: Reset bit 8 */
#define CH32V103_GPIOA_BCR_BR9            (1 <<  9) /* 00000200: Reset bit 9 */
#define CH32V103_GPIOA_BCR_BR10           (1 << 10) /* 00000400: Reset bit 10 */
#define CH32V103_GPIOA_BCR_BR11           (1 << 11) /* 00000800: Reset bit 11 */
#define CH32V103_GPIOA_BCR_BR12           (1 << 12) /* 00001000: Reset bit 12 */
#define CH32V103_GPIOA_BCR_BR13           (1 << 13) /* 00002000: Reset bit 13 */
#define CH32V103_GPIOA_BCR_BR14           (1 << 14) /* 00004000: Reset bit 14 */
#define CH32V103_GPIOA_BCR_BR15           (1 << 15) /* 00008000: Reset bit 15 */
#define CH32V103_GPIOA_LCKR_OFFSET        0x0018
#define CH32V103_GPIOA_LCKR               (CH32V103_GPIOA_BASE + CH32V103_GPIOA_LCKR_OFFSET) /* read-write */
#define CH32V103_GPIOA_LCKR_LCK0          (1 <<  0) /* 00000001: Port A Lock bit 0 */
#define CH32V103_GPIOA_LCKR_LCK1          (1 <<  1) /* 00000002: Port A Lock bit 1 */
#define CH32V103_GPIOA_LCKR_LCK2          (1 <<  2) /* 00000004: Port A Lock bit 2 */
#define CH32V103_GPIOA_LCKR_LCK3          (1 <<  3) /* 00000008: Port A Lock bit 3 */
#define CH32V103_GPIOA_LCKR_LCK4          (1 <<  4) /* 00000010: Port A Lock bit 4 */
#define CH32V103_GPIOA_LCKR_LCK5          (1 <<  5) /* 00000020: Port A Lock bit 5 */
#define CH32V103_GPIOA_LCKR_LCK6          (1 <<  6) /* 00000040: Port A Lock bit 6 */
#define CH32V103_GPIOA_LCKR_LCK7          (1 <<  7) /* 00000080: Port A Lock bit 7 */
#define CH32V103_GPIOA_LCKR_LCK8          (1 <<  8) /* 00000100: Port A Lock bit 8 */
#define CH32V103_GPIOA_LCKR_LCK9          (1 <<  9) /* 00000200: Port A Lock bit 9 */
#define CH32V103_GPIOA_LCKR_LCK10         (1 << 10) /* 00000400: Port A Lock bit 10 */
#define CH32V103_GPIOA_LCKR_LCK11         (1 << 11) /* 00000800: Port A Lock bit 11 */
#define CH32V103_GPIOA_LCKR_LCK12         (1 << 12) /* 00001000: Port A Lock bit 12 */
#define CH32V103_GPIOA_LCKR_LCK13         (1 << 13) /* 00002000: Port A Lock bit 13 */
#define CH32V103_GPIOA_LCKR_LCK14         (1 << 14) /* 00004000: Port A Lock bit 14 */
#define CH32V103_GPIOA_LCKR_LCK15         (1 << 15) /* 00008000: Port A Lock bit 15 */
#define CH32V103_GPIOA_LCKR_LCKK          (1 << 16) /* 00010000: Lock key */

/* AFIO - Alternate function I/O */
#define CH32V103_AFIO_BASE                0x40010000
#define CH32V103_AFIO_ECR_OFFSET          0x0000
#define CH32V103_AFIO_ECR                 (CH32V103_AFIO_BASE + CH32V103_AFIO_ECR_OFFSET) /* read-write */
#define CH32V103_AFIO_ECR_PIN             (0xf << 0) /* 0000000f: Pin selection */
#define CH32V103_AFIO_ECR_PIN_MASK        (0xf << 0)
#define CH32V103_AFIO_ECR_PORT            (0x7 << 4) /* 00000070: Port selection */
#define CH32V103_AFIO_ECR_PORT_MASK       (0x7 << 4)
#define CH32V103_AFIO_ECR_EVOE            (1 <<  7) /* 00000080: Event Output Enable */
#define CH32V103_AFIO_PCFR1_OFFSET        0x0004
#define CH32V103_AFIO_PCFR1               (CH32V103_AFIO_BASE + CH32V103_AFIO_PCFR1_OFFSET)
#define CH32V103_AFIO_PCFR1_SPI1_REMAP    (1 <<  0) /* 00000001: SPI1 remapping */
#define CH32V103_AFIO_PCFR1_I2C1_REMAP    (1 <<  1) /* 00000002: I2C1 remapping */
#define CH32V103_AFIO_PCFR1_USART1_REMAP  (1 <<  2) /* 00000004: USART1 remapping */
#define CH32V103_AFIO_PCFR1_USART2_REMAP  (1 <<  3) /* 00000008: USART2 remapping */
#define CH32V103_AFIO_PCFR1_USART3_REMAP  (0x3 << 4) /* 00000030: USART3 remapping */
#define CH32V103_AFIO_PCFR1_USART3_REMAP_MASK (0x3 << 4)
#define CH32V103_AFIO_PCFR1_TIM1_REMAP    (0x3 << 6) /* 000000c0: TIM1 remapping */
#define CH32V103_AFIO_PCFR1_TIM1_REMAP_MASK (0x3 << 6)
#define CH32V103_AFIO_PCFR1_TIM2_REMAP    (0x3 << 8) /* 00000300: TIM2 remapping */
#define CH32V103_AFIO_PCFR1_TIM2_REMAP_MASK (0x3 << 8)
#define CH32V103_AFIO_PCFR1_TIM3_REMAP    (0x3 << 10) /* 00000c00: TIM3 remapping */
#define CH32V103_AFIO_PCFR1_TIM3_REMAP_MASK (0x3 << 10)
#define CH32V103_AFIO_PCFR1_TIM4_REMAP    (1 << 12) /* 00001000: TIM4 remapping */
#define CH32V103_AFIO_PCFR1_CAN_REMAP     (0x3 << 13) /* 00006000: CAN1 remapping */
#define CH32V103_AFIO_PCFR1_CAN_REMAP_MASK (0x3 << 13)
#define CH32V103_AFIO_PCFR1_PD01_REMAP    (1 << 15) /* 00008000: Port D0/Port D1 mapping on OSCIN/OSCOUT */
#define CH32V103_AFIO_PCFR1_TIM5CH4_IREMAP (1 << 16) /* 00010000: Set and cleared by software */
#define CH32V103_AFIO_PCFR1_ADC1_ETRGINJ_REMAP (1 << 17) /* 00020000: ADC 1 External trigger injected conversion remapping */
#define CH32V103_AFIO_PCFR1_ADC1_ETRGREG_REMAP (1 << 18) /* 00040000: ADC 1 external trigger regular conversion remapping */
#define CH32V103_AFIO_PCFR1_ADC2_ETRGINJ_REMAP (1 << 19) /* 00080000: ADC 2 external trigger injected conversion remapping */
#define CH32V103_AFIO_PCFR1_ADC2_ETRGREG_REMAP (1 << 20) /* 00100000: ADC 2 external trigger regular conversion remapping */
#define CH32V103_AFIO_PCFR1_SWJ_CFG       (0x7 << 24) /* 07000000: Serial wire JTAG configuration */
#define CH32V103_AFIO_PCFR1_SWJ_CFG_MASK  (0x7 << 24)
#define CH32V103_AFIO_EXTICR1_OFFSET      0x0008
#define CH32V103_AFIO_EXTICR1             (CH32V103_AFIO_BASE + CH32V103_AFIO_EXTICR1_OFFSET) /* read-write */
#define CH32V103_AFIO_EXTICR1_EXTI0       (0xf << 0) /* 0000000f: EXTI0 configuration */
#define CH32V103_AFIO_EXTICR1_EXTI0_MASK  (0xf << 0)
#define CH32V103_AFIO_EXTICR1_EXTI1       (0xf << 4) /* 000000f0: EXTI1 configuration */
#define CH32V103_AFIO_EXTICR1_EXTI1_MASK  (0xf << 4)
#define CH32V103_AFIO_EXTICR1_EXTI2       (0xf << 8) /* 00000f00: EXTI2 configuration */
#define CH32V103_AFIO_EXTICR1_EXTI2_MASK  (0xf << 8)
#define CH32V103_AFIO_EXTICR1_EXTI3       (0xf << 12) /* 0000f000: EXTI3 configuration */
#define CH32V103_AFIO_EXTICR1_EXTI3_MASK  (0xf << 12)
#define CH32V103_AFIO_EXTICR2_OFFSET      0x000c
#define CH32V103_AFIO_EXTICR2             (CH32V103_AFIO_BASE + CH32V103_AFIO_EXTICR2_OFFSET) /* read-write */
#define CH32V103_AFIO_EXTICR2_EXTI4       (0xf << 0) /* 0000000f: EXTI4 configuration */
#define CH32V103_AFIO_EXTICR2_EXTI4_MASK  (0xf << 0)
#define CH32V103_AFIO_EXTICR2_EXTI5       (0xf << 4) /* 000000f0: EXTI5 configuration */
#define CH32V103_AFIO_EXTICR2_EXTI5_MASK  (0xf << 4)
#define CH32V103_AFIO_EXTICR2_EXTI6       (0xf << 8) /* 00000f00: EXTI6 configuration */
#define CH32V103_AFIO_EXTICR2_EXTI6_MASK  (0xf << 8)
#define CH32V103_AFIO_EXTICR2_EXTI7       (0xf << 12) /* 0000f000: EXTI7 configuration */
#define CH32V103_AFIO_EXTICR2_EXTI7_MASK  (0xf << 12)
#define CH32V103_AFIO_EXTICR3_OFFSET      0x0010
#define CH32V103_AFIO_EXTICR3             (CH32V103_AFIO_BASE + CH32V103_AFIO_EXTICR3_OFFSET) /* read-write */
#define CH32V103_AFIO_EXTICR3_EXTI8       (0xf << 0) /* 0000000f: EXTI8 configuration */
#define CH32V103_AFIO_EXTICR3_EXTI8_MASK  (0xf << 0)
#define CH32V103_AFIO_EXTICR3_EXTI9       (0xf << 4) /* 000000f0: EXTI9 configuration */
#define CH32V103_AFIO_EXTICR3_EXTI9_MASK  (0xf << 4)
#define CH32V103_AFIO_EXTICR3_EXTI10      (0xf << 8) /* 00000f00: EXTI10 configuration */
#define CH32V103_AFIO_EXTICR3_EXTI10_MASK (0xf << 8)
#define CH32V103_AFIO_EXTICR3_EXTI11      (0xf << 12) /* 0000f000: EXTI11 configuration */
#define CH32V103_AFIO_EXTICR3_EXTI11_MASK (0xf << 12)
#define CH32V103_AFIO_EXTICR4_OFFSET      0x0014
#define CH32V103_AFIO_EXTICR4             (CH32V103_AFIO_BASE + CH32V103_AFIO_EXTICR4_OFFSET) /* read-write */
#define CH32V103_AFIO_EXTICR4_EXTI12      (0xf << 0) /* 0000000f: EXTI12 configuration */
#define CH32V103_AFIO_EXTICR4_EXTI12_MASK (0xf << 0)
#define CH32V103_AFIO_EXTICR4_EXTI13      (0xf << 4) /* 000000f0: EXTI13 configuration */
#define CH32V103_AFIO_EXTICR4_EXTI13_MASK (0xf << 4)
#define CH32V103_AFIO_EXTICR4_EXTI14      (0xf << 8) /* 00000f00: EXTI14 configuration */
#define CH32V103_AFIO_EXTICR4_EXTI14_MASK (0xf << 8)
#define CH32V103_AFIO_EXTICR4_EXTI15      (0xf << 12) /* 0000f000: EXTI15 configuration */
#define CH32V103_AFIO_EXTICR4_EXTI15_MASK (0xf << 12)
#define CH32V103_AFIO_PCFR2_OFFSET        0x001c
#define CH32V103_AFIO_PCFR2               (CH32V103_AFIO_BASE + CH32V103_AFIO_PCFR2_OFFSET) /* read-write */
#define CH32V103_AFIO_PCFR2_TIM9_REMAP    (1 <<  5) /* 00000020: TIM9 remapping */
#define CH32V103_AFIO_PCFR2_TIM10_REMAP   (1 <<  6) /* 00000040: TIM10 remapping */
#define CH32V103_AFIO_PCFR2_TIM11_REMAP   (1 <<  7) /* 00000080: TIM11 remapping */
#define CH32V103_AFIO_PCFR2_TIM13_REMAP   (1 <<  8) /* 00000100: TIM13 remapping */
#define CH32V103_AFIO_PCFR2_TIM14_REMAP   (1 <<  9) /* 00000200: TIM14 remapping */
#define CH32V103_AFIO_PCFR2_FSMC_NADV     (1 << 10) /* 00000400: NADV connect/disconnect */

/* EXTI - EXTI */
#define CH32V103_EXTI_BASE                0x40010400
#define CH32V103_EXTI_INTENR_OFFSET       0x0000
#define CH32V103_EXTI_INTENR              (CH32V103_EXTI_BASE + CH32V103_EXTI_INTENR_OFFSET) /* read-write */
#define CH32V103_EXTI_INTENR_MR0          (1 <<  0) /* 00000001: Interrupt Mask on line 0 */
#define CH32V103_EXTI_INTENR_MR1          (1 <<  1) /* 00000002: Interrupt Mask on line 1 */
#define CH32V103_EXTI_INTENR_MR2          (1 <<  2) /* 00000004: Interrupt Mask on line 2 */
#define CH32V103_EXTI_INTENR_MR3          (1 <<  3) /* 00000008: Interrupt Mask on line 3 */
#define CH32V103_EXTI_INTENR_MR4          (1 <<  4) /* 00000010: Interrupt Mask on line 4 */
#define CH32V103_EXTI_INTENR_MR5          (1 <<  5) /* 00000020: Interrupt Mask on line 5 */
#define CH32V103_EXTI_INTENR_MR6          (1 <<  6) /* 00000040: Interrupt Mask on line 6 */
#define CH32V103_EXTI_INTENR_MR7          (1 <<  7) /* 00000080: Interrupt Mask on line 7 */
#define CH32V103_EXTI_INTENR_MR8          (1 <<  8) /* 00000100: Interrupt Mask on line 8 */
#define CH32V103_EXTI_INTENR_MR9          (1 <<  9) /* 00000200: Interrupt Mask on line 9 */
#define CH32V103_EXTI_INTENR_MR10         (1 << 10) /* 00000400: Interrupt Mask on line 10 */
#define CH32V103_EXTI_INTENR_MR11         (1 << 11) /* 00000800: Interrupt Mask on line 11 */
#define CH32V103_EXTI_INTENR_MR12         (1 << 12) /* 00001000: Interrupt Mask on line 12 */
#define CH32V103_EXTI_INTENR_MR13         (1 << 13) /* 00002000: Interrupt Mask on line 13 */
#define CH32V103_EXTI_INTENR_MR14         (1 << 14) /* 00004000: Interrupt Mask on line 14 */
#define CH32V103_EXTI_INTENR_MR15         (1 << 15) /* 00008000: Interrupt Mask on line 15 */
#define CH32V103_EXTI_INTENR_MR16         (1 << 16) /* 00010000: Interrupt Mask on line 16 */
#define CH32V103_EXTI_INTENR_MR17         (1 << 17) /* 00020000: Interrupt Mask on line 17 */
#define CH32V103_EXTI_INTENR_MR18         (1 << 18) /* 00040000: Interrupt Mask on line 18 */
#define CH32V103_EXTI_EVENR_OFFSET        0x0004
#define CH32V103_EXTI_EVENR               (CH32V103_EXTI_BASE + CH32V103_EXTI_EVENR_OFFSET) /* read-write */
#define CH32V103_EXTI_EVENR_MR0           (1 <<  0) /* 00000001: Event Mask on line 0 */
#define CH32V103_EXTI_EVENR_MR1           (1 <<  1) /* 00000002: Event Mask on line 1 */
#define CH32V103_EXTI_EVENR_MR2           (1 <<  2) /* 00000004: Event Mask on line 2 */
#define CH32V103_EXTI_EVENR_MR3           (1 <<  3) /* 00000008: Event Mask on line 3 */
#define CH32V103_EXTI_EVENR_MR4           (1 <<  4) /* 00000010: Event Mask on line 4 */
#define CH32V103_EXTI_EVENR_MR5           (1 <<  5) /* 00000020: Event Mask on line 5 */
#define CH32V103_EXTI_EVENR_MR6           (1 <<  6) /* 00000040: Event Mask on line 6 */
#define CH32V103_EXTI_EVENR_MR7           (1 <<  7) /* 00000080: Event Mask on line 7 */
#define CH32V103_EXTI_EVENR_MR8           (1 <<  8) /* 00000100: Event Mask on line 8 */
#define CH32V103_EXTI_EVENR_MR9           (1 <<  9) /* 00000200: Event Mask on line 9 */
#define CH32V103_EXTI_EVENR_MR10          (1 << 10) /* 00000400: Event Mask on line 10 */
#define CH32V103_EXTI_EVENR_MR11          (1 << 11) /* 00000800: Event Mask on line 11 */
#define CH32V103_EXTI_EVENR_MR12          (1 << 12) /* 00001000: Event Mask on line 12 */
#define CH32V103_EXTI_EVENR_MR13          (1 << 13) /* 00002000: Event Mask on line 13 */
#define CH32V103_EXTI_EVENR_MR14          (1 << 14) /* 00004000: Event Mask on line 14 */
#define CH32V103_EXTI_EVENR_MR15          (1 << 15) /* 00008000: Event Mask on line 15 */
#define CH32V103_EXTI_EVENR_MR16          (1 << 16) /* 00010000: Event Mask on line 16 */
#define CH32V103_EXTI_EVENR_MR17          (1 << 17) /* 00020000: Event Mask on line 17 */
#define CH32V103_EXTI_EVENR_MR18          (1 << 18) /* 00040000: Event Mask on line 18 */
#define CH32V103_EXTI_RTENR_OFFSET        0x0008
#define CH32V103_EXTI_RTENR               (CH32V103_EXTI_BASE + CH32V103_EXTI_RTENR_OFFSET) /* read-write */
#define CH32V103_EXTI_RTENR_TR0           (1 <<  0) /* 00000001: Rising trigger event configuration of line 0 */
#define CH32V103_EXTI_RTENR_TR1           (1 <<  1) /* 00000002: Rising trigger event configuration of line 1 */
#define CH32V103_EXTI_RTENR_TR2           (1 <<  2) /* 00000004: Rising trigger event configuration of line 2 */
#define CH32V103_EXTI_RTENR_TR3           (1 <<  3) /* 00000008: Rising trigger event configuration of line 3 */
#define CH32V103_EXTI_RTENR_TR4           (1 <<  4) /* 00000010: Rising trigger event configuration of line 4 */
#define CH32V103_EXTI_RTENR_TR5           (1 <<  5) /* 00000020: Rising trigger event configuration of line 5 */
#define CH32V103_EXTI_RTENR_TR6           (1 <<  6) /* 00000040: Rising trigger event configuration of line 6 */
#define CH32V103_EXTI_RTENR_TR7           (1 <<  7) /* 00000080: Rising trigger event configuration of line 7 */
#define CH32V103_EXTI_RTENR_TR8           (1 <<  8) /* 00000100: Rising trigger event configuration of line 8 */
#define CH32V103_EXTI_RTENR_TR9           (1 <<  9) /* 00000200: Rising trigger event configuration of line 9 */
#define CH32V103_EXTI_RTENR_TR10          (1 << 10) /* 00000400: Rising trigger event configuration of line 10 */
#define CH32V103_EXTI_RTENR_TR11          (1 << 11) /* 00000800: Rising trigger event configuration of line 11 */
#define CH32V103_EXTI_RTENR_TR12          (1 << 12) /* 00001000: Rising trigger event configuration of line 12 */
#define CH32V103_EXTI_RTENR_TR13          (1 << 13) /* 00002000: Rising trigger event configuration of line 13 */
#define CH32V103_EXTI_RTENR_TR14          (1 << 14) /* 00004000: Rising trigger event configuration of line 14 */
#define CH32V103_EXTI_RTENR_TR15          (1 << 15) /* 00008000: Rising trigger event configuration of line 15 */
#define CH32V103_EXTI_RTENR_TR16          (1 << 16) /* 00010000: Rising trigger event configuration of line 16 */
#define CH32V103_EXTI_RTENR_TR17          (1 << 17) /* 00020000: Rising trigger event configuration of line 17 */
#define CH32V103_EXTI_RTENR_TR18          (1 << 18) /* 00040000: Rising trigger event configuration of line 18 */
#define CH32V103_EXTI_FTENR_OFFSET        0x000c
#define CH32V103_EXTI_FTENR               (CH32V103_EXTI_BASE + CH32V103_EXTI_FTENR_OFFSET) /* read-write */
#define CH32V103_EXTI_FTENR_TR0           (1 <<  0) /* 00000001: Falling trigger event configuration of line 0 */
#define CH32V103_EXTI_FTENR_TR1           (1 <<  1) /* 00000002: Falling trigger event configuration of line 1 */
#define CH32V103_EXTI_FTENR_TR2           (1 <<  2) /* 00000004: Falling trigger event configuration of line 2 */
#define CH32V103_EXTI_FTENR_TR3           (1 <<  3) /* 00000008: Falling trigger event configuration of line 3 */
#define CH32V103_EXTI_FTENR_TR4           (1 <<  4) /* 00000010: Falling trigger event configuration of line 4 */
#define CH32V103_EXTI_FTENR_TR5           (1 <<  5) /* 00000020: Falling trigger event configuration of line 5 */
#define CH32V103_EXTI_FTENR_TR6           (1 <<  6) /* 00000040: Falling trigger event configuration of line 6 */
#define CH32V103_EXTI_FTENR_TR7           (1 <<  7) /* 00000080: Falling trigger event configuration of line 7 */
#define CH32V103_EXTI_FTENR_TR8           (1 <<  8) /* 00000100: Falling trigger event configuration of line 8 */
#define CH32V103_EXTI_FTENR_TR9           (1 <<  9) /* 00000200: Falling trigger event configuration of line 9 */
#define CH32V103_EXTI_FTENR_TR10          (1 << 10) /* 00000400: Falling trigger event configuration of line 10 */
#define CH32V103_EXTI_FTENR_TR11          (1 << 11) /* 00000800: Falling trigger event configuration of line 11 */
#define CH32V103_EXTI_FTENR_TR12          (1 << 12) /* 00001000: Falling trigger event configuration of line 12 */
#define CH32V103_EXTI_FTENR_TR13          (1 << 13) /* 00002000: Falling trigger event configuration of line 13 */
#define CH32V103_EXTI_FTENR_TR14          (1 << 14) /* 00004000: Falling trigger event configuration of line 14 */
#define CH32V103_EXTI_FTENR_TR15          (1 << 15) /* 00008000: Falling trigger event configuration of line 15 */
#define CH32V103_EXTI_FTENR_TR16          (1 << 16) /* 00010000: Falling trigger event configuration of line 16 */
#define CH32V103_EXTI_FTENR_TR17          (1 << 17) /* 00020000: Falling trigger event configuration of line 17 */
#define CH32V103_EXTI_FTENR_TR18          (1 << 18) /* 00040000: Falling trigger event configuration of line 18 */
#define CH32V103_EXTI_SWIEVR_OFFSET       0x0010
#define CH32V103_EXTI_SWIEVR              (CH32V103_EXTI_BASE + CH32V103_EXTI_SWIEVR_OFFSET) /* read-write */
#define CH32V103_EXTI_SWIEVR_SWIER0       (1 <<  0) /* 00000001: Software Interrupt on line 0 */
#define CH32V103_EXTI_SWIEVR_SWIER1       (1 <<  1) /* 00000002: Software Interrupt on line 1 */
#define CH32V103_EXTI_SWIEVR_SWIER2       (1 <<  2) /* 00000004: Software Interrupt on line 2 */
#define CH32V103_EXTI_SWIEVR_SWIER3       (1 <<  3) /* 00000008: Software Interrupt on line 3 */
#define CH32V103_EXTI_SWIEVR_SWIER4       (1 <<  4) /* 00000010: Software Interrupt on line 4 */
#define CH32V103_EXTI_SWIEVR_SWIER5       (1 <<  5) /* 00000020: Software Interrupt on line 5 */
#define CH32V103_EXTI_SWIEVR_SWIER6       (1 <<  6) /* 00000040: Software Interrupt on line 6 */
#define CH32V103_EXTI_SWIEVR_SWIER7       (1 <<  7) /* 00000080: Software Interrupt on line 7 */
#define CH32V103_EXTI_SWIEVR_SWIER8       (1 <<  8) /* 00000100: Software Interrupt on line 8 */
#define CH32V103_EXTI_SWIEVR_SWIER9       (1 <<  9) /* 00000200: Software Interrupt on line 9 */
#define CH32V103_EXTI_SWIEVR_SWIER10      (1 << 10) /* 00000400: Software Interrupt on line 10 */
#define CH32V103_EXTI_SWIEVR_SWIER11      (1 << 11) /* 00000800: Software Interrupt on line 11 */
#define CH32V103_EXTI_SWIEVR_SWIER12      (1 << 12) /* 00001000: Software Interrupt on line 12 */
#define CH32V103_EXTI_SWIEVR_SWIER13      (1 << 13) /* 00002000: Software Interrupt on line 13 */
#define CH32V103_EXTI_SWIEVR_SWIER14      (1 << 14) /* 00004000: Software Interrupt on line 14 */
#define CH32V103_EXTI_SWIEVR_SWIER15      (1 << 15) /* 00008000: Software Interrupt on line 15 */
#define CH32V103_EXTI_SWIEVR_SWIER16      (1 << 16) /* 00010000: Software Interrupt on line 16 */
#define CH32V103_EXTI_SWIEVR_SWIER17      (1 << 17) /* 00020000: Software Interrupt on line 17 */
#define CH32V103_EXTI_SWIEVR_SWIER18      (1 << 18) /* 00040000: Software Interrupt on line 18 */
#define CH32V103_EXTI_INTFR_OFFSET        0x0014
#define CH32V103_EXTI_INTFR               (CH32V103_EXTI_BASE + CH32V103_EXTI_INTFR_OFFSET) /* read-write */
#define CH32V103_EXTI_INTFR_PR0           (1 <<  0) /* 00000001: Pending bit 0 */
#define CH32V103_EXTI_INTFR_PR1           (1 <<  1) /* 00000002: Pending bit 1 */
#define CH32V103_EXTI_INTFR_PR2           (1 <<  2) /* 00000004: Pending bit 2 */
#define CH32V103_EXTI_INTFR_PR3           (1 <<  3) /* 00000008: Pending bit 3 */
#define CH32V103_EXTI_INTFR_PR4           (1 <<  4) /* 00000010: Pending bit 4 */
#define CH32V103_EXTI_INTFR_PR5           (1 <<  5) /* 00000020: Pending bit 5 */
#define CH32V103_EXTI_INTFR_PR6           (1 <<  6) /* 00000040: Pending bit 6 */
#define CH32V103_EXTI_INTFR_PR7           (1 <<  7) /* 00000080: Pending bit 7 */
#define CH32V103_EXTI_INTFR_PR8           (1 <<  8) /* 00000100: Pending bit 8 */
#define CH32V103_EXTI_INTFR_PR9           (1 <<  9) /* 00000200: Pending bit 9 */
#define CH32V103_EXTI_INTFR_PR10          (1 << 10) /* 00000400: Pending bit 10 */
#define CH32V103_EXTI_INTFR_PR11          (1 << 11) /* 00000800: Pending bit 11 */
#define CH32V103_EXTI_INTFR_PR12          (1 << 12) /* 00001000: Pending bit 12 */
#define CH32V103_EXTI_INTFR_PR13          (1 << 13) /* 00002000: Pending bit 13 */
#define CH32V103_EXTI_INTFR_PR14          (1 << 14) /* 00004000: Pending bit 14 */
#define CH32V103_EXTI_INTFR_PR15          (1 << 15) /* 00008000: Pending bit 15 */
#define CH32V103_EXTI_INTFR_PR16          (1 << 16) /* 00010000: Pending bit 16 */
#define CH32V103_EXTI_INTFR_PR17          (1 << 17) /* 00020000: Pending bit 17 */
#define CH32V103_EXTI_INTFR_PR18          (1 << 18) /* 00040000: Pending bit 18 */

/* DMA - DMA controller */
#define CH32V103_DMA_BASE                 0x40020000
#define CH32V103_DMA_INTFR_OFFSET         0x0000
#define CH32V103_DMA_INTFR                (CH32V103_DMA_BASE + CH32V103_DMA_INTFR_OFFSET) /* read-only */
#define CH32V103_DMA_INTFR_GIF1           (1 <<  0) /* 00000001: Channel 1 Global interrupt flag */
#define CH32V103_DMA_INTFR_TCIF1          (1 <<  1) /* 00000002: Channel 1 Transfer Complete flag */
#define CH32V103_DMA_INTFR_HTIF1          (1 <<  2) /* 00000004: Channel 1 Half Transfer Complete flag */
#define CH32V103_DMA_INTFR_TEIF1          (1 <<  3) /* 00000008: Channel 1 Transfer Error flag */
#define CH32V103_DMA_INTFR_GIF2           (1 <<  4) /* 00000010: Channel 2 Global interrupt flag */
#define CH32V103_DMA_INTFR_TCIF2          (1 <<  5) /* 00000020: Channel 2 Transfer Complete flag */
#define CH32V103_DMA_INTFR_HTIF2          (1 <<  6) /* 00000040: Channel 2 Half Transfer Complete flag */
#define CH32V103_DMA_INTFR_TEIF2          (1 <<  7) /* 00000080: Channel 2 Transfer Error flag */
#define CH32V103_DMA_INTFR_GIF3           (1 <<  8) /* 00000100: Channel 3 Global interrupt flag */
#define CH32V103_DMA_INTFR_TCIF3          (1 <<  9) /* 00000200: Channel 3 Transfer Complete flag */
#define CH32V103_DMA_INTFR_HTIF3          (1 << 10) /* 00000400: Channel 3 Half Transfer Complete flag */
#define CH32V103_DMA_INTFR_TEIF3          (1 << 11) /* 00000800: Channel 3 Transfer Error flag */
#define CH32V103_DMA_INTFR_GIF4           (1 << 12) /* 00001000: Channel 4 Global interrupt flag */
#define CH32V103_DMA_INTFR_TCIF4          (1 << 13) /* 00002000: Channel 4 Transfer Complete flag */
#define CH32V103_DMA_INTFR_HTIF4          (1 << 14) /* 00004000: Channel 4 Half Transfer Complete flag */
#define CH32V103_DMA_INTFR_TEIF4          (1 << 15) /* 00008000: Channel 4 Transfer Error flag */
#define CH32V103_DMA_INTFR_GIF5           (1 << 16) /* 00010000: Channel 5 Global interrupt flag */
#define CH32V103_DMA_INTFR_TCIF5          (1 << 17) /* 00020000: Channel 5 Transfer Complete flag */
#define CH32V103_DMA_INTFR_HTIF5          (1 << 18) /* 00040000: Channel 5 Half Transfer Complete flag */
#define CH32V103_DMA_INTFR_TEIF5          (1 << 19) /* 00080000: Channel 5 Transfer Error flag */
#define CH32V103_DMA_INTFR_GIF6           (1 << 20) /* 00100000: Channel 6 Global interrupt flag */
#define CH32V103_DMA_INTFR_TCIF6          (1 << 21) /* 00200000: Channel 6 Transfer Complete flag */
#define CH32V103_DMA_INTFR_HTIF6          (1 << 22) /* 00400000: Channel 6 Half Transfer Complete flag */
#define CH32V103_DMA_INTFR_TEIF6          (1 << 23) /* 00800000: Channel 6 Transfer Error flag */
#define CH32V103_DMA_INTFR_GIF7           (1 << 24) /* 01000000: Channel 7 Global interrupt flag */
#define CH32V103_DMA_INTFR_TCIF7          (1 << 25) /* 02000000: Channel 7 Transfer Complete flag */
#define CH32V103_DMA_INTFR_HTIF7          (1 << 26) /* 04000000: Channel 7 Half Transfer Complete flag */
#define CH32V103_DMA_INTFR_TEIF7          (1 << 27) /* 08000000: Channel 7 Transfer Error flag */
#define CH32V103_DMA_INTFCR_OFFSET        0x0004
#define CH32V103_DMA_INTFCR               (CH32V103_DMA_BASE + CH32V103_DMA_INTFCR_OFFSET) /* write-only */
#define CH32V103_DMA_INTFCR_CGIF1         (1 <<  0) /* 00000001: Channel 1 Global interrupt clear */
#define CH32V103_DMA_INTFCR_CGIF2         (1 <<  4) /* 00000010: Channel 2 Global interrupt clear */
#define CH32V103_DMA_INTFCR_CGIF3         (1 <<  8) /* 00000100: Channel 3 Global interrupt clear */
#define CH32V103_DMA_INTFCR_CGIF4         (1 << 12) /* 00001000: Channel 4 Global interrupt clear */
#define CH32V103_DMA_INTFCR_CGIF5         (1 << 16) /* 00010000: Channel 5 Global interrupt clear */
#define CH32V103_DMA_INTFCR_CGIF6         (1 << 20) /* 00100000: Channel 6 Global interrupt clear */
#define CH32V103_DMA_INTFCR_CGIF7         (1 << 24) /* 01000000: Channel 7 Global interrupt clear */
#define CH32V103_DMA_INTFCR_CTCIF1        (1 <<  1) /* 00000002: Channel 1 Transfer Complete clear */
#define CH32V103_DMA_INTFCR_CTCIF2        (1 <<  5) /* 00000020: Channel 2 Transfer Complete clear */
#define CH32V103_DMA_INTFCR_CTCIF3        (1 <<  9) /* 00000200: Channel 3 Transfer Complete clear */
#define CH32V103_DMA_INTFCR_CTCIF4        (1 << 13) /* 00002000: Channel 4 Transfer Complete clear */
#define CH32V103_DMA_INTFCR_CTCIF5        (1 << 17) /* 00020000: Channel 5 Transfer Complete clear */
#define CH32V103_DMA_INTFCR_CTCIF6        (1 << 21) /* 00200000: Channel 6 Transfer Complete clear */
#define CH32V103_DMA_INTFCR_CTCIF7        (1 << 25) /* 02000000: Channel 7 Transfer Complete clear */
#define CH32V103_DMA_INTFCR_CHTIF1        (1 <<  2) /* 00000004: Channel 1 Half Transfer clear */
#define CH32V103_DMA_INTFCR_CHTIF2        (1 <<  6) /* 00000040: Channel 2 Half Transfer clear */
#define CH32V103_DMA_INTFCR_CHTIF3        (1 << 10) /* 00000400: Channel 3 Half Transfer clear */
#define CH32V103_DMA_INTFCR_CHTIF4        (1 << 14) /* 00004000: Channel 4 Half Transfer clear */
#define CH32V103_DMA_INTFCR_CHTIF5        (1 << 18) /* 00040000: Channel 5 Half Transfer clear */
#define CH32V103_DMA_INTFCR_CHTIF6        (1 << 22) /* 00400000: Channel 6 Half Transfer clear */
#define CH32V103_DMA_INTFCR_CHTIF7        (1 << 26) /* 04000000: Channel 7 Half Transfer clear */
#define CH32V103_DMA_INTFCR_CTEIF1        (1 <<  3) /* 00000008: Channel 1 Transfer Error clear */
#define CH32V103_DMA_INTFCR_CTEIF2        (1 <<  7) /* 00000080: Channel 2 Transfer Error clear */
#define CH32V103_DMA_INTFCR_CTEIF3        (1 << 11) /* 00000800: Channel 3 Transfer Error clear */
#define CH32V103_DMA_INTFCR_CTEIF4        (1 << 15) /* 00008000: Channel 4 Transfer Error clear */
#define CH32V103_DMA_INTFCR_CTEIF5        (1 << 19) /* 00080000: Channel 5 Transfer Error clear */
#define CH32V103_DMA_INTFCR_CTEIF6        (1 << 23) /* 00800000: Channel 6 Transfer Error clear */
#define CH32V103_DMA_INTFCR_CTEIF7        (1 << 27) /* 08000000: Channel 7 Transfer Error clear */
#define CH32V103_DMA_CFGR1_OFFSET         0x0008
#define CH32V103_DMA_CFGR1                (CH32V103_DMA_BASE + CH32V103_DMA_CFGR1_OFFSET) /* read-write */
#define CH32V103_DMA_CFGR1_EN             (1 <<  0) /* 00000001: Channel enable */
#define CH32V103_DMA_CFGR1_TCIE           (1 <<  1) /* 00000002: Transfer complete interrupt enable */
#define CH32V103_DMA_CFGR1_HTIE           (1 <<  2) /* 00000004: Half Transfer interrupt enable */
#define CH32V103_DMA_CFGR1_TEIE           (1 <<  3) /* 00000008: Transfer error interrupt enable */
#define CH32V103_DMA_CFGR1_DIR            (1 <<  4) /* 00000010: Data transfer direction */
#define CH32V103_DMA_CFGR1_CIRC           (1 <<  5) /* 00000020: Circular mode */
#define CH32V103_DMA_CFGR1_PINC           (1 <<  6) /* 00000040: Peripheral increment mode */
#define CH32V103_DMA_CFGR1_MINC           (1 <<  7) /* 00000080: Memory increment mode */
#define CH32V103_DMA_CFGR1_PSIZE          (0x3 << 8) /* 00000300: Peripheral size */
#define CH32V103_DMA_CFGR1_PSIZE_MASK     (0x3 << 8)
#define CH32V103_DMA_CFGR1_MSIZE          (0x3 << 10) /* 00000c00: Memory size */
#define CH32V103_DMA_CFGR1_MSIZE_MASK     (0x3 << 10)
#define CH32V103_DMA_CFGR1_PL             (0x3 << 12) /* 00003000: Channel Priority level */
#define CH32V103_DMA_CFGR1_PL_MASK        (0x3 << 12)
#define CH32V103_DMA_CFGR1_MEM2MEM        (1 << 14) /* 00004000: Memory to memory mode */
#define CH32V103_DMA_CNTR1_OFFSET         0x000c
#define CH32V103_DMA_CNTR1                (CH32V103_DMA_BASE + CH32V103_DMA_CNTR1_OFFSET) /* read-write */
#define CH32V103_DMA_CNTR1_NDT            (0xffff << 0) /* 0000ffff: Number of data to transfer */
#define CH32V103_DMA_CNTR1_NDT_MASK       (0xffff << 0)
#define CH32V103_DMA_PADDR1_OFFSET        0x0010
#define CH32V103_DMA_PADDR1               (CH32V103_DMA_BASE + CH32V103_DMA_PADDR1_OFFSET) /* read-write */
#define CH32V103_DMA_PADDR1_PA            (0xffffffff << 0) /* ffffffff: Peripheral address */
#define CH32V103_DMA_PADDR1_PA_MASK       (0xffffffff << 0)
#define CH32V103_DMA_MADDR1_OFFSET        0x0014
#define CH32V103_DMA_MADDR1               (CH32V103_DMA_BASE + CH32V103_DMA_MADDR1_OFFSET) /* read-write */
#define CH32V103_DMA_MADDR1_MA            (0xffffffff << 0) /* ffffffff: Memory address */
#define CH32V103_DMA_MADDR1_MA_MASK       (0xffffffff << 0)
#define CH32V103_DMA_CFGR2_OFFSET         0x001c
#define CH32V103_DMA_CFGR2                (CH32V103_DMA_BASE + CH32V103_DMA_CFGR2_OFFSET) /* read-write */
#define CH32V103_DMA_CFGR2_EN             (1 <<  0) /* 00000001: Channel enable */
#define CH32V103_DMA_CFGR2_TCIE           (1 <<  1) /* 00000002: Transfer complete interrupt enable */
#define CH32V103_DMA_CFGR2_HTIE           (1 <<  2) /* 00000004: Half Transfer interrupt enable */
#define CH32V103_DMA_CFGR2_TEIE           (1 <<  3) /* 00000008: Transfer error interrupt enable */
#define CH32V103_DMA_CFGR2_DIR            (1 <<  4) /* 00000010: Data transfer direction */
#define CH32V103_DMA_CFGR2_CIRC           (1 <<  5) /* 00000020: Circular mode */
#define CH32V103_DMA_CFGR2_PINC           (1 <<  6) /* 00000040: Peripheral increment mode */
#define CH32V103_DMA_CFGR2_MINC           (1 <<  7) /* 00000080: Memory increment mode */
#define CH32V103_DMA_CFGR2_PSIZE          (0x3 << 8) /* 00000300: Peripheral size */
#define CH32V103_DMA_CFGR2_PSIZE_MASK     (0x3 << 8)
#define CH32V103_DMA_CFGR2_MSIZE          (0x3 << 10) /* 00000c00: Memory size */
#define CH32V103_DMA_CFGR2_MSIZE_MASK     (0x3 << 10)
#define CH32V103_DMA_CFGR2_PL             (0x3 << 12) /* 00003000: Channel Priority level */
#define CH32V103_DMA_CFGR2_PL_MASK        (0x3 << 12)
#define CH32V103_DMA_CFGR2_MEM2MEM        (1 << 14) /* 00004000: Memory to memory mode */
#define CH32V103_DMA_CNTR2_OFFSET         0x0020
#define CH32V103_DMA_CNTR2                (CH32V103_DMA_BASE + CH32V103_DMA_CNTR2_OFFSET) /* read-write */
#define CH32V103_DMA_CNTR2_NDT            (0xffff << 0) /* 0000ffff: Number of data to transfer */
#define CH32V103_DMA_CNTR2_NDT_MASK       (0xffff << 0)
#define CH32V103_DMA_PADDR2_OFFSET        0x0024
#define CH32V103_DMA_PADDR2               (CH32V103_DMA_BASE + CH32V103_DMA_PADDR2_OFFSET) /* read-write */
#define CH32V103_DMA_PADDR2_PA            (0xffffffff << 0) /* ffffffff: Peripheral address */
#define CH32V103_DMA_PADDR2_PA_MASK       (0xffffffff << 0)
#define CH32V103_DMA_MADDR2_OFFSET        0x0028
#define CH32V103_DMA_MADDR2               (CH32V103_DMA_BASE + CH32V103_DMA_MADDR2_OFFSET) /* read-write */
#define CH32V103_DMA_MADDR2_MA            (0xffffffff << 0) /* ffffffff: Memory address */
#define CH32V103_DMA_MADDR2_MA_MASK       (0xffffffff << 0)
#define CH32V103_DMA_CFGR3_OFFSET         0x0030
#define CH32V103_DMA_CFGR3                (CH32V103_DMA_BASE + CH32V103_DMA_CFGR3_OFFSET) /* read-write */
#define CH32V103_DMA_CFGR3_EN             (1 <<  0) /* 00000001: Channel enable */
#define CH32V103_DMA_CFGR3_TCIE           (1 <<  1) /* 00000002: Transfer complete interrupt enable */
#define CH32V103_DMA_CFGR3_HTIE           (1 <<  2) /* 00000004: Half Transfer interrupt enable */
#define CH32V103_DMA_CFGR3_TEIE           (1 <<  3) /* 00000008: Transfer error interrupt enable */
#define CH32V103_DMA_CFGR3_DIR            (1 <<  4) /* 00000010: Data transfer direction */
#define CH32V103_DMA_CFGR3_CIRC           (1 <<  5) /* 00000020: Circular mode */
#define CH32V103_DMA_CFGR3_PINC           (1 <<  6) /* 00000040: Peripheral increment mode */
#define CH32V103_DMA_CFGR3_MINC           (1 <<  7) /* 00000080: Memory increment mode */
#define CH32V103_DMA_CFGR3_PSIZE          (0x3 << 8) /* 00000300: Peripheral size */
#define CH32V103_DMA_CFGR3_PSIZE_MASK     (0x3 << 8)
#define CH32V103_DMA_CFGR3_MSIZE          (0x3 << 10) /* 00000c00: Memory size */
#define CH32V103_DMA_CFGR3_MSIZE_MASK     (0x3 << 10)
#define CH32V103_DMA_CFGR3_PL             (0x3 << 12) /* 00003000: Channel Priority level */
#define CH32V103_DMA_CFGR3_PL_MASK        (0x3 << 12)
#define CH32V103_DMA_CFGR3_MEM2MEM        (1 << 14) /* 00004000: Memory to memory mode */
#define CH32V103_DMA_CNTR3_OFFSET         0x0034
#define CH32V103_DMA_CNTR3                (CH32V103_DMA_BASE + CH32V103_DMA_CNTR3_OFFSET) /* read-write */
#define CH32V103_DMA_CNTR3_NDT            (0xffff << 0) /* 0000ffff: Number of data to transfer */
#define CH32V103_DMA_CNTR3_NDT_MASK       (0xffff << 0)
#define CH32V103_DMA_PADDR3_OFFSET        0x0038
#define CH32V103_DMA_PADDR3               (CH32V103_DMA_BASE + CH32V103_DMA_PADDR3_OFFSET) /* read-write */
#define CH32V103_DMA_PADDR3_PA            (0xffffffff << 0) /* ffffffff: Peripheral address */
#define CH32V103_DMA_PADDR3_PA_MASK       (0xffffffff << 0)
#define CH32V103_DMA_MADDR3_OFFSET        0x003c
#define CH32V103_DMA_MADDR3               (CH32V103_DMA_BASE + CH32V103_DMA_MADDR3_OFFSET) /* read-write */
#define CH32V103_DMA_MADDR3_MA            (0xffffffff << 0) /* ffffffff: Memory address */
#define CH32V103_DMA_MADDR3_MA_MASK       (0xffffffff << 0)
#define CH32V103_DMA_CFGR4_OFFSET         0x0044
#define CH32V103_DMA_CFGR4                (CH32V103_DMA_BASE + CH32V103_DMA_CFGR4_OFFSET) /* read-write */
#define CH32V103_DMA_CFGR4_EN             (1 <<  0) /* 00000001: Channel enable */
#define CH32V103_DMA_CFGR4_TCIE           (1 <<  1) /* 00000002: Transfer complete interrupt enable */
#define CH32V103_DMA_CFGR4_HTIE           (1 <<  2) /* 00000004: Half Transfer interrupt enable */
#define CH32V103_DMA_CFGR4_TEIE           (1 <<  3) /* 00000008: Transfer error interrupt enable */
#define CH32V103_DMA_CFGR4_DIR            (1 <<  4) /* 00000010: Data transfer direction */
#define CH32V103_DMA_CFGR4_CIRC           (1 <<  5) /* 00000020: Circular mode */
#define CH32V103_DMA_CFGR4_PINC           (1 <<  6) /* 00000040: Peripheral increment mode */
#define CH32V103_DMA_CFGR4_MINC           (1 <<  7) /* 00000080: Memory increment mode */
#define CH32V103_DMA_CFGR4_PSIZE          (0x3 << 8) /* 00000300: Peripheral size */
#define CH32V103_DMA_CFGR4_PSIZE_MASK     (0x3 << 8)
#define CH32V103_DMA_CFGR4_MSIZE          (0x3 << 10) /* 00000c00: Memory size */
#define CH32V103_DMA_CFGR4_MSIZE_MASK     (0x3 << 10)
#define CH32V103_DMA_CFGR4_PL             (0x3 << 12) /* 00003000: Channel Priority level */
#define CH32V103_DMA_CFGR4_PL_MASK        (0x3 << 12)
#define CH32V103_DMA_CFGR4_MEM2MEM        (1 << 14) /* 00004000: Memory to memory mode */
#define CH32V103_DMA_CNTR4_OFFSET         0x0048
#define CH32V103_DMA_CNTR4                (CH32V103_DMA_BASE + CH32V103_DMA_CNTR4_OFFSET) /* read-write */
#define CH32V103_DMA_CNTR4_NDT            (0xffff << 0) /* 0000ffff: Number of data to transfer */
#define CH32V103_DMA_CNTR4_NDT_MASK       (0xffff << 0)
#define CH32V103_DMA_PADDR4_OFFSET        0x004c
#define CH32V103_DMA_PADDR4               (CH32V103_DMA_BASE + CH32V103_DMA_PADDR4_OFFSET) /* read-write */
#define CH32V103_DMA_PADDR4_PA            (0xffffffff << 0) /* ffffffff: Peripheral address */
#define CH32V103_DMA_PADDR4_PA_MASK       (0xffffffff << 0)
#define CH32V103_DMA_MADDR4_OFFSET        0x0050
#define CH32V103_DMA_MADDR4               (CH32V103_DMA_BASE + CH32V103_DMA_MADDR4_OFFSET) /* read-write */
#define CH32V103_DMA_MADDR4_MA            (0xffffffff << 0) /* ffffffff: Memory address */
#define CH32V103_DMA_MADDR4_MA_MASK       (0xffffffff << 0)
#define CH32V103_DMA_CFGR5_OFFSET         0x0058
#define CH32V103_DMA_CFGR5                (CH32V103_DMA_BASE + CH32V103_DMA_CFGR5_OFFSET) /* read-write */
#define CH32V103_DMA_CFGR5_EN             (1 <<  0) /* 00000001: Channel enable */
#define CH32V103_DMA_CFGR5_TCIE           (1 <<  1) /* 00000002: Transfer complete interrupt enable */
#define CH32V103_DMA_CFGR5_HTIE           (1 <<  2) /* 00000004: Half Transfer interrupt enable */
#define CH32V103_DMA_CFGR5_TEIE           (1 <<  3) /* 00000008: Transfer error interrupt enable */
#define CH32V103_DMA_CFGR5_DIR            (1 <<  4) /* 00000010: Data transfer direction */
#define CH32V103_DMA_CFGR5_CIRC           (1 <<  5) /* 00000020: Circular mode */
#define CH32V103_DMA_CFGR5_PINC           (1 <<  6) /* 00000040: Peripheral increment mode */
#define CH32V103_DMA_CFGR5_MINC           (1 <<  7) /* 00000080: Memory increment mode */
#define CH32V103_DMA_CFGR5_PSIZE          (0x3 << 8) /* 00000300: Peripheral size */
#define CH32V103_DMA_CFGR5_PSIZE_MASK     (0x3 << 8)
#define CH32V103_DMA_CFGR5_MSIZE          (0x3 << 10) /* 00000c00: Memory size */
#define CH32V103_DMA_CFGR5_MSIZE_MASK     (0x3 << 10)
#define CH32V103_DMA_CFGR5_PL             (0x3 << 12) /* 00003000: Channel Priority level */
#define CH32V103_DMA_CFGR5_PL_MASK        (0x3 << 12)
#define CH32V103_DMA_CFGR5_MEM2MEM        (1 << 14) /* 00004000: Memory to memory mode */
#define CH32V103_DMA_CNTR5_OFFSET         0x005c
#define CH32V103_DMA_CNTR5                (CH32V103_DMA_BASE + CH32V103_DMA_CNTR5_OFFSET) /* read-write */
#define CH32V103_DMA_CNTR5_NDT            (0xffff << 0) /* 0000ffff: Number of data to transfer */
#define CH32V103_DMA_CNTR5_NDT_MASK       (0xffff << 0)
#define CH32V103_DMA_PADDR5_OFFSET        0x0060
#define CH32V103_DMA_PADDR5               (CH32V103_DMA_BASE + CH32V103_DMA_PADDR5_OFFSET) /* read-write */
#define CH32V103_DMA_PADDR5_PA            (0xffffffff << 0) /* ffffffff: Peripheral address */
#define CH32V103_DMA_PADDR5_PA_MASK       (0xffffffff << 0)
#define CH32V103_DMA_MADDR5_OFFSET        0x0064
#define CH32V103_DMA_MADDR5               (CH32V103_DMA_BASE + CH32V103_DMA_MADDR5_OFFSET) /* read-write */
#define CH32V103_DMA_MADDR5_MA            (0xffffffff << 0) /* ffffffff: Memory address */
#define CH32V103_DMA_MADDR5_MA_MASK       (0xffffffff << 0)
#define CH32V103_DMA_CFGR6_OFFSET         0x006c
#define CH32V103_DMA_CFGR6                (CH32V103_DMA_BASE + CH32V103_DMA_CFGR6_OFFSET) /* read-write */
#define CH32V103_DMA_CFGR6_EN             (1 <<  0) /* 00000001: Channel enable */
#define CH32V103_DMA_CFGR6_TCIE           (1 <<  1) /* 00000002: Transfer complete interrupt enable */
#define CH32V103_DMA_CFGR6_HTIE           (1 <<  2) /* 00000004: Half Transfer interrupt enable */
#define CH32V103_DMA_CFGR6_TEIE           (1 <<  3) /* 00000008: Transfer error interrupt enable */
#define CH32V103_DMA_CFGR6_DIR            (1 <<  4) /* 00000010: Data transfer direction */
#define CH32V103_DMA_CFGR6_CIRC           (1 <<  5) /* 00000020: Circular mode */
#define CH32V103_DMA_CFGR6_PINC           (1 <<  6) /* 00000040: Peripheral increment mode */
#define CH32V103_DMA_CFGR6_MINC           (1 <<  7) /* 00000080: Memory increment mode */
#define CH32V103_DMA_CFGR6_PSIZE          (0x3 << 8) /* 00000300: Peripheral size */
#define CH32V103_DMA_CFGR6_PSIZE_MASK     (0x3 << 8)
#define CH32V103_DMA_CFGR6_MSIZE          (0x3 << 10) /* 00000c00: Memory size */
#define CH32V103_DMA_CFGR6_MSIZE_MASK     (0x3 << 10)
#define CH32V103_DMA_CFGR6_PL             (0x3 << 12) /* 00003000: Channel Priority level */
#define CH32V103_DMA_CFGR6_PL_MASK        (0x3 << 12)
#define CH32V103_DMA_CFGR6_MEM2MEM        (1 << 14) /* 00004000: Memory to memory mode */
#define CH32V103_DMA_CNTR6_OFFSET         0x0070
#define CH32V103_DMA_CNTR6                (CH32V103_DMA_BASE + CH32V103_DMA_CNTR6_OFFSET) /* read-write */
#define CH32V103_DMA_CNTR6_NDT            (0xffff << 0) /* 0000ffff: Number of data to transfer */
#define CH32V103_DMA_CNTR6_NDT_MASK       (0xffff << 0)
#define CH32V103_DMA_PADDR6_OFFSET        0x0074
#define CH32V103_DMA_PADDR6               (CH32V103_DMA_BASE + CH32V103_DMA_PADDR6_OFFSET) /* read-write */
#define CH32V103_DMA_PADDR6_PA            (0xffffffff << 0) /* ffffffff: Peripheral address */
#define CH32V103_DMA_PADDR6_PA_MASK       (0xffffffff << 0)
#define CH32V103_DMA_MADDR6_OFFSET        0x0078
#define CH32V103_DMA_MADDR6               (CH32V103_DMA_BASE + CH32V103_DMA_MADDR6_OFFSET) /* read-write */
#define CH32V103_DMA_MADDR6_MA            (0xffffffff << 0) /* ffffffff: Memory address */
#define CH32V103_DMA_MADDR6_MA_MASK       (0xffffffff << 0)
#define CH32V103_DMA_CFGR7_OFFSET         0x0080
#define CH32V103_DMA_CFGR7                (CH32V103_DMA_BASE + CH32V103_DMA_CFGR7_OFFSET) /* read-write */
#define CH32V103_DMA_CFGR7_EN             (1 <<  0) /* 00000001: Channel enable */
#define CH32V103_DMA_CFGR7_TCIE           (1 <<  1) /* 00000002: Transfer complete interrupt enable */
#define CH32V103_DMA_CFGR7_HTIE           (1 <<  2) /* 00000004: Half Transfer interrupt enable */
#define CH32V103_DMA_CFGR7_TEIE           (1 <<  3) /* 00000008: Transfer error interrupt enable */
#define CH32V103_DMA_CFGR7_DIR            (1 <<  4) /* 00000010: Data transfer direction */
#define CH32V103_DMA_CFGR7_CIRC           (1 <<  5) /* 00000020: Circular mode */
#define CH32V103_DMA_CFGR7_PINC           (1 <<  6) /* 00000040: Peripheral increment mode */
#define CH32V103_DMA_CFGR7_MINC           (1 <<  7) /* 00000080: Memory increment mode */
#define CH32V103_DMA_CFGR7_PSIZE          (0x3 << 8) /* 00000300: Peripheral size */
#define CH32V103_DMA_CFGR7_PSIZE_MASK     (0x3 << 8)
#define CH32V103_DMA_CFGR7_MSIZE          (0x3 << 10) /* 00000c00: Memory size */
#define CH32V103_DMA_CFGR7_MSIZE_MASK     (0x3 << 10)
#define CH32V103_DMA_CFGR7_PL             (0x3 << 12) /* 00003000: Channel Priority level */
#define CH32V103_DMA_CFGR7_PL_MASK        (0x3 << 12)
#define CH32V103_DMA_CFGR7_MEM2MEM        (1 << 14) /* 00004000: Memory to memory mode */
#define CH32V103_DMA_CNTR7_OFFSET         0x0084
#define CH32V103_DMA_CNTR7                (CH32V103_DMA_BASE + CH32V103_DMA_CNTR7_OFFSET) /* read-write */
#define CH32V103_DMA_CNTR7_NDT            (0xffff << 0) /* 0000ffff: Number of data to transfer */
#define CH32V103_DMA_CNTR7_NDT_MASK       (0xffff << 0)
#define CH32V103_DMA_PADDR7_OFFSET        0x0088
#define CH32V103_DMA_PADDR7               (CH32V103_DMA_BASE + CH32V103_DMA_PADDR7_OFFSET) /* read-write */
#define CH32V103_DMA_PADDR7_PA            (0xffffffff << 0) /* ffffffff: Peripheral address */
#define CH32V103_DMA_PADDR7_PA_MASK       (0xffffffff << 0)
#define CH32V103_DMA_MADDR7_OFFSET        0x008c
#define CH32V103_DMA_MADDR7               (CH32V103_DMA_BASE + CH32V103_DMA_MADDR7_OFFSET) /* read-write */
#define CH32V103_DMA_MADDR7_MA            (0xffffffff << 0) /* ffffffff: Memory address */
#define CH32V103_DMA_MADDR7_MA_MASK       (0xffffffff << 0)

/* RTC - Real time clock */
#define CH32V103_RTC_BASE                 0x40002800
#define CH32V103_RTC_CTLRH_OFFSET         0x0000
#define CH32V103_RTC_CTLRH                (CH32V103_RTC_BASE + CH32V103_RTC_CTLRH_OFFSET) /* read-write */
#define CH32V103_RTC_CTLRH_SECIE          (1 <<  0) /* 00000001: Second interrupt Enable */
#define CH32V103_RTC_CTLRH_ALRIE          (1 <<  1) /* 00000002: Alarm interrupt Enable */
#define CH32V103_RTC_CTLRH_OWIE           (1 <<  2) /* 00000004: Overflow interrupt Enable */
#define CH32V103_RTC_CTLRL_OFFSET         0x0004
#define CH32V103_RTC_CTLRL                (CH32V103_RTC_BASE + CH32V103_RTC_CTLRL_OFFSET)
#define CH32V103_RTC_CTLRL_SECF           (1 <<  0) /* 00000001: Second Flag */
#define CH32V103_RTC_CTLRL_ALRF           (1 <<  1) /* 00000002: Alarm Flag */
#define CH32V103_RTC_CTLRL_OWF            (1 <<  2) /* 00000004: Overflow Flag */
#define CH32V103_RTC_CTLRL_RSF            (1 <<  3) /* 00000008: Registers Synchronized Flag */
#define CH32V103_RTC_CTLRL_CNF            (1 <<  4) /* 00000010: Configuration Flag */
#define CH32V103_RTC_CTLRL_RTOFF          (1 <<  5) /* 00000020: RTC operation OFF */
#define CH32V103_RTC_PSCRH_OFFSET         0x0008
#define CH32V103_RTC_PSCRH                (CH32V103_RTC_BASE + CH32V103_RTC_PSCRH_OFFSET) /* write-only */
#define CH32V103_RTC_PSCRH_PRLH           (0xf << 0) /* 0000000f: RTC Prescaler Load Register High */
#define CH32V103_RTC_PSCRH_PRLH_MASK      (0xf << 0)
#define CH32V103_RTC_PSCRL_OFFSET         0x000c
#define CH32V103_RTC_PSCRL                (CH32V103_RTC_BASE + CH32V103_RTC_PSCRL_OFFSET) /* write-only */
#define CH32V103_RTC_PSCRL_PRLL           (0xffff << 0) /* 0000ffff: RTC Prescaler Divider Register Low */
#define CH32V103_RTC_PSCRL_PRLL_MASK      (0xffff << 0)
#define CH32V103_RTC_DIVH_OFFSET          0x0010
#define CH32V103_RTC_DIVH                 (CH32V103_RTC_BASE + CH32V103_RTC_DIVH_OFFSET) /* read-only */
#define CH32V103_RTC_DIVH_DIVH            (0xf << 0) /* 0000000f: RTC prescaler divider register high */
#define CH32V103_RTC_DIVH_DIVH_MASK       (0xf << 0)
#define CH32V103_RTC_DIVL_OFFSET          0x0014
#define CH32V103_RTC_DIVL                 (CH32V103_RTC_BASE + CH32V103_RTC_DIVL_OFFSET) /* read-only */
#define CH32V103_RTC_DIVL_DIVL            (0xffff << 0) /* 0000ffff: RTC prescaler divider register Low */
#define CH32V103_RTC_DIVL_DIVL_MASK       (0xffff << 0)
#define CH32V103_RTC_CNTH_OFFSET          0x0018
#define CH32V103_RTC_CNTH                 (CH32V103_RTC_BASE + CH32V103_RTC_CNTH_OFFSET) /* read-write */
#define CH32V103_RTC_CNTH_CNTH            (0xffff << 0) /* 0000ffff: RTC counter register high */
#define CH32V103_RTC_CNTH_CNTH_MASK       (0xffff << 0)
#define CH32V103_RTC_CNTL_OFFSET          0x001c
#define CH32V103_RTC_CNTL                 (CH32V103_RTC_BASE + CH32V103_RTC_CNTL_OFFSET) /* read-write */
#define CH32V103_RTC_CNTL_CNTL            (0xffff << 0) /* 0000ffff: RTC counter register Low */
#define CH32V103_RTC_CNTL_CNTL_MASK       (0xffff << 0)
#define CH32V103_RTC_ALRMH_OFFSET         0x0020
#define CH32V103_RTC_ALRMH                (CH32V103_RTC_BASE + CH32V103_RTC_ALRMH_OFFSET) /* write-only */
#define CH32V103_RTC_ALRMH_ALRMH          (0xffff << 0) /* 0000ffff: RTC alarm register high */
#define CH32V103_RTC_ALRMH_ALRMH_MASK     (0xffff << 0)
#define CH32V103_RTC_ALRML_OFFSET         0x0024
#define CH32V103_RTC_ALRML                (CH32V103_RTC_BASE + CH32V103_RTC_ALRML_OFFSET) /* write-only */
#define CH32V103_RTC_ALRML_ALRML          (0xffff << 0) /* 0000ffff: RTC alarm register low */
#define CH32V103_RTC_ALRML_ALRML_MASK     (0xffff << 0)

/* BKP - Backup registers */
#define CH32V103_BKP_BASE                 0x40006c00
#define CH32V103_BKP_DATAR1_OFFSET        0x0004
#define CH32V103_BKP_DATAR1               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR1_OFFSET) /* read-write */
#define CH32V103_BKP_DATAR1_D1            (0xffff << 0) /* 0000ffff: Backup data */
#define CH32V103_BKP_DATAR1_D1_MASK       (0xffff << 0)
#define CH32V103_BKP_DATAR2_OFFSET        0x0008
#define CH32V103_BKP_DATAR2               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR2_OFFSET) /* read-write */
#define CH32V103_BKP_DATAR2_D2            (0xffff << 0) /* 0000ffff: Backup data */
#define CH32V103_BKP_DATAR2_D2_MASK       (0xffff << 0)
#define CH32V103_BKP_DATAR3_OFFSET        0x000c
#define CH32V103_BKP_DATAR3               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR3_OFFSET) /* read-write */
#define CH32V103_BKP_DATAR3_D3            (0xffff << 0) /* 0000ffff: Backup data */
#define CH32V103_BKP_DATAR3_D3_MASK       (0xffff << 0)
#define CH32V103_BKP_DATAR4_OFFSET        0x0010
#define CH32V103_BKP_DATAR4               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR4_OFFSET) /* read-write */
#define CH32V103_BKP_DATAR4_D4            (0xffff << 0) /* 0000ffff: Backup data */
#define CH32V103_BKP_DATAR4_D4_MASK       (0xffff << 0)
#define CH32V103_BKP_DATAR5_OFFSET        0x0014
#define CH32V103_BKP_DATAR5               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR5_OFFSET) /* read-write */
#define CH32V103_BKP_DATAR5_D5            (0xffff << 0) /* 0000ffff: Backup data */
#define CH32V103_BKP_DATAR5_D5_MASK       (0xffff << 0)
#define CH32V103_BKP_DATAR6_OFFSET        0x0018
#define CH32V103_BKP_DATAR6               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR6_OFFSET) /* read-write */
#define CH32V103_BKP_DATAR6_D6            (0xffff << 0) /* 0000ffff: Backup data */
#define CH32V103_BKP_DATAR6_D6_MASK       (0xffff << 0)
#define CH32V103_BKP_DATAR7_OFFSET        0x001c
#define CH32V103_BKP_DATAR7               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR7_OFFSET) /* read-write */
#define CH32V103_BKP_DATAR7_D7            (0xffff << 0) /* 0000ffff: Backup data */
#define CH32V103_BKP_DATAR7_D7_MASK       (0xffff << 0)
#define CH32V103_BKP_DATAR8_OFFSET        0x0020
#define CH32V103_BKP_DATAR8               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR8_OFFSET) /* read-write */
#define CH32V103_BKP_DATAR8_D8            (0xffff << 0) /* 0000ffff: Backup data */
#define CH32V103_BKP_DATAR8_D8_MASK       (0xffff << 0)
#define CH32V103_BKP_DATAR9_OFFSET        0x0024
#define CH32V103_BKP_DATAR9               (CH32V103_BKP_BASE + CH32V103_BKP_DATAR9_OFFSET) /* read-write */
#define CH32V103_BKP_DATAR9_D9            (0xffff << 0) /* 0000ffff: Backup data */
#define CH32V103_BKP_DATAR9_D9_MASK       (0xffff << 0)
#define CH32V103_BKP_DATAR10_OFFSET       0x0028
#define CH32V103_BKP_DATAR10              (CH32V103_BKP_BASE + CH32V103_BKP_DATAR10_OFFSET) /* read-write */
#define CH32V103_BKP_DATAR10_D10          (0xffff << 0) /* 0000ffff: Backup data */
#define CH32V103_BKP_DATAR10_D10_MASK     (0xffff << 0)
#define CH32V103_BKP_OCTLR_OFFSET         0x002c
#define CH32V103_BKP_OCTLR                (CH32V103_BKP_BASE + CH32V103_BKP_OCTLR_OFFSET) /* read-write */
#define CH32V103_BKP_OCTLR_CAL            (0x7f << 0) /* 0000007f: Calibration value */
#define CH32V103_BKP_OCTLR_CAL_MASK       (0x7f << 0)
#define CH32V103_BKP_OCTLR_CCO            (1 <<  7) /* 00000080: Calibration Clock Output */
#define CH32V103_BKP_OCTLR_ASOE           (1 <<  8) /* 00000100: Alarm or second output enable */
#define CH32V103_BKP_OCTLR_ASOS           (1 <<  9) /* 00000200: Alarm or second output selection */
#define CH32V103_BKP_TPCTLR_OFFSET        0x0030
#define CH32V103_BKP_TPCTLR               (CH32V103_BKP_BASE + CH32V103_BKP_TPCTLR_OFFSET) /* read-write */
#define CH32V103_BKP_TPCTLR_TPE           (1 <<  0) /* 00000001: Tamper pin enable */
#define CH32V103_BKP_TPCTLR_TPAL          (1 <<  1) /* 00000002: Tamper pin active level */
#define CH32V103_BKP_TPCSR_OFFSET         0x0034
#define CH32V103_BKP_TPCSR                (CH32V103_BKP_BASE + CH32V103_BKP_TPCSR_OFFSET)
#define CH32V103_BKP_TPCSR_CTE            (1 <<  0) /* 00000001: Clear Tamper event */
#define CH32V103_BKP_TPCSR_CTI            (1 <<  1) /* 00000002: Clear Tamper Interrupt */
#define CH32V103_BKP_TPCSR_TPIE           (1 <<  2) /* 00000004: Tamper Pin interrupt enable */
#define CH32V103_BKP_TPCSR_TEF            (1 <<  8) /* 00000100: Tamper Event Flag */
#define CH32V103_BKP_TPCSR_TIF            (1 <<  9) /* 00000200: Tamper Interrupt Flag */

/* IWDG - Independent watchdog */
#define CH32V103_IWDG_BASE                0x40003000
#define CH32V103_IWDG_CTLR_OFFSET         0x0000
#define CH32V103_IWDG_CTLR                (CH32V103_IWDG_BASE + CH32V103_IWDG_CTLR_OFFSET) /* write-only */
#define CH32V103_IWDG_CTLR_KEY            (0xffff << 0) /* 0000ffff: Key value */
#define CH32V103_IWDG_CTLR_KEY_MASK       (0xffff << 0)
#define CH32V103_IWDG_PSCR_OFFSET         0x0004
#define CH32V103_IWDG_PSCR                (CH32V103_IWDG_BASE + CH32V103_IWDG_PSCR_OFFSET) /* read-write */
#define CH32V103_IWDG_PSCR_PR             (0x7 << 0) /* 00000007: Prescaler divider */
#define CH32V103_IWDG_PSCR_PR_MASK        (0x7 << 0)
#define CH32V103_IWDG_RLDR_OFFSET         0x0008
#define CH32V103_IWDG_RLDR                (CH32V103_IWDG_BASE + CH32V103_IWDG_RLDR_OFFSET) /* read-write */
#define CH32V103_IWDG_RLDR_RL             (0xfff << 0) /* 00000fff: Watchdog counter reload value */
#define CH32V103_IWDG_RLDR_RL_MASK        (0xfff << 0)
#define CH32V103_IWDG_STATR_OFFSET        0x000c
#define CH32V103_IWDG_STATR               (CH32V103_IWDG_BASE + CH32V103_IWDG_STATR_OFFSET) /* read-only */
#define CH32V103_IWDG_STATR_PVU           (1 <<  0) /* 00000001: Watchdog prescaler value update */
#define CH32V103_IWDG_STATR_RVU           (1 <<  1) /* 00000002: Watchdog counter reload value update */

/* WWDG - Window watchdog */
#define CH32V103_WWDG_BASE                0x40002c00
#define CH32V103_WWDG_CTLR_OFFSET         0x0000
#define CH32V103_WWDG_CTLR                (CH32V103_WWDG_BASE + CH32V103_WWDG_CTLR_OFFSET) /* read-write */
#define CH32V103_WWDG_CTLR_T              (0x7f << 0) /* 0000007f: 7-bit counter (MSB to LSB) */
#define CH32V103_WWDG_CTLR_T_MASK         (0x7f << 0)
#define CH32V103_WWDG_CTLR_WDGA           (1 <<  7) /* 00000080: Activation bit */
#define CH32V103_WWDG_CFGR_OFFSET         0x0004
#define CH32V103_WWDG_CFGR                (CH32V103_WWDG_BASE + CH32V103_WWDG_CFGR_OFFSET) /* read-write */
#define CH32V103_WWDG_CFGR_W              (0x7f << 0) /* 0000007f: 7-bit window value */
#define CH32V103_WWDG_CFGR_W_MASK         (0x7f << 0)
#define CH32V103_WWDG_CFGR_WDGTB          (0x3 << 7) /* 00000180: Timer Base */
#define CH32V103_WWDG_CFGR_WDGTB_MASK     (0x3 << 7)
#define CH32V103_WWDG_CFGR_EWI            (1 <<  9) /* 00000200: Early Wakeup Interrupt */
#define CH32V103_WWDG_STATR_OFFSET        0x0008
#define CH32V103_WWDG_STATR               (CH32V103_WWDG_BASE + CH32V103_WWDG_STATR_OFFSET) /* read-write */
#define CH32V103_WWDG_STATR_WEIF          (1 <<  0) /* 00000001: Early Wakeup Interrupt Flag */

/* TIM1 - Advanced timer */
#define CH32V103_TIM1_BASE                0x40012c00
#define CH32V103_TIM1_CTLR1_OFFSET        0x0000
#define CH32V103_TIM1_CTLR1               (CH32V103_TIM1_BASE + CH32V103_TIM1_CTLR1_OFFSET) /* read-write */
#define CH32V103_TIM1_CTLR1_CKD           (0x3 << 8) /* 00000300: Clock division */
#define CH32V103_TIM1_CTLR1_CKD_MASK      (0x3 << 8)
#define CH32V103_TIM1_CTLR1_ARPE          (1 <<  7) /* 00000080: Auto-reload preload enable */
#define CH32V103_TIM1_CTLR1_CMS           (0x3 << 5) /* 00000060: Center-aligned mode selection */
#define CH32V103_TIM1_CTLR1_CMS_MASK      (0x3 << 5)
#define CH32V103_TIM1_CTLR1_DIR           (1 <<  4) /* 00000010: Direction */
#define CH32V103_TIM1_CTLR1_OPM           (1 <<  3) /* 00000008: One-pulse mode */
#define CH32V103_TIM1_CTLR1_URS           (1 <<  2) /* 00000004: Update request source */
#define CH32V103_TIM1_CTLR1_UDIS          (1 <<  1) /* 00000002: Update disable */
#define CH32V103_TIM1_CTLR1_CEN           (1 <<  0) /* 00000001: Counter enable */
#define CH32V103_TIM1_CTLR2_OFFSET        0x0004
#define CH32V103_TIM1_CTLR2               (CH32V103_TIM1_BASE + CH32V103_TIM1_CTLR2_OFFSET) /* read-write */
#define CH32V103_TIM1_CTLR2_OIS4          (1 << 14) /* 00004000: Output Idle state 4 */
#define CH32V103_TIM1_CTLR2_OIS3N         (1 << 13) /* 00002000: Output Idle state 3 */
#define CH32V103_TIM1_CTLR2_OIS3          (1 << 12) /* 00001000: Output Idle state 3 */
#define CH32V103_TIM1_CTLR2_OIS2N         (1 << 11) /* 00000800: Output Idle state 2 */
#define CH32V103_TIM1_CTLR2_OIS2          (1 << 10) /* 00000400: Output Idle state 2 */
#define CH32V103_TIM1_CTLR2_OIS1N         (1 <<  9) /* 00000200: Output Idle state 1 */
#define CH32V103_TIM1_CTLR2_OIS1          (1 <<  8) /* 00000100: Output Idle state 1 */
#define CH32V103_TIM1_CTLR2_TI1S          (1 <<  7) /* 00000080: TI1 selection */
#define CH32V103_TIM1_CTLR2_MMS           (0x7 << 4) /* 00000070: Master mode selection */
#define CH32V103_TIM1_CTLR2_MMS_MASK      (0x7 << 4)
#define CH32V103_TIM1_CTLR2_CCDS          (1 <<  3) /* 00000008: Capture/compare DMA selection */
#define CH32V103_TIM1_CTLR2_CCUS          (1 <<  2) /* 00000004: Capture/compare control update selection */
#define CH32V103_TIM1_CTLR2_CCPC          (1 <<  0) /* 00000001: Capture/compare preloaded control */
#define CH32V103_TIM1_SMCFGR_OFFSET       0x0008
#define CH32V103_TIM1_SMCFGR              (CH32V103_TIM1_BASE + CH32V103_TIM1_SMCFGR_OFFSET) /* read-write */
#define CH32V103_TIM1_SMCFGR_ETP          (1 << 15) /* 00008000: External trigger polarity */
#define CH32V103_TIM1_SMCFGR_ECE          (1 << 14) /* 00004000: External clock enable */
#define CH32V103_TIM1_SMCFGR_ETPS         (0x3 << 12) /* 00003000: External trigger prescaler */
#define CH32V103_TIM1_SMCFGR_ETPS_MASK    (0x3 << 12)
#define CH32V103_TIM1_SMCFGR_ETF          (0xf << 8) /* 00000f00: External trigger filter */
#define CH32V103_TIM1_SMCFGR_ETF_MASK     (0xf << 8)
#define CH32V103_TIM1_SMCFGR_MSM          (1 <<  7) /* 00000080: Master/Slave mode */
#define CH32V103_TIM1_SMCFGR_TS           (0x7 << 4) /* 00000070: Trigger selection */
#define CH32V103_TIM1_SMCFGR_TS_MASK      (0x7 << 4)
#define CH32V103_TIM1_SMCFGR_SMS          (0x7 << 0) /* 00000007: Slave mode selection */
#define CH32V103_TIM1_SMCFGR_SMS_MASK     (0x7 << 0)
#define CH32V103_TIM1_DMAINTENR_OFFSET    0x000c
#define CH32V103_TIM1_DMAINTENR           (CH32V103_TIM1_BASE + CH32V103_TIM1_DMAINTENR_OFFSET) /* read-write */
#define CH32V103_TIM1_DMAINTENR_TDE       (1 << 14) /* 00004000: Trigger DMA request enable */
#define CH32V103_TIM1_DMAINTENR_COMDE     (1 << 13) /* 00002000: COM DMA request enable */
#define CH32V103_TIM1_DMAINTENR_CC4DE     (1 << 12) /* 00001000: Capture/Compare 4 DMA request enable */
#define CH32V103_TIM1_DMAINTENR_CC3DE     (1 << 11) /* 00000800: Capture/Compare 3 DMA request enable */
#define CH32V103_TIM1_DMAINTENR_CC2DE     (1 << 10) /* 00000400: Capture/Compare 2 DMA request enable */
#define CH32V103_TIM1_DMAINTENR_CC1DE     (1 <<  9) /* 00000200: Capture/Compare 1 DMA request enable */
#define CH32V103_TIM1_DMAINTENR_UDE       (1 <<  8) /* 00000100: Update DMA request enable */
#define CH32V103_TIM1_DMAINTENR_TIE       (1 <<  6) /* 00000040: Trigger interrupt enable */
#define CH32V103_TIM1_DMAINTENR_CC4IE     (1 <<  4) /* 00000010: Capture/Compare 4 interrupt enable */
#define CH32V103_TIM1_DMAINTENR_CC3IE     (1 <<  3) /* 00000008: Capture/Compare 3 interrupt enable */
#define CH32V103_TIM1_DMAINTENR_CC2IE     (1 <<  2) /* 00000004: Capture/Compare 2 interrupt enable */
#define CH32V103_TIM1_DMAINTENR_CC1IE     (1 <<  1) /* 00000002: Capture/Compare 1 interrupt enable */
#define CH32V103_TIM1_DMAINTENR_UIE       (1 <<  0) /* 00000001: Update interrupt enable */
#define CH32V103_TIM1_DMAINTENR_BIE       (1 <<  7) /* 00000080: Break interrupt enable */
#define CH32V103_TIM1_DMAINTENR_COMIE     (1 <<  5) /* 00000020: COM interrupt enable */
#define CH32V103_TIM1_INTFR_OFFSET        0x0010
#define CH32V103_TIM1_INTFR               (CH32V103_TIM1_BASE + CH32V103_TIM1_INTFR_OFFSET) /* read-write */
#define CH32V103_TIM1_INTFR_CC4OF         (1 << 12) /* 00001000: Capture/Compare 4 overcapture flag */
#define CH32V103_TIM1_INTFR_CC3OF         (1 << 11) /* 00000800: Capture/Compare 3 overcapture flag */
#define CH32V103_TIM1_INTFR_CC2OF         (1 << 10) /* 00000400: Capture/compare 2 overcapture flag */
#define CH32V103_TIM1_INTFR_CC1OF         (1 <<  9) /* 00000200: Capture/Compare 1 overcapture flag */
#define CH32V103_TIM1_INTFR_BIF           (1 <<  7) /* 00000080: Break interrupt flag */
#define CH32V103_TIM1_INTFR_TIF           (1 <<  6) /* 00000040: Trigger interrupt flag */
#define CH32V103_TIM1_INTFR_COMIF         (1 <<  5) /* 00000020: COM interrupt flag */
#define CH32V103_TIM1_INTFR_CC4IF         (1 <<  4) /* 00000010: Capture/Compare 4 interrupt flag */
#define CH32V103_TIM1_INTFR_CC3IF         (1 <<  3) /* 00000008: Capture/Compare 3 interrupt flag */
#define CH32V103_TIM1_INTFR_CC2IF         (1 <<  2) /* 00000004: Capture/Compare 2 interrupt flag */
#define CH32V103_TIM1_INTFR_CC1IF         (1 <<  1) /* 00000002: Capture/compare 1 interrupt flag */
#define CH32V103_TIM1_INTFR_UIF           (1 <<  0) /* 00000001: Update interrupt flag */
#define CH32V103_TIM1_SWEVGR_OFFSET       0x0014
#define CH32V103_TIM1_SWEVGR              (CH32V103_TIM1_BASE + CH32V103_TIM1_SWEVGR_OFFSET) /* write-only */
#define CH32V103_TIM1_SWEVGR_BG           (1 <<  7) /* 00000080: Break generation */
#define CH32V103_TIM1_SWEVGR_TG           (1 <<  6) /* 00000040: Trigger generation */
#define CH32V103_TIM1_SWEVGR_COMG         (1 <<  5) /* 00000020: Capture/Compare control update generation */
#define CH32V103_TIM1_SWEVGR_CC4G         (1 <<  4) /* 00000010: Capture/compare 4 generation */
#define CH32V103_TIM1_SWEVGR_CC3G         (1 <<  3) /* 00000008: Capture/compare 3 generation */
#define CH32V103_TIM1_SWEVGR_CC2G         (1 <<  2) /* 00000004: Capture/compare 2 generation */
#define CH32V103_TIM1_SWEVGR_CC1G         (1 <<  1) /* 00000002: Capture/compare 1 generation */
#define CH32V103_TIM1_SWEVGR_UG           (1 <<  0) /* 00000001: Update generation */
#define CH32V103_TIM1_CHCTLR1_Output_OFFSET 0x0018
#define CH32V103_TIM1_CHCTLR1_Output      (CH32V103_TIM1_BASE + CH32V103_TIM1_CHCTLR1_Output_OFFSET) /* read-write */
#define CH32V103_TIM1_CHCTLR1_Output_OC2CE (1 << 15) /* 00008000: Output Compare 2 clear enable */
#define CH32V103_TIM1_CHCTLR1_Output_OC2M (0x7 << 12) /* 00007000: Output Compare 2 mode */
#define CH32V103_TIM1_CHCTLR1_Output_OC2M_MASK (0x7 << 12)
#define CH32V103_TIM1_CHCTLR1_Output_OC2PE (1 << 11) /* 00000800: Output Compare 2 preload enable */
#define CH32V103_TIM1_CHCTLR1_Output_OC2FE (1 << 10) /* 00000400: Output Compare 2 fast enable */
#define CH32V103_TIM1_CHCTLR1_Output_CC2S (0x3 << 8) /* 00000300: Capture/Compare 2 selection */
#define CH32V103_TIM1_CHCTLR1_Output_CC2S_MASK (0x3 << 8)
#define CH32V103_TIM1_CHCTLR1_Output_OC1CE (1 <<  7) /* 00000080: Output Compare 1 clear enable */
#define CH32V103_TIM1_CHCTLR1_Output_OC1M (0x7 << 4) /* 00000070: Output Compare 1 mode */
#define CH32V103_TIM1_CHCTLR1_Output_OC1M_MASK (0x7 << 4)
#define CH32V103_TIM1_CHCTLR1_Output_OC1PE (1 <<  3) /* 00000008: Output Compare 1 preload enable */
#define CH32V103_TIM1_CHCTLR1_Output_OC1FE (1 <<  2) /* 00000004: Output Compare 1 fast enable */
#define CH32V103_TIM1_CHCTLR1_Output_CC1S (0x3 << 0) /* 00000003: Capture/Compare 1 selection */
#define CH32V103_TIM1_CHCTLR1_Output_CC1S_MASK (0x3 << 0)
#define CH32V103_TIM1_CHCTLR1_Input_OFFSET 0x0018
#define CH32V103_TIM1_CHCTLR1_Input       (CH32V103_TIM1_BASE + CH32V103_TIM1_CHCTLR1_Input_OFFSET) /* read-write */
#define CH32V103_TIM1_CHCTLR1_Input_IC2F  (0xf << 12) /* 0000f000: Input capture 2 filter */
#define CH32V103_TIM1_CHCTLR1_Input_IC2F_MASK (0xf << 12)
#define CH32V103_TIM1_CHCTLR1_Input_IC2PSC (0x3 << 10) /* 00000c00: Input capture 2 prescaler */
#define CH32V103_TIM1_CHCTLR1_Input_IC2PSC_MASK (0x3 << 10)
#define CH32V103_TIM1_CHCTLR1_Input_CC2S  (0x3 << 8) /* 00000300: Capture/Compare 2 selection */
#define CH32V103_TIM1_CHCTLR1_Input_CC2S_MASK (0x3 << 8)
#define CH32V103_TIM1_CHCTLR1_Input_IC1F  (0xf << 4) /* 000000f0: Input capture 1 filter */
#define CH32V103_TIM1_CHCTLR1_Input_IC1F_MASK (0xf << 4)
#define CH32V103_TIM1_CHCTLR1_Input_IC1PSC (0x3 << 2) /* 0000000c: Input capture 1 prescaler */
#define CH32V103_TIM1_CHCTLR1_Input_IC1PSC_MASK (0x3 << 2)
#define CH32V103_TIM1_CHCTLR1_Input_CC1S  (0x3 << 0) /* 00000003: Capture/Compare 1 selection */
#define CH32V103_TIM1_CHCTLR1_Input_CC1S_MASK (0x3 << 0)
#define CH32V103_TIM1_CHCTLR2_Output_OFFSET 0x001c
#define CH32V103_TIM1_CHCTLR2_Output      (CH32V103_TIM1_BASE + CH32V103_TIM1_CHCTLR2_Output_OFFSET) /* read-write */
#define CH32V103_TIM1_CHCTLR2_Output_OC4CE (1 << 15) /* 00008000: Output compare 4 clear enable */
#define CH32V103_TIM1_CHCTLR2_Output_OC4M (0x7 << 12) /* 00007000: Output compare 4 mode */
#define CH32V103_TIM1_CHCTLR2_Output_OC4M_MASK (0x7 << 12)
#define CH32V103_TIM1_CHCTLR2_Output_OC4PE (1 << 11) /* 00000800: Output compare 4 preload enable */
#define CH32V103_TIM1_CHCTLR2_Output_OC4FE (1 << 10) /* 00000400: Output compare 4 fast enable */
#define CH32V103_TIM1_CHCTLR2_Output_CC4S (0x3 << 8) /* 00000300: Capture/Compare 4 selection */
#define CH32V103_TIM1_CHCTLR2_Output_CC4S_MASK (0x3 << 8)
#define CH32V103_TIM1_CHCTLR2_Output_OC3CE (1 <<  7) /* 00000080: Output compare 3 clear enable */
#define CH32V103_TIM1_CHCTLR2_Output_OC3M (0x7 << 4) /* 00000070: Output compare 3 mode */
#define CH32V103_TIM1_CHCTLR2_Output_OC3M_MASK (0x7 << 4)
#define CH32V103_TIM1_CHCTLR2_Output_OC3PE (1 <<  3) /* 00000008: Output compare 3 preload enable */
#define CH32V103_TIM1_CHCTLR2_Output_OC3FE (1 <<  2) /* 00000004: Output compare 3 fast enable */
#define CH32V103_TIM1_CHCTLR2_Output_CC3S (0x3 << 0) /* 00000003: Capture/Compare 3 selection */
#define CH32V103_TIM1_CHCTLR2_Output_CC3S_MASK (0x3 << 0)
#define CH32V103_TIM1_CHCTLR2_Input_OFFSET 0x001c
#define CH32V103_TIM1_CHCTLR2_Input       (CH32V103_TIM1_BASE + CH32V103_TIM1_CHCTLR2_Input_OFFSET) /* read-write */
#define CH32V103_TIM1_CHCTLR2_Input_IC4F  (0xf << 12) /* 0000f000: Input capture 4 filter */
#define CH32V103_TIM1_CHCTLR2_Input_IC4F_MASK (0xf << 12)
#define CH32V103_TIM1_CHCTLR2_Input_IC4PSC (0x3 << 10) /* 00000c00: Input capture 4 prescaler */
#define CH32V103_TIM1_CHCTLR2_Input_IC4PSC_MASK (0x3 << 10)
#define CH32V103_TIM1_CHCTLR2_Input_CC4S  (0x3 << 8) /* 00000300: Capture/Compare 4 selection */
#define CH32V103_TIM1_CHCTLR2_Input_CC4S_MASK (0x3 << 8)
#define CH32V103_TIM1_CHCTLR2_Input_IC3F  (0xf << 4) /* 000000f0: Input capture 3 filter */
#define CH32V103_TIM1_CHCTLR2_Input_IC3F_MASK (0xf << 4)
#define CH32V103_TIM1_CHCTLR2_Input_IC3PSC (0x3 << 2) /* 0000000c: Input capture 3 prescaler */
#define CH32V103_TIM1_CHCTLR2_Input_IC3PSC_MASK (0x3 << 2)
#define CH32V103_TIM1_CHCTLR2_Input_CC3S  (0x3 << 0) /* 00000003: Capture/compare 3 selection */
#define CH32V103_TIM1_CHCTLR2_Input_CC3S_MASK (0x3 << 0)
#define CH32V103_TIM1_CCER_OFFSET         0x0020
#define CH32V103_TIM1_CCER                (CH32V103_TIM1_BASE + CH32V103_TIM1_CCER_OFFSET) /* read-write */
#define CH32V103_TIM1_CCER_CC4P           (1 << 13) /* 00002000: Capture/Compare 3 output Polarity */
#define CH32V103_TIM1_CCER_CC4E           (1 << 12) /* 00001000: Capture/Compare 4 output enable */
#define CH32V103_TIM1_CCER_CC3NP          (1 << 11) /* 00000800: Capture/Compare 3 output Polarity */
#define CH32V103_TIM1_CCER_CC3NE          (1 << 10) /* 00000400: Capture/Compare 3 complementary output enable */
#define CH32V103_TIM1_CCER_CC3P           (1 <<  9) /* 00000200: Capture/Compare 3 output Polarity */
#define CH32V103_TIM1_CCER_CC3E           (1 <<  8) /* 00000100: Capture/Compare 3 output enable */
#define CH32V103_TIM1_CCER_CC2NP          (1 <<  7) /* 00000080: Capture/Compare 2 output Polarity */
#define CH32V103_TIM1_CCER_CC2NE          (1 <<  6) /* 00000040: Capture/Compare 2 complementary output enable */
#define CH32V103_TIM1_CCER_CC2P           (1 <<  5) /* 00000020: Capture/Compare 2 output Polarity */
#define CH32V103_TIM1_CCER_CC2E           (1 <<  4) /* 00000010: Capture/Compare 2 output enable */
#define CH32V103_TIM1_CCER_CC1NP          (1 <<  3) /* 00000008: Capture/Compare 1 output Polarity */
#define CH32V103_TIM1_CCER_CC1NE          (1 <<  2) /* 00000004: Capture/Compare 1 complementary output enable */
#define CH32V103_TIM1_CCER_CC1P           (1 <<  1) /* 00000002: Capture/Compare 1 output Polarity */
#define CH32V103_TIM1_CCER_CC1E           (1 <<  0) /* 00000001: Capture/Compare 1 output enable */
#define CH32V103_TIM1_CNT_OFFSET          0x0024
#define CH32V103_TIM1_CNT                 (CH32V103_TIM1_BASE + CH32V103_TIM1_CNT_OFFSET) /* read-write */
#define CH32V103_TIM1_CNT_CNT             (0xffff << 0) /* 0000ffff: counter value */
#define CH32V103_TIM1_CNT_CNT_MASK        (0xffff << 0)
#define CH32V103_TIM1_PSC_OFFSET          0x0028
#define CH32V103_TIM1_PSC                 (CH32V103_TIM1_BASE + CH32V103_TIM1_PSC_OFFSET) /* read-write */
#define CH32V103_TIM1_PSC_PSC             (0xffff << 0) /* 0000ffff: Prescaler value */
#define CH32V103_TIM1_PSC_PSC_MASK        (0xffff << 0)
#define CH32V103_TIM1_ATRLR_OFFSET        0x002c
#define CH32V103_TIM1_ATRLR               (CH32V103_TIM1_BASE + CH32V103_TIM1_ATRLR_OFFSET) /* read-write */
#define CH32V103_TIM1_ATRLR_ARR           (0xffff << 0) /* 0000ffff: Auto-reload value */
#define CH32V103_TIM1_ATRLR_ARR_MASK      (0xffff << 0)
#define CH32V103_TIM1_CH1CVR_OFFSET       0x0034
#define CH32V103_TIM1_CH1CVR              (CH32V103_TIM1_BASE + CH32V103_TIM1_CH1CVR_OFFSET) /* read-write */
#define CH32V103_TIM1_CH1CVR_CCR1         (0xffff << 0) /* 0000ffff: Capture/Compare 1 value */
#define CH32V103_TIM1_CH1CVR_CCR1_MASK    (0xffff << 0)
#define CH32V103_TIM1_CH2CVR_OFFSET       0x0038
#define CH32V103_TIM1_CH2CVR              (CH32V103_TIM1_BASE + CH32V103_TIM1_CH2CVR_OFFSET) /* read-write */
#define CH32V103_TIM1_CH2CVR_CCR2         (0xffff << 0) /* 0000ffff: Capture/Compare 2 value */
#define CH32V103_TIM1_CH2CVR_CCR2_MASK    (0xffff << 0)
#define CH32V103_TIM1_CH3CVR_OFFSET       0x003c
#define CH32V103_TIM1_CH3CVR              (CH32V103_TIM1_BASE + CH32V103_TIM1_CH3CVR_OFFSET) /* read-write */
#define CH32V103_TIM1_CH3CVR_CCR3         (0xffff << 0) /* 0000ffff: Capture/Compare value */
#define CH32V103_TIM1_CH3CVR_CCR3_MASK    (0xffff << 0)
#define CH32V103_TIM1_CH4CVR_OFFSET       0x0040
#define CH32V103_TIM1_CH4CVR              (CH32V103_TIM1_BASE + CH32V103_TIM1_CH4CVR_OFFSET) /* read-write */
#define CH32V103_TIM1_CH4CVR_CCR4         (0xffff << 0) /* 0000ffff: Capture/Compare value */
#define CH32V103_TIM1_CH4CVR_CCR4_MASK    (0xffff << 0)
#define CH32V103_TIM1_DMACFGR_OFFSET      0x0048
#define CH32V103_TIM1_DMACFGR             (CH32V103_TIM1_BASE + CH32V103_TIM1_DMACFGR_OFFSET) /* read-write */
#define CH32V103_TIM1_DMACFGR_DBL         (0x1f << 8) /* 00001f00: DMA burst length */
#define CH32V103_TIM1_DMACFGR_DBL_MASK    (0x1f << 8)
#define CH32V103_TIM1_DMACFGR_DBA         (0x1f << 0) /* 0000001f: DMA base address */
#define CH32V103_TIM1_DMACFGR_DBA_MASK    (0x1f << 0)
#define CH32V103_TIM1_DMAR_OFFSET         0x004c
#define CH32V103_TIM1_DMAR                (CH32V103_TIM1_BASE + CH32V103_TIM1_DMAR_OFFSET) /* read-write */
#define CH32V103_TIM1_DMAR_DMAB           (0xffff << 0) /* 0000ffff: DMA register for burst accesses */
#define CH32V103_TIM1_DMAR_DMAB_MASK      (0xffff << 0)
#define CH32V103_TIM1_RPTCR_OFFSET        0x0030
#define CH32V103_TIM1_RPTCR               (CH32V103_TIM1_BASE + CH32V103_TIM1_RPTCR_OFFSET) /* read-write */
#define CH32V103_TIM1_RPTCR_REP           (0xff << 0) /* 000000ff: Repetition counter value */
#define CH32V103_TIM1_RPTCR_REP_MASK      (0xff << 0)
#define CH32V103_TIM1_BDTR_OFFSET         0x0044
#define CH32V103_TIM1_BDTR                (CH32V103_TIM1_BASE + CH32V103_TIM1_BDTR_OFFSET) /* read-write */
#define CH32V103_TIM1_BDTR_MOE            (1 << 15) /* 00008000: Main output enable */
#define CH32V103_TIM1_BDTR_AOE            (1 << 14) /* 00004000: Automatic output enable */
#define CH32V103_TIM1_BDTR_BKP            (1 << 13) /* 00002000: Break polarity */
#define CH32V103_TIM1_BDTR_BKE            (1 << 12) /* 00001000: Break enable */
#define CH32V103_TIM1_BDTR_OSSR           (1 << 11) /* 00000800: Off-state selection for Run mode */
#define CH32V103_TIM1_BDTR_OSSI           (1 << 10) /* 00000400: Off-state selection for Idle mode */
#define CH32V103_TIM1_BDTR_LOCK           (0x3 << 8) /* 00000300: Lock configuration */
#define CH32V103_TIM1_BDTR_LOCK_MASK      (0x3 << 8)
#define CH32V103_TIM1_BDTR_DTG            (0xff << 0) /* 000000ff: Dead-time generator setup */
#define CH32V103_TIM1_BDTR_DTG_MASK       (0xff << 0)

/* TIM2 - General purpose timer */
#define CH32V103_TIM2_BASE                0x40000000
#define CH32V103_TIM2_CTLR1_OFFSET        0x0000
#define CH32V103_TIM2_CTLR1               (CH32V103_TIM2_BASE + CH32V103_TIM2_CTLR1_OFFSET) /* read-write */
#define CH32V103_TIM2_CTLR1_CKD           (0x3 << 8) /* 00000300: Clock division */
#define CH32V103_TIM2_CTLR1_CKD_MASK      (0x3 << 8)
#define CH32V103_TIM2_CTLR1_ARPE          (1 <<  7) /* 00000080: Auto-reload preload enable */
#define CH32V103_TIM2_CTLR1_CMS           (0x3 << 5) /* 00000060: Center-aligned mode selection */
#define CH32V103_TIM2_CTLR1_CMS_MASK      (0x3 << 5)
#define CH32V103_TIM2_CTLR1_DIR           (1 <<  4) /* 00000010: Direction */
#define CH32V103_TIM2_CTLR1_OPM           (1 <<  3) /* 00000008: One-pulse mode */
#define CH32V103_TIM2_CTLR1_URS           (1 <<  2) /* 00000004: Update request source */
#define CH32V103_TIM2_CTLR1_UDIS          (1 <<  1) /* 00000002: Update disable */
#define CH32V103_TIM2_CTLR1_CEN           (1 <<  0) /* 00000001: Counter enable */
#define CH32V103_TIM2_CTLR2_OFFSET        0x0004
#define CH32V103_TIM2_CTLR2               (CH32V103_TIM2_BASE + CH32V103_TIM2_CTLR2_OFFSET) /* read-write */
#define CH32V103_TIM2_CTLR2_TI1S          (1 <<  7) /* 00000080: TI1 selection */
#define CH32V103_TIM2_CTLR2_MMS           (0x7 << 4) /* 00000070: Master mode selection */
#define CH32V103_TIM2_CTLR2_MMS_MASK      (0x7 << 4)
#define CH32V103_TIM2_CTLR2_CCDS          (1 <<  3) /* 00000008: Capture/compare DMA selection */
#define CH32V103_TIM2_CTLR2_CCUS          (1 <<  2) /* 00000004: Capture/compare control update selection */
#define CH32V103_TIM2_CTLR2_CCPC          (1 <<  0) /* 00000001: Capture/compare preloaded control */
#define CH32V103_TIM2_SMCFGR_OFFSET       0x0008
#define CH32V103_TIM2_SMCFGR              (CH32V103_TIM2_BASE + CH32V103_TIM2_SMCFGR_OFFSET) /* read-write */
#define CH32V103_TIM2_SMCFGR_ETP          (1 << 15) /* 00008000: External trigger polarity */
#define CH32V103_TIM2_SMCFGR_ECE          (1 << 14) /* 00004000: External clock enable */
#define CH32V103_TIM2_SMCFGR_ETPS         (0x3 << 12) /* 00003000: External trigger prescaler */
#define CH32V103_TIM2_SMCFGR_ETPS_MASK    (0x3 << 12)
#define CH32V103_TIM2_SMCFGR_ETF          (0xf << 8) /* 00000f00: External trigger filter */
#define CH32V103_TIM2_SMCFGR_ETF_MASK     (0xf << 8)
#define CH32V103_TIM2_SMCFGR_MSM          (1 <<  7) /* 00000080: Master/Slave mode */
#define CH32V103_TIM2_SMCFGR_TS           (0x7 << 4) /* 00000070: Trigger selection */
#define CH32V103_TIM2_SMCFGR_TS_MASK      (0x7 << 4)
#define CH32V103_TIM2_SMCFGR_SMS          (0x7 << 0) /* 00000007: Slave mode selection */
#define CH32V103_TIM2_SMCFGR_SMS_MASK     (0x7 << 0)
#define CH32V103_TIM2_DMAINTENR_OFFSET    0x000c
#define CH32V103_TIM2_DMAINTENR           (CH32V103_TIM2_BASE + CH32V103_TIM2_DMAINTENR_OFFSET) /* read-write */
#define CH32V103_TIM2_DMAINTENR_TDE       (1 << 14) /* 00004000: Trigger DMA request enable */
#define CH32V103_TIM2_DMAINTENR_CC4DE     (1 << 12) /* 00001000: Capture/Compare 4 DMA request enable */
#define CH32V103_TIM2_DMAINTENR_CC3DE     (1 << 11) /* 00000800: Capture/Compare 3 DMA request enable */
#define CH32V103_TIM2_DMAINTENR_CC2DE     (1 << 10) /* 00000400: Capture/Compare 2 DMA request enable */
#define CH32V103_TIM2_DMAINTENR_CC1DE     (1 <<  9) /* 00000200: Capture/Compare 1 DMA request enable */
#define CH32V103_TIM2_DMAINTENR_UDE       (1 <<  8) /* 00000100: Update DMA request enable */
#define CH32V103_TIM2_DMAINTENR_TIE       (1 <<  6) /* 00000040: Trigger interrupt enable */
#define CH32V103_TIM2_DMAINTENR_CC4IE     (1 <<  4) /* 00000010: Capture/Compare 4 interrupt enable */
#define CH32V103_TIM2_DMAINTENR_CC3IE     (1 <<  3) /* 00000008: Capture/Compare 3 interrupt enable */
#define CH32V103_TIM2_DMAINTENR_CC2IE     (1 <<  2) /* 00000004: Capture/Compare 2 interrupt enable */
#define CH32V103_TIM2_DMAINTENR_CC1IE     (1 <<  1) /* 00000002: Capture/Compare 1 interrupt enable */
#define CH32V103_TIM2_DMAINTENR_UIE       (1 <<  0) /* 00000001: Update interrupt enable */
#define CH32V103_TIM2_INTFR_OFFSET        0x0010
#define CH32V103_TIM2_INTFR               (CH32V103_TIM2_BASE + CH32V103_TIM2_INTFR_OFFSET) /* write-only */
#define CH32V103_TIM2_INTFR_CC4OF         (1 << 12) /* 00001000: Capture/Compare 4 overcapture flag */
#define CH32V103_TIM2_INTFR_CC3OF         (1 << 11) /* 00000800: Capture/Compare 3 overcapture flag */
#define CH32V103_TIM2_INTFR_CC2OF         (1 << 10) /* 00000400: Capture/compare 2 overcapture flag */
#define CH32V103_TIM2_INTFR_CC1OF         (1 <<  9) /* 00000200: Capture/Compare 1 overcapture flag */
#define CH32V103_TIM2_INTFR_TIF           (1 <<  6) /* 00000040: Trigger interrupt flag */
#define CH32V103_TIM2_INTFR_CC4IF         (1 <<  4) /* 00000010: Capture/Compare 4 interrupt flag */
#define CH32V103_TIM2_INTFR_CC3IF         (1 <<  3) /* 00000008: Capture/Compare 3 interrupt flag */
#define CH32V103_TIM2_INTFR_CC2IF         (1 <<  2) /* 00000004: Capture/Compare 2 interrupt flag */
#define CH32V103_TIM2_INTFR_CC1IF         (1 <<  1) /* 00000002: Capture/compare 1 interrupt flag */
#define CH32V103_TIM2_INTFR_UIF           (1 <<  0) /* 00000001: Update interrupt flag */
#define CH32V103_TIM2_SWEVGR_OFFSET       0x0014
#define CH32V103_TIM2_SWEVGR              (CH32V103_TIM2_BASE + CH32V103_TIM2_SWEVGR_OFFSET) /* write-only */
#define CH32V103_TIM2_SWEVGR_BG           (1 <<  7) /* 00000080: Break generation */
#define CH32V103_TIM2_SWEVGR_TG           (1 <<  6) /* 00000040: Trigger generation */
#define CH32V103_TIM2_SWEVGR_COMG         (1 <<  5) /* 00000020: Capture/Compare control update generation */
#define CH32V103_TIM2_SWEVGR_CC4G         (1 <<  4) /* 00000010: Capture/compare 4 generation */
#define CH32V103_TIM2_SWEVGR_CC3G         (1 <<  3) /* 00000008: Capture/compare 3 generation */
#define CH32V103_TIM2_SWEVGR_CC2G         (1 <<  2) /* 00000004: Capture/compare 2 generation */
#define CH32V103_TIM2_SWEVGR_CC1G         (1 <<  1) /* 00000002: Capture/compare 1 generation */
#define CH32V103_TIM2_SWEVGR_UG           (1 <<  0) /* 00000001: Update generation */
#define CH32V103_TIM2_CHCTLR1_Output_OFFSET 0x0018
#define CH32V103_TIM2_CHCTLR1_Output      (CH32V103_TIM2_BASE + CH32V103_TIM2_CHCTLR1_Output_OFFSET) /* read-write */
#define CH32V103_TIM2_CHCTLR1_Output_OC2CE (1 << 15) /* 00008000: Output compare 2 clear enable */
#define CH32V103_TIM2_CHCTLR1_Output_OC2M (0x7 << 12) /* 00007000: Output compare 2 mode */
#define CH32V103_TIM2_CHCTLR1_Output_OC2M_MASK (0x7 << 12)
#define CH32V103_TIM2_CHCTLR1_Output_OC2PE (1 << 11) /* 00000800: Output compare 2 preload enable */
#define CH32V103_TIM2_CHCTLR1_Output_OC2FE (1 << 10) /* 00000400: Output compare 2 fast enable */
#define CH32V103_TIM2_CHCTLR1_Output_CC2S (0x3 << 8) /* 00000300: Capture/Compare 2 selection */
#define CH32V103_TIM2_CHCTLR1_Output_CC2S_MASK (0x3 << 8)
#define CH32V103_TIM2_CHCTLR1_Output_OC1CE (1 <<  7) /* 00000080: Output compare 1 clear enable */
#define CH32V103_TIM2_CHCTLR1_Output_OC1M (0x7 << 4) /* 00000070: Output compare 1 mode */
#define CH32V103_TIM2_CHCTLR1_Output_OC1M_MASK (0x7 << 4)
#define CH32V103_TIM2_CHCTLR1_Output_OC1PE (1 <<  3) /* 00000008: Output compare 1 preload enable */
#define CH32V103_TIM2_CHCTLR1_Output_OC1FE (1 <<  2) /* 00000004: Output compare 1 fast enable */
#define CH32V103_TIM2_CHCTLR1_Output_CC1S (0x3 << 0) /* 00000003: Capture/Compare 1 selection */
#define CH32V103_TIM2_CHCTLR1_Output_CC1S_MASK (0x3 << 0)
#define CH32V103_TIM2_CHCTLR1_Input_OFFSET 0x0018
#define CH32V103_TIM2_CHCTLR1_Input       (CH32V103_TIM2_BASE + CH32V103_TIM2_CHCTLR1_Input_OFFSET) /* read-write */
#define CH32V103_TIM2_CHCTLR1_Input_IC2F  (0xf << 12) /* 0000f000: Input capture 2 filter */
#define CH32V103_TIM2_CHCTLR1_Input_IC2F_MASK (0xf << 12)
#define CH32V103_TIM2_CHCTLR1_Input_IC2PSC (0x3 << 10) /* 00000c00: Input capture 2 prescaler */
#define CH32V103_TIM2_CHCTLR1_Input_IC2PSC_MASK (0x3 << 10)
#define CH32V103_TIM2_CHCTLR1_Input_CC2S  (0x3 << 8) /* 00000300: Capture/compare 2 selection */
#define CH32V103_TIM2_CHCTLR1_Input_CC2S_MASK (0x3 << 8)
#define CH32V103_TIM2_CHCTLR1_Input_IC1F  (0xf << 4) /* 000000f0: Input capture 1 filter */
#define CH32V103_TIM2_CHCTLR1_Input_IC1F_MASK (0xf << 4)
#define CH32V103_TIM2_CHCTLR1_Input_IC1PSC (0x3 << 2) /* 0000000c: Input capture 1 prescaler */
#define CH32V103_TIM2_CHCTLR1_Input_IC1PSC_MASK (0x3 << 2)
#define CH32V103_TIM2_CHCTLR1_Input_CC1S  (0x3 << 0) /* 00000003: Capture/Compare 1 selection */
#define CH32V103_TIM2_CHCTLR1_Input_CC1S_MASK (0x3 << 0)
#define CH32V103_TIM2_CHCTLR2_Output_OFFSET 0x001c
#define CH32V103_TIM2_CHCTLR2_Output      (CH32V103_TIM2_BASE + CH32V103_TIM2_CHCTLR2_Output_OFFSET) /* read-write */
#define CH32V103_TIM2_CHCTLR2_Output_OC4CE (1 << 15) /* 00008000: Output compare 4 clear enable */
#define CH32V103_TIM2_CHCTLR2_Output_OC4M (0x7 << 12) /* 00007000: Output compare 4 mode */
#define CH32V103_TIM2_CHCTLR2_Output_OC4M_MASK (0x7 << 12)
#define CH32V103_TIM2_CHCTLR2_Output_OC4PE (1 << 11) /* 00000800: Output compare 4 preload enable */
#define CH32V103_TIM2_CHCTLR2_Output_OC4FE (1 << 10) /* 00000400: Output compare 4 fast enable */
#define CH32V103_TIM2_CHCTLR2_Output_CC4S (0x3 << 8) /* 00000300: Capture/Compare 4 selection */
#define CH32V103_TIM2_CHCTLR2_Output_CC4S_MASK (0x3 << 8)
#define CH32V103_TIM2_CHCTLR2_Output_OC3CE (1 <<  7) /* 00000080: Output compare 3 clear enable */
#define CH32V103_TIM2_CHCTLR2_Output_OC3M (0x7 << 4) /* 00000070: Output compare 3 mode */
#define CH32V103_TIM2_CHCTLR2_Output_OC3M_MASK (0x7 << 4)
#define CH32V103_TIM2_CHCTLR2_Output_OC3PE (1 <<  3) /* 00000008: Output compare 3 preload enable */
#define CH32V103_TIM2_CHCTLR2_Output_OC3FE (1 <<  2) /* 00000004: Output compare 3 fast enable */
#define CH32V103_TIM2_CHCTLR2_Output_CC3S (0x3 << 0) /* 00000003: Capture/Compare 3 selection */
#define CH32V103_TIM2_CHCTLR2_Output_CC3S_MASK (0x3 << 0)
#define CH32V103_TIM2_CHCTLR2_Input_OFFSET 0x001c
#define CH32V103_TIM2_CHCTLR2_Input       (CH32V103_TIM2_BASE + CH32V103_TIM2_CHCTLR2_Input_OFFSET) /* read-write */
#define CH32V103_TIM2_CHCTLR2_Input_IC4F  (0xf << 12) /* 0000f000: Input capture 4 filter */
#define CH32V103_TIM2_CHCTLR2_Input_IC4F_MASK (0xf << 12)
#define CH32V103_TIM2_CHCTLR2_Input_IC4PSC (0x3 << 10) /* 00000c00: Input capture 4 prescaler */
#define CH32V103_TIM2_CHCTLR2_Input_IC4PSC_MASK (0x3 << 10)
#define CH32V103_TIM2_CHCTLR2_Input_CC4S  (0x3 << 8) /* 00000300: Capture/Compare 4 selection */
#define CH32V103_TIM2_CHCTLR2_Input_CC4S_MASK (0x3 << 8)
#define CH32V103_TIM2_CHCTLR2_Input_IC3F  (0xf << 4) /* 000000f0: Input capture 3 filter */
#define CH32V103_TIM2_CHCTLR2_Input_IC3F_MASK (0xf << 4)
#define CH32V103_TIM2_CHCTLR2_Input_IC3PSC (0x3 << 2) /* 0000000c: Input capture 3 prescaler */
#define CH32V103_TIM2_CHCTLR2_Input_IC3PSC_MASK (0x3 << 2)
#define CH32V103_TIM2_CHCTLR2_Input_CC3S  (0x3 << 0) /* 00000003: Capture/Compare 3 selection */
#define CH32V103_TIM2_CHCTLR2_Input_CC3S_MASK (0x3 << 0)
#define CH32V103_TIM2_CCER_OFFSET         0x0020
#define CH32V103_TIM2_CCER                (CH32V103_TIM2_BASE + CH32V103_TIM2_CCER_OFFSET) /* read-write */
#define CH32V103_TIM2_CCER_CC4P           (1 << 13) /* 00002000: Capture/Compare 3 output Polarity */
#define CH32V103_TIM2_CCER_CC4E           (1 << 12) /* 00001000: Capture/Compare 4 output enable */
#define CH32V103_TIM2_CCER_CC3P           (1 <<  9) /* 00000200: Capture/Compare 3 output Polarity */
#define CH32V103_TIM2_CCER_CC3E           (1 <<  8) /* 00000100: Capture/Compare 3 output enable */
#define CH32V103_TIM2_CCER_CC2P           (1 <<  5) /* 00000020: Capture/Compare 2 output Polarity */
#define CH32V103_TIM2_CCER_CC2E           (1 <<  4) /* 00000010: Capture/Compare 2 output enable */
#define CH32V103_TIM2_CCER_CC1P           (1 <<  1) /* 00000002: Capture/Compare 1 output Polarity */
#define CH32V103_TIM2_CCER_CC1E           (1 <<  0) /* 00000001: Capture/Compare 1 output enable */
#define CH32V103_TIM2_CNT_OFFSET          0x0024
#define CH32V103_TIM2_CNT                 (CH32V103_TIM2_BASE + CH32V103_TIM2_CNT_OFFSET) /* read-write */
#define CH32V103_TIM2_CNT_CNT             (0xffff << 0) /* 0000ffff: counter value */
#define CH32V103_TIM2_CNT_CNT_MASK        (0xffff << 0)
#define CH32V103_TIM2_PSC_OFFSET          0x0028
#define CH32V103_TIM2_PSC                 (CH32V103_TIM2_BASE + CH32V103_TIM2_PSC_OFFSET) /* read-write */
#define CH32V103_TIM2_PSC_PSC             (0xffff << 0) /* 0000ffff: Prescaler value */
#define CH32V103_TIM2_PSC_PSC_MASK        (0xffff << 0)
#define CH32V103_TIM2_ATRLR_OFFSET        0x002c
#define CH32V103_TIM2_ATRLR               (CH32V103_TIM2_BASE + CH32V103_TIM2_ATRLR_OFFSET) /* read-write */
#define CH32V103_TIM2_ATRLR_ARR           (0xffff << 0) /* 0000ffff: Auto-reload value */
#define CH32V103_TIM2_ATRLR_ARR_MASK      (0xffff << 0)
#define CH32V103_TIM2_CH1CVR_OFFSET       0x0034
#define CH32V103_TIM2_CH1CVR              (CH32V103_TIM2_BASE + CH32V103_TIM2_CH1CVR_OFFSET) /* read-write */
#define CH32V103_TIM2_CH1CVR_CCR1         (0xffff << 0) /* 0000ffff: Capture/Compare 1 value */
#define CH32V103_TIM2_CH1CVR_CCR1_MASK    (0xffff << 0)
#define CH32V103_TIM2_CH2CVR_OFFSET       0x0038
#define CH32V103_TIM2_CH2CVR              (CH32V103_TIM2_BASE + CH32V103_TIM2_CH2CVR_OFFSET) /* read-write */
#define CH32V103_TIM2_CH2CVR_CCR2         (0xffff << 0) /* 0000ffff: Capture/Compare 2 value */
#define CH32V103_TIM2_CH2CVR_CCR2_MASK    (0xffff << 0)
#define CH32V103_TIM2_CH3CVR_OFFSET       0x003c
#define CH32V103_TIM2_CH3CVR              (CH32V103_TIM2_BASE + CH32V103_TIM2_CH3CVR_OFFSET) /* read-write */
#define CH32V103_TIM2_CH3CVR_CCR3         (0xffff << 0) /* 0000ffff: Capture/Compare value */
#define CH32V103_TIM2_CH3CVR_CCR3_MASK    (0xffff << 0)
#define CH32V103_TIM2_CH4CVR_OFFSET       0x0040
#define CH32V103_TIM2_CH4CVR              (CH32V103_TIM2_BASE + CH32V103_TIM2_CH4CVR_OFFSET) /* read-write */
#define CH32V103_TIM2_CH4CVR_CCR4         (0xffff << 0) /* 0000ffff: Capture/Compare value */
#define CH32V103_TIM2_CH4CVR_CCR4_MASK    (0xffff << 0)
#define CH32V103_TIM2_DMACFGR_OFFSET      0x0048
#define CH32V103_TIM2_DMACFGR             (CH32V103_TIM2_BASE + CH32V103_TIM2_DMACFGR_OFFSET) /* read-write */
#define CH32V103_TIM2_DMACFGR_DBL         (0x1f << 8) /* 00001f00: DMA burst length */
#define CH32V103_TIM2_DMACFGR_DBL_MASK    (0x1f << 8)
#define CH32V103_TIM2_DMACFGR_DBA         (0x1f << 0) /* 0000001f: DMA base address */
#define CH32V103_TIM2_DMACFGR_DBA_MASK    (0x1f << 0)
#define CH32V103_TIM2_DMAR_OFFSET         0x004c
#define CH32V103_TIM2_DMAR                (CH32V103_TIM2_BASE + CH32V103_TIM2_DMAR_OFFSET) /* read-write */
#define CH32V103_TIM2_DMAR_DMAB           (0xffff << 0) /* 0000ffff: DMA register for burst accesses */
#define CH32V103_TIM2_DMAR_DMAB_MASK      (0xffff << 0)

/* I2C1 - Inter integrated circuit */
#define CH32V103_I2C1_BASE                0x40005400
#define CH32V103_I2C1_CTLR1_OFFSET        0x0000
#define CH32V103_I2C1_CTLR1               (CH32V103_I2C1_BASE + CH32V103_I2C1_CTLR1_OFFSET) /* read-write */
#define CH32V103_I2C1_CTLR1_SWRST         (1 << 15) /* 00008000: Software reset */
#define CH32V103_I2C1_CTLR1_ALERT         (1 << 13) /* 00002000: SMBus alert */
#define CH32V103_I2C1_CTLR1_PEC           (1 << 12) /* 00001000: Packet error checking */
#define CH32V103_I2C1_CTLR1_POS           (1 << 11) /* 00000800: Acknowledge/PEC Position (for data reception) */
#define CH32V103_I2C1_CTLR1_ACK           (1 << 10) /* 00000400: Acknowledge enable */
#define CH32V103_I2C1_CTLR1_STOP          (1 <<  9) /* 00000200: Stop generation */
#define CH32V103_I2C1_CTLR1_START         (1 <<  8) /* 00000100: Start generation */
#define CH32V103_I2C1_CTLR1_NOSTRETCH     (1 <<  7) /* 00000080: Clock stretching disable (Slave mode) */
#define CH32V103_I2C1_CTLR1_ENGC          (1 <<  6) /* 00000040: General call enable */
#define CH32V103_I2C1_CTLR1_ENPEC         (1 <<  5) /* 00000020: PEC enable */
#define CH32V103_I2C1_CTLR1_ENARP         (1 <<  4) /* 00000010: ARP enable */
#define CH32V103_I2C1_CTLR1_SMBTYPE       (1 <<  3) /* 00000008: SMBus type */
#define CH32V103_I2C1_CTLR1_SMBUS         (1 <<  1) /* 00000002: SMBus mode */
#define CH32V103_I2C1_CTLR1_PE            (1 <<  0) /* 00000001: Peripheral enable */
#define CH32V103_I2C1_CTLR2_OFFSET        0x0004
#define CH32V103_I2C1_CTLR2               (CH32V103_I2C1_BASE + CH32V103_I2C1_CTLR2_OFFSET) /* read-write */
#define CH32V103_I2C1_CTLR2_LAST          (1 << 12) /* 00001000: DMA last transfer */
#define CH32V103_I2C1_CTLR2_DMAEN         (1 << 11) /* 00000800: DMA requests enable */
#define CH32V103_I2C1_CTLR2_ITBUFEN       (1 << 10) /* 00000400: Buffer interrupt enable */
#define CH32V103_I2C1_CTLR2_ITEVTEN       (1 <<  9) /* 00000200: Event interrupt enable */
#define CH32V103_I2C1_CTLR2_ITERREN       (1 <<  8) /* 00000100: Error interrupt enable */
#define CH32V103_I2C1_CTLR2_FREQ          (0x3f << 0) /* 0000003f: Peripheral clock frequency */
#define CH32V103_I2C1_CTLR2_FREQ_MASK     (0x3f << 0)
#define CH32V103_I2C1_OADDR1_OFFSET       0x0008
#define CH32V103_I2C1_OADDR1              (CH32V103_I2C1_BASE + CH32V103_I2C1_OADDR1_OFFSET) /* read-write */
#define CH32V103_I2C1_OADDR1_ADDMODE      (1 << 15) /* 00008000: Addressing mode (slave mode) */
#define CH32V103_I2C1_OADDR1_MUST1        (1 << 14) /* 00004000: must set 1 bit */
#define CH32V103_I2C1_OADDR1_ADD9_8       (0x3 << 8) /* 00000300: Interface address */
#define CH32V103_I2C1_OADDR1_ADD9_8_MASK  (0x3 << 8)
#define CH32V103_I2C1_OADDR1_ADD7_1       (0x7f << 1) /* 000000fe: Interface address */
#define CH32V103_I2C1_OADDR1_ADD7_1_MASK  (0x7f << 1)
#define CH32V103_I2C1_OADDR1_ADD0         (1 <<  0) /* 00000001: Interface address */
#define CH32V103_I2C1_OADDR2_OFFSET       0x000c
#define CH32V103_I2C1_OADDR2              (CH32V103_I2C1_BASE + CH32V103_I2C1_OADDR2_OFFSET) /* read-write */
#define CH32V103_I2C1_OADDR2_ADD2         (0x7f << 1) /* 000000fe: Interface address */
#define CH32V103_I2C1_OADDR2_ADD2_MASK    (0x7f << 1)
#define CH32V103_I2C1_OADDR2_ENDUAL       (1 <<  0) /* 00000001: Dual addressing mode enable */
#define CH32V103_I2C1_DATAR_OFFSET        0x0010
#define CH32V103_I2C1_DATAR               (CH32V103_I2C1_BASE + CH32V103_I2C1_DATAR_OFFSET) /* read-write */
#define CH32V103_I2C1_DATAR_DR            (0xff << 0) /* 000000ff: 8-bit data register */
#define CH32V103_I2C1_DATAR_DR_MASK       (0xff << 0)
#define CH32V103_I2C1_STAR1_OFFSET        0x0014
#define CH32V103_I2C1_STAR1               (CH32V103_I2C1_BASE + CH32V103_I2C1_STAR1_OFFSET)
#define CH32V103_I2C1_STAR1_SMBALERT      (1 << 15) /* 00008000: SMBus alert */
#define CH32V103_I2C1_STAR1_TIMEOUT       (1 << 14) /* 00004000: Timeout or Tlow error */
#define CH32V103_I2C1_STAR1_PECERR        (1 << 12) /* 00001000: PEC Error in reception */
#define CH32V103_I2C1_STAR1_OVR           (1 << 11) /* 00000800: Overrun/Underrun */
#define CH32V103_I2C1_STAR1_AF            (1 << 10) /* 00000400: Acknowledge failure */
#define CH32V103_I2C1_STAR1_ARLO          (1 <<  9) /* 00000200: Arbitration lost (master mode) */
#define CH32V103_I2C1_STAR1_BERR          (1 <<  8) /* 00000100: Bus error */
#define CH32V103_I2C1_STAR1_TxE           (1 <<  7) /* 00000080: Data register empty (transmitters) */
#define CH32V103_I2C1_STAR1_RxNE          (1 <<  6) /* 00000040: Data register not empty (receivers) */
#define CH32V103_I2C1_STAR1_STOPF         (1 <<  4) /* 00000010: Stop detection (slave mode) */
#define CH32V103_I2C1_STAR1_ADD10         (1 <<  3) /* 00000008: 10-bit header sent (Master mode) */
#define CH32V103_I2C1_STAR1_BTF           (1 <<  2) /* 00000004: Byte transfer finished */
#define CH32V103_I2C1_STAR1_ADDR          (1 <<  1) /* 00000002: Address sent (master mode)/matched (slave mode) */
#define CH32V103_I2C1_STAR1_SB            (1 <<  0) /* 00000001: Start bit (Master mode) */
#define CH32V103_I2C1_STAR2_OFFSET        0x0018
#define CH32V103_I2C1_STAR2               (CH32V103_I2C1_BASE + CH32V103_I2C1_STAR2_OFFSET) /* read-only */
#define CH32V103_I2C1_STAR2_PEC           (0xff << 8) /* 0000ff00: acket error checking register */
#define CH32V103_I2C1_STAR2_PEC_MASK      (0xff << 8)
#define CH32V103_I2C1_STAR2_DUALF         (1 <<  7) /* 00000080: Dual flag (Slave mode) */
#define CH32V103_I2C1_STAR2_SMBHOST       (1 <<  6) /* 00000040: SMBus host header (Slave mode) */
#define CH32V103_I2C1_STAR2_SMBDEFAULT    (1 <<  5) /* 00000020: SMBus device default address (Slave mode) */
#define CH32V103_I2C1_STAR2_GENCALL       (1 <<  4) /* 00000010: General call address (Slave mode) */
#define CH32V103_I2C1_STAR2_TRA           (1 <<  2) /* 00000004: Transmitter/receiver */
#define CH32V103_I2C1_STAR2_BUSY          (1 <<  1) /* 00000002: Bus busy */
#define CH32V103_I2C1_STAR2_MSL           (1 <<  0) /* 00000001: Master/slave */
#define CH32V103_I2C1_CKCFGR_OFFSET       0x001c
#define CH32V103_I2C1_CKCFGR              (CH32V103_I2C1_BASE + CH32V103_I2C1_CKCFGR_OFFSET) /* read-write */
#define CH32V103_I2C1_CKCFGR_F_S          (1 << 15) /* 00008000: I2C master mode selection */
#define CH32V103_I2C1_CKCFGR_DUTY         (1 << 14) /* 00004000: Fast mode duty cycle */
#define CH32V103_I2C1_CKCFGR_CCR          (0xfff << 0) /* 00000fff: Clock control register in Fast/Standard mode (Master mode) */
#define CH32V103_I2C1_CKCFGR_CCR_MASK     (0xfff << 0)
#define CH32V103_I2C1_RTR_OFFSET          0x0020
#define CH32V103_I2C1_RTR                 (CH32V103_I2C1_BASE + CH32V103_I2C1_RTR_OFFSET) /* read-write */
#define CH32V103_I2C1_RTR_TRISE           (0x3f << 0) /* 0000003f: Maximum rise time in Fast/Standard mode (Master mode) */
#define CH32V103_I2C1_RTR_TRISE_MASK      (0x3f << 0)

/* SPI1 - Serial peripheral interface */
#define CH32V103_SPI1_BASE                0x40013000
#define CH32V103_SPI1_CTLR1_OFFSET        0x0000
#define CH32V103_SPI1_CTLR1               (CH32V103_SPI1_BASE + CH32V103_SPI1_CTLR1_OFFSET) /* read-write */
#define CH32V103_SPI1_CTLR1_BIDIMODE      (1 << 15) /* 00008000: Bidirectional data mode enable */
#define CH32V103_SPI1_CTLR1_BIDIOE        (1 << 14) /* 00004000: Output enable in bidirectional mode */
#define CH32V103_SPI1_CTLR1_CRCEN         (1 << 13) /* 00002000: Hardware CRC calculation enable */
#define CH32V103_SPI1_CTLR1_CRCNEXT       (1 << 12) /* 00001000: CRC transfer next */
#define CH32V103_SPI1_CTLR1_DFF           (1 << 11) /* 00000800: Data frame format */
#define CH32V103_SPI1_CTLR1_RXONLY        (1 << 10) /* 00000400: Receive only */
#define CH32V103_SPI1_CTLR1_SSM           (1 <<  9) /* 00000200: Software slave management */
#define CH32V103_SPI1_CTLR1_SSI           (1 <<  8) /* 00000100: Internal slave select */
#define CH32V103_SPI1_CTLR1_LSBFIRST      (1 <<  7) /* 00000080: Frame format */
#define CH32V103_SPI1_CTLR1_SPE           (1 <<  6) /* 00000040: SPI enable */
#define CH32V103_SPI1_CTLR1_BR            (0x7 << 3) /* 00000038: Baud rate control */
#define CH32V103_SPI1_CTLR1_BR_MASK       (0x7 << 3)
#define CH32V103_SPI1_CTLR1_MSTR          (1 <<  2) /* 00000004: Master selection */
#define CH32V103_SPI1_CTLR1_CPOL          (1 <<  1) /* 00000002: Clock polarity */
#define CH32V103_SPI1_CTLR1_CPHA          (1 <<  0) /* 00000001: Clock phase */
#define CH32V103_SPI1_CTLR2_OFFSET        0x0004
#define CH32V103_SPI1_CTLR2               (CH32V103_SPI1_BASE + CH32V103_SPI1_CTLR2_OFFSET) /* read-write */
#define CH32V103_SPI1_CTLR2_TXEIE         (1 <<  7) /* 00000080: Tx buffer empty interrupt enable */
#define CH32V103_SPI1_CTLR2_RXNEIE        (1 <<  6) /* 00000040: RX buffer not empty interrupt enable */
#define CH32V103_SPI1_CTLR2_ERRIE         (1 <<  5) /* 00000020: Error interrupt enable */
#define CH32V103_SPI1_CTLR2_SSOE          (1 <<  2) /* 00000004: SS output enable */
#define CH32V103_SPI1_CTLR2_TXDMAEN       (1 <<  1) /* 00000002: Tx buffer DMA enable */
#define CH32V103_SPI1_CTLR2_RXDMAEN       (1 <<  0) /* 00000001: Rx buffer DMA enable */
#define CH32V103_SPI1_STATR_OFFSET        0x0008
#define CH32V103_SPI1_STATR               (CH32V103_SPI1_BASE + CH32V103_SPI1_STATR_OFFSET)
#define CH32V103_SPI1_STATR_BSY           (1 <<  7) /* 00000080: Busy flag */
#define CH32V103_SPI1_STATR_OVR           (1 <<  6) /* 00000040: Overrun flag */
#define CH32V103_SPI1_STATR_MODF          (1 <<  5) /* 00000020: Mode fault */
#define CH32V103_SPI1_STATR_CRCERR        (1 <<  4) /* 00000010: CRC error flag */
#define CH32V103_SPI1_STATR_TXE           (1 <<  1) /* 00000002: Transmit buffer empty */
#define CH32V103_SPI1_STATR_RXNE          (1 <<  0) /* 00000001: Receive buffer not empty */
#define CH32V103_SPI1_DATAR_OFFSET        0x000c
#define CH32V103_SPI1_DATAR               (CH32V103_SPI1_BASE + CH32V103_SPI1_DATAR_OFFSET) /* read-write */
#define CH32V103_SPI1_DATAR_DATAR         (0xffff << 0) /* 0000ffff: Data register */
#define CH32V103_SPI1_DATAR_DATAR_MASK    (0xffff << 0)
#define CH32V103_SPI1_CRCR_OFFSET         0x0010
#define CH32V103_SPI1_CRCR                (CH32V103_SPI1_BASE + CH32V103_SPI1_CRCR_OFFSET) /* read-write */
#define CH32V103_SPI1_CRCR_CRCPOLY        (0xffff << 0) /* 0000ffff: CRC polynomial register */
#define CH32V103_SPI1_CRCR_CRCPOLY_MASK   (0xffff << 0)
#define CH32V103_SPI1_RCRCR_OFFSET        0x0014
#define CH32V103_SPI1_RCRCR               (CH32V103_SPI1_BASE + CH32V103_SPI1_RCRCR_OFFSET) /* read-only */
#define CH32V103_SPI1_RCRCR_RxCRC         (0xffff << 0) /* 0000ffff: Rx CRC register */
#define CH32V103_SPI1_RCRCR_RxCRC_MASK    (0xffff << 0)
#define CH32V103_SPI1_TCRCR_OFFSET        0x0018
#define CH32V103_SPI1_TCRCR               (CH32V103_SPI1_BASE + CH32V103_SPI1_TCRCR_OFFSET) /* read-only */
#define CH32V103_SPI1_TCRCR_TxCRC         (0xffff << 0) /* 0000ffff: Tx CRC register */
#define CH32V103_SPI1_TCRCR_TxCRC_MASK    (0xffff << 0)
#define CH32V103_SPI1_I2SCFGR_OFFSET      0x001c
#define CH32V103_SPI1_I2SCFGR             (CH32V103_SPI1_BASE + CH32V103_SPI1_I2SCFGR_OFFSET) /* read-write */
#define CH32V103_SPI1_I2SCFGR_I2SMOD      (1 << 11) /* 00000800: I2S mode selection */
#define CH32V103_SPI1_I2SCFGR_I2SE        (1 << 10) /* 00000400: I2S Enable */
#define CH32V103_SPI1_I2SCFGR_I2SCFG      (0x3 << 8) /* 00000300: I2S configuration mode */
#define CH32V103_SPI1_I2SCFGR_I2SCFG_MASK (0x3 << 8)
#define CH32V103_SPI1_I2SCFGR_PCMSYNC     (1 <<  7) /* 00000080: PCM frame synchronization */
#define CH32V103_SPI1_I2SCFGR_I2SSTD      (0x3 << 4) /* 00000030: I2S standard selection */
#define CH32V103_SPI1_I2SCFGR_I2SSTD_MASK (0x3 << 4)
#define CH32V103_SPI1_I2SCFGR_CKPOL       (1 <<  3) /* 00000008: Steady state clock polarity */
#define CH32V103_SPI1_I2SCFGR_DATLEN      (0x3 << 1) /* 00000006: Data length to be transferred */
#define CH32V103_SPI1_I2SCFGR_DATLEN_MASK (0x3 << 1)
#define CH32V103_SPI1_I2SCFGR_CHLEN       (1 <<  0) /* 00000001: Channel length (number of bits per audio channel) */
#define CH32V103_SPI1_I2SPR_OFFSET        0x0020
#define CH32V103_SPI1_I2SPR               (CH32V103_SPI1_BASE + CH32V103_SPI1_I2SPR_OFFSET) /* read-write */
#define CH32V103_SPI1_I2SPR_MCKOE         (1 <<  9) /* 00000200: Master clock output enable */
#define CH32V103_SPI1_I2SPR_ODD           (1 <<  8) /* 00000100: Odd factor for the prescaler */
#define CH32V103_SPI1_I2SPR_I2SDIV        (0xff << 0) /* 000000ff: I2S Linear prescaler */
#define CH32V103_SPI1_I2SPR_I2SDIV_MASK   (0xff << 0)

/* USART1 - Universal synchronous asynchronous receiver transmitter */
#define CH32V103_USART1_BASE              0x40013800
#define CH32V103_USART1_STATR_OFFSET      0x0000
#define CH32V103_USART1_STATR             (CH32V103_USART1_BASE + CH32V103_USART1_STATR_OFFSET) /* read-write */
#define CH32V103_USART1_STATR_CTS         (1 <<  9) /* 00000200: CTS flag */
#define CH32V103_USART1_STATR_LBD         (1 <<  8) /* 00000100: LIN break detection flag */
#define CH32V103_USART1_STATR_TXE         (1 <<  7) /* 00000080: Transmit data register empty */
#define CH32V103_USART1_STATR_TC          (1 <<  6) /* 00000040: Transmission complete */
#define CH32V103_USART1_STATR_RXNE        (1 <<  5) /* 00000020: Read data register not empty */
#define CH32V103_USART1_STATR_IDLE        (1 <<  4) /* 00000010: IDLE line detected */
#define CH32V103_USART1_STATR_ORE         (1 <<  3) /* 00000008: Overrun error */
#define CH32V103_USART1_STATR_NE          (1 <<  2) /* 00000004: Noise error flag */
#define CH32V103_USART1_STATR_FE          (1 <<  1) /* 00000002: Framing error */
#define CH32V103_USART1_STATR_PE          (1 <<  0) /* 00000001: Parity error */
#define CH32V103_USART1_DATAR_OFFSET      0x0004
#define CH32V103_USART1_DATAR             (CH32V103_USART1_BASE + CH32V103_USART1_DATAR_OFFSET) /* read-write */
#define CH32V103_USART1_DATAR_DR          (0x1ff << 0) /* 000001ff: Data value */
#define CH32V103_USART1_DATAR_DR_MASK     (0x1ff << 0)
#define CH32V103_USART1_BRR_OFFSET        0x0008
#define CH32V103_USART1_BRR               (CH32V103_USART1_BASE + CH32V103_USART1_BRR_OFFSET) /* read-write */
#define CH32V103_USART1_BRR_DIV_Mantissa  (0xfff << 4) /* 0000fff0: mantissa of USARTDIV */
#define CH32V103_USART1_BRR_DIV_Mantissa_MASK (0xfff << 4)
#define CH32V103_USART1_BRR_DIV_Fraction  (0xf << 0) /* 0000000f: fraction of USARTDIV */
#define CH32V103_USART1_BRR_DIV_Fraction_MASK (0xf << 0)
#define CH32V103_USART1_CTLR1_OFFSET      0x000c
#define CH32V103_USART1_CTLR1             (CH32V103_USART1_BASE + CH32V103_USART1_CTLR1_OFFSET) /* read-write */
#define CH32V103_USART1_CTLR1_UE          (1 << 13) /* 00002000: USART enable */
#define CH32V103_USART1_CTLR1_M           (1 << 12) /* 00001000: Word length */
#define CH32V103_USART1_CTLR1_WAKE        (1 << 11) /* 00000800: Wakeup method */
#define CH32V103_USART1_CTLR1_PCE         (1 << 10) /* 00000400: Parity control enable */
#define CH32V103_USART1_CTLR1_PS          (1 <<  9) /* 00000200: Parity selection */
#define CH32V103_USART1_CTLR1_PEIE        (1 <<  8) /* 00000100: PE interrupt enable */
#define CH32V103_USART1_CTLR1_TXEIE       (1 <<  7) /* 00000080: TXE interrupt enable */
#define CH32V103_USART1_CTLR1_TCIE        (1 <<  6) /* 00000040: Transmission complete interrupt enable */
#define CH32V103_USART1_CTLR1_RXNEIE      (1 <<  5) /* 00000020: RXNE interrupt enable */
#define CH32V103_USART1_CTLR1_IDLEIE      (1 <<  4) /* 00000010: IDLE interrupt enable */
#define CH32V103_USART1_CTLR1_TE          (1 <<  3) /* 00000008: Transmitter enable */
#define CH32V103_USART1_CTLR1_RE          (1 <<  2) /* 00000004: Receiver enable */
#define CH32V103_USART1_CTLR1_RWU         (1 <<  1) /* 00000002: Receiver wakeup */
#define CH32V103_USART1_CTLR1_SBK         (1 <<  0) /* 00000001: Send break */
#define CH32V103_USART1_CTLR2_OFFSET      0x0010
#define CH32V103_USART1_CTLR2             (CH32V103_USART1_BASE + CH32V103_USART1_CTLR2_OFFSET) /* read-write */
#define CH32V103_USART1_CTLR2_LINEN       (1 << 14) /* 00004000: LIN mode enable */
#define CH32V103_USART1_CTLR2_STOP        (0x3 << 12) /* 00003000: STOP bits */
#define CH32V103_USART1_CTLR2_STOP_MASK   (0x3 << 12)
#define CH32V103_USART1_CTLR2_CLKEN       (1 << 11) /* 00000800: Clock enable */
#define CH32V103_USART1_CTLR2_CPOL        (1 << 10) /* 00000400: Clock polarity */
#define CH32V103_USART1_CTLR2_CPHA        (1 <<  9) /* 00000200: Clock phase */
#define CH32V103_USART1_CTLR2_LBCL        (1 <<  8) /* 00000100: Last bit clock pulse */
#define CH32V103_USART1_CTLR2_LBDIE       (1 <<  6) /* 00000040: LIN break detection interrupt enable */
#define CH32V103_USART1_CTLR2_LBDL        (1 <<  5) /* 00000020: lin break detection length */
#define CH32V103_USART1_CTLR2_ADD         (0xf << 0) /* 0000000f: Address of the USART node */
#define CH32V103_USART1_CTLR2_ADD_MASK    (0xf << 0)
#define CH32V103_USART1_CTLR3_OFFSET      0x0014
#define CH32V103_USART1_CTLR3             (CH32V103_USART1_BASE + CH32V103_USART1_CTLR3_OFFSET) /* read-write */
#define CH32V103_USART1_CTLR3_CTSIE       (1 << 10) /* 00000400: CTS interrupt enable */
#define CH32V103_USART1_CTLR3_CTSE        (1 <<  9) /* 00000200: CTS enable */
#define CH32V103_USART1_CTLR3_RTSE        (1 <<  8) /* 00000100: RTS enable */
#define CH32V103_USART1_CTLR3_DMAT        (1 <<  7) /* 00000080: DMA enable transmitter */
#define CH32V103_USART1_CTLR3_DMAR        (1 <<  6) /* 00000040: DMA enable receiver */
#define CH32V103_USART1_CTLR3_SCEN        (1 <<  5) /* 00000020: Smartcard mode enable */
#define CH32V103_USART1_CTLR3_NACK        (1 <<  4) /* 00000010: Smartcard NACK enable */
#define CH32V103_USART1_CTLR3_HDSEL       (1 <<  3) /* 00000008: Half-duplex selection */
#define CH32V103_USART1_CTLR3_IRLP        (1 <<  2) /* 00000004: IrDA low-power */
#define CH32V103_USART1_CTLR3_IREN        (1 <<  1) /* 00000002: IrDA mode enable */
#define CH32V103_USART1_CTLR3_EIE         (1 <<  0) /* 00000001: Error interrupt enable */
#define CH32V103_USART1_GPR_OFFSET        0x0018
#define CH32V103_USART1_GPR               (CH32V103_USART1_BASE + CH32V103_USART1_GPR_OFFSET) /* read-write */
#define CH32V103_USART1_GPR_GT            (0xff << 8) /* 0000ff00: Guard time value */
#define CH32V103_USART1_GPR_GT_MASK       (0xff << 8)
#define CH32V103_USART1_GPR_PSC           (0xff << 0) /* 000000ff: Prescaler value */
#define CH32V103_USART1_GPR_PSC_MASK      (0xff << 0)

/* ADC - Analog to digital converter */
#define CH32V103_ADC_BASE                 0x40012400
#define CH32V103_ADC_STATR_OFFSET         0x0000
#define CH32V103_ADC_STATR                (CH32V103_ADC_BASE + CH32V103_ADC_STATR_OFFSET) /* read-write */
#define CH32V103_ADC_STATR_STRT           (1 <<  4) /* 00000010: Regular channel start flag */
#define CH32V103_ADC_STATR_JSTRT          (1 <<  3) /* 00000008: Injected channel start flag */
#define CH32V103_ADC_STATR_JEOC           (1 <<  2) /* 00000004: Injected channel end of conversion */
#define CH32V103_ADC_STATR_EOC            (1 <<  1) /* 00000002: Regular channel end of conversion */
#define CH32V103_ADC_STATR_AWD            (1 <<  0) /* 00000001: Analog watchdog flag */
#define CH32V103_ADC_CTLR1_OFFSET         0x0004
#define CH32V103_ADC_CTLR1                (CH32V103_ADC_BASE + CH32V103_ADC_CTLR1_OFFSET) /* read-write */
#define CH32V103_ADC_CTLR1_TKENABLE       (1 << 24) /* 01000000: Touch key enable, including TKEY_F and TKEY_V */
#define CH32V103_ADC_CTLR1_AWDEN          (1 << 23) /* 00800000: Analog watchdog enable on regular channels */
#define CH32V103_ADC_CTLR1_JAWDEN         (1 << 22) /* 00400000: Analog watchdog enable on injected channels */
#define CH32V103_ADC_CTLR1_DUALMOD        (0xf << 16) /* 000f0000: Dual mode selection */
#define CH32V103_ADC_CTLR1_DUALMOD_MASK   (0xf << 16)
#define CH32V103_ADC_CTLR1_DISCNUM        (0x7 << 13) /* 0000e000: Discontinuous mode channel count */
#define CH32V103_ADC_CTLR1_DISCNUM_MASK   (0x7 << 13)
#define CH32V103_ADC_CTLR1_JDISCEN        (1 << 12) /* 00001000: Discontinuous mode on injected channels */
#define CH32V103_ADC_CTLR1_DISCEN         (1 << 11) /* 00000800: Discontinuous mode on regular channels */
#define CH32V103_ADC_CTLR1_JAUTO          (1 << 10) /* 00000400: Automatic injected group conversion */
#define CH32V103_ADC_CTLR1_AWDSGL         (1 <<  9) /* 00000200: Enable the watchdog on a single channel in scan mode */
#define CH32V103_ADC_CTLR1_SCAN           (1 <<  8) /* 00000100: Scan mode */
#define CH32V103_ADC_CTLR1_JEOCIE         (1 <<  7) /* 00000080: Interrupt enable for injected channels */
#define CH32V103_ADC_CTLR1_AWDIE          (1 <<  6) /* 00000040: Analog watchdog interrupt enable */
#define CH32V103_ADC_CTLR1_EOCIE          (1 <<  5) /* 00000020: Interrupt enable for EOC */
#define CH32V103_ADC_CTLR1_AWDCH          (0x1f << 0) /* 0000001f: Analog watchdog channel select bits */
#define CH32V103_ADC_CTLR1_AWDCH_MASK     (0x1f << 0)
#define CH32V103_ADC_CTLR2_OFFSET         0x0008
#define CH32V103_ADC_CTLR2                (CH32V103_ADC_BASE + CH32V103_ADC_CTLR2_OFFSET) /* read-write */
#define CH32V103_ADC_CTLR2_TSVREFE        (1 << 23) /* 00800000: Temperature sensor and VREFINT enable */
#define CH32V103_ADC_CTLR2_SWSTART        (1 << 22) /* 00400000: Start conversion of regular channels */
#define CH32V103_ADC_CTLR2_JSWSTART       (1 << 21) /* 00200000: Start conversion of injected channels */
#define CH32V103_ADC_CTLR2_EXTTRIG        (1 << 20) /* 00100000: External trigger conversion mode for regular channels */
#define CH32V103_ADC_CTLR2_EXTSEL         (0x7 << 17) /* 000e0000: External event select for regular group */
#define CH32V103_ADC_CTLR2_EXTSEL_MASK    (0x7 << 17)
#define CH32V103_ADC_CTLR2_JEXTTRIG       (1 << 15) /* 00008000: External trigger conversion mode for injected channels */
#define CH32V103_ADC_CTLR2_JEXTSEL        (0x7 << 12) /* 00007000: External event select for injected group */
#define CH32V103_ADC_CTLR2_JEXTSEL_MASK   (0x7 << 12)
#define CH32V103_ADC_CTLR2_ALIGN          (1 << 11) /* 00000800: Data alignment */
#define CH32V103_ADC_CTLR2_DMA            (1 <<  8) /* 00000100: Direct memory access mode */
#define CH32V103_ADC_CTLR2_RSTCAL         (1 <<  3) /* 00000008: Reset calibration */
#define CH32V103_ADC_CTLR2_CAL            (1 <<  2) /* 00000004: A/D calibration */
#define CH32V103_ADC_CTLR2_CONT           (1 <<  1) /* 00000002: Continuous conversion */
#define CH32V103_ADC_CTLR2_ADON           (1 <<  0) /* 00000001: A/D converter ON / OFF */
#define CH32V103_ADC_SAMPTR1_OFFSET       0x000c
#define CH32V103_ADC_SAMPTR1              (CH32V103_ADC_BASE + CH32V103_ADC_SAMPTR1_OFFSET) /* read-write */
#define CH32V103_ADC_SAMPTR1_SMP10        (0x7 << 0) /* 00000007: Channel 10 sample time selection */
#define CH32V103_ADC_SAMPTR1_SMP10_MASK   (0x7 << 0)
#define CH32V103_ADC_SAMPTR1_SMP11        (0x7 << 3) /* 00000038: Channel 11 sample time selection */
#define CH32V103_ADC_SAMPTR1_SMP11_MASK   (0x7 << 3)
#define CH32V103_ADC_SAMPTR1_SMP12        (0x7 << 6) /* 000001c0: Channel 12 sample time selection */
#define CH32V103_ADC_SAMPTR1_SMP12_MASK   (0x7 << 6)
#define CH32V103_ADC_SAMPTR1_SMP13        (0x7 << 9) /* 00000e00: Channel 13 sample time selection */
#define CH32V103_ADC_SAMPTR1_SMP13_MASK   (0x7 << 9)
#define CH32V103_ADC_SAMPTR1_SMP14        (0x7 << 12) /* 00007000: Channel 14 sample time selection */
#define CH32V103_ADC_SAMPTR1_SMP14_MASK   (0x7 << 12)
#define CH32V103_ADC_SAMPTR1_SMP15        (0x7 << 15) /* 00038000: Channel 15 sample time selection */
#define CH32V103_ADC_SAMPTR1_SMP15_MASK   (0x7 << 15)
#define CH32V103_ADC_SAMPTR1_SMP16        (0x7 << 18) /* 001c0000: Channel 16 sample time selection */
#define CH32V103_ADC_SAMPTR1_SMP16_MASK   (0x7 << 18)
#define CH32V103_ADC_SAMPTR1_SMP17        (0x7 << 21) /* 00e00000: Channel 17 sample time selection */
#define CH32V103_ADC_SAMPTR1_SMP17_MASK   (0x7 << 21)
#define CH32V103_ADC_SAMPTR2_OFFSET       0x0010
#define CH32V103_ADC_SAMPTR2              (CH32V103_ADC_BASE + CH32V103_ADC_SAMPTR2_OFFSET) /* read-write */
#define CH32V103_ADC_SAMPTR2_SMP0         (0x7 << 0) /* 00000007: Channel 0 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP0_MASK    (0x7 << 0)
#define CH32V103_ADC_SAMPTR2_SMP1         (0x7 << 3) /* 00000038: Channel 1 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP1_MASK    (0x7 << 3)
#define CH32V103_ADC_SAMPTR2_SMP2         (0x7 << 6) /* 000001c0: Channel 2 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP2_MASK    (0x7 << 6)
#define CH32V103_ADC_SAMPTR2_SMP3         (0x7 << 9) /* 00000e00: Channel 3 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP3_MASK    (0x7 << 9)
#define CH32V103_ADC_SAMPTR2_SMP4         (0x7 << 12) /* 00007000: Channel 4 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP4_MASK    (0x7 << 12)
#define CH32V103_ADC_SAMPTR2_SMP5         (0x7 << 15) /* 00038000: Channel 5 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP5_MASK    (0x7 << 15)
#define CH32V103_ADC_SAMPTR2_SMP6         (0x7 << 18) /* 001c0000: Channel 6 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP6_MASK    (0x7 << 18)
#define CH32V103_ADC_SAMPTR2_SMP7         (0x7 << 21) /* 00e00000: Channel 7 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP7_MASK    (0x7 << 21)
#define CH32V103_ADC_SAMPTR2_SMP8         (0x7 << 24) /* 07000000: Channel 8 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP8_MASK    (0x7 << 24)
#define CH32V103_ADC_SAMPTR2_SMP9         (0x7 << 27) /* 38000000: Channel 9 sample time selection */
#define CH32V103_ADC_SAMPTR2_SMP9_MASK    (0x7 << 27)
#define CH32V103_ADC_IOFR1_OFFSET         0x0014
#define CH32V103_ADC_IOFR1                (CH32V103_ADC_BASE + CH32V103_ADC_IOFR1_OFFSET) /* read-write */
#define CH32V103_ADC_IOFR1_JOFFSET1       (0xfff << 0) /* 00000fff: Data offset for injected channel x */
#define CH32V103_ADC_IOFR1_JOFFSET1_MASK  (0xfff << 0)
#define CH32V103_ADC_IOFR2_OFFSET         0x0018
#define CH32V103_ADC_IOFR2                (CH32V103_ADC_BASE + CH32V103_ADC_IOFR2_OFFSET) /* read-write */
#define CH32V103_ADC_IOFR2_JOFFSET2       (0xfff << 0) /* 00000fff: Data offset for injected channel x */
#define CH32V103_ADC_IOFR2_JOFFSET2_MASK  (0xfff << 0)
#define CH32V103_ADC_IOFR3_OFFSET         0x001c
#define CH32V103_ADC_IOFR3                (CH32V103_ADC_BASE + CH32V103_ADC_IOFR3_OFFSET) /* read-write */
#define CH32V103_ADC_IOFR3_JOFFSET3       (0xfff << 0) /* 00000fff: Data offset for injected channel x */
#define CH32V103_ADC_IOFR3_JOFFSET3_MASK  (0xfff << 0)
#define CH32V103_ADC_IOFR4_OFFSET         0x0020
#define CH32V103_ADC_IOFR4                (CH32V103_ADC_BASE + CH32V103_ADC_IOFR4_OFFSET) /* read-write */
#define CH32V103_ADC_IOFR4_JOFFSET4       (0xfff << 0) /* 00000fff: Data offset for injected channel x */
#define CH32V103_ADC_IOFR4_JOFFSET4_MASK  (0xfff << 0)
#define CH32V103_ADC_WDHTR_OFFSET         0x0024
#define CH32V103_ADC_WDHTR                (CH32V103_ADC_BASE + CH32V103_ADC_WDHTR_OFFSET) /* read-write */
#define CH32V103_ADC_WDHTR_HT             (0xfff << 0) /* 00000fff: Analog watchdog higher threshold */
#define CH32V103_ADC_WDHTR_HT_MASK        (0xfff << 0)
#define CH32V103_ADC_WDLTR_OFFSET         0x0028
#define CH32V103_ADC_WDLTR                (CH32V103_ADC_BASE + CH32V103_ADC_WDLTR_OFFSET) /* read-write */
#define CH32V103_ADC_WDLTR_LT             (0xfff << 0) /* 00000fff: Analog watchdog lower threshold */
#define CH32V103_ADC_WDLTR_LT_MASK        (0xfff << 0)
#define CH32V103_ADC_RSQR1_OFFSET         0x002c
#define CH32V103_ADC_RSQR1                (CH32V103_ADC_BASE + CH32V103_ADC_RSQR1_OFFSET) /* read-write */
#define CH32V103_ADC_RSQR1_L              (0xf << 20) /* 00f00000: Regular channel sequence length */
#define CH32V103_ADC_RSQR1_L_MASK         (0xf << 20)
#define CH32V103_ADC_RSQR1_SQ16           (0x1f << 15) /* 000f8000: 16th conversion in regular sequence */
#define CH32V103_ADC_RSQR1_SQ16_MASK      (0x1f << 15)
#define CH32V103_ADC_RSQR1_SQ15           (0x1f << 10) /* 00007c00: 15th conversion in regular sequence */
#define CH32V103_ADC_RSQR1_SQ15_MASK      (0x1f << 10)
#define CH32V103_ADC_RSQR1_SQ14           (0x1f << 5) /* 000003e0: 14th conversion in regular sequence */
#define CH32V103_ADC_RSQR1_SQ14_MASK      (0x1f << 5)
#define CH32V103_ADC_RSQR1_SQ13           (0x1f << 0) /* 0000001f: 13th conversion in regular sequence */
#define CH32V103_ADC_RSQR1_SQ13_MASK      (0x1f << 0)
#define CH32V103_ADC_RSQR2_OFFSET         0x0030
#define CH32V103_ADC_RSQR2                (CH32V103_ADC_BASE + CH32V103_ADC_RSQR2_OFFSET) /* read-write */
#define CH32V103_ADC_RSQR2_SQ12           (0x1f << 25) /* 3e000000: 12th conversion in regular sequence */
#define CH32V103_ADC_RSQR2_SQ12_MASK      (0x1f << 25)
#define CH32V103_ADC_RSQR2_SQ11           (0x1f << 20) /* 01f00000: 11th conversion in regular sequence */
#define CH32V103_ADC_RSQR2_SQ11_MASK      (0x1f << 20)
#define CH32V103_ADC_RSQR2_SQ10           (0x1f << 15) /* 000f8000: 10th conversion in regular sequence */
#define CH32V103_ADC_RSQR2_SQ10_MASK      (0x1f << 15)
#define CH32V103_ADC_RSQR2_SQ9            (0x1f << 10) /* 00007c00: 9th conversion in regular sequence */
#define CH32V103_ADC_RSQR2_SQ9_MASK       (0x1f << 10)
#define CH32V103_ADC_RSQR2_SQ8            (0x1f << 5) /* 000003e0: 8th conversion in regular sequence */
#define CH32V103_ADC_RSQR2_SQ8_MASK       (0x1f << 5)
#define CH32V103_ADC_RSQR2_SQ7            (0x1f << 0) /* 0000001f: 7th conversion in regular sequence */
#define CH32V103_ADC_RSQR2_SQ7_MASK       (0x1f << 0)
#define CH32V103_ADC_RSQR3_OFFSET         0x0034
#define CH32V103_ADC_RSQR3                (CH32V103_ADC_BASE + CH32V103_ADC_RSQR3_OFFSET) /* read-write */
#define CH32V103_ADC_RSQR3_SQ6            (0x1f << 25) /* 3e000000: 6th conversion in regular sequence */
#define CH32V103_ADC_RSQR3_SQ6_MASK       (0x1f << 25)
#define CH32V103_ADC_RSQR3_SQ5            (0x1f << 20) /* 01f00000: 5th conversion in regular sequence */
#define CH32V103_ADC_RSQR3_SQ5_MASK       (0x1f << 20)
#define CH32V103_ADC_RSQR3_SQ4            (0x1f << 15) /* 000f8000: 4th conversion in regular sequence */
#define CH32V103_ADC_RSQR3_SQ4_MASK       (0x1f << 15)
#define CH32V103_ADC_RSQR3_SQ3            (0x1f << 10) /* 00007c00: 3rd conversion in regular sequence */
#define CH32V103_ADC_RSQR3_SQ3_MASK       (0x1f << 10)
#define CH32V103_ADC_RSQR3_SQ2            (0x1f << 5) /* 000003e0: 2nd conversion in regular sequence */
#define CH32V103_ADC_RSQR3_SQ2_MASK       (0x1f << 5)
#define CH32V103_ADC_RSQR3_SQ1            (0x1f << 0) /* 0000001f: 1st conversion in regular sequence */
#define CH32V103_ADC_RSQR3_SQ1_MASK       (0x1f << 0)
#define CH32V103_ADC_ISQR_OFFSET          0x0038
#define CH32V103_ADC_ISQR                 (CH32V103_ADC_BASE + CH32V103_ADC_ISQR_OFFSET) /* read-write */
#define CH32V103_ADC_ISQR_JL              (0x3 << 20) /* 00300000: Injected sequence length */
#define CH32V103_ADC_ISQR_JL_MASK         (0x3 << 20)
#define CH32V103_ADC_ISQR_JSQ4            (0x1f << 15) /* 000f8000: 4th conversion in injected sequence */
#define CH32V103_ADC_ISQR_JSQ4_MASK       (0x1f << 15)
#define CH32V103_ADC_ISQR_JSQ3            (0x1f << 10) /* 00007c00: 3rd conversion in injected sequence */
#define CH32V103_ADC_ISQR_JSQ3_MASK       (0x1f << 10)
#define CH32V103_ADC_ISQR_JSQ2            (0x1f << 5) /* 000003e0: 2nd conversion in injected sequence */
#define CH32V103_ADC_ISQR_JSQ2_MASK       (0x1f << 5)
#define CH32V103_ADC_ISQR_JSQ1            (0x1f << 0) /* 0000001f: 1st conversion in injected sequence */
#define CH32V103_ADC_ISQR_JSQ1_MASK       (0x1f << 0)
#define CH32V103_ADC_IDATAR1_OFFSET       0x003c
#define CH32V103_ADC_IDATAR1              (CH32V103_ADC_BASE + CH32V103_ADC_IDATAR1_OFFSET) /* read-only */
#define CH32V103_ADC_IDATAR1_JDATA        (0xffff << 0) /* 0000ffff: Injected data */
#define CH32V103_ADC_IDATAR1_JDATA_MASK   (0xffff << 0)
#define CH32V103_ADC_IDATAR2_OFFSET       0x0040
#define CH32V103_ADC_IDATAR2              (CH32V103_ADC_BASE + CH32V103_ADC_IDATAR2_OFFSET) /* read-only */
#define CH32V103_ADC_IDATAR2_JDATA        (0xffff << 0) /* 0000ffff: Injected data */
#define CH32V103_ADC_IDATAR2_JDATA_MASK   (0xffff << 0)
#define CH32V103_ADC_IDATAR3_OFFSET       0x0044
#define CH32V103_ADC_IDATAR3              (CH32V103_ADC_BASE + CH32V103_ADC_IDATAR3_OFFSET) /* read-only */
#define CH32V103_ADC_IDATAR3_JDATA        (0xffff << 0) /* 0000ffff: Injected data */
#define CH32V103_ADC_IDATAR3_JDATA_MASK   (0xffff << 0)
#define CH32V103_ADC_IDATAR4_OFFSET       0x0048
#define CH32V103_ADC_IDATAR4              (CH32V103_ADC_BASE + CH32V103_ADC_IDATAR4_OFFSET) /* read-only */
#define CH32V103_ADC_IDATAR4_JDATA        (0xffff << 0) /* 0000ffff: Injected data */
#define CH32V103_ADC_IDATAR4_JDATA_MASK   (0xffff << 0)
#define CH32V103_ADC_RDATAR_OFFSET        0x004c
#define CH32V103_ADC_RDATAR               (CH32V103_ADC_BASE + CH32V103_ADC_RDATAR_OFFSET) /* read-only */
#define CH32V103_ADC_RDATAR_DATA          (0xffff << 0) /* 0000ffff: Regular data */
#define CH32V103_ADC_RDATAR_DATA_MASK     (0xffff << 0)
#define CH32V103_ADC_RDATAR_ADC2DATA      (0xffff << 16) /* ffff0000: ADC2 data */
#define CH32V103_ADC_RDATAR_ADC2DATA_MASK (0xffff << 16)

/* DAC1 - Digital to analog converter */
#define CH32V103_DAC1_BASE                0x40007400
#define CH32V103_DAC1_CTLR_OFFSET         0x0000
#define CH32V103_DAC1_CTLR                (CH32V103_DAC1_BASE + CH32V103_DAC1_CTLR_OFFSET) /* read-write */
#define CH32V103_DAC1_CTLR_EN1            (1 <<  0) /* 00000001: DAC channel1 enable */
#define CH32V103_DAC1_CTLR_BOFF1          (1 <<  1) /* 00000002: DAC channel1 output buffer disable */
#define CH32V103_DAC1_CTLR_TEN1           (1 <<  2) /* 00000004: DAC channel1 trigger enable */
#define CH32V103_DAC1_CTLR_TSEL1          (0x7 << 3) /* 00000038: DAC channel1 trigger selection */
#define CH32V103_DAC1_CTLR_TSEL1_MASK     (0x7 << 3)
#define CH32V103_DAC1_CTLR_WAVE1          (0x3 << 6) /* 000000c0: DAC channel1 noise/triangle wave generation enable */
#define CH32V103_DAC1_CTLR_WAVE1_MASK     (0x3 << 6)
#define CH32V103_DAC1_CTLR_MAMP1          (0xf << 8) /* 00000f00: DAC channel1 mask/amplitude selector */
#define CH32V103_DAC1_CTLR_MAMP1_MASK     (0xf << 8)
#define CH32V103_DAC1_CTLR_DMAEN1         (1 << 12) /* 00001000: DAC channel1 DMA enable */
#define CH32V103_DAC1_CTLR_EN2            (1 << 16) /* 00010000: DAC channel2 enable */
#define CH32V103_DAC1_CTLR_BOFF2          (1 << 17) /* 00020000: DAC channel2 output buffer disable */
#define CH32V103_DAC1_CTLR_TEN2           (1 << 18) /* 00040000: DAC channel2 trigger enable */
#define CH32V103_DAC1_CTLR_TSEL2          (0x7 << 19) /* 00380000: DAC channel2 trigger selection */
#define CH32V103_DAC1_CTLR_TSEL2_MASK     (0x7 << 19)
#define CH32V103_DAC1_CTLR_WAVE2          (0x3 << 22) /* 00c00000: DAC channel2 noise/triangle wave generation enable */
#define CH32V103_DAC1_CTLR_WAVE2_MASK     (0x3 << 22)
#define CH32V103_DAC1_CTLR_MAMP2          (0xf << 24) /* 0f000000: DAC channel2 mask/amplitude selector */
#define CH32V103_DAC1_CTLR_MAMP2_MASK     (0xf << 24)
#define CH32V103_DAC1_CTLR_DMAEN2         (1 << 28) /* 10000000: DAC channel2 DMA enable */
#define CH32V103_DAC1_SWTR_OFFSET         0x0004
#define CH32V103_DAC1_SWTR                (CH32V103_DAC1_BASE + CH32V103_DAC1_SWTR_OFFSET) /* write-only */
#define CH32V103_DAC1_SWTR_SWTRIG1        (1 <<  0) /* 00000001: DAC channel1 software trigger */
#define CH32V103_DAC1_SWTR_SWTRIG2        (1 <<  1) /* 00000002: DAC channel2 software trigger */
#define CH32V103_DAC1_R12BDHR1_OFFSET     0x0008
#define CH32V103_DAC1_R12BDHR1            (CH32V103_DAC1_BASE + CH32V103_DAC1_R12BDHR1_OFFSET) /* read-write */
#define CH32V103_DAC1_R12BDHR1_DACC1DHR   (0xfff << 0) /* 00000fff: DAC channel1 12-bit right-aligned data */
#define CH32V103_DAC1_R12BDHR1_DACC1DHR_MASK (0xfff << 0)
#define CH32V103_DAC1_L12BDHR1_OFFSET     0x000c
#define CH32V103_DAC1_L12BDHR1            (CH32V103_DAC1_BASE + CH32V103_DAC1_L12BDHR1_OFFSET) /* read-write */
#define CH32V103_DAC1_L12BDHR1_DACC1DHR   (0xfff << 4) /* 0000fff0: DAC channel1 12-bit left-aligned data */
#define CH32V103_DAC1_L12BDHR1_DACC1DHR_MASK (0xfff << 4)
#define CH32V103_DAC1_R12BDHR2_OFFSET     0x0014
#define CH32V103_DAC1_R12BDHR2            (CH32V103_DAC1_BASE + CH32V103_DAC1_R12BDHR2_OFFSET) /* read-write */
#define CH32V103_DAC1_R12BDHR2_DACC2DHR   (0xfff << 0) /* 00000fff: DAC channel2 12-bit right-aligned data */
#define CH32V103_DAC1_R12BDHR2_DACC2DHR_MASK (0xfff << 0)
#define CH32V103_DAC1_L12BDHR2_OFFSET     0x0018
#define CH32V103_DAC1_L12BDHR2            (CH32V103_DAC1_BASE + CH32V103_DAC1_L12BDHR2_OFFSET) /* read-write */
#define CH32V103_DAC1_L12BDHR2_DACC2DHR   (0xfff << 4) /* 0000fff0: DAC channel2 12-bit left-aligned data */
#define CH32V103_DAC1_L12BDHR2_DACC2DHR_MASK (0xfff << 4)
#define CH32V103_DAC1_DOR1_OFFSET         0x002c
#define CH32V103_DAC1_DOR1                (CH32V103_DAC1_BASE + CH32V103_DAC1_DOR1_OFFSET) /* read-only */
#define CH32V103_DAC1_DOR1_DACC1DOR       (0xfff << 0) /* 00000fff: DAC channel1 data output */
#define CH32V103_DAC1_DOR1_DACC1DOR_MASK  (0xfff << 0)
#define CH32V103_DAC1_DOR2_OFFSET         0x0030
#define CH32V103_DAC1_DOR2                (CH32V103_DAC1_BASE + CH32V103_DAC1_DOR2_OFFSET) /* read-only */
#define CH32V103_DAC1_DOR2_DACC2DOR       (0xfff << 0) /* 00000fff: DAC channel2 data output */
#define CH32V103_DAC1_DOR2_DACC2DOR_MASK  (0xfff << 0)

/* DBG - Debug support */
#define CH32V103_DBG_BASE                 0xe0042000
#define CH32V103_DBG_IDCODE_OFFSET        0x0000
#define CH32V103_DBG_IDCODE               (CH32V103_DBG_BASE + CH32V103_DBG_IDCODE_OFFSET) /* read-only */
#define CH32V103_DBG_IDCODE_DEV_ID        (0xfff << 0) /* 00000fff: DEV_ID */
#define CH32V103_DBG_IDCODE_DEV_ID_MASK   (0xfff << 0)
#define CH32V103_DBG_IDCODE_REV_ID        (0xffff << 16) /* ffff0000: REV_ID */
#define CH32V103_DBG_IDCODE_REV_ID_MASK   (0xffff << 16)
#define CH32V103_DBG_CFGR_OFFSET          0x0004
#define CH32V103_DBG_CFGR                 (CH32V103_DBG_BASE + CH32V103_DBG_CFGR_OFFSET) /* read-write */
#define CH32V103_DBG_CFGR_DBG_SLEEP       (1 <<  0) /* 00000001: DBG_SLEEP */
#define CH32V103_DBG_CFGR_DBG_STOP        (1 <<  1) /* 00000002: DBG_STOP */
#define CH32V103_DBG_CFGR_DBG_STANDBY     (1 <<  2) /* 00000004: DBG_STANDBY */
#define CH32V103_DBG_CFGR_TRACE_IOEN      (1 <<  5) /* 00000020: TRACE_IOEN */
#define CH32V103_DBG_CFGR_TRACE_MODE      (0x3 << 6) /* 000000c0: TRACE_MODE */
#define CH32V103_DBG_CFGR_TRACE_MODE_MASK (0x3 << 6)
#define CH32V103_DBG_CFGR_DBG_IWDG_STOP   (1 <<  8) /* 00000100: DBG_IWDG_STOP */
#define CH32V103_DBG_CFGR_DBG_WWDG_STOP   (1 <<  9) /* 00000200: DBG_WWDG_STOP */
#define CH32V103_DBG_CFGR_DBG_TIM1_STOP   (1 << 10) /* 00000400: DBG_TIM1_STOP */
#define CH32V103_DBG_CFGR_DBG_TIM2_STOP   (1 << 11) /* 00000800: DBG_TIM2_STOP */
#define CH32V103_DBG_CFGR_DBG_TIM3_STOP   (1 << 12) /* 00001000: DBG_TIM3_STOP */
#define CH32V103_DBG_CFGR_DBG_TIM4_STOP   (1 << 13) /* 00002000: DBG_TIM4_STOP */
#define CH32V103_DBG_CFGR_DBG_CAN1_STOP   (1 << 14) /* 00004000: DBG_CAN1_STOP */
#define CH32V103_DBG_CFGR_DBG_I2C1_SMBUS_TIMEOUT (1 << 15) /* 00008000: DBG_I2C1_SMBUS_TIMEOUT */
#define CH32V103_DBG_CFGR_DBG_I2C2_SMBUS_TIMEOUT (1 << 16) /* 00010000: DBG_I2C2_SMBUS_TIMEOUT */
#define CH32V103_DBG_CFGR_DBG_TIM8_STOP   (1 << 17) /* 00020000: DBG_TIM8_STOP */
#define CH32V103_DBG_CFGR_DBG_TIM5_STOP   (1 << 18) /* 00040000: DBG_TIM5_STOP */
#define CH32V103_DBG_CFGR_DBG_TIM6_STOP   (1 << 19) /* 00080000: DBG_TIM6_STOP */
#define CH32V103_DBG_CFGR_DBG_TIM7_STOP   (1 << 20) /* 00100000: DBG_TIM7_STOP */
#define CH32V103_DBG_CFGR_DBG_CAN2_STOP   (1 << 21) /* 00200000: DBG_CAN2_STOP */

/* USBHD - USB register */
#define CH32V103_USBHD_BASE               0x40023400
#define CH32V103_USBHD_R8_USB_CTRL_OFFSET 0x0000
#define CH32V103_USBHD_R8_USB_CTRL        (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_USB_CTRL_OFFSET) /* read-write */
#define CH32V103_USBHD_R8_UDEV_CTRL__R8_UHOST_CTRL_OFFSET 0x0001
#define CH32V103_USBHD_R8_UDEV_CTRL__R8_UHOST_CTRL (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UDEV_CTRL__R8_UHOST_CTRL_OFFSET)
#define CH32V103_USBHD_R8_USB_INT_EN_OFFSET 0x0002
#define CH32V103_USBHD_R8_USB_INT_EN      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_USB_INT_EN_OFFSET) /* read-write */
#define CH32V103_USBHD_R8_USB_DEV_AD_OFFSET 0x0003
#define CH32V103_USBHD_R8_USB_DEV_AD      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_USB_DEV_AD_OFFSET) /* read-write */
#define CH32V103_USBHD_R8_USB_MIS_ST_OFFSET 0x0005
#define CH32V103_USBHD_R8_USB_MIS_ST      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_USB_MIS_ST_OFFSET) /* read-only */
#define CH32V103_USBHD_R8_USB_INT_FG_OFFSET 0x0006
#define CH32V103_USBHD_R8_USB_INT_FG      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_USB_INT_FG_OFFSET) /* read-write */
#define CH32V103_USBHD_R8_USB_INT_ST_OFFSET 0x0007
#define CH32V103_USBHD_R8_USB_INT_ST      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_USB_INT_ST_OFFSET) /* read-only */
#define CH32V103_USBHD_R8_USB_RX_LEN_OFFSET 0x0008
#define CH32V103_USBHD_R8_USB_RX_LEN      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_USB_RX_LEN_OFFSET) /* read-only */
#define CH32V103_USBHD_R8_UEP4_1_MOD_OFFSET 0x000c
#define CH32V103_USBHD_R8_UEP4_1_MOD      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP4_1_MOD_OFFSET) /* read-write */
#define CH32V103_USBHD_R8_UEP2_3_MOD__R8_UH_EP_MOD_OFFSET 0x000d
#define CH32V103_USBHD_R8_UEP2_3_MOD__R8_UH_EP_MOD (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP2_3_MOD__R8_UH_EP_MOD_OFFSET) /* read-write */
#define CH32V103_USBHD_R16_UEP0_DMA_OFFSET 0x0010
#define CH32V103_USBHD_R16_UEP0_DMA       (CH32V103_USBHD_BASE + CH32V103_USBHD_R16_UEP0_DMA_OFFSET) /* read-write */
#define CH32V103_USBHD_R16_UEP1_DMA_OFFSET 0x0014
#define CH32V103_USBHD_R16_UEP1_DMA       (CH32V103_USBHD_BASE + CH32V103_USBHD_R16_UEP1_DMA_OFFSET) /* read-write */
#define CH32V103_USBHD_R16_UEP2_DMA__R16_UH_RX_DMA_OFFSET 0x0018
#define CH32V103_USBHD_R16_UEP2_DMA__R16_UH_RX_DMA (CH32V103_USBHD_BASE + CH32V103_USBHD_R16_UEP2_DMA__R16_UH_RX_DMA_OFFSET) /* read-write */
#define CH32V103_USBHD_R16_UEP3_DMA__R16_UH_TX_DMA_OFFSET 0x001c
#define CH32V103_USBHD_R16_UEP3_DMA__R16_UH_TX_DMA (CH32V103_USBHD_BASE + CH32V103_USBHD_R16_UEP3_DMA__R16_UH_TX_DMA_OFFSET) /* read-write */
#define CH32V103_USBHD_R8_UEP0_T_LEN_OFFSET 0x0020
#define CH32V103_USBHD_R8_UEP0_T_LEN      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP0_T_LEN_OFFSET) /* read-write */
#define CH32V103_USBHD_R8_UEP0_CTRL_OFFSET 0x0022
#define CH32V103_USBHD_R8_UEP0_CTRL       (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP0_CTRL_OFFSET) /* read-write */
#define CH32V103_USBHD_R8_UEP1_T_LEN_OFFSET 0x0024
#define CH32V103_USBHD_R8_UEP1_T_LEN      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP1_T_LEN_OFFSET) /* read-write */
#define CH32V103_USBHD_R8_UEP1_CTRL__R8_UH_SETUP_OFFSET 0x0026
#define CH32V103_USBHD_R8_UEP1_CTRL__R8_UH_SETUP (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP1_CTRL__R8_UH_SETUP_OFFSET) /* read-write */
#define CH32V103_USBHD_R8_UEP2_T_LEN__R8_UH_EP_PID_OFFSET 0x0028
#define CH32V103_USBHD_R8_UEP2_T_LEN__R8_UH_EP_PID (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP2_T_LEN__R8_UH_EP_PID_OFFSET) /* read-write */
#define CH32V103_USBHD_R8_UEP2_CTRL__R8_UH_RX_CTRL_OFFSET 0x002a
#define CH32V103_USBHD_R8_UEP2_CTRL__R8_UH_RX_CTRL (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP2_CTRL__R8_UH_RX_CTRL_OFFSET) /* read-write */
#define CH32V103_USBHD_R8_UEP3_T_LEN__R8_UH_TX_LEN_OFFSET 0x002c
#define CH32V103_USBHD_R8_UEP3_T_LEN__R8_UH_TX_LEN (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP3_T_LEN__R8_UH_TX_LEN_OFFSET) /* read-write */
#define CH32V103_USBHD_R8_UEP3_CTRL__R8_UH_TX_CTRL_OFFSET 0x002e
#define CH32V103_USBHD_R8_UEP3_CTRL__R8_UH_TX_CTRL (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP3_CTRL__R8_UH_TX_CTRL_OFFSET) /* read-write */
#define CH32V103_USBHD_R8_UEP4_T_LEN_OFFSET 0x0030
#define CH32V103_USBHD_R8_UEP4_T_LEN      (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP4_T_LEN_OFFSET) /* read-write */
#define CH32V103_USBHD_R8_UEP4_CTRL_OFFSET 0x0032
#define CH32V103_USBHD_R8_UEP4_CTRL       (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_UEP4_CTRL_OFFSET) /* read-write */
#define CH32V103_USBHD_R8_USB_TYPE_C_CTRL_OFFSET 0x0038
#define CH32V103_USBHD_R8_USB_TYPE_C_CTRL (CH32V103_USBHD_BASE + CH32V103_USBHD_R8_USB_TYPE_C_CTRL_OFFSET) /* read-write */

/* CRC - CRC calculation unit */
#define CH32V103_CRC_BASE                 0x40023000
#define CH32V103_CRC_DATAR_OFFSET         0x0000
#define CH32V103_CRC_DATAR                (CH32V103_CRC_BASE + CH32V103_CRC_DATAR_OFFSET) /* read-write */
#define CH32V103_CRC_DATAR_DATA           (0xffffffff << 0) /* ffffffff: Data Register */
#define CH32V103_CRC_DATAR_DATA_MASK      (0xffffffff << 0)
#define CH32V103_CRC_IDATAR_OFFSET        0x0004
#define CH32V103_CRC_IDATAR               (CH32V103_CRC_BASE + CH32V103_CRC_IDATAR_OFFSET) /* read-write */
#define CH32V103_CRC_IDATAR_IDATA         (0xff << 0) /* 000000ff: Independent Data register */
#define CH32V103_CRC_IDATAR_IDATA_MASK    (0xff << 0)
#define CH32V103_CRC_CTLR_OFFSET          0x0008
#define CH32V103_CRC_CTLR                 (CH32V103_CRC_BASE + CH32V103_CRC_CTLR_OFFSET) /* write-only */
#define CH32V103_CRC_CTLR_RST             (1 <<  0) /* 00000001: Reset bit */

/* FLASH - FLASH */
#define CH32V103_FLASH_BASE               0x40022000
#define CH32V103_FLASH_ACTLR_OFFSET       0x0000
#define CH32V103_FLASH_ACTLR              (CH32V103_FLASH_BASE + CH32V103_FLASH_ACTLR_OFFSET)
#define CH32V103_FLASH_ACTLR_LATENCY      (0x7 << 0) /* 00000007: Latency */
#define CH32V103_FLASH_ACTLR_LATENCY_MASK (0x7 << 0)
#define CH32V103_FLASH_ACTLR_PRFTBE       (1 <<  4) /* 00000010: Prefetch buffer enable */
#define CH32V103_FLASH_ACTLR_PRFTBS       (1 <<  5) /* 00000020: Prefetch buffer status */
#define CH32V103_FLASH_KEYR_OFFSET        0x0004
#define CH32V103_FLASH_KEYR               (CH32V103_FLASH_BASE + CH32V103_FLASH_KEYR_OFFSET) /* write-only */
#define CH32V103_FLASH_KEYR_KEYR          (0xffffffff << 0) /* ffffffff: FPEC key */
#define CH32V103_FLASH_KEYR_KEYR_MASK     (0xffffffff << 0)
#define CH32V103_FLASH_OBKEYR_OFFSET      0x0008
#define CH32V103_FLASH_OBKEYR             (CH32V103_FLASH_BASE + CH32V103_FLASH_OBKEYR_OFFSET) /* write-only */
#define CH32V103_FLASH_OBKEYR_OBKEYR      (0xffffffff << 0) /* ffffffff: Option byte key */
#define CH32V103_FLASH_OBKEYR_OBKEYR_MASK (0xffffffff << 0)
#define CH32V103_FLASH_STATR_OFFSET       0x000c
#define CH32V103_FLASH_STATR              (CH32V103_FLASH_BASE + CH32V103_FLASH_STATR_OFFSET)
#define CH32V103_FLASH_STATR_EOP          (1 <<  5) /* 00000020: End of operation */
#define CH32V103_FLASH_STATR_WRPRTERR     (1 <<  4) /* 00000010: Write protection error */
#define CH32V103_FLASH_STATR_PGERR        (1 <<  2) /* 00000004: Programming error */
#define CH32V103_FLASH_STATR_BSY          (1 <<  0) /* 00000001: Busy */
#define CH32V103_FLASH_CTLR_OFFSET        0x0010
#define CH32V103_FLASH_CTLR               (CH32V103_FLASH_BASE + CH32V103_FLASH_CTLR_OFFSET) /* read-write */
#define CH32V103_FLASH_CTLR_PG            (1 <<  0) /* 00000001: Programming */
#define CH32V103_FLASH_CTLR_PER           (1 <<  1) /* 00000002: Page Erase */
#define CH32V103_FLASH_CTLR_MER           (1 <<  2) /* 00000004: Mass Erase */
#define CH32V103_FLASH_CTLR_OBPG          (1 <<  4) /* 00000010: Option byte programming */
#define CH32V103_FLASH_CTLR_OBER          (1 <<  5) /* 00000020: Option byte erase */
#define CH32V103_FLASH_CTLR_STRT          (1 <<  6) /* 00000040: Start */
#define CH32V103_FLASH_CTLR_LOCK          (1 <<  7) /* 00000080: Lock */
#define CH32V103_FLASH_CTLR_OBWRE         (1 <<  9) /* 00000200: Option bytes write enable */
#define CH32V103_FLASH_CTLR_ERRIE         (1 << 10) /* 00000400: Error interrupt enable */
#define CH32V103_FLASH_CTLR_EOPIE         (1 << 12) /* 00001000: End of operation interrupt enable */
#define CH32V103_FLASH_CTLR_FLOCK         (1 << 15) /* 00008000: FAST programming lock */
#define CH32V103_FLASH_CTLR_FTPG          (1 << 16) /* 00010000: execute fast programming */
#define CH32V103_FLASH_CTLR_FTER          (1 << 17) /* 00020000: execute fast 128byte erase */
#define CH32V103_FLASH_CTLR_BUFLOAD       (1 << 18) /* 00040000: execute data load inner buffer */
#define CH32V103_FLASH_CTLR_BUFRST        (1 << 19) /* 00080000: execute inner buffer reset */
#define CH32V103_FLASH_ADDR_OFFSET        0x0014
#define CH32V103_FLASH_ADDR               (CH32V103_FLASH_BASE + CH32V103_FLASH_ADDR_OFFSET) /* write-only */
#define CH32V103_FLASH_ADDR_FAR           (0xffffffff << 0) /* ffffffff: Flash Address */
#define CH32V103_FLASH_ADDR_FAR_MASK      (0xffffffff << 0)
#define CH32V103_FLASH_OBR_OFFSET         0x001c
#define CH32V103_FLASH_OBR                (CH32V103_FLASH_BASE + CH32V103_FLASH_OBR_OFFSET) /* read-only */
#define CH32V103_FLASH_OBR_OPTERR         (1 <<  0) /* 00000001: Option byte error */
#define CH32V103_FLASH_OBR_RDPRT          (1 <<  1) /* 00000002: Read protection */
#define CH32V103_FLASH_OBR_IWDG_SW        (1 <<  2) /* 00000004: IWDG_SW */
#define CH32V103_FLASH_OBR_nRST_STOP      (1 <<  3) /* 00000008: nRST_STOP */
#define CH32V103_FLASH_OBR_nRST_STDBY     (1 <<  4) /* 00000010: nRST_STDBY */
#define CH32V103_FLASH_OBR_USBD_MODE      (1 <<  5) /* 00000020: USBD compatible speed mode configure */
#define CH32V103_FLASH_OBR_USBD_PU        (1 <<  6) /* 00000040: USBD compatible inner pull up resistance configure */
#define CH32V103_FLASH_OBR_POR_CTR        (1 <<  7) /* 00000080: Power on reset time */
#define CH32V103_FLASH_OBR_Data0          (0xff << 10) /* 0003fc00: Data0 */
#define CH32V103_FLASH_OBR_Data0_MASK     (0xff << 10)
#define CH32V103_FLASH_OBR_Data1          (0xff << 18) /* 03fc0000: Data1 */
#define CH32V103_FLASH_OBR_Data1_MASK     (0xff << 18)
#define CH32V103_FLASH_WPR_OFFSET         0x0020
#define CH32V103_FLASH_WPR                (CH32V103_FLASH_BASE + CH32V103_FLASH_WPR_OFFSET) /* read-only */
#define CH32V103_FLASH_WPR_WRP            (0xffffffff << 0) /* ffffffff: Write protect */
#define CH32V103_FLASH_WPR_WRP_MASK       (0xffffffff << 0)
#define CH32V103_FLASH_MODEKEYR_OFFSET    0x0024
#define CH32V103_FLASH_MODEKEYR           (CH32V103_FLASH_BASE + CH32V103_FLASH_MODEKEYR_OFFSET) /* write-only */
#define CH32V103_FLASH_MODEKEYR_MODEKEYR  (0xffffffff << 0) /* ffffffff: high speed write /erase mode ENABLE */
#define CH32V103_FLASH_MODEKEYR_MODEKEYR_MASK (0xffffffff << 0)

/* PFIC - Programmable Fast Interrupt Controller */
#define CH32V103_PFIC_BASE                0xe000e000
#define CH32V103_PFIC_ISR1_OFFSET         0x0000
#define CH32V103_PFIC_ISR1                (CH32V103_PFIC_BASE + CH32V103_PFIC_ISR1_OFFSET) /* read-only */
#define CH32V103_PFIC_ISR1_INTENSTA2_3    (0x3 << 2) /* 0000000c: Interrupt ID Status */
#define CH32V103_PFIC_ISR1_INTENSTA2_3_MASK (0x3 << 2)
#define CH32V103_PFIC_ISR1_INTENSTA12_31  (0xfffff << 12) /* fffff000: Interrupt ID Status */
#define CH32V103_PFIC_ISR1_INTENSTA12_31_MASK (0xfffff << 12)
#define CH32V103_PFIC_ISR2_OFFSET         0x0004
#define CH32V103_PFIC_ISR2                (CH32V103_PFIC_BASE + CH32V103_PFIC_ISR2_OFFSET) /* read-only */
#define CH32V103_PFIC_ISR2_INTENSTA       (0xfffffff << 0) /* 0fffffff: Interrupt ID Status */
#define CH32V103_PFIC_ISR2_INTENSTA_MASK  (0xfffffff << 0)
#define CH32V103_PFIC_IPR1_OFFSET         0x0020
#define CH32V103_PFIC_IPR1                (CH32V103_PFIC_BASE + CH32V103_PFIC_IPR1_OFFSET) /* read-only */
#define CH32V103_PFIC_IPR1_PENDSTA2_3     (0x3 << 2) /* 0000000c: PENDSTA */
#define CH32V103_PFIC_IPR1_PENDSTA2_3_MASK (0x3 << 2)
#define CH32V103_PFIC_IPR1_PENDSTA12_31   (0xfffff << 12) /* fffff000: PENDSTA */
#define CH32V103_PFIC_IPR1_PENDSTA12_31_MASK (0xfffff << 12)
#define CH32V103_PFIC_IPR2_OFFSET         0x0024
#define CH32V103_PFIC_IPR2                (CH32V103_PFIC_BASE + CH32V103_PFIC_IPR2_OFFSET) /* read-only */
#define CH32V103_PFIC_IPR2_PENDSTA        (0xfffffff << 0) /* 0fffffff: PENDSTA */
#define CH32V103_PFIC_IPR2_PENDSTA_MASK   (0xfffffff << 0)
#define CH32V103_PFIC_ITHRESDR_OFFSET     0x0040
#define CH32V103_PFIC_ITHRESDR            (CH32V103_PFIC_BASE + CH32V103_PFIC_ITHRESDR_OFFSET) /* read-write */
#define CH32V103_PFIC_ITHRESDR_THRESHOLD  (0xff << 0) /* 000000ff: THRESHOLD */
#define CH32V103_PFIC_ITHRESDR_THRESHOLD_MASK (0xff << 0)
#define CH32V103_PFIC_FIBADDRR_OFFSET     0x0044
#define CH32V103_PFIC_FIBADDRR            (CH32V103_PFIC_BASE + CH32V103_PFIC_FIBADDRR_OFFSET) /* read-write */
#define CH32V103_PFIC_FIBADDRR_BASEADDR   (0xf << 28) /* f0000000: BASEADDR */
#define CH32V103_PFIC_FIBADDRR_BASEADDR_MASK (0xf << 28)
#define CH32V103_PFIC_CFGR_OFFSET         0x0048
#define CH32V103_PFIC_CFGR                (CH32V103_PFIC_BASE + CH32V103_PFIC_CFGR_OFFSET)
#define CH32V103_PFIC_CFGR_HWSTKCTRL      (1 <<  0) /* 00000001: HWSTKCTRL */
#define CH32V103_PFIC_CFGR_NESTCTRL       (1 <<  1) /* 00000002: NESTCTRL */
#define CH32V103_PFIC_CFGR_NMISET         (1 <<  2) /* 00000004: NMISET */
#define CH32V103_PFIC_CFGR_NMIRESET       (1 <<  3) /* 00000008: NMIRESET */
#define CH32V103_PFIC_CFGR_EXCSET         (1 <<  4) /* 00000010: EXCSET */
#define CH32V103_PFIC_CFGR_EXCRESET       (1 <<  5) /* 00000020: EXCRESET */
#define CH32V103_PFIC_CFGR_PFICRSET       (1 <<  6) /* 00000040: PFICRSET */
#define CH32V103_PFIC_CFGR_SYSRESET       (1 <<  7) /* 00000080: SYSRESET */
#define CH32V103_PFIC_CFGR_KEYCODE        (0xffff << 16) /* ffff0000: KEYCODE */
#define CH32V103_PFIC_CFGR_KEYCODE_MASK   (0xffff << 16)
#define CH32V103_PFIC_GISR_OFFSET         0x004c
#define CH32V103_PFIC_GISR                (CH32V103_PFIC_BASE + CH32V103_PFIC_GISR_OFFSET) /* read-only */
#define CH32V103_PFIC_GISR_NESTSTA        (0xff << 0) /* 000000ff: NESTSTA */
#define CH32V103_PFIC_GISR_NESTSTA_MASK   (0xff << 0)
#define CH32V103_PFIC_GISR_GACTSTA        (1 <<  8) /* 00000100: GACTSTA */
#define CH32V103_PFIC_GISR_GPENDSTA       (1 <<  9) /* 00000200: GPENDSTA */
#define CH32V103_PFIC_FIFOADDRR0_OFFSET   0x0060
#define CH32V103_PFIC_FIFOADDRR0          (CH32V103_PFIC_BASE + CH32V103_PFIC_FIFOADDRR0_OFFSET) /* read-write */
#define CH32V103_PFIC_FIFOADDRR0_OFFADDR0 (0xffffff << 0) /* 00ffffff: OFFADDR0 */
#define CH32V103_PFIC_FIFOADDRR0_OFFADDR0_MASK (0xffffff << 0)
#define CH32V103_PFIC_FIFOADDRR0_IRQID0   (0xff << 24) /* ff000000: IRQID0 */
#define CH32V103_PFIC_FIFOADDRR0_IRQID0_MASK (0xff << 24)
#define CH32V103_PFIC_FIFOADDRR1_OFFSET   0x0064
#define CH32V103_PFIC_FIFOADDRR1          (CH32V103_PFIC_BASE + CH32V103_PFIC_FIFOADDRR1_OFFSET) /* read-write */
#define CH32V103_PFIC_FIFOADDRR1_OFFADDR1 (0xffffff << 0) /* 00ffffff: OFFADDR1 */
#define CH32V103_PFIC_FIFOADDRR1_OFFADDR1_MASK (0xffffff << 0)
#define CH32V103_PFIC_FIFOADDRR1_IRQID1   (0xff << 24) /* ff000000: IRQID1 */
#define CH32V103_PFIC_FIFOADDRR1_IRQID1_MASK (0xff << 24)
#define CH32V103_PFIC_FIFOADDRR2_OFFSET   0x0068
#define CH32V103_PFIC_FIFOADDRR2          (CH32V103_PFIC_BASE + CH32V103_PFIC_FIFOADDRR2_OFFSET) /* read-write */
#define CH32V103_PFIC_FIFOADDRR2_OFFADDR2 (0xffffff << 0) /* 00ffffff: OFFADDR2 */
#define CH32V103_PFIC_FIFOADDRR2_OFFADDR2_MASK (0xffffff << 0)
#define CH32V103_PFIC_FIFOADDRR2_IRQID2   (0xff << 24) /* ff000000: IRQID2 */
#define CH32V103_PFIC_FIFOADDRR2_IRQID2_MASK (0xff << 24)
#define CH32V103_PFIC_FIFOADDRR3_OFFSET   0x006c
#define CH32V103_PFIC_FIFOADDRR3          (CH32V103_PFIC_BASE + CH32V103_PFIC_FIFOADDRR3_OFFSET) /* read-write */
#define CH32V103_PFIC_FIFOADDRR3_OFFADDR3 (0xffffff << 0) /* 00ffffff: OFFADDR3 */
#define CH32V103_PFIC_FIFOADDRR3_OFFADDR3_MASK (0xffffff << 0)
#define CH32V103_PFIC_FIFOADDRR3_IRQID3   (0xff << 24) /* ff000000: IRQID3 */
#define CH32V103_PFIC_FIFOADDRR3_IRQID3_MASK (0xff << 24)
#define CH32V103_PFIC_IENR1_OFFSET        0x0100
#define CH32V103_PFIC_IENR1               (CH32V103_PFIC_BASE + CH32V103_PFIC_IENR1_OFFSET) /* read-write */
#define CH32V103_PFIC_IENR1_INTEN         (0xfffff << 12) /* fffff000: INTEN */
#define CH32V103_PFIC_IENR1_INTEN_MASK    (0xfffff << 12)
#define CH32V103_PFIC_IENR2_OFFSET        0x0104
#define CH32V103_PFIC_IENR2               (CH32V103_PFIC_BASE + CH32V103_PFIC_IENR2_OFFSET) /* read-write */
#define CH32V103_PFIC_IENR2_INTEN         (0xfffffff << 0) /* 0fffffff: INTEN */
#define CH32V103_PFIC_IENR2_INTEN_MASK    (0xfffffff << 0)
#define CH32V103_PFIC_IRER1_OFFSET        0x0180
#define CH32V103_PFIC_IRER1               (CH32V103_PFIC_BASE + CH32V103_PFIC_IRER1_OFFSET) /* read-write */
#define CH32V103_PFIC_IRER1_INTRSET       (0xfffff << 12) /* fffff000: INTRSET */
#define CH32V103_PFIC_IRER1_INTRSET_MASK  (0xfffff << 12)
#define CH32V103_PFIC_IRER2_OFFSET        0x0184
#define CH32V103_PFIC_IRER2               (CH32V103_PFIC_BASE + CH32V103_PFIC_IRER2_OFFSET) /* read-write */
#define CH32V103_PFIC_IRER2_INTRSET       (0xfffffff << 0) /* 0fffffff: INTRSET */
#define CH32V103_PFIC_IRER2_INTRSET_MASK  (0xfffffff << 0)
#define CH32V103_PFIC_IPSR1_OFFSET        0x0200
#define CH32V103_PFIC_IPSR1               (CH32V103_PFIC_BASE + CH32V103_PFIC_IPSR1_OFFSET) /* read-write */
#define CH32V103_PFIC_IPSR1_PENDSET2_3    (0x3 << 2) /* 0000000c: PENDSET */
#define CH32V103_PFIC_IPSR1_PENDSET2_3_MASK (0x3 << 2)
#define CH32V103_PFIC_IPSR1_PENDSET12_31  (0xfffff << 12) /* fffff000: PENDSET */
#define CH32V103_PFIC_IPSR1_PENDSET12_31_MASK (0xfffff << 12)
#define CH32V103_PFIC_IPSR2_OFFSET        0x0204
#define CH32V103_PFIC_IPSR2               (CH32V103_PFIC_BASE + CH32V103_PFIC_IPSR2_OFFSET) /* read-write */
#define CH32V103_PFIC_IPSR2_PENDSET       (0xfffffff << 0) /* 0fffffff: PENDSET */
#define CH32V103_PFIC_IPSR2_PENDSET_MASK  (0xfffffff << 0)
#define CH32V103_PFIC_IPRR1_OFFSET        0x0280
#define CH32V103_PFIC_IPRR1               (CH32V103_PFIC_BASE + CH32V103_PFIC_IPRR1_OFFSET) /* read-write */
#define CH32V103_PFIC_IPRR1_PENDRESET2_3  (0x3 << 2) /* 0000000c: PENDRESET */
#define CH32V103_PFIC_IPRR1_PENDRESET2_3_MASK (0x3 << 2)
#define CH32V103_PFIC_IPRR1_PENDRESET12_31 (0xfffff << 12) /* fffff000: PENDRESET */
#define CH32V103_PFIC_IPRR1_PENDRESET12_31_MASK (0xfffff << 12)
#define CH32V103_PFIC_IPRR2_OFFSET        0x0284
#define CH32V103_PFIC_IPRR2               (CH32V103_PFIC_BASE + CH32V103_PFIC_IPRR2_OFFSET) /* read-write */
#define CH32V103_PFIC_IPRR2_PENDRESET     (0xfffffff << 0) /* 0fffffff: PENDRESET */
#define CH32V103_PFIC_IPRR2_PENDRESET_MASK (0xfffffff << 0)
#define CH32V103_PFIC_IACTR1_OFFSET       0x0300
#define CH32V103_PFIC_IACTR1              (CH32V103_PFIC_BASE + CH32V103_PFIC_IACTR1_OFFSET) /* read-write */
#define CH32V103_PFIC_IACTR1_IACTS        (0xfffff << 12) /* fffff000: IACTS */
#define CH32V103_PFIC_IACTR1_IACTS_MASK   (0xfffff << 12)
#define CH32V103_PFIC_IACTR2_OFFSET       0x0304
#define CH32V103_PFIC_IACTR2              (CH32V103_PFIC_BASE + CH32V103_PFIC_IACTR2_OFFSET) /* read-write */
#define CH32V103_PFIC_IACTR2_IACTS        (0xfffffff << 0) /* 0fffffff: IACTS */
#define CH32V103_PFIC_IACTR2_IACTS_MASK   (0xfffffff << 0)
#define CH32V103_PFIC_SCTLR_OFFSET        0x0d10
#define CH32V103_PFIC_SCTLR               (CH32V103_PFIC_BASE + CH32V103_PFIC_SCTLR_OFFSET) /* read-write */
#define CH32V103_PFIC_SCTLR_SLEEPONEXIT   (1 <<  1) /* 00000002: SLEEPONEXIT */
#define CH32V103_PFIC_SCTLR_SLEEPDEEP     (1 <<  2) /* 00000004: SLEEPDEEP */
#define CH32V103_PFIC_SCTLR_WFITOWFE      (1 <<  3) /* 00000008: WFITOWFE */
#define CH32V103_PFIC_SCTLR_SEVONPEND     (1 <<  4) /* 00000010: SEVONPEND */
#define CH32V103_PFIC_SCTLR_SETEVENT      (1 <<  5) /* 00000020: SETEVENT */
#define CH32V103_PFIC_STK_CTLR_OFFSET     0x1000
#define CH32V103_PFIC_STK_CTLR            (CH32V103_PFIC_BASE + CH32V103_PFIC_STK_CTLR_OFFSET)
#define CH32V103_PFIC_STK_CTLR_STE        (0xfffffff << 0) /* 0fffffff: STE */
#define CH32V103_PFIC_STK_CTLR_STE_MASK   (0xfffffff << 0)

/* USBD - Universal serial bus full-speed device interface */
#define CH32V103_USBD_BASE                0x40005c00
#define CH32V103_USBD_EP0R_OFFSET         0x0000
#define CH32V103_USBD_EP0R                (CH32V103_USBD_BASE + CH32V103_USBD_EP0R_OFFSET) /* read-write */
#define CH32V103_USBD_EP0R_EA             (0xf << 0) /* 0000000f: Endpoint address */
#define CH32V103_USBD_EP0R_EA_MASK        (0xf << 0)
#define CH32V103_USBD_EP0R_STAT_TX        (0x3 << 4) /* 00000030: Status bits, for transmission transfers */
#define CH32V103_USBD_EP0R_STAT_TX_MASK   (0x3 << 4)
#define CH32V103_USBD_EP0R_DTOG_TX        (1 <<  6) /* 00000040: Data Toggle, for transmission transfers */
#define CH32V103_USBD_EP0R_CTR_TX         (1 <<  7) /* 00000080: Correct Transfer for transmission */
#define CH32V103_USBD_EP0R_EP_KIND        (1 <<  8) /* 00000100: Endpoint kind */
#define CH32V103_USBD_EP0R_EP_TYPE        (0x3 << 9) /* 00000600: Endpoint type */
#define CH32V103_USBD_EP0R_EP_TYPE_MASK   (0x3 << 9)
#define CH32V103_USBD_EP0R_SETUP          (1 << 11) /* 00000800: Setup transaction completed */
#define CH32V103_USBD_EP0R_STAT_RX        (0x3 << 12) /* 00003000: Status bits, for reception transfers */
#define CH32V103_USBD_EP0R_STAT_RX_MASK   (0x3 << 12)
#define CH32V103_USBD_EP0R_DTOG_RX        (1 << 14) /* 00004000: Data Toggle, for reception transfers */
#define CH32V103_USBD_EP0R_CTR_RX         (1 << 15) /* 00008000: Correct transfer for reception */
#define CH32V103_USBD_EP1R_OFFSET         0x0004
#define CH32V103_USBD_EP1R                (CH32V103_USBD_BASE + CH32V103_USBD_EP1R_OFFSET) /* read-write */
#define CH32V103_USBD_EP1R_EA             (0xf << 0) /* 0000000f: Endpoint address */
#define CH32V103_USBD_EP1R_EA_MASK        (0xf << 0)
#define CH32V103_USBD_EP1R_STAT_TX        (0x3 << 4) /* 00000030: Status bits, for transmission transfers */
#define CH32V103_USBD_EP1R_STAT_TX_MASK   (0x3 << 4)
#define CH32V103_USBD_EP1R_DTOG_TX        (1 <<  6) /* 00000040: Data Toggle, for transmission transfers */
#define CH32V103_USBD_EP1R_CTR_TX         (1 <<  7) /* 00000080: Correct Transfer for transmission */
#define CH32V103_USBD_EP1R_EP_KIND        (1 <<  8) /* 00000100: Endpoint kind */
#define CH32V103_USBD_EP1R_EP_TYPE        (0x3 << 9) /* 00000600: Endpoint type */
#define CH32V103_USBD_EP1R_EP_TYPE_MASK   (0x3 << 9)
#define CH32V103_USBD_EP1R_SETUP          (1 << 11) /* 00000800: Setup transaction completed */
#define CH32V103_USBD_EP1R_STAT_RX        (0x3 << 12) /* 00003000: Status bits, for reception transfers */
#define CH32V103_USBD_EP1R_STAT_RX_MASK   (0x3 << 12)
#define CH32V103_USBD_EP1R_DTOG_RX        (1 << 14) /* 00004000: Data Toggle, for reception transfers */
#define CH32V103_USBD_EP1R_CTR_RX         (1 << 15) /* 00008000: Correct transfer for reception */
#define CH32V103_USBD_EP2R_OFFSET         0x0008
#define CH32V103_USBD_EP2R                (CH32V103_USBD_BASE + CH32V103_USBD_EP2R_OFFSET) /* read-write */
#define CH32V103_USBD_EP2R_EA             (0xf << 0) /* 0000000f: Endpoint address */
#define CH32V103_USBD_EP2R_EA_MASK        (0xf << 0)
#define CH32V103_USBD_EP2R_STAT_TX        (0x3 << 4) /* 00000030: Status bits, for transmission transfers */
#define CH32V103_USBD_EP2R_STAT_TX_MASK   (0x3 << 4)
#define CH32V103_USBD_EP2R_DTOG_TX        (1 <<  6) /* 00000040: Data Toggle, for transmission transfers */
#define CH32V103_USBD_EP2R_CTR_TX         (1 <<  7) /* 00000080: Correct Transfer for transmission */
#define CH32V103_USBD_EP2R_EP_KIND        (1 <<  8) /* 00000100: Endpoint kind */
#define CH32V103_USBD_EP2R_EP_TYPE        (0x3 << 9) /* 00000600: Endpoint type */
#define CH32V103_USBD_EP2R_EP_TYPE_MASK   (0x3 << 9)
#define CH32V103_USBD_EP2R_SETUP          (1 << 11) /* 00000800: Setup transaction completed */
#define CH32V103_USBD_EP2R_STAT_RX        (0x3 << 12) /* 00003000: Status bits, for reception transfers */
#define CH32V103_USBD_EP2R_STAT_RX_MASK   (0x3 << 12)
#define CH32V103_USBD_EP2R_DTOG_RX        (1 << 14) /* 00004000: Data Toggle, for reception transfers */
#define CH32V103_USBD_EP2R_CTR_RX         (1 << 15) /* 00008000: Correct transfer for reception */
#define CH32V103_USBD_EP3R_OFFSET         0x000c
#define CH32V103_USBD_EP3R                (CH32V103_USBD_BASE + CH32V103_USBD_EP3R_OFFSET) /* read-write */
#define CH32V103_USBD_EP3R_EA             (0xf << 0) /* 0000000f: Endpoint address */
#define CH32V103_USBD_EP3R_EA_MASK        (0xf << 0)
#define CH32V103_USBD_EP3R_STAT_TX        (0x3 << 4) /* 00000030: Status bits, for transmission transfers */
#define CH32V103_USBD_EP3R_STAT_TX_MASK   (0x3 << 4)
#define CH32V103_USBD_EP3R_DTOG_TX        (1 <<  6) /* 00000040: Data Toggle, for transmission transfers */
#define CH32V103_USBD_EP3R_CTR_TX         (1 <<  7) /* 00000080: Correct Transfer for transmission */
#define CH32V103_USBD_EP3R_EP_KIND        (1 <<  8) /* 00000100: Endpoint kind */
#define CH32V103_USBD_EP3R_EP_TYPE        (0x3 << 9) /* 00000600: Endpoint type */
#define CH32V103_USBD_EP3R_EP_TYPE_MASK   (0x3 << 9)
#define CH32V103_USBD_EP3R_SETUP          (1 << 11) /* 00000800: Setup transaction completed */
#define CH32V103_USBD_EP3R_STAT_RX        (0x3 << 12) /* 00003000: Status bits, for reception transfers */
#define CH32V103_USBD_EP3R_STAT_RX_MASK   (0x3 << 12)
#define CH32V103_USBD_EP3R_DTOG_RX        (1 << 14) /* 00004000: Data Toggle, for reception transfers */
#define CH32V103_USBD_EP3R_CTR_RX         (1 << 15) /* 00008000: Correct transfer for reception */
#define CH32V103_USBD_EP4R_OFFSET         0x0010
#define CH32V103_USBD_EP4R                (CH32V103_USBD_BASE + CH32V103_USBD_EP4R_OFFSET) /* read-write */
#define CH32V103_USBD_EP4R_EA             (0xf << 0) /* 0000000f: Endpoint address */
#define CH32V103_USBD_EP4R_EA_MASK        (0xf << 0)
#define CH32V103_USBD_EP4R_STAT_TX        (0x3 << 4) /* 00000030: Status bits, for transmission transfers */
#define CH32V103_USBD_EP4R_STAT_TX_MASK   (0x3 << 4)
#define CH32V103_USBD_EP4R_DTOG_TX        (1 <<  6) /* 00000040: Data Toggle, for transmission transfers */
#define CH32V103_USBD_EP4R_CTR_TX         (1 <<  7) /* 00000080: Correct Transfer for transmission */
#define CH32V103_USBD_EP4R_EP_KIND        (1 <<  8) /* 00000100: Endpoint kind */
#define CH32V103_USBD_EP4R_EP_TYPE        (0x3 << 9) /* 00000600: Endpoint type */
#define CH32V103_USBD_EP4R_EP_TYPE_MASK   (0x3 << 9)
#define CH32V103_USBD_EP4R_SETUP          (1 << 11) /* 00000800: Setup transaction completed */
#define CH32V103_USBD_EP4R_STAT_RX        (0x3 << 12) /* 00003000: Status bits, for reception transfers */
#define CH32V103_USBD_EP4R_STAT_RX_MASK   (0x3 << 12)
#define CH32V103_USBD_EP4R_DTOG_RX        (1 << 14) /* 00004000: Data Toggle, for reception transfers */
#define CH32V103_USBD_EP4R_CTR_RX         (1 << 15) /* 00008000: Correct transfer for reception */
#define CH32V103_USBD_EP5R_OFFSET         0x0014
#define CH32V103_USBD_EP5R                (CH32V103_USBD_BASE + CH32V103_USBD_EP5R_OFFSET) /* read-write */
#define CH32V103_USBD_EP5R_EA             (0xf << 0) /* 0000000f: Endpoint address */
#define CH32V103_USBD_EP5R_EA_MASK        (0xf << 0)
#define CH32V103_USBD_EP5R_STAT_TX        (0x3 << 4) /* 00000030: Status bits, for transmission transfers */
#define CH32V103_USBD_EP5R_STAT_TX_MASK   (0x3 << 4)
#define CH32V103_USBD_EP5R_DTOG_TX        (1 <<  6) /* 00000040: Data Toggle, for transmission transfers */
#define CH32V103_USBD_EP5R_CTR_TX         (1 <<  7) /* 00000080: Correct Transfer for transmission */
#define CH32V103_USBD_EP5R_EP_KIND        (1 <<  8) /* 00000100: Endpoint kind */
#define CH32V103_USBD_EP5R_EP_TYPE        (0x3 << 9) /* 00000600: Endpoint type */
#define CH32V103_USBD_EP5R_EP_TYPE_MASK   (0x3 << 9)
#define CH32V103_USBD_EP5R_SETUP          (1 << 11) /* 00000800: Setup transaction completed */
#define CH32V103_USBD_EP5R_STAT_RX        (0x3 << 12) /* 00003000: Status bits, for reception transfers */
#define CH32V103_USBD_EP5R_STAT_RX_MASK   (0x3 << 12)
#define CH32V103_USBD_EP5R_DTOG_RX        (1 << 14) /* 00004000: Data Toggle, for reception transfers */
#define CH32V103_USBD_EP5R_CTR_RX         (1 << 15) /* 00008000: Correct transfer for reception */
#define CH32V103_USBD_EP6R_OFFSET         0x0018
#define CH32V103_USBD_EP6R                (CH32V103_USBD_BASE + CH32V103_USBD_EP6R_OFFSET) /* read-write */
#define CH32V103_USBD_EP6R_EA             (0xf << 0) /* 0000000f: Endpoint address */
#define CH32V103_USBD_EP6R_EA_MASK        (0xf << 0)
#define CH32V103_USBD_EP6R_STAT_TX        (0x3 << 4) /* 00000030: Status bits, for transmission transfers */
#define CH32V103_USBD_EP6R_STAT_TX_MASK   (0x3 << 4)
#define CH32V103_USBD_EP6R_DTOG_TX        (1 <<  6) /* 00000040: Data Toggle, for transmission transfers */
#define CH32V103_USBD_EP6R_CTR_TX         (1 <<  7) /* 00000080: Correct Transfer for transmission */
#define CH32V103_USBD_EP6R_EP_KIND        (1 <<  8) /* 00000100: Endpoint kind */
#define CH32V103_USBD_EP6R_EP_TYPE        (0x3 << 9) /* 00000600: Endpoint type */
#define CH32V103_USBD_EP6R_EP_TYPE_MASK   (0x3 << 9)
#define CH32V103_USBD_EP6R_SETUP          (1 << 11) /* 00000800: Setup transaction completed */
#define CH32V103_USBD_EP6R_STAT_RX        (0x3 << 12) /* 00003000: Status bits, for reception transfers */
#define CH32V103_USBD_EP6R_STAT_RX_MASK   (0x3 << 12)
#define CH32V103_USBD_EP6R_DTOG_RX        (1 << 14) /* 00004000: Data Toggle, for reception transfers */
#define CH32V103_USBD_EP6R_CTR_RX         (1 << 15) /* 00008000: Correct transfer for reception */
#define CH32V103_USBD_EP7R_OFFSET         0x001c
#define CH32V103_USBD_EP7R                (CH32V103_USBD_BASE + CH32V103_USBD_EP7R_OFFSET) /* read-write */
#define CH32V103_USBD_EP7R_EA             (0xf << 0) /* 0000000f: Endpoint address */
#define CH32V103_USBD_EP7R_EA_MASK        (0xf << 0)
#define CH32V103_USBD_EP7R_STAT_TX        (0x3 << 4) /* 00000030: Status bits, for transmission transfers */
#define CH32V103_USBD_EP7R_STAT_TX_MASK   (0x3 << 4)
#define CH32V103_USBD_EP7R_DTOG_TX        (1 <<  6) /* 00000040: Data Toggle, for transmission transfers */
#define CH32V103_USBD_EP7R_CTR_TX         (1 <<  7) /* 00000080: Correct Transfer for transmission */
#define CH32V103_USBD_EP7R_EP_KIND        (1 <<  8) /* 00000100: Endpoint kind */
#define CH32V103_USBD_EP7R_EP_TYPE        (0x3 << 9) /* 00000600: Endpoint type */
#define CH32V103_USBD_EP7R_EP_TYPE_MASK   (0x3 << 9)
#define CH32V103_USBD_EP7R_SETUP          (1 << 11) /* 00000800: Setup transaction completed */
#define CH32V103_USBD_EP7R_STAT_RX        (0x3 << 12) /* 00003000: Status bits, for reception transfers */
#define CH32V103_USBD_EP7R_STAT_RX_MASK   (0x3 << 12)
#define CH32V103_USBD_EP7R_DTOG_RX        (1 << 14) /* 00004000: Data Toggle, for reception transfers */
#define CH32V103_USBD_EP7R_CTR_RX         (1 << 15) /* 00008000: Correct transfer for reception */
#define CH32V103_USBD_CNTR_OFFSET         0x0040
#define CH32V103_USBD_CNTR                (CH32V103_USBD_BASE + CH32V103_USBD_CNTR_OFFSET) /* read-write */
#define CH32V103_USBD_CNTR_FRES           (1 <<  0) /* 00000001: Force USB Reset */
#define CH32V103_USBD_CNTR_PDWN           (1 <<  1) /* 00000002: Power down */
#define CH32V103_USBD_CNTR_LPMODE         (1 <<  2) /* 00000004: Low-power mode */
#define CH32V103_USBD_CNTR_FSUSP          (1 <<  3) /* 00000008: Force suspend */
#define CH32V103_USBD_CNTR_RESUME         (1 <<  4) /* 00000010: Resume request */
#define CH32V103_USBD_CNTR_ESOFM          (1 <<  8) /* 00000100: Expected start of frame interrupt mask */
#define CH32V103_USBD_CNTR_SOFM           (1 <<  9) /* 00000200: Start of frame interrupt mask */
#define CH32V103_USBD_CNTR_RESETM         (1 << 10) /* 00000400: USB reset interrupt mask */
#define CH32V103_USBD_CNTR_SUSPM          (1 << 11) /* 00000800: Suspend mode interrupt mask */
#define CH32V103_USBD_CNTR_WKUPM          (1 << 12) /* 00001000: Wakeup interrupt mask */
#define CH32V103_USBD_CNTR_ERRM           (1 << 13) /* 00002000: Error interrupt mask */
#define CH32V103_USBD_CNTR_PMAOVRM        (1 << 14) /* 00004000: Packet memory area over / underrun interrupt mask */
#define CH32V103_USBD_CNTR_CTRM           (1 << 15) /* 00008000: Correct transfer interrupt mask */
#define CH32V103_USBD_ISTR_OFFSET         0x0044
#define CH32V103_USBD_ISTR                (CH32V103_USBD_BASE + CH32V103_USBD_ISTR_OFFSET) /* read-write */
#define CH32V103_USBD_ISTR_EP_ID          (0xf << 0) /* 0000000f: Endpoint Identifier */
#define CH32V103_USBD_ISTR_EP_ID_MASK     (0xf << 0)
#define CH32V103_USBD_ISTR_DIR            (1 <<  4) /* 00000010: Direction of transaction */
#define CH32V103_USBD_ISTR_ESOF           (1 <<  8) /* 00000100: Expected start frame */
#define CH32V103_USBD_ISTR_SOF            (1 <<  9) /* 00000200: start of frame */
#define CH32V103_USBD_ISTR_RESET          (1 << 10) /* 00000400: reset request */
#define CH32V103_USBD_ISTR_SUSP           (1 << 11) /* 00000800: Suspend mode request */
#define CH32V103_USBD_ISTR_WKUP           (1 << 12) /* 00001000: Wakeup */
#define CH32V103_USBD_ISTR_ERR            (1 << 13) /* 00002000: Error */
#define CH32V103_USBD_ISTR_PMAOVR         (1 << 14) /* 00004000: Packet memory area over / underrun */
#define CH32V103_USBD_ISTR_CTR            (1 << 15) /* 00008000: Correct transfer */
#define CH32V103_USBD_FNR_OFFSET          0x0048
#define CH32V103_USBD_FNR                 (CH32V103_USBD_BASE + CH32V103_USBD_FNR_OFFSET) /* read-only */
#define CH32V103_USBD_FNR_FN              (0x7ff << 0) /* 000007ff: Frame number */
#define CH32V103_USBD_FNR_FN_MASK         (0x7ff << 0)
#define CH32V103_USBD_FNR_LSOF            (0x3 << 11) /* 00001800: Lost SOF */
#define CH32V103_USBD_FNR_LSOF_MASK       (0x3 << 11)
#define CH32V103_USBD_FNR_LCK             (1 << 13) /* 00002000: Locked */
#define CH32V103_USBD_FNR_RXDM            (1 << 14) /* 00004000: Receive data - line status */
#define CH32V103_USBD_FNR_RXDP            (1 << 15) /* 00008000: Receive data + line status */
#define CH32V103_USBD_DADDR_OFFSET        0x004c
#define CH32V103_USBD_DADDR               (CH32V103_USBD_BASE + CH32V103_USBD_DADDR_OFFSET) /* read-write */
#define CH32V103_USBD_DADDR_ADD           (0x7f << 0) /* 0000007f: Device address */
#define CH32V103_USBD_DADDR_ADD_MASK      (0x7f << 0)
#define CH32V103_USBD_DADDR_EF            (1 <<  7) /* 00000080: Enable function */
#define CH32V103_USBD_BTABLE_OFFSET       0x0050
#define CH32V103_USBD_BTABLE              (CH32V103_USBD_BASE + CH32V103_USBD_BTABLE_OFFSET) /* read-write */
#define CH32V103_USBD_BTABLE_BTABLE       (0x1fff << 3) /* 0000fff8: Buffer table */
#define CH32V103_USBD_BTABLE_BTABLE_MASK  (0x1fff << 3)

/* GPIOB is derived from GPIOA. */
#define CH32V103_GPIOB_BASE               0x40010c00
#define CH32V103_GPIOB_CFGLR_OFFSET       0x0000
#define CH32V103_GPIOB_CFGLR              (CH32V103_GPIOB_BASE + CH32V103_GPIOB_CFGLR_OFFSET)
#define CH32V103_GPIOB_CFGLR_MODE0        (0x3 << 0) /* 00000003: Port n.0 mode bits */
#define CH32V103_GPIOB_CFGLR_MODE0_MASK   (0x3 << 0)
#define CH32V103_GPIOB_CFGLR_CNF0         (0x3 << 2) /* 0000000c: Port n.0 configuration bits */
#define CH32V103_GPIOB_CFGLR_CNF0_MASK    (0x3 << 2)
#define CH32V103_GPIOB_CFGLR_MODE1        (0x3 << 4) /* 00000030: Port n.1 mode bits */
#define CH32V103_GPIOB_CFGLR_MODE1_MASK   (0x3 << 4)
#define CH32V103_GPIOB_CFGLR_CNF1         (0x3 << 6) /* 000000c0: Port n.1 configuration bits */
#define CH32V103_GPIOB_CFGLR_CNF1_MASK    (0x3 << 6)
#define CH32V103_GPIOB_CFGLR_MODE2        (0x3 << 8) /* 00000300: Port n.2 mode bits */
#define CH32V103_GPIOB_CFGLR_MODE2_MASK   (0x3 << 8)
#define CH32V103_GPIOB_CFGLR_CNF2         (0x3 << 10) /* 00000c00: Port n.2 configuration bits */
#define CH32V103_GPIOB_CFGLR_CNF2_MASK    (0x3 << 10)
#define CH32V103_GPIOB_CFGLR_MODE3        (0x3 << 12) /* 00003000: Port n.3 mode bits */
#define CH32V103_GPIOB_CFGLR_MODE3_MASK   (0x3 << 12)
#define CH32V103_GPIOB_CFGLR_CNF3         (0x3 << 14) /* 0000c000: Port n.3 configuration bits */
#define CH32V103_GPIOB_CFGLR_CNF3_MASK    (0x3 << 14)
#define CH32V103_GPIOB_CFGLR_MODE4        (0x3 << 16) /* 00030000: Port n.4 mode bits */
#define CH32V103_GPIOB_CFGLR_MODE4_MASK   (0x3 << 16)
#define CH32V103_GPIOB_CFGLR_CNF4         (0x3 << 18) /* 000c0000: Port n.4 configuration bits */
#define CH32V103_GPIOB_CFGLR_CNF4_MASK    (0x3 << 18)
#define CH32V103_GPIOB_CFGLR_MODE5        (0x3 << 20) /* 00300000: Port n.5 mode bits */
#define CH32V103_GPIOB_CFGLR_MODE5_MASK   (0x3 << 20)
#define CH32V103_GPIOB_CFGLR_CNF5         (0x3 << 22) /* 00c00000: Port n.5 configuration bits */
#define CH32V103_GPIOB_CFGLR_CNF5_MASK    (0x3 << 22)
#define CH32V103_GPIOB_CFGLR_MODE6        (0x3 << 24) /* 03000000: Port n.6 mode bits */
#define CH32V103_GPIOB_CFGLR_MODE6_MASK   (0x3 << 24)
#define CH32V103_GPIOB_CFGLR_CNF6         (0x3 << 26) /* 0c000000: Port n.6 configuration bits */
#define CH32V103_GPIOB_CFGLR_CNF6_MASK    (0x3 << 26)
#define CH32V103_GPIOB_CFGLR_MODE7        (0x3 << 28) /* 30000000: Port n.7 mode bits */
#define CH32V103_GPIOB_CFGLR_MODE7_MASK   (0x3 << 28)
#define CH32V103_GPIOB_CFGLR_CNF7         (0x3 << 30) /* c0000000: Port n.7 configuration bits */
#define CH32V103_GPIOB_CFGLR_CNF7_MASK    (0x3 << 30)
#define CH32V103_GPIOB_CFGHR_OFFSET       0x0004
#define CH32V103_GPIOB_CFGHR              (CH32V103_GPIOB_BASE + CH32V103_GPIOB_CFGHR_OFFSET)
#define CH32V103_GPIOB_CFGHR_MODE8        (0x3 << 0) /* 00000003: Port n.8 mode bits */
#define CH32V103_GPIOB_CFGHR_MODE8_MASK   (0x3 << 0)
#define CH32V103_GPIOB_CFGHR_CNF8         (0x3 << 2) /* 0000000c: Port n.8 configuration bits */
#define CH32V103_GPIOB_CFGHR_CNF8_MASK    (0x3 << 2)
#define CH32V103_GPIOB_CFGHR_MODE9        (0x3 << 4) /* 00000030: Port n.9 mode bits */
#define CH32V103_GPIOB_CFGHR_MODE9_MASK   (0x3 << 4)
#define CH32V103_GPIOB_CFGHR_CNF9         (0x3 << 6) /* 000000c0: Port n.9 configuration bits */
#define CH32V103_GPIOB_CFGHR_CNF9_MASK    (0x3 << 6)
#define CH32V103_GPIOB_CFGHR_MODE10       (0x3 << 8) /* 00000300: Port n.10 mode bits */
#define CH32V103_GPIOB_CFGHR_MODE10_MASK  (0x3 << 8)
#define CH32V103_GPIOB_CFGHR_CNF10        (0x3 << 10) /* 00000c00: Port n.10 configuration bits */
#define CH32V103_GPIOB_CFGHR_CNF10_MASK   (0x3 << 10)
#define CH32V103_GPIOB_CFGHR_MODE11       (0x3 << 12) /* 00003000: Port n.11 mode bits */
#define CH32V103_GPIOB_CFGHR_MODE11_MASK  (0x3 << 12)
#define CH32V103_GPIOB_CFGHR_CNF11        (0x3 << 14) /* 0000c000: Port n.11 configuration bits */
#define CH32V103_GPIOB_CFGHR_CNF11_MASK   (0x3 << 14)
#define CH32V103_GPIOB_CFGHR_MODE12       (0x3 << 16) /* 00030000: Port n.12 mode bits */
#define CH32V103_GPIOB_CFGHR_MODE12_MASK  (0x3 << 16)
#define CH32V103_GPIOB_CFGHR_CNF12        (0x3 << 18) /* 000c0000: Port n.12 configuration bits */
#define CH32V103_GPIOB_CFGHR_CNF12_MASK   (0x3 << 18)
#define CH32V103_GPIOB_CFGHR_MODE13       (0x3 << 20) /* 00300000: Port n.13 mode bits */
#define CH32V103_GPIOB_CFGHR_MODE13_MASK  (0x3 << 20)
#define CH32V103_GPIOB_CFGHR_CNF13        (0x3 << 22) /* 00c00000: Port n.13 configuration bits */
#define CH32V103_GPIOB_CFGHR_CNF13_MASK   (0x3 << 22)
#define CH32V103_GPIOB_CFGHR_MODE14       (0x3 << 24) /* 03000000: Port n.14 mode bits */
#define CH32V103_GPIOB_CFGHR_MODE14_MASK  (0x3 << 24)
#define CH32V103_GPIOB_CFGHR_CNF14        (0x3 << 26) /* 0c000000: Port n.14 configuration bits */
#define CH32V103_GPIOB_CFGHR_CNF14_MASK   (0x3 << 26)
#define CH32V103_GPIOB_CFGHR_MODE15       (0x3 << 28) /* 30000000: Port n.15 mode bits */
#define CH32V103_GPIOB_CFGHR_MODE15_MASK  (0x3 << 28)
#define CH32V103_GPIOB_CFGHR_CNF15        (0x3 << 30) /* c0000000: Port n.15 configuration bits */
#define CH32V103_GPIOB_CFGHR_CNF15_MASK   (0x3 << 30)
#define CH32V103_GPIOB_INDR_OFFSET        0x0008
#define CH32V103_GPIOB_INDR               (CH32V103_GPIOB_BASE + CH32V103_GPIOB_INDR_OFFSET)
#define CH32V103_GPIOB_INDR_IDR0          (1 <<  0) /* 00000001: Port input data */
#define CH32V103_GPIOB_INDR_IDR1          (1 <<  1) /* 00000002: Port input data */
#define CH32V103_GPIOB_INDR_IDR2          (1 <<  2) /* 00000004: Port input data */
#define CH32V103_GPIOB_INDR_IDR3          (1 <<  3) /* 00000008: Port input data */
#define CH32V103_GPIOB_INDR_IDR4          (1 <<  4) /* 00000010: Port input data */
#define CH32V103_GPIOB_INDR_IDR5          (1 <<  5) /* 00000020: Port input data */
#define CH32V103_GPIOB_INDR_IDR6          (1 <<  6) /* 00000040: Port input data */
#define CH32V103_GPIOB_INDR_IDR7          (1 <<  7) /* 00000080: Port input data */
#define CH32V103_GPIOB_INDR_IDR8          (1 <<  8) /* 00000100: Port input data */
#define CH32V103_GPIOB_INDR_IDR9          (1 <<  9) /* 00000200: Port input data */
#define CH32V103_GPIOB_INDR_IDR10         (1 << 10) /* 00000400: Port input data */
#define CH32V103_GPIOB_INDR_IDR11         (1 << 11) /* 00000800: Port input data */
#define CH32V103_GPIOB_INDR_IDR12         (1 << 12) /* 00001000: Port input data */
#define CH32V103_GPIOB_INDR_IDR13         (1 << 13) /* 00002000: Port input data */
#define CH32V103_GPIOB_INDR_IDR14         (1 << 14) /* 00004000: Port input data */
#define CH32V103_GPIOB_INDR_IDR15         (1 << 15) /* 00008000: Port input data */
#define CH32V103_GPIOB_OUTDR_OFFSET       0x000c
#define CH32V103_GPIOB_OUTDR              (CH32V103_GPIOB_BASE + CH32V103_GPIOB_OUTDR_OFFSET)
#define CH32V103_GPIOB_OUTDR_ODR0         (1 <<  0) /* 00000001: Port output data */
#define CH32V103_GPIOB_OUTDR_ODR1         (1 <<  1) /* 00000002: Port output data */
#define CH32V103_GPIOB_OUTDR_ODR2         (1 <<  2) /* 00000004: Port output data */
#define CH32V103_GPIOB_OUTDR_ODR3         (1 <<  3) /* 00000008: Port output data */
#define CH32V103_GPIOB_OUTDR_ODR4         (1 <<  4) /* 00000010: Port output data */
#define CH32V103_GPIOB_OUTDR_ODR5         (1 <<  5) /* 00000020: Port output data */
#define CH32V103_GPIOB_OUTDR_ODR6         (1 <<  6) /* 00000040: Port output data */
#define CH32V103_GPIOB_OUTDR_ODR7         (1 <<  7) /* 00000080: Port output data */
#define CH32V103_GPIOB_OUTDR_ODR8         (1 <<  8) /* 00000100: Port output data */
#define CH32V103_GPIOB_OUTDR_ODR9         (1 <<  9) /* 00000200: Port output data */
#define CH32V103_GPIOB_OUTDR_ODR10        (1 << 10) /* 00000400: Port output data */
#define CH32V103_GPIOB_OUTDR_ODR11        (1 << 11) /* 00000800: Port output data */
#define CH32V103_GPIOB_OUTDR_ODR12        (1 << 12) /* 00001000: Port output data */
#define CH32V103_GPIOB_OUTDR_ODR13        (1 << 13) /* 00002000: Port output data */
#define CH32V103_GPIOB_OUTDR_ODR14        (1 << 14) /* 00004000: Port output data */
#define CH32V103_GPIOB_OUTDR_ODR15        (1 << 15) /* 00008000: Port output data */
#define CH32V103_GPIOB_BSHR_OFFSET        0x0010
#define CH32V103_GPIOB_BSHR               (CH32V103_GPIOB_BASE + CH32V103_GPIOB_BSHR_OFFSET)
#define CH32V103_GPIOB_BSHR_BS0           (1 <<  0) /* 00000001: Set bit 0 */
#define CH32V103_GPIOB_BSHR_BS1           (1 <<  1) /* 00000002: Set bit 1 */
#define CH32V103_GPIOB_BSHR_BS2           (1 <<  2) /* 00000004: Set bit 1 */
#define CH32V103_GPIOB_BSHR_BS3           (1 <<  3) /* 00000008: Set bit 3 */
#define CH32V103_GPIOB_BSHR_BS4           (1 <<  4) /* 00000010: Set bit 4 */
#define CH32V103_GPIOB_BSHR_BS5           (1 <<  5) /* 00000020: Set bit 5 */
#define CH32V103_GPIOB_BSHR_BS6           (1 <<  6) /* 00000040: Set bit 6 */
#define CH32V103_GPIOB_BSHR_BS7           (1 <<  7) /* 00000080: Set bit 7 */
#define CH32V103_GPIOB_BSHR_BS8           (1 <<  8) /* 00000100: Set bit 8 */
#define CH32V103_GPIOB_BSHR_BS9           (1 <<  9) /* 00000200: Set bit 9 */
#define CH32V103_GPIOB_BSHR_BS10          (1 << 10) /* 00000400: Set bit 10 */
#define CH32V103_GPIOB_BSHR_BS11          (1 << 11) /* 00000800: Set bit 11 */
#define CH32V103_GPIOB_BSHR_BS12          (1 << 12) /* 00001000: Set bit 12 */
#define CH32V103_GPIOB_BSHR_BS13          (1 << 13) /* 00002000: Set bit 13 */
#define CH32V103_GPIOB_BSHR_BS14          (1 << 14) /* 00004000: Set bit 14 */
#define CH32V103_GPIOB_BSHR_BS15          (1 << 15) /* 00008000: Set bit 15 */
#define CH32V103_GPIOB_BSHR_BR0           (1 << 16) /* 00010000: Reset bit 0 */
#define CH32V103_GPIOB_BSHR_BR1           (1 << 17) /* 00020000: Reset bit 1 */
#define CH32V103_GPIOB_BSHR_BR2           (1 << 18) /* 00040000: Reset bit 2 */
#define CH32V103_GPIOB_BSHR_BR3           (1 << 19) /* 00080000: Reset bit 3 */
#define CH32V103_GPIOB_BSHR_BR4           (1 << 20) /* 00100000: Reset bit 4 */
#define CH32V103_GPIOB_BSHR_BR5           (1 << 21) /* 00200000: Reset bit 5 */
#define CH32V103_GPIOB_BSHR_BR6           (1 << 22) /* 00400000: Reset bit 6 */
#define CH32V103_GPIOB_BSHR_BR7           (1 << 23) /* 00800000: Reset bit 7 */
#define CH32V103_GPIOB_BSHR_BR8           (1 << 24) /* 01000000: Reset bit 8 */
#define CH32V103_GPIOB_BSHR_BR9           (1 << 25) /* 02000000: Reset bit 9 */
#define CH32V103_GPIOB_BSHR_BR10          (1 << 26) /* 04000000: Reset bit 10 */
#define CH32V103_GPIOB_BSHR_BR11          (1 << 27) /* 08000000: Reset bit 11 */
#define CH32V103_GPIOB_BSHR_BR12          (1 << 28) /* 10000000: Reset bit 12 */
#define CH32V103_GPIOB_BSHR_BR13          (1 << 29) /* 20000000: Reset bit 13 */
#define CH32V103_GPIOB_BSHR_BR14          (1 << 30) /* 40000000: Reset bit 14 */
#define CH32V103_GPIOB_BSHR_BR15          (1 << 31) /* 80000000: Reset bit 15 */
#define CH32V103_GPIOB_BCR_OFFSET         0x0014
#define CH32V103_GPIOB_BCR                (CH32V103_GPIOB_BASE + CH32V103_GPIOB_BCR_OFFSET)
#define CH32V103_GPIOB_BCR_BR0            (1 <<  0) /* 00000001: Reset bit 0 */
#define CH32V103_GPIOB_BCR_BR1            (1 <<  1) /* 00000002: Reset bit 1 */
#define CH32V103_GPIOB_BCR_BR2            (1 <<  2) /* 00000004: Reset bit 1 */
#define CH32V103_GPIOB_BCR_BR3            (1 <<  3) /* 00000008: Reset bit 3 */
#define CH32V103_GPIOB_BCR_BR4            (1 <<  4) /* 00000010: Reset bit 4 */
#define CH32V103_GPIOB_BCR_BR5            (1 <<  5) /* 00000020: Reset bit 5 */
#define CH32V103_GPIOB_BCR_BR6            (1 <<  6) /* 00000040: Reset bit 6 */
#define CH32V103_GPIOB_BCR_BR7            (1 <<  7) /* 00000080: Reset bit 7 */
#define CH32V103_GPIOB_BCR_BR8            (1 <<  8) /* 00000100: Reset bit 8 */
#define CH32V103_GPIOB_BCR_BR9            (1 <<  9) /* 00000200: Reset bit 9 */
#define CH32V103_GPIOB_BCR_BR10           (1 << 10) /* 00000400: Reset bit 10 */
#define CH32V103_GPIOB_BCR_BR11           (1 << 11) /* 00000800: Reset bit 11 */
#define CH32V103_GPIOB_BCR_BR12           (1 << 12) /* 00001000: Reset bit 12 */
#define CH32V103_GPIOB_BCR_BR13           (1 << 13) /* 00002000: Reset bit 13 */
#define CH32V103_GPIOB_BCR_BR14           (1 << 14) /* 00004000: Reset bit 14 */
#define CH32V103_GPIOB_BCR_BR15           (1 << 15) /* 00008000: Reset bit 15 */
#define CH32V103_GPIOB_LCKR_OFFSET        0x0018
#define CH32V103_GPIOB_LCKR               (CH32V103_GPIOB_BASE + CH32V103_GPIOB_LCKR_OFFSET)
#define CH32V103_GPIOB_LCKR_LCK0          (1 <<  0) /* 00000001: Port A Lock bit 0 */
#define CH32V103_GPIOB_LCKR_LCK1          (1 <<  1) /* 00000002: Port A Lock bit 1 */
#define CH32V103_GPIOB_LCKR_LCK2          (1 <<  2) /* 00000004: Port A Lock bit 2 */
#define CH32V103_GPIOB_LCKR_LCK3          (1 <<  3) /* 00000008: Port A Lock bit 3 */
#define CH32V103_GPIOB_LCKR_LCK4          (1 <<  4) /* 00000010: Port A Lock bit 4 */
#define CH32V103_GPIOB_LCKR_LCK5          (1 <<  5) /* 00000020: Port A Lock bit 5 */
#define CH32V103_GPIOB_LCKR_LCK6          (1 <<  6) /* 00000040: Port A Lock bit 6 */
#define CH32V103_GPIOB_LCKR_LCK7          (1 <<  7) /* 00000080: Port A Lock bit 7 */
#define CH32V103_GPIOB_LCKR_LCK8          (1 <<  8) /* 00000100: Port A Lock bit 8 */
#define CH32V103_GPIOB_LCKR_LCK9          (1 <<  9) /* 00000200: Port A Lock bit 9 */
#define CH32V103_GPIOB_LCKR_LCK10         (1 << 10) /* 00000400: Port A Lock bit 10 */
#define CH32V103_GPIOB_LCKR_LCK11         (1 << 11) /* 00000800: Port A Lock bit 11 */
#define CH32V103_GPIOB_LCKR_LCK12         (1 << 12) /* 00001000: Port A Lock bit 12 */
#define CH32V103_GPIOB_LCKR_LCK13         (1 << 13) /* 00002000: Port A Lock bit 13 */
#define CH32V103_GPIOB_LCKR_LCK14         (1 << 14) /* 00004000: Port A Lock bit 14 */
#define CH32V103_GPIOB_LCKR_LCK15         (1 << 15) /* 00008000: Port A Lock bit 15 */
#define CH32V103_GPIOB_LCKR_LCKK          (1 << 16) /* 00010000: Lock key */

/* GPIOC is derived from GPIOA. */
#define CH32V103_GPIOC_BASE               0x40011000
#define CH32V103_GPIOC_CFGLR_OFFSET       0x0000
#define CH32V103_GPIOC_CFGLR              (CH32V103_GPIOC_BASE + CH32V103_GPIOC_CFGLR_OFFSET)
#define CH32V103_GPIOC_CFGLR_MODE0        (0x3 << 0) /* 00000003: Port n.0 mode bits */
#define CH32V103_GPIOC_CFGLR_MODE0_MASK   (0x3 << 0)
#define CH32V103_GPIOC_CFGLR_CNF0         (0x3 << 2) /* 0000000c: Port n.0 configuration bits */
#define CH32V103_GPIOC_CFGLR_CNF0_MASK    (0x3 << 2)
#define CH32V103_GPIOC_CFGLR_MODE1        (0x3 << 4) /* 00000030: Port n.1 mode bits */
#define CH32V103_GPIOC_CFGLR_MODE1_MASK   (0x3 << 4)
#define CH32V103_GPIOC_CFGLR_CNF1         (0x3 << 6) /* 000000c0: Port n.1 configuration bits */
#define CH32V103_GPIOC_CFGLR_CNF1_MASK    (0x3 << 6)
#define CH32V103_GPIOC_CFGLR_MODE2        (0x3 << 8) /* 00000300: Port n.2 mode bits */
#define CH32V103_GPIOC_CFGLR_MODE2_MASK   (0x3 << 8)
#define CH32V103_GPIOC_CFGLR_CNF2         (0x3 << 10) /* 00000c00: Port n.2 configuration bits */
#define CH32V103_GPIOC_CFGLR_CNF2_MASK    (0x3 << 10)
#define CH32V103_GPIOC_CFGLR_MODE3        (0x3 << 12) /* 00003000: Port n.3 mode bits */
#define CH32V103_GPIOC_CFGLR_MODE3_MASK   (0x3 << 12)
#define CH32V103_GPIOC_CFGLR_CNF3         (0x3 << 14) /* 0000c000: Port n.3 configuration bits */
#define CH32V103_GPIOC_CFGLR_CNF3_MASK    (0x3 << 14)
#define CH32V103_GPIOC_CFGLR_MODE4        (0x3 << 16) /* 00030000: Port n.4 mode bits */
#define CH32V103_GPIOC_CFGLR_MODE4_MASK   (0x3 << 16)
#define CH32V103_GPIOC_CFGLR_CNF4         (0x3 << 18) /* 000c0000: Port n.4 configuration bits */
#define CH32V103_GPIOC_CFGLR_CNF4_MASK    (0x3 << 18)
#define CH32V103_GPIOC_CFGLR_MODE5        (0x3 << 20) /* 00300000: Port n.5 mode bits */
#define CH32V103_GPIOC_CFGLR_MODE5_MASK   (0x3 << 20)
#define CH32V103_GPIOC_CFGLR_CNF5         (0x3 << 22) /* 00c00000: Port n.5 configuration bits */
#define CH32V103_GPIOC_CFGLR_CNF5_MASK    (0x3 << 22)
#define CH32V103_GPIOC_CFGLR_MODE6        (0x3 << 24) /* 03000000: Port n.6 mode bits */
#define CH32V103_GPIOC_CFGLR_MODE6_MASK   (0x3 << 24)
#define CH32V103_GPIOC_CFGLR_CNF6         (0x3 << 26) /* 0c000000: Port n.6 configuration bits */
#define CH32V103_GPIOC_CFGLR_CNF6_MASK    (0x3 << 26)
#define CH32V103_GPIOC_CFGLR_MODE7        (0x3 << 28) /* 30000000: Port n.7 mode bits */
#define CH32V103_GPIOC_CFGLR_MODE7_MASK   (0x3 << 28)
#define CH32V103_GPIOC_CFGLR_CNF7         (0x3 << 30) /* c0000000: Port n.7 configuration bits */
#define CH32V103_GPIOC_CFGLR_CNF7_MASK    (0x3 << 30)
#define CH32V103_GPIOC_CFGHR_OFFSET       0x0004
#define CH32V103_GPIOC_CFGHR              (CH32V103_GPIOC_BASE + CH32V103_GPIOC_CFGHR_OFFSET)
#define CH32V103_GPIOC_CFGHR_MODE8        (0x3 << 0) /* 00000003: Port n.8 mode bits */
#define CH32V103_GPIOC_CFGHR_MODE8_MASK   (0x3 << 0)
#define CH32V103_GPIOC_CFGHR_CNF8         (0x3 << 2) /* 0000000c: Port n.8 configuration bits */
#define CH32V103_GPIOC_CFGHR_CNF8_MASK    (0x3 << 2)
#define CH32V103_GPIOC_CFGHR_MODE9        (0x3 << 4) /* 00000030: Port n.9 mode bits */
#define CH32V103_GPIOC_CFGHR_MODE9_MASK   (0x3 << 4)
#define CH32V103_GPIOC_CFGHR_CNF9         (0x3 << 6) /* 000000c0: Port n.9 configuration bits */
#define CH32V103_GPIOC_CFGHR_CNF9_MASK    (0x3 << 6)
#define CH32V103_GPIOC_CFGHR_MODE10       (0x3 << 8) /* 00000300: Port n.10 mode bits */
#define CH32V103_GPIOC_CFGHR_MODE10_MASK  (0x3 << 8)
#define CH32V103_GPIOC_CFGHR_CNF10        (0x3 << 10) /* 00000c00: Port n.10 configuration bits */
#define CH32V103_GPIOC_CFGHR_CNF10_MASK   (0x3 << 10)
#define CH32V103_GPIOC_CFGHR_MODE11       (0x3 << 12) /* 00003000: Port n.11 mode bits */
#define CH32V103_GPIOC_CFGHR_MODE11_MASK  (0x3 << 12)
#define CH32V103_GPIOC_CFGHR_CNF11        (0x3 << 14) /* 0000c000: Port n.11 configuration bits */
#define CH32V103_GPIOC_CFGHR_CNF11_MASK   (0x3 << 14)
#define CH32V103_GPIOC_CFGHR_MODE12       (0x3 << 16) /* 00030000: Port n.12 mode bits */
#define CH32V103_GPIOC_CFGHR_MODE12_MASK  (0x3 << 16)
#define CH32V103_GPIOC_CFGHR_CNF12        (0x3 << 18) /* 000c0000: Port n.12 configuration bits */
#define CH32V103_GPIOC_CFGHR_CNF12_MASK   (0x3 << 18)
#define CH32V103_GPIOC_CFGHR_MODE13       (0x3 << 20) /* 00300000: Port n.13 mode bits */
#define CH32V103_GPIOC_CFGHR_MODE13_MASK  (0x3 << 20)
#define CH32V103_GPIOC_CFGHR_CNF13        (0x3 << 22) /* 00c00000: Port n.13 configuration bits */
#define CH32V103_GPIOC_CFGHR_CNF13_MASK   (0x3 << 22)
#define CH32V103_GPIOC_CFGHR_MODE14       (0x3 << 24) /* 03000000: Port n.14 mode bits */
#define CH32V103_GPIOC_CFGHR_MODE14_MASK  (0x3 << 24)
#define CH32V103_GPIOC_CFGHR_CNF14        (0x3 << 26) /* 0c000000: Port n.14 configuration bits */
#define CH32V103_GPIOC_CFGHR_CNF14_MASK   (0x3 << 26)
#define CH32V103_GPIOC_CFGHR_MODE15       (0x3 << 28) /* 30000000: Port n.15 mode bits */
#define CH32V103_GPIOC_CFGHR_MODE15_MASK  (0x3 << 28)
#define CH32V103_GPIOC_CFGHR_CNF15        (0x3 << 30) /* c0000000: Port n.15 configuration bits */
#define CH32V103_GPIOC_CFGHR_CNF15_MASK   (0x3 << 30)
#define CH32V103_GPIOC_INDR_OFFSET        0x0008
#define CH32V103_GPIOC_INDR               (CH32V103_GPIOC_BASE + CH32V103_GPIOC_INDR_OFFSET)
#define CH32V103_GPIOC_INDR_IDR0          (1 <<  0) /* 00000001: Port input data */
#define CH32V103_GPIOC_INDR_IDR1          (1 <<  1) /* 00000002: Port input data */
#define CH32V103_GPIOC_INDR_IDR2          (1 <<  2) /* 00000004: Port input data */
#define CH32V103_GPIOC_INDR_IDR3          (1 <<  3) /* 00000008: Port input data */
#define CH32V103_GPIOC_INDR_IDR4          (1 <<  4) /* 00000010: Port input data */
#define CH32V103_GPIOC_INDR_IDR5          (1 <<  5) /* 00000020: Port input data */
#define CH32V103_GPIOC_INDR_IDR6          (1 <<  6) /* 00000040: Port input data */
#define CH32V103_GPIOC_INDR_IDR7          (1 <<  7) /* 00000080: Port input data */
#define CH32V103_GPIOC_INDR_IDR8          (1 <<  8) /* 00000100: Port input data */
#define CH32V103_GPIOC_INDR_IDR9          (1 <<  9) /* 00000200: Port input data */
#define CH32V103_GPIOC_INDR_IDR10         (1 << 10) /* 00000400: Port input data */
#define CH32V103_GPIOC_INDR_IDR11         (1 << 11) /* 00000800: Port input data */
#define CH32V103_GPIOC_INDR_IDR12         (1 << 12) /* 00001000: Port input data */
#define CH32V103_GPIOC_INDR_IDR13         (1 << 13) /* 00002000: Port input data */
#define CH32V103_GPIOC_INDR_IDR14         (1 << 14) /* 00004000: Port input data */
#define CH32V103_GPIOC_INDR_IDR15         (1 << 15) /* 00008000: Port input data */
#define CH32V103_GPIOC_OUTDR_OFFSET       0x000c
#define CH32V103_GPIOC_OUTDR              (CH32V103_GPIOC_BASE + CH32V103_GPIOC_OUTDR_OFFSET)
#define CH32V103_GPIOC_OUTDR_ODR0         (1 <<  0) /* 00000001: Port output data */
#define CH32V103_GPIOC_OUTDR_ODR1         (1 <<  1) /* 00000002: Port output data */
#define CH32V103_GPIOC_OUTDR_ODR2         (1 <<  2) /* 00000004: Port output data */
#define CH32V103_GPIOC_OUTDR_ODR3         (1 <<  3) /* 00000008: Port output data */
#define CH32V103_GPIOC_OUTDR_ODR4         (1 <<  4) /* 00000010: Port output data */
#define CH32V103_GPIOC_OUTDR_ODR5         (1 <<  5) /* 00000020: Port output data */
#define CH32V103_GPIOC_OUTDR_ODR6         (1 <<  6) /* 00000040: Port output data */
#define CH32V103_GPIOC_OUTDR_ODR7         (1 <<  7) /* 00000080: Port output data */
#define CH32V103_GPIOC_OUTDR_ODR8         (1 <<  8) /* 00000100: Port output data */
#define CH32V103_GPIOC_OUTDR_ODR9         (1 <<  9) /* 00000200: Port output data */
#define CH32V103_GPIOC_OUTDR_ODR10        (1 << 10) /* 00000400: Port output data */
#define CH32V103_GPIOC_OUTDR_ODR11        (1 << 11) /* 00000800: Port output data */
#define CH32V103_GPIOC_OUTDR_ODR12        (1 << 12) /* 00001000: Port output data */
#define CH32V103_GPIOC_OUTDR_ODR13        (1 << 13) /* 00002000: Port output data */
#define CH32V103_GPIOC_OUTDR_ODR14        (1 << 14) /* 00004000: Port output data */
#define CH32V103_GPIOC_OUTDR_ODR15        (1 << 15) /* 00008000: Port output data */
#define CH32V103_GPIOC_BSHR_OFFSET        0x0010
#define CH32V103_GPIOC_BSHR               (CH32V103_GPIOC_BASE + CH32V103_GPIOC_BSHR_OFFSET)
#define CH32V103_GPIOC_BSHR_BS0           (1 <<  0) /* 00000001: Set bit 0 */
#define CH32V103_GPIOC_BSHR_BS1           (1 <<  1) /* 00000002: Set bit 1 */
#define CH32V103_GPIOC_BSHR_BS2           (1 <<  2) /* 00000004: Set bit 1 */
#define CH32V103_GPIOC_BSHR_BS3           (1 <<  3) /* 00000008: Set bit 3 */
#define CH32V103_GPIOC_BSHR_BS4           (1 <<  4) /* 00000010: Set bit 4 */
#define CH32V103_GPIOC_BSHR_BS5           (1 <<  5) /* 00000020: Set bit 5 */
#define CH32V103_GPIOC_BSHR_BS6           (1 <<  6) /* 00000040: Set bit 6 */
#define CH32V103_GPIOC_BSHR_BS7           (1 <<  7) /* 00000080: Set bit 7 */
#define CH32V103_GPIOC_BSHR_BS8           (1 <<  8) /* 00000100: Set bit 8 */
#define CH32V103_GPIOC_BSHR_BS9           (1 <<  9) /* 00000200: Set bit 9 */
#define CH32V103_GPIOC_BSHR_BS10          (1 << 10) /* 00000400: Set bit 10 */
#define CH32V103_GPIOC_BSHR_BS11          (1 << 11) /* 00000800: Set bit 11 */
#define CH32V103_GPIOC_BSHR_BS12          (1 << 12) /* 00001000: Set bit 12 */
#define CH32V103_GPIOC_BSHR_BS13          (1 << 13) /* 00002000: Set bit 13 */
#define CH32V103_GPIOC_BSHR_BS14          (1 << 14) /* 00004000: Set bit 14 */
#define CH32V103_GPIOC_BSHR_BS15          (1 << 15) /* 00008000: Set bit 15 */
#define CH32V103_GPIOC_BSHR_BR0           (1 << 16) /* 00010000: Reset bit 0 */
#define CH32V103_GPIOC_BSHR_BR1           (1 << 17) /* 00020000: Reset bit 1 */
#define CH32V103_GPIOC_BSHR_BR2           (1 << 18) /* 00040000: Reset bit 2 */
#define CH32V103_GPIOC_BSHR_BR3           (1 << 19) /* 00080000: Reset bit 3 */
#define CH32V103_GPIOC_BSHR_BR4           (1 << 20) /* 00100000: Reset bit 4 */
#define CH32V103_GPIOC_BSHR_BR5           (1 << 21) /* 00200000: Reset bit 5 */
#define CH32V103_GPIOC_BSHR_BR6           (1 << 22) /* 00400000: Reset bit 6 */
#define CH32V103_GPIOC_BSHR_BR7           (1 << 23) /* 00800000: Reset bit 7 */
#define CH32V103_GPIOC_BSHR_BR8           (1 << 24) /* 01000000: Reset bit 8 */
#define CH32V103_GPIOC_BSHR_BR9           (1 << 25) /* 02000000: Reset bit 9 */
#define CH32V103_GPIOC_BSHR_BR10          (1 << 26) /* 04000000: Reset bit 10 */
#define CH32V103_GPIOC_BSHR_BR11          (1 << 27) /* 08000000: Reset bit 11 */
#define CH32V103_GPIOC_BSHR_BR12          (1 << 28) /* 10000000: Reset bit 12 */
#define CH32V103_GPIOC_BSHR_BR13          (1 << 29) /* 20000000: Reset bit 13 */
#define CH32V103_GPIOC_BSHR_BR14          (1 << 30) /* 40000000: Reset bit 14 */
#define CH32V103_GPIOC_BSHR_BR15          (1 << 31) /* 80000000: Reset bit 15 */
#define CH32V103_GPIOC_BCR_OFFSET         0x0014
#define CH32V103_GPIOC_BCR                (CH32V103_GPIOC_BASE + CH32V103_GPIOC_BCR_OFFSET)
#define CH32V103_GPIOC_BCR_BR0            (1 <<  0) /* 00000001: Reset bit 0 */
#define CH32V103_GPIOC_BCR_BR1            (1 <<  1) /* 00000002: Reset bit 1 */
#define CH32V103_GPIOC_BCR_BR2            (1 <<  2) /* 00000004: Reset bit 1 */
#define CH32V103_GPIOC_BCR_BR3            (1 <<  3) /* 00000008: Reset bit 3 */
#define CH32V103_GPIOC_BCR_BR4            (1 <<  4) /* 00000010: Reset bit 4 */
#define CH32V103_GPIOC_BCR_BR5            (1 <<  5) /* 00000020: Reset bit 5 */
#define CH32V103_GPIOC_BCR_BR6            (1 <<  6) /* 00000040: Reset bit 6 */
#define CH32V103_GPIOC_BCR_BR7            (1 <<  7) /* 00000080: Reset bit 7 */
#define CH32V103_GPIOC_BCR_BR8            (1 <<  8) /* 00000100: Reset bit 8 */
#define CH32V103_GPIOC_BCR_BR9            (1 <<  9) /* 00000200: Reset bit 9 */
#define CH32V103_GPIOC_BCR_BR10           (1 << 10) /* 00000400: Reset bit 10 */
#define CH32V103_GPIOC_BCR_BR11           (1 << 11) /* 00000800: Reset bit 11 */
#define CH32V103_GPIOC_BCR_BR12           (1 << 12) /* 00001000: Reset bit 12 */
#define CH32V103_GPIOC_BCR_BR13           (1 << 13) /* 00002000: Reset bit 13 */
#define CH32V103_GPIOC_BCR_BR14           (1 << 14) /* 00004000: Reset bit 14 */
#define CH32V103_GPIOC_BCR_BR15           (1 << 15) /* 00008000: Reset bit 15 */
#define CH32V103_GPIOC_LCKR_OFFSET        0x0018
#define CH32V103_GPIOC_LCKR               (CH32V103_GPIOC_BASE + CH32V103_GPIOC_LCKR_OFFSET)
#define CH32V103_GPIOC_LCKR_LCK0          (1 <<  0) /* 00000001: Port A Lock bit 0 */
#define CH32V103_GPIOC_LCKR_LCK1          (1 <<  1) /* 00000002: Port A Lock bit 1 */
#define CH32V103_GPIOC_LCKR_LCK2          (1 <<  2) /* 00000004: Port A Lock bit 2 */
#define CH32V103_GPIOC_LCKR_LCK3          (1 <<  3) /* 00000008: Port A Lock bit 3 */
#define CH32V103_GPIOC_LCKR_LCK4          (1 <<  4) /* 00000010: Port A Lock bit 4 */
#define CH32V103_GPIOC_LCKR_LCK5          (1 <<  5) /* 00000020: Port A Lock bit 5 */
#define CH32V103_GPIOC_LCKR_LCK6          (1 <<  6) /* 00000040: Port A Lock bit 6 */
#define CH32V103_GPIOC_LCKR_LCK7          (1 <<  7) /* 00000080: Port A Lock bit 7 */
#define CH32V103_GPIOC_LCKR_LCK8          (1 <<  8) /* 00000100: Port A Lock bit 8 */
#define CH32V103_GPIOC_LCKR_LCK9          (1 <<  9) /* 00000200: Port A Lock bit 9 */
#define CH32V103_GPIOC_LCKR_LCK10         (1 << 10) /* 00000400: Port A Lock bit 10 */
#define CH32V103_GPIOC_LCKR_LCK11         (1 << 11) /* 00000800: Port A Lock bit 11 */
#define CH32V103_GPIOC_LCKR_LCK12         (1 << 12) /* 00001000: Port A Lock bit 12 */
#define CH32V103_GPIOC_LCKR_LCK13         (1 << 13) /* 00002000: Port A Lock bit 13 */
#define CH32V103_GPIOC_LCKR_LCK14         (1 << 14) /* 00004000: Port A Lock bit 14 */
#define CH32V103_GPIOC_LCKR_LCK15         (1 << 15) /* 00008000: Port A Lock bit 15 */
#define CH32V103_GPIOC_LCKR_LCKK          (1 << 16) /* 00010000: Lock key */

/* GPIOD is derived from GPIOA. */
#define CH32V103_GPIOD_BASE               0x40011400
#define CH32V103_GPIOD_CFGLR_OFFSET       0x0000
#define CH32V103_GPIOD_CFGLR              (CH32V103_GPIOD_BASE + CH32V103_GPIOD_CFGLR_OFFSET)
#define CH32V103_GPIOD_CFGLR_MODE0        (0x3 << 0) /* 00000003: Port n.0 mode bits */
#define CH32V103_GPIOD_CFGLR_MODE0_MASK   (0x3 << 0)
#define CH32V103_GPIOD_CFGLR_CNF0         (0x3 << 2) /* 0000000c: Port n.0 configuration bits */
#define CH32V103_GPIOD_CFGLR_CNF0_MASK    (0x3 << 2)
#define CH32V103_GPIOD_CFGLR_MODE1        (0x3 << 4) /* 00000030: Port n.1 mode bits */
#define CH32V103_GPIOD_CFGLR_MODE1_MASK   (0x3 << 4)
#define CH32V103_GPIOD_CFGLR_CNF1         (0x3 << 6) /* 000000c0: Port n.1 configuration bits */
#define CH32V103_GPIOD_CFGLR_CNF1_MASK    (0x3 << 6)
#define CH32V103_GPIOD_CFGLR_MODE2        (0x3 << 8) /* 00000300: Port n.2 mode bits */
#define CH32V103_GPIOD_CFGLR_MODE2_MASK   (0x3 << 8)
#define CH32V103_GPIOD_CFGLR_CNF2         (0x3 << 10) /* 00000c00: Port n.2 configuration bits */
#define CH32V103_GPIOD_CFGLR_CNF2_MASK    (0x3 << 10)
#define CH32V103_GPIOD_CFGLR_MODE3        (0x3 << 12) /* 00003000: Port n.3 mode bits */
#define CH32V103_GPIOD_CFGLR_MODE3_MASK   (0x3 << 12)
#define CH32V103_GPIOD_CFGLR_CNF3         (0x3 << 14) /* 0000c000: Port n.3 configuration bits */
#define CH32V103_GPIOD_CFGLR_CNF3_MASK    (0x3 << 14)
#define CH32V103_GPIOD_CFGLR_MODE4        (0x3 << 16) /* 00030000: Port n.4 mode bits */
#define CH32V103_GPIOD_CFGLR_MODE4_MASK   (0x3 << 16)
#define CH32V103_GPIOD_CFGLR_CNF4         (0x3 << 18) /* 000c0000: Port n.4 configuration bits */
#define CH32V103_GPIOD_CFGLR_CNF4_MASK    (0x3 << 18)
#define CH32V103_GPIOD_CFGLR_MODE5        (0x3 << 20) /* 00300000: Port n.5 mode bits */
#define CH32V103_GPIOD_CFGLR_MODE5_MASK   (0x3 << 20)
#define CH32V103_GPIOD_CFGLR_CNF5         (0x3 << 22) /* 00c00000: Port n.5 configuration bits */
#define CH32V103_GPIOD_CFGLR_CNF5_MASK    (0x3 << 22)
#define CH32V103_GPIOD_CFGLR_MODE6        (0x3 << 24) /* 03000000: Port n.6 mode bits */
#define CH32V103_GPIOD_CFGLR_MODE6_MASK   (0x3 << 24)
#define CH32V103_GPIOD_CFGLR_CNF6         (0x3 << 26) /* 0c000000: Port n.6 configuration bits */
#define CH32V103_GPIOD_CFGLR_CNF6_MASK    (0x3 << 26)
#define CH32V103_GPIOD_CFGLR_MODE7        (0x3 << 28) /* 30000000: Port n.7 mode bits */
#define CH32V103_GPIOD_CFGLR_MODE7_MASK   (0x3 << 28)
#define CH32V103_GPIOD_CFGLR_CNF7         (0x3 << 30) /* c0000000: Port n.7 configuration bits */
#define CH32V103_GPIOD_CFGLR_CNF7_MASK    (0x3 << 30)
#define CH32V103_GPIOD_CFGHR_OFFSET       0x0004
#define CH32V103_GPIOD_CFGHR              (CH32V103_GPIOD_BASE + CH32V103_GPIOD_CFGHR_OFFSET)
#define CH32V103_GPIOD_CFGHR_MODE8        (0x3 << 0) /* 00000003: Port n.8 mode bits */
#define CH32V103_GPIOD_CFGHR_MODE8_MASK   (0x3 << 0)
#define CH32V103_GPIOD_CFGHR_CNF8         (0x3 << 2) /* 0000000c: Port n.8 configuration bits */
#define CH32V103_GPIOD_CFGHR_CNF8_MASK    (0x3 << 2)
#define CH32V103_GPIOD_CFGHR_MODE9        (0x3 << 4) /* 00000030: Port n.9 mode bits */
#define CH32V103_GPIOD_CFGHR_MODE9_MASK   (0x3 << 4)
#define CH32V103_GPIOD_CFGHR_CNF9         (0x3 << 6) /* 000000c0: Port n.9 configuration bits */
#define CH32V103_GPIOD_CFGHR_CNF9_MASK    (0x3 << 6)
#define CH32V103_GPIOD_CFGHR_MODE10       (0x3 << 8) /* 00000300: Port n.10 mode bits */
#define CH32V103_GPIOD_CFGHR_MODE10_MASK  (0x3 << 8)
#define CH32V103_GPIOD_CFGHR_CNF10        (0x3 << 10) /* 00000c00: Port n.10 configuration bits */
#define CH32V103_GPIOD_CFGHR_CNF10_MASK   (0x3 << 10)
#define CH32V103_GPIOD_CFGHR_MODE11       (0x3 << 12) /* 00003000: Port n.11 mode bits */
#define CH32V103_GPIOD_CFGHR_MODE11_MASK  (0x3 << 12)
#define CH32V103_GPIOD_CFGHR_CNF11        (0x3 << 14) /* 0000c000: Port n.11 configuration bits */
#define CH32V103_GPIOD_CFGHR_CNF11_MASK   (0x3 << 14)
#define CH32V103_GPIOD_CFGHR_MODE12       (0x3 << 16) /* 00030000: Port n.12 mode bits */
#define CH32V103_GPIOD_CFGHR_MODE12_MASK  (0x3 << 16)
#define CH32V103_GPIOD_CFGHR_CNF12        (0x3 << 18) /* 000c0000: Port n.12 configuration bits */
#define CH32V103_GPIOD_CFGHR_CNF12_MASK   (0x3 << 18)
#define CH32V103_GPIOD_CFGHR_MODE13       (0x3 << 20) /* 00300000: Port n.13 mode bits */
#define CH32V103_GPIOD_CFGHR_MODE13_MASK  (0x3 << 20)
#define CH32V103_GPIOD_CFGHR_CNF13        (0x3 << 22) /* 00c00000: Port n.13 configuration bits */
#define CH32V103_GPIOD_CFGHR_CNF13_MASK   (0x3 << 22)
#define CH32V103_GPIOD_CFGHR_MODE14       (0x3 << 24) /* 03000000: Port n.14 mode bits */
#define CH32V103_GPIOD_CFGHR_MODE14_MASK  (0x3 << 24)
#define CH32V103_GPIOD_CFGHR_CNF14        (0x3 << 26) /* 0c000000: Port n.14 configuration bits */
#define CH32V103_GPIOD_CFGHR_CNF14_MASK   (0x3 << 26)
#define CH32V103_GPIOD_CFGHR_MODE15       (0x3 << 28) /* 30000000: Port n.15 mode bits */
#define CH32V103_GPIOD_CFGHR_MODE15_MASK  (0x3 << 28)
#define CH32V103_GPIOD_CFGHR_CNF15        (0x3 << 30) /* c0000000: Port n.15 configuration bits */
#define CH32V103_GPIOD_CFGHR_CNF15_MASK   (0x3 << 30)
#define CH32V103_GPIOD_INDR_OFFSET        0x0008
#define CH32V103_GPIOD_INDR               (CH32V103_GPIOD_BASE + CH32V103_GPIOD_INDR_OFFSET)
#define CH32V103_GPIOD_INDR_IDR0          (1 <<  0) /* 00000001: Port input data */
#define CH32V103_GPIOD_INDR_IDR1          (1 <<  1) /* 00000002: Port input data */
#define CH32V103_GPIOD_INDR_IDR2          (1 <<  2) /* 00000004: Port input data */
#define CH32V103_GPIOD_INDR_IDR3          (1 <<  3) /* 00000008: Port input data */
#define CH32V103_GPIOD_INDR_IDR4          (1 <<  4) /* 00000010: Port input data */
#define CH32V103_GPIOD_INDR_IDR5          (1 <<  5) /* 00000020: Port input data */
#define CH32V103_GPIOD_INDR_IDR6          (1 <<  6) /* 00000040: Port input data */
#define CH32V103_GPIOD_INDR_IDR7          (1 <<  7) /* 00000080: Port input data */
#define CH32V103_GPIOD_INDR_IDR8          (1 <<  8) /* 00000100: Port input data */
#define CH32V103_GPIOD_INDR_IDR9          (1 <<  9) /* 00000200: Port input data */
#define CH32V103_GPIOD_INDR_IDR10         (1 << 10) /* 00000400: Port input data */
#define CH32V103_GPIOD_INDR_IDR11         (1 << 11) /* 00000800: Port input data */
#define CH32V103_GPIOD_INDR_IDR12         (1 << 12) /* 00001000: Port input data */
#define CH32V103_GPIOD_INDR_IDR13         (1 << 13) /* 00002000: Port input data */
#define CH32V103_GPIOD_INDR_IDR14         (1 << 14) /* 00004000: Port input data */
#define CH32V103_GPIOD_INDR_IDR15         (1 << 15) /* 00008000: Port input data */
#define CH32V103_GPIOD_OUTDR_OFFSET       0x000c
#define CH32V103_GPIOD_OUTDR              (CH32V103_GPIOD_BASE + CH32V103_GPIOD_OUTDR_OFFSET)
#define CH32V103_GPIOD_OUTDR_ODR0         (1 <<  0) /* 00000001: Port output data */
#define CH32V103_GPIOD_OUTDR_ODR1         (1 <<  1) /* 00000002: Port output data */
#define CH32V103_GPIOD_OUTDR_ODR2         (1 <<  2) /* 00000004: Port output data */
#define CH32V103_GPIOD_OUTDR_ODR3         (1 <<  3) /* 00000008: Port output data */
#define CH32V103_GPIOD_OUTDR_ODR4         (1 <<  4) /* 00000010: Port output data */
#define CH32V103_GPIOD_OUTDR_ODR5         (1 <<  5) /* 00000020: Port output data */
#define CH32V103_GPIOD_OUTDR_ODR6         (1 <<  6) /* 00000040: Port output data */
#define CH32V103_GPIOD_OUTDR_ODR7         (1 <<  7) /* 00000080: Port output data */
#define CH32V103_GPIOD_OUTDR_ODR8         (1 <<  8) /* 00000100: Port output data */
#define CH32V103_GPIOD_OUTDR_ODR9         (1 <<  9) /* 00000200: Port output data */
#define CH32V103_GPIOD_OUTDR_ODR10        (1 << 10) /* 00000400: Port output data */
#define CH32V103_GPIOD_OUTDR_ODR11        (1 << 11) /* 00000800: Port output data */
#define CH32V103_GPIOD_OUTDR_ODR12        (1 << 12) /* 00001000: Port output data */
#define CH32V103_GPIOD_OUTDR_ODR13        (1 << 13) /* 00002000: Port output data */
#define CH32V103_GPIOD_OUTDR_ODR14        (1 << 14) /* 00004000: Port output data */
#define CH32V103_GPIOD_OUTDR_ODR15        (1 << 15) /* 00008000: Port output data */
#define CH32V103_GPIOD_BSHR_OFFSET        0x0010
#define CH32V103_GPIOD_BSHR               (CH32V103_GPIOD_BASE + CH32V103_GPIOD_BSHR_OFFSET)
#define CH32V103_GPIOD_BSHR_BS0           (1 <<  0) /* 00000001: Set bit 0 */
#define CH32V103_GPIOD_BSHR_BS1           (1 <<  1) /* 00000002: Set bit 1 */
#define CH32V103_GPIOD_BSHR_BS2           (1 <<  2) /* 00000004: Set bit 1 */
#define CH32V103_GPIOD_BSHR_BS3           (1 <<  3) /* 00000008: Set bit 3 */
#define CH32V103_GPIOD_BSHR_BS4           (1 <<  4) /* 00000010: Set bit 4 */
#define CH32V103_GPIOD_BSHR_BS5           (1 <<  5) /* 00000020: Set bit 5 */
#define CH32V103_GPIOD_BSHR_BS6           (1 <<  6) /* 00000040: Set bit 6 */
#define CH32V103_GPIOD_BSHR_BS7           (1 <<  7) /* 00000080: Set bit 7 */
#define CH32V103_GPIOD_BSHR_BS8           (1 <<  8) /* 00000100: Set bit 8 */
#define CH32V103_GPIOD_BSHR_BS9           (1 <<  9) /* 00000200: Set bit 9 */
#define CH32V103_GPIOD_BSHR_BS10          (1 << 10) /* 00000400: Set bit 10 */
#define CH32V103_GPIOD_BSHR_BS11          (1 << 11) /* 00000800: Set bit 11 */
#define CH32V103_GPIOD_BSHR_BS12          (1 << 12) /* 00001000: Set bit 12 */
#define CH32V103_GPIOD_BSHR_BS13          (1 << 13) /* 00002000: Set bit 13 */
#define CH32V103_GPIOD_BSHR_BS14          (1 << 14) /* 00004000: Set bit 14 */
#define CH32V103_GPIOD_BSHR_BS15          (1 << 15) /* 00008000: Set bit 15 */
#define CH32V103_GPIOD_BSHR_BR0           (1 << 16) /* 00010000: Reset bit 0 */
#define CH32V103_GPIOD_BSHR_BR1           (1 << 17) /* 00020000: Reset bit 1 */
#define CH32V103_GPIOD_BSHR_BR2           (1 << 18) /* 00040000: Reset bit 2 */
#define CH32V103_GPIOD_BSHR_BR3           (1 << 19) /* 00080000: Reset bit 3 */
#define CH32V103_GPIOD_BSHR_BR4           (1 << 20) /* 00100000: Reset bit 4 */
#define CH32V103_GPIOD_BSHR_BR5           (1 << 21) /* 00200000: Reset bit 5 */
#define CH32V103_GPIOD_BSHR_BR6           (1 << 22) /* 00400000: Reset bit 6 */
#define CH32V103_GPIOD_BSHR_BR7           (1 << 23) /* 00800000: Reset bit 7 */
#define CH32V103_GPIOD_BSHR_BR8           (1 << 24) /* 01000000: Reset bit 8 */
#define CH32V103_GPIOD_BSHR_BR9           (1 << 25) /* 02000000: Reset bit 9 */
#define CH32V103_GPIOD_BSHR_BR10          (1 << 26) /* 04000000: Reset bit 10 */
#define CH32V103_GPIOD_BSHR_BR11          (1 << 27) /* 08000000: Reset bit 11 */
#define CH32V103_GPIOD_BSHR_BR12          (1 << 28) /* 10000000: Reset bit 12 */
#define CH32V103_GPIOD_BSHR_BR13          (1 << 29) /* 20000000: Reset bit 13 */
#define CH32V103_GPIOD_BSHR_BR14          (1 << 30) /* 40000000: Reset bit 14 */
#define CH32V103_GPIOD_BSHR_BR15          (1 << 31) /* 80000000: Reset bit 15 */
#define CH32V103_GPIOD_BCR_OFFSET         0x0014
#define CH32V103_GPIOD_BCR                (CH32V103_GPIOD_BASE + CH32V103_GPIOD_BCR_OFFSET)
#define CH32V103_GPIOD_BCR_BR0            (1 <<  0) /* 00000001: Reset bit 0 */
#define CH32V103_GPIOD_BCR_BR1            (1 <<  1) /* 00000002: Reset bit 1 */
#define CH32V103_GPIOD_BCR_BR2            (1 <<  2) /* 00000004: Reset bit 1 */
#define CH32V103_GPIOD_BCR_BR3            (1 <<  3) /* 00000008: Reset bit 3 */
#define CH32V103_GPIOD_BCR_BR4            (1 <<  4) /* 00000010: Reset bit 4 */
#define CH32V103_GPIOD_BCR_BR5            (1 <<  5) /* 00000020: Reset bit 5 */
#define CH32V103_GPIOD_BCR_BR6            (1 <<  6) /* 00000040: Reset bit 6 */
#define CH32V103_GPIOD_BCR_BR7            (1 <<  7) /* 00000080: Reset bit 7 */
#define CH32V103_GPIOD_BCR_BR8            (1 <<  8) /* 00000100: Reset bit 8 */
#define CH32V103_GPIOD_BCR_BR9            (1 <<  9) /* 00000200: Reset bit 9 */
#define CH32V103_GPIOD_BCR_BR10           (1 << 10) /* 00000400: Reset bit 10 */
#define CH32V103_GPIOD_BCR_BR11           (1 << 11) /* 00000800: Reset bit 11 */
#define CH32V103_GPIOD_BCR_BR12           (1 << 12) /* 00001000: Reset bit 12 */
#define CH32V103_GPIOD_BCR_BR13           (1 << 13) /* 00002000: Reset bit 13 */
#define CH32V103_GPIOD_BCR_BR14           (1 << 14) /* 00004000: Reset bit 14 */
#define CH32V103_GPIOD_BCR_BR15           (1 << 15) /* 00008000: Reset bit 15 */
#define CH32V103_GPIOD_LCKR_OFFSET        0x0018
#define CH32V103_GPIOD_LCKR               (CH32V103_GPIOD_BASE + CH32V103_GPIOD_LCKR_OFFSET)
#define CH32V103_GPIOD_LCKR_LCK0          (1 <<  0) /* 00000001: Port A Lock bit 0 */
#define CH32V103_GPIOD_LCKR_LCK1          (1 <<  1) /* 00000002: Port A Lock bit 1 */
#define CH32V103_GPIOD_LCKR_LCK2          (1 <<  2) /* 00000004: Port A Lock bit 2 */
#define CH32V103_GPIOD_LCKR_LCK3          (1 <<  3) /* 00000008: Port A Lock bit 3 */
#define CH32V103_GPIOD_LCKR_LCK4          (1 <<  4) /* 00000010: Port A Lock bit 4 */
#define CH32V103_GPIOD_LCKR_LCK5          (1 <<  5) /* 00000020: Port A Lock bit 5 */
#define CH32V103_GPIOD_LCKR_LCK6          (1 <<  6) /* 00000040: Port A Lock bit 6 */
#define CH32V103_GPIOD_LCKR_LCK7          (1 <<  7) /* 00000080: Port A Lock bit 7 */
#define CH32V103_GPIOD_LCKR_LCK8          (1 <<  8) /* 00000100: Port A Lock bit 8 */
#define CH32V103_GPIOD_LCKR_LCK9          (1 <<  9) /* 00000200: Port A Lock bit 9 */
#define CH32V103_GPIOD_LCKR_LCK10         (1 << 10) /* 00000400: Port A Lock bit 10 */
#define CH32V103_GPIOD_LCKR_LCK11         (1 << 11) /* 00000800: Port A Lock bit 11 */
#define CH32V103_GPIOD_LCKR_LCK12         (1 << 12) /* 00001000: Port A Lock bit 12 */
#define CH32V103_GPIOD_LCKR_LCK13         (1 << 13) /* 00002000: Port A Lock bit 13 */
#define CH32V103_GPIOD_LCKR_LCK14         (1 << 14) /* 00004000: Port A Lock bit 14 */
#define CH32V103_GPIOD_LCKR_LCK15         (1 << 15) /* 00008000: Port A Lock bit 15 */
#define CH32V103_GPIOD_LCKR_LCKK          (1 << 16) /* 00010000: Lock key */

/* TIM3 is derived from TIM2. */
#define CH32V103_TIM3_BASE                0x40000400
#define CH32V103_TIM3_CTLR1_OFFSET        0x0000
#define CH32V103_TIM3_CTLR1               (CH32V103_TIM3_BASE + CH32V103_TIM3_CTLR1_OFFSET)
#define CH32V103_TIM3_CTLR1_CKD           (0x3 << 8) /* 00000300: Clock division */
#define CH32V103_TIM3_CTLR1_CKD_MASK      (0x3 << 8)
#define CH32V103_TIM3_CTLR1_ARPE          (1 <<  7) /* 00000080: Auto-reload preload enable */
#define CH32V103_TIM3_CTLR1_CMS           (0x3 << 5) /* 00000060: Center-aligned mode selection */
#define CH32V103_TIM3_CTLR1_CMS_MASK      (0x3 << 5)
#define CH32V103_TIM3_CTLR1_DIR           (1 <<  4) /* 00000010: Direction */
#define CH32V103_TIM3_CTLR1_OPM           (1 <<  3) /* 00000008: One-pulse mode */
#define CH32V103_TIM3_CTLR1_URS           (1 <<  2) /* 00000004: Update request source */
#define CH32V103_TIM3_CTLR1_UDIS          (1 <<  1) /* 00000002: Update disable */
#define CH32V103_TIM3_CTLR1_CEN           (1 <<  0) /* 00000001: Counter enable */
#define CH32V103_TIM3_CTLR2_OFFSET        0x0004
#define CH32V103_TIM3_CTLR2               (CH32V103_TIM3_BASE + CH32V103_TIM3_CTLR2_OFFSET)
#define CH32V103_TIM3_CTLR2_TI1S          (1 <<  7) /* 00000080: TI1 selection */
#define CH32V103_TIM3_CTLR2_MMS           (0x7 << 4) /* 00000070: Master mode selection */
#define CH32V103_TIM3_CTLR2_MMS_MASK      (0x7 << 4)
#define CH32V103_TIM3_CTLR2_CCDS          (1 <<  3) /* 00000008: Capture/compare DMA selection */
#define CH32V103_TIM3_CTLR2_CCUS          (1 <<  2) /* 00000004: Capture/compare control update selection */
#define CH32V103_TIM3_CTLR2_CCPC          (1 <<  0) /* 00000001: Capture/compare preloaded control */
#define CH32V103_TIM3_SMCFGR_OFFSET       0x0008
#define CH32V103_TIM3_SMCFGR              (CH32V103_TIM3_BASE + CH32V103_TIM3_SMCFGR_OFFSET)
#define CH32V103_TIM3_SMCFGR_ETP          (1 << 15) /* 00008000: External trigger polarity */
#define CH32V103_TIM3_SMCFGR_ECE          (1 << 14) /* 00004000: External clock enable */
#define CH32V103_TIM3_SMCFGR_ETPS         (0x3 << 12) /* 00003000: External trigger prescaler */
#define CH32V103_TIM3_SMCFGR_ETPS_MASK    (0x3 << 12)
#define CH32V103_TIM3_SMCFGR_ETF          (0xf << 8) /* 00000f00: External trigger filter */
#define CH32V103_TIM3_SMCFGR_ETF_MASK     (0xf << 8)
#define CH32V103_TIM3_SMCFGR_MSM          (1 <<  7) /* 00000080: Master/Slave mode */
#define CH32V103_TIM3_SMCFGR_TS           (0x7 << 4) /* 00000070: Trigger selection */
#define CH32V103_TIM3_SMCFGR_TS_MASK      (0x7 << 4)
#define CH32V103_TIM3_SMCFGR_SMS          (0x7 << 0) /* 00000007: Slave mode selection */
#define CH32V103_TIM3_SMCFGR_SMS_MASK     (0x7 << 0)
#define CH32V103_TIM3_DMAINTENR_OFFSET    0x000c
#define CH32V103_TIM3_DMAINTENR           (CH32V103_TIM3_BASE + CH32V103_TIM3_DMAINTENR_OFFSET)
#define CH32V103_TIM3_DMAINTENR_TDE       (1 << 14) /* 00004000: Trigger DMA request enable */
#define CH32V103_TIM3_DMAINTENR_CC4DE     (1 << 12) /* 00001000: Capture/Compare 4 DMA request enable */
#define CH32V103_TIM3_DMAINTENR_CC3DE     (1 << 11) /* 00000800: Capture/Compare 3 DMA request enable */
#define CH32V103_TIM3_DMAINTENR_CC2DE     (1 << 10) /* 00000400: Capture/Compare 2 DMA request enable */
#define CH32V103_TIM3_DMAINTENR_CC1DE     (1 <<  9) /* 00000200: Capture/Compare 1 DMA request enable */
#define CH32V103_TIM3_DMAINTENR_UDE       (1 <<  8) /* 00000100: Update DMA request enable */
#define CH32V103_TIM3_DMAINTENR_TIE       (1 <<  6) /* 00000040: Trigger interrupt enable */
#define CH32V103_TIM3_DMAINTENR_CC4IE     (1 <<  4) /* 00000010: Capture/Compare 4 interrupt enable */
#define CH32V103_TIM3_DMAINTENR_CC3IE     (1 <<  3) /* 00000008: Capture/Compare 3 interrupt enable */
#define CH32V103_TIM3_DMAINTENR_CC2IE     (1 <<  2) /* 00000004: Capture/Compare 2 interrupt enable */
#define CH32V103_TIM3_DMAINTENR_CC1IE     (1 <<  1) /* 00000002: Capture/Compare 1 interrupt enable */
#define CH32V103_TIM3_DMAINTENR_UIE       (1 <<  0) /* 00000001: Update interrupt enable */
#define CH32V103_TIM3_INTFR_OFFSET        0x0010
#define CH32V103_TIM3_INTFR               (CH32V103_TIM3_BASE + CH32V103_TIM3_INTFR_OFFSET)
#define CH32V103_TIM3_INTFR_CC4OF         (1 << 12) /* 00001000: Capture/Compare 4 overcapture flag */
#define CH32V103_TIM3_INTFR_CC3OF         (1 << 11) /* 00000800: Capture/Compare 3 overcapture flag */
#define CH32V103_TIM3_INTFR_CC2OF         (1 << 10) /* 00000400: Capture/compare 2 overcapture flag */
#define CH32V103_TIM3_INTFR_CC1OF         (1 <<  9) /* 00000200: Capture/Compare 1 overcapture flag */
#define CH32V103_TIM3_INTFR_TIF           (1 <<  6) /* 00000040: Trigger interrupt flag */
#define CH32V103_TIM3_INTFR_CC4IF         (1 <<  4) /* 00000010: Capture/Compare 4 interrupt flag */
#define CH32V103_TIM3_INTFR_CC3IF         (1 <<  3) /* 00000008: Capture/Compare 3 interrupt flag */
#define CH32V103_TIM3_INTFR_CC2IF         (1 <<  2) /* 00000004: Capture/Compare 2 interrupt flag */
#define CH32V103_TIM3_INTFR_CC1IF         (1 <<  1) /* 00000002: Capture/compare 1 interrupt flag */
#define CH32V103_TIM3_INTFR_UIF           (1 <<  0) /* 00000001: Update interrupt flag */
#define CH32V103_TIM3_SWEVGR_OFFSET       0x0014
#define CH32V103_TIM3_SWEVGR              (CH32V103_TIM3_BASE + CH32V103_TIM3_SWEVGR_OFFSET)
#define CH32V103_TIM3_SWEVGR_BG           (1 <<  7) /* 00000080: Break generation */
#define CH32V103_TIM3_SWEVGR_TG           (1 <<  6) /* 00000040: Trigger generation */
#define CH32V103_TIM3_SWEVGR_COMG         (1 <<  5) /* 00000020: Capture/Compare control update generation */
#define CH32V103_TIM3_SWEVGR_CC4G         (1 <<  4) /* 00000010: Capture/compare 4 generation */
#define CH32V103_TIM3_SWEVGR_CC3G         (1 <<  3) /* 00000008: Capture/compare 3 generation */
#define CH32V103_TIM3_SWEVGR_CC2G         (1 <<  2) /* 00000004: Capture/compare 2 generation */
#define CH32V103_TIM3_SWEVGR_CC1G         (1 <<  1) /* 00000002: Capture/compare 1 generation */
#define CH32V103_TIM3_SWEVGR_UG           (1 <<  0) /* 00000001: Update generation */
#define CH32V103_TIM3_CHCTLR1_Output_OFFSET 0x0018
#define CH32V103_TIM3_CHCTLR1_Output      (CH32V103_TIM3_BASE + CH32V103_TIM3_CHCTLR1_Output_OFFSET)
#define CH32V103_TIM3_CHCTLR1_Output_OC2CE (1 << 15) /* 00008000: Output compare 2 clear enable */
#define CH32V103_TIM3_CHCTLR1_Output_OC2M (0x7 << 12) /* 00007000: Output compare 2 mode */
#define CH32V103_TIM3_CHCTLR1_Output_OC2M_MASK (0x7 << 12)
#define CH32V103_TIM3_CHCTLR1_Output_OC2PE (1 << 11) /* 00000800: Output compare 2 preload enable */
#define CH32V103_TIM3_CHCTLR1_Output_OC2FE (1 << 10) /* 00000400: Output compare 2 fast enable */
#define CH32V103_TIM3_CHCTLR1_Output_CC2S (0x3 << 8) /* 00000300: Capture/Compare 2 selection */
#define CH32V103_TIM3_CHCTLR1_Output_CC2S_MASK (0x3 << 8)
#define CH32V103_TIM3_CHCTLR1_Output_OC1CE (1 <<  7) /* 00000080: Output compare 1 clear enable */
#define CH32V103_TIM3_CHCTLR1_Output_OC1M (0x7 << 4) /* 00000070: Output compare 1 mode */
#define CH32V103_TIM3_CHCTLR1_Output_OC1M_MASK (0x7 << 4)
#define CH32V103_TIM3_CHCTLR1_Output_OC1PE (1 <<  3) /* 00000008: Output compare 1 preload enable */
#define CH32V103_TIM3_CHCTLR1_Output_OC1FE (1 <<  2) /* 00000004: Output compare 1 fast enable */
#define CH32V103_TIM3_CHCTLR1_Output_CC1S (0x3 << 0) /* 00000003: Capture/Compare 1 selection */
#define CH32V103_TIM3_CHCTLR1_Output_CC1S_MASK (0x3 << 0)
#define CH32V103_TIM3_CHCTLR1_Input_OFFSET 0x0018
#define CH32V103_TIM3_CHCTLR1_Input       (CH32V103_TIM3_BASE + CH32V103_TIM3_CHCTLR1_Input_OFFSET)
#define CH32V103_TIM3_CHCTLR1_Input_IC2F  (0xf << 12) /* 0000f000: Input capture 2 filter */
#define CH32V103_TIM3_CHCTLR1_Input_IC2F_MASK (0xf << 12)
#define CH32V103_TIM3_CHCTLR1_Input_IC2PSC (0x3 << 10) /* 00000c00: Input capture 2 prescaler */
#define CH32V103_TIM3_CHCTLR1_Input_IC2PSC_MASK (0x3 << 10)
#define CH32V103_TIM3_CHCTLR1_Input_CC2S  (0x3 << 8) /* 00000300: Capture/compare 2 selection */
#define CH32V103_TIM3_CHCTLR1_Input_CC2S_MASK (0x3 << 8)
#define CH32V103_TIM3_CHCTLR1_Input_IC1F  (0xf << 4) /* 000000f0: Input capture 1 filter */
#define CH32V103_TIM3_CHCTLR1_Input_IC1F_MASK (0xf << 4)
#define CH32V103_TIM3_CHCTLR1_Input_IC1PSC (0x3 << 2) /* 0000000c: Input capture 1 prescaler */
#define CH32V103_TIM3_CHCTLR1_Input_IC1PSC_MASK (0x3 << 2)
#define CH32V103_TIM3_CHCTLR1_Input_CC1S  (0x3 << 0) /* 00000003: Capture/Compare 1 selection */
#define CH32V103_TIM3_CHCTLR1_Input_CC1S_MASK (0x3 << 0)
#define CH32V103_TIM3_CHCTLR2_Output_OFFSET 0x001c
#define CH32V103_TIM3_CHCTLR2_Output      (CH32V103_TIM3_BASE + CH32V103_TIM3_CHCTLR2_Output_OFFSET)
#define CH32V103_TIM3_CHCTLR2_Output_OC4CE (1 << 15) /* 00008000: Output compare 4 clear enable */
#define CH32V103_TIM3_CHCTLR2_Output_OC4M (0x7 << 12) /* 00007000: Output compare 4 mode */
#define CH32V103_TIM3_CHCTLR2_Output_OC4M_MASK (0x7 << 12)
#define CH32V103_TIM3_CHCTLR2_Output_OC4PE (1 << 11) /* 00000800: Output compare 4 preload enable */
#define CH32V103_TIM3_CHCTLR2_Output_OC4FE (1 << 10) /* 00000400: Output compare 4 fast enable */
#define CH32V103_TIM3_CHCTLR2_Output_CC4S (0x3 << 8) /* 00000300: Capture/Compare 4 selection */
#define CH32V103_TIM3_CHCTLR2_Output_CC4S_MASK (0x3 << 8)
#define CH32V103_TIM3_CHCTLR2_Output_OC3CE (1 <<  7) /* 00000080: Output compare 3 clear enable */
#define CH32V103_TIM3_CHCTLR2_Output_OC3M (0x7 << 4) /* 00000070: Output compare 3 mode */
#define CH32V103_TIM3_CHCTLR2_Output_OC3M_MASK (0x7 << 4)
#define CH32V103_TIM3_CHCTLR2_Output_OC3PE (1 <<  3) /* 00000008: Output compare 3 preload enable */
#define CH32V103_TIM3_CHCTLR2_Output_OC3FE (1 <<  2) /* 00000004: Output compare 3 fast enable */
#define CH32V103_TIM3_CHCTLR2_Output_CC3S (0x3 << 0) /* 00000003: Capture/Compare 3 selection */
#define CH32V103_TIM3_CHCTLR2_Output_CC3S_MASK (0x3 << 0)
#define CH32V103_TIM3_CHCTLR2_Input_OFFSET 0x001c
#define CH32V103_TIM3_CHCTLR2_Input       (CH32V103_TIM3_BASE + CH32V103_TIM3_CHCTLR2_Input_OFFSET)
#define CH32V103_TIM3_CHCTLR2_Input_IC4F  (0xf << 12) /* 0000f000: Input capture 4 filter */
#define CH32V103_TIM3_CHCTLR2_Input_IC4F_MASK (0xf << 12)
#define CH32V103_TIM3_CHCTLR2_Input_IC4PSC (0x3 << 10) /* 00000c00: Input capture 4 prescaler */
#define CH32V103_TIM3_CHCTLR2_Input_IC4PSC_MASK (0x3 << 10)
#define CH32V103_TIM3_CHCTLR2_Input_CC4S  (0x3 << 8) /* 00000300: Capture/Compare 4 selection */
#define CH32V103_TIM3_CHCTLR2_Input_CC4S_MASK (0x3 << 8)
#define CH32V103_TIM3_CHCTLR2_Input_IC3F  (0xf << 4) /* 000000f0: Input capture 3 filter */
#define CH32V103_TIM3_CHCTLR2_Input_IC3F_MASK (0xf << 4)
#define CH32V103_TIM3_CHCTLR2_Input_IC3PSC (0x3 << 2) /* 0000000c: Input capture 3 prescaler */
#define CH32V103_TIM3_CHCTLR2_Input_IC3PSC_MASK (0x3 << 2)
#define CH32V103_TIM3_CHCTLR2_Input_CC3S  (0x3 << 0) /* 00000003: Capture/Compare 3 selection */
#define CH32V103_TIM3_CHCTLR2_Input_CC3S_MASK (0x3 << 0)
#define CH32V103_TIM3_CCER_OFFSET         0x0020
#define CH32V103_TIM3_CCER                (CH32V103_TIM3_BASE + CH32V103_TIM3_CCER_OFFSET)
#define CH32V103_TIM3_CCER_CC4P           (1 << 13) /* 00002000: Capture/Compare 3 output Polarity */
#define CH32V103_TIM3_CCER_CC4E           (1 << 12) /* 00001000: Capture/Compare 4 output enable */
#define CH32V103_TIM3_CCER_CC3P           (1 <<  9) /* 00000200: Capture/Compare 3 output Polarity */
#define CH32V103_TIM3_CCER_CC3E           (1 <<  8) /* 00000100: Capture/Compare 3 output enable */
#define CH32V103_TIM3_CCER_CC2P           (1 <<  5) /* 00000020: Capture/Compare 2 output Polarity */
#define CH32V103_TIM3_CCER_CC2E           (1 <<  4) /* 00000010: Capture/Compare 2 output enable */
#define CH32V103_TIM3_CCER_CC1P           (1 <<  1) /* 00000002: Capture/Compare 1 output Polarity */
#define CH32V103_TIM3_CCER_CC1E           (1 <<  0) /* 00000001: Capture/Compare 1 output enable */
#define CH32V103_TIM3_CNT_OFFSET          0x0024
#define CH32V103_TIM3_CNT                 (CH32V103_TIM3_BASE + CH32V103_TIM3_CNT_OFFSET)
#define CH32V103_TIM3_CNT_CNT             (0xffff << 0) /* 0000ffff: counter value */
#define CH32V103_TIM3_CNT_CNT_MASK        (0xffff << 0)
#define CH32V103_TIM3_PSC_OFFSET          0x0028
#define CH32V103_TIM3_PSC                 (CH32V103_TIM3_BASE + CH32V103_TIM3_PSC_OFFSET)
#define CH32V103_TIM3_PSC_PSC             (0xffff << 0) /* 0000ffff: Prescaler value */
#define CH32V103_TIM3_PSC_PSC_MASK        (0xffff << 0)
#define CH32V103_TIM3_ATRLR_OFFSET        0x002c
#define CH32V103_TIM3_ATRLR               (CH32V103_TIM3_BASE + CH32V103_TIM3_ATRLR_OFFSET)
#define CH32V103_TIM3_ATRLR_ARR           (0xffff << 0) /* 0000ffff: Auto-reload value */
#define CH32V103_TIM3_ATRLR_ARR_MASK      (0xffff << 0)
#define CH32V103_TIM3_CH1CVR_OFFSET       0x0034
#define CH32V103_TIM3_CH1CVR              (CH32V103_TIM3_BASE + CH32V103_TIM3_CH1CVR_OFFSET)
#define CH32V103_TIM3_CH1CVR_CCR1         (0xffff << 0) /* 0000ffff: Capture/Compare 1 value */
#define CH32V103_TIM3_CH1CVR_CCR1_MASK    (0xffff << 0)
#define CH32V103_TIM3_CH2CVR_OFFSET       0x0038
#define CH32V103_TIM3_CH2CVR              (CH32V103_TIM3_BASE + CH32V103_TIM3_CH2CVR_OFFSET)
#define CH32V103_TIM3_CH2CVR_CCR2         (0xffff << 0) /* 0000ffff: Capture/Compare 2 value */
#define CH32V103_TIM3_CH2CVR_CCR2_MASK    (0xffff << 0)
#define CH32V103_TIM3_CH3CVR_OFFSET       0x003c
#define CH32V103_TIM3_CH3CVR              (CH32V103_TIM3_BASE + CH32V103_TIM3_CH3CVR_OFFSET)
#define CH32V103_TIM3_CH3CVR_CCR3         (0xffff << 0) /* 0000ffff: Capture/Compare value */
#define CH32V103_TIM3_CH3CVR_CCR3_MASK    (0xffff << 0)
#define CH32V103_TIM3_CH4CVR_OFFSET       0x0040
#define CH32V103_TIM3_CH4CVR              (CH32V103_TIM3_BASE + CH32V103_TIM3_CH4CVR_OFFSET)
#define CH32V103_TIM3_CH4CVR_CCR4         (0xffff << 0) /* 0000ffff: Capture/Compare value */
#define CH32V103_TIM3_CH4CVR_CCR4_MASK    (0xffff << 0)
#define CH32V103_TIM3_DMACFGR_OFFSET      0x0048
#define CH32V103_TIM3_DMACFGR             (CH32V103_TIM3_BASE + CH32V103_TIM3_DMACFGR_OFFSET)
#define CH32V103_TIM3_DMACFGR_DBL         (0x1f << 8) /* 00001f00: DMA burst length */
#define CH32V103_TIM3_DMACFGR_DBL_MASK    (0x1f << 8)
#define CH32V103_TIM3_DMACFGR_DBA         (0x1f << 0) /* 0000001f: DMA base address */
#define CH32V103_TIM3_DMACFGR_DBA_MASK    (0x1f << 0)
#define CH32V103_TIM3_DMAR_OFFSET         0x004c
#define CH32V103_TIM3_DMAR                (CH32V103_TIM3_BASE + CH32V103_TIM3_DMAR_OFFSET)
#define CH32V103_TIM3_DMAR_DMAB           (0xffff << 0) /* 0000ffff: DMA register for burst accesses */
#define CH32V103_TIM3_DMAR_DMAB_MASK      (0xffff << 0)

/* TIM4 is derived from TIM2. */
#define CH32V103_TIM4_BASE                0x40000800
#define CH32V103_TIM4_CTLR1_OFFSET        0x0000
#define CH32V103_TIM4_CTLR1               (CH32V103_TIM4_BASE + CH32V103_TIM4_CTLR1_OFFSET)
#define CH32V103_TIM4_CTLR1_CKD           (0x3 << 8) /* 00000300: Clock division */
#define CH32V103_TIM4_CTLR1_CKD_MASK      (0x3 << 8)
#define CH32V103_TIM4_CTLR1_ARPE          (1 <<  7) /* 00000080: Auto-reload preload enable */
#define CH32V103_TIM4_CTLR1_CMS           (0x3 << 5) /* 00000060: Center-aligned mode selection */
#define CH32V103_TIM4_CTLR1_CMS_MASK      (0x3 << 5)
#define CH32V103_TIM4_CTLR1_DIR           (1 <<  4) /* 00000010: Direction */
#define CH32V103_TIM4_CTLR1_OPM           (1 <<  3) /* 00000008: One-pulse mode */
#define CH32V103_TIM4_CTLR1_URS           (1 <<  2) /* 00000004: Update request source */
#define CH32V103_TIM4_CTLR1_UDIS          (1 <<  1) /* 00000002: Update disable */
#define CH32V103_TIM4_CTLR1_CEN           (1 <<  0) /* 00000001: Counter enable */
#define CH32V103_TIM4_CTLR2_OFFSET        0x0004
#define CH32V103_TIM4_CTLR2               (CH32V103_TIM4_BASE + CH32V103_TIM4_CTLR2_OFFSET)
#define CH32V103_TIM4_CTLR2_TI1S          (1 <<  7) /* 00000080: TI1 selection */
#define CH32V103_TIM4_CTLR2_MMS           (0x7 << 4) /* 00000070: Master mode selection */
#define CH32V103_TIM4_CTLR2_MMS_MASK      (0x7 << 4)
#define CH32V103_TIM4_CTLR2_CCDS          (1 <<  3) /* 00000008: Capture/compare DMA selection */
#define CH32V103_TIM4_CTLR2_CCUS          (1 <<  2) /* 00000004: Capture/compare control update selection */
#define CH32V103_TIM4_CTLR2_CCPC          (1 <<  0) /* 00000001: Capture/compare preloaded control */
#define CH32V103_TIM4_SMCFGR_OFFSET       0x0008
#define CH32V103_TIM4_SMCFGR              (CH32V103_TIM4_BASE + CH32V103_TIM4_SMCFGR_OFFSET)
#define CH32V103_TIM4_SMCFGR_ETP          (1 << 15) /* 00008000: External trigger polarity */
#define CH32V103_TIM4_SMCFGR_ECE          (1 << 14) /* 00004000: External clock enable */
#define CH32V103_TIM4_SMCFGR_ETPS         (0x3 << 12) /* 00003000: External trigger prescaler */
#define CH32V103_TIM4_SMCFGR_ETPS_MASK    (0x3 << 12)
#define CH32V103_TIM4_SMCFGR_ETF          (0xf << 8) /* 00000f00: External trigger filter */
#define CH32V103_TIM4_SMCFGR_ETF_MASK     (0xf << 8)
#define CH32V103_TIM4_SMCFGR_MSM          (1 <<  7) /* 00000080: Master/Slave mode */
#define CH32V103_TIM4_SMCFGR_TS           (0x7 << 4) /* 00000070: Trigger selection */
#define CH32V103_TIM4_SMCFGR_TS_MASK      (0x7 << 4)
#define CH32V103_TIM4_SMCFGR_SMS          (0x7 << 0) /* 00000007: Slave mode selection */
#define CH32V103_TIM4_SMCFGR_SMS_MASK     (0x7 << 0)
#define CH32V103_TIM4_DMAINTENR_OFFSET    0x000c
#define CH32V103_TIM4_DMAINTENR           (CH32V103_TIM4_BASE + CH32V103_TIM4_DMAINTENR_OFFSET)
#define CH32V103_TIM4_DMAINTENR_TDE       (1 << 14) /* 00004000: Trigger DMA request enable */
#define CH32V103_TIM4_DMAINTENR_CC4DE     (1 << 12) /* 00001000: Capture/Compare 4 DMA request enable */
#define CH32V103_TIM4_DMAINTENR_CC3DE     (1 << 11) /* 00000800: Capture/Compare 3 DMA request enable */
#define CH32V103_TIM4_DMAINTENR_CC2DE     (1 << 10) /* 00000400: Capture/Compare 2 DMA request enable */
#define CH32V103_TIM4_DMAINTENR_CC1DE     (1 <<  9) /* 00000200: Capture/Compare 1 DMA request enable */
#define CH32V103_TIM4_DMAINTENR_UDE       (1 <<  8) /* 00000100: Update DMA request enable */
#define CH32V103_TIM4_DMAINTENR_TIE       (1 <<  6) /* 00000040: Trigger interrupt enable */
#define CH32V103_TIM4_DMAINTENR_CC4IE     (1 <<  4) /* 00000010: Capture/Compare 4 interrupt enable */
#define CH32V103_TIM4_DMAINTENR_CC3IE     (1 <<  3) /* 00000008: Capture/Compare 3 interrupt enable */
#define CH32V103_TIM4_DMAINTENR_CC2IE     (1 <<  2) /* 00000004: Capture/Compare 2 interrupt enable */
#define CH32V103_TIM4_DMAINTENR_CC1IE     (1 <<  1) /* 00000002: Capture/Compare 1 interrupt enable */
#define CH32V103_TIM4_DMAINTENR_UIE       (1 <<  0) /* 00000001: Update interrupt enable */
#define CH32V103_TIM4_INTFR_OFFSET        0x0010
#define CH32V103_TIM4_INTFR               (CH32V103_TIM4_BASE + CH32V103_TIM4_INTFR_OFFSET)
#define CH32V103_TIM4_INTFR_CC4OF         (1 << 12) /* 00001000: Capture/Compare 4 overcapture flag */
#define CH32V103_TIM4_INTFR_CC3OF         (1 << 11) /* 00000800: Capture/Compare 3 overcapture flag */
#define CH32V103_TIM4_INTFR_CC2OF         (1 << 10) /* 00000400: Capture/compare 2 overcapture flag */
#define CH32V103_TIM4_INTFR_CC1OF         (1 <<  9) /* 00000200: Capture/Compare 1 overcapture flag */
#define CH32V103_TIM4_INTFR_TIF           (1 <<  6) /* 00000040: Trigger interrupt flag */
#define CH32V103_TIM4_INTFR_CC4IF         (1 <<  4) /* 00000010: Capture/Compare 4 interrupt flag */
#define CH32V103_TIM4_INTFR_CC3IF         (1 <<  3) /* 00000008: Capture/Compare 3 interrupt flag */
#define CH32V103_TIM4_INTFR_CC2IF         (1 <<  2) /* 00000004: Capture/Compare 2 interrupt flag */
#define CH32V103_TIM4_INTFR_CC1IF         (1 <<  1) /* 00000002: Capture/compare 1 interrupt flag */
#define CH32V103_TIM4_INTFR_UIF           (1 <<  0) /* 00000001: Update interrupt flag */
#define CH32V103_TIM4_SWEVGR_OFFSET       0x0014
#define CH32V103_TIM4_SWEVGR              (CH32V103_TIM4_BASE + CH32V103_TIM4_SWEVGR_OFFSET)
#define CH32V103_TIM4_SWEVGR_BG           (1 <<  7) /* 00000080: Break generation */
#define CH32V103_TIM4_SWEVGR_TG           (1 <<  6) /* 00000040: Trigger generation */
#define CH32V103_TIM4_SWEVGR_COMG         (1 <<  5) /* 00000020: Capture/Compare control update generation */
#define CH32V103_TIM4_SWEVGR_CC4G         (1 <<  4) /* 00000010: Capture/compare 4 generation */
#define CH32V103_TIM4_SWEVGR_CC3G         (1 <<  3) /* 00000008: Capture/compare 3 generation */
#define CH32V103_TIM4_SWEVGR_CC2G         (1 <<  2) /* 00000004: Capture/compare 2 generation */
#define CH32V103_TIM4_SWEVGR_CC1G         (1 <<  1) /* 00000002: Capture/compare 1 generation */
#define CH32V103_TIM4_SWEVGR_UG           (1 <<  0) /* 00000001: Update generation */
#define CH32V103_TIM4_CHCTLR1_Output_OFFSET 0x0018
#define CH32V103_TIM4_CHCTLR1_Output      (CH32V103_TIM4_BASE + CH32V103_TIM4_CHCTLR1_Output_OFFSET)
#define CH32V103_TIM4_CHCTLR1_Output_OC2CE (1 << 15) /* 00008000: Output compare 2 clear enable */
#define CH32V103_TIM4_CHCTLR1_Output_OC2M (0x7 << 12) /* 00007000: Output compare 2 mode */
#define CH32V103_TIM4_CHCTLR1_Output_OC2M_MASK (0x7 << 12)
#define CH32V103_TIM4_CHCTLR1_Output_OC2PE (1 << 11) /* 00000800: Output compare 2 preload enable */
#define CH32V103_TIM4_CHCTLR1_Output_OC2FE (1 << 10) /* 00000400: Output compare 2 fast enable */
#define CH32V103_TIM4_CHCTLR1_Output_CC2S (0x3 << 8) /* 00000300: Capture/Compare 2 selection */
#define CH32V103_TIM4_CHCTLR1_Output_CC2S_MASK (0x3 << 8)
#define CH32V103_TIM4_CHCTLR1_Output_OC1CE (1 <<  7) /* 00000080: Output compare 1 clear enable */
#define CH32V103_TIM4_CHCTLR1_Output_OC1M (0x7 << 4) /* 00000070: Output compare 1 mode */
#define CH32V103_TIM4_CHCTLR1_Output_OC1M_MASK (0x7 << 4)
#define CH32V103_TIM4_CHCTLR1_Output_OC1PE (1 <<  3) /* 00000008: Output compare 1 preload enable */
#define CH32V103_TIM4_CHCTLR1_Output_OC1FE (1 <<  2) /* 00000004: Output compare 1 fast enable */
#define CH32V103_TIM4_CHCTLR1_Output_CC1S (0x3 << 0) /* 00000003: Capture/Compare 1 selection */
#define CH32V103_TIM4_CHCTLR1_Output_CC1S_MASK (0x3 << 0)
#define CH32V103_TIM4_CHCTLR1_Input_OFFSET 0x0018
#define CH32V103_TIM4_CHCTLR1_Input       (CH32V103_TIM4_BASE + CH32V103_TIM4_CHCTLR1_Input_OFFSET)
#define CH32V103_TIM4_CHCTLR1_Input_IC2F  (0xf << 12) /* 0000f000: Input capture 2 filter */
#define CH32V103_TIM4_CHCTLR1_Input_IC2F_MASK (0xf << 12)
#define CH32V103_TIM4_CHCTLR1_Input_IC2PSC (0x3 << 10) /* 00000c00: Input capture 2 prescaler */
#define CH32V103_TIM4_CHCTLR1_Input_IC2PSC_MASK (0x3 << 10)
#define CH32V103_TIM4_CHCTLR1_Input_CC2S  (0x3 << 8) /* 00000300: Capture/compare 2 selection */
#define CH32V103_TIM4_CHCTLR1_Input_CC2S_MASK (0x3 << 8)
#define CH32V103_TIM4_CHCTLR1_Input_IC1F  (0xf << 4) /* 000000f0: Input capture 1 filter */
#define CH32V103_TIM4_CHCTLR1_Input_IC1F_MASK (0xf << 4)
#define CH32V103_TIM4_CHCTLR1_Input_IC1PSC (0x3 << 2) /* 0000000c: Input capture 1 prescaler */
#define CH32V103_TIM4_CHCTLR1_Input_IC1PSC_MASK (0x3 << 2)
#define CH32V103_TIM4_CHCTLR1_Input_CC1S  (0x3 << 0) /* 00000003: Capture/Compare 1 selection */
#define CH32V103_TIM4_CHCTLR1_Input_CC1S_MASK (0x3 << 0)
#define CH32V103_TIM4_CHCTLR2_Output_OFFSET 0x001c
#define CH32V103_TIM4_CHCTLR2_Output      (CH32V103_TIM4_BASE + CH32V103_TIM4_CHCTLR2_Output_OFFSET)
#define CH32V103_TIM4_CHCTLR2_Output_OC4CE (1 << 15) /* 00008000: Output compare 4 clear enable */
#define CH32V103_TIM4_CHCTLR2_Output_OC4M (0x7 << 12) /* 00007000: Output compare 4 mode */
#define CH32V103_TIM4_CHCTLR2_Output_OC4M_MASK (0x7 << 12)
#define CH32V103_TIM4_CHCTLR2_Output_OC4PE (1 << 11) /* 00000800: Output compare 4 preload enable */
#define CH32V103_TIM4_CHCTLR2_Output_OC4FE (1 << 10) /* 00000400: Output compare 4 fast enable */
#define CH32V103_TIM4_CHCTLR2_Output_CC4S (0x3 << 8) /* 00000300: Capture/Compare 4 selection */
#define CH32V103_TIM4_CHCTLR2_Output_CC4S_MASK (0x3 << 8)
#define CH32V103_TIM4_CHCTLR2_Output_OC3CE (1 <<  7) /* 00000080: Output compare 3 clear enable */
#define CH32V103_TIM4_CHCTLR2_Output_OC3M (0x7 << 4) /* 00000070: Output compare 3 mode */
#define CH32V103_TIM4_CHCTLR2_Output_OC3M_MASK (0x7 << 4)
#define CH32V103_TIM4_CHCTLR2_Output_OC3PE (1 <<  3) /* 00000008: Output compare 3 preload enable */
#define CH32V103_TIM4_CHCTLR2_Output_OC3FE (1 <<  2) /* 00000004: Output compare 3 fast enable */
#define CH32V103_TIM4_CHCTLR2_Output_CC3S (0x3 << 0) /* 00000003: Capture/Compare 3 selection */
#define CH32V103_TIM4_CHCTLR2_Output_CC3S_MASK (0x3 << 0)
#define CH32V103_TIM4_CHCTLR2_Input_OFFSET 0x001c
#define CH32V103_TIM4_CHCTLR2_Input       (CH32V103_TIM4_BASE + CH32V103_TIM4_CHCTLR2_Input_OFFSET)
#define CH32V103_TIM4_CHCTLR2_Input_IC4F  (0xf << 12) /* 0000f000: Input capture 4 filter */
#define CH32V103_TIM4_CHCTLR2_Input_IC4F_MASK (0xf << 12)
#define CH32V103_TIM4_CHCTLR2_Input_IC4PSC (0x3 << 10) /* 00000c00: Input capture 4 prescaler */
#define CH32V103_TIM4_CHCTLR2_Input_IC4PSC_MASK (0x3 << 10)
#define CH32V103_TIM4_CHCTLR2_Input_CC4S  (0x3 << 8) /* 00000300: Capture/Compare 4 selection */
#define CH32V103_TIM4_CHCTLR2_Input_CC4S_MASK (0x3 << 8)
#define CH32V103_TIM4_CHCTLR2_Input_IC3F  (0xf << 4) /* 000000f0: Input capture 3 filter */
#define CH32V103_TIM4_CHCTLR2_Input_IC3F_MASK (0xf << 4)
#define CH32V103_TIM4_CHCTLR2_Input_IC3PSC (0x3 << 2) /* 0000000c: Input capture 3 prescaler */
#define CH32V103_TIM4_CHCTLR2_Input_IC3PSC_MASK (0x3 << 2)
#define CH32V103_TIM4_CHCTLR2_Input_CC3S  (0x3 << 0) /* 00000003: Capture/Compare 3 selection */
#define CH32V103_TIM4_CHCTLR2_Input_CC3S_MASK (0x3 << 0)
#define CH32V103_TIM4_CCER_OFFSET         0x0020
#define CH32V103_TIM4_CCER                (CH32V103_TIM4_BASE + CH32V103_TIM4_CCER_OFFSET)
#define CH32V103_TIM4_CCER_CC4P           (1 << 13) /* 00002000: Capture/Compare 3 output Polarity */
#define CH32V103_TIM4_CCER_CC4E           (1 << 12) /* 00001000: Capture/Compare 4 output enable */
#define CH32V103_TIM4_CCER_CC3P           (1 <<  9) /* 00000200: Capture/Compare 3 output Polarity */
#define CH32V103_TIM4_CCER_CC3E           (1 <<  8) /* 00000100: Capture/Compare 3 output enable */
#define CH32V103_TIM4_CCER_CC2P           (1 <<  5) /* 00000020: Capture/Compare 2 output Polarity */
#define CH32V103_TIM4_CCER_CC2E           (1 <<  4) /* 00000010: Capture/Compare 2 output enable */
#define CH32V103_TIM4_CCER_CC1P           (1 <<  1) /* 00000002: Capture/Compare 1 output Polarity */
#define CH32V103_TIM4_CCER_CC1E           (1 <<  0) /* 00000001: Capture/Compare 1 output enable */
#define CH32V103_TIM4_CNT_OFFSET          0x0024
#define CH32V103_TIM4_CNT                 (CH32V103_TIM4_BASE + CH32V103_TIM4_CNT_OFFSET)
#define CH32V103_TIM4_CNT_CNT             (0xffff << 0) /* 0000ffff: counter value */
#define CH32V103_TIM4_CNT_CNT_MASK        (0xffff << 0)
#define CH32V103_TIM4_PSC_OFFSET          0x0028
#define CH32V103_TIM4_PSC                 (CH32V103_TIM4_BASE + CH32V103_TIM4_PSC_OFFSET)
#define CH32V103_TIM4_PSC_PSC             (0xffff << 0) /* 0000ffff: Prescaler value */
#define CH32V103_TIM4_PSC_PSC_MASK        (0xffff << 0)
#define CH32V103_TIM4_ATRLR_OFFSET        0x002c
#define CH32V103_TIM4_ATRLR               (CH32V103_TIM4_BASE + CH32V103_TIM4_ATRLR_OFFSET)
#define CH32V103_TIM4_ATRLR_ARR           (0xffff << 0) /* 0000ffff: Auto-reload value */
#define CH32V103_TIM4_ATRLR_ARR_MASK      (0xffff << 0)
#define CH32V103_TIM4_CH1CVR_OFFSET       0x0034
#define CH32V103_TIM4_CH1CVR              (CH32V103_TIM4_BASE + CH32V103_TIM4_CH1CVR_OFFSET)
#define CH32V103_TIM4_CH1CVR_CCR1         (0xffff << 0) /* 0000ffff: Capture/Compare 1 value */
#define CH32V103_TIM4_CH1CVR_CCR1_MASK    (0xffff << 0)
#define CH32V103_TIM4_CH2CVR_OFFSET       0x0038
#define CH32V103_TIM4_CH2CVR              (CH32V103_TIM4_BASE + CH32V103_TIM4_CH2CVR_OFFSET)
#define CH32V103_TIM4_CH2CVR_CCR2         (0xffff << 0) /* 0000ffff: Capture/Compare 2 value */
#define CH32V103_TIM4_CH2CVR_CCR2_MASK    (0xffff << 0)
#define CH32V103_TIM4_CH3CVR_OFFSET       0x003c
#define CH32V103_TIM4_CH3CVR              (CH32V103_TIM4_BASE + CH32V103_TIM4_CH3CVR_OFFSET)
#define CH32V103_TIM4_CH3CVR_CCR3         (0xffff << 0) /* 0000ffff: Capture/Compare value */
#define CH32V103_TIM4_CH3CVR_CCR3_MASK    (0xffff << 0)
#define CH32V103_TIM4_CH4CVR_OFFSET       0x0040
#define CH32V103_TIM4_CH4CVR              (CH32V103_TIM4_BASE + CH32V103_TIM4_CH4CVR_OFFSET)
#define CH32V103_TIM4_CH4CVR_CCR4         (0xffff << 0) /* 0000ffff: Capture/Compare value */
#define CH32V103_TIM4_CH4CVR_CCR4_MASK    (0xffff << 0)
#define CH32V103_TIM4_DMACFGR_OFFSET      0x0048
#define CH32V103_TIM4_DMACFGR             (CH32V103_TIM4_BASE + CH32V103_TIM4_DMACFGR_OFFSET)
#define CH32V103_TIM4_DMACFGR_DBL         (0x1f << 8) /* 00001f00: DMA burst length */
#define CH32V103_TIM4_DMACFGR_DBL_MASK    (0x1f << 8)
#define CH32V103_TIM4_DMACFGR_DBA         (0x1f << 0) /* 0000001f: DMA base address */
#define CH32V103_TIM4_DMACFGR_DBA_MASK    (0x1f << 0)
#define CH32V103_TIM4_DMAR_OFFSET         0x004c
#define CH32V103_TIM4_DMAR                (CH32V103_TIM4_BASE + CH32V103_TIM4_DMAR_OFFSET)
#define CH32V103_TIM4_DMAR_DMAB           (0xffff << 0) /* 0000ffff: DMA register for burst accesses */
#define CH32V103_TIM4_DMAR_DMAB_MASK      (0xffff << 0)

/* I2C2 is derived from I2C1. */
#define CH32V103_I2C2_BASE                0x40005800
#define CH32V103_I2C2_CTLR1_OFFSET        0x0000
#define CH32V103_I2C2_CTLR1               (CH32V103_I2C2_BASE + CH32V103_I2C2_CTLR1_OFFSET)
#define CH32V103_I2C2_CTLR1_SWRST         (1 << 15) /* 00008000: Software reset */
#define CH32V103_I2C2_CTLR1_ALERT         (1 << 13) /* 00002000: SMBus alert */
#define CH32V103_I2C2_CTLR1_PEC           (1 << 12) /* 00001000: Packet error checking */
#define CH32V103_I2C2_CTLR1_POS           (1 << 11) /* 00000800: Acknowledge/PEC Position (for data reception) */
#define CH32V103_I2C2_CTLR1_ACK           (1 << 10) /* 00000400: Acknowledge enable */
#define CH32V103_I2C2_CTLR1_STOP          (1 <<  9) /* 00000200: Stop generation */
#define CH32V103_I2C2_CTLR1_START         (1 <<  8) /* 00000100: Start generation */
#define CH32V103_I2C2_CTLR1_NOSTRETCH     (1 <<  7) /* 00000080: Clock stretching disable (Slave mode) */
#define CH32V103_I2C2_CTLR1_ENGC          (1 <<  6) /* 00000040: General call enable */
#define CH32V103_I2C2_CTLR1_ENPEC         (1 <<  5) /* 00000020: PEC enable */
#define CH32V103_I2C2_CTLR1_ENARP         (1 <<  4) /* 00000010: ARP enable */
#define CH32V103_I2C2_CTLR1_SMBTYPE       (1 <<  3) /* 00000008: SMBus type */
#define CH32V103_I2C2_CTLR1_SMBUS         (1 <<  1) /* 00000002: SMBus mode */
#define CH32V103_I2C2_CTLR1_PE            (1 <<  0) /* 00000001: Peripheral enable */
#define CH32V103_I2C2_CTLR2_OFFSET        0x0004
#define CH32V103_I2C2_CTLR2               (CH32V103_I2C2_BASE + CH32V103_I2C2_CTLR2_OFFSET)
#define CH32V103_I2C2_CTLR2_LAST          (1 << 12) /* 00001000: DMA last transfer */
#define CH32V103_I2C2_CTLR2_DMAEN         (1 << 11) /* 00000800: DMA requests enable */
#define CH32V103_I2C2_CTLR2_ITBUFEN       (1 << 10) /* 00000400: Buffer interrupt enable */
#define CH32V103_I2C2_CTLR2_ITEVTEN       (1 <<  9) /* 00000200: Event interrupt enable */
#define CH32V103_I2C2_CTLR2_ITERREN       (1 <<  8) /* 00000100: Error interrupt enable */
#define CH32V103_I2C2_CTLR2_FREQ          (0x3f << 0) /* 0000003f: Peripheral clock frequency */
#define CH32V103_I2C2_CTLR2_FREQ_MASK     (0x3f << 0)
#define CH32V103_I2C2_OADDR1_OFFSET       0x0008
#define CH32V103_I2C2_OADDR1              (CH32V103_I2C2_BASE + CH32V103_I2C2_OADDR1_OFFSET)
#define CH32V103_I2C2_OADDR1_ADDMODE      (1 << 15) /* 00008000: Addressing mode (slave mode) */
#define CH32V103_I2C2_OADDR1_MUST1        (1 << 14) /* 00004000: must set 1 bit */
#define CH32V103_I2C2_OADDR1_ADD9_8       (0x3 << 8) /* 00000300: Interface address */
#define CH32V103_I2C2_OADDR1_ADD9_8_MASK  (0x3 << 8)
#define CH32V103_I2C2_OADDR1_ADD7_1       (0x7f << 1) /* 000000fe: Interface address */
#define CH32V103_I2C2_OADDR1_ADD7_1_MASK  (0x7f << 1)
#define CH32V103_I2C2_OADDR1_ADD0         (1 <<  0) /* 00000001: Interface address */
#define CH32V103_I2C2_OADDR2_OFFSET       0x000c
#define CH32V103_I2C2_OADDR2              (CH32V103_I2C2_BASE + CH32V103_I2C2_OADDR2_OFFSET)
#define CH32V103_I2C2_OADDR2_ADD2         (0x7f << 1) /* 000000fe: Interface address */
#define CH32V103_I2C2_OADDR2_ADD2_MASK    (0x7f << 1)
#define CH32V103_I2C2_OADDR2_ENDUAL       (1 <<  0) /* 00000001: Dual addressing mode enable */
#define CH32V103_I2C2_DATAR_OFFSET        0x0010
#define CH32V103_I2C2_DATAR               (CH32V103_I2C2_BASE + CH32V103_I2C2_DATAR_OFFSET)
#define CH32V103_I2C2_DATAR_DR            (0xff << 0) /* 000000ff: 8-bit data register */
#define CH32V103_I2C2_DATAR_DR_MASK       (0xff << 0)
#define CH32V103_I2C2_STAR1_OFFSET        0x0014
#define CH32V103_I2C2_STAR1               (CH32V103_I2C2_BASE + CH32V103_I2C2_STAR1_OFFSET)
#define CH32V103_I2C2_STAR1_SMBALERT      (1 << 15) /* 00008000: SMBus alert */
#define CH32V103_I2C2_STAR1_TIMEOUT       (1 << 14) /* 00004000: Timeout or Tlow error */
#define CH32V103_I2C2_STAR1_PECERR        (1 << 12) /* 00001000: PEC Error in reception */
#define CH32V103_I2C2_STAR1_OVR           (1 << 11) /* 00000800: Overrun/Underrun */
#define CH32V103_I2C2_STAR1_AF            (1 << 10) /* 00000400: Acknowledge failure */
#define CH32V103_I2C2_STAR1_ARLO          (1 <<  9) /* 00000200: Arbitration lost (master mode) */
#define CH32V103_I2C2_STAR1_BERR          (1 <<  8) /* 00000100: Bus error */
#define CH32V103_I2C2_STAR1_TxE           (1 <<  7) /* 00000080: Data register empty (transmitters) */
#define CH32V103_I2C2_STAR1_RxNE          (1 <<  6) /* 00000040: Data register not empty (receivers) */
#define CH32V103_I2C2_STAR1_STOPF         (1 <<  4) /* 00000010: Stop detection (slave mode) */
#define CH32V103_I2C2_STAR1_ADD10         (1 <<  3) /* 00000008: 10-bit header sent (Master mode) */
#define CH32V103_I2C2_STAR1_BTF           (1 <<  2) /* 00000004: Byte transfer finished */
#define CH32V103_I2C2_STAR1_ADDR          (1 <<  1) /* 00000002: Address sent (master mode)/matched (slave mode) */
#define CH32V103_I2C2_STAR1_SB            (1 <<  0) /* 00000001: Start bit (Master mode) */
#define CH32V103_I2C2_STAR2_OFFSET        0x0018
#define CH32V103_I2C2_STAR2               (CH32V103_I2C2_BASE + CH32V103_I2C2_STAR2_OFFSET)
#define CH32V103_I2C2_STAR2_PEC           (0xff << 8) /* 0000ff00: acket error checking register */
#define CH32V103_I2C2_STAR2_PEC_MASK      (0xff << 8)
#define CH32V103_I2C2_STAR2_DUALF         (1 <<  7) /* 00000080: Dual flag (Slave mode) */
#define CH32V103_I2C2_STAR2_SMBHOST       (1 <<  6) /* 00000040: SMBus host header (Slave mode) */
#define CH32V103_I2C2_STAR2_SMBDEFAULT    (1 <<  5) /* 00000020: SMBus device default address (Slave mode) */
#define CH32V103_I2C2_STAR2_GENCALL       (1 <<  4) /* 00000010: General call address (Slave mode) */
#define CH32V103_I2C2_STAR2_TRA           (1 <<  2) /* 00000004: Transmitter/receiver */
#define CH32V103_I2C2_STAR2_BUSY          (1 <<  1) /* 00000002: Bus busy */
#define CH32V103_I2C2_STAR2_MSL           (1 <<  0) /* 00000001: Master/slave */
#define CH32V103_I2C2_CKCFGR_OFFSET       0x001c
#define CH32V103_I2C2_CKCFGR              (CH32V103_I2C2_BASE + CH32V103_I2C2_CKCFGR_OFFSET)
#define CH32V103_I2C2_CKCFGR_F_S          (1 << 15) /* 00008000: I2C master mode selection */
#define CH32V103_I2C2_CKCFGR_DUTY         (1 << 14) /* 00004000: Fast mode duty cycle */
#define CH32V103_I2C2_CKCFGR_CCR          (0xfff << 0) /* 00000fff: Clock control register in Fast/Standard mode (Master mode) */
#define CH32V103_I2C2_CKCFGR_CCR_MASK     (0xfff << 0)
#define CH32V103_I2C2_RTR_OFFSET          0x0020
#define CH32V103_I2C2_RTR                 (CH32V103_I2C2_BASE + CH32V103_I2C2_RTR_OFFSET)
#define CH32V103_I2C2_RTR_TRISE           (0x3f << 0) /* 0000003f: Maximum rise time in Fast/Standard mode (Master mode) */
#define CH32V103_I2C2_RTR_TRISE_MASK      (0x3f << 0)

/* SPI2 is derived from SPI1. */
#define CH32V103_SPI2_BASE                0x40003800
#define CH32V103_SPI2_CTLR1_OFFSET        0x0000
#define CH32V103_SPI2_CTLR1               (CH32V103_SPI2_BASE + CH32V103_SPI2_CTLR1_OFFSET)
#define CH32V103_SPI2_CTLR1_BIDIMODE      (1 << 15) /* 00008000: Bidirectional data mode enable */
#define CH32V103_SPI2_CTLR1_BIDIOE        (1 << 14) /* 00004000: Output enable in bidirectional mode */
#define CH32V103_SPI2_CTLR1_CRCEN         (1 << 13) /* 00002000: Hardware CRC calculation enable */
#define CH32V103_SPI2_CTLR1_CRCNEXT       (1 << 12) /* 00001000: CRC transfer next */
#define CH32V103_SPI2_CTLR1_DFF           (1 << 11) /* 00000800: Data frame format */
#define CH32V103_SPI2_CTLR1_RXONLY        (1 << 10) /* 00000400: Receive only */
#define CH32V103_SPI2_CTLR1_SSM           (1 <<  9) /* 00000200: Software slave management */
#define CH32V103_SPI2_CTLR1_SSI           (1 <<  8) /* 00000100: Internal slave select */
#define CH32V103_SPI2_CTLR1_LSBFIRST      (1 <<  7) /* 00000080: Frame format */
#define CH32V103_SPI2_CTLR1_SPE           (1 <<  6) /* 00000040: SPI enable */
#define CH32V103_SPI2_CTLR1_BR            (0x7 << 3) /* 00000038: Baud rate control */
#define CH32V103_SPI2_CTLR1_BR_MASK       (0x7 << 3)
#define CH32V103_SPI2_CTLR1_MSTR          (1 <<  2) /* 00000004: Master selection */
#define CH32V103_SPI2_CTLR1_CPOL          (1 <<  1) /* 00000002: Clock polarity */
#define CH32V103_SPI2_CTLR1_CPHA          (1 <<  0) /* 00000001: Clock phase */
#define CH32V103_SPI2_CTLR2_OFFSET        0x0004
#define CH32V103_SPI2_CTLR2               (CH32V103_SPI2_BASE + CH32V103_SPI2_CTLR2_OFFSET)
#define CH32V103_SPI2_CTLR2_TXEIE         (1 <<  7) /* 00000080: Tx buffer empty interrupt enable */
#define CH32V103_SPI2_CTLR2_RXNEIE        (1 <<  6) /* 00000040: RX buffer not empty interrupt enable */
#define CH32V103_SPI2_CTLR2_ERRIE         (1 <<  5) /* 00000020: Error interrupt enable */
#define CH32V103_SPI2_CTLR2_SSOE          (1 <<  2) /* 00000004: SS output enable */
#define CH32V103_SPI2_CTLR2_TXDMAEN       (1 <<  1) /* 00000002: Tx buffer DMA enable */
#define CH32V103_SPI2_CTLR2_RXDMAEN       (1 <<  0) /* 00000001: Rx buffer DMA enable */
#define CH32V103_SPI2_STATR_OFFSET        0x0008
#define CH32V103_SPI2_STATR               (CH32V103_SPI2_BASE + CH32V103_SPI2_STATR_OFFSET)
#define CH32V103_SPI2_STATR_BSY           (1 <<  7) /* 00000080: Busy flag */
#define CH32V103_SPI2_STATR_OVR           (1 <<  6) /* 00000040: Overrun flag */
#define CH32V103_SPI2_STATR_MODF          (1 <<  5) /* 00000020: Mode fault */
#define CH32V103_SPI2_STATR_CRCERR        (1 <<  4) /* 00000010: CRC error flag */
#define CH32V103_SPI2_STATR_TXE           (1 <<  1) /* 00000002: Transmit buffer empty */
#define CH32V103_SPI2_STATR_RXNE          (1 <<  0) /* 00000001: Receive buffer not empty */
#define CH32V103_SPI2_DATAR_OFFSET        0x000c
#define CH32V103_SPI2_DATAR               (CH32V103_SPI2_BASE + CH32V103_SPI2_DATAR_OFFSET)
#define CH32V103_SPI2_DATAR_DATAR         (0xffff << 0) /* 0000ffff: Data register */
#define CH32V103_SPI2_DATAR_DATAR_MASK    (0xffff << 0)
#define CH32V103_SPI2_CRCR_OFFSET         0x0010
#define CH32V103_SPI2_CRCR                (CH32V103_SPI2_BASE + CH32V103_SPI2_CRCR_OFFSET)
#define CH32V103_SPI2_CRCR_CRCPOLY        (0xffff << 0) /* 0000ffff: CRC polynomial register */
#define CH32V103_SPI2_CRCR_CRCPOLY_MASK   (0xffff << 0)
#define CH32V103_SPI2_RCRCR_OFFSET        0x0014
#define CH32V103_SPI2_RCRCR               (CH32V103_SPI2_BASE + CH32V103_SPI2_RCRCR_OFFSET)
#define CH32V103_SPI2_RCRCR_RxCRC         (0xffff << 0) /* 0000ffff: Rx CRC register */
#define CH32V103_SPI2_RCRCR_RxCRC_MASK    (0xffff << 0)
#define CH32V103_SPI2_TCRCR_OFFSET        0x0018
#define CH32V103_SPI2_TCRCR               (CH32V103_SPI2_BASE + CH32V103_SPI2_TCRCR_OFFSET)
#define CH32V103_SPI2_TCRCR_TxCRC         (0xffff << 0) /* 0000ffff: Tx CRC register */
#define CH32V103_SPI2_TCRCR_TxCRC_MASK    (0xffff << 0)
#define CH32V103_SPI2_I2SCFGR_OFFSET      0x001c
#define CH32V103_SPI2_I2SCFGR             (CH32V103_SPI2_BASE + CH32V103_SPI2_I2SCFGR_OFFSET)
#define CH32V103_SPI2_I2SCFGR_I2SMOD      (1 << 11) /* 00000800: I2S mode selection */
#define CH32V103_SPI2_I2SCFGR_I2SE        (1 << 10) /* 00000400: I2S Enable */
#define CH32V103_SPI2_I2SCFGR_I2SCFG      (0x3 << 8) /* 00000300: I2S configuration mode */
#define CH32V103_SPI2_I2SCFGR_I2SCFG_MASK (0x3 << 8)
#define CH32V103_SPI2_I2SCFGR_PCMSYNC     (1 <<  7) /* 00000080: PCM frame synchronization */
#define CH32V103_SPI2_I2SCFGR_I2SSTD      (0x3 << 4) /* 00000030: I2S standard selection */
#define CH32V103_SPI2_I2SCFGR_I2SSTD_MASK (0x3 << 4)
#define CH32V103_SPI2_I2SCFGR_CKPOL       (1 <<  3) /* 00000008: Steady state clock polarity */
#define CH32V103_SPI2_I2SCFGR_DATLEN      (0x3 << 1) /* 00000006: Data length to be transferred */
#define CH32V103_SPI2_I2SCFGR_DATLEN_MASK (0x3 << 1)
#define CH32V103_SPI2_I2SCFGR_CHLEN       (1 <<  0) /* 00000001: Channel length (number of bits per audio channel) */
#define CH32V103_SPI2_I2SPR_OFFSET        0x0020
#define CH32V103_SPI2_I2SPR               (CH32V103_SPI2_BASE + CH32V103_SPI2_I2SPR_OFFSET)
#define CH32V103_SPI2_I2SPR_MCKOE         (1 <<  9) /* 00000200: Master clock output enable */
#define CH32V103_SPI2_I2SPR_ODD           (1 <<  8) /* 00000100: Odd factor for the prescaler */
#define CH32V103_SPI2_I2SPR_I2SDIV        (0xff << 0) /* 000000ff: I2S Linear prescaler */
#define CH32V103_SPI2_I2SPR_I2SDIV_MASK   (0xff << 0)

/* USART2 is derived from USART1. */
#define CH32V103_USART2_BASE              0x40004400
#define CH32V103_USART2_STATR_OFFSET      0x0000
#define CH32V103_USART2_STATR             (CH32V103_USART2_BASE + CH32V103_USART2_STATR_OFFSET)
#define CH32V103_USART2_STATR_CTS         (1 <<  9) /* 00000200: CTS flag */
#define CH32V103_USART2_STATR_LBD         (1 <<  8) /* 00000100: LIN break detection flag */
#define CH32V103_USART2_STATR_TXE         (1 <<  7) /* 00000080: Transmit data register empty */
#define CH32V103_USART2_STATR_TC          (1 <<  6) /* 00000040: Transmission complete */
#define CH32V103_USART2_STATR_RXNE        (1 <<  5) /* 00000020: Read data register not empty */
#define CH32V103_USART2_STATR_IDLE        (1 <<  4) /* 00000010: IDLE line detected */
#define CH32V103_USART2_STATR_ORE         (1 <<  3) /* 00000008: Overrun error */
#define CH32V103_USART2_STATR_NE          (1 <<  2) /* 00000004: Noise error flag */
#define CH32V103_USART2_STATR_FE          (1 <<  1) /* 00000002: Framing error */
#define CH32V103_USART2_STATR_PE          (1 <<  0) /* 00000001: Parity error */
#define CH32V103_USART2_DATAR_OFFSET      0x0004
#define CH32V103_USART2_DATAR             (CH32V103_USART2_BASE + CH32V103_USART2_DATAR_OFFSET)
#define CH32V103_USART2_DATAR_DR          (0x1ff << 0) /* 000001ff: Data value */
#define CH32V103_USART2_DATAR_DR_MASK     (0x1ff << 0)
#define CH32V103_USART2_BRR_OFFSET        0x0008
#define CH32V103_USART2_BRR               (CH32V103_USART2_BASE + CH32V103_USART2_BRR_OFFSET)
#define CH32V103_USART2_BRR_DIV_Mantissa  (0xfff << 4) /* 0000fff0: mantissa of USARTDIV */
#define CH32V103_USART2_BRR_DIV_Mantissa_MASK (0xfff << 4)
#define CH32V103_USART2_BRR_DIV_Fraction  (0xf << 0) /* 0000000f: fraction of USARTDIV */
#define CH32V103_USART2_BRR_DIV_Fraction_MASK (0xf << 0)
#define CH32V103_USART2_CTLR1_OFFSET      0x000c
#define CH32V103_USART2_CTLR1             (CH32V103_USART2_BASE + CH32V103_USART2_CTLR1_OFFSET)
#define CH32V103_USART2_CTLR1_UE          (1 << 13) /* 00002000: USART enable */
#define CH32V103_USART2_CTLR1_M           (1 << 12) /* 00001000: Word length */
#define CH32V103_USART2_CTLR1_WAKE        (1 << 11) /* 00000800: Wakeup method */
#define CH32V103_USART2_CTLR1_PCE         (1 << 10) /* 00000400: Parity control enable */
#define CH32V103_USART2_CTLR1_PS          (1 <<  9) /* 00000200: Parity selection */
#define CH32V103_USART2_CTLR1_PEIE        (1 <<  8) /* 00000100: PE interrupt enable */
#define CH32V103_USART2_CTLR1_TXEIE       (1 <<  7) /* 00000080: TXE interrupt enable */
#define CH32V103_USART2_CTLR1_TCIE        (1 <<  6) /* 00000040: Transmission complete interrupt enable */
#define CH32V103_USART2_CTLR1_RXNEIE      (1 <<  5) /* 00000020: RXNE interrupt enable */
#define CH32V103_USART2_CTLR1_IDLEIE      (1 <<  4) /* 00000010: IDLE interrupt enable */
#define CH32V103_USART2_CTLR1_TE          (1 <<  3) /* 00000008: Transmitter enable */
#define CH32V103_USART2_CTLR1_RE          (1 <<  2) /* 00000004: Receiver enable */
#define CH32V103_USART2_CTLR1_RWU         (1 <<  1) /* 00000002: Receiver wakeup */
#define CH32V103_USART2_CTLR1_SBK         (1 <<  0) /* 00000001: Send break */
#define CH32V103_USART2_CTLR2_OFFSET      0x0010
#define CH32V103_USART2_CTLR2             (CH32V103_USART2_BASE + CH32V103_USART2_CTLR2_OFFSET)
#define CH32V103_USART2_CTLR2_LINEN       (1 << 14) /* 00004000: LIN mode enable */
#define CH32V103_USART2_CTLR2_STOP        (0x3 << 12) /* 00003000: STOP bits */
#define CH32V103_USART2_CTLR2_STOP_MASK   (0x3 << 12)
#define CH32V103_USART2_CTLR2_CLKEN       (1 << 11) /* 00000800: Clock enable */
#define CH32V103_USART2_CTLR2_CPOL        (1 << 10) /* 00000400: Clock polarity */
#define CH32V103_USART2_CTLR2_CPHA        (1 <<  9) /* 00000200: Clock phase */
#define CH32V103_USART2_CTLR2_LBCL        (1 <<  8) /* 00000100: Last bit clock pulse */
#define CH32V103_USART2_CTLR2_LBDIE       (1 <<  6) /* 00000040: LIN break detection interrupt enable */
#define CH32V103_USART2_CTLR2_LBDL        (1 <<  5) /* 00000020: lin break detection length */
#define CH32V103_USART2_CTLR2_ADD         (0xf << 0) /* 0000000f: Address of the USART node */
#define CH32V103_USART2_CTLR2_ADD_MASK    (0xf << 0)
#define CH32V103_USART2_CTLR3_OFFSET      0x0014
#define CH32V103_USART2_CTLR3             (CH32V103_USART2_BASE + CH32V103_USART2_CTLR3_OFFSET)
#define CH32V103_USART2_CTLR3_CTSIE       (1 << 10) /* 00000400: CTS interrupt enable */
#define CH32V103_USART2_CTLR3_CTSE        (1 <<  9) /* 00000200: CTS enable */
#define CH32V103_USART2_CTLR3_RTSE        (1 <<  8) /* 00000100: RTS enable */
#define CH32V103_USART2_CTLR3_DMAT        (1 <<  7) /* 00000080: DMA enable transmitter */
#define CH32V103_USART2_CTLR3_DMAR        (1 <<  6) /* 00000040: DMA enable receiver */
#define CH32V103_USART2_CTLR3_SCEN        (1 <<  5) /* 00000020: Smartcard mode enable */
#define CH32V103_USART2_CTLR3_NACK        (1 <<  4) /* 00000010: Smartcard NACK enable */
#define CH32V103_USART2_CTLR3_HDSEL       (1 <<  3) /* 00000008: Half-duplex selection */
#define CH32V103_USART2_CTLR3_IRLP        (1 <<  2) /* 00000004: IrDA low-power */
#define CH32V103_USART2_CTLR3_IREN        (1 <<  1) /* 00000002: IrDA mode enable */
#define CH32V103_USART2_CTLR3_EIE         (1 <<  0) /* 00000001: Error interrupt enable */
#define CH32V103_USART2_GPR_OFFSET        0x0018
#define CH32V103_USART2_GPR               (CH32V103_USART2_BASE + CH32V103_USART2_GPR_OFFSET)
#define CH32V103_USART2_GPR_GT            (0xff << 8) /* 0000ff00: Guard time value */
#define CH32V103_USART2_GPR_GT_MASK       (0xff << 8)
#define CH32V103_USART2_GPR_PSC           (0xff << 0) /* 000000ff: Prescaler value */
#define CH32V103_USART2_GPR_PSC_MASK      (0xff << 0)

/* USART3 is derived from USART1. */
#define CH32V103_USART3_BASE              0x40004800
#define CH32V103_USART3_STATR_OFFSET      0x0000
#define CH32V103_USART3_STATR             (CH32V103_USART3_BASE + CH32V103_USART3_STATR_OFFSET)
#define CH32V103_USART3_STATR_CTS         (1 <<  9) /* 00000200: CTS flag */
#define CH32V103_USART3_STATR_LBD         (1 <<  8) /* 00000100: LIN break detection flag */
#define CH32V103_USART3_STATR_TXE         (1 <<  7) /* 00000080: Transmit data register empty */
#define CH32V103_USART3_STATR_TC          (1 <<  6) /* 00000040: Transmission complete */
#define CH32V103_USART3_STATR_RXNE        (1 <<  5) /* 00000020: Read data register not empty */
#define CH32V103_USART3_STATR_IDLE        (1 <<  4) /* 00000010: IDLE line detected */
#define CH32V103_USART3_STATR_ORE         (1 <<  3) /* 00000008: Overrun error */
#define CH32V103_USART3_STATR_NE          (1 <<  2) /* 00000004: Noise error flag */
#define CH32V103_USART3_STATR_FE          (1 <<  1) /* 00000002: Framing error */
#define CH32V103_USART3_STATR_PE          (1 <<  0) /* 00000001: Parity error */
#define CH32V103_USART3_DATAR_OFFSET      0x0004
#define CH32V103_USART3_DATAR             (CH32V103_USART3_BASE + CH32V103_USART3_DATAR_OFFSET)
#define CH32V103_USART3_DATAR_DR          (0x1ff << 0) /* 000001ff: Data value */
#define CH32V103_USART3_DATAR_DR_MASK     (0x1ff << 0)
#define CH32V103_USART3_BRR_OFFSET        0x0008
#define CH32V103_USART3_BRR               (CH32V103_USART3_BASE + CH32V103_USART3_BRR_OFFSET)
#define CH32V103_USART3_BRR_DIV_Mantissa  (0xfff << 4) /* 0000fff0: mantissa of USARTDIV */
#define CH32V103_USART3_BRR_DIV_Mantissa_MASK (0xfff << 4)
#define CH32V103_USART3_BRR_DIV_Fraction  (0xf << 0) /* 0000000f: fraction of USARTDIV */
#define CH32V103_USART3_BRR_DIV_Fraction_MASK (0xf << 0)
#define CH32V103_USART3_CTLR1_OFFSET      0x000c
#define CH32V103_USART3_CTLR1             (CH32V103_USART3_BASE + CH32V103_USART3_CTLR1_OFFSET)
#define CH32V103_USART3_CTLR1_UE          (1 << 13) /* 00002000: USART enable */
#define CH32V103_USART3_CTLR1_M           (1 << 12) /* 00001000: Word length */
#define CH32V103_USART3_CTLR1_WAKE        (1 << 11) /* 00000800: Wakeup method */
#define CH32V103_USART3_CTLR1_PCE         (1 << 10) /* 00000400: Parity control enable */
#define CH32V103_USART3_CTLR1_PS          (1 <<  9) /* 00000200: Parity selection */
#define CH32V103_USART3_CTLR1_PEIE        (1 <<  8) /* 00000100: PE interrupt enable */
#define CH32V103_USART3_CTLR1_TXEIE       (1 <<  7) /* 00000080: TXE interrupt enable */
#define CH32V103_USART3_CTLR1_TCIE        (1 <<  6) /* 00000040: Transmission complete interrupt enable */
#define CH32V103_USART3_CTLR1_RXNEIE      (1 <<  5) /* 00000020: RXNE interrupt enable */
#define CH32V103_USART3_CTLR1_IDLEIE      (1 <<  4) /* 00000010: IDLE interrupt enable */
#define CH32V103_USART3_CTLR1_TE          (1 <<  3) /* 00000008: Transmitter enable */
#define CH32V103_USART3_CTLR1_RE          (1 <<  2) /* 00000004: Receiver enable */
#define CH32V103_USART3_CTLR1_RWU         (1 <<  1) /* 00000002: Receiver wakeup */
#define CH32V103_USART3_CTLR1_SBK         (1 <<  0) /* 00000001: Send break */
#define CH32V103_USART3_CTLR2_OFFSET      0x0010
#define CH32V103_USART3_CTLR2             (CH32V103_USART3_BASE + CH32V103_USART3_CTLR2_OFFSET)
#define CH32V103_USART3_CTLR2_LINEN       (1 << 14) /* 00004000: LIN mode enable */
#define CH32V103_USART3_CTLR2_STOP        (0x3 << 12) /* 00003000: STOP bits */
#define CH32V103_USART3_CTLR2_STOP_MASK   (0x3 << 12)
#define CH32V103_USART3_CTLR2_CLKEN       (1 << 11) /* 00000800: Clock enable */
#define CH32V103_USART3_CTLR2_CPOL        (1 << 10) /* 00000400: Clock polarity */
#define CH32V103_USART3_CTLR2_CPHA        (1 <<  9) /* 00000200: Clock phase */
#define CH32V103_USART3_CTLR2_LBCL        (1 <<  8) /* 00000100: Last bit clock pulse */
#define CH32V103_USART3_CTLR2_LBDIE       (1 <<  6) /* 00000040: LIN break detection interrupt enable */
#define CH32V103_USART3_CTLR2_LBDL        (1 <<  5) /* 00000020: lin break detection length */
#define CH32V103_USART3_CTLR2_ADD         (0xf << 0) /* 0000000f: Address of the USART node */
#define CH32V103_USART3_CTLR2_ADD_MASK    (0xf << 0)
#define CH32V103_USART3_CTLR3_OFFSET      0x0014
#define CH32V103_USART3_CTLR3             (CH32V103_USART3_BASE + CH32V103_USART3_CTLR3_OFFSET)
#define CH32V103_USART3_CTLR3_CTSIE       (1 << 10) /* 00000400: CTS interrupt enable */
#define CH32V103_USART3_CTLR3_CTSE        (1 <<  9) /* 00000200: CTS enable */
#define CH32V103_USART3_CTLR3_RTSE        (1 <<  8) /* 00000100: RTS enable */
#define CH32V103_USART3_CTLR3_DMAT        (1 <<  7) /* 00000080: DMA enable transmitter */
#define CH32V103_USART3_CTLR3_DMAR        (1 <<  6) /* 00000040: DMA enable receiver */
#define CH32V103_USART3_CTLR3_SCEN        (1 <<  5) /* 00000020: Smartcard mode enable */
#define CH32V103_USART3_CTLR3_NACK        (1 <<  4) /* 00000010: Smartcard NACK enable */
#define CH32V103_USART3_CTLR3_HDSEL       (1 <<  3) /* 00000008: Half-duplex selection */
#define CH32V103_USART3_CTLR3_IRLP        (1 <<  2) /* 00000004: IrDA low-power */
#define CH32V103_USART3_CTLR3_IREN        (1 <<  1) /* 00000002: IrDA mode enable */
#define CH32V103_USART3_CTLR3_EIE         (1 <<  0) /* 00000001: Error interrupt enable */
#define CH32V103_USART3_GPR_OFFSET        0x0018
#define CH32V103_USART3_GPR               (CH32V103_USART3_BASE + CH32V103_USART3_GPR_OFFSET)
#define CH32V103_USART3_GPR_GT            (0xff << 8) /* 0000ff00: Guard time value */
#define CH32V103_USART3_GPR_GT_MASK       (0xff << 8)
#define CH32V103_USART3_GPR_PSC           (0xff << 0) /* 000000ff: Prescaler value */
#define CH32V103_USART3_GPR_PSC_MASK      (0xff << 0)
