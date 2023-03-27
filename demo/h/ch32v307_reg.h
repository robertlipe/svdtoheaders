
/* RNG - Random number generator */
#define CH32V_RNG_BASE            0x40023c00
#define CH32V_RNG_CR_OFFSET       0x0000
#define CH32V_RNG_CR              (CH32V_RNG_BASE + CH32V_RNG_CR_OFFSET)
#define CH32V_RNG_CR_IE           (1 <<  3) /* 08: Interrupt enable */
#define CH32V_RNG_CR_RNGEN        (1 <<  2) /* 04: Random number generator enable */
#define CH32V_RNG_SR_OFFSET       0x0004
#define CH32V_RNG_SR              (CH32V_RNG_BASE + CH32V_RNG_SR_OFFSET)
#define CH32V_RNG_SR_SEIS         (1 <<  6) /* 40: Seed error interrupt status */
#define CH32V_RNG_SR_CEIS         (1 <<  5) /* 20: Clock error interrupt status */
#define CH32V_RNG_SR_SECS         (1 <<  2) /* 04: Seed error current status */
#define CH32V_RNG_SR_CECS         (1 <<  1) /* 02: Clock error current status */
#define CH32V_RNG_SR_DRDY         (1 <<  0) /* 01: Data ready */
#define CH32V_RNG_DR_OFFSET       0x0008
#define CH32V_RNG_DR              (CH32V_RNG_BASE + CH32V_RNG_DR_OFFSET)
#define CH32V_RNG_DR_RNDATA       (32 <<  0) /* 01: Random data */
#define CH32V_RNG_DR_RNDATA_MASK       (0xffffffff)

/* USB - Universal serial bus full-speed device interface */
#define CH32V_USB_BASE            0x40005c00
#define CH32V_USB_EP0R_OFFSET     0x0000
#define CH32V_USB_EP0R            (CH32V_USB_BASE + CH32V_USB_EP0R_OFFSET)
#define CH32V_USB_EP0R_EA         (4 <<  0) /* 01: Endpoint address */
#define CH32V_USB_EP0R_EA_MASK         (0x0f)
#define CH32V_USB_EP0R_STAT_TX    (2 <<  4) /* 10: Status bits, for transmission transfers */
#define CH32V_USB_EP0R_STAT_TX_MASK    (0x03)
#define CH32V_USB_EP0R_DTOG_TX    (1 <<  6) /* 40: Data Toggle, for transmission transfers */
#define CH32V_USB_EP0R_CTR_TX     (1 <<  7) /* 80: Correct Transfer for transmission */
#define CH32V_USB_EP0R_EP_KIND    (1 <<  8) /* 100: Endpoint kind */
#define CH32V_USB_EP0R_EP_TYPE    (2 <<  9) /* 200: Endpoint type */
#define CH32V_USB_EP0R_EP_TYPE_MASK    (0x03)
#define CH32V_USB_EP0R_SETUP      (1 << 11) /* 800: Setup transaction completed */
#define CH32V_USB_EP0R_STAT_RX    (2 << 12) /* 1000: Status bits, for reception transfers */
#define CH32V_USB_EP0R_STAT_RX_MASK    (0x03)
#define CH32V_USB_EP0R_DTOG_RX    (1 << 14) /* 4000: Data Toggle, for reception transfers */
#define CH32V_USB_EP0R_CTR_RX     (1 << 15) /* 8000: Correct transfer for reception */
#define CH32V_USB_EP1R_OFFSET     0x0004
#define CH32V_USB_EP1R            (CH32V_USB_BASE + CH32V_USB_EP1R_OFFSET)
#define CH32V_USB_EP1R_EA         (4 <<  0) /* 01: Endpoint address */
#define CH32V_USB_EP1R_EA_MASK         (0x0f)
#define CH32V_USB_EP1R_STAT_TX    (2 <<  4) /* 10: Status bits, for transmission transfers */
#define CH32V_USB_EP1R_STAT_TX_MASK    (0x03)
#define CH32V_USB_EP1R_DTOG_TX    (1 <<  6) /* 40: Data Toggle, for transmission transfers */
#define CH32V_USB_EP1R_CTR_TX     (1 <<  7) /* 80: Correct Transfer for transmission */
#define CH32V_USB_EP1R_EP_KIND    (1 <<  8) /* 100: Endpoint kind */
#define CH32V_USB_EP1R_EP_TYPE    (2 <<  9) /* 200: Endpoint type */
#define CH32V_USB_EP1R_EP_TYPE_MASK    (0x03)
#define CH32V_USB_EP1R_SETUP      (1 << 11) /* 800: Setup transaction completed */
#define CH32V_USB_EP1R_STAT_RX    (2 << 12) /* 1000: Status bits, for reception transfers */
#define CH32V_USB_EP1R_STAT_RX_MASK    (0x03)
#define CH32V_USB_EP1R_DTOG_RX    (1 << 14) /* 4000: Data Toggle, for reception transfers */
#define CH32V_USB_EP1R_CTR_RX     (1 << 15) /* 8000: Correct transfer for reception */
#define CH32V_USB_EP2R_OFFSET     0x0008
#define CH32V_USB_EP2R            (CH32V_USB_BASE + CH32V_USB_EP2R_OFFSET)
#define CH32V_USB_EP2R_EA         (4 <<  0) /* 01: Endpoint address */
#define CH32V_USB_EP2R_EA_MASK         (0x0f)
#define CH32V_USB_EP2R_STAT_TX    (2 <<  4) /* 10: Status bits, for transmission transfers */
#define CH32V_USB_EP2R_STAT_TX_MASK    (0x03)
#define CH32V_USB_EP2R_DTOG_TX    (1 <<  6) /* 40: Data Toggle, for transmission transfers */
#define CH32V_USB_EP2R_CTR_TX     (1 <<  7) /* 80: Correct Transfer for transmission */
#define CH32V_USB_EP2R_EP_KIND    (1 <<  8) /* 100: Endpoint kind */
#define CH32V_USB_EP2R_EP_TYPE    (2 <<  9) /* 200: Endpoint type */
#define CH32V_USB_EP2R_EP_TYPE_MASK    (0x03)
#define CH32V_USB_EP2R_SETUP      (1 << 11) /* 800: Setup transaction completed */
#define CH32V_USB_EP2R_STAT_RX    (2 << 12) /* 1000: Status bits, for reception transfers */
#define CH32V_USB_EP2R_STAT_RX_MASK    (0x03)
#define CH32V_USB_EP2R_DTOG_RX    (1 << 14) /* 4000: Data Toggle, for reception transfers */
#define CH32V_USB_EP2R_CTR_RX     (1 << 15) /* 8000: Correct transfer for reception */
#define CH32V_USB_EP3R_OFFSET     0x000c
#define CH32V_USB_EP3R            (CH32V_USB_BASE + CH32V_USB_EP3R_OFFSET)
#define CH32V_USB_EP3R_EA         (4 <<  0) /* 01: Endpoint address */
#define CH32V_USB_EP3R_EA_MASK         (0x0f)
#define CH32V_USB_EP3R_STAT_TX    (2 <<  4) /* 10: Status bits, for transmission transfers */
#define CH32V_USB_EP3R_STAT_TX_MASK    (0x03)
#define CH32V_USB_EP3R_DTOG_TX    (1 <<  6) /* 40: Data Toggle, for transmission transfers */
#define CH32V_USB_EP3R_CTR_TX     (1 <<  7) /* 80: Correct Transfer for transmission */
#define CH32V_USB_EP3R_EP_KIND    (1 <<  8) /* 100: Endpoint kind */
#define CH32V_USB_EP3R_EP_TYPE    (2 <<  9) /* 200: Endpoint type */
#define CH32V_USB_EP3R_EP_TYPE_MASK    (0x03)
#define CH32V_USB_EP3R_SETUP      (1 << 11) /* 800: Setup transaction completed */
#define CH32V_USB_EP3R_STAT_RX    (2 << 12) /* 1000: Status bits, for reception transfers */
#define CH32V_USB_EP3R_STAT_RX_MASK    (0x03)
#define CH32V_USB_EP3R_DTOG_RX    (1 << 14) /* 4000: Data Toggle, for reception transfers */
#define CH32V_USB_EP3R_CTR_RX     (1 << 15) /* 8000: Correct transfer for reception */
#define CH32V_USB_EP4R_OFFSET     0x0010
#define CH32V_USB_EP4R            (CH32V_USB_BASE + CH32V_USB_EP4R_OFFSET)
#define CH32V_USB_EP4R_EA         (4 <<  0) /* 01: Endpoint address */
#define CH32V_USB_EP4R_EA_MASK         (0x0f)
#define CH32V_USB_EP4R_STAT_TX    (2 <<  4) /* 10: Status bits, for transmission transfers */
#define CH32V_USB_EP4R_STAT_TX_MASK    (0x03)
#define CH32V_USB_EP4R_DTOG_TX    (1 <<  6) /* 40: Data Toggle, for transmission transfers */
#define CH32V_USB_EP4R_CTR_TX     (1 <<  7) /* 80: Correct Transfer for transmission */
#define CH32V_USB_EP4R_EP_KIND    (1 <<  8) /* 100: Endpoint kind */
#define CH32V_USB_EP4R_EP_TYPE    (2 <<  9) /* 200: Endpoint type */
#define CH32V_USB_EP4R_EP_TYPE_MASK    (0x03)
#define CH32V_USB_EP4R_SETUP      (1 << 11) /* 800: Setup transaction completed */
#define CH32V_USB_EP4R_STAT_RX    (2 << 12) /* 1000: Status bits, for reception transfers */
#define CH32V_USB_EP4R_STAT_RX_MASK    (0x03)
#define CH32V_USB_EP4R_DTOG_RX    (1 << 14) /* 4000: Data Toggle, for reception transfers */
#define CH32V_USB_EP4R_CTR_RX     (1 << 15) /* 8000: Correct transfer for reception */
#define CH32V_USB_EP5R_OFFSET     0x0014
#define CH32V_USB_EP5R            (CH32V_USB_BASE + CH32V_USB_EP5R_OFFSET)
#define CH32V_USB_EP5R_EA         (4 <<  0) /* 01: Endpoint address */
#define CH32V_USB_EP5R_EA_MASK         (0x0f)
#define CH32V_USB_EP5R_STAT_TX    (2 <<  4) /* 10: Status bits, for transmission transfers */
#define CH32V_USB_EP5R_STAT_TX_MASK    (0x03)
#define CH32V_USB_EP5R_DTOG_TX    (1 <<  6) /* 40: Data Toggle, for transmission transfers */
#define CH32V_USB_EP5R_CTR_TX     (1 <<  7) /* 80: Correct Transfer for transmission */
#define CH32V_USB_EP5R_EP_KIND    (1 <<  8) /* 100: Endpoint kind */
#define CH32V_USB_EP5R_EP_TYPE    (2 <<  9) /* 200: Endpoint type */
#define CH32V_USB_EP5R_EP_TYPE_MASK    (0x03)
#define CH32V_USB_EP5R_SETUP      (1 << 11) /* 800: Setup transaction completed */
#define CH32V_USB_EP5R_STAT_RX    (2 << 12) /* 1000: Status bits, for reception transfers */
#define CH32V_USB_EP5R_STAT_RX_MASK    (0x03)
#define CH32V_USB_EP5R_DTOG_RX    (1 << 14) /* 4000: Data Toggle, for reception transfers */
#define CH32V_USB_EP5R_CTR_RX     (1 << 15) /* 8000: Correct transfer for reception */
#define CH32V_USB_EP6R_OFFSET     0x0018
#define CH32V_USB_EP6R            (CH32V_USB_BASE + CH32V_USB_EP6R_OFFSET)
#define CH32V_USB_EP6R_EA         (4 <<  0) /* 01: Endpoint address */
#define CH32V_USB_EP6R_EA_MASK         (0x0f)
#define CH32V_USB_EP6R_STAT_TX    (2 <<  4) /* 10: Status bits, for transmission transfers */
#define CH32V_USB_EP6R_STAT_TX_MASK    (0x03)
#define CH32V_USB_EP6R_DTOG_TX    (1 <<  6) /* 40: Data Toggle, for transmission transfers */
#define CH32V_USB_EP6R_CTR_TX     (1 <<  7) /* 80: Correct Transfer for transmission */
#define CH32V_USB_EP6R_EP_KIND    (1 <<  8) /* 100: Endpoint kind */
#define CH32V_USB_EP6R_EP_TYPE    (2 <<  9) /* 200: Endpoint type */
#define CH32V_USB_EP6R_EP_TYPE_MASK    (0x03)
#define CH32V_USB_EP6R_SETUP      (1 << 11) /* 800: Setup transaction completed */
#define CH32V_USB_EP6R_STAT_RX    (2 << 12) /* 1000: Status bits, for reception transfers */
#define CH32V_USB_EP6R_STAT_RX_MASK    (0x03)
#define CH32V_USB_EP6R_DTOG_RX    (1 << 14) /* 4000: Data Toggle, for reception transfers */
#define CH32V_USB_EP6R_CTR_RX     (1 << 15) /* 8000: Correct transfer for reception */
#define CH32V_USB_EP7R_OFFSET     0x001c
#define CH32V_USB_EP7R            (CH32V_USB_BASE + CH32V_USB_EP7R_OFFSET)
#define CH32V_USB_EP7R_EA         (4 <<  0) /* 01: Endpoint address */
#define CH32V_USB_EP7R_EA_MASK         (0x0f)
#define CH32V_USB_EP7R_STAT_TX    (2 <<  4) /* 10: Status bits, for transmission transfers */
#define CH32V_USB_EP7R_STAT_TX_MASK    (0x03)
#define CH32V_USB_EP7R_DTOG_TX    (1 <<  6) /* 40: Data Toggle, for transmission transfers */
#define CH32V_USB_EP7R_CTR_TX     (1 <<  7) /* 80: Correct Transfer for transmission */
#define CH32V_USB_EP7R_EP_KIND    (1 <<  8) /* 100: Endpoint kind */
#define CH32V_USB_EP7R_EP_TYPE    (2 <<  9) /* 200: Endpoint type */
#define CH32V_USB_EP7R_EP_TYPE_MASK    (0x03)
#define CH32V_USB_EP7R_SETUP      (1 << 11) /* 800: Setup transaction completed */
#define CH32V_USB_EP7R_STAT_RX    (2 << 12) /* 1000: Status bits, for reception transfers */
#define CH32V_USB_EP7R_STAT_RX_MASK    (0x03)
#define CH32V_USB_EP7R_DTOG_RX    (1 << 14) /* 4000: Data Toggle, for reception transfers */
#define CH32V_USB_EP7R_CTR_RX     (1 << 15) /* 8000: Correct transfer for reception */
#define CH32V_USB_CNTR_OFFSET     0x0040
#define CH32V_USB_CNTR            (CH32V_USB_BASE + CH32V_USB_CNTR_OFFSET)
#define CH32V_USB_CNTR_FRES       (1 <<  0) /* 01: Force USB Reset */
#define CH32V_USB_CNTR_PDWN       (1 <<  1) /* 02: Power down */
#define CH32V_USB_CNTR_LPMODE     (1 <<  2) /* 04: Low-power mode */
#define CH32V_USB_CNTR_FSUSP      (1 <<  3) /* 08: Force suspend */
#define CH32V_USB_CNTR_RESUME     (1 <<  4) /* 10: Resume request */
#define CH32V_USB_CNTR_ESOFM      (1 <<  8) /* 100: Expected start of frame interrupt mask */
#define CH32V_USB_CNTR_SOFM       (1 <<  9) /* 200: Start of frame interrupt mask */
#define CH32V_USB_CNTR_RESETM     (1 << 10) /* 400: USB reset interrupt mask */
#define CH32V_USB_CNTR_SUSPM      (1 << 11) /* 800: Suspend mode interrupt mask */
#define CH32V_USB_CNTR_WKUPM      (1 << 12) /* 1000: Wakeup interrupt mask */
#define CH32V_USB_CNTR_ERRM       (1 << 13) /* 2000: Error interrupt mask */
#define CH32V_USB_CNTR_PMAOVRM    (1 << 14) /* 4000: Packet memory area over / underrun interrupt mask */
#define CH32V_USB_CNTR_CTRM       (1 << 15) /* 8000: Correct transfer interrupt mask */
#define CH32V_USB_ISTR_OFFSET     0x0044
#define CH32V_USB_ISTR            (CH32V_USB_BASE + CH32V_USB_ISTR_OFFSET)
#define CH32V_USB_ISTR_EP_ID      (4 <<  0) /* 01: Endpoint Identifier */
#define CH32V_USB_ISTR_EP_ID_MASK      (0x0f)
#define CH32V_USB_ISTR_DIR        (1 <<  4) /* 10: Direction of transaction */
#define CH32V_USB_ISTR_ESOF       (1 <<  8) /* 100: Expected start frame */
#define CH32V_USB_ISTR_SOF        (1 <<  9) /* 200: start of frame */
#define CH32V_USB_ISTR_RESET      (1 << 10) /* 400: reset request */
#define CH32V_USB_ISTR_SUSP       (1 << 11) /* 800: Suspend mode request */
#define CH32V_USB_ISTR_WKUP       (1 << 12) /* 1000: Wakeup */
#define CH32V_USB_ISTR_ERR        (1 << 13) /* 2000: Error */
#define CH32V_USB_ISTR_PMAOVR     (1 << 14) /* 4000: Packet memory area over / underrun */
#define CH32V_USB_ISTR_CTR        (1 << 15) /* 8000: Correct transfer */
#define CH32V_USB_FNR_OFFSET      0x0048
#define CH32V_USB_FNR             (CH32V_USB_BASE + CH32V_USB_FNR_OFFSET)
#define CH32V_USB_FNR_FN          (11 <<  0) /* 01: Frame number */
#define CH32V_USB_FNR_FN_MASK          (0x7ff)
#define CH32V_USB_FNR_LSOF        (2 << 11) /* 800: Lost SOF */
#define CH32V_USB_FNR_LSOF_MASK        (0x03)
#define CH32V_USB_FNR_LCK         (1 << 13) /* 2000: Locked */
#define CH32V_USB_FNR_RXDM        (1 << 14) /* 4000: Receive data - line status */
#define CH32V_USB_FNR_RXDP        (1 << 15) /* 8000: Receive data + line status */
#define CH32V_USB_DADDR_OFFSET    0x004c
#define CH32V_USB_DADDR           (CH32V_USB_BASE + CH32V_USB_DADDR_OFFSET)
#define CH32V_USB_DADDR_ADD       (7 <<  0) /* 01: Device address */
#define CH32V_USB_DADDR_ADD_MASK       (0x7f)
#define CH32V_USB_DADDR_EF        (1 <<  7) /* 80: Enable function */
#define CH32V_USB_BTABLE_OFFSET   0x0050
#define CH32V_USB_BTABLE          (CH32V_USB_BASE + CH32V_USB_BTABLE_OFFSET)
#define CH32V_USB_BTABLE_BTABLE   (13 <<  3) /* 08: Buffer table */
#define CH32V_USB_BTABLE_BTABLE_MASK   (0x1fff)

/* CAN1 - Controller area network */
#define CH32V_CAN1_BASE           0x40006400
#define CH32V_CAN1_CTLR_OFFSET    0x0000
#define CH32V_CAN1_CTLR           (CH32V_CAN1_BASE + CH32V_CAN1_CTLR_OFFSET)
#define CH32V_CAN1_CTLR_DBF       (1 << 16) /* 10000: Debug freeze */
#define CH32V_CAN1_CTLR_RESET     (1 << 15) /* 8000: Software master reset */
#define CH32V_CAN1_CTLR_TTCM      (1 <<  7) /* 80: Time triggered communication mode */
#define CH32V_CAN1_CTLR_ABOM      (1 <<  6) /* 40: Automatic bus-off management */
#define CH32V_CAN1_CTLR_AWUM      (1 <<  5) /* 20: Automatic wakeup mode */
#define CH32V_CAN1_CTLR_NART      (1 <<  4) /* 10: No automatic retransmission */
#define CH32V_CAN1_CTLR_RFLM      (1 <<  3) /* 08: Receive FIFO locked mode */
#define CH32V_CAN1_CTLR_TXFP      (1 <<  2) /* 04: Transmit FIFO priority */
#define CH32V_CAN1_CTLR_SLEEP     (1 <<  1) /* 02: Sleep mode request */
#define CH32V_CAN1_CTLR_INRQ      (1 <<  0) /* 01: Initialization request */
#define CH32V_CAN1_STATR_OFFSET   0x0004
#define CH32V_CAN1_STATR          (CH32V_CAN1_BASE + CH32V_CAN1_STATR_OFFSET)
#define CH32V_CAN1_STATR_RX       (1 << 11) /* 800: Rx signal */
#define CH32V_CAN1_STATR_SAMP     (1 << 10) /* 400: Last sample point */
#define CH32V_CAN1_STATR_RXM      (1 <<  9) /* 200: Receive mode */
#define CH32V_CAN1_STATR_TXM      (1 <<  8) /* 100: Transmit mode */
#define CH32V_CAN1_STATR_SLAKI    (1 <<  4) /* 10: Sleep acknowledge interrupt */
#define CH32V_CAN1_STATR_WKUI     (1 <<  3) /* 08: Wakeup interrupt */
#define CH32V_CAN1_STATR_ERRI     (1 <<  2) /* 04: Error interrupt */
#define CH32V_CAN1_STATR_SLAK     (1 <<  1) /* 02: Sleep acknowledge */
#define CH32V_CAN1_STATR_INAK     (1 <<  0) /* 01: Initialization acknowledge */
#define CH32V_CAN1_TSTATR_OFFSET  0x0008
#define CH32V_CAN1_TSTATR         (CH32V_CAN1_BASE + CH32V_CAN1_TSTATR_OFFSET)
#define CH32V_CAN1_TSTATR_LOW2    (1 << 31) /* 80000000: Lowest priority flag for mailbox 2 */
#define CH32V_CAN1_TSTATR_LOW1    (1 << 30) /* 40000000: Lowest priority flag for mailbox 1 */
#define CH32V_CAN1_TSTATR_LOW0    (1 << 29) /* 20000000: Lowest priority flag for mailbox 0 */
#define CH32V_CAN1_TSTATR_TME2    (1 << 28) /* 10000000: Transmit mailbox 2 empty */
#define CH32V_CAN1_TSTATR_TME1    (1 << 27) /* 8000000: Transmit mailbox 1 empty */
#define CH32V_CAN1_TSTATR_TME0    (1 << 26) /* 4000000: Transmit mailbox 0 empty */
#define CH32V_CAN1_TSTATR_CODE    (2 << 24) /* 1000000: Mailbox code */
#define CH32V_CAN1_TSTATR_CODE_MASK    (0x03)
#define CH32V_CAN1_TSTATR_ABRQ2   (1 << 23) /* 800000: Abort request for mailbox 2 */
#define CH32V_CAN1_TSTATR_TERR2   (1 << 19) /* 80000: Transmission error of mailbox 2 */
#define CH32V_CAN1_TSTATR_ALST2   (1 << 18) /* 40000: Arbitration lost for mailbox 2 */
#define CH32V_CAN1_TSTATR_TXOK2   (1 << 17) /* 20000: Transmission OK of mailbox 2 */
#define CH32V_CAN1_TSTATR_RQCP2   (1 << 16) /* 10000: Request completed mailbox2 */
#define CH32V_CAN1_TSTATR_ABRQ1   (1 << 15) /* 8000: Abort request for mailbox 1 */
#define CH32V_CAN1_TSTATR_TERR1   (1 << 11) /* 800: Transmission error of mailbox1 */
#define CH32V_CAN1_TSTATR_ALST1   (1 << 10) /* 400: Arbitration lost for mailbox1 */
#define CH32V_CAN1_TSTATR_TXOK1   (1 <<  9) /* 200: Transmission OK of mailbox1 */
#define CH32V_CAN1_TSTATR_RQCP1   (1 <<  8) /* 100: Request completed mailbox1 */
#define CH32V_CAN1_TSTATR_ABRQ0   (1 <<  7) /* 80: Abort request for mailbox0 */
#define CH32V_CAN1_TSTATR_TERR0   (1 <<  3) /* 08: Transmission error of mailbox0 */
#define CH32V_CAN1_TSTATR_ALST0   (1 <<  2) /* 04: Arbitration lost for mailbox0 */
#define CH32V_CAN1_TSTATR_TXOK0   (1 <<  1) /* 02: Transmission OK of mailbox0 */
#define CH32V_CAN1_TSTATR_RQCP0   (1 <<  0) /* 01: Request completed mailbox0 */
#define CH32V_CAN1_RFIFO0_OFFSET  0x000c
#define CH32V_CAN1_RFIFO0         (CH32V_CAN1_BASE + CH32V_CAN1_RFIFO0_OFFSET)
#define CH32V_CAN1_RFIFO0_RFOM0   (1 <<  5) /* 20: Release FIFO 0 output mailbox */
#define CH32V_CAN1_RFIFO0_FOVR0   (1 <<  4) /* 10: FIFO 0 overrun */
#define CH32V_CAN1_RFIFO0_FULL0   (1 <<  3) /* 08: FIFO 0 full */
#define CH32V_CAN1_RFIFO0_FMP0    (2 <<  0) /* 01: FIFO 0 message pending */
#define CH32V_CAN1_RFIFO0_FMP0_MASK    (0x03)
#define CH32V_CAN1_RFIFO1_OFFSET  0x0010
#define CH32V_CAN1_RFIFO1         (CH32V_CAN1_BASE + CH32V_CAN1_RFIFO1_OFFSET)
#define CH32V_CAN1_RFIFO1_RFOM1   (1 <<  5) /* 20: Release FIFO 1 output mailbox */
#define CH32V_CAN1_RFIFO1_FOVR1   (1 <<  4) /* 10: FIFO 1 overrun */
#define CH32V_CAN1_RFIFO1_FULL1   (1 <<  3) /* 08: FIFO 1 full */
#define CH32V_CAN1_RFIFO1_FMP1    (2 <<  0) /* 01: FIFO 1 message pending */
#define CH32V_CAN1_RFIFO1_FMP1_MASK    (0x03)
#define CH32V_CAN1_INTENR_OFFSET  0x0014
#define CH32V_CAN1_INTENR         (CH32V_CAN1_BASE + CH32V_CAN1_INTENR_OFFSET)
#define CH32V_CAN1_INTENR_SLKIE   (1 << 17) /* 20000: Sleep interrupt enable */
#define CH32V_CAN1_INTENR_WKUIE   (1 << 16) /* 10000: Wakeup interrupt enable */
#define CH32V_CAN1_INTENR_ERRIE   (1 << 15) /* 8000: Error interrupt enable */
#define CH32V_CAN1_INTENR_LECIE   (1 << 11) /* 800: Last error code interrupt enable */
#define CH32V_CAN1_INTENR_BOFIE   (1 << 10) /* 400: Bus-off interrupt enable */
#define CH32V_CAN1_INTENR_EPVIE   (1 <<  9) /* 200: Error passive interrupt enable */
#define CH32V_CAN1_INTENR_EWGIE   (1 <<  8) /* 100: Error warning interrupt enable */
#define CH32V_CAN1_INTENR_FOVIE1  (1 <<  6) /* 40: FIFO overrun interrupt enable */
#define CH32V_CAN1_INTENR_FFIE1   (1 <<  5) /* 20: FIFO full interrupt enable */
#define CH32V_CAN1_INTENR_FMPIE1  (1 <<  4) /* 10: FIFO message pending interrupt enable */
#define CH32V_CAN1_INTENR_FOVIE0  (1 <<  3) /* 08: FIFO overrun interrupt enable */
#define CH32V_CAN1_INTENR_FFIE0   (1 <<  2) /* 04: FIFO full interrupt enable */
#define CH32V_CAN1_INTENR_FMPIE0  (1 <<  1) /* 02: FIFO message pending interrupt enable */
#define CH32V_CAN1_INTENR_TMEIE   (1 <<  0) /* 01: Transmit mailbox empty interrupt enable */
#define CH32V_CAN1_ERRSR_OFFSET   0x0018
#define CH32V_CAN1_ERRSR          (CH32V_CAN1_BASE + CH32V_CAN1_ERRSR_OFFSET)
#define CH32V_CAN1_ERRSR_REC      (8 << 24) /* 1000000: Receive error counter */
#define CH32V_CAN1_ERRSR_REC_MASK      (0xff)
#define CH32V_CAN1_ERRSR_TEC      (8 << 16) /* 10000: Least significant byte of the 9-bit transmit error counter */
#define CH32V_CAN1_ERRSR_TEC_MASK      (0xff)
#define CH32V_CAN1_ERRSR_LEC      (3 <<  4) /* 10: Last error code */
#define CH32V_CAN1_ERRSR_LEC_MASK      (0x07)
#define CH32V_CAN1_ERRSR_BOFF     (1 <<  2) /* 04: Bus-off flag */
#define CH32V_CAN1_ERRSR_EPVF     (1 <<  1) /* 02: Error passive flag */
#define CH32V_CAN1_ERRSR_EWGF     (1 <<  0) /* 01: Error warning flag */
#define CH32V_CAN1_BTIMR_OFFSET   0x001c
#define CH32V_CAN1_BTIMR          (CH32V_CAN1_BASE + CH32V_CAN1_BTIMR_OFFSET)
#define CH32V_CAN1_BTIMR_SILM     (1 << 31) /* 80000000: Silent mode (debug) */
#define CH32V_CAN1_BTIMR_LBKM     (1 << 30) /* 40000000: Loop back mode (debug) */
#define CH32V_CAN1_BTIMR_SJW      (2 << 24) /* 1000000: Resynchronization jump width */
#define CH32V_CAN1_BTIMR_SJW_MASK      (0x03)
#define CH32V_CAN1_BTIMR_TS2      (3 << 20) /* 100000: Time segment 2 */
#define CH32V_CAN1_BTIMR_TS2_MASK      (0x07)
#define CH32V_CAN1_BTIMR_TS1      (4 << 16) /* 10000: Time segment 1 */
#define CH32V_CAN1_BTIMR_TS1_MASK      (0x0f)
#define CH32V_CAN1_BTIMR_BRP      (10 <<  0) /* 01: Baud rate prescaler */
#define CH32V_CAN1_BTIMR_BRP_MASK      (0x3ff)
#define CH32V_CAN1_TXMIR0_OFFSET  0x0180
#define CH32V_CAN1_TXMIR0         (CH32V_CAN1_BASE + CH32V_CAN1_TXMIR0_OFFSET)
#define CH32V_CAN1_TXMIR0_STID    (11 << 21) /* 200000: Standard identifier */
#define CH32V_CAN1_TXMIR0_STID_MASK    (0x7ff)
#define CH32V_CAN1_TXMIR0_EXID    (18 <<  3) /* 08: extended identifier */
#define CH32V_CAN1_TXMIR0_EXID_MASK    (0x3ffff)
#define CH32V_CAN1_TXMIR0_IDE     (1 <<  2) /* 04: Identifier extension */
#define CH32V_CAN1_TXMIR0_RTR     (1 <<  1) /* 02: Remote transmission request */
#define CH32V_CAN1_TXMIR0_TXRQ    (1 <<  0) /* 01: Transmit mailbox request */
#define CH32V_CAN1_TXMDTR0_OFFSET 0x0184
#define CH32V_CAN1_TXMDTR0        (CH32V_CAN1_BASE + CH32V_CAN1_TXMDTR0_OFFSET)
#define CH32V_CAN1_TXMDTR0_TIME   (16 << 16) /* 10000: Message time stamp */
#define CH32V_CAN1_TXMDTR0_TIME_MASK   (0xffff)
#define CH32V_CAN1_TXMDTR0_TGT    (1 <<  8) /* 100: Transmit global time */
#define CH32V_CAN1_TXMDTR0_DLC    (4 <<  0) /* 01: Data length code */
#define CH32V_CAN1_TXMDTR0_DLC_MASK    (0x0f)
#define CH32V_CAN1_TXMDLR0_OFFSET 0x0188
#define CH32V_CAN1_TXMDLR0        (CH32V_CAN1_BASE + CH32V_CAN1_TXMDLR0_OFFSET)
#define CH32V_CAN1_TXMDLR0_DATA3  (8 << 24) /* 1000000: Data byte 3 */
#define CH32V_CAN1_TXMDLR0_DATA3_MASK  (0xff)
#define CH32V_CAN1_TXMDLR0_DATA2  (8 << 16) /* 10000: Data byte 2 */
#define CH32V_CAN1_TXMDLR0_DATA2_MASK  (0xff)
#define CH32V_CAN1_TXMDLR0_DATA1  (8 <<  8) /* 100: Data byte 1 */
#define CH32V_CAN1_TXMDLR0_DATA1_MASK  (0xff)
#define CH32V_CAN1_TXMDLR0_DATA0  (8 <<  0) /* 01: Data byte 0 */
#define CH32V_CAN1_TXMDLR0_DATA0_MASK  (0xff)
#define CH32V_CAN1_TXMDHR0_OFFSET 0x018c
#define CH32V_CAN1_TXMDHR0        (CH32V_CAN1_BASE + CH32V_CAN1_TXMDHR0_OFFSET)
#define CH32V_CAN1_TXMDHR0_DATA7  (8 << 24) /* 1000000: Data byte 7 */
#define CH32V_CAN1_TXMDHR0_DATA7_MASK  (0xff)
#define CH32V_CAN1_TXMDHR0_DATA6  (8 << 16) /* 10000: Data byte 6 */
#define CH32V_CAN1_TXMDHR0_DATA6_MASK  (0xff)
#define CH32V_CAN1_TXMDHR0_DATA5  (8 <<  8) /* 100: Data byte 5 */
#define CH32V_CAN1_TXMDHR0_DATA5_MASK  (0xff)
#define CH32V_CAN1_TXMDHR0_DATA4  (8 <<  0) /* 01: Data byte 4 */
#define CH32V_CAN1_TXMDHR0_DATA4_MASK  (0xff)
#define CH32V_CAN1_TXMIR1_OFFSET  0x0190
#define CH32V_CAN1_TXMIR1         (CH32V_CAN1_BASE + CH32V_CAN1_TXMIR1_OFFSET)
#define CH32V_CAN1_TXMIR1_STID    (11 << 21) /* 200000: Standard identifier */
#define CH32V_CAN1_TXMIR1_STID_MASK    (0x7ff)
#define CH32V_CAN1_TXMIR1_EXID    (18 <<  3) /* 08: extended identifier */
#define CH32V_CAN1_TXMIR1_EXID_MASK    (0x3ffff)
#define CH32V_CAN1_TXMIR1_IDE     (1 <<  2) /* 04: Identifier extension */
#define CH32V_CAN1_TXMIR1_RTR     (1 <<  1) /* 02: Remote transmission request */
#define CH32V_CAN1_TXMIR1_TXRQ    (1 <<  0) /* 01: Transmit mailbox request */
#define CH32V_CAN1_TXMDTR1_OFFSET 0x0194
#define CH32V_CAN1_TXMDTR1        (CH32V_CAN1_BASE + CH32V_CAN1_TXMDTR1_OFFSET)
#define CH32V_CAN1_TXMDTR1_TIME   (16 << 16) /* 10000: Message time stamp */
#define CH32V_CAN1_TXMDTR1_TIME_MASK   (0xffff)
#define CH32V_CAN1_TXMDTR1_TGT    (1 <<  8) /* 100: Transmit global time */
#define CH32V_CAN1_TXMDTR1_DLC    (4 <<  0) /* 01: Data length code */
#define CH32V_CAN1_TXMDTR1_DLC_MASK    (0x0f)
#define CH32V_CAN1_TXMDLR1_OFFSET 0x0198
#define CH32V_CAN1_TXMDLR1        (CH32V_CAN1_BASE + CH32V_CAN1_TXMDLR1_OFFSET)
#define CH32V_CAN1_TXMDLR1_DATA3  (8 << 24) /* 1000000: Data byte 3 */
#define CH32V_CAN1_TXMDLR1_DATA3_MASK  (0xff)
#define CH32V_CAN1_TXMDLR1_DATA2  (8 << 16) /* 10000: Data byte 2 */
#define CH32V_CAN1_TXMDLR1_DATA2_MASK  (0xff)
#define CH32V_CAN1_TXMDLR1_DATA1  (8 <<  8) /* 100: Data byte 1 */
#define CH32V_CAN1_TXMDLR1_DATA1_MASK  (0xff)
#define CH32V_CAN1_TXMDLR1_DATA0  (8 <<  0) /* 01: Data byte 0 */
#define CH32V_CAN1_TXMDLR1_DATA0_MASK  (0xff)
#define CH32V_CAN1_TXMDHR1_OFFSET 0x019c
#define CH32V_CAN1_TXMDHR1        (CH32V_CAN1_BASE + CH32V_CAN1_TXMDHR1_OFFSET)
#define CH32V_CAN1_TXMDHR1_DATA7  (8 << 24) /* 1000000: Data byte 7 */
#define CH32V_CAN1_TXMDHR1_DATA7_MASK  (0xff)
#define CH32V_CAN1_TXMDHR1_DATA6  (8 << 16) /* 10000: Data byte 6 */
#define CH32V_CAN1_TXMDHR1_DATA6_MASK  (0xff)
#define CH32V_CAN1_TXMDHR1_DATA5  (8 <<  8) /* 100: Data byte 5 */
#define CH32V_CAN1_TXMDHR1_DATA5_MASK  (0xff)
#define CH32V_CAN1_TXMDHR1_DATA4  (8 <<  0) /* 01: Data byte 4 */
#define CH32V_CAN1_TXMDHR1_DATA4_MASK  (0xff)
#define CH32V_CAN1_TXMIR2_OFFSET  0x01a0
#define CH32V_CAN1_TXMIR2         (CH32V_CAN1_BASE + CH32V_CAN1_TXMIR2_OFFSET)
#define CH32V_CAN1_TXMIR2_STID    (11 << 21) /* 200000: Standard identifier */
#define CH32V_CAN1_TXMIR2_STID_MASK    (0x7ff)
#define CH32V_CAN1_TXMIR2_EXID    (18 <<  3) /* 08: extended identifier */
#define CH32V_CAN1_TXMIR2_EXID_MASK    (0x3ffff)
#define CH32V_CAN1_TXMIR2_IDE     (1 <<  2) /* 04: Identifier extension */
#define CH32V_CAN1_TXMIR2_RTR     (1 <<  1) /* 02: Remote transmission request */
#define CH32V_CAN1_TXMIR2_TXRQ    (1 <<  0) /* 01: Transmit mailbox request */
#define CH32V_CAN1_TXMDTR2_OFFSET 0x01a4
#define CH32V_CAN1_TXMDTR2        (CH32V_CAN1_BASE + CH32V_CAN1_TXMDTR2_OFFSET)
#define CH32V_CAN1_TXMDTR2_TIME   (16 << 16) /* 10000: Message time stamp */
#define CH32V_CAN1_TXMDTR2_TIME_MASK   (0xffff)
#define CH32V_CAN1_TXMDTR2_TGT    (1 <<  8) /* 100: Transmit global time */
#define CH32V_CAN1_TXMDTR2_DLC    (4 <<  0) /* 01: Data length code */
#define CH32V_CAN1_TXMDTR2_DLC_MASK    (0x0f)
#define CH32V_CAN1_TXMDLR2_OFFSET 0x01a8
#define CH32V_CAN1_TXMDLR2        (CH32V_CAN1_BASE + CH32V_CAN1_TXMDLR2_OFFSET)
#define CH32V_CAN1_TXMDLR2_DATA3  (8 << 24) /* 1000000: Data byte 3 */
#define CH32V_CAN1_TXMDLR2_DATA3_MASK  (0xff)
#define CH32V_CAN1_TXMDLR2_DATA2  (8 << 16) /* 10000: Data byte 2 */
#define CH32V_CAN1_TXMDLR2_DATA2_MASK  (0xff)
#define CH32V_CAN1_TXMDLR2_DATA1  (8 <<  8) /* 100: Data byte 1 */
#define CH32V_CAN1_TXMDLR2_DATA1_MASK  (0xff)
#define CH32V_CAN1_TXMDLR2_DATA0  (8 <<  0) /* 01: Data byte 0 */
#define CH32V_CAN1_TXMDLR2_DATA0_MASK  (0xff)
#define CH32V_CAN1_TXMDHR2_OFFSET 0x01ac
#define CH32V_CAN1_TXMDHR2        (CH32V_CAN1_BASE + CH32V_CAN1_TXMDHR2_OFFSET)
#define CH32V_CAN1_TXMDHR2_DATA7  (8 << 24) /* 1000000: Data byte 7 */
#define CH32V_CAN1_TXMDHR2_DATA7_MASK  (0xff)
#define CH32V_CAN1_TXMDHR2_DATA6  (8 << 16) /* 10000: Data byte 6 */
#define CH32V_CAN1_TXMDHR2_DATA6_MASK  (0xff)
#define CH32V_CAN1_TXMDHR2_DATA5  (8 <<  8) /* 100: Data byte 5 */
#define CH32V_CAN1_TXMDHR2_DATA5_MASK  (0xff)
#define CH32V_CAN1_TXMDHR2_DATA4  (8 <<  0) /* 01: Data byte 4 */
#define CH32V_CAN1_TXMDHR2_DATA4_MASK  (0xff)
#define CH32V_CAN1_RXMIR0_OFFSET  0x01b0
#define CH32V_CAN1_RXMIR0         (CH32V_CAN1_BASE + CH32V_CAN1_RXMIR0_OFFSET)
#define CH32V_CAN1_RXMIR0_STID    (11 << 21) /* 200000: Standard identifier */
#define CH32V_CAN1_RXMIR0_STID_MASK    (0x7ff)
#define CH32V_CAN1_RXMIR0_EXID    (18 <<  3) /* 08: extended identifier */
#define CH32V_CAN1_RXMIR0_EXID_MASK    (0x3ffff)
#define CH32V_CAN1_RXMIR0_IDE     (1 <<  2) /* 04: Identifier extension */
#define CH32V_CAN1_RXMIR0_RTR     (1 <<  1) /* 02: Remote transmission request */
#define CH32V_CAN1_RXMDTR0_OFFSET 0x01b4
#define CH32V_CAN1_RXMDTR0        (CH32V_CAN1_BASE + CH32V_CAN1_RXMDTR0_OFFSET)
#define CH32V_CAN1_RXMDTR0_TIME   (16 << 16) /* 10000: Message time stamp */
#define CH32V_CAN1_RXMDTR0_TIME_MASK   (0xffff)
#define CH32V_CAN1_RXMDTR0_FMI    (8 <<  8) /* 100: Filter match index */
#define CH32V_CAN1_RXMDTR0_FMI_MASK    (0xff)
#define CH32V_CAN1_RXMDTR0_DLC    (4 <<  0) /* 01: Data length code */
#define CH32V_CAN1_RXMDTR0_DLC_MASK    (0x0f)
#define CH32V_CAN1_RXMDLR0_OFFSET 0x01b8
#define CH32V_CAN1_RXMDLR0        (CH32V_CAN1_BASE + CH32V_CAN1_RXMDLR0_OFFSET)
#define CH32V_CAN1_RXMDLR0_DATA3  (8 << 24) /* 1000000: Data Byte 3 */
#define CH32V_CAN1_RXMDLR0_DATA3_MASK  (0xff)
#define CH32V_CAN1_RXMDLR0_DATA2  (8 << 16) /* 10000: Data Byte 2 */
#define CH32V_CAN1_RXMDLR0_DATA2_MASK  (0xff)
#define CH32V_CAN1_RXMDLR0_DATA1  (8 <<  8) /* 100: Data Byte 1 */
#define CH32V_CAN1_RXMDLR0_DATA1_MASK  (0xff)
#define CH32V_CAN1_RXMDLR0_DATA0  (8 <<  0) /* 01: Data Byte 0 */
#define CH32V_CAN1_RXMDLR0_DATA0_MASK  (0xff)
#define CH32V_CAN1_RXMDHR0_OFFSET 0x01bc
#define CH32V_CAN1_RXMDHR0        (CH32V_CAN1_BASE + CH32V_CAN1_RXMDHR0_OFFSET)
#define CH32V_CAN1_RXMDHR0_DATA7  (8 << 24) /* 1000000: DATA7 */
#define CH32V_CAN1_RXMDHR0_DATA7_MASK  (0xff)
#define CH32V_CAN1_RXMDHR0_DATA6  (8 << 16) /* 10000: DATA6 */
#define CH32V_CAN1_RXMDHR0_DATA6_MASK  (0xff)
#define CH32V_CAN1_RXMDHR0_DATA5  (8 <<  8) /* 100: DATA5 */
#define CH32V_CAN1_RXMDHR0_DATA5_MASK  (0xff)
#define CH32V_CAN1_RXMDHR0_DATA4  (8 <<  0) /* 01: DATA4 */
#define CH32V_CAN1_RXMDHR0_DATA4_MASK  (0xff)
#define CH32V_CAN1_RXMIR1_OFFSET  0x01c0
#define CH32V_CAN1_RXMIR1         (CH32V_CAN1_BASE + CH32V_CAN1_RXMIR1_OFFSET)
#define CH32V_CAN1_RXMIR1_STID    (11 << 21) /* 200000: Standard identifier */
#define CH32V_CAN1_RXMIR1_STID_MASK    (0x7ff)
#define CH32V_CAN1_RXMIR1_EXID    (18 <<  3) /* 08: extended identifier */
#define CH32V_CAN1_RXMIR1_EXID_MASK    (0x3ffff)
#define CH32V_CAN1_RXMIR1_IDE     (1 <<  2) /* 04: Identifier extension */
#define CH32V_CAN1_RXMIR1_RTR     (1 <<  1) /* 02: Remote transmission request */
#define CH32V_CAN1_RXMDTR1_OFFSET 0x01c4
#define CH32V_CAN1_RXMDTR1        (CH32V_CAN1_BASE + CH32V_CAN1_RXMDTR1_OFFSET)
#define CH32V_CAN1_RXMDTR1_TIME   (16 << 16) /* 10000: Message time stamp */
#define CH32V_CAN1_RXMDTR1_TIME_MASK   (0xffff)
#define CH32V_CAN1_RXMDTR1_FMI    (8 <<  8) /* 100: Filter match index */
#define CH32V_CAN1_RXMDTR1_FMI_MASK    (0xff)
#define CH32V_CAN1_RXMDTR1_DLC    (4 <<  0) /* 01: Data length code */
#define CH32V_CAN1_RXMDTR1_DLC_MASK    (0x0f)
#define CH32V_CAN1_RXMDLR1_OFFSET 0x01c8
#define CH32V_CAN1_RXMDLR1        (CH32V_CAN1_BASE + CH32V_CAN1_RXMDLR1_OFFSET)
#define CH32V_CAN1_RXMDLR1_DATA3  (8 << 24) /* 1000000: Data Byte 3 */
#define CH32V_CAN1_RXMDLR1_DATA3_MASK  (0xff)
#define CH32V_CAN1_RXMDLR1_DATA2  (8 << 16) /* 10000: Data Byte 2 */
#define CH32V_CAN1_RXMDLR1_DATA2_MASK  (0xff)
#define CH32V_CAN1_RXMDLR1_DATA1  (8 <<  8) /* 100: Data Byte 1 */
#define CH32V_CAN1_RXMDLR1_DATA1_MASK  (0xff)
#define CH32V_CAN1_RXMDLR1_DATA0  (8 <<  0) /* 01: Data Byte 0 */
#define CH32V_CAN1_RXMDLR1_DATA0_MASK  (0xff)
#define CH32V_CAN1_RXMDHR1_OFFSET 0x01cc
#define CH32V_CAN1_RXMDHR1        (CH32V_CAN1_BASE + CH32V_CAN1_RXMDHR1_OFFSET)
#define CH32V_CAN1_RXMDHR1_DATA7  (8 << 24) /* 1000000: DATA7 */
#define CH32V_CAN1_RXMDHR1_DATA7_MASK  (0xff)
#define CH32V_CAN1_RXMDHR1_DATA6  (8 << 16) /* 10000: DATA6 */
#define CH32V_CAN1_RXMDHR1_DATA6_MASK  (0xff)
#define CH32V_CAN1_RXMDHR1_DATA5  (8 <<  8) /* 100: DATA5 */
#define CH32V_CAN1_RXMDHR1_DATA5_MASK  (0xff)
#define CH32V_CAN1_RXMDHR1_DATA4  (8 <<  0) /* 01: DATA4 */
#define CH32V_CAN1_RXMDHR1_DATA4_MASK  (0xff)
#define CH32V_CAN1_FCTLR_OFFSET   0x0200
#define CH32V_CAN1_FCTLR          (CH32V_CAN1_BASE + CH32V_CAN1_FCTLR_OFFSET)
#define CH32V_CAN1_FCTLR_FINIT    (1 <<  0) /* 01: Filter init mode */
#define CH32V_CAN1_FCTLR_CAN2SB   (6 <<  8) /* 100: CAN2 start bank */
#define CH32V_CAN1_FCTLR_CAN2SB_MASK   (0x3f)
#define CH32V_CAN1_FMCFGR_OFFSET  0x0204
#define CH32V_CAN1_FMCFGR         (CH32V_CAN1_BASE + CH32V_CAN1_FMCFGR_OFFSET)
#define CH32V_CAN1_FMCFGR_FBM0    (1 <<  0) /* 01: Filter mode */
#define CH32V_CAN1_FMCFGR_FBM1    (1 <<  1) /* 02: Filter mode */
#define CH32V_CAN1_FMCFGR_FBM2    (1 <<  2) /* 04: Filter mode */
#define CH32V_CAN1_FMCFGR_FBM3    (1 <<  3) /* 08: Filter mode */
#define CH32V_CAN1_FMCFGR_FBM4    (1 <<  4) /* 10: Filter mode */
#define CH32V_CAN1_FMCFGR_FBM5    (1 <<  5) /* 20: Filter mode */
#define CH32V_CAN1_FMCFGR_FBM6    (1 <<  6) /* 40: Filter mode */
#define CH32V_CAN1_FMCFGR_FBM7    (1 <<  7) /* 80: Filter mode */
#define CH32V_CAN1_FMCFGR_FBM8    (1 <<  8) /* 100: Filter mode */
#define CH32V_CAN1_FMCFGR_FBM9    (1 <<  9) /* 200: Filter mode */
#define CH32V_CAN1_FMCFGR_FBM10   (1 << 10) /* 400: Filter mode */
#define CH32V_CAN1_FMCFGR_FBM11   (1 << 11) /* 800: Filter mode */
#define CH32V_CAN1_FMCFGR_FBM12   (1 << 12) /* 1000: Filter mode */
#define CH32V_CAN1_FMCFGR_FBM13   (1 << 13) /* 2000: Filter mode */
#define CH32V_CAN1_FSCFGR_OFFSET  0x020c
#define CH32V_CAN1_FSCFGR         (CH32V_CAN1_BASE + CH32V_CAN1_FSCFGR_OFFSET)
#define CH32V_CAN1_FSCFGR_FSC0    (1 <<  0) /* 01: Filter scale configuration */
#define CH32V_CAN1_FSCFGR_FSC1    (1 <<  1) /* 02: Filter scale configuration */
#define CH32V_CAN1_FSCFGR_FSC2    (1 <<  2) /* 04: Filter scale configuration */
#define CH32V_CAN1_FSCFGR_FSC3    (1 <<  3) /* 08: Filter scale configuration */
#define CH32V_CAN1_FSCFGR_FSC4    (1 <<  4) /* 10: Filter scale configuration */
#define CH32V_CAN1_FSCFGR_FSC5    (1 <<  5) /* 20: Filter scale configuration */
#define CH32V_CAN1_FSCFGR_FSC6    (1 <<  6) /* 40: Filter scale configuration */
#define CH32V_CAN1_FSCFGR_FSC7    (1 <<  7) /* 80: Filter scale configuration */
#define CH32V_CAN1_FSCFGR_FSC8    (1 <<  8) /* 100: Filter scale configuration */
#define CH32V_CAN1_FSCFGR_FSC9    (1 <<  9) /* 200: Filter scale configuration */
#define CH32V_CAN1_FSCFGR_FSC10   (1 << 10) /* 400: Filter scale configuration */
#define CH32V_CAN1_FSCFGR_FSC11   (1 << 11) /* 800: Filter scale configuration */
#define CH32V_CAN1_FSCFGR_FSC12   (1 << 12) /* 1000: Filter scale configuration */
#define CH32V_CAN1_FSCFGR_FSC13   (1 << 13) /* 2000: Filter scale configuration */
#define CH32V_CAN1_FAFIFOR_OFFSET 0x0214
#define CH32V_CAN1_FAFIFOR        (CH32V_CAN1_BASE + CH32V_CAN1_FAFIFOR_OFFSET)
#define CH32V_CAN1_FAFIFOR_FFA0   (1 <<  0) /* 01: Filter FIFO assignment for filter 0 */
#define CH32V_CAN1_FAFIFOR_FFA1   (1 <<  1) /* 02: Filter FIFO assignment for filter 1 */
#define CH32V_CAN1_FAFIFOR_FFA2   (1 <<  2) /* 04: Filter FIFO assignment for filter 2 */
#define CH32V_CAN1_FAFIFOR_FFA3   (1 <<  3) /* 08: Filter FIFO assignment for filter 3 */
#define CH32V_CAN1_FAFIFOR_FFA4   (1 <<  4) /* 10: Filter FIFO assignment for filter 4 */
#define CH32V_CAN1_FAFIFOR_FFA5   (1 <<  5) /* 20: Filter FIFO assignment for filter 5 */
#define CH32V_CAN1_FAFIFOR_FFA6   (1 <<  6) /* 40: Filter FIFO assignment for filter 6 */
#define CH32V_CAN1_FAFIFOR_FFA7   (1 <<  7) /* 80: Filter FIFO assignment for filter 7 */
#define CH32V_CAN1_FAFIFOR_FFA8   (1 <<  8) /* 100: Filter FIFO assignment for filter 8 */
#define CH32V_CAN1_FAFIFOR_FFA9   (1 <<  9) /* 200: Filter FIFO assignment for filter 9 */
#define CH32V_CAN1_FAFIFOR_FFA10  (1 << 10) /* 400: Filter FIFO assignment for filter 10 */
#define CH32V_CAN1_FAFIFOR_FFA11  (1 << 11) /* 800: Filter FIFO assignment for filter 11 */
#define CH32V_CAN1_FAFIFOR_FFA12  (1 << 12) /* 1000: Filter FIFO assignment for filter 12 */
#define CH32V_CAN1_FAFIFOR_FFA13  (1 << 13) /* 2000: Filter FIFO assignment for filter 13 */
#define CH32V_CAN1_FWR_OFFSET     0x021c
#define CH32V_CAN1_FWR            (CH32V_CAN1_BASE + CH32V_CAN1_FWR_OFFSET)
#define CH32V_CAN1_FWR_FACT0      (1 <<  0) /* 01: Filter active */
#define CH32V_CAN1_FWR_FACT1      (1 <<  1) /* 02: Filter active */
#define CH32V_CAN1_FWR_FACT2      (1 <<  2) /* 04: Filter active */
#define CH32V_CAN1_FWR_FACT3      (1 <<  3) /* 08: Filter active */
#define CH32V_CAN1_FWR_FACT4      (1 <<  4) /* 10: Filter active */
#define CH32V_CAN1_FWR_FACT5      (1 <<  5) /* 20: Filter active */
#define CH32V_CAN1_FWR_FACT6      (1 <<  6) /* 40: Filter active */
#define CH32V_CAN1_FWR_FACT7      (1 <<  7) /* 80: Filter active */
#define CH32V_CAN1_FWR_FACT8      (1 <<  8) /* 100: Filter active */
#define CH32V_CAN1_FWR_FACT9      (1 <<  9) /* 200: Filter active */
#define CH32V_CAN1_FWR_FACT10     (1 << 10) /* 400: Filter active */
#define CH32V_CAN1_FWR_FACT11     (1 << 11) /* 800: Filter active */
#define CH32V_CAN1_FWR_FACT12     (1 << 12) /* 1000: Filter active */
#define CH32V_CAN1_FWR_FACT13     (1 << 13) /* 2000: Filter active */
#define CH32V_CAN1_F0R1_OFFSET    0x0240
#define CH32V_CAN1_F0R1           (CH32V_CAN1_BASE + CH32V_CAN1_F0R1_OFFSET)
#define CH32V_CAN1_F0R1_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F0R1_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F0R1_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F0R1_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F0R1_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F0R1_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F0R1_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F0R1_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F0R1_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F0R1_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F0R1_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F0R1_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F0R1_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F0R1_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F0R1_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F0R1_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F0R1_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F0R1_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F0R1_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F0R1_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F0R1_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F0R1_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F0R1_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F0R1_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F0R1_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F0R1_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F0R1_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F0R1_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F0R1_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F0R1_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F0R1_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F0R1_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F0R2_OFFSET    0x0244
#define CH32V_CAN1_F0R2           (CH32V_CAN1_BASE + CH32V_CAN1_F0R2_OFFSET)
#define CH32V_CAN1_F0R2_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F0R2_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F0R2_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F0R2_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F0R2_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F0R2_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F0R2_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F0R2_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F0R2_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F0R2_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F0R2_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F0R2_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F0R2_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F0R2_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F0R2_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F0R2_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F0R2_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F0R2_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F0R2_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F0R2_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F0R2_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F0R2_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F0R2_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F0R2_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F0R2_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F0R2_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F0R2_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F0R2_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F0R2_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F0R2_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F0R2_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F0R2_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F1R1_OFFSET    0x0248
#define CH32V_CAN1_F1R1           (CH32V_CAN1_BASE + CH32V_CAN1_F1R1_OFFSET)
#define CH32V_CAN1_F1R1_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F1R1_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F1R1_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F1R1_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F1R1_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F1R1_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F1R1_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F1R1_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F1R1_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F1R1_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F1R1_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F1R1_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F1R1_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F1R1_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F1R1_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F1R1_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F1R1_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F1R1_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F1R1_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F1R1_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F1R1_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F1R1_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F1R1_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F1R1_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F1R1_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F1R1_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F1R1_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F1R1_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F1R1_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F1R1_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F1R1_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F1R1_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F1R2_OFFSET    0x024c
#define CH32V_CAN1_F1R2           (CH32V_CAN1_BASE + CH32V_CAN1_F1R2_OFFSET)
#define CH32V_CAN1_F1R2_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F1R2_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F1R2_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F1R2_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F1R2_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F1R2_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F1R2_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F1R2_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F1R2_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F1R2_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F1R2_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F1R2_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F1R2_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F1R2_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F1R2_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F1R2_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F1R2_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F1R2_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F1R2_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F1R2_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F1R2_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F1R2_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F1R2_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F1R2_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F1R2_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F1R2_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F1R2_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F1R2_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F1R2_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F1R2_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F1R2_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F1R2_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F2R1_OFFSET    0x0250
#define CH32V_CAN1_F2R1           (CH32V_CAN1_BASE + CH32V_CAN1_F2R1_OFFSET)
#define CH32V_CAN1_F2R1_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F2R1_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F2R1_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F2R1_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F2R1_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F2R1_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F2R1_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F2R1_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F2R1_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F2R1_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F2R1_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F2R1_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F2R1_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F2R1_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F2R1_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F2R1_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F2R1_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F2R1_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F2R1_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F2R1_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F2R1_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F2R1_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F2R1_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F2R1_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F2R1_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F2R1_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F2R1_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F2R1_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F2R1_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F2R1_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F2R1_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F2R1_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F2R2_OFFSET    0x0254
#define CH32V_CAN1_F2R2           (CH32V_CAN1_BASE + CH32V_CAN1_F2R2_OFFSET)
#define CH32V_CAN1_F2R2_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F2R2_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F2R2_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F2R2_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F2R2_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F2R2_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F2R2_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F2R2_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F2R2_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F2R2_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F2R2_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F2R2_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F2R2_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F2R2_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F2R2_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F2R2_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F2R2_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F2R2_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F2R2_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F2R2_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F2R2_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F2R2_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F2R2_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F2R2_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F2R2_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F2R2_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F2R2_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F2R2_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F2R2_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F2R2_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F2R2_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F2R2_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F3R1_OFFSET    0x0258
#define CH32V_CAN1_F3R1           (CH32V_CAN1_BASE + CH32V_CAN1_F3R1_OFFSET)
#define CH32V_CAN1_F3R1_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F3R1_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F3R1_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F3R1_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F3R1_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F3R1_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F3R1_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F3R1_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F3R1_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F3R1_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F3R1_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F3R1_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F3R1_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F3R1_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F3R1_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F3R1_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F3R1_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F3R1_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F3R1_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F3R1_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F3R1_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F3R1_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F3R1_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F3R1_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F3R1_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F3R1_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F3R1_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F3R1_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F3R1_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F3R1_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F3R1_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F3R1_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F3R2_OFFSET    0x025c
#define CH32V_CAN1_F3R2           (CH32V_CAN1_BASE + CH32V_CAN1_F3R2_OFFSET)
#define CH32V_CAN1_F3R2_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F3R2_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F3R2_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F3R2_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F3R2_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F3R2_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F3R2_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F3R2_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F3R2_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F3R2_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F3R2_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F3R2_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F3R2_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F3R2_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F3R2_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F3R2_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F3R2_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F3R2_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F3R2_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F3R2_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F3R2_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F3R2_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F3R2_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F3R2_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F3R2_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F3R2_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F3R2_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F3R2_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F3R2_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F3R2_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F3R2_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F3R2_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F4R1_OFFSET    0x0260
#define CH32V_CAN1_F4R1           (CH32V_CAN1_BASE + CH32V_CAN1_F4R1_OFFSET)
#define CH32V_CAN1_F4R1_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F4R1_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F4R1_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F4R1_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F4R1_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F4R1_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F4R1_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F4R1_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F4R1_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F4R1_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F4R1_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F4R1_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F4R1_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F4R1_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F4R1_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F4R1_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F4R1_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F4R1_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F4R1_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F4R1_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F4R1_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F4R1_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F4R1_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F4R1_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F4R1_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F4R1_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F4R1_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F4R1_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F4R1_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F4R1_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F4R1_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F4R1_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F4R2_OFFSET    0x0264
#define CH32V_CAN1_F4R2           (CH32V_CAN1_BASE + CH32V_CAN1_F4R2_OFFSET)
#define CH32V_CAN1_F4R2_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F4R2_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F4R2_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F4R2_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F4R2_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F4R2_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F4R2_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F4R2_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F4R2_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F4R2_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F4R2_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F4R2_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F4R2_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F4R2_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F4R2_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F4R2_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F4R2_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F4R2_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F4R2_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F4R2_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F4R2_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F4R2_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F4R2_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F4R2_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F4R2_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F4R2_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F4R2_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F4R2_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F4R2_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F4R2_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F4R2_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F4R2_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F5R1_OFFSET    0x0268
#define CH32V_CAN1_F5R1           (CH32V_CAN1_BASE + CH32V_CAN1_F5R1_OFFSET)
#define CH32V_CAN1_F5R1_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F5R1_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F5R1_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F5R1_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F5R1_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F5R1_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F5R1_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F5R1_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F5R1_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F5R1_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F5R1_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F5R1_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F5R1_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F5R1_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F5R1_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F5R1_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F5R1_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F5R1_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F5R1_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F5R1_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F5R1_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F5R1_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F5R1_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F5R1_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F5R1_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F5R1_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F5R1_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F5R1_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F5R1_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F5R1_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F5R1_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F5R1_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F5R2_OFFSET    0x026c
#define CH32V_CAN1_F5R2           (CH32V_CAN1_BASE + CH32V_CAN1_F5R2_OFFSET)
#define CH32V_CAN1_F5R2_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F5R2_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F5R2_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F5R2_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F5R2_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F5R2_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F5R2_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F5R2_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F5R2_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F5R2_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F5R2_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F5R2_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F5R2_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F5R2_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F5R2_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F5R2_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F5R2_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F5R2_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F5R2_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F5R2_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F5R2_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F5R2_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F5R2_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F5R2_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F5R2_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F5R2_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F5R2_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F5R2_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F5R2_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F5R2_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F5R2_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F5R2_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F6R1_OFFSET    0x0270
#define CH32V_CAN1_F6R1           (CH32V_CAN1_BASE + CH32V_CAN1_F6R1_OFFSET)
#define CH32V_CAN1_F6R1_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F6R1_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F6R1_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F6R1_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F6R1_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F6R1_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F6R1_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F6R1_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F6R1_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F6R1_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F6R1_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F6R1_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F6R1_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F6R1_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F6R1_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F6R1_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F6R1_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F6R1_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F6R1_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F6R1_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F6R1_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F6R1_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F6R1_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F6R1_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F6R1_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F6R1_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F6R1_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F6R1_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F6R1_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F6R1_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F6R1_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F6R1_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F6R2_OFFSET    0x0274
#define CH32V_CAN1_F6R2           (CH32V_CAN1_BASE + CH32V_CAN1_F6R2_OFFSET)
#define CH32V_CAN1_F6R2_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F6R2_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F6R2_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F6R2_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F6R2_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F6R2_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F6R2_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F6R2_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F6R2_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F6R2_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F6R2_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F6R2_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F6R2_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F6R2_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F6R2_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F6R2_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F6R2_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F6R2_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F6R2_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F6R2_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F6R2_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F6R2_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F6R2_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F6R2_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F6R2_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F6R2_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F6R2_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F6R2_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F6R2_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F6R2_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F6R2_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F6R2_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F7R1_OFFSET    0x0278
#define CH32V_CAN1_F7R1           (CH32V_CAN1_BASE + CH32V_CAN1_F7R1_OFFSET)
#define CH32V_CAN1_F7R1_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F7R1_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F7R1_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F7R1_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F7R1_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F7R1_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F7R1_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F7R1_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F7R1_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F7R1_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F7R1_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F7R1_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F7R1_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F7R1_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F7R1_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F7R1_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F7R1_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F7R1_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F7R1_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F7R1_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F7R1_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F7R1_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F7R1_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F7R1_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F7R1_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F7R1_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F7R1_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F7R1_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F7R1_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F7R1_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F7R1_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F7R1_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F7R2_OFFSET    0x027c
#define CH32V_CAN1_F7R2           (CH32V_CAN1_BASE + CH32V_CAN1_F7R2_OFFSET)
#define CH32V_CAN1_F7R2_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F7R2_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F7R2_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F7R2_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F7R2_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F7R2_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F7R2_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F7R2_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F7R2_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F7R2_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F7R2_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F7R2_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F7R2_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F7R2_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F7R2_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F7R2_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F7R2_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F7R2_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F7R2_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F7R2_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F7R2_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F7R2_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F7R2_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F7R2_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F7R2_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F7R2_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F7R2_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F7R2_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F7R2_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F7R2_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F7R2_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F7R2_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F8R1_OFFSET    0x0280
#define CH32V_CAN1_F8R1           (CH32V_CAN1_BASE + CH32V_CAN1_F8R1_OFFSET)
#define CH32V_CAN1_F8R1_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F8R1_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F8R1_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F8R1_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F8R1_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F8R1_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F8R1_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F8R1_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F8R1_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F8R1_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F8R1_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F8R1_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F8R1_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F8R1_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F8R1_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F8R1_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F8R1_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F8R1_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F8R1_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F8R1_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F8R1_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F8R1_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F8R1_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F8R1_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F8R1_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F8R1_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F8R1_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F8R1_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F8R1_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F8R1_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F8R1_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F8R1_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F8R2_OFFSET    0x0284
#define CH32V_CAN1_F8R2           (CH32V_CAN1_BASE + CH32V_CAN1_F8R2_OFFSET)
#define CH32V_CAN1_F8R2_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F8R2_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F8R2_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F8R2_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F8R2_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F8R2_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F8R2_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F8R2_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F8R2_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F8R2_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F8R2_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F8R2_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F8R2_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F8R2_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F8R2_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F8R2_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F8R2_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F8R2_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F8R2_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F8R2_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F8R2_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F8R2_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F8R2_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F8R2_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F8R2_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F8R2_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F8R2_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F8R2_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F8R2_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F8R2_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F8R2_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F8R2_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F9R1_OFFSET    0x0288
#define CH32V_CAN1_F9R1           (CH32V_CAN1_BASE + CH32V_CAN1_F9R1_OFFSET)
#define CH32V_CAN1_F9R1_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F9R1_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F9R1_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F9R1_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F9R1_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F9R1_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F9R1_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F9R1_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F9R1_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F9R1_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F9R1_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F9R1_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F9R1_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F9R1_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F9R1_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F9R1_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F9R1_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F9R1_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F9R1_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F9R1_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F9R1_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F9R1_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F9R1_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F9R1_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F9R1_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F9R1_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F9R1_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F9R1_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F9R1_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F9R1_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F9R1_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F9R1_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F9R2_OFFSET    0x028c
#define CH32V_CAN1_F9R2           (CH32V_CAN1_BASE + CH32V_CAN1_F9R2_OFFSET)
#define CH32V_CAN1_F9R2_FB0       (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F9R2_FB1       (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F9R2_FB2       (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F9R2_FB3       (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F9R2_FB4       (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F9R2_FB5       (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F9R2_FB6       (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F9R2_FB7       (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F9R2_FB8       (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F9R2_FB9       (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F9R2_FB10      (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F9R2_FB11      (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F9R2_FB12      (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F9R2_FB13      (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F9R2_FB14      (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F9R2_FB15      (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F9R2_FB16      (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F9R2_FB17      (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F9R2_FB18      (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F9R2_FB19      (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F9R2_FB20      (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F9R2_FB21      (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F9R2_FB22      (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F9R2_FB23      (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F9R2_FB24      (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F9R2_FB25      (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F9R2_FB26      (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F9R2_FB27      (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F9R2_FB28      (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F9R2_FB29      (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F9R2_FB30      (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F9R2_FB31      (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F10R1_OFFSET   0x0290
#define CH32V_CAN1_F10R1          (CH32V_CAN1_BASE + CH32V_CAN1_F10R1_OFFSET)
#define CH32V_CAN1_F10R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F10R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F10R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F10R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F10R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F10R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F10R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F10R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F10R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F10R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F10R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F10R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F10R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F10R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F10R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F10R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F10R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F10R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F10R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F10R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F10R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F10R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F10R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F10R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F10R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F10R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F10R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F10R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F10R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F10R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F10R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F10R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F10R2_OFFSET   0x0294
#define CH32V_CAN1_F10R2          (CH32V_CAN1_BASE + CH32V_CAN1_F10R2_OFFSET)
#define CH32V_CAN1_F10R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F10R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F10R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F10R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F10R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F10R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F10R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F10R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F10R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F10R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F10R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F10R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F10R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F10R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F10R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F10R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F10R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F10R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F10R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F10R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F10R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F10R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F10R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F10R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F10R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F10R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F10R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F10R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F10R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F10R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F10R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F10R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F11R1_OFFSET   0x0298
#define CH32V_CAN1_F11R1          (CH32V_CAN1_BASE + CH32V_CAN1_F11R1_OFFSET)
#define CH32V_CAN1_F11R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F11R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F11R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F11R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F11R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F11R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F11R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F11R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F11R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F11R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F11R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F11R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F11R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F11R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F11R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F11R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F11R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F11R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F11R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F11R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F11R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F11R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F11R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F11R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F11R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F11R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F11R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F11R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F11R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F11R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F11R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F11R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F11R2_OFFSET   0x029c
#define CH32V_CAN1_F11R2          (CH32V_CAN1_BASE + CH32V_CAN1_F11R2_OFFSET)
#define CH32V_CAN1_F11R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F11R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F11R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F11R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F11R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F11R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F11R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F11R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F11R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F11R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F11R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F11R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F11R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F11R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F11R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F11R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F11R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F11R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F11R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F11R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F11R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F11R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F11R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F11R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F11R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F11R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F11R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F11R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F11R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F11R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F11R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F11R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F12R1_OFFSET   0x02a0
#define CH32V_CAN1_F12R1          (CH32V_CAN1_BASE + CH32V_CAN1_F12R1_OFFSET)
#define CH32V_CAN1_F12R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F12R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F12R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F12R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F12R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F12R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F12R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F12R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F12R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F12R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F12R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F12R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F12R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F12R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F12R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F12R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F12R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F12R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F12R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F12R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F12R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F12R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F12R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F12R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F12R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F12R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F12R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F12R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F12R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F12R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F12R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F12R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F12R2_OFFSET   0x02a4
#define CH32V_CAN1_F12R2          (CH32V_CAN1_BASE + CH32V_CAN1_F12R2_OFFSET)
#define CH32V_CAN1_F12R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F12R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F12R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F12R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F12R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F12R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F12R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F12R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F12R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F12R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F12R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F12R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F12R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F12R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F12R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F12R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F12R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F12R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F12R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F12R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F12R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F12R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F12R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F12R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F12R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F12R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F12R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F12R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F12R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F12R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F12R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F12R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F13R1_OFFSET   0x02a8
#define CH32V_CAN1_F13R1          (CH32V_CAN1_BASE + CH32V_CAN1_F13R1_OFFSET)
#define CH32V_CAN1_F13R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F13R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F13R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F13R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F13R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F13R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F13R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F13R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F13R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F13R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F13R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F13R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F13R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F13R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F13R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F13R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F13R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F13R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F13R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F13R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F13R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F13R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F13R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F13R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F13R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F13R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F13R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F13R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F13R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F13R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F13R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F13R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F13R2_OFFSET   0x02ac
#define CH32V_CAN1_F13R2          (CH32V_CAN1_BASE + CH32V_CAN1_F13R2_OFFSET)
#define CH32V_CAN1_F13R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F13R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F13R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F13R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F13R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F13R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F13R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F13R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F13R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F13R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F13R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F13R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F13R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F13R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F13R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F13R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F13R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F13R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F13R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F13R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F13R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F13R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F13R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F13R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F13R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F13R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F13R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F13R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F13R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F13R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F13R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F13R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F14R1_OFFSET   0x02b0
#define CH32V_CAN1_F14R1          (CH32V_CAN1_BASE + CH32V_CAN1_F14R1_OFFSET)
#define CH32V_CAN1_F14R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F14R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F14R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F14R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F14R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F14R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F14R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F14R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F14R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F14R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F14R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F14R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F14R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F14R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F14R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F14R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F14R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F14R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F14R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F14R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F14R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F14R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F14R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F14R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F14R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F14R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F14R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F14R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F14R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F14R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F14R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F14R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F14R2_OFFSET   0x02b4
#define CH32V_CAN1_F14R2          (CH32V_CAN1_BASE + CH32V_CAN1_F14R2_OFFSET)
#define CH32V_CAN1_F14R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F14R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F14R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F14R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F14R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F14R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F14R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F14R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F14R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F14R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F14R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F14R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F14R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F14R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F14R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F14R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F14R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F14R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F14R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F14R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F14R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F14R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F14R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F14R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F14R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F14R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F14R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F14R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F14R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F14R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F14R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F14R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F15R1_OFFSET   0x02b8
#define CH32V_CAN1_F15R1          (CH32V_CAN1_BASE + CH32V_CAN1_F15R1_OFFSET)
#define CH32V_CAN1_F15R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F15R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F15R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F15R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F15R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F15R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F15R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F15R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F15R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F15R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F15R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F15R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F15R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F15R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F15R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F15R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F15R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F15R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F15R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F15R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F15R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F15R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F15R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F15R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F15R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F15R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F15R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F15R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F15R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F15R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F15R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F15R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F15R2_OFFSET   0x02bc
#define CH32V_CAN1_F15R2          (CH32V_CAN1_BASE + CH32V_CAN1_F15R2_OFFSET)
#define CH32V_CAN1_F15R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F15R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F15R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F15R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F15R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F15R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F15R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F15R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F15R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F15R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F15R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F15R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F15R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F15R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F15R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F15R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F15R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F15R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F15R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F15R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F15R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F15R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F15R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F15R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F15R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F15R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F15R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F15R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F15R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F15R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F15R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F15R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F16R1_OFFSET   0x02c0
#define CH32V_CAN1_F16R1          (CH32V_CAN1_BASE + CH32V_CAN1_F16R1_OFFSET)
#define CH32V_CAN1_F16R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F16R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F16R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F16R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F16R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F16R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F16R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F16R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F16R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F16R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F16R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F16R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F16R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F16R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F16R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F16R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F16R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F16R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F16R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F16R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F16R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F16R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F16R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F16R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F16R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F16R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F16R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F16R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F16R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F16R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F16R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F16R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F16R2_OFFSET   0x02c4
#define CH32V_CAN1_F16R2          (CH32V_CAN1_BASE + CH32V_CAN1_F16R2_OFFSET)
#define CH32V_CAN1_F16R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F16R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F16R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F16R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F16R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F16R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F16R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F16R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F16R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F16R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F16R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F16R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F16R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F16R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F16R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F16R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F16R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F16R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F16R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F16R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F16R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F16R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F16R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F16R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F16R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F16R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F16R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F16R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F16R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F16R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F16R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F16R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F17R1_OFFSET   0x02c8
#define CH32V_CAN1_F17R1          (CH32V_CAN1_BASE + CH32V_CAN1_F17R1_OFFSET)
#define CH32V_CAN1_F17R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F17R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F17R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F17R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F17R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F17R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F17R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F17R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F17R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F17R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F17R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F17R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F17R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F17R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F17R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F17R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F17R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F17R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F17R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F17R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F17R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F17R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F17R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F17R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F17R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F17R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F17R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F17R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F17R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F17R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F17R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F17R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F17R2_OFFSET   0x02cc
#define CH32V_CAN1_F17R2          (CH32V_CAN1_BASE + CH32V_CAN1_F17R2_OFFSET)
#define CH32V_CAN1_F17R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F17R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F17R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F17R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F17R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F17R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F17R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F17R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F17R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F17R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F17R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F17R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F17R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F17R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F17R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F17R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F17R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F17R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F17R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F17R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F17R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F17R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F17R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F17R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F17R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F17R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F17R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F17R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F17R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F17R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F17R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F17R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F18R1_OFFSET   0x02d0
#define CH32V_CAN1_F18R1          (CH32V_CAN1_BASE + CH32V_CAN1_F18R1_OFFSET)
#define CH32V_CAN1_F18R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F18R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F18R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F18R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F18R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F18R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F18R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F18R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F18R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F18R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F18R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F18R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F18R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F18R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F18R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F18R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F18R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F18R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F18R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F18R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F18R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F18R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F18R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F18R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F18R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F18R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F18R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F18R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F18R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F18R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F18R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F18R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F18R2_OFFSET   0x02d4
#define CH32V_CAN1_F18R2          (CH32V_CAN1_BASE + CH32V_CAN1_F18R2_OFFSET)
#define CH32V_CAN1_F18R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F18R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F18R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F18R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F18R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F18R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F18R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F18R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F18R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F18R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F18R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F18R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F18R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F18R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F18R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F18R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F18R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F18R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F18R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F18R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F18R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F18R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F18R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F18R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F18R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F18R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F18R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F18R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F18R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F18R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F18R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F18R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F19R1_OFFSET   0x02d8
#define CH32V_CAN1_F19R1          (CH32V_CAN1_BASE + CH32V_CAN1_F19R1_OFFSET)
#define CH32V_CAN1_F19R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F19R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F19R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F19R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F19R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F19R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F19R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F19R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F19R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F19R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F19R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F19R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F19R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F19R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F19R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F19R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F19R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F19R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F19R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F19R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F19R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F19R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F19R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F19R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F19R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F19R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F19R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F19R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F19R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F19R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F19R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F19R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F19R2_OFFSET   0x02dc
#define CH32V_CAN1_F19R2          (CH32V_CAN1_BASE + CH32V_CAN1_F19R2_OFFSET)
#define CH32V_CAN1_F19R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F19R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F19R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F19R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F19R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F19R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F19R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F19R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F19R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F19R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F19R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F19R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F19R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F19R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F19R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F19R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F19R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F19R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F19R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F19R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F19R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F19R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F19R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F19R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F19R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F19R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F19R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F19R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F19R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F19R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F19R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F19R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F20R1_OFFSET   0x02e0
#define CH32V_CAN1_F20R1          (CH32V_CAN1_BASE + CH32V_CAN1_F20R1_OFFSET)
#define CH32V_CAN1_F20R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F20R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F20R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F20R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F20R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F20R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F20R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F20R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F20R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F20R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F20R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F20R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F20R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F20R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F20R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F20R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F20R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F20R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F20R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F20R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F20R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F20R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F20R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F20R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F20R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F20R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F20R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F20R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F20R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F20R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F20R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F20R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F20R2_OFFSET   0x02e4
#define CH32V_CAN1_F20R2          (CH32V_CAN1_BASE + CH32V_CAN1_F20R2_OFFSET)
#define CH32V_CAN1_F20R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F20R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F20R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F20R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F20R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F20R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F20R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F20R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F20R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F20R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F20R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F20R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F20R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F20R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F20R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F20R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F20R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F20R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F20R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F20R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F20R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F20R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F20R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F20R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F20R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F20R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F20R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F20R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F20R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F20R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F20R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F20R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F21R1_OFFSET   0x02e8
#define CH32V_CAN1_F21R1          (CH32V_CAN1_BASE + CH32V_CAN1_F21R1_OFFSET)
#define CH32V_CAN1_F21R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F21R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F21R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F21R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F21R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F21R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F21R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F21R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F21R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F21R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F21R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F21R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F21R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F21R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F21R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F21R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F21R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F21R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F21R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F21R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F21R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F21R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F21R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F21R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F21R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F21R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F21R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F21R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F21R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F21R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F21R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F21R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F21R2_OFFSET   0x02ec
#define CH32V_CAN1_F21R2          (CH32V_CAN1_BASE + CH32V_CAN1_F21R2_OFFSET)
#define CH32V_CAN1_F21R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F21R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F21R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F21R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F21R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F21R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F21R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F21R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F21R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F21R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F21R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F21R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F21R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F21R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F21R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F21R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F21R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F21R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F21R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F21R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F21R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F21R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F21R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F21R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F21R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F21R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F21R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F21R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F21R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F21R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F21R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F21R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F22R1_OFFSET   0x02f0
#define CH32V_CAN1_F22R1          (CH32V_CAN1_BASE + CH32V_CAN1_F22R1_OFFSET)
#define CH32V_CAN1_F22R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F22R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F22R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F22R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F22R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F22R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F22R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F22R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F22R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F22R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F22R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F22R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F22R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F22R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F22R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F22R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F22R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F22R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F22R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F22R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F22R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F22R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F22R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F22R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F22R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F22R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F22R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F22R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F22R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F22R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F22R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F22R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F22R2_OFFSET   0x02f4
#define CH32V_CAN1_F22R2          (CH32V_CAN1_BASE + CH32V_CAN1_F22R2_OFFSET)
#define CH32V_CAN1_F22R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F22R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F22R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F22R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F22R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F22R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F22R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F22R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F22R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F22R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F22R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F22R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F22R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F22R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F22R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F22R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F22R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F22R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F22R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F22R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F22R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F22R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F22R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F22R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F22R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F22R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F22R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F22R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F22R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F22R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F22R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F22R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F23R1_OFFSET   0x02f8
#define CH32V_CAN1_F23R1          (CH32V_CAN1_BASE + CH32V_CAN1_F23R1_OFFSET)
#define CH32V_CAN1_F23R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F23R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F23R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F23R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F23R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F23R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F23R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F23R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F23R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F23R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F23R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F23R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F23R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F23R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F23R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F23R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F23R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F23R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F23R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F23R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F23R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F23R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F23R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F23R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F23R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F23R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F23R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F23R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F23R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F23R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F23R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F23R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F23R2_OFFSET   0x02fc
#define CH32V_CAN1_F23R2          (CH32V_CAN1_BASE + CH32V_CAN1_F23R2_OFFSET)
#define CH32V_CAN1_F23R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F23R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F23R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F23R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F23R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F23R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F23R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F23R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F23R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F23R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F23R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F23R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F23R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F23R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F23R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F23R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F23R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F23R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F23R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F23R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F23R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F23R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F23R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F23R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F23R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F23R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F23R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F23R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F23R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F23R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F23R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F23R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F24R1_OFFSET   0x0300
#define CH32V_CAN1_F24R1          (CH32V_CAN1_BASE + CH32V_CAN1_F24R1_OFFSET)
#define CH32V_CAN1_F24R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F24R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F24R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F24R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F24R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F24R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F24R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F24R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F24R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F24R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F24R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F24R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F24R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F24R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F24R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F24R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F24R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F24R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F24R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F24R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F24R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F24R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F24R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F24R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F24R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F24R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F24R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F24R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F24R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F24R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F24R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F24R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F24R2_OFFSET   0x0304
#define CH32V_CAN1_F24R2          (CH32V_CAN1_BASE + CH32V_CAN1_F24R2_OFFSET)
#define CH32V_CAN1_F24R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F24R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F24R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F24R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F24R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F24R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F24R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F24R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F24R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F24R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F24R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F24R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F24R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F24R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F24R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F24R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F24R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F24R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F24R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F24R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F24R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F24R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F24R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F24R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F24R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F24R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F24R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F24R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F24R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F24R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F24R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F24R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F25R1_OFFSET   0x0308
#define CH32V_CAN1_F25R1          (CH32V_CAN1_BASE + CH32V_CAN1_F25R1_OFFSET)
#define CH32V_CAN1_F25R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F25R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F25R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F25R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F25R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F25R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F25R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F25R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F25R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F25R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F25R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F25R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F25R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F25R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F25R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F25R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F25R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F25R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F25R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F25R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F25R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F25R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F25R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F25R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F25R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F25R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F25R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F25R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F25R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F25R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F25R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F25R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F25R2_OFFSET   0x030c
#define CH32V_CAN1_F25R2          (CH32V_CAN1_BASE + CH32V_CAN1_F25R2_OFFSET)
#define CH32V_CAN1_F25R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F25R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F25R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F25R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F25R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F25R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F25R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F25R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F25R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F25R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F25R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F25R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F25R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F25R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F25R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F25R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F25R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F25R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F25R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F25R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F25R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F25R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F25R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F25R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F25R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F25R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F25R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F25R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F25R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F25R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F25R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F25R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F26R1_OFFSET   0x0310
#define CH32V_CAN1_F26R1          (CH32V_CAN1_BASE + CH32V_CAN1_F26R1_OFFSET)
#define CH32V_CAN1_F26R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F26R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F26R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F26R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F26R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F26R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F26R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F26R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F26R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F26R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F26R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F26R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F26R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F26R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F26R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F26R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F26R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F26R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F26R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F26R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F26R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F26R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F26R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F26R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F26R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F26R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F26R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F26R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F26R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F26R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F26R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F26R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F26R2_OFFSET   0x0314
#define CH32V_CAN1_F26R2          (CH32V_CAN1_BASE + CH32V_CAN1_F26R2_OFFSET)
#define CH32V_CAN1_F26R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F26R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F26R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F26R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F26R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F26R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F26R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F26R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F26R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F26R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F26R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F26R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F26R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F26R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F26R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F26R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F26R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F26R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F26R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F26R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F26R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F26R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F26R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F26R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F26R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F26R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F26R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F26R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F26R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F26R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F26R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F26R2_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F27R1_OFFSET   0x0318
#define CH32V_CAN1_F27R1          (CH32V_CAN1_BASE + CH32V_CAN1_F27R1_OFFSET)
#define CH32V_CAN1_F27R1_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F27R1_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F27R1_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F27R1_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F27R1_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F27R1_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F27R1_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F27R1_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F27R1_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F27R1_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F27R1_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F27R1_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F27R1_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F27R1_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F27R1_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F27R1_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F27R1_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F27R1_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F27R1_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F27R1_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F27R1_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F27R1_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F27R1_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F27R1_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F27R1_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F27R1_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F27R1_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F27R1_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F27R1_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F27R1_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F27R1_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F27R1_FB31     (1 << 31) /* 80000000: Filter bits */
#define CH32V_CAN1_F27R2_OFFSET   0x031c
#define CH32V_CAN1_F27R2          (CH32V_CAN1_BASE + CH32V_CAN1_F27R2_OFFSET)
#define CH32V_CAN1_F27R2_FB0      (1 <<  0) /* 01: Filter bits */
#define CH32V_CAN1_F27R2_FB1      (1 <<  1) /* 02: Filter bits */
#define CH32V_CAN1_F27R2_FB2      (1 <<  2) /* 04: Filter bits */
#define CH32V_CAN1_F27R2_FB3      (1 <<  3) /* 08: Filter bits */
#define CH32V_CAN1_F27R2_FB4      (1 <<  4) /* 10: Filter bits */
#define CH32V_CAN1_F27R2_FB5      (1 <<  5) /* 20: Filter bits */
#define CH32V_CAN1_F27R2_FB6      (1 <<  6) /* 40: Filter bits */
#define CH32V_CAN1_F27R2_FB7      (1 <<  7) /* 80: Filter bits */
#define CH32V_CAN1_F27R2_FB8      (1 <<  8) /* 100: Filter bits */
#define CH32V_CAN1_F27R2_FB9      (1 <<  9) /* 200: Filter bits */
#define CH32V_CAN1_F27R2_FB10     (1 << 10) /* 400: Filter bits */
#define CH32V_CAN1_F27R2_FB11     (1 << 11) /* 800: Filter bits */
#define CH32V_CAN1_F27R2_FB12     (1 << 12) /* 1000: Filter bits */
#define CH32V_CAN1_F27R2_FB13     (1 << 13) /* 2000: Filter bits */
#define CH32V_CAN1_F27R2_FB14     (1 << 14) /* 4000: Filter bits */
#define CH32V_CAN1_F27R2_FB15     (1 << 15) /* 8000: Filter bits */
#define CH32V_CAN1_F27R2_FB16     (1 << 16) /* 10000: Filter bits */
#define CH32V_CAN1_F27R2_FB17     (1 << 17) /* 20000: Filter bits */
#define CH32V_CAN1_F27R2_FB18     (1 << 18) /* 40000: Filter bits */
#define CH32V_CAN1_F27R2_FB19     (1 << 19) /* 80000: Filter bits */
#define CH32V_CAN1_F27R2_FB20     (1 << 20) /* 100000: Filter bits */
#define CH32V_CAN1_F27R2_FB21     (1 << 21) /* 200000: Filter bits */
#define CH32V_CAN1_F27R2_FB22     (1 << 22) /* 400000: Filter bits */
#define CH32V_CAN1_F27R2_FB23     (1 << 23) /* 800000: Filter bits */
#define CH32V_CAN1_F27R2_FB24     (1 << 24) /* 1000000: Filter bits */
#define CH32V_CAN1_F27R2_FB25     (1 << 25) /* 2000000: Filter bits */
#define CH32V_CAN1_F27R2_FB26     (1 << 26) /* 4000000: Filter bits */
#define CH32V_CAN1_F27R2_FB27     (1 << 27) /* 8000000: Filter bits */
#define CH32V_CAN1_F27R2_FB28     (1 << 28) /* 10000000: Filter bits */
#define CH32V_CAN1_F27R2_FB29     (1 << 29) /* 20000000: Filter bits */
#define CH32V_CAN1_F27R2_FB30     (1 << 30) /* 40000000: Filter bits */
#define CH32V_CAN1_F27R2_FB31     (1 << 31) /* 80000000: Filter bits */

/* No registers defined for peripheral CAN2. Using those of CAN1. */
#define CH32V_CAN2_BASE           0x40006800
#define CH32V_CAN2_CTLR_OFFSET    CH32V_CAN1_CTLR_OFFSET
#define CH32V_CAN2_CTLR           CH32V_CAN1_CTLR
#define CH32V_CAN2_CTLR_DBF       CH32V_CAN1_CTLR_DBF
#define CH32V_CAN2_CTLR_RESET     CH32V_CAN1_CTLR_RESET
#define CH32V_CAN2_CTLR_TTCM      CH32V_CAN1_CTLR_TTCM
#define CH32V_CAN2_CTLR_ABOM      CH32V_CAN1_CTLR_ABOM
#define CH32V_CAN2_CTLR_AWUM      CH32V_CAN1_CTLR_AWUM
#define CH32V_CAN2_CTLR_NART      CH32V_CAN1_CTLR_NART
#define CH32V_CAN2_CTLR_RFLM      CH32V_CAN1_CTLR_RFLM
#define CH32V_CAN2_CTLR_TXFP      CH32V_CAN1_CTLR_TXFP
#define CH32V_CAN2_CTLR_SLEEP     CH32V_CAN1_CTLR_SLEEP
#define CH32V_CAN2_CTLR_INRQ      CH32V_CAN1_CTLR_INRQ
#define CH32V_CAN2_STATR_OFFSET   CH32V_CAN1_STATR_OFFSET
#define CH32V_CAN2_STATR          CH32V_CAN1_STATR
#define CH32V_CAN2_STATR_RX       CH32V_CAN1_STATR_RX
#define CH32V_CAN2_STATR_SAMP     CH32V_CAN1_STATR_SAMP
#define CH32V_CAN2_STATR_RXM      CH32V_CAN1_STATR_RXM
#define CH32V_CAN2_STATR_TXM      CH32V_CAN1_STATR_TXM
#define CH32V_CAN2_STATR_SLAKI    CH32V_CAN1_STATR_SLAKI
#define CH32V_CAN2_STATR_WKUI     CH32V_CAN1_STATR_WKUI
#define CH32V_CAN2_STATR_ERRI     CH32V_CAN1_STATR_ERRI
#define CH32V_CAN2_STATR_SLAK     CH32V_CAN1_STATR_SLAK
#define CH32V_CAN2_STATR_INAK     CH32V_CAN1_STATR_INAK
#define CH32V_CAN2_TSTATR_OFFSET  CH32V_CAN1_TSTATR_OFFSET
#define CH32V_CAN2_TSTATR         CH32V_CAN1_TSTATR
#define CH32V_CAN2_TSTATR_LOW2    CH32V_CAN1_TSTATR_LOW2
#define CH32V_CAN2_TSTATR_LOW1    CH32V_CAN1_TSTATR_LOW1
#define CH32V_CAN2_TSTATR_LOW0    CH32V_CAN1_TSTATR_LOW0
#define CH32V_CAN2_TSTATR_TME2    CH32V_CAN1_TSTATR_TME2
#define CH32V_CAN2_TSTATR_TME1    CH32V_CAN1_TSTATR_TME1
#define CH32V_CAN2_TSTATR_TME0    CH32V_CAN1_TSTATR_TME0
#define CH32V_CAN2_TSTATR_CODE    CH32V_CAN1_TSTATR_CODE
#define CH32V_CAN2_TSTATR_CODE_MASK CH32V_CAN1_TSTATR_CODE_MASK
#define CH32V_CAN2_TSTATR_ABRQ2   CH32V_CAN1_TSTATR_ABRQ2
#define CH32V_CAN2_TSTATR_TERR2   CH32V_CAN1_TSTATR_TERR2
#define CH32V_CAN2_TSTATR_ALST2   CH32V_CAN1_TSTATR_ALST2
#define CH32V_CAN2_TSTATR_TXOK2   CH32V_CAN1_TSTATR_TXOK2
#define CH32V_CAN2_TSTATR_RQCP2   CH32V_CAN1_TSTATR_RQCP2
#define CH32V_CAN2_TSTATR_ABRQ1   CH32V_CAN1_TSTATR_ABRQ1
#define CH32V_CAN2_TSTATR_TERR1   CH32V_CAN1_TSTATR_TERR1
#define CH32V_CAN2_TSTATR_ALST1   CH32V_CAN1_TSTATR_ALST1
#define CH32V_CAN2_TSTATR_TXOK1   CH32V_CAN1_TSTATR_TXOK1
#define CH32V_CAN2_TSTATR_RQCP1   CH32V_CAN1_TSTATR_RQCP1
#define CH32V_CAN2_TSTATR_ABRQ0   CH32V_CAN1_TSTATR_ABRQ0
#define CH32V_CAN2_TSTATR_TERR0   CH32V_CAN1_TSTATR_TERR0
#define CH32V_CAN2_TSTATR_ALST0   CH32V_CAN1_TSTATR_ALST0
#define CH32V_CAN2_TSTATR_TXOK0   CH32V_CAN1_TSTATR_TXOK0
#define CH32V_CAN2_TSTATR_RQCP0   CH32V_CAN1_TSTATR_RQCP0
#define CH32V_CAN2_RFIFO0_OFFSET  CH32V_CAN1_RFIFO0_OFFSET
#define CH32V_CAN2_RFIFO0         CH32V_CAN1_RFIFO0
#define CH32V_CAN2_RFIFO0_RFOM0   CH32V_CAN1_RFIFO0_RFOM0
#define CH32V_CAN2_RFIFO0_FOVR0   CH32V_CAN1_RFIFO0_FOVR0
#define CH32V_CAN2_RFIFO0_FULL0   CH32V_CAN1_RFIFO0_FULL0
#define CH32V_CAN2_RFIFO0_FMP0    CH32V_CAN1_RFIFO0_FMP0
#define CH32V_CAN2_RFIFO0_FMP0_MASK CH32V_CAN1_RFIFO0_FMP0_MASK
#define CH32V_CAN2_RFIFO1_OFFSET  CH32V_CAN1_RFIFO1_OFFSET
#define CH32V_CAN2_RFIFO1         CH32V_CAN1_RFIFO1
#define CH32V_CAN2_RFIFO1_RFOM1   CH32V_CAN1_RFIFO1_RFOM1
#define CH32V_CAN2_RFIFO1_FOVR1   CH32V_CAN1_RFIFO1_FOVR1
#define CH32V_CAN2_RFIFO1_FULL1   CH32V_CAN1_RFIFO1_FULL1
#define CH32V_CAN2_RFIFO1_FMP1    CH32V_CAN1_RFIFO1_FMP1
#define CH32V_CAN2_RFIFO1_FMP1_MASK CH32V_CAN1_RFIFO1_FMP1_MASK
#define CH32V_CAN2_INTENR_OFFSET  CH32V_CAN1_INTENR_OFFSET
#define CH32V_CAN2_INTENR         CH32V_CAN1_INTENR
#define CH32V_CAN2_INTENR_SLKIE   CH32V_CAN1_INTENR_SLKIE
#define CH32V_CAN2_INTENR_WKUIE   CH32V_CAN1_INTENR_WKUIE
#define CH32V_CAN2_INTENR_ERRIE   CH32V_CAN1_INTENR_ERRIE
#define CH32V_CAN2_INTENR_LECIE   CH32V_CAN1_INTENR_LECIE
#define CH32V_CAN2_INTENR_BOFIE   CH32V_CAN1_INTENR_BOFIE
#define CH32V_CAN2_INTENR_EPVIE   CH32V_CAN1_INTENR_EPVIE
#define CH32V_CAN2_INTENR_EWGIE   CH32V_CAN1_INTENR_EWGIE
#define CH32V_CAN2_INTENR_FOVIE1  CH32V_CAN1_INTENR_FOVIE1
#define CH32V_CAN2_INTENR_FFIE1   CH32V_CAN1_INTENR_FFIE1
#define CH32V_CAN2_INTENR_FMPIE1  CH32V_CAN1_INTENR_FMPIE1
#define CH32V_CAN2_INTENR_FOVIE0  CH32V_CAN1_INTENR_FOVIE0
#define CH32V_CAN2_INTENR_FFIE0   CH32V_CAN1_INTENR_FFIE0
#define CH32V_CAN2_INTENR_FMPIE0  CH32V_CAN1_INTENR_FMPIE0
#define CH32V_CAN2_INTENR_TMEIE   CH32V_CAN1_INTENR_TMEIE
#define CH32V_CAN2_ERRSR_OFFSET   CH32V_CAN1_ERRSR_OFFSET
#define CH32V_CAN2_ERRSR          CH32V_CAN1_ERRSR
#define CH32V_CAN2_ERRSR_REC      CH32V_CAN1_ERRSR_REC
#define CH32V_CAN2_ERRSR_REC_MASK CH32V_CAN1_ERRSR_REC_MASK
#define CH32V_CAN2_ERRSR_TEC      CH32V_CAN1_ERRSR_TEC
#define CH32V_CAN2_ERRSR_TEC_MASK CH32V_CAN1_ERRSR_TEC_MASK
#define CH32V_CAN2_ERRSR_LEC      CH32V_CAN1_ERRSR_LEC
#define CH32V_CAN2_ERRSR_LEC_MASK CH32V_CAN1_ERRSR_LEC_MASK
#define CH32V_CAN2_ERRSR_BOFF     CH32V_CAN1_ERRSR_BOFF
#define CH32V_CAN2_ERRSR_EPVF     CH32V_CAN1_ERRSR_EPVF
#define CH32V_CAN2_ERRSR_EWGF     CH32V_CAN1_ERRSR_EWGF
#define CH32V_CAN2_BTIMR_OFFSET   CH32V_CAN1_BTIMR_OFFSET
#define CH32V_CAN2_BTIMR          CH32V_CAN1_BTIMR
#define CH32V_CAN2_BTIMR_SILM     CH32V_CAN1_BTIMR_SILM
#define CH32V_CAN2_BTIMR_LBKM     CH32V_CAN1_BTIMR_LBKM
#define CH32V_CAN2_BTIMR_SJW      CH32V_CAN1_BTIMR_SJW
#define CH32V_CAN2_BTIMR_SJW_MASK CH32V_CAN1_BTIMR_SJW_MASK
#define CH32V_CAN2_BTIMR_TS2      CH32V_CAN1_BTIMR_TS2
#define CH32V_CAN2_BTIMR_TS2_MASK CH32V_CAN1_BTIMR_TS2_MASK
#define CH32V_CAN2_BTIMR_TS1      CH32V_CAN1_BTIMR_TS1
#define CH32V_CAN2_BTIMR_TS1_MASK CH32V_CAN1_BTIMR_TS1_MASK
#define CH32V_CAN2_BTIMR_BRP      CH32V_CAN1_BTIMR_BRP
#define CH32V_CAN2_BTIMR_BRP_MASK CH32V_CAN1_BTIMR_BRP_MASK
#define CH32V_CAN2_TXMIR0_OFFSET  CH32V_CAN1_TXMIR0_OFFSET
#define CH32V_CAN2_TXMIR0         CH32V_CAN1_TXMIR0
#define CH32V_CAN2_TXMIR0_STID    CH32V_CAN1_TXMIR0_STID
#define CH32V_CAN2_TXMIR0_STID_MASK CH32V_CAN1_TXMIR0_STID_MASK
#define CH32V_CAN2_TXMIR0_EXID    CH32V_CAN1_TXMIR0_EXID
#define CH32V_CAN2_TXMIR0_EXID_MASK CH32V_CAN1_TXMIR0_EXID_MASK
#define CH32V_CAN2_TXMIR0_IDE     CH32V_CAN1_TXMIR0_IDE
#define CH32V_CAN2_TXMIR0_RTR     CH32V_CAN1_TXMIR0_RTR
#define CH32V_CAN2_TXMIR0_TXRQ    CH32V_CAN1_TXMIR0_TXRQ
#define CH32V_CAN2_TXMDTR0_OFFSET CH32V_CAN1_TXMDTR0_OFFSET
#define CH32V_CAN2_TXMDTR0        CH32V_CAN1_TXMDTR0
#define CH32V_CAN2_TXMDTR0_TIME   CH32V_CAN1_TXMDTR0_TIME
#define CH32V_CAN2_TXMDTR0_TIME_MASK CH32V_CAN1_TXMDTR0_TIME_MASK
#define CH32V_CAN2_TXMDTR0_TGT    CH32V_CAN1_TXMDTR0_TGT
#define CH32V_CAN2_TXMDTR0_DLC    CH32V_CAN1_TXMDTR0_DLC
#define CH32V_CAN2_TXMDTR0_DLC_MASK CH32V_CAN1_TXMDTR0_DLC_MASK
#define CH32V_CAN2_TXMDLR0_OFFSET CH32V_CAN1_TXMDLR0_OFFSET
#define CH32V_CAN2_TXMDLR0        CH32V_CAN1_TXMDLR0
#define CH32V_CAN2_TXMDLR0_DATA3  CH32V_CAN1_TXMDLR0_DATA3
#define CH32V_CAN2_TXMDLR0_DATA3_MASK CH32V_CAN1_TXMDLR0_DATA3_MASK
#define CH32V_CAN2_TXMDLR0_DATA2  CH32V_CAN1_TXMDLR0_DATA2
#define CH32V_CAN2_TXMDLR0_DATA2_MASK CH32V_CAN1_TXMDLR0_DATA2_MASK
#define CH32V_CAN2_TXMDLR0_DATA1  CH32V_CAN1_TXMDLR0_DATA1
#define CH32V_CAN2_TXMDLR0_DATA1_MASK CH32V_CAN1_TXMDLR0_DATA1_MASK
#define CH32V_CAN2_TXMDLR0_DATA0  CH32V_CAN1_TXMDLR0_DATA0
#define CH32V_CAN2_TXMDLR0_DATA0_MASK CH32V_CAN1_TXMDLR0_DATA0_MASK
#define CH32V_CAN2_TXMDHR0_OFFSET CH32V_CAN1_TXMDHR0_OFFSET
#define CH32V_CAN2_TXMDHR0        CH32V_CAN1_TXMDHR0
#define CH32V_CAN2_TXMDHR0_DATA7  CH32V_CAN1_TXMDHR0_DATA7
#define CH32V_CAN2_TXMDHR0_DATA7_MASK CH32V_CAN1_TXMDHR0_DATA7_MASK
#define CH32V_CAN2_TXMDHR0_DATA6  CH32V_CAN1_TXMDHR0_DATA6
#define CH32V_CAN2_TXMDHR0_DATA6_MASK CH32V_CAN1_TXMDHR0_DATA6_MASK
#define CH32V_CAN2_TXMDHR0_DATA5  CH32V_CAN1_TXMDHR0_DATA5
#define CH32V_CAN2_TXMDHR0_DATA5_MASK CH32V_CAN1_TXMDHR0_DATA5_MASK
#define CH32V_CAN2_TXMDHR0_DATA4  CH32V_CAN1_TXMDHR0_DATA4
#define CH32V_CAN2_TXMDHR0_DATA4_MASK CH32V_CAN1_TXMDHR0_DATA4_MASK
#define CH32V_CAN2_TXMIR1_OFFSET  CH32V_CAN1_TXMIR1_OFFSET
#define CH32V_CAN2_TXMIR1         CH32V_CAN1_TXMIR1
#define CH32V_CAN2_TXMIR1_STID    CH32V_CAN1_TXMIR1_STID
#define CH32V_CAN2_TXMIR1_STID_MASK CH32V_CAN1_TXMIR1_STID_MASK
#define CH32V_CAN2_TXMIR1_EXID    CH32V_CAN1_TXMIR1_EXID
#define CH32V_CAN2_TXMIR1_EXID_MASK CH32V_CAN1_TXMIR1_EXID_MASK
#define CH32V_CAN2_TXMIR1_IDE     CH32V_CAN1_TXMIR1_IDE
#define CH32V_CAN2_TXMIR1_RTR     CH32V_CAN1_TXMIR1_RTR
#define CH32V_CAN2_TXMIR1_TXRQ    CH32V_CAN1_TXMIR1_TXRQ
#define CH32V_CAN2_TXMDTR1_OFFSET CH32V_CAN1_TXMDTR1_OFFSET
#define CH32V_CAN2_TXMDTR1        CH32V_CAN1_TXMDTR1
#define CH32V_CAN2_TXMDTR1_TIME   CH32V_CAN1_TXMDTR1_TIME
#define CH32V_CAN2_TXMDTR1_TIME_MASK CH32V_CAN1_TXMDTR1_TIME_MASK
#define CH32V_CAN2_TXMDTR1_TGT    CH32V_CAN1_TXMDTR1_TGT
#define CH32V_CAN2_TXMDTR1_DLC    CH32V_CAN1_TXMDTR1_DLC
#define CH32V_CAN2_TXMDTR1_DLC_MASK CH32V_CAN1_TXMDTR1_DLC_MASK
#define CH32V_CAN2_TXMDLR1_OFFSET CH32V_CAN1_TXMDLR1_OFFSET
#define CH32V_CAN2_TXMDLR1        CH32V_CAN1_TXMDLR1
#define CH32V_CAN2_TXMDLR1_DATA3  CH32V_CAN1_TXMDLR1_DATA3
#define CH32V_CAN2_TXMDLR1_DATA3_MASK CH32V_CAN1_TXMDLR1_DATA3_MASK
#define CH32V_CAN2_TXMDLR1_DATA2  CH32V_CAN1_TXMDLR1_DATA2
#define CH32V_CAN2_TXMDLR1_DATA2_MASK CH32V_CAN1_TXMDLR1_DATA2_MASK
#define CH32V_CAN2_TXMDLR1_DATA1  CH32V_CAN1_TXMDLR1_DATA1
#define CH32V_CAN2_TXMDLR1_DATA1_MASK CH32V_CAN1_TXMDLR1_DATA1_MASK
#define CH32V_CAN2_TXMDLR1_DATA0  CH32V_CAN1_TXMDLR1_DATA0
#define CH32V_CAN2_TXMDLR1_DATA0_MASK CH32V_CAN1_TXMDLR1_DATA0_MASK
#define CH32V_CAN2_TXMDHR1_OFFSET CH32V_CAN1_TXMDHR1_OFFSET
#define CH32V_CAN2_TXMDHR1        CH32V_CAN1_TXMDHR1
#define CH32V_CAN2_TXMDHR1_DATA7  CH32V_CAN1_TXMDHR1_DATA7
#define CH32V_CAN2_TXMDHR1_DATA7_MASK CH32V_CAN1_TXMDHR1_DATA7_MASK
#define CH32V_CAN2_TXMDHR1_DATA6  CH32V_CAN1_TXMDHR1_DATA6
#define CH32V_CAN2_TXMDHR1_DATA6_MASK CH32V_CAN1_TXMDHR1_DATA6_MASK
#define CH32V_CAN2_TXMDHR1_DATA5  CH32V_CAN1_TXMDHR1_DATA5
#define CH32V_CAN2_TXMDHR1_DATA5_MASK CH32V_CAN1_TXMDHR1_DATA5_MASK
#define CH32V_CAN2_TXMDHR1_DATA4  CH32V_CAN1_TXMDHR1_DATA4
#define CH32V_CAN2_TXMDHR1_DATA4_MASK CH32V_CAN1_TXMDHR1_DATA4_MASK
#define CH32V_CAN2_TXMIR2_OFFSET  CH32V_CAN1_TXMIR2_OFFSET
#define CH32V_CAN2_TXMIR2         CH32V_CAN1_TXMIR2
#define CH32V_CAN2_TXMIR2_STID    CH32V_CAN1_TXMIR2_STID
#define CH32V_CAN2_TXMIR2_STID_MASK CH32V_CAN1_TXMIR2_STID_MASK
#define CH32V_CAN2_TXMIR2_EXID    CH32V_CAN1_TXMIR2_EXID
#define CH32V_CAN2_TXMIR2_EXID_MASK CH32V_CAN1_TXMIR2_EXID_MASK
#define CH32V_CAN2_TXMIR2_IDE     CH32V_CAN1_TXMIR2_IDE
#define CH32V_CAN2_TXMIR2_RTR     CH32V_CAN1_TXMIR2_RTR
#define CH32V_CAN2_TXMIR2_TXRQ    CH32V_CAN1_TXMIR2_TXRQ
#define CH32V_CAN2_TXMDTR2_OFFSET CH32V_CAN1_TXMDTR2_OFFSET
#define CH32V_CAN2_TXMDTR2        CH32V_CAN1_TXMDTR2
#define CH32V_CAN2_TXMDTR2_TIME   CH32V_CAN1_TXMDTR2_TIME
#define CH32V_CAN2_TXMDTR2_TIME_MASK CH32V_CAN1_TXMDTR2_TIME_MASK
#define CH32V_CAN2_TXMDTR2_TGT    CH32V_CAN1_TXMDTR2_TGT
#define CH32V_CAN2_TXMDTR2_DLC    CH32V_CAN1_TXMDTR2_DLC
#define CH32V_CAN2_TXMDTR2_DLC_MASK CH32V_CAN1_TXMDTR2_DLC_MASK
#define CH32V_CAN2_TXMDLR2_OFFSET CH32V_CAN1_TXMDLR2_OFFSET
#define CH32V_CAN2_TXMDLR2        CH32V_CAN1_TXMDLR2
#define CH32V_CAN2_TXMDLR2_DATA3  CH32V_CAN1_TXMDLR2_DATA3
#define CH32V_CAN2_TXMDLR2_DATA3_MASK CH32V_CAN1_TXMDLR2_DATA3_MASK
#define CH32V_CAN2_TXMDLR2_DATA2  CH32V_CAN1_TXMDLR2_DATA2
#define CH32V_CAN2_TXMDLR2_DATA2_MASK CH32V_CAN1_TXMDLR2_DATA2_MASK
#define CH32V_CAN2_TXMDLR2_DATA1  CH32V_CAN1_TXMDLR2_DATA1
#define CH32V_CAN2_TXMDLR2_DATA1_MASK CH32V_CAN1_TXMDLR2_DATA1_MASK
#define CH32V_CAN2_TXMDLR2_DATA0  CH32V_CAN1_TXMDLR2_DATA0
#define CH32V_CAN2_TXMDLR2_DATA0_MASK CH32V_CAN1_TXMDLR2_DATA0_MASK
#define CH32V_CAN2_TXMDHR2_OFFSET CH32V_CAN1_TXMDHR2_OFFSET
#define CH32V_CAN2_TXMDHR2        CH32V_CAN1_TXMDHR2
#define CH32V_CAN2_TXMDHR2_DATA7  CH32V_CAN1_TXMDHR2_DATA7
#define CH32V_CAN2_TXMDHR2_DATA7_MASK CH32V_CAN1_TXMDHR2_DATA7_MASK
#define CH32V_CAN2_TXMDHR2_DATA6  CH32V_CAN1_TXMDHR2_DATA6
#define CH32V_CAN2_TXMDHR2_DATA6_MASK CH32V_CAN1_TXMDHR2_DATA6_MASK
#define CH32V_CAN2_TXMDHR2_DATA5  CH32V_CAN1_TXMDHR2_DATA5
#define CH32V_CAN2_TXMDHR2_DATA5_MASK CH32V_CAN1_TXMDHR2_DATA5_MASK
#define CH32V_CAN2_TXMDHR2_DATA4  CH32V_CAN1_TXMDHR2_DATA4
#define CH32V_CAN2_TXMDHR2_DATA4_MASK CH32V_CAN1_TXMDHR2_DATA4_MASK
#define CH32V_CAN2_RXMIR0_OFFSET  CH32V_CAN1_RXMIR0_OFFSET
#define CH32V_CAN2_RXMIR0         CH32V_CAN1_RXMIR0
#define CH32V_CAN2_RXMIR0_STID    CH32V_CAN1_RXMIR0_STID
#define CH32V_CAN2_RXMIR0_STID_MASK CH32V_CAN1_RXMIR0_STID_MASK
#define CH32V_CAN2_RXMIR0_EXID    CH32V_CAN1_RXMIR0_EXID
#define CH32V_CAN2_RXMIR0_EXID_MASK CH32V_CAN1_RXMIR0_EXID_MASK
#define CH32V_CAN2_RXMIR0_IDE     CH32V_CAN1_RXMIR0_IDE
#define CH32V_CAN2_RXMIR0_RTR     CH32V_CAN1_RXMIR0_RTR
#define CH32V_CAN2_RXMDTR0_OFFSET CH32V_CAN1_RXMDTR0_OFFSET
#define CH32V_CAN2_RXMDTR0        CH32V_CAN1_RXMDTR0
#define CH32V_CAN2_RXMDTR0_TIME   CH32V_CAN1_RXMDTR0_TIME
#define CH32V_CAN2_RXMDTR0_TIME_MASK CH32V_CAN1_RXMDTR0_TIME_MASK
#define CH32V_CAN2_RXMDTR0_FMI    CH32V_CAN1_RXMDTR0_FMI
#define CH32V_CAN2_RXMDTR0_FMI_MASK CH32V_CAN1_RXMDTR0_FMI_MASK
#define CH32V_CAN2_RXMDTR0_DLC    CH32V_CAN1_RXMDTR0_DLC
#define CH32V_CAN2_RXMDTR0_DLC_MASK CH32V_CAN1_RXMDTR0_DLC_MASK
#define CH32V_CAN2_RXMDLR0_OFFSET CH32V_CAN1_RXMDLR0_OFFSET
#define CH32V_CAN2_RXMDLR0        CH32V_CAN1_RXMDLR0
#define CH32V_CAN2_RXMDLR0_DATA3  CH32V_CAN1_RXMDLR0_DATA3
#define CH32V_CAN2_RXMDLR0_DATA3_MASK CH32V_CAN1_RXMDLR0_DATA3_MASK
#define CH32V_CAN2_RXMDLR0_DATA2  CH32V_CAN1_RXMDLR0_DATA2
#define CH32V_CAN2_RXMDLR0_DATA2_MASK CH32V_CAN1_RXMDLR0_DATA2_MASK
#define CH32V_CAN2_RXMDLR0_DATA1  CH32V_CAN1_RXMDLR0_DATA1
#define CH32V_CAN2_RXMDLR0_DATA1_MASK CH32V_CAN1_RXMDLR0_DATA1_MASK
#define CH32V_CAN2_RXMDLR0_DATA0  CH32V_CAN1_RXMDLR0_DATA0
#define CH32V_CAN2_RXMDLR0_DATA0_MASK CH32V_CAN1_RXMDLR0_DATA0_MASK
#define CH32V_CAN2_RXMDHR0_OFFSET CH32V_CAN1_RXMDHR0_OFFSET
#define CH32V_CAN2_RXMDHR0        CH32V_CAN1_RXMDHR0
#define CH32V_CAN2_RXMDHR0_DATA7  CH32V_CAN1_RXMDHR0_DATA7
#define CH32V_CAN2_RXMDHR0_DATA7_MASK CH32V_CAN1_RXMDHR0_DATA7_MASK
#define CH32V_CAN2_RXMDHR0_DATA6  CH32V_CAN1_RXMDHR0_DATA6
#define CH32V_CAN2_RXMDHR0_DATA6_MASK CH32V_CAN1_RXMDHR0_DATA6_MASK
#define CH32V_CAN2_RXMDHR0_DATA5  CH32V_CAN1_RXMDHR0_DATA5
#define CH32V_CAN2_RXMDHR0_DATA5_MASK CH32V_CAN1_RXMDHR0_DATA5_MASK
#define CH32V_CAN2_RXMDHR0_DATA4  CH32V_CAN1_RXMDHR0_DATA4
#define CH32V_CAN2_RXMDHR0_DATA4_MASK CH32V_CAN1_RXMDHR0_DATA4_MASK
#define CH32V_CAN2_RXMIR1_OFFSET  CH32V_CAN1_RXMIR1_OFFSET
#define CH32V_CAN2_RXMIR1         CH32V_CAN1_RXMIR1
#define CH32V_CAN2_RXMIR1_STID    CH32V_CAN1_RXMIR1_STID
#define CH32V_CAN2_RXMIR1_STID_MASK CH32V_CAN1_RXMIR1_STID_MASK
#define CH32V_CAN2_RXMIR1_EXID    CH32V_CAN1_RXMIR1_EXID
#define CH32V_CAN2_RXMIR1_EXID_MASK CH32V_CAN1_RXMIR1_EXID_MASK
#define CH32V_CAN2_RXMIR1_IDE     CH32V_CAN1_RXMIR1_IDE
#define CH32V_CAN2_RXMIR1_RTR     CH32V_CAN1_RXMIR1_RTR
#define CH32V_CAN2_RXMDTR1_OFFSET CH32V_CAN1_RXMDTR1_OFFSET
#define CH32V_CAN2_RXMDTR1        CH32V_CAN1_RXMDTR1
#define CH32V_CAN2_RXMDTR1_TIME   CH32V_CAN1_RXMDTR1_TIME
#define CH32V_CAN2_RXMDTR1_TIME_MASK CH32V_CAN1_RXMDTR1_TIME_MASK
#define CH32V_CAN2_RXMDTR1_FMI    CH32V_CAN1_RXMDTR1_FMI
#define CH32V_CAN2_RXMDTR1_FMI_MASK CH32V_CAN1_RXMDTR1_FMI_MASK
#define CH32V_CAN2_RXMDTR1_DLC    CH32V_CAN1_RXMDTR1_DLC
#define CH32V_CAN2_RXMDTR1_DLC_MASK CH32V_CAN1_RXMDTR1_DLC_MASK
#define CH32V_CAN2_RXMDLR1_OFFSET CH32V_CAN1_RXMDLR1_OFFSET
#define CH32V_CAN2_RXMDLR1        CH32V_CAN1_RXMDLR1
#define CH32V_CAN2_RXMDLR1_DATA3  CH32V_CAN1_RXMDLR1_DATA3
#define CH32V_CAN2_RXMDLR1_DATA3_MASK CH32V_CAN1_RXMDLR1_DATA3_MASK
#define CH32V_CAN2_RXMDLR1_DATA2  CH32V_CAN1_RXMDLR1_DATA2
#define CH32V_CAN2_RXMDLR1_DATA2_MASK CH32V_CAN1_RXMDLR1_DATA2_MASK
#define CH32V_CAN2_RXMDLR1_DATA1  CH32V_CAN1_RXMDLR1_DATA1
#define CH32V_CAN2_RXMDLR1_DATA1_MASK CH32V_CAN1_RXMDLR1_DATA1_MASK
#define CH32V_CAN2_RXMDLR1_DATA0  CH32V_CAN1_RXMDLR1_DATA0
#define CH32V_CAN2_RXMDLR1_DATA0_MASK CH32V_CAN1_RXMDLR1_DATA0_MASK
#define CH32V_CAN2_RXMDHR1_OFFSET CH32V_CAN1_RXMDHR1_OFFSET
#define CH32V_CAN2_RXMDHR1        CH32V_CAN1_RXMDHR1
#define CH32V_CAN2_RXMDHR1_DATA7  CH32V_CAN1_RXMDHR1_DATA7
#define CH32V_CAN2_RXMDHR1_DATA7_MASK CH32V_CAN1_RXMDHR1_DATA7_MASK
#define CH32V_CAN2_RXMDHR1_DATA6  CH32V_CAN1_RXMDHR1_DATA6
#define CH32V_CAN2_RXMDHR1_DATA6_MASK CH32V_CAN1_RXMDHR1_DATA6_MASK
#define CH32V_CAN2_RXMDHR1_DATA5  CH32V_CAN1_RXMDHR1_DATA5
#define CH32V_CAN2_RXMDHR1_DATA5_MASK CH32V_CAN1_RXMDHR1_DATA5_MASK
#define CH32V_CAN2_RXMDHR1_DATA4  CH32V_CAN1_RXMDHR1_DATA4
#define CH32V_CAN2_RXMDHR1_DATA4_MASK CH32V_CAN1_RXMDHR1_DATA4_MASK
#define CH32V_CAN2_FCTLR_OFFSET   CH32V_CAN1_FCTLR_OFFSET
#define CH32V_CAN2_FCTLR          CH32V_CAN1_FCTLR
#define CH32V_CAN2_FCTLR_FINIT    CH32V_CAN1_FCTLR_FINIT
#define CH32V_CAN2_FCTLR_CAN2SB   CH32V_CAN1_FCTLR_CAN2SB
#define CH32V_CAN2_FCTLR_CAN2SB_MASK CH32V_CAN1_FCTLR_CAN2SB_MASK
#define CH32V_CAN2_FMCFGR_OFFSET  CH32V_CAN1_FMCFGR_OFFSET
#define CH32V_CAN2_FMCFGR         CH32V_CAN1_FMCFGR
#define CH32V_CAN2_FMCFGR_FBM0    CH32V_CAN1_FMCFGR_FBM0
#define CH32V_CAN2_FMCFGR_FBM1    CH32V_CAN1_FMCFGR_FBM1
#define CH32V_CAN2_FMCFGR_FBM2    CH32V_CAN1_FMCFGR_FBM2
#define CH32V_CAN2_FMCFGR_FBM3    CH32V_CAN1_FMCFGR_FBM3
#define CH32V_CAN2_FMCFGR_FBM4    CH32V_CAN1_FMCFGR_FBM4
#define CH32V_CAN2_FMCFGR_FBM5    CH32V_CAN1_FMCFGR_FBM5
#define CH32V_CAN2_FMCFGR_FBM6    CH32V_CAN1_FMCFGR_FBM6
#define CH32V_CAN2_FMCFGR_FBM7    CH32V_CAN1_FMCFGR_FBM7
#define CH32V_CAN2_FMCFGR_FBM8    CH32V_CAN1_FMCFGR_FBM8
#define CH32V_CAN2_FMCFGR_FBM9    CH32V_CAN1_FMCFGR_FBM9
#define CH32V_CAN2_FMCFGR_FBM10   CH32V_CAN1_FMCFGR_FBM10
#define CH32V_CAN2_FMCFGR_FBM11   CH32V_CAN1_FMCFGR_FBM11
#define CH32V_CAN2_FMCFGR_FBM12   CH32V_CAN1_FMCFGR_FBM12
#define CH32V_CAN2_FMCFGR_FBM13   CH32V_CAN1_FMCFGR_FBM13
#define CH32V_CAN2_FSCFGR_OFFSET  CH32V_CAN1_FSCFGR_OFFSET
#define CH32V_CAN2_FSCFGR         CH32V_CAN1_FSCFGR
#define CH32V_CAN2_FSCFGR_FSC0    CH32V_CAN1_FSCFGR_FSC0
#define CH32V_CAN2_FSCFGR_FSC1    CH32V_CAN1_FSCFGR_FSC1
#define CH32V_CAN2_FSCFGR_FSC2    CH32V_CAN1_FSCFGR_FSC2
#define CH32V_CAN2_FSCFGR_FSC3    CH32V_CAN1_FSCFGR_FSC3
#define CH32V_CAN2_FSCFGR_FSC4    CH32V_CAN1_FSCFGR_FSC4
#define CH32V_CAN2_FSCFGR_FSC5    CH32V_CAN1_FSCFGR_FSC5
#define CH32V_CAN2_FSCFGR_FSC6    CH32V_CAN1_FSCFGR_FSC6
#define CH32V_CAN2_FSCFGR_FSC7    CH32V_CAN1_FSCFGR_FSC7
#define CH32V_CAN2_FSCFGR_FSC8    CH32V_CAN1_FSCFGR_FSC8
#define CH32V_CAN2_FSCFGR_FSC9    CH32V_CAN1_FSCFGR_FSC9
#define CH32V_CAN2_FSCFGR_FSC10   CH32V_CAN1_FSCFGR_FSC10
#define CH32V_CAN2_FSCFGR_FSC11   CH32V_CAN1_FSCFGR_FSC11
#define CH32V_CAN2_FSCFGR_FSC12   CH32V_CAN1_FSCFGR_FSC12
#define CH32V_CAN2_FSCFGR_FSC13   CH32V_CAN1_FSCFGR_FSC13
#define CH32V_CAN2_FAFIFOR_OFFSET CH32V_CAN1_FAFIFOR_OFFSET
#define CH32V_CAN2_FAFIFOR        CH32V_CAN1_FAFIFOR
#define CH32V_CAN2_FAFIFOR_FFA0   CH32V_CAN1_FAFIFOR_FFA0
#define CH32V_CAN2_FAFIFOR_FFA1   CH32V_CAN1_FAFIFOR_FFA1
#define CH32V_CAN2_FAFIFOR_FFA2   CH32V_CAN1_FAFIFOR_FFA2
#define CH32V_CAN2_FAFIFOR_FFA3   CH32V_CAN1_FAFIFOR_FFA3
#define CH32V_CAN2_FAFIFOR_FFA4   CH32V_CAN1_FAFIFOR_FFA4
#define CH32V_CAN2_FAFIFOR_FFA5   CH32V_CAN1_FAFIFOR_FFA5
#define CH32V_CAN2_FAFIFOR_FFA6   CH32V_CAN1_FAFIFOR_FFA6
#define CH32V_CAN2_FAFIFOR_FFA7   CH32V_CAN1_FAFIFOR_FFA7
#define CH32V_CAN2_FAFIFOR_FFA8   CH32V_CAN1_FAFIFOR_FFA8
#define CH32V_CAN2_FAFIFOR_FFA9   CH32V_CAN1_FAFIFOR_FFA9
#define CH32V_CAN2_FAFIFOR_FFA10  CH32V_CAN1_FAFIFOR_FFA10
#define CH32V_CAN2_FAFIFOR_FFA11  CH32V_CAN1_FAFIFOR_FFA11
#define CH32V_CAN2_FAFIFOR_FFA12  CH32V_CAN1_FAFIFOR_FFA12
#define CH32V_CAN2_FAFIFOR_FFA13  CH32V_CAN1_FAFIFOR_FFA13
#define CH32V_CAN2_FWR_OFFSET     CH32V_CAN1_FWR_OFFSET
#define CH32V_CAN2_FWR            CH32V_CAN1_FWR
#define CH32V_CAN2_FWR_FACT0      CH32V_CAN1_FWR_FACT0
#define CH32V_CAN2_FWR_FACT1      CH32V_CAN1_FWR_FACT1
#define CH32V_CAN2_FWR_FACT2      CH32V_CAN1_FWR_FACT2
#define CH32V_CAN2_FWR_FACT3      CH32V_CAN1_FWR_FACT3
#define CH32V_CAN2_FWR_FACT4      CH32V_CAN1_FWR_FACT4
#define CH32V_CAN2_FWR_FACT5      CH32V_CAN1_FWR_FACT5
#define CH32V_CAN2_FWR_FACT6      CH32V_CAN1_FWR_FACT6
#define CH32V_CAN2_FWR_FACT7      CH32V_CAN1_FWR_FACT7
#define CH32V_CAN2_FWR_FACT8      CH32V_CAN1_FWR_FACT8
#define CH32V_CAN2_FWR_FACT9      CH32V_CAN1_FWR_FACT9
#define CH32V_CAN2_FWR_FACT10     CH32V_CAN1_FWR_FACT10
#define CH32V_CAN2_FWR_FACT11     CH32V_CAN1_FWR_FACT11
#define CH32V_CAN2_FWR_FACT12     CH32V_CAN1_FWR_FACT12
#define CH32V_CAN2_FWR_FACT13     CH32V_CAN1_FWR_FACT13
#define CH32V_CAN2_F0R1_OFFSET    CH32V_CAN1_F0R1_OFFSET
#define CH32V_CAN2_F0R1           CH32V_CAN1_F0R1
#define CH32V_CAN2_F0R1_FB0       CH32V_CAN1_F0R1_FB0
#define CH32V_CAN2_F0R1_FB1       CH32V_CAN1_F0R1_FB1
#define CH32V_CAN2_F0R1_FB2       CH32V_CAN1_F0R1_FB2
#define CH32V_CAN2_F0R1_FB3       CH32V_CAN1_F0R1_FB3
#define CH32V_CAN2_F0R1_FB4       CH32V_CAN1_F0R1_FB4
#define CH32V_CAN2_F0R1_FB5       CH32V_CAN1_F0R1_FB5
#define CH32V_CAN2_F0R1_FB6       CH32V_CAN1_F0R1_FB6
#define CH32V_CAN2_F0R1_FB7       CH32V_CAN1_F0R1_FB7
#define CH32V_CAN2_F0R1_FB8       CH32V_CAN1_F0R1_FB8
#define CH32V_CAN2_F0R1_FB9       CH32V_CAN1_F0R1_FB9
#define CH32V_CAN2_F0R1_FB10      CH32V_CAN1_F0R1_FB10
#define CH32V_CAN2_F0R1_FB11      CH32V_CAN1_F0R1_FB11
#define CH32V_CAN2_F0R1_FB12      CH32V_CAN1_F0R1_FB12
#define CH32V_CAN2_F0R1_FB13      CH32V_CAN1_F0R1_FB13
#define CH32V_CAN2_F0R1_FB14      CH32V_CAN1_F0R1_FB14
#define CH32V_CAN2_F0R1_FB15      CH32V_CAN1_F0R1_FB15
#define CH32V_CAN2_F0R1_FB16      CH32V_CAN1_F0R1_FB16
#define CH32V_CAN2_F0R1_FB17      CH32V_CAN1_F0R1_FB17
#define CH32V_CAN2_F0R1_FB18      CH32V_CAN1_F0R1_FB18
#define CH32V_CAN2_F0R1_FB19      CH32V_CAN1_F0R1_FB19
#define CH32V_CAN2_F0R1_FB20      CH32V_CAN1_F0R1_FB20
#define CH32V_CAN2_F0R1_FB21      CH32V_CAN1_F0R1_FB21
#define CH32V_CAN2_F0R1_FB22      CH32V_CAN1_F0R1_FB22
#define CH32V_CAN2_F0R1_FB23      CH32V_CAN1_F0R1_FB23
#define CH32V_CAN2_F0R1_FB24      CH32V_CAN1_F0R1_FB24
#define CH32V_CAN2_F0R1_FB25      CH32V_CAN1_F0R1_FB25
#define CH32V_CAN2_F0R1_FB26      CH32V_CAN1_F0R1_FB26
#define CH32V_CAN2_F0R1_FB27      CH32V_CAN1_F0R1_FB27
#define CH32V_CAN2_F0R1_FB28      CH32V_CAN1_F0R1_FB28
#define CH32V_CAN2_F0R1_FB29      CH32V_CAN1_F0R1_FB29
#define CH32V_CAN2_F0R1_FB30      CH32V_CAN1_F0R1_FB30
#define CH32V_CAN2_F0R1_FB31      CH32V_CAN1_F0R1_FB31
#define CH32V_CAN2_F0R2_OFFSET    CH32V_CAN1_F0R2_OFFSET
#define CH32V_CAN2_F0R2           CH32V_CAN1_F0R2
#define CH32V_CAN2_F0R2_FB0       CH32V_CAN1_F0R2_FB0
#define CH32V_CAN2_F0R2_FB1       CH32V_CAN1_F0R2_FB1
#define CH32V_CAN2_F0R2_FB2       CH32V_CAN1_F0R2_FB2
#define CH32V_CAN2_F0R2_FB3       CH32V_CAN1_F0R2_FB3
#define CH32V_CAN2_F0R2_FB4       CH32V_CAN1_F0R2_FB4
#define CH32V_CAN2_F0R2_FB5       CH32V_CAN1_F0R2_FB5
#define CH32V_CAN2_F0R2_FB6       CH32V_CAN1_F0R2_FB6
#define CH32V_CAN2_F0R2_FB7       CH32V_CAN1_F0R2_FB7
#define CH32V_CAN2_F0R2_FB8       CH32V_CAN1_F0R2_FB8
#define CH32V_CAN2_F0R2_FB9       CH32V_CAN1_F0R2_FB9
#define CH32V_CAN2_F0R2_FB10      CH32V_CAN1_F0R2_FB10
#define CH32V_CAN2_F0R2_FB11      CH32V_CAN1_F0R2_FB11
#define CH32V_CAN2_F0R2_FB12      CH32V_CAN1_F0R2_FB12
#define CH32V_CAN2_F0R2_FB13      CH32V_CAN1_F0R2_FB13
#define CH32V_CAN2_F0R2_FB14      CH32V_CAN1_F0R2_FB14
#define CH32V_CAN2_F0R2_FB15      CH32V_CAN1_F0R2_FB15
#define CH32V_CAN2_F0R2_FB16      CH32V_CAN1_F0R2_FB16
#define CH32V_CAN2_F0R2_FB17      CH32V_CAN1_F0R2_FB17
#define CH32V_CAN2_F0R2_FB18      CH32V_CAN1_F0R2_FB18
#define CH32V_CAN2_F0R2_FB19      CH32V_CAN1_F0R2_FB19
#define CH32V_CAN2_F0R2_FB20      CH32V_CAN1_F0R2_FB20
#define CH32V_CAN2_F0R2_FB21      CH32V_CAN1_F0R2_FB21
#define CH32V_CAN2_F0R2_FB22      CH32V_CAN1_F0R2_FB22
#define CH32V_CAN2_F0R2_FB23      CH32V_CAN1_F0R2_FB23
#define CH32V_CAN2_F0R2_FB24      CH32V_CAN1_F0R2_FB24
#define CH32V_CAN2_F0R2_FB25      CH32V_CAN1_F0R2_FB25
#define CH32V_CAN2_F0R2_FB26      CH32V_CAN1_F0R2_FB26
#define CH32V_CAN2_F0R2_FB27      CH32V_CAN1_F0R2_FB27
#define CH32V_CAN2_F0R2_FB28      CH32V_CAN1_F0R2_FB28
#define CH32V_CAN2_F0R2_FB29      CH32V_CAN1_F0R2_FB29
#define CH32V_CAN2_F0R2_FB30      CH32V_CAN1_F0R2_FB30
#define CH32V_CAN2_F0R2_FB31      CH32V_CAN1_F0R2_FB31
#define CH32V_CAN2_F1R1_OFFSET    CH32V_CAN1_F1R1_OFFSET
#define CH32V_CAN2_F1R1           CH32V_CAN1_F1R1
#define CH32V_CAN2_F1R1_FB0       CH32V_CAN1_F1R1_FB0
#define CH32V_CAN2_F1R1_FB1       CH32V_CAN1_F1R1_FB1
#define CH32V_CAN2_F1R1_FB2       CH32V_CAN1_F1R1_FB2
#define CH32V_CAN2_F1R1_FB3       CH32V_CAN1_F1R1_FB3
#define CH32V_CAN2_F1R1_FB4       CH32V_CAN1_F1R1_FB4
#define CH32V_CAN2_F1R1_FB5       CH32V_CAN1_F1R1_FB5
#define CH32V_CAN2_F1R1_FB6       CH32V_CAN1_F1R1_FB6
#define CH32V_CAN2_F1R1_FB7       CH32V_CAN1_F1R1_FB7
#define CH32V_CAN2_F1R1_FB8       CH32V_CAN1_F1R1_FB8
#define CH32V_CAN2_F1R1_FB9       CH32V_CAN1_F1R1_FB9
#define CH32V_CAN2_F1R1_FB10      CH32V_CAN1_F1R1_FB10
#define CH32V_CAN2_F1R1_FB11      CH32V_CAN1_F1R1_FB11
#define CH32V_CAN2_F1R1_FB12      CH32V_CAN1_F1R1_FB12
#define CH32V_CAN2_F1R1_FB13      CH32V_CAN1_F1R1_FB13
#define CH32V_CAN2_F1R1_FB14      CH32V_CAN1_F1R1_FB14
#define CH32V_CAN2_F1R1_FB15      CH32V_CAN1_F1R1_FB15
#define CH32V_CAN2_F1R1_FB16      CH32V_CAN1_F1R1_FB16
#define CH32V_CAN2_F1R1_FB17      CH32V_CAN1_F1R1_FB17
#define CH32V_CAN2_F1R1_FB18      CH32V_CAN1_F1R1_FB18
#define CH32V_CAN2_F1R1_FB19      CH32V_CAN1_F1R1_FB19
#define CH32V_CAN2_F1R1_FB20      CH32V_CAN1_F1R1_FB20
#define CH32V_CAN2_F1R1_FB21      CH32V_CAN1_F1R1_FB21
#define CH32V_CAN2_F1R1_FB22      CH32V_CAN1_F1R1_FB22
#define CH32V_CAN2_F1R1_FB23      CH32V_CAN1_F1R1_FB23
#define CH32V_CAN2_F1R1_FB24      CH32V_CAN1_F1R1_FB24
#define CH32V_CAN2_F1R1_FB25      CH32V_CAN1_F1R1_FB25
#define CH32V_CAN2_F1R1_FB26      CH32V_CAN1_F1R1_FB26
#define CH32V_CAN2_F1R1_FB27      CH32V_CAN1_F1R1_FB27
#define CH32V_CAN2_F1R1_FB28      CH32V_CAN1_F1R1_FB28
#define CH32V_CAN2_F1R1_FB29      CH32V_CAN1_F1R1_FB29
#define CH32V_CAN2_F1R1_FB30      CH32V_CAN1_F1R1_FB30
#define CH32V_CAN2_F1R1_FB31      CH32V_CAN1_F1R1_FB31
#define CH32V_CAN2_F1R2_OFFSET    CH32V_CAN1_F1R2_OFFSET
#define CH32V_CAN2_F1R2           CH32V_CAN1_F1R2
#define CH32V_CAN2_F1R2_FB0       CH32V_CAN1_F1R2_FB0
#define CH32V_CAN2_F1R2_FB1       CH32V_CAN1_F1R2_FB1
#define CH32V_CAN2_F1R2_FB2       CH32V_CAN1_F1R2_FB2
#define CH32V_CAN2_F1R2_FB3       CH32V_CAN1_F1R2_FB3
#define CH32V_CAN2_F1R2_FB4       CH32V_CAN1_F1R2_FB4
#define CH32V_CAN2_F1R2_FB5       CH32V_CAN1_F1R2_FB5
#define CH32V_CAN2_F1R2_FB6       CH32V_CAN1_F1R2_FB6
#define CH32V_CAN2_F1R2_FB7       CH32V_CAN1_F1R2_FB7
#define CH32V_CAN2_F1R2_FB8       CH32V_CAN1_F1R2_FB8
#define CH32V_CAN2_F1R2_FB9       CH32V_CAN1_F1R2_FB9
#define CH32V_CAN2_F1R2_FB10      CH32V_CAN1_F1R2_FB10
#define CH32V_CAN2_F1R2_FB11      CH32V_CAN1_F1R2_FB11
#define CH32V_CAN2_F1R2_FB12      CH32V_CAN1_F1R2_FB12
#define CH32V_CAN2_F1R2_FB13      CH32V_CAN1_F1R2_FB13
#define CH32V_CAN2_F1R2_FB14      CH32V_CAN1_F1R2_FB14
#define CH32V_CAN2_F1R2_FB15      CH32V_CAN1_F1R2_FB15
#define CH32V_CAN2_F1R2_FB16      CH32V_CAN1_F1R2_FB16
#define CH32V_CAN2_F1R2_FB17      CH32V_CAN1_F1R2_FB17
#define CH32V_CAN2_F1R2_FB18      CH32V_CAN1_F1R2_FB18
#define CH32V_CAN2_F1R2_FB19      CH32V_CAN1_F1R2_FB19
#define CH32V_CAN2_F1R2_FB20      CH32V_CAN1_F1R2_FB20
#define CH32V_CAN2_F1R2_FB21      CH32V_CAN1_F1R2_FB21
#define CH32V_CAN2_F1R2_FB22      CH32V_CAN1_F1R2_FB22
#define CH32V_CAN2_F1R2_FB23      CH32V_CAN1_F1R2_FB23
#define CH32V_CAN2_F1R2_FB24      CH32V_CAN1_F1R2_FB24
#define CH32V_CAN2_F1R2_FB25      CH32V_CAN1_F1R2_FB25
#define CH32V_CAN2_F1R2_FB26      CH32V_CAN1_F1R2_FB26
#define CH32V_CAN2_F1R2_FB27      CH32V_CAN1_F1R2_FB27
#define CH32V_CAN2_F1R2_FB28      CH32V_CAN1_F1R2_FB28
#define CH32V_CAN2_F1R2_FB29      CH32V_CAN1_F1R2_FB29
#define CH32V_CAN2_F1R2_FB30      CH32V_CAN1_F1R2_FB30
#define CH32V_CAN2_F1R2_FB31      CH32V_CAN1_F1R2_FB31
#define CH32V_CAN2_F2R1_OFFSET    CH32V_CAN1_F2R1_OFFSET
#define CH32V_CAN2_F2R1           CH32V_CAN1_F2R1
#define CH32V_CAN2_F2R1_FB0       CH32V_CAN1_F2R1_FB0
#define CH32V_CAN2_F2R1_FB1       CH32V_CAN1_F2R1_FB1
#define CH32V_CAN2_F2R1_FB2       CH32V_CAN1_F2R1_FB2
#define CH32V_CAN2_F2R1_FB3       CH32V_CAN1_F2R1_FB3
#define CH32V_CAN2_F2R1_FB4       CH32V_CAN1_F2R1_FB4
#define CH32V_CAN2_F2R1_FB5       CH32V_CAN1_F2R1_FB5
#define CH32V_CAN2_F2R1_FB6       CH32V_CAN1_F2R1_FB6
#define CH32V_CAN2_F2R1_FB7       CH32V_CAN1_F2R1_FB7
#define CH32V_CAN2_F2R1_FB8       CH32V_CAN1_F2R1_FB8
#define CH32V_CAN2_F2R1_FB9       CH32V_CAN1_F2R1_FB9
#define CH32V_CAN2_F2R1_FB10      CH32V_CAN1_F2R1_FB10
#define CH32V_CAN2_F2R1_FB11      CH32V_CAN1_F2R1_FB11
#define CH32V_CAN2_F2R1_FB12      CH32V_CAN1_F2R1_FB12
#define CH32V_CAN2_F2R1_FB13      CH32V_CAN1_F2R1_FB13
#define CH32V_CAN2_F2R1_FB14      CH32V_CAN1_F2R1_FB14
#define CH32V_CAN2_F2R1_FB15      CH32V_CAN1_F2R1_FB15
#define CH32V_CAN2_F2R1_FB16      CH32V_CAN1_F2R1_FB16
#define CH32V_CAN2_F2R1_FB17      CH32V_CAN1_F2R1_FB17
#define CH32V_CAN2_F2R1_FB18      CH32V_CAN1_F2R1_FB18
#define CH32V_CAN2_F2R1_FB19      CH32V_CAN1_F2R1_FB19
#define CH32V_CAN2_F2R1_FB20      CH32V_CAN1_F2R1_FB20
#define CH32V_CAN2_F2R1_FB21      CH32V_CAN1_F2R1_FB21
#define CH32V_CAN2_F2R1_FB22      CH32V_CAN1_F2R1_FB22
#define CH32V_CAN2_F2R1_FB23      CH32V_CAN1_F2R1_FB23
#define CH32V_CAN2_F2R1_FB24      CH32V_CAN1_F2R1_FB24
#define CH32V_CAN2_F2R1_FB25      CH32V_CAN1_F2R1_FB25
#define CH32V_CAN2_F2R1_FB26      CH32V_CAN1_F2R1_FB26
#define CH32V_CAN2_F2R1_FB27      CH32V_CAN1_F2R1_FB27
#define CH32V_CAN2_F2R1_FB28      CH32V_CAN1_F2R1_FB28
#define CH32V_CAN2_F2R1_FB29      CH32V_CAN1_F2R1_FB29
#define CH32V_CAN2_F2R1_FB30      CH32V_CAN1_F2R1_FB30
#define CH32V_CAN2_F2R1_FB31      CH32V_CAN1_F2R1_FB31
#define CH32V_CAN2_F2R2_OFFSET    CH32V_CAN1_F2R2_OFFSET
#define CH32V_CAN2_F2R2           CH32V_CAN1_F2R2
#define CH32V_CAN2_F2R2_FB0       CH32V_CAN1_F2R2_FB0
#define CH32V_CAN2_F2R2_FB1       CH32V_CAN1_F2R2_FB1
#define CH32V_CAN2_F2R2_FB2       CH32V_CAN1_F2R2_FB2
#define CH32V_CAN2_F2R2_FB3       CH32V_CAN1_F2R2_FB3
#define CH32V_CAN2_F2R2_FB4       CH32V_CAN1_F2R2_FB4
#define CH32V_CAN2_F2R2_FB5       CH32V_CAN1_F2R2_FB5
#define CH32V_CAN2_F2R2_FB6       CH32V_CAN1_F2R2_FB6
#define CH32V_CAN2_F2R2_FB7       CH32V_CAN1_F2R2_FB7
#define CH32V_CAN2_F2R2_FB8       CH32V_CAN1_F2R2_FB8
#define CH32V_CAN2_F2R2_FB9       CH32V_CAN1_F2R2_FB9
#define CH32V_CAN2_F2R2_FB10      CH32V_CAN1_F2R2_FB10
#define CH32V_CAN2_F2R2_FB11      CH32V_CAN1_F2R2_FB11
#define CH32V_CAN2_F2R2_FB12      CH32V_CAN1_F2R2_FB12
#define CH32V_CAN2_F2R2_FB13      CH32V_CAN1_F2R2_FB13
#define CH32V_CAN2_F2R2_FB14      CH32V_CAN1_F2R2_FB14
#define CH32V_CAN2_F2R2_FB15      CH32V_CAN1_F2R2_FB15
#define CH32V_CAN2_F2R2_FB16      CH32V_CAN1_F2R2_FB16
#define CH32V_CAN2_F2R2_FB17      CH32V_CAN1_F2R2_FB17
#define CH32V_CAN2_F2R2_FB18      CH32V_CAN1_F2R2_FB18
#define CH32V_CAN2_F2R2_FB19      CH32V_CAN1_F2R2_FB19
#define CH32V_CAN2_F2R2_FB20      CH32V_CAN1_F2R2_FB20
#define CH32V_CAN2_F2R2_FB21      CH32V_CAN1_F2R2_FB21
#define CH32V_CAN2_F2R2_FB22      CH32V_CAN1_F2R2_FB22
#define CH32V_CAN2_F2R2_FB23      CH32V_CAN1_F2R2_FB23
#define CH32V_CAN2_F2R2_FB24      CH32V_CAN1_F2R2_FB24
#define CH32V_CAN2_F2R2_FB25      CH32V_CAN1_F2R2_FB25
#define CH32V_CAN2_F2R2_FB26      CH32V_CAN1_F2R2_FB26
#define CH32V_CAN2_F2R2_FB27      CH32V_CAN1_F2R2_FB27
#define CH32V_CAN2_F2R2_FB28      CH32V_CAN1_F2R2_FB28
#define CH32V_CAN2_F2R2_FB29      CH32V_CAN1_F2R2_FB29
#define CH32V_CAN2_F2R2_FB30      CH32V_CAN1_F2R2_FB30
#define CH32V_CAN2_F2R2_FB31      CH32V_CAN1_F2R2_FB31
#define CH32V_CAN2_F3R1_OFFSET    CH32V_CAN1_F3R1_OFFSET
#define CH32V_CAN2_F3R1           CH32V_CAN1_F3R1
#define CH32V_CAN2_F3R1_FB0       CH32V_CAN1_F3R1_FB0
#define CH32V_CAN2_F3R1_FB1       CH32V_CAN1_F3R1_FB1
#define CH32V_CAN2_F3R1_FB2       CH32V_CAN1_F3R1_FB2
#define CH32V_CAN2_F3R1_FB3       CH32V_CAN1_F3R1_FB3
#define CH32V_CAN2_F3R1_FB4       CH32V_CAN1_F3R1_FB4
#define CH32V_CAN2_F3R1_FB5       CH32V_CAN1_F3R1_FB5
#define CH32V_CAN2_F3R1_FB6       CH32V_CAN1_F3R1_FB6
#define CH32V_CAN2_F3R1_FB7       CH32V_CAN1_F3R1_FB7
#define CH32V_CAN2_F3R1_FB8       CH32V_CAN1_F3R1_FB8
#define CH32V_CAN2_F3R1_FB9       CH32V_CAN1_F3R1_FB9
#define CH32V_CAN2_F3R1_FB10      CH32V_CAN1_F3R1_FB10
#define CH32V_CAN2_F3R1_FB11      CH32V_CAN1_F3R1_FB11
#define CH32V_CAN2_F3R1_FB12      CH32V_CAN1_F3R1_FB12
#define CH32V_CAN2_F3R1_FB13      CH32V_CAN1_F3R1_FB13
#define CH32V_CAN2_F3R1_FB14      CH32V_CAN1_F3R1_FB14
#define CH32V_CAN2_F3R1_FB15      CH32V_CAN1_F3R1_FB15
#define CH32V_CAN2_F3R1_FB16      CH32V_CAN1_F3R1_FB16
#define CH32V_CAN2_F3R1_FB17      CH32V_CAN1_F3R1_FB17
#define CH32V_CAN2_F3R1_FB18      CH32V_CAN1_F3R1_FB18
#define CH32V_CAN2_F3R1_FB19      CH32V_CAN1_F3R1_FB19
#define CH32V_CAN2_F3R1_FB20      CH32V_CAN1_F3R1_FB20
#define CH32V_CAN2_F3R1_FB21      CH32V_CAN1_F3R1_FB21
#define CH32V_CAN2_F3R1_FB22      CH32V_CAN1_F3R1_FB22
#define CH32V_CAN2_F3R1_FB23      CH32V_CAN1_F3R1_FB23
#define CH32V_CAN2_F3R1_FB24      CH32V_CAN1_F3R1_FB24
#define CH32V_CAN2_F3R1_FB25      CH32V_CAN1_F3R1_FB25
#define CH32V_CAN2_F3R1_FB26      CH32V_CAN1_F3R1_FB26
#define CH32V_CAN2_F3R1_FB27      CH32V_CAN1_F3R1_FB27
#define CH32V_CAN2_F3R1_FB28      CH32V_CAN1_F3R1_FB28
#define CH32V_CAN2_F3R1_FB29      CH32V_CAN1_F3R1_FB29
#define CH32V_CAN2_F3R1_FB30      CH32V_CAN1_F3R1_FB30
#define CH32V_CAN2_F3R1_FB31      CH32V_CAN1_F3R1_FB31
#define CH32V_CAN2_F3R2_OFFSET    CH32V_CAN1_F3R2_OFFSET
#define CH32V_CAN2_F3R2           CH32V_CAN1_F3R2
#define CH32V_CAN2_F3R2_FB0       CH32V_CAN1_F3R2_FB0
#define CH32V_CAN2_F3R2_FB1       CH32V_CAN1_F3R2_FB1
#define CH32V_CAN2_F3R2_FB2       CH32V_CAN1_F3R2_FB2
#define CH32V_CAN2_F3R2_FB3       CH32V_CAN1_F3R2_FB3
#define CH32V_CAN2_F3R2_FB4       CH32V_CAN1_F3R2_FB4
#define CH32V_CAN2_F3R2_FB5       CH32V_CAN1_F3R2_FB5
#define CH32V_CAN2_F3R2_FB6       CH32V_CAN1_F3R2_FB6
#define CH32V_CAN2_F3R2_FB7       CH32V_CAN1_F3R2_FB7
#define CH32V_CAN2_F3R2_FB8       CH32V_CAN1_F3R2_FB8
#define CH32V_CAN2_F3R2_FB9       CH32V_CAN1_F3R2_FB9
#define CH32V_CAN2_F3R2_FB10      CH32V_CAN1_F3R2_FB10
#define CH32V_CAN2_F3R2_FB11      CH32V_CAN1_F3R2_FB11
#define CH32V_CAN2_F3R2_FB12      CH32V_CAN1_F3R2_FB12
#define CH32V_CAN2_F3R2_FB13      CH32V_CAN1_F3R2_FB13
#define CH32V_CAN2_F3R2_FB14      CH32V_CAN1_F3R2_FB14
#define CH32V_CAN2_F3R2_FB15      CH32V_CAN1_F3R2_FB15
#define CH32V_CAN2_F3R2_FB16      CH32V_CAN1_F3R2_FB16
#define CH32V_CAN2_F3R2_FB17      CH32V_CAN1_F3R2_FB17
#define CH32V_CAN2_F3R2_FB18      CH32V_CAN1_F3R2_FB18
#define CH32V_CAN2_F3R2_FB19      CH32V_CAN1_F3R2_FB19
#define CH32V_CAN2_F3R2_FB20      CH32V_CAN1_F3R2_FB20
#define CH32V_CAN2_F3R2_FB21      CH32V_CAN1_F3R2_FB21
#define CH32V_CAN2_F3R2_FB22      CH32V_CAN1_F3R2_FB22
#define CH32V_CAN2_F3R2_FB23      CH32V_CAN1_F3R2_FB23
#define CH32V_CAN2_F3R2_FB24      CH32V_CAN1_F3R2_FB24
#define CH32V_CAN2_F3R2_FB25      CH32V_CAN1_F3R2_FB25
#define CH32V_CAN2_F3R2_FB26      CH32V_CAN1_F3R2_FB26
#define CH32V_CAN2_F3R2_FB27      CH32V_CAN1_F3R2_FB27
#define CH32V_CAN2_F3R2_FB28      CH32V_CAN1_F3R2_FB28
#define CH32V_CAN2_F3R2_FB29      CH32V_CAN1_F3R2_FB29
#define CH32V_CAN2_F3R2_FB30      CH32V_CAN1_F3R2_FB30
#define CH32V_CAN2_F3R2_FB31      CH32V_CAN1_F3R2_FB31
#define CH32V_CAN2_F4R1_OFFSET    CH32V_CAN1_F4R1_OFFSET
#define CH32V_CAN2_F4R1           CH32V_CAN1_F4R1
#define CH32V_CAN2_F4R1_FB0       CH32V_CAN1_F4R1_FB0
#define CH32V_CAN2_F4R1_FB1       CH32V_CAN1_F4R1_FB1
#define CH32V_CAN2_F4R1_FB2       CH32V_CAN1_F4R1_FB2
#define CH32V_CAN2_F4R1_FB3       CH32V_CAN1_F4R1_FB3
#define CH32V_CAN2_F4R1_FB4       CH32V_CAN1_F4R1_FB4
#define CH32V_CAN2_F4R1_FB5       CH32V_CAN1_F4R1_FB5
#define CH32V_CAN2_F4R1_FB6       CH32V_CAN1_F4R1_FB6
#define CH32V_CAN2_F4R1_FB7       CH32V_CAN1_F4R1_FB7
#define CH32V_CAN2_F4R1_FB8       CH32V_CAN1_F4R1_FB8
#define CH32V_CAN2_F4R1_FB9       CH32V_CAN1_F4R1_FB9
#define CH32V_CAN2_F4R1_FB10      CH32V_CAN1_F4R1_FB10
#define CH32V_CAN2_F4R1_FB11      CH32V_CAN1_F4R1_FB11
#define CH32V_CAN2_F4R1_FB12      CH32V_CAN1_F4R1_FB12
#define CH32V_CAN2_F4R1_FB13      CH32V_CAN1_F4R1_FB13
#define CH32V_CAN2_F4R1_FB14      CH32V_CAN1_F4R1_FB14
#define CH32V_CAN2_F4R1_FB15      CH32V_CAN1_F4R1_FB15
#define CH32V_CAN2_F4R1_FB16      CH32V_CAN1_F4R1_FB16
#define CH32V_CAN2_F4R1_FB17      CH32V_CAN1_F4R1_FB17
#define CH32V_CAN2_F4R1_FB18      CH32V_CAN1_F4R1_FB18
#define CH32V_CAN2_F4R1_FB19      CH32V_CAN1_F4R1_FB19
#define CH32V_CAN2_F4R1_FB20      CH32V_CAN1_F4R1_FB20
#define CH32V_CAN2_F4R1_FB21      CH32V_CAN1_F4R1_FB21
#define CH32V_CAN2_F4R1_FB22      CH32V_CAN1_F4R1_FB22
#define CH32V_CAN2_F4R1_FB23      CH32V_CAN1_F4R1_FB23
#define CH32V_CAN2_F4R1_FB24      CH32V_CAN1_F4R1_FB24
#define CH32V_CAN2_F4R1_FB25      CH32V_CAN1_F4R1_FB25
#define CH32V_CAN2_F4R1_FB26      CH32V_CAN1_F4R1_FB26
#define CH32V_CAN2_F4R1_FB27      CH32V_CAN1_F4R1_FB27
#define CH32V_CAN2_F4R1_FB28      CH32V_CAN1_F4R1_FB28
#define CH32V_CAN2_F4R1_FB29      CH32V_CAN1_F4R1_FB29
#define CH32V_CAN2_F4R1_FB30      CH32V_CAN1_F4R1_FB30
#define CH32V_CAN2_F4R1_FB31      CH32V_CAN1_F4R1_FB31
#define CH32V_CAN2_F4R2_OFFSET    CH32V_CAN1_F4R2_OFFSET
#define CH32V_CAN2_F4R2           CH32V_CAN1_F4R2
#define CH32V_CAN2_F4R2_FB0       CH32V_CAN1_F4R2_FB0
#define CH32V_CAN2_F4R2_FB1       CH32V_CAN1_F4R2_FB1
#define CH32V_CAN2_F4R2_FB2       CH32V_CAN1_F4R2_FB2
#define CH32V_CAN2_F4R2_FB3       CH32V_CAN1_F4R2_FB3
#define CH32V_CAN2_F4R2_FB4       CH32V_CAN1_F4R2_FB4
#define CH32V_CAN2_F4R2_FB5       CH32V_CAN1_F4R2_FB5
#define CH32V_CAN2_F4R2_FB6       CH32V_CAN1_F4R2_FB6
#define CH32V_CAN2_F4R2_FB7       CH32V_CAN1_F4R2_FB7
#define CH32V_CAN2_F4R2_FB8       CH32V_CAN1_F4R2_FB8
#define CH32V_CAN2_F4R2_FB9       CH32V_CAN1_F4R2_FB9
#define CH32V_CAN2_F4R2_FB10      CH32V_CAN1_F4R2_FB10
#define CH32V_CAN2_F4R2_FB11      CH32V_CAN1_F4R2_FB11
#define CH32V_CAN2_F4R2_FB12      CH32V_CAN1_F4R2_FB12
#define CH32V_CAN2_F4R2_FB13      CH32V_CAN1_F4R2_FB13
#define CH32V_CAN2_F4R2_FB14      CH32V_CAN1_F4R2_FB14
#define CH32V_CAN2_F4R2_FB15      CH32V_CAN1_F4R2_FB15
#define CH32V_CAN2_F4R2_FB16      CH32V_CAN1_F4R2_FB16
#define CH32V_CAN2_F4R2_FB17      CH32V_CAN1_F4R2_FB17
#define CH32V_CAN2_F4R2_FB18      CH32V_CAN1_F4R2_FB18
#define CH32V_CAN2_F4R2_FB19      CH32V_CAN1_F4R2_FB19
#define CH32V_CAN2_F4R2_FB20      CH32V_CAN1_F4R2_FB20
#define CH32V_CAN2_F4R2_FB21      CH32V_CAN1_F4R2_FB21
#define CH32V_CAN2_F4R2_FB22      CH32V_CAN1_F4R2_FB22
#define CH32V_CAN2_F4R2_FB23      CH32V_CAN1_F4R2_FB23
#define CH32V_CAN2_F4R2_FB24      CH32V_CAN1_F4R2_FB24
#define CH32V_CAN2_F4R2_FB25      CH32V_CAN1_F4R2_FB25
#define CH32V_CAN2_F4R2_FB26      CH32V_CAN1_F4R2_FB26
#define CH32V_CAN2_F4R2_FB27      CH32V_CAN1_F4R2_FB27
#define CH32V_CAN2_F4R2_FB28      CH32V_CAN1_F4R2_FB28
#define CH32V_CAN2_F4R2_FB29      CH32V_CAN1_F4R2_FB29
#define CH32V_CAN2_F4R2_FB30      CH32V_CAN1_F4R2_FB30
#define CH32V_CAN2_F4R2_FB31      CH32V_CAN1_F4R2_FB31
#define CH32V_CAN2_F5R1_OFFSET    CH32V_CAN1_F5R1_OFFSET
#define CH32V_CAN2_F5R1           CH32V_CAN1_F5R1
#define CH32V_CAN2_F5R1_FB0       CH32V_CAN1_F5R1_FB0
#define CH32V_CAN2_F5R1_FB1       CH32V_CAN1_F5R1_FB1
#define CH32V_CAN2_F5R1_FB2       CH32V_CAN1_F5R1_FB2
#define CH32V_CAN2_F5R1_FB3       CH32V_CAN1_F5R1_FB3
#define CH32V_CAN2_F5R1_FB4       CH32V_CAN1_F5R1_FB4
#define CH32V_CAN2_F5R1_FB5       CH32V_CAN1_F5R1_FB5
#define CH32V_CAN2_F5R1_FB6       CH32V_CAN1_F5R1_FB6
#define CH32V_CAN2_F5R1_FB7       CH32V_CAN1_F5R1_FB7
#define CH32V_CAN2_F5R1_FB8       CH32V_CAN1_F5R1_FB8
#define CH32V_CAN2_F5R1_FB9       CH32V_CAN1_F5R1_FB9
#define CH32V_CAN2_F5R1_FB10      CH32V_CAN1_F5R1_FB10
#define CH32V_CAN2_F5R1_FB11      CH32V_CAN1_F5R1_FB11
#define CH32V_CAN2_F5R1_FB12      CH32V_CAN1_F5R1_FB12
#define CH32V_CAN2_F5R1_FB13      CH32V_CAN1_F5R1_FB13
#define CH32V_CAN2_F5R1_FB14      CH32V_CAN1_F5R1_FB14
#define CH32V_CAN2_F5R1_FB15      CH32V_CAN1_F5R1_FB15
#define CH32V_CAN2_F5R1_FB16      CH32V_CAN1_F5R1_FB16
#define CH32V_CAN2_F5R1_FB17      CH32V_CAN1_F5R1_FB17
#define CH32V_CAN2_F5R1_FB18      CH32V_CAN1_F5R1_FB18
#define CH32V_CAN2_F5R1_FB19      CH32V_CAN1_F5R1_FB19
#define CH32V_CAN2_F5R1_FB20      CH32V_CAN1_F5R1_FB20
#define CH32V_CAN2_F5R1_FB21      CH32V_CAN1_F5R1_FB21
#define CH32V_CAN2_F5R1_FB22      CH32V_CAN1_F5R1_FB22
#define CH32V_CAN2_F5R1_FB23      CH32V_CAN1_F5R1_FB23
#define CH32V_CAN2_F5R1_FB24      CH32V_CAN1_F5R1_FB24
#define CH32V_CAN2_F5R1_FB25      CH32V_CAN1_F5R1_FB25
#define CH32V_CAN2_F5R1_FB26      CH32V_CAN1_F5R1_FB26
#define CH32V_CAN2_F5R1_FB27      CH32V_CAN1_F5R1_FB27
#define CH32V_CAN2_F5R1_FB28      CH32V_CAN1_F5R1_FB28
#define CH32V_CAN2_F5R1_FB29      CH32V_CAN1_F5R1_FB29
#define CH32V_CAN2_F5R1_FB30      CH32V_CAN1_F5R1_FB30
#define CH32V_CAN2_F5R1_FB31      CH32V_CAN1_F5R1_FB31
#define CH32V_CAN2_F5R2_OFFSET    CH32V_CAN1_F5R2_OFFSET
#define CH32V_CAN2_F5R2           CH32V_CAN1_F5R2
#define CH32V_CAN2_F5R2_FB0       CH32V_CAN1_F5R2_FB0
#define CH32V_CAN2_F5R2_FB1       CH32V_CAN1_F5R2_FB1
#define CH32V_CAN2_F5R2_FB2       CH32V_CAN1_F5R2_FB2
#define CH32V_CAN2_F5R2_FB3       CH32V_CAN1_F5R2_FB3
#define CH32V_CAN2_F5R2_FB4       CH32V_CAN1_F5R2_FB4
#define CH32V_CAN2_F5R2_FB5       CH32V_CAN1_F5R2_FB5
#define CH32V_CAN2_F5R2_FB6       CH32V_CAN1_F5R2_FB6
#define CH32V_CAN2_F5R2_FB7       CH32V_CAN1_F5R2_FB7
#define CH32V_CAN2_F5R2_FB8       CH32V_CAN1_F5R2_FB8
#define CH32V_CAN2_F5R2_FB9       CH32V_CAN1_F5R2_FB9
#define CH32V_CAN2_F5R2_FB10      CH32V_CAN1_F5R2_FB10
#define CH32V_CAN2_F5R2_FB11      CH32V_CAN1_F5R2_FB11
#define CH32V_CAN2_F5R2_FB12      CH32V_CAN1_F5R2_FB12
#define CH32V_CAN2_F5R2_FB13      CH32V_CAN1_F5R2_FB13
#define CH32V_CAN2_F5R2_FB14      CH32V_CAN1_F5R2_FB14
#define CH32V_CAN2_F5R2_FB15      CH32V_CAN1_F5R2_FB15
#define CH32V_CAN2_F5R2_FB16      CH32V_CAN1_F5R2_FB16
#define CH32V_CAN2_F5R2_FB17      CH32V_CAN1_F5R2_FB17
#define CH32V_CAN2_F5R2_FB18      CH32V_CAN1_F5R2_FB18
#define CH32V_CAN2_F5R2_FB19      CH32V_CAN1_F5R2_FB19
#define CH32V_CAN2_F5R2_FB20      CH32V_CAN1_F5R2_FB20
#define CH32V_CAN2_F5R2_FB21      CH32V_CAN1_F5R2_FB21
#define CH32V_CAN2_F5R2_FB22      CH32V_CAN1_F5R2_FB22
#define CH32V_CAN2_F5R2_FB23      CH32V_CAN1_F5R2_FB23
#define CH32V_CAN2_F5R2_FB24      CH32V_CAN1_F5R2_FB24
#define CH32V_CAN2_F5R2_FB25      CH32V_CAN1_F5R2_FB25
#define CH32V_CAN2_F5R2_FB26      CH32V_CAN1_F5R2_FB26
#define CH32V_CAN2_F5R2_FB27      CH32V_CAN1_F5R2_FB27
#define CH32V_CAN2_F5R2_FB28      CH32V_CAN1_F5R2_FB28
#define CH32V_CAN2_F5R2_FB29      CH32V_CAN1_F5R2_FB29
#define CH32V_CAN2_F5R2_FB30      CH32V_CAN1_F5R2_FB30
#define CH32V_CAN2_F5R2_FB31      CH32V_CAN1_F5R2_FB31
#define CH32V_CAN2_F6R1_OFFSET    CH32V_CAN1_F6R1_OFFSET
#define CH32V_CAN2_F6R1           CH32V_CAN1_F6R1
#define CH32V_CAN2_F6R1_FB0       CH32V_CAN1_F6R1_FB0
#define CH32V_CAN2_F6R1_FB1       CH32V_CAN1_F6R1_FB1
#define CH32V_CAN2_F6R1_FB2       CH32V_CAN1_F6R1_FB2
#define CH32V_CAN2_F6R1_FB3       CH32V_CAN1_F6R1_FB3
#define CH32V_CAN2_F6R1_FB4       CH32V_CAN1_F6R1_FB4
#define CH32V_CAN2_F6R1_FB5       CH32V_CAN1_F6R1_FB5
#define CH32V_CAN2_F6R1_FB6       CH32V_CAN1_F6R1_FB6
#define CH32V_CAN2_F6R1_FB7       CH32V_CAN1_F6R1_FB7
#define CH32V_CAN2_F6R1_FB8       CH32V_CAN1_F6R1_FB8
#define CH32V_CAN2_F6R1_FB9       CH32V_CAN1_F6R1_FB9
#define CH32V_CAN2_F6R1_FB10      CH32V_CAN1_F6R1_FB10
#define CH32V_CAN2_F6R1_FB11      CH32V_CAN1_F6R1_FB11
#define CH32V_CAN2_F6R1_FB12      CH32V_CAN1_F6R1_FB12
#define CH32V_CAN2_F6R1_FB13      CH32V_CAN1_F6R1_FB13
#define CH32V_CAN2_F6R1_FB14      CH32V_CAN1_F6R1_FB14
#define CH32V_CAN2_F6R1_FB15      CH32V_CAN1_F6R1_FB15
#define CH32V_CAN2_F6R1_FB16      CH32V_CAN1_F6R1_FB16
#define CH32V_CAN2_F6R1_FB17      CH32V_CAN1_F6R1_FB17
#define CH32V_CAN2_F6R1_FB18      CH32V_CAN1_F6R1_FB18
#define CH32V_CAN2_F6R1_FB19      CH32V_CAN1_F6R1_FB19
#define CH32V_CAN2_F6R1_FB20      CH32V_CAN1_F6R1_FB20
#define CH32V_CAN2_F6R1_FB21      CH32V_CAN1_F6R1_FB21
#define CH32V_CAN2_F6R1_FB22      CH32V_CAN1_F6R1_FB22
#define CH32V_CAN2_F6R1_FB23      CH32V_CAN1_F6R1_FB23
#define CH32V_CAN2_F6R1_FB24      CH32V_CAN1_F6R1_FB24
#define CH32V_CAN2_F6R1_FB25      CH32V_CAN1_F6R1_FB25
#define CH32V_CAN2_F6R1_FB26      CH32V_CAN1_F6R1_FB26
#define CH32V_CAN2_F6R1_FB27      CH32V_CAN1_F6R1_FB27
#define CH32V_CAN2_F6R1_FB28      CH32V_CAN1_F6R1_FB28
#define CH32V_CAN2_F6R1_FB29      CH32V_CAN1_F6R1_FB29
#define CH32V_CAN2_F6R1_FB30      CH32V_CAN1_F6R1_FB30
#define CH32V_CAN2_F6R1_FB31      CH32V_CAN1_F6R1_FB31
#define CH32V_CAN2_F6R2_OFFSET    CH32V_CAN1_F6R2_OFFSET
#define CH32V_CAN2_F6R2           CH32V_CAN1_F6R2
#define CH32V_CAN2_F6R2_FB0       CH32V_CAN1_F6R2_FB0
#define CH32V_CAN2_F6R2_FB1       CH32V_CAN1_F6R2_FB1
#define CH32V_CAN2_F6R2_FB2       CH32V_CAN1_F6R2_FB2
#define CH32V_CAN2_F6R2_FB3       CH32V_CAN1_F6R2_FB3
#define CH32V_CAN2_F6R2_FB4       CH32V_CAN1_F6R2_FB4
#define CH32V_CAN2_F6R2_FB5       CH32V_CAN1_F6R2_FB5
#define CH32V_CAN2_F6R2_FB6       CH32V_CAN1_F6R2_FB6
#define CH32V_CAN2_F6R2_FB7       CH32V_CAN1_F6R2_FB7
#define CH32V_CAN2_F6R2_FB8       CH32V_CAN1_F6R2_FB8
#define CH32V_CAN2_F6R2_FB9       CH32V_CAN1_F6R2_FB9
#define CH32V_CAN2_F6R2_FB10      CH32V_CAN1_F6R2_FB10
#define CH32V_CAN2_F6R2_FB11      CH32V_CAN1_F6R2_FB11
#define CH32V_CAN2_F6R2_FB12      CH32V_CAN1_F6R2_FB12
#define CH32V_CAN2_F6R2_FB13      CH32V_CAN1_F6R2_FB13
#define CH32V_CAN2_F6R2_FB14      CH32V_CAN1_F6R2_FB14
#define CH32V_CAN2_F6R2_FB15      CH32V_CAN1_F6R2_FB15
#define CH32V_CAN2_F6R2_FB16      CH32V_CAN1_F6R2_FB16
#define CH32V_CAN2_F6R2_FB17      CH32V_CAN1_F6R2_FB17
#define CH32V_CAN2_F6R2_FB18      CH32V_CAN1_F6R2_FB18
#define CH32V_CAN2_F6R2_FB19      CH32V_CAN1_F6R2_FB19
#define CH32V_CAN2_F6R2_FB20      CH32V_CAN1_F6R2_FB20
#define CH32V_CAN2_F6R2_FB21      CH32V_CAN1_F6R2_FB21
#define CH32V_CAN2_F6R2_FB22      CH32V_CAN1_F6R2_FB22
#define CH32V_CAN2_F6R2_FB23      CH32V_CAN1_F6R2_FB23
#define CH32V_CAN2_F6R2_FB24      CH32V_CAN1_F6R2_FB24
#define CH32V_CAN2_F6R2_FB25      CH32V_CAN1_F6R2_FB25
#define CH32V_CAN2_F6R2_FB26      CH32V_CAN1_F6R2_FB26
#define CH32V_CAN2_F6R2_FB27      CH32V_CAN1_F6R2_FB27
#define CH32V_CAN2_F6R2_FB28      CH32V_CAN1_F6R2_FB28
#define CH32V_CAN2_F6R2_FB29      CH32V_CAN1_F6R2_FB29
#define CH32V_CAN2_F6R2_FB30      CH32V_CAN1_F6R2_FB30
#define CH32V_CAN2_F6R2_FB31      CH32V_CAN1_F6R2_FB31
#define CH32V_CAN2_F7R1_OFFSET    CH32V_CAN1_F7R1_OFFSET
#define CH32V_CAN2_F7R1           CH32V_CAN1_F7R1
#define CH32V_CAN2_F7R1_FB0       CH32V_CAN1_F7R1_FB0
#define CH32V_CAN2_F7R1_FB1       CH32V_CAN1_F7R1_FB1
#define CH32V_CAN2_F7R1_FB2       CH32V_CAN1_F7R1_FB2
#define CH32V_CAN2_F7R1_FB3       CH32V_CAN1_F7R1_FB3
#define CH32V_CAN2_F7R1_FB4       CH32V_CAN1_F7R1_FB4
#define CH32V_CAN2_F7R1_FB5       CH32V_CAN1_F7R1_FB5
#define CH32V_CAN2_F7R1_FB6       CH32V_CAN1_F7R1_FB6
#define CH32V_CAN2_F7R1_FB7       CH32V_CAN1_F7R1_FB7
#define CH32V_CAN2_F7R1_FB8       CH32V_CAN1_F7R1_FB8
#define CH32V_CAN2_F7R1_FB9       CH32V_CAN1_F7R1_FB9
#define CH32V_CAN2_F7R1_FB10      CH32V_CAN1_F7R1_FB10
#define CH32V_CAN2_F7R1_FB11      CH32V_CAN1_F7R1_FB11
#define CH32V_CAN2_F7R1_FB12      CH32V_CAN1_F7R1_FB12
#define CH32V_CAN2_F7R1_FB13      CH32V_CAN1_F7R1_FB13
#define CH32V_CAN2_F7R1_FB14      CH32V_CAN1_F7R1_FB14
#define CH32V_CAN2_F7R1_FB15      CH32V_CAN1_F7R1_FB15
#define CH32V_CAN2_F7R1_FB16      CH32V_CAN1_F7R1_FB16
#define CH32V_CAN2_F7R1_FB17      CH32V_CAN1_F7R1_FB17
#define CH32V_CAN2_F7R1_FB18      CH32V_CAN1_F7R1_FB18
#define CH32V_CAN2_F7R1_FB19      CH32V_CAN1_F7R1_FB19
#define CH32V_CAN2_F7R1_FB20      CH32V_CAN1_F7R1_FB20
#define CH32V_CAN2_F7R1_FB21      CH32V_CAN1_F7R1_FB21
#define CH32V_CAN2_F7R1_FB22      CH32V_CAN1_F7R1_FB22
#define CH32V_CAN2_F7R1_FB23      CH32V_CAN1_F7R1_FB23
#define CH32V_CAN2_F7R1_FB24      CH32V_CAN1_F7R1_FB24
#define CH32V_CAN2_F7R1_FB25      CH32V_CAN1_F7R1_FB25
#define CH32V_CAN2_F7R1_FB26      CH32V_CAN1_F7R1_FB26
#define CH32V_CAN2_F7R1_FB27      CH32V_CAN1_F7R1_FB27
#define CH32V_CAN2_F7R1_FB28      CH32V_CAN1_F7R1_FB28
#define CH32V_CAN2_F7R1_FB29      CH32V_CAN1_F7R1_FB29
#define CH32V_CAN2_F7R1_FB30      CH32V_CAN1_F7R1_FB30
#define CH32V_CAN2_F7R1_FB31      CH32V_CAN1_F7R1_FB31
#define CH32V_CAN2_F7R2_OFFSET    CH32V_CAN1_F7R2_OFFSET
#define CH32V_CAN2_F7R2           CH32V_CAN1_F7R2
#define CH32V_CAN2_F7R2_FB0       CH32V_CAN1_F7R2_FB0
#define CH32V_CAN2_F7R2_FB1       CH32V_CAN1_F7R2_FB1
#define CH32V_CAN2_F7R2_FB2       CH32V_CAN1_F7R2_FB2
#define CH32V_CAN2_F7R2_FB3       CH32V_CAN1_F7R2_FB3
#define CH32V_CAN2_F7R2_FB4       CH32V_CAN1_F7R2_FB4
#define CH32V_CAN2_F7R2_FB5       CH32V_CAN1_F7R2_FB5
#define CH32V_CAN2_F7R2_FB6       CH32V_CAN1_F7R2_FB6
#define CH32V_CAN2_F7R2_FB7       CH32V_CAN1_F7R2_FB7
#define CH32V_CAN2_F7R2_FB8       CH32V_CAN1_F7R2_FB8
#define CH32V_CAN2_F7R2_FB9       CH32V_CAN1_F7R2_FB9
#define CH32V_CAN2_F7R2_FB10      CH32V_CAN1_F7R2_FB10
#define CH32V_CAN2_F7R2_FB11      CH32V_CAN1_F7R2_FB11
#define CH32V_CAN2_F7R2_FB12      CH32V_CAN1_F7R2_FB12
#define CH32V_CAN2_F7R2_FB13      CH32V_CAN1_F7R2_FB13
#define CH32V_CAN2_F7R2_FB14      CH32V_CAN1_F7R2_FB14
#define CH32V_CAN2_F7R2_FB15      CH32V_CAN1_F7R2_FB15
#define CH32V_CAN2_F7R2_FB16      CH32V_CAN1_F7R2_FB16
#define CH32V_CAN2_F7R2_FB17      CH32V_CAN1_F7R2_FB17
#define CH32V_CAN2_F7R2_FB18      CH32V_CAN1_F7R2_FB18
#define CH32V_CAN2_F7R2_FB19      CH32V_CAN1_F7R2_FB19
#define CH32V_CAN2_F7R2_FB20      CH32V_CAN1_F7R2_FB20
#define CH32V_CAN2_F7R2_FB21      CH32V_CAN1_F7R2_FB21
#define CH32V_CAN2_F7R2_FB22      CH32V_CAN1_F7R2_FB22
#define CH32V_CAN2_F7R2_FB23      CH32V_CAN1_F7R2_FB23
#define CH32V_CAN2_F7R2_FB24      CH32V_CAN1_F7R2_FB24
#define CH32V_CAN2_F7R2_FB25      CH32V_CAN1_F7R2_FB25
#define CH32V_CAN2_F7R2_FB26      CH32V_CAN1_F7R2_FB26
#define CH32V_CAN2_F7R2_FB27      CH32V_CAN1_F7R2_FB27
#define CH32V_CAN2_F7R2_FB28      CH32V_CAN1_F7R2_FB28
#define CH32V_CAN2_F7R2_FB29      CH32V_CAN1_F7R2_FB29
#define CH32V_CAN2_F7R2_FB30      CH32V_CAN1_F7R2_FB30
#define CH32V_CAN2_F7R2_FB31      CH32V_CAN1_F7R2_FB31
#define CH32V_CAN2_F8R1_OFFSET    CH32V_CAN1_F8R1_OFFSET
#define CH32V_CAN2_F8R1           CH32V_CAN1_F8R1
#define CH32V_CAN2_F8R1_FB0       CH32V_CAN1_F8R1_FB0
#define CH32V_CAN2_F8R1_FB1       CH32V_CAN1_F8R1_FB1
#define CH32V_CAN2_F8R1_FB2       CH32V_CAN1_F8R1_FB2
#define CH32V_CAN2_F8R1_FB3       CH32V_CAN1_F8R1_FB3
#define CH32V_CAN2_F8R1_FB4       CH32V_CAN1_F8R1_FB4
#define CH32V_CAN2_F8R1_FB5       CH32V_CAN1_F8R1_FB5
#define CH32V_CAN2_F8R1_FB6       CH32V_CAN1_F8R1_FB6
#define CH32V_CAN2_F8R1_FB7       CH32V_CAN1_F8R1_FB7
#define CH32V_CAN2_F8R1_FB8       CH32V_CAN1_F8R1_FB8
#define CH32V_CAN2_F8R1_FB9       CH32V_CAN1_F8R1_FB9
#define CH32V_CAN2_F8R1_FB10      CH32V_CAN1_F8R1_FB10
#define CH32V_CAN2_F8R1_FB11      CH32V_CAN1_F8R1_FB11
#define CH32V_CAN2_F8R1_FB12      CH32V_CAN1_F8R1_FB12
#define CH32V_CAN2_F8R1_FB13      CH32V_CAN1_F8R1_FB13
#define CH32V_CAN2_F8R1_FB14      CH32V_CAN1_F8R1_FB14
#define CH32V_CAN2_F8R1_FB15      CH32V_CAN1_F8R1_FB15
#define CH32V_CAN2_F8R1_FB16      CH32V_CAN1_F8R1_FB16
#define CH32V_CAN2_F8R1_FB17      CH32V_CAN1_F8R1_FB17
#define CH32V_CAN2_F8R1_FB18      CH32V_CAN1_F8R1_FB18
#define CH32V_CAN2_F8R1_FB19      CH32V_CAN1_F8R1_FB19
#define CH32V_CAN2_F8R1_FB20      CH32V_CAN1_F8R1_FB20
#define CH32V_CAN2_F8R1_FB21      CH32V_CAN1_F8R1_FB21
#define CH32V_CAN2_F8R1_FB22      CH32V_CAN1_F8R1_FB22
#define CH32V_CAN2_F8R1_FB23      CH32V_CAN1_F8R1_FB23
#define CH32V_CAN2_F8R1_FB24      CH32V_CAN1_F8R1_FB24
#define CH32V_CAN2_F8R1_FB25      CH32V_CAN1_F8R1_FB25
#define CH32V_CAN2_F8R1_FB26      CH32V_CAN1_F8R1_FB26
#define CH32V_CAN2_F8R1_FB27      CH32V_CAN1_F8R1_FB27
#define CH32V_CAN2_F8R1_FB28      CH32V_CAN1_F8R1_FB28
#define CH32V_CAN2_F8R1_FB29      CH32V_CAN1_F8R1_FB29
#define CH32V_CAN2_F8R1_FB30      CH32V_CAN1_F8R1_FB30
#define CH32V_CAN2_F8R1_FB31      CH32V_CAN1_F8R1_FB31
#define CH32V_CAN2_F8R2_OFFSET    CH32V_CAN1_F8R2_OFFSET
#define CH32V_CAN2_F8R2           CH32V_CAN1_F8R2
#define CH32V_CAN2_F8R2_FB0       CH32V_CAN1_F8R2_FB0
#define CH32V_CAN2_F8R2_FB1       CH32V_CAN1_F8R2_FB1
#define CH32V_CAN2_F8R2_FB2       CH32V_CAN1_F8R2_FB2
#define CH32V_CAN2_F8R2_FB3       CH32V_CAN1_F8R2_FB3
#define CH32V_CAN2_F8R2_FB4       CH32V_CAN1_F8R2_FB4
#define CH32V_CAN2_F8R2_FB5       CH32V_CAN1_F8R2_FB5
#define CH32V_CAN2_F8R2_FB6       CH32V_CAN1_F8R2_FB6
#define CH32V_CAN2_F8R2_FB7       CH32V_CAN1_F8R2_FB7
#define CH32V_CAN2_F8R2_FB8       CH32V_CAN1_F8R2_FB8
#define CH32V_CAN2_F8R2_FB9       CH32V_CAN1_F8R2_FB9
#define CH32V_CAN2_F8R2_FB10      CH32V_CAN1_F8R2_FB10
#define CH32V_CAN2_F8R2_FB11      CH32V_CAN1_F8R2_FB11
#define CH32V_CAN2_F8R2_FB12      CH32V_CAN1_F8R2_FB12
#define CH32V_CAN2_F8R2_FB13      CH32V_CAN1_F8R2_FB13
#define CH32V_CAN2_F8R2_FB14      CH32V_CAN1_F8R2_FB14
#define CH32V_CAN2_F8R2_FB15      CH32V_CAN1_F8R2_FB15
#define CH32V_CAN2_F8R2_FB16      CH32V_CAN1_F8R2_FB16
#define CH32V_CAN2_F8R2_FB17      CH32V_CAN1_F8R2_FB17
#define CH32V_CAN2_F8R2_FB18      CH32V_CAN1_F8R2_FB18
#define CH32V_CAN2_F8R2_FB19      CH32V_CAN1_F8R2_FB19
#define CH32V_CAN2_F8R2_FB20      CH32V_CAN1_F8R2_FB20
#define CH32V_CAN2_F8R2_FB21      CH32V_CAN1_F8R2_FB21
#define CH32V_CAN2_F8R2_FB22      CH32V_CAN1_F8R2_FB22
#define CH32V_CAN2_F8R2_FB23      CH32V_CAN1_F8R2_FB23
#define CH32V_CAN2_F8R2_FB24      CH32V_CAN1_F8R2_FB24
#define CH32V_CAN2_F8R2_FB25      CH32V_CAN1_F8R2_FB25
#define CH32V_CAN2_F8R2_FB26      CH32V_CAN1_F8R2_FB26
#define CH32V_CAN2_F8R2_FB27      CH32V_CAN1_F8R2_FB27
#define CH32V_CAN2_F8R2_FB28      CH32V_CAN1_F8R2_FB28
#define CH32V_CAN2_F8R2_FB29      CH32V_CAN1_F8R2_FB29
#define CH32V_CAN2_F8R2_FB30      CH32V_CAN1_F8R2_FB30
#define CH32V_CAN2_F8R2_FB31      CH32V_CAN1_F8R2_FB31
#define CH32V_CAN2_F9R1_OFFSET    CH32V_CAN1_F9R1_OFFSET
#define CH32V_CAN2_F9R1           CH32V_CAN1_F9R1
#define CH32V_CAN2_F9R1_FB0       CH32V_CAN1_F9R1_FB0
#define CH32V_CAN2_F9R1_FB1       CH32V_CAN1_F9R1_FB1
#define CH32V_CAN2_F9R1_FB2       CH32V_CAN1_F9R1_FB2
#define CH32V_CAN2_F9R1_FB3       CH32V_CAN1_F9R1_FB3
#define CH32V_CAN2_F9R1_FB4       CH32V_CAN1_F9R1_FB4
#define CH32V_CAN2_F9R1_FB5       CH32V_CAN1_F9R1_FB5
#define CH32V_CAN2_F9R1_FB6       CH32V_CAN1_F9R1_FB6
#define CH32V_CAN2_F9R1_FB7       CH32V_CAN1_F9R1_FB7
#define CH32V_CAN2_F9R1_FB8       CH32V_CAN1_F9R1_FB8
#define CH32V_CAN2_F9R1_FB9       CH32V_CAN1_F9R1_FB9
#define CH32V_CAN2_F9R1_FB10      CH32V_CAN1_F9R1_FB10
#define CH32V_CAN2_F9R1_FB11      CH32V_CAN1_F9R1_FB11
#define CH32V_CAN2_F9R1_FB12      CH32V_CAN1_F9R1_FB12
#define CH32V_CAN2_F9R1_FB13      CH32V_CAN1_F9R1_FB13
#define CH32V_CAN2_F9R1_FB14      CH32V_CAN1_F9R1_FB14
#define CH32V_CAN2_F9R1_FB15      CH32V_CAN1_F9R1_FB15
#define CH32V_CAN2_F9R1_FB16      CH32V_CAN1_F9R1_FB16
#define CH32V_CAN2_F9R1_FB17      CH32V_CAN1_F9R1_FB17
#define CH32V_CAN2_F9R1_FB18      CH32V_CAN1_F9R1_FB18
#define CH32V_CAN2_F9R1_FB19      CH32V_CAN1_F9R1_FB19
#define CH32V_CAN2_F9R1_FB20      CH32V_CAN1_F9R1_FB20
#define CH32V_CAN2_F9R1_FB21      CH32V_CAN1_F9R1_FB21
#define CH32V_CAN2_F9R1_FB22      CH32V_CAN1_F9R1_FB22
#define CH32V_CAN2_F9R1_FB23      CH32V_CAN1_F9R1_FB23
#define CH32V_CAN2_F9R1_FB24      CH32V_CAN1_F9R1_FB24
#define CH32V_CAN2_F9R1_FB25      CH32V_CAN1_F9R1_FB25
#define CH32V_CAN2_F9R1_FB26      CH32V_CAN1_F9R1_FB26
#define CH32V_CAN2_F9R1_FB27      CH32V_CAN1_F9R1_FB27
#define CH32V_CAN2_F9R1_FB28      CH32V_CAN1_F9R1_FB28
#define CH32V_CAN2_F9R1_FB29      CH32V_CAN1_F9R1_FB29
#define CH32V_CAN2_F9R1_FB30      CH32V_CAN1_F9R1_FB30
#define CH32V_CAN2_F9R1_FB31      CH32V_CAN1_F9R1_FB31
#define CH32V_CAN2_F9R2_OFFSET    CH32V_CAN1_F9R2_OFFSET
#define CH32V_CAN2_F9R2           CH32V_CAN1_F9R2
#define CH32V_CAN2_F9R2_FB0       CH32V_CAN1_F9R2_FB0
#define CH32V_CAN2_F9R2_FB1       CH32V_CAN1_F9R2_FB1
#define CH32V_CAN2_F9R2_FB2       CH32V_CAN1_F9R2_FB2
#define CH32V_CAN2_F9R2_FB3       CH32V_CAN1_F9R2_FB3
#define CH32V_CAN2_F9R2_FB4       CH32V_CAN1_F9R2_FB4
#define CH32V_CAN2_F9R2_FB5       CH32V_CAN1_F9R2_FB5
#define CH32V_CAN2_F9R2_FB6       CH32V_CAN1_F9R2_FB6
#define CH32V_CAN2_F9R2_FB7       CH32V_CAN1_F9R2_FB7
#define CH32V_CAN2_F9R2_FB8       CH32V_CAN1_F9R2_FB8
#define CH32V_CAN2_F9R2_FB9       CH32V_CAN1_F9R2_FB9
#define CH32V_CAN2_F9R2_FB10      CH32V_CAN1_F9R2_FB10
#define CH32V_CAN2_F9R2_FB11      CH32V_CAN1_F9R2_FB11
#define CH32V_CAN2_F9R2_FB12      CH32V_CAN1_F9R2_FB12
#define CH32V_CAN2_F9R2_FB13      CH32V_CAN1_F9R2_FB13
#define CH32V_CAN2_F9R2_FB14      CH32V_CAN1_F9R2_FB14
#define CH32V_CAN2_F9R2_FB15      CH32V_CAN1_F9R2_FB15
#define CH32V_CAN2_F9R2_FB16      CH32V_CAN1_F9R2_FB16
#define CH32V_CAN2_F9R2_FB17      CH32V_CAN1_F9R2_FB17
#define CH32V_CAN2_F9R2_FB18      CH32V_CAN1_F9R2_FB18
#define CH32V_CAN2_F9R2_FB19      CH32V_CAN1_F9R2_FB19
#define CH32V_CAN2_F9R2_FB20      CH32V_CAN1_F9R2_FB20
#define CH32V_CAN2_F9R2_FB21      CH32V_CAN1_F9R2_FB21
#define CH32V_CAN2_F9R2_FB22      CH32V_CAN1_F9R2_FB22
#define CH32V_CAN2_F9R2_FB23      CH32V_CAN1_F9R2_FB23
#define CH32V_CAN2_F9R2_FB24      CH32V_CAN1_F9R2_FB24
#define CH32V_CAN2_F9R2_FB25      CH32V_CAN1_F9R2_FB25
#define CH32V_CAN2_F9R2_FB26      CH32V_CAN1_F9R2_FB26
#define CH32V_CAN2_F9R2_FB27      CH32V_CAN1_F9R2_FB27
#define CH32V_CAN2_F9R2_FB28      CH32V_CAN1_F9R2_FB28
#define CH32V_CAN2_F9R2_FB29      CH32V_CAN1_F9R2_FB29
#define CH32V_CAN2_F9R2_FB30      CH32V_CAN1_F9R2_FB30
#define CH32V_CAN2_F9R2_FB31      CH32V_CAN1_F9R2_FB31
#define CH32V_CAN2_F10R1_OFFSET   CH32V_CAN1_F10R1_OFFSET
#define CH32V_CAN2_F10R1          CH32V_CAN1_F10R1
#define CH32V_CAN2_F10R1_FB0      CH32V_CAN1_F10R1_FB0
#define CH32V_CAN2_F10R1_FB1      CH32V_CAN1_F10R1_FB1
#define CH32V_CAN2_F10R1_FB2      CH32V_CAN1_F10R1_FB2
#define CH32V_CAN2_F10R1_FB3      CH32V_CAN1_F10R1_FB3
#define CH32V_CAN2_F10R1_FB4      CH32V_CAN1_F10R1_FB4
#define CH32V_CAN2_F10R1_FB5      CH32V_CAN1_F10R1_FB5
#define CH32V_CAN2_F10R1_FB6      CH32V_CAN1_F10R1_FB6
#define CH32V_CAN2_F10R1_FB7      CH32V_CAN1_F10R1_FB7
#define CH32V_CAN2_F10R1_FB8      CH32V_CAN1_F10R1_FB8
#define CH32V_CAN2_F10R1_FB9      CH32V_CAN1_F10R1_FB9
#define CH32V_CAN2_F10R1_FB10     CH32V_CAN1_F10R1_FB10
#define CH32V_CAN2_F10R1_FB11     CH32V_CAN1_F10R1_FB11
#define CH32V_CAN2_F10R1_FB12     CH32V_CAN1_F10R1_FB12
#define CH32V_CAN2_F10R1_FB13     CH32V_CAN1_F10R1_FB13
#define CH32V_CAN2_F10R1_FB14     CH32V_CAN1_F10R1_FB14
#define CH32V_CAN2_F10R1_FB15     CH32V_CAN1_F10R1_FB15
#define CH32V_CAN2_F10R1_FB16     CH32V_CAN1_F10R1_FB16
#define CH32V_CAN2_F10R1_FB17     CH32V_CAN1_F10R1_FB17
#define CH32V_CAN2_F10R1_FB18     CH32V_CAN1_F10R1_FB18
#define CH32V_CAN2_F10R1_FB19     CH32V_CAN1_F10R1_FB19
#define CH32V_CAN2_F10R1_FB20     CH32V_CAN1_F10R1_FB20
#define CH32V_CAN2_F10R1_FB21     CH32V_CAN1_F10R1_FB21
#define CH32V_CAN2_F10R1_FB22     CH32V_CAN1_F10R1_FB22
#define CH32V_CAN2_F10R1_FB23     CH32V_CAN1_F10R1_FB23
#define CH32V_CAN2_F10R1_FB24     CH32V_CAN1_F10R1_FB24
#define CH32V_CAN2_F10R1_FB25     CH32V_CAN1_F10R1_FB25
#define CH32V_CAN2_F10R1_FB26     CH32V_CAN1_F10R1_FB26
#define CH32V_CAN2_F10R1_FB27     CH32V_CAN1_F10R1_FB27
#define CH32V_CAN2_F10R1_FB28     CH32V_CAN1_F10R1_FB28
#define CH32V_CAN2_F10R1_FB29     CH32V_CAN1_F10R1_FB29
#define CH32V_CAN2_F10R1_FB30     CH32V_CAN1_F10R1_FB30
#define CH32V_CAN2_F10R1_FB31     CH32V_CAN1_F10R1_FB31
#define CH32V_CAN2_F10R2_OFFSET   CH32V_CAN1_F10R2_OFFSET
#define CH32V_CAN2_F10R2          CH32V_CAN1_F10R2
#define CH32V_CAN2_F10R2_FB0      CH32V_CAN1_F10R2_FB0
#define CH32V_CAN2_F10R2_FB1      CH32V_CAN1_F10R2_FB1
#define CH32V_CAN2_F10R2_FB2      CH32V_CAN1_F10R2_FB2
#define CH32V_CAN2_F10R2_FB3      CH32V_CAN1_F10R2_FB3
#define CH32V_CAN2_F10R2_FB4      CH32V_CAN1_F10R2_FB4
#define CH32V_CAN2_F10R2_FB5      CH32V_CAN1_F10R2_FB5
#define CH32V_CAN2_F10R2_FB6      CH32V_CAN1_F10R2_FB6
#define CH32V_CAN2_F10R2_FB7      CH32V_CAN1_F10R2_FB7
#define CH32V_CAN2_F10R2_FB8      CH32V_CAN1_F10R2_FB8
#define CH32V_CAN2_F10R2_FB9      CH32V_CAN1_F10R2_FB9
#define CH32V_CAN2_F10R2_FB10     CH32V_CAN1_F10R2_FB10
#define CH32V_CAN2_F10R2_FB11     CH32V_CAN1_F10R2_FB11
#define CH32V_CAN2_F10R2_FB12     CH32V_CAN1_F10R2_FB12
#define CH32V_CAN2_F10R2_FB13     CH32V_CAN1_F10R2_FB13
#define CH32V_CAN2_F10R2_FB14     CH32V_CAN1_F10R2_FB14
#define CH32V_CAN2_F10R2_FB15     CH32V_CAN1_F10R2_FB15
#define CH32V_CAN2_F10R2_FB16     CH32V_CAN1_F10R2_FB16
#define CH32V_CAN2_F10R2_FB17     CH32V_CAN1_F10R2_FB17
#define CH32V_CAN2_F10R2_FB18     CH32V_CAN1_F10R2_FB18
#define CH32V_CAN2_F10R2_FB19     CH32V_CAN1_F10R2_FB19
#define CH32V_CAN2_F10R2_FB20     CH32V_CAN1_F10R2_FB20
#define CH32V_CAN2_F10R2_FB21     CH32V_CAN1_F10R2_FB21
#define CH32V_CAN2_F10R2_FB22     CH32V_CAN1_F10R2_FB22
#define CH32V_CAN2_F10R2_FB23     CH32V_CAN1_F10R2_FB23
#define CH32V_CAN2_F10R2_FB24     CH32V_CAN1_F10R2_FB24
#define CH32V_CAN2_F10R2_FB25     CH32V_CAN1_F10R2_FB25
#define CH32V_CAN2_F10R2_FB26     CH32V_CAN1_F10R2_FB26
#define CH32V_CAN2_F10R2_FB27     CH32V_CAN1_F10R2_FB27
#define CH32V_CAN2_F10R2_FB28     CH32V_CAN1_F10R2_FB28
#define CH32V_CAN2_F10R2_FB29     CH32V_CAN1_F10R2_FB29
#define CH32V_CAN2_F10R2_FB30     CH32V_CAN1_F10R2_FB30
#define CH32V_CAN2_F10R2_FB31     CH32V_CAN1_F10R2_FB31
#define CH32V_CAN2_F11R1_OFFSET   CH32V_CAN1_F11R1_OFFSET
#define CH32V_CAN2_F11R1          CH32V_CAN1_F11R1
#define CH32V_CAN2_F11R1_FB0      CH32V_CAN1_F11R1_FB0
#define CH32V_CAN2_F11R1_FB1      CH32V_CAN1_F11R1_FB1
#define CH32V_CAN2_F11R1_FB2      CH32V_CAN1_F11R1_FB2
#define CH32V_CAN2_F11R1_FB3      CH32V_CAN1_F11R1_FB3
#define CH32V_CAN2_F11R1_FB4      CH32V_CAN1_F11R1_FB4
#define CH32V_CAN2_F11R1_FB5      CH32V_CAN1_F11R1_FB5
#define CH32V_CAN2_F11R1_FB6      CH32V_CAN1_F11R1_FB6
#define CH32V_CAN2_F11R1_FB7      CH32V_CAN1_F11R1_FB7
#define CH32V_CAN2_F11R1_FB8      CH32V_CAN1_F11R1_FB8
#define CH32V_CAN2_F11R1_FB9      CH32V_CAN1_F11R1_FB9
#define CH32V_CAN2_F11R1_FB10     CH32V_CAN1_F11R1_FB10
#define CH32V_CAN2_F11R1_FB11     CH32V_CAN1_F11R1_FB11
#define CH32V_CAN2_F11R1_FB12     CH32V_CAN1_F11R1_FB12
#define CH32V_CAN2_F11R1_FB13     CH32V_CAN1_F11R1_FB13
#define CH32V_CAN2_F11R1_FB14     CH32V_CAN1_F11R1_FB14
#define CH32V_CAN2_F11R1_FB15     CH32V_CAN1_F11R1_FB15
#define CH32V_CAN2_F11R1_FB16     CH32V_CAN1_F11R1_FB16
#define CH32V_CAN2_F11R1_FB17     CH32V_CAN1_F11R1_FB17
#define CH32V_CAN2_F11R1_FB18     CH32V_CAN1_F11R1_FB18
#define CH32V_CAN2_F11R1_FB19     CH32V_CAN1_F11R1_FB19
#define CH32V_CAN2_F11R1_FB20     CH32V_CAN1_F11R1_FB20
#define CH32V_CAN2_F11R1_FB21     CH32V_CAN1_F11R1_FB21
#define CH32V_CAN2_F11R1_FB22     CH32V_CAN1_F11R1_FB22
#define CH32V_CAN2_F11R1_FB23     CH32V_CAN1_F11R1_FB23
#define CH32V_CAN2_F11R1_FB24     CH32V_CAN1_F11R1_FB24
#define CH32V_CAN2_F11R1_FB25     CH32V_CAN1_F11R1_FB25
#define CH32V_CAN2_F11R1_FB26     CH32V_CAN1_F11R1_FB26
#define CH32V_CAN2_F11R1_FB27     CH32V_CAN1_F11R1_FB27
#define CH32V_CAN2_F11R1_FB28     CH32V_CAN1_F11R1_FB28
#define CH32V_CAN2_F11R1_FB29     CH32V_CAN1_F11R1_FB29
#define CH32V_CAN2_F11R1_FB30     CH32V_CAN1_F11R1_FB30
#define CH32V_CAN2_F11R1_FB31     CH32V_CAN1_F11R1_FB31
#define CH32V_CAN2_F11R2_OFFSET   CH32V_CAN1_F11R2_OFFSET
#define CH32V_CAN2_F11R2          CH32V_CAN1_F11R2
#define CH32V_CAN2_F11R2_FB0      CH32V_CAN1_F11R2_FB0
#define CH32V_CAN2_F11R2_FB1      CH32V_CAN1_F11R2_FB1
#define CH32V_CAN2_F11R2_FB2      CH32V_CAN1_F11R2_FB2
#define CH32V_CAN2_F11R2_FB3      CH32V_CAN1_F11R2_FB3
#define CH32V_CAN2_F11R2_FB4      CH32V_CAN1_F11R2_FB4
#define CH32V_CAN2_F11R2_FB5      CH32V_CAN1_F11R2_FB5
#define CH32V_CAN2_F11R2_FB6      CH32V_CAN1_F11R2_FB6
#define CH32V_CAN2_F11R2_FB7      CH32V_CAN1_F11R2_FB7
#define CH32V_CAN2_F11R2_FB8      CH32V_CAN1_F11R2_FB8
#define CH32V_CAN2_F11R2_FB9      CH32V_CAN1_F11R2_FB9
#define CH32V_CAN2_F11R2_FB10     CH32V_CAN1_F11R2_FB10
#define CH32V_CAN2_F11R2_FB11     CH32V_CAN1_F11R2_FB11
#define CH32V_CAN2_F11R2_FB12     CH32V_CAN1_F11R2_FB12
#define CH32V_CAN2_F11R2_FB13     CH32V_CAN1_F11R2_FB13
#define CH32V_CAN2_F11R2_FB14     CH32V_CAN1_F11R2_FB14
#define CH32V_CAN2_F11R2_FB15     CH32V_CAN1_F11R2_FB15
#define CH32V_CAN2_F11R2_FB16     CH32V_CAN1_F11R2_FB16
#define CH32V_CAN2_F11R2_FB17     CH32V_CAN1_F11R2_FB17
#define CH32V_CAN2_F11R2_FB18     CH32V_CAN1_F11R2_FB18
#define CH32V_CAN2_F11R2_FB19     CH32V_CAN1_F11R2_FB19
#define CH32V_CAN2_F11R2_FB20     CH32V_CAN1_F11R2_FB20
#define CH32V_CAN2_F11R2_FB21     CH32V_CAN1_F11R2_FB21
#define CH32V_CAN2_F11R2_FB22     CH32V_CAN1_F11R2_FB22
#define CH32V_CAN2_F11R2_FB23     CH32V_CAN1_F11R2_FB23
#define CH32V_CAN2_F11R2_FB24     CH32V_CAN1_F11R2_FB24
#define CH32V_CAN2_F11R2_FB25     CH32V_CAN1_F11R2_FB25
#define CH32V_CAN2_F11R2_FB26     CH32V_CAN1_F11R2_FB26
#define CH32V_CAN2_F11R2_FB27     CH32V_CAN1_F11R2_FB27
#define CH32V_CAN2_F11R2_FB28     CH32V_CAN1_F11R2_FB28
#define CH32V_CAN2_F11R2_FB29     CH32V_CAN1_F11R2_FB29
#define CH32V_CAN2_F11R2_FB30     CH32V_CAN1_F11R2_FB30
#define CH32V_CAN2_F11R2_FB31     CH32V_CAN1_F11R2_FB31
#define CH32V_CAN2_F12R1_OFFSET   CH32V_CAN1_F12R1_OFFSET
#define CH32V_CAN2_F12R1          CH32V_CAN1_F12R1
#define CH32V_CAN2_F12R1_FB0      CH32V_CAN1_F12R1_FB0
#define CH32V_CAN2_F12R1_FB1      CH32V_CAN1_F12R1_FB1
#define CH32V_CAN2_F12R1_FB2      CH32V_CAN1_F12R1_FB2
#define CH32V_CAN2_F12R1_FB3      CH32V_CAN1_F12R1_FB3
#define CH32V_CAN2_F12R1_FB4      CH32V_CAN1_F12R1_FB4
#define CH32V_CAN2_F12R1_FB5      CH32V_CAN1_F12R1_FB5
#define CH32V_CAN2_F12R1_FB6      CH32V_CAN1_F12R1_FB6
#define CH32V_CAN2_F12R1_FB7      CH32V_CAN1_F12R1_FB7
#define CH32V_CAN2_F12R1_FB8      CH32V_CAN1_F12R1_FB8
#define CH32V_CAN2_F12R1_FB9      CH32V_CAN1_F12R1_FB9
#define CH32V_CAN2_F12R1_FB10     CH32V_CAN1_F12R1_FB10
#define CH32V_CAN2_F12R1_FB11     CH32V_CAN1_F12R1_FB11
#define CH32V_CAN2_F12R1_FB12     CH32V_CAN1_F12R1_FB12
#define CH32V_CAN2_F12R1_FB13     CH32V_CAN1_F12R1_FB13
#define CH32V_CAN2_F12R1_FB14     CH32V_CAN1_F12R1_FB14
#define CH32V_CAN2_F12R1_FB15     CH32V_CAN1_F12R1_FB15
#define CH32V_CAN2_F12R1_FB16     CH32V_CAN1_F12R1_FB16
#define CH32V_CAN2_F12R1_FB17     CH32V_CAN1_F12R1_FB17
#define CH32V_CAN2_F12R1_FB18     CH32V_CAN1_F12R1_FB18
#define CH32V_CAN2_F12R1_FB19     CH32V_CAN1_F12R1_FB19
#define CH32V_CAN2_F12R1_FB20     CH32V_CAN1_F12R1_FB20
#define CH32V_CAN2_F12R1_FB21     CH32V_CAN1_F12R1_FB21
#define CH32V_CAN2_F12R1_FB22     CH32V_CAN1_F12R1_FB22
#define CH32V_CAN2_F12R1_FB23     CH32V_CAN1_F12R1_FB23
#define CH32V_CAN2_F12R1_FB24     CH32V_CAN1_F12R1_FB24
#define CH32V_CAN2_F12R1_FB25     CH32V_CAN1_F12R1_FB25
#define CH32V_CAN2_F12R1_FB26     CH32V_CAN1_F12R1_FB26
#define CH32V_CAN2_F12R1_FB27     CH32V_CAN1_F12R1_FB27
#define CH32V_CAN2_F12R1_FB28     CH32V_CAN1_F12R1_FB28
#define CH32V_CAN2_F12R1_FB29     CH32V_CAN1_F12R1_FB29
#define CH32V_CAN2_F12R1_FB30     CH32V_CAN1_F12R1_FB30
#define CH32V_CAN2_F12R1_FB31     CH32V_CAN1_F12R1_FB31
#define CH32V_CAN2_F12R2_OFFSET   CH32V_CAN1_F12R2_OFFSET
#define CH32V_CAN2_F12R2          CH32V_CAN1_F12R2
#define CH32V_CAN2_F12R2_FB0      CH32V_CAN1_F12R2_FB0
#define CH32V_CAN2_F12R2_FB1      CH32V_CAN1_F12R2_FB1
#define CH32V_CAN2_F12R2_FB2      CH32V_CAN1_F12R2_FB2
#define CH32V_CAN2_F12R2_FB3      CH32V_CAN1_F12R2_FB3
#define CH32V_CAN2_F12R2_FB4      CH32V_CAN1_F12R2_FB4
#define CH32V_CAN2_F12R2_FB5      CH32V_CAN1_F12R2_FB5
#define CH32V_CAN2_F12R2_FB6      CH32V_CAN1_F12R2_FB6
#define CH32V_CAN2_F12R2_FB7      CH32V_CAN1_F12R2_FB7
#define CH32V_CAN2_F12R2_FB8      CH32V_CAN1_F12R2_FB8
#define CH32V_CAN2_F12R2_FB9      CH32V_CAN1_F12R2_FB9
#define CH32V_CAN2_F12R2_FB10     CH32V_CAN1_F12R2_FB10
#define CH32V_CAN2_F12R2_FB11     CH32V_CAN1_F12R2_FB11
#define CH32V_CAN2_F12R2_FB12     CH32V_CAN1_F12R2_FB12
#define CH32V_CAN2_F12R2_FB13     CH32V_CAN1_F12R2_FB13
#define CH32V_CAN2_F12R2_FB14     CH32V_CAN1_F12R2_FB14
#define CH32V_CAN2_F12R2_FB15     CH32V_CAN1_F12R2_FB15
#define CH32V_CAN2_F12R2_FB16     CH32V_CAN1_F12R2_FB16
#define CH32V_CAN2_F12R2_FB17     CH32V_CAN1_F12R2_FB17
#define CH32V_CAN2_F12R2_FB18     CH32V_CAN1_F12R2_FB18
#define CH32V_CAN2_F12R2_FB19     CH32V_CAN1_F12R2_FB19
#define CH32V_CAN2_F12R2_FB20     CH32V_CAN1_F12R2_FB20
#define CH32V_CAN2_F12R2_FB21     CH32V_CAN1_F12R2_FB21
#define CH32V_CAN2_F12R2_FB22     CH32V_CAN1_F12R2_FB22
#define CH32V_CAN2_F12R2_FB23     CH32V_CAN1_F12R2_FB23
#define CH32V_CAN2_F12R2_FB24     CH32V_CAN1_F12R2_FB24
#define CH32V_CAN2_F12R2_FB25     CH32V_CAN1_F12R2_FB25
#define CH32V_CAN2_F12R2_FB26     CH32V_CAN1_F12R2_FB26
#define CH32V_CAN2_F12R2_FB27     CH32V_CAN1_F12R2_FB27
#define CH32V_CAN2_F12R2_FB28     CH32V_CAN1_F12R2_FB28
#define CH32V_CAN2_F12R2_FB29     CH32V_CAN1_F12R2_FB29
#define CH32V_CAN2_F12R2_FB30     CH32V_CAN1_F12R2_FB30
#define CH32V_CAN2_F12R2_FB31     CH32V_CAN1_F12R2_FB31
#define CH32V_CAN2_F13R1_OFFSET   CH32V_CAN1_F13R1_OFFSET
#define CH32V_CAN2_F13R1          CH32V_CAN1_F13R1
#define CH32V_CAN2_F13R1_FB0      CH32V_CAN1_F13R1_FB0
#define CH32V_CAN2_F13R1_FB1      CH32V_CAN1_F13R1_FB1
#define CH32V_CAN2_F13R1_FB2      CH32V_CAN1_F13R1_FB2
#define CH32V_CAN2_F13R1_FB3      CH32V_CAN1_F13R1_FB3
#define CH32V_CAN2_F13R1_FB4      CH32V_CAN1_F13R1_FB4
#define CH32V_CAN2_F13R1_FB5      CH32V_CAN1_F13R1_FB5
#define CH32V_CAN2_F13R1_FB6      CH32V_CAN1_F13R1_FB6
#define CH32V_CAN2_F13R1_FB7      CH32V_CAN1_F13R1_FB7
#define CH32V_CAN2_F13R1_FB8      CH32V_CAN1_F13R1_FB8
#define CH32V_CAN2_F13R1_FB9      CH32V_CAN1_F13R1_FB9
#define CH32V_CAN2_F13R1_FB10     CH32V_CAN1_F13R1_FB10
#define CH32V_CAN2_F13R1_FB11     CH32V_CAN1_F13R1_FB11
#define CH32V_CAN2_F13R1_FB12     CH32V_CAN1_F13R1_FB12
#define CH32V_CAN2_F13R1_FB13     CH32V_CAN1_F13R1_FB13
#define CH32V_CAN2_F13R1_FB14     CH32V_CAN1_F13R1_FB14
#define CH32V_CAN2_F13R1_FB15     CH32V_CAN1_F13R1_FB15
#define CH32V_CAN2_F13R1_FB16     CH32V_CAN1_F13R1_FB16
#define CH32V_CAN2_F13R1_FB17     CH32V_CAN1_F13R1_FB17
#define CH32V_CAN2_F13R1_FB18     CH32V_CAN1_F13R1_FB18
#define CH32V_CAN2_F13R1_FB19     CH32V_CAN1_F13R1_FB19
#define CH32V_CAN2_F13R1_FB20     CH32V_CAN1_F13R1_FB20
#define CH32V_CAN2_F13R1_FB21     CH32V_CAN1_F13R1_FB21
#define CH32V_CAN2_F13R1_FB22     CH32V_CAN1_F13R1_FB22
#define CH32V_CAN2_F13R1_FB23     CH32V_CAN1_F13R1_FB23
#define CH32V_CAN2_F13R1_FB24     CH32V_CAN1_F13R1_FB24
#define CH32V_CAN2_F13R1_FB25     CH32V_CAN1_F13R1_FB25
#define CH32V_CAN2_F13R1_FB26     CH32V_CAN1_F13R1_FB26
#define CH32V_CAN2_F13R1_FB27     CH32V_CAN1_F13R1_FB27
#define CH32V_CAN2_F13R1_FB28     CH32V_CAN1_F13R1_FB28
#define CH32V_CAN2_F13R1_FB29     CH32V_CAN1_F13R1_FB29
#define CH32V_CAN2_F13R1_FB30     CH32V_CAN1_F13R1_FB30
#define CH32V_CAN2_F13R1_FB31     CH32V_CAN1_F13R1_FB31
#define CH32V_CAN2_F13R2_OFFSET   CH32V_CAN1_F13R2_OFFSET
#define CH32V_CAN2_F13R2          CH32V_CAN1_F13R2
#define CH32V_CAN2_F13R2_FB0      CH32V_CAN1_F13R2_FB0
#define CH32V_CAN2_F13R2_FB1      CH32V_CAN1_F13R2_FB1
#define CH32V_CAN2_F13R2_FB2      CH32V_CAN1_F13R2_FB2
#define CH32V_CAN2_F13R2_FB3      CH32V_CAN1_F13R2_FB3
#define CH32V_CAN2_F13R2_FB4      CH32V_CAN1_F13R2_FB4
#define CH32V_CAN2_F13R2_FB5      CH32V_CAN1_F13R2_FB5
#define CH32V_CAN2_F13R2_FB6      CH32V_CAN1_F13R2_FB6
#define CH32V_CAN2_F13R2_FB7      CH32V_CAN1_F13R2_FB7
#define CH32V_CAN2_F13R2_FB8      CH32V_CAN1_F13R2_FB8
#define CH32V_CAN2_F13R2_FB9      CH32V_CAN1_F13R2_FB9
#define CH32V_CAN2_F13R2_FB10     CH32V_CAN1_F13R2_FB10
#define CH32V_CAN2_F13R2_FB11     CH32V_CAN1_F13R2_FB11
#define CH32V_CAN2_F13R2_FB12     CH32V_CAN1_F13R2_FB12
#define CH32V_CAN2_F13R2_FB13     CH32V_CAN1_F13R2_FB13
#define CH32V_CAN2_F13R2_FB14     CH32V_CAN1_F13R2_FB14
#define CH32V_CAN2_F13R2_FB15     CH32V_CAN1_F13R2_FB15
#define CH32V_CAN2_F13R2_FB16     CH32V_CAN1_F13R2_FB16
#define CH32V_CAN2_F13R2_FB17     CH32V_CAN1_F13R2_FB17
#define CH32V_CAN2_F13R2_FB18     CH32V_CAN1_F13R2_FB18
#define CH32V_CAN2_F13R2_FB19     CH32V_CAN1_F13R2_FB19
#define CH32V_CAN2_F13R2_FB20     CH32V_CAN1_F13R2_FB20
#define CH32V_CAN2_F13R2_FB21     CH32V_CAN1_F13R2_FB21
#define CH32V_CAN2_F13R2_FB22     CH32V_CAN1_F13R2_FB22
#define CH32V_CAN2_F13R2_FB23     CH32V_CAN1_F13R2_FB23
#define CH32V_CAN2_F13R2_FB24     CH32V_CAN1_F13R2_FB24
#define CH32V_CAN2_F13R2_FB25     CH32V_CAN1_F13R2_FB25
#define CH32V_CAN2_F13R2_FB26     CH32V_CAN1_F13R2_FB26
#define CH32V_CAN2_F13R2_FB27     CH32V_CAN1_F13R2_FB27
#define CH32V_CAN2_F13R2_FB28     CH32V_CAN1_F13R2_FB28
#define CH32V_CAN2_F13R2_FB29     CH32V_CAN1_F13R2_FB29
#define CH32V_CAN2_F13R2_FB30     CH32V_CAN1_F13R2_FB30
#define CH32V_CAN2_F13R2_FB31     CH32V_CAN1_F13R2_FB31
#define CH32V_CAN2_F14R1_OFFSET   CH32V_CAN1_F14R1_OFFSET
#define CH32V_CAN2_F14R1          CH32V_CAN1_F14R1
#define CH32V_CAN2_F14R1_FB0      CH32V_CAN1_F14R1_FB0
#define CH32V_CAN2_F14R1_FB1      CH32V_CAN1_F14R1_FB1
#define CH32V_CAN2_F14R1_FB2      CH32V_CAN1_F14R1_FB2
#define CH32V_CAN2_F14R1_FB3      CH32V_CAN1_F14R1_FB3
#define CH32V_CAN2_F14R1_FB4      CH32V_CAN1_F14R1_FB4
#define CH32V_CAN2_F14R1_FB5      CH32V_CAN1_F14R1_FB5
#define CH32V_CAN2_F14R1_FB6      CH32V_CAN1_F14R1_FB6
#define CH32V_CAN2_F14R1_FB7      CH32V_CAN1_F14R1_FB7
#define CH32V_CAN2_F14R1_FB8      CH32V_CAN1_F14R1_FB8
#define CH32V_CAN2_F14R1_FB9      CH32V_CAN1_F14R1_FB9
#define CH32V_CAN2_F14R1_FB10     CH32V_CAN1_F14R1_FB10
#define CH32V_CAN2_F14R1_FB11     CH32V_CAN1_F14R1_FB11
#define CH32V_CAN2_F14R1_FB12     CH32V_CAN1_F14R1_FB12
#define CH32V_CAN2_F14R1_FB13     CH32V_CAN1_F14R1_FB13
#define CH32V_CAN2_F14R1_FB14     CH32V_CAN1_F14R1_FB14
#define CH32V_CAN2_F14R1_FB15     CH32V_CAN1_F14R1_FB15
#define CH32V_CAN2_F14R1_FB16     CH32V_CAN1_F14R1_FB16
#define CH32V_CAN2_F14R1_FB17     CH32V_CAN1_F14R1_FB17
#define CH32V_CAN2_F14R1_FB18     CH32V_CAN1_F14R1_FB18
#define CH32V_CAN2_F14R1_FB19     CH32V_CAN1_F14R1_FB19
#define CH32V_CAN2_F14R1_FB20     CH32V_CAN1_F14R1_FB20
#define CH32V_CAN2_F14R1_FB21     CH32V_CAN1_F14R1_FB21
#define CH32V_CAN2_F14R1_FB22     CH32V_CAN1_F14R1_FB22
#define CH32V_CAN2_F14R1_FB23     CH32V_CAN1_F14R1_FB23
#define CH32V_CAN2_F14R1_FB24     CH32V_CAN1_F14R1_FB24
#define CH32V_CAN2_F14R1_FB25     CH32V_CAN1_F14R1_FB25
#define CH32V_CAN2_F14R1_FB26     CH32V_CAN1_F14R1_FB26
#define CH32V_CAN2_F14R1_FB27     CH32V_CAN1_F14R1_FB27
#define CH32V_CAN2_F14R1_FB28     CH32V_CAN1_F14R1_FB28
#define CH32V_CAN2_F14R1_FB29     CH32V_CAN1_F14R1_FB29
#define CH32V_CAN2_F14R1_FB30     CH32V_CAN1_F14R1_FB30
#define CH32V_CAN2_F14R1_FB31     CH32V_CAN1_F14R1_FB31
#define CH32V_CAN2_F14R2_OFFSET   CH32V_CAN1_F14R2_OFFSET
#define CH32V_CAN2_F14R2          CH32V_CAN1_F14R2
#define CH32V_CAN2_F14R2_FB0      CH32V_CAN1_F14R2_FB0
#define CH32V_CAN2_F14R2_FB1      CH32V_CAN1_F14R2_FB1
#define CH32V_CAN2_F14R2_FB2      CH32V_CAN1_F14R2_FB2
#define CH32V_CAN2_F14R2_FB3      CH32V_CAN1_F14R2_FB3
#define CH32V_CAN2_F14R2_FB4      CH32V_CAN1_F14R2_FB4
#define CH32V_CAN2_F14R2_FB5      CH32V_CAN1_F14R2_FB5
#define CH32V_CAN2_F14R2_FB6      CH32V_CAN1_F14R2_FB6
#define CH32V_CAN2_F14R2_FB7      CH32V_CAN1_F14R2_FB7
#define CH32V_CAN2_F14R2_FB8      CH32V_CAN1_F14R2_FB8
#define CH32V_CAN2_F14R2_FB9      CH32V_CAN1_F14R2_FB9
#define CH32V_CAN2_F14R2_FB10     CH32V_CAN1_F14R2_FB10
#define CH32V_CAN2_F14R2_FB11     CH32V_CAN1_F14R2_FB11
#define CH32V_CAN2_F14R2_FB12     CH32V_CAN1_F14R2_FB12
#define CH32V_CAN2_F14R2_FB13     CH32V_CAN1_F14R2_FB13
#define CH32V_CAN2_F14R2_FB14     CH32V_CAN1_F14R2_FB14
#define CH32V_CAN2_F14R2_FB15     CH32V_CAN1_F14R2_FB15
#define CH32V_CAN2_F14R2_FB16     CH32V_CAN1_F14R2_FB16
#define CH32V_CAN2_F14R2_FB17     CH32V_CAN1_F14R2_FB17
#define CH32V_CAN2_F14R2_FB18     CH32V_CAN1_F14R2_FB18
#define CH32V_CAN2_F14R2_FB19     CH32V_CAN1_F14R2_FB19
#define CH32V_CAN2_F14R2_FB20     CH32V_CAN1_F14R2_FB20
#define CH32V_CAN2_F14R2_FB21     CH32V_CAN1_F14R2_FB21
#define CH32V_CAN2_F14R2_FB22     CH32V_CAN1_F14R2_FB22
#define CH32V_CAN2_F14R2_FB23     CH32V_CAN1_F14R2_FB23
#define CH32V_CAN2_F14R2_FB24     CH32V_CAN1_F14R2_FB24
#define CH32V_CAN2_F14R2_FB25     CH32V_CAN1_F14R2_FB25
#define CH32V_CAN2_F14R2_FB26     CH32V_CAN1_F14R2_FB26
#define CH32V_CAN2_F14R2_FB27     CH32V_CAN1_F14R2_FB27
#define CH32V_CAN2_F14R2_FB28     CH32V_CAN1_F14R2_FB28
#define CH32V_CAN2_F14R2_FB29     CH32V_CAN1_F14R2_FB29
#define CH32V_CAN2_F14R2_FB30     CH32V_CAN1_F14R2_FB30
#define CH32V_CAN2_F14R2_FB31     CH32V_CAN1_F14R2_FB31
#define CH32V_CAN2_F15R1_OFFSET   CH32V_CAN1_F15R1_OFFSET
#define CH32V_CAN2_F15R1          CH32V_CAN1_F15R1
#define CH32V_CAN2_F15R1_FB0      CH32V_CAN1_F15R1_FB0
#define CH32V_CAN2_F15R1_FB1      CH32V_CAN1_F15R1_FB1
#define CH32V_CAN2_F15R1_FB2      CH32V_CAN1_F15R1_FB2
#define CH32V_CAN2_F15R1_FB3      CH32V_CAN1_F15R1_FB3
#define CH32V_CAN2_F15R1_FB4      CH32V_CAN1_F15R1_FB4
#define CH32V_CAN2_F15R1_FB5      CH32V_CAN1_F15R1_FB5
#define CH32V_CAN2_F15R1_FB6      CH32V_CAN1_F15R1_FB6
#define CH32V_CAN2_F15R1_FB7      CH32V_CAN1_F15R1_FB7
#define CH32V_CAN2_F15R1_FB8      CH32V_CAN1_F15R1_FB8
#define CH32V_CAN2_F15R1_FB9      CH32V_CAN1_F15R1_FB9
#define CH32V_CAN2_F15R1_FB10     CH32V_CAN1_F15R1_FB10
#define CH32V_CAN2_F15R1_FB11     CH32V_CAN1_F15R1_FB11
#define CH32V_CAN2_F15R1_FB12     CH32V_CAN1_F15R1_FB12
#define CH32V_CAN2_F15R1_FB13     CH32V_CAN1_F15R1_FB13
#define CH32V_CAN2_F15R1_FB14     CH32V_CAN1_F15R1_FB14
#define CH32V_CAN2_F15R1_FB15     CH32V_CAN1_F15R1_FB15
#define CH32V_CAN2_F15R1_FB16     CH32V_CAN1_F15R1_FB16
#define CH32V_CAN2_F15R1_FB17     CH32V_CAN1_F15R1_FB17
#define CH32V_CAN2_F15R1_FB18     CH32V_CAN1_F15R1_FB18
#define CH32V_CAN2_F15R1_FB19     CH32V_CAN1_F15R1_FB19
#define CH32V_CAN2_F15R1_FB20     CH32V_CAN1_F15R1_FB20
#define CH32V_CAN2_F15R1_FB21     CH32V_CAN1_F15R1_FB21
#define CH32V_CAN2_F15R1_FB22     CH32V_CAN1_F15R1_FB22
#define CH32V_CAN2_F15R1_FB23     CH32V_CAN1_F15R1_FB23
#define CH32V_CAN2_F15R1_FB24     CH32V_CAN1_F15R1_FB24
#define CH32V_CAN2_F15R1_FB25     CH32V_CAN1_F15R1_FB25
#define CH32V_CAN2_F15R1_FB26     CH32V_CAN1_F15R1_FB26
#define CH32V_CAN2_F15R1_FB27     CH32V_CAN1_F15R1_FB27
#define CH32V_CAN2_F15R1_FB28     CH32V_CAN1_F15R1_FB28
#define CH32V_CAN2_F15R1_FB29     CH32V_CAN1_F15R1_FB29
#define CH32V_CAN2_F15R1_FB30     CH32V_CAN1_F15R1_FB30
#define CH32V_CAN2_F15R1_FB31     CH32V_CAN1_F15R1_FB31
#define CH32V_CAN2_F15R2_OFFSET   CH32V_CAN1_F15R2_OFFSET
#define CH32V_CAN2_F15R2          CH32V_CAN1_F15R2
#define CH32V_CAN2_F15R2_FB0      CH32V_CAN1_F15R2_FB0
#define CH32V_CAN2_F15R2_FB1      CH32V_CAN1_F15R2_FB1
#define CH32V_CAN2_F15R2_FB2      CH32V_CAN1_F15R2_FB2
#define CH32V_CAN2_F15R2_FB3      CH32V_CAN1_F15R2_FB3
#define CH32V_CAN2_F15R2_FB4      CH32V_CAN1_F15R2_FB4
#define CH32V_CAN2_F15R2_FB5      CH32V_CAN1_F15R2_FB5
#define CH32V_CAN2_F15R2_FB6      CH32V_CAN1_F15R2_FB6
#define CH32V_CAN2_F15R2_FB7      CH32V_CAN1_F15R2_FB7
#define CH32V_CAN2_F15R2_FB8      CH32V_CAN1_F15R2_FB8
#define CH32V_CAN2_F15R2_FB9      CH32V_CAN1_F15R2_FB9
#define CH32V_CAN2_F15R2_FB10     CH32V_CAN1_F15R2_FB10
#define CH32V_CAN2_F15R2_FB11     CH32V_CAN1_F15R2_FB11
#define CH32V_CAN2_F15R2_FB12     CH32V_CAN1_F15R2_FB12
#define CH32V_CAN2_F15R2_FB13     CH32V_CAN1_F15R2_FB13
#define CH32V_CAN2_F15R2_FB14     CH32V_CAN1_F15R2_FB14
#define CH32V_CAN2_F15R2_FB15     CH32V_CAN1_F15R2_FB15
#define CH32V_CAN2_F15R2_FB16     CH32V_CAN1_F15R2_FB16
#define CH32V_CAN2_F15R2_FB17     CH32V_CAN1_F15R2_FB17
#define CH32V_CAN2_F15R2_FB18     CH32V_CAN1_F15R2_FB18
#define CH32V_CAN2_F15R2_FB19     CH32V_CAN1_F15R2_FB19
#define CH32V_CAN2_F15R2_FB20     CH32V_CAN1_F15R2_FB20
#define CH32V_CAN2_F15R2_FB21     CH32V_CAN1_F15R2_FB21
#define CH32V_CAN2_F15R2_FB22     CH32V_CAN1_F15R2_FB22
#define CH32V_CAN2_F15R2_FB23     CH32V_CAN1_F15R2_FB23
#define CH32V_CAN2_F15R2_FB24     CH32V_CAN1_F15R2_FB24
#define CH32V_CAN2_F15R2_FB25     CH32V_CAN1_F15R2_FB25
#define CH32V_CAN2_F15R2_FB26     CH32V_CAN1_F15R2_FB26
#define CH32V_CAN2_F15R2_FB27     CH32V_CAN1_F15R2_FB27
#define CH32V_CAN2_F15R2_FB28     CH32V_CAN1_F15R2_FB28
#define CH32V_CAN2_F15R2_FB29     CH32V_CAN1_F15R2_FB29
#define CH32V_CAN2_F15R2_FB30     CH32V_CAN1_F15R2_FB30
#define CH32V_CAN2_F15R2_FB31     CH32V_CAN1_F15R2_FB31
#define CH32V_CAN2_F16R1_OFFSET   CH32V_CAN1_F16R1_OFFSET
#define CH32V_CAN2_F16R1          CH32V_CAN1_F16R1
#define CH32V_CAN2_F16R1_FB0      CH32V_CAN1_F16R1_FB0
#define CH32V_CAN2_F16R1_FB1      CH32V_CAN1_F16R1_FB1
#define CH32V_CAN2_F16R1_FB2      CH32V_CAN1_F16R1_FB2
#define CH32V_CAN2_F16R1_FB3      CH32V_CAN1_F16R1_FB3
#define CH32V_CAN2_F16R1_FB4      CH32V_CAN1_F16R1_FB4
#define CH32V_CAN2_F16R1_FB5      CH32V_CAN1_F16R1_FB5
#define CH32V_CAN2_F16R1_FB6      CH32V_CAN1_F16R1_FB6
#define CH32V_CAN2_F16R1_FB7      CH32V_CAN1_F16R1_FB7
#define CH32V_CAN2_F16R1_FB8      CH32V_CAN1_F16R1_FB8
#define CH32V_CAN2_F16R1_FB9      CH32V_CAN1_F16R1_FB9
#define CH32V_CAN2_F16R1_FB10     CH32V_CAN1_F16R1_FB10
#define CH32V_CAN2_F16R1_FB11     CH32V_CAN1_F16R1_FB11
#define CH32V_CAN2_F16R1_FB12     CH32V_CAN1_F16R1_FB12
#define CH32V_CAN2_F16R1_FB13     CH32V_CAN1_F16R1_FB13
#define CH32V_CAN2_F16R1_FB14     CH32V_CAN1_F16R1_FB14
#define CH32V_CAN2_F16R1_FB15     CH32V_CAN1_F16R1_FB15
#define CH32V_CAN2_F16R1_FB16     CH32V_CAN1_F16R1_FB16
#define CH32V_CAN2_F16R1_FB17     CH32V_CAN1_F16R1_FB17
#define CH32V_CAN2_F16R1_FB18     CH32V_CAN1_F16R1_FB18
#define CH32V_CAN2_F16R1_FB19     CH32V_CAN1_F16R1_FB19
#define CH32V_CAN2_F16R1_FB20     CH32V_CAN1_F16R1_FB20
#define CH32V_CAN2_F16R1_FB21     CH32V_CAN1_F16R1_FB21
#define CH32V_CAN2_F16R1_FB22     CH32V_CAN1_F16R1_FB22
#define CH32V_CAN2_F16R1_FB23     CH32V_CAN1_F16R1_FB23
#define CH32V_CAN2_F16R1_FB24     CH32V_CAN1_F16R1_FB24
#define CH32V_CAN2_F16R1_FB25     CH32V_CAN1_F16R1_FB25
#define CH32V_CAN2_F16R1_FB26     CH32V_CAN1_F16R1_FB26
#define CH32V_CAN2_F16R1_FB27     CH32V_CAN1_F16R1_FB27
#define CH32V_CAN2_F16R1_FB28     CH32V_CAN1_F16R1_FB28
#define CH32V_CAN2_F16R1_FB29     CH32V_CAN1_F16R1_FB29
#define CH32V_CAN2_F16R1_FB30     CH32V_CAN1_F16R1_FB30
#define CH32V_CAN2_F16R1_FB31     CH32V_CAN1_F16R1_FB31
#define CH32V_CAN2_F16R2_OFFSET   CH32V_CAN1_F16R2_OFFSET
#define CH32V_CAN2_F16R2          CH32V_CAN1_F16R2
#define CH32V_CAN2_F16R2_FB0      CH32V_CAN1_F16R2_FB0
#define CH32V_CAN2_F16R2_FB1      CH32V_CAN1_F16R2_FB1
#define CH32V_CAN2_F16R2_FB2      CH32V_CAN1_F16R2_FB2
#define CH32V_CAN2_F16R2_FB3      CH32V_CAN1_F16R2_FB3
#define CH32V_CAN2_F16R2_FB4      CH32V_CAN1_F16R2_FB4
#define CH32V_CAN2_F16R2_FB5      CH32V_CAN1_F16R2_FB5
#define CH32V_CAN2_F16R2_FB6      CH32V_CAN1_F16R2_FB6
#define CH32V_CAN2_F16R2_FB7      CH32V_CAN1_F16R2_FB7
#define CH32V_CAN2_F16R2_FB8      CH32V_CAN1_F16R2_FB8
#define CH32V_CAN2_F16R2_FB9      CH32V_CAN1_F16R2_FB9
#define CH32V_CAN2_F16R2_FB10     CH32V_CAN1_F16R2_FB10
#define CH32V_CAN2_F16R2_FB11     CH32V_CAN1_F16R2_FB11
#define CH32V_CAN2_F16R2_FB12     CH32V_CAN1_F16R2_FB12
#define CH32V_CAN2_F16R2_FB13     CH32V_CAN1_F16R2_FB13
#define CH32V_CAN2_F16R2_FB14     CH32V_CAN1_F16R2_FB14
#define CH32V_CAN2_F16R2_FB15     CH32V_CAN1_F16R2_FB15
#define CH32V_CAN2_F16R2_FB16     CH32V_CAN1_F16R2_FB16
#define CH32V_CAN2_F16R2_FB17     CH32V_CAN1_F16R2_FB17
#define CH32V_CAN2_F16R2_FB18     CH32V_CAN1_F16R2_FB18
#define CH32V_CAN2_F16R2_FB19     CH32V_CAN1_F16R2_FB19
#define CH32V_CAN2_F16R2_FB20     CH32V_CAN1_F16R2_FB20
#define CH32V_CAN2_F16R2_FB21     CH32V_CAN1_F16R2_FB21
#define CH32V_CAN2_F16R2_FB22     CH32V_CAN1_F16R2_FB22
#define CH32V_CAN2_F16R2_FB23     CH32V_CAN1_F16R2_FB23
#define CH32V_CAN2_F16R2_FB24     CH32V_CAN1_F16R2_FB24
#define CH32V_CAN2_F16R2_FB25     CH32V_CAN1_F16R2_FB25
#define CH32V_CAN2_F16R2_FB26     CH32V_CAN1_F16R2_FB26
#define CH32V_CAN2_F16R2_FB27     CH32V_CAN1_F16R2_FB27
#define CH32V_CAN2_F16R2_FB28     CH32V_CAN1_F16R2_FB28
#define CH32V_CAN2_F16R2_FB29     CH32V_CAN1_F16R2_FB29
#define CH32V_CAN2_F16R2_FB30     CH32V_CAN1_F16R2_FB30
#define CH32V_CAN2_F16R2_FB31     CH32V_CAN1_F16R2_FB31
#define CH32V_CAN2_F17R1_OFFSET   CH32V_CAN1_F17R1_OFFSET
#define CH32V_CAN2_F17R1          CH32V_CAN1_F17R1
#define CH32V_CAN2_F17R1_FB0      CH32V_CAN1_F17R1_FB0
#define CH32V_CAN2_F17R1_FB1      CH32V_CAN1_F17R1_FB1
#define CH32V_CAN2_F17R1_FB2      CH32V_CAN1_F17R1_FB2
#define CH32V_CAN2_F17R1_FB3      CH32V_CAN1_F17R1_FB3
#define CH32V_CAN2_F17R1_FB4      CH32V_CAN1_F17R1_FB4
#define CH32V_CAN2_F17R1_FB5      CH32V_CAN1_F17R1_FB5
#define CH32V_CAN2_F17R1_FB6      CH32V_CAN1_F17R1_FB6
#define CH32V_CAN2_F17R1_FB7      CH32V_CAN1_F17R1_FB7
#define CH32V_CAN2_F17R1_FB8      CH32V_CAN1_F17R1_FB8
#define CH32V_CAN2_F17R1_FB9      CH32V_CAN1_F17R1_FB9
#define CH32V_CAN2_F17R1_FB10     CH32V_CAN1_F17R1_FB10
#define CH32V_CAN2_F17R1_FB11     CH32V_CAN1_F17R1_FB11
#define CH32V_CAN2_F17R1_FB12     CH32V_CAN1_F17R1_FB12
#define CH32V_CAN2_F17R1_FB13     CH32V_CAN1_F17R1_FB13
#define CH32V_CAN2_F17R1_FB14     CH32V_CAN1_F17R1_FB14
#define CH32V_CAN2_F17R1_FB15     CH32V_CAN1_F17R1_FB15
#define CH32V_CAN2_F17R1_FB16     CH32V_CAN1_F17R1_FB16
#define CH32V_CAN2_F17R1_FB17     CH32V_CAN1_F17R1_FB17
#define CH32V_CAN2_F17R1_FB18     CH32V_CAN1_F17R1_FB18
#define CH32V_CAN2_F17R1_FB19     CH32V_CAN1_F17R1_FB19
#define CH32V_CAN2_F17R1_FB20     CH32V_CAN1_F17R1_FB20
#define CH32V_CAN2_F17R1_FB21     CH32V_CAN1_F17R1_FB21
#define CH32V_CAN2_F17R1_FB22     CH32V_CAN1_F17R1_FB22
#define CH32V_CAN2_F17R1_FB23     CH32V_CAN1_F17R1_FB23
#define CH32V_CAN2_F17R1_FB24     CH32V_CAN1_F17R1_FB24
#define CH32V_CAN2_F17R1_FB25     CH32V_CAN1_F17R1_FB25
#define CH32V_CAN2_F17R1_FB26     CH32V_CAN1_F17R1_FB26
#define CH32V_CAN2_F17R1_FB27     CH32V_CAN1_F17R1_FB27
#define CH32V_CAN2_F17R1_FB28     CH32V_CAN1_F17R1_FB28
#define CH32V_CAN2_F17R1_FB29     CH32V_CAN1_F17R1_FB29
#define CH32V_CAN2_F17R1_FB30     CH32V_CAN1_F17R1_FB30
#define CH32V_CAN2_F17R1_FB31     CH32V_CAN1_F17R1_FB31
#define CH32V_CAN2_F17R2_OFFSET   CH32V_CAN1_F17R2_OFFSET
#define CH32V_CAN2_F17R2          CH32V_CAN1_F17R2
#define CH32V_CAN2_F17R2_FB0      CH32V_CAN1_F17R2_FB0
#define CH32V_CAN2_F17R2_FB1      CH32V_CAN1_F17R2_FB1
#define CH32V_CAN2_F17R2_FB2      CH32V_CAN1_F17R2_FB2
#define CH32V_CAN2_F17R2_FB3      CH32V_CAN1_F17R2_FB3
#define CH32V_CAN2_F17R2_FB4      CH32V_CAN1_F17R2_FB4
#define CH32V_CAN2_F17R2_FB5      CH32V_CAN1_F17R2_FB5
#define CH32V_CAN2_F17R2_FB6      CH32V_CAN1_F17R2_FB6
#define CH32V_CAN2_F17R2_FB7      CH32V_CAN1_F17R2_FB7
#define CH32V_CAN2_F17R2_FB8      CH32V_CAN1_F17R2_FB8
#define CH32V_CAN2_F17R2_FB9      CH32V_CAN1_F17R2_FB9
#define CH32V_CAN2_F17R2_FB10     CH32V_CAN1_F17R2_FB10
#define CH32V_CAN2_F17R2_FB11     CH32V_CAN1_F17R2_FB11
#define CH32V_CAN2_F17R2_FB12     CH32V_CAN1_F17R2_FB12
#define CH32V_CAN2_F17R2_FB13     CH32V_CAN1_F17R2_FB13
#define CH32V_CAN2_F17R2_FB14     CH32V_CAN1_F17R2_FB14
#define CH32V_CAN2_F17R2_FB15     CH32V_CAN1_F17R2_FB15
#define CH32V_CAN2_F17R2_FB16     CH32V_CAN1_F17R2_FB16
#define CH32V_CAN2_F17R2_FB17     CH32V_CAN1_F17R2_FB17
#define CH32V_CAN2_F17R2_FB18     CH32V_CAN1_F17R2_FB18
#define CH32V_CAN2_F17R2_FB19     CH32V_CAN1_F17R2_FB19
#define CH32V_CAN2_F17R2_FB20     CH32V_CAN1_F17R2_FB20
#define CH32V_CAN2_F17R2_FB21     CH32V_CAN1_F17R2_FB21
#define CH32V_CAN2_F17R2_FB22     CH32V_CAN1_F17R2_FB22
#define CH32V_CAN2_F17R2_FB23     CH32V_CAN1_F17R2_FB23
#define CH32V_CAN2_F17R2_FB24     CH32V_CAN1_F17R2_FB24
#define CH32V_CAN2_F17R2_FB25     CH32V_CAN1_F17R2_FB25
#define CH32V_CAN2_F17R2_FB26     CH32V_CAN1_F17R2_FB26
#define CH32V_CAN2_F17R2_FB27     CH32V_CAN1_F17R2_FB27
#define CH32V_CAN2_F17R2_FB28     CH32V_CAN1_F17R2_FB28
#define CH32V_CAN2_F17R2_FB29     CH32V_CAN1_F17R2_FB29
#define CH32V_CAN2_F17R2_FB30     CH32V_CAN1_F17R2_FB30
#define CH32V_CAN2_F17R2_FB31     CH32V_CAN1_F17R2_FB31
#define CH32V_CAN2_F18R1_OFFSET   CH32V_CAN1_F18R1_OFFSET
#define CH32V_CAN2_F18R1          CH32V_CAN1_F18R1
#define CH32V_CAN2_F18R1_FB0      CH32V_CAN1_F18R1_FB0
#define CH32V_CAN2_F18R1_FB1      CH32V_CAN1_F18R1_FB1
#define CH32V_CAN2_F18R1_FB2      CH32V_CAN1_F18R1_FB2
#define CH32V_CAN2_F18R1_FB3      CH32V_CAN1_F18R1_FB3
#define CH32V_CAN2_F18R1_FB4      CH32V_CAN1_F18R1_FB4
#define CH32V_CAN2_F18R1_FB5      CH32V_CAN1_F18R1_FB5
#define CH32V_CAN2_F18R1_FB6      CH32V_CAN1_F18R1_FB6
#define CH32V_CAN2_F18R1_FB7      CH32V_CAN1_F18R1_FB7
#define CH32V_CAN2_F18R1_FB8      CH32V_CAN1_F18R1_FB8
#define CH32V_CAN2_F18R1_FB9      CH32V_CAN1_F18R1_FB9
#define CH32V_CAN2_F18R1_FB10     CH32V_CAN1_F18R1_FB10
#define CH32V_CAN2_F18R1_FB11     CH32V_CAN1_F18R1_FB11
#define CH32V_CAN2_F18R1_FB12     CH32V_CAN1_F18R1_FB12
#define CH32V_CAN2_F18R1_FB13     CH32V_CAN1_F18R1_FB13
#define CH32V_CAN2_F18R1_FB14     CH32V_CAN1_F18R1_FB14
#define CH32V_CAN2_F18R1_FB15     CH32V_CAN1_F18R1_FB15
#define CH32V_CAN2_F18R1_FB16     CH32V_CAN1_F18R1_FB16
#define CH32V_CAN2_F18R1_FB17     CH32V_CAN1_F18R1_FB17
#define CH32V_CAN2_F18R1_FB18     CH32V_CAN1_F18R1_FB18
#define CH32V_CAN2_F18R1_FB19     CH32V_CAN1_F18R1_FB19
#define CH32V_CAN2_F18R1_FB20     CH32V_CAN1_F18R1_FB20
#define CH32V_CAN2_F18R1_FB21     CH32V_CAN1_F18R1_FB21
#define CH32V_CAN2_F18R1_FB22     CH32V_CAN1_F18R1_FB22
#define CH32V_CAN2_F18R1_FB23     CH32V_CAN1_F18R1_FB23
#define CH32V_CAN2_F18R1_FB24     CH32V_CAN1_F18R1_FB24
#define CH32V_CAN2_F18R1_FB25     CH32V_CAN1_F18R1_FB25
#define CH32V_CAN2_F18R1_FB26     CH32V_CAN1_F18R1_FB26
#define CH32V_CAN2_F18R1_FB27     CH32V_CAN1_F18R1_FB27
#define CH32V_CAN2_F18R1_FB28     CH32V_CAN1_F18R1_FB28
#define CH32V_CAN2_F18R1_FB29     CH32V_CAN1_F18R1_FB29
#define CH32V_CAN2_F18R1_FB30     CH32V_CAN1_F18R1_FB30
#define CH32V_CAN2_F18R1_FB31     CH32V_CAN1_F18R1_FB31
#define CH32V_CAN2_F18R2_OFFSET   CH32V_CAN1_F18R2_OFFSET
#define CH32V_CAN2_F18R2          CH32V_CAN1_F18R2
#define CH32V_CAN2_F18R2_FB0      CH32V_CAN1_F18R2_FB0
#define CH32V_CAN2_F18R2_FB1      CH32V_CAN1_F18R2_FB1
#define CH32V_CAN2_F18R2_FB2      CH32V_CAN1_F18R2_FB2
#define CH32V_CAN2_F18R2_FB3      CH32V_CAN1_F18R2_FB3
#define CH32V_CAN2_F18R2_FB4      CH32V_CAN1_F18R2_FB4
#define CH32V_CAN2_F18R2_FB5      CH32V_CAN1_F18R2_FB5
#define CH32V_CAN2_F18R2_FB6      CH32V_CAN1_F18R2_FB6
#define CH32V_CAN2_F18R2_FB7      CH32V_CAN1_F18R2_FB7
#define CH32V_CAN2_F18R2_FB8      CH32V_CAN1_F18R2_FB8
#define CH32V_CAN2_F18R2_FB9      CH32V_CAN1_F18R2_FB9
#define CH32V_CAN2_F18R2_FB10     CH32V_CAN1_F18R2_FB10
#define CH32V_CAN2_F18R2_FB11     CH32V_CAN1_F18R2_FB11
#define CH32V_CAN2_F18R2_FB12     CH32V_CAN1_F18R2_FB12
#define CH32V_CAN2_F18R2_FB13     CH32V_CAN1_F18R2_FB13
#define CH32V_CAN2_F18R2_FB14     CH32V_CAN1_F18R2_FB14
#define CH32V_CAN2_F18R2_FB15     CH32V_CAN1_F18R2_FB15
#define CH32V_CAN2_F18R2_FB16     CH32V_CAN1_F18R2_FB16
#define CH32V_CAN2_F18R2_FB17     CH32V_CAN1_F18R2_FB17
#define CH32V_CAN2_F18R2_FB18     CH32V_CAN1_F18R2_FB18
#define CH32V_CAN2_F18R2_FB19     CH32V_CAN1_F18R2_FB19
#define CH32V_CAN2_F18R2_FB20     CH32V_CAN1_F18R2_FB20
#define CH32V_CAN2_F18R2_FB21     CH32V_CAN1_F18R2_FB21
#define CH32V_CAN2_F18R2_FB22     CH32V_CAN1_F18R2_FB22
#define CH32V_CAN2_F18R2_FB23     CH32V_CAN1_F18R2_FB23
#define CH32V_CAN2_F18R2_FB24     CH32V_CAN1_F18R2_FB24
#define CH32V_CAN2_F18R2_FB25     CH32V_CAN1_F18R2_FB25
#define CH32V_CAN2_F18R2_FB26     CH32V_CAN1_F18R2_FB26
#define CH32V_CAN2_F18R2_FB27     CH32V_CAN1_F18R2_FB27
#define CH32V_CAN2_F18R2_FB28     CH32V_CAN1_F18R2_FB28
#define CH32V_CAN2_F18R2_FB29     CH32V_CAN1_F18R2_FB29
#define CH32V_CAN2_F18R2_FB30     CH32V_CAN1_F18R2_FB30
#define CH32V_CAN2_F18R2_FB31     CH32V_CAN1_F18R2_FB31
#define CH32V_CAN2_F19R1_OFFSET   CH32V_CAN1_F19R1_OFFSET
#define CH32V_CAN2_F19R1          CH32V_CAN1_F19R1
#define CH32V_CAN2_F19R1_FB0      CH32V_CAN1_F19R1_FB0
#define CH32V_CAN2_F19R1_FB1      CH32V_CAN1_F19R1_FB1
#define CH32V_CAN2_F19R1_FB2      CH32V_CAN1_F19R1_FB2
#define CH32V_CAN2_F19R1_FB3      CH32V_CAN1_F19R1_FB3
#define CH32V_CAN2_F19R1_FB4      CH32V_CAN1_F19R1_FB4
#define CH32V_CAN2_F19R1_FB5      CH32V_CAN1_F19R1_FB5
#define CH32V_CAN2_F19R1_FB6      CH32V_CAN1_F19R1_FB6
#define CH32V_CAN2_F19R1_FB7      CH32V_CAN1_F19R1_FB7
#define CH32V_CAN2_F19R1_FB8      CH32V_CAN1_F19R1_FB8
#define CH32V_CAN2_F19R1_FB9      CH32V_CAN1_F19R1_FB9
#define CH32V_CAN2_F19R1_FB10     CH32V_CAN1_F19R1_FB10
#define CH32V_CAN2_F19R1_FB11     CH32V_CAN1_F19R1_FB11
#define CH32V_CAN2_F19R1_FB12     CH32V_CAN1_F19R1_FB12
#define CH32V_CAN2_F19R1_FB13     CH32V_CAN1_F19R1_FB13
#define CH32V_CAN2_F19R1_FB14     CH32V_CAN1_F19R1_FB14
#define CH32V_CAN2_F19R1_FB15     CH32V_CAN1_F19R1_FB15
#define CH32V_CAN2_F19R1_FB16     CH32V_CAN1_F19R1_FB16
#define CH32V_CAN2_F19R1_FB17     CH32V_CAN1_F19R1_FB17
#define CH32V_CAN2_F19R1_FB18     CH32V_CAN1_F19R1_FB18
#define CH32V_CAN2_F19R1_FB19     CH32V_CAN1_F19R1_FB19
#define CH32V_CAN2_F19R1_FB20     CH32V_CAN1_F19R1_FB20
#define CH32V_CAN2_F19R1_FB21     CH32V_CAN1_F19R1_FB21
#define CH32V_CAN2_F19R1_FB22     CH32V_CAN1_F19R1_FB22
#define CH32V_CAN2_F19R1_FB23     CH32V_CAN1_F19R1_FB23
#define CH32V_CAN2_F19R1_FB24     CH32V_CAN1_F19R1_FB24
#define CH32V_CAN2_F19R1_FB25     CH32V_CAN1_F19R1_FB25
#define CH32V_CAN2_F19R1_FB26     CH32V_CAN1_F19R1_FB26
#define CH32V_CAN2_F19R1_FB27     CH32V_CAN1_F19R1_FB27
#define CH32V_CAN2_F19R1_FB28     CH32V_CAN1_F19R1_FB28
#define CH32V_CAN2_F19R1_FB29     CH32V_CAN1_F19R1_FB29
#define CH32V_CAN2_F19R1_FB30     CH32V_CAN1_F19R1_FB30
#define CH32V_CAN2_F19R1_FB31     CH32V_CAN1_F19R1_FB31
#define CH32V_CAN2_F19R2_OFFSET   CH32V_CAN1_F19R2_OFFSET
#define CH32V_CAN2_F19R2          CH32V_CAN1_F19R2
#define CH32V_CAN2_F19R2_FB0      CH32V_CAN1_F19R2_FB0
#define CH32V_CAN2_F19R2_FB1      CH32V_CAN1_F19R2_FB1
#define CH32V_CAN2_F19R2_FB2      CH32V_CAN1_F19R2_FB2
#define CH32V_CAN2_F19R2_FB3      CH32V_CAN1_F19R2_FB3
#define CH32V_CAN2_F19R2_FB4      CH32V_CAN1_F19R2_FB4
#define CH32V_CAN2_F19R2_FB5      CH32V_CAN1_F19R2_FB5
#define CH32V_CAN2_F19R2_FB6      CH32V_CAN1_F19R2_FB6
#define CH32V_CAN2_F19R2_FB7      CH32V_CAN1_F19R2_FB7
#define CH32V_CAN2_F19R2_FB8      CH32V_CAN1_F19R2_FB8
#define CH32V_CAN2_F19R2_FB9      CH32V_CAN1_F19R2_FB9
#define CH32V_CAN2_F19R2_FB10     CH32V_CAN1_F19R2_FB10
#define CH32V_CAN2_F19R2_FB11     CH32V_CAN1_F19R2_FB11
#define CH32V_CAN2_F19R2_FB12     CH32V_CAN1_F19R2_FB12
#define CH32V_CAN2_F19R2_FB13     CH32V_CAN1_F19R2_FB13
#define CH32V_CAN2_F19R2_FB14     CH32V_CAN1_F19R2_FB14
#define CH32V_CAN2_F19R2_FB15     CH32V_CAN1_F19R2_FB15
#define CH32V_CAN2_F19R2_FB16     CH32V_CAN1_F19R2_FB16
#define CH32V_CAN2_F19R2_FB17     CH32V_CAN1_F19R2_FB17
#define CH32V_CAN2_F19R2_FB18     CH32V_CAN1_F19R2_FB18
#define CH32V_CAN2_F19R2_FB19     CH32V_CAN1_F19R2_FB19
#define CH32V_CAN2_F19R2_FB20     CH32V_CAN1_F19R2_FB20
#define CH32V_CAN2_F19R2_FB21     CH32V_CAN1_F19R2_FB21
#define CH32V_CAN2_F19R2_FB22     CH32V_CAN1_F19R2_FB22
#define CH32V_CAN2_F19R2_FB23     CH32V_CAN1_F19R2_FB23
#define CH32V_CAN2_F19R2_FB24     CH32V_CAN1_F19R2_FB24
#define CH32V_CAN2_F19R2_FB25     CH32V_CAN1_F19R2_FB25
#define CH32V_CAN2_F19R2_FB26     CH32V_CAN1_F19R2_FB26
#define CH32V_CAN2_F19R2_FB27     CH32V_CAN1_F19R2_FB27
#define CH32V_CAN2_F19R2_FB28     CH32V_CAN1_F19R2_FB28
#define CH32V_CAN2_F19R2_FB29     CH32V_CAN1_F19R2_FB29
#define CH32V_CAN2_F19R2_FB30     CH32V_CAN1_F19R2_FB30
#define CH32V_CAN2_F19R2_FB31     CH32V_CAN1_F19R2_FB31
#define CH32V_CAN2_F20R1_OFFSET   CH32V_CAN1_F20R1_OFFSET
#define CH32V_CAN2_F20R1          CH32V_CAN1_F20R1
#define CH32V_CAN2_F20R1_FB0      CH32V_CAN1_F20R1_FB0
#define CH32V_CAN2_F20R1_FB1      CH32V_CAN1_F20R1_FB1
#define CH32V_CAN2_F20R1_FB2      CH32V_CAN1_F20R1_FB2
#define CH32V_CAN2_F20R1_FB3      CH32V_CAN1_F20R1_FB3
#define CH32V_CAN2_F20R1_FB4      CH32V_CAN1_F20R1_FB4
#define CH32V_CAN2_F20R1_FB5      CH32V_CAN1_F20R1_FB5
#define CH32V_CAN2_F20R1_FB6      CH32V_CAN1_F20R1_FB6
#define CH32V_CAN2_F20R1_FB7      CH32V_CAN1_F20R1_FB7
#define CH32V_CAN2_F20R1_FB8      CH32V_CAN1_F20R1_FB8
#define CH32V_CAN2_F20R1_FB9      CH32V_CAN1_F20R1_FB9
#define CH32V_CAN2_F20R1_FB10     CH32V_CAN1_F20R1_FB10
#define CH32V_CAN2_F20R1_FB11     CH32V_CAN1_F20R1_FB11
#define CH32V_CAN2_F20R1_FB12     CH32V_CAN1_F20R1_FB12
#define CH32V_CAN2_F20R1_FB13     CH32V_CAN1_F20R1_FB13
#define CH32V_CAN2_F20R1_FB14     CH32V_CAN1_F20R1_FB14
#define CH32V_CAN2_F20R1_FB15     CH32V_CAN1_F20R1_FB15
#define CH32V_CAN2_F20R1_FB16     CH32V_CAN1_F20R1_FB16
#define CH32V_CAN2_F20R1_FB17     CH32V_CAN1_F20R1_FB17
#define CH32V_CAN2_F20R1_FB18     CH32V_CAN1_F20R1_FB18
#define CH32V_CAN2_F20R1_FB19     CH32V_CAN1_F20R1_FB19
#define CH32V_CAN2_F20R1_FB20     CH32V_CAN1_F20R1_FB20
#define CH32V_CAN2_F20R1_FB21     CH32V_CAN1_F20R1_FB21
#define CH32V_CAN2_F20R1_FB22     CH32V_CAN1_F20R1_FB22
#define CH32V_CAN2_F20R1_FB23     CH32V_CAN1_F20R1_FB23
#define CH32V_CAN2_F20R1_FB24     CH32V_CAN1_F20R1_FB24
#define CH32V_CAN2_F20R1_FB25     CH32V_CAN1_F20R1_FB25
#define CH32V_CAN2_F20R1_FB26     CH32V_CAN1_F20R1_FB26
#define CH32V_CAN2_F20R1_FB27     CH32V_CAN1_F20R1_FB27
#define CH32V_CAN2_F20R1_FB28     CH32V_CAN1_F20R1_FB28
#define CH32V_CAN2_F20R1_FB29     CH32V_CAN1_F20R1_FB29
#define CH32V_CAN2_F20R1_FB30     CH32V_CAN1_F20R1_FB30
#define CH32V_CAN2_F20R1_FB31     CH32V_CAN1_F20R1_FB31
#define CH32V_CAN2_F20R2_OFFSET   CH32V_CAN1_F20R2_OFFSET
#define CH32V_CAN2_F20R2          CH32V_CAN1_F20R2
#define CH32V_CAN2_F20R2_FB0      CH32V_CAN1_F20R2_FB0
#define CH32V_CAN2_F20R2_FB1      CH32V_CAN1_F20R2_FB1
#define CH32V_CAN2_F20R2_FB2      CH32V_CAN1_F20R2_FB2
#define CH32V_CAN2_F20R2_FB3      CH32V_CAN1_F20R2_FB3
#define CH32V_CAN2_F20R2_FB4      CH32V_CAN1_F20R2_FB4
#define CH32V_CAN2_F20R2_FB5      CH32V_CAN1_F20R2_FB5
#define CH32V_CAN2_F20R2_FB6      CH32V_CAN1_F20R2_FB6
#define CH32V_CAN2_F20R2_FB7      CH32V_CAN1_F20R2_FB7
#define CH32V_CAN2_F20R2_FB8      CH32V_CAN1_F20R2_FB8
#define CH32V_CAN2_F20R2_FB9      CH32V_CAN1_F20R2_FB9
#define CH32V_CAN2_F20R2_FB10     CH32V_CAN1_F20R2_FB10
#define CH32V_CAN2_F20R2_FB11     CH32V_CAN1_F20R2_FB11
#define CH32V_CAN2_F20R2_FB12     CH32V_CAN1_F20R2_FB12
#define CH32V_CAN2_F20R2_FB13     CH32V_CAN1_F20R2_FB13
#define CH32V_CAN2_F20R2_FB14     CH32V_CAN1_F20R2_FB14
#define CH32V_CAN2_F20R2_FB15     CH32V_CAN1_F20R2_FB15
#define CH32V_CAN2_F20R2_FB16     CH32V_CAN1_F20R2_FB16
#define CH32V_CAN2_F20R2_FB17     CH32V_CAN1_F20R2_FB17
#define CH32V_CAN2_F20R2_FB18     CH32V_CAN1_F20R2_FB18
#define CH32V_CAN2_F20R2_FB19     CH32V_CAN1_F20R2_FB19
#define CH32V_CAN2_F20R2_FB20     CH32V_CAN1_F20R2_FB20
#define CH32V_CAN2_F20R2_FB21     CH32V_CAN1_F20R2_FB21
#define CH32V_CAN2_F20R2_FB22     CH32V_CAN1_F20R2_FB22
#define CH32V_CAN2_F20R2_FB23     CH32V_CAN1_F20R2_FB23
#define CH32V_CAN2_F20R2_FB24     CH32V_CAN1_F20R2_FB24
#define CH32V_CAN2_F20R2_FB25     CH32V_CAN1_F20R2_FB25
#define CH32V_CAN2_F20R2_FB26     CH32V_CAN1_F20R2_FB26
#define CH32V_CAN2_F20R2_FB27     CH32V_CAN1_F20R2_FB27
#define CH32V_CAN2_F20R2_FB28     CH32V_CAN1_F20R2_FB28
#define CH32V_CAN2_F20R2_FB29     CH32V_CAN1_F20R2_FB29
#define CH32V_CAN2_F20R2_FB30     CH32V_CAN1_F20R2_FB30
#define CH32V_CAN2_F20R2_FB31     CH32V_CAN1_F20R2_FB31
#define CH32V_CAN2_F21R1_OFFSET   CH32V_CAN1_F21R1_OFFSET
#define CH32V_CAN2_F21R1          CH32V_CAN1_F21R1
#define CH32V_CAN2_F21R1_FB0      CH32V_CAN1_F21R1_FB0
#define CH32V_CAN2_F21R1_FB1      CH32V_CAN1_F21R1_FB1
#define CH32V_CAN2_F21R1_FB2      CH32V_CAN1_F21R1_FB2
#define CH32V_CAN2_F21R1_FB3      CH32V_CAN1_F21R1_FB3
#define CH32V_CAN2_F21R1_FB4      CH32V_CAN1_F21R1_FB4
#define CH32V_CAN2_F21R1_FB5      CH32V_CAN1_F21R1_FB5
#define CH32V_CAN2_F21R1_FB6      CH32V_CAN1_F21R1_FB6
#define CH32V_CAN2_F21R1_FB7      CH32V_CAN1_F21R1_FB7
#define CH32V_CAN2_F21R1_FB8      CH32V_CAN1_F21R1_FB8
#define CH32V_CAN2_F21R1_FB9      CH32V_CAN1_F21R1_FB9
#define CH32V_CAN2_F21R1_FB10     CH32V_CAN1_F21R1_FB10
#define CH32V_CAN2_F21R1_FB11     CH32V_CAN1_F21R1_FB11
#define CH32V_CAN2_F21R1_FB12     CH32V_CAN1_F21R1_FB12
#define CH32V_CAN2_F21R1_FB13     CH32V_CAN1_F21R1_FB13
#define CH32V_CAN2_F21R1_FB14     CH32V_CAN1_F21R1_FB14
#define CH32V_CAN2_F21R1_FB15     CH32V_CAN1_F21R1_FB15
#define CH32V_CAN2_F21R1_FB16     CH32V_CAN1_F21R1_FB16
#define CH32V_CAN2_F21R1_FB17     CH32V_CAN1_F21R1_FB17
#define CH32V_CAN2_F21R1_FB18     CH32V_CAN1_F21R1_FB18
#define CH32V_CAN2_F21R1_FB19     CH32V_CAN1_F21R1_FB19
#define CH32V_CAN2_F21R1_FB20     CH32V_CAN1_F21R1_FB20
#define CH32V_CAN2_F21R1_FB21     CH32V_CAN1_F21R1_FB21
#define CH32V_CAN2_F21R1_FB22     CH32V_CAN1_F21R1_FB22
#define CH32V_CAN2_F21R1_FB23     CH32V_CAN1_F21R1_FB23
#define CH32V_CAN2_F21R1_FB24     CH32V_CAN1_F21R1_FB24
#define CH32V_CAN2_F21R1_FB25     CH32V_CAN1_F21R1_FB25
#define CH32V_CAN2_F21R1_FB26     CH32V_CAN1_F21R1_FB26
#define CH32V_CAN2_F21R1_FB27     CH32V_CAN1_F21R1_FB27
#define CH32V_CAN2_F21R1_FB28     CH32V_CAN1_F21R1_FB28
#define CH32V_CAN2_F21R1_FB29     CH32V_CAN1_F21R1_FB29
#define CH32V_CAN2_F21R1_FB30     CH32V_CAN1_F21R1_FB30
#define CH32V_CAN2_F21R1_FB31     CH32V_CAN1_F21R1_FB31
#define CH32V_CAN2_F21R2_OFFSET   CH32V_CAN1_F21R2_OFFSET
#define CH32V_CAN2_F21R2          CH32V_CAN1_F21R2
#define CH32V_CAN2_F21R2_FB0      CH32V_CAN1_F21R2_FB0
#define CH32V_CAN2_F21R2_FB1      CH32V_CAN1_F21R2_FB1
#define CH32V_CAN2_F21R2_FB2      CH32V_CAN1_F21R2_FB2
#define CH32V_CAN2_F21R2_FB3      CH32V_CAN1_F21R2_FB3
#define CH32V_CAN2_F21R2_FB4      CH32V_CAN1_F21R2_FB4
#define CH32V_CAN2_F21R2_FB5      CH32V_CAN1_F21R2_FB5
#define CH32V_CAN2_F21R2_FB6      CH32V_CAN1_F21R2_FB6
#define CH32V_CAN2_F21R2_FB7      CH32V_CAN1_F21R2_FB7
#define CH32V_CAN2_F21R2_FB8      CH32V_CAN1_F21R2_FB8
#define CH32V_CAN2_F21R2_FB9      CH32V_CAN1_F21R2_FB9
#define CH32V_CAN2_F21R2_FB10     CH32V_CAN1_F21R2_FB10
#define CH32V_CAN2_F21R2_FB11     CH32V_CAN1_F21R2_FB11
#define CH32V_CAN2_F21R2_FB12     CH32V_CAN1_F21R2_FB12
#define CH32V_CAN2_F21R2_FB13     CH32V_CAN1_F21R2_FB13
#define CH32V_CAN2_F21R2_FB14     CH32V_CAN1_F21R2_FB14
#define CH32V_CAN2_F21R2_FB15     CH32V_CAN1_F21R2_FB15
#define CH32V_CAN2_F21R2_FB16     CH32V_CAN1_F21R2_FB16
#define CH32V_CAN2_F21R2_FB17     CH32V_CAN1_F21R2_FB17
#define CH32V_CAN2_F21R2_FB18     CH32V_CAN1_F21R2_FB18
#define CH32V_CAN2_F21R2_FB19     CH32V_CAN1_F21R2_FB19
#define CH32V_CAN2_F21R2_FB20     CH32V_CAN1_F21R2_FB20
#define CH32V_CAN2_F21R2_FB21     CH32V_CAN1_F21R2_FB21
#define CH32V_CAN2_F21R2_FB22     CH32V_CAN1_F21R2_FB22
#define CH32V_CAN2_F21R2_FB23     CH32V_CAN1_F21R2_FB23
#define CH32V_CAN2_F21R2_FB24     CH32V_CAN1_F21R2_FB24
#define CH32V_CAN2_F21R2_FB25     CH32V_CAN1_F21R2_FB25
#define CH32V_CAN2_F21R2_FB26     CH32V_CAN1_F21R2_FB26
#define CH32V_CAN2_F21R2_FB27     CH32V_CAN1_F21R2_FB27
#define CH32V_CAN2_F21R2_FB28     CH32V_CAN1_F21R2_FB28
#define CH32V_CAN2_F21R2_FB29     CH32V_CAN1_F21R2_FB29
#define CH32V_CAN2_F21R2_FB30     CH32V_CAN1_F21R2_FB30
#define CH32V_CAN2_F21R2_FB31     CH32V_CAN1_F21R2_FB31
#define CH32V_CAN2_F22R1_OFFSET   CH32V_CAN1_F22R1_OFFSET
#define CH32V_CAN2_F22R1          CH32V_CAN1_F22R1
#define CH32V_CAN2_F22R1_FB0      CH32V_CAN1_F22R1_FB0
#define CH32V_CAN2_F22R1_FB1      CH32V_CAN1_F22R1_FB1
#define CH32V_CAN2_F22R1_FB2      CH32V_CAN1_F22R1_FB2
#define CH32V_CAN2_F22R1_FB3      CH32V_CAN1_F22R1_FB3
#define CH32V_CAN2_F22R1_FB4      CH32V_CAN1_F22R1_FB4
#define CH32V_CAN2_F22R1_FB5      CH32V_CAN1_F22R1_FB5
#define CH32V_CAN2_F22R1_FB6      CH32V_CAN1_F22R1_FB6
#define CH32V_CAN2_F22R1_FB7      CH32V_CAN1_F22R1_FB7
#define CH32V_CAN2_F22R1_FB8      CH32V_CAN1_F22R1_FB8
#define CH32V_CAN2_F22R1_FB9      CH32V_CAN1_F22R1_FB9
#define CH32V_CAN2_F22R1_FB10     CH32V_CAN1_F22R1_FB10
#define CH32V_CAN2_F22R1_FB11     CH32V_CAN1_F22R1_FB11
#define CH32V_CAN2_F22R1_FB12     CH32V_CAN1_F22R1_FB12
#define CH32V_CAN2_F22R1_FB13     CH32V_CAN1_F22R1_FB13
#define CH32V_CAN2_F22R1_FB14     CH32V_CAN1_F22R1_FB14
#define CH32V_CAN2_F22R1_FB15     CH32V_CAN1_F22R1_FB15
#define CH32V_CAN2_F22R1_FB16     CH32V_CAN1_F22R1_FB16
#define CH32V_CAN2_F22R1_FB17     CH32V_CAN1_F22R1_FB17
#define CH32V_CAN2_F22R1_FB18     CH32V_CAN1_F22R1_FB18
#define CH32V_CAN2_F22R1_FB19     CH32V_CAN1_F22R1_FB19
#define CH32V_CAN2_F22R1_FB20     CH32V_CAN1_F22R1_FB20
#define CH32V_CAN2_F22R1_FB21     CH32V_CAN1_F22R1_FB21
#define CH32V_CAN2_F22R1_FB22     CH32V_CAN1_F22R1_FB22
#define CH32V_CAN2_F22R1_FB23     CH32V_CAN1_F22R1_FB23
#define CH32V_CAN2_F22R1_FB24     CH32V_CAN1_F22R1_FB24
#define CH32V_CAN2_F22R1_FB25     CH32V_CAN1_F22R1_FB25
#define CH32V_CAN2_F22R1_FB26     CH32V_CAN1_F22R1_FB26
#define CH32V_CAN2_F22R1_FB27     CH32V_CAN1_F22R1_FB27
#define CH32V_CAN2_F22R1_FB28     CH32V_CAN1_F22R1_FB28
#define CH32V_CAN2_F22R1_FB29     CH32V_CAN1_F22R1_FB29
#define CH32V_CAN2_F22R1_FB30     CH32V_CAN1_F22R1_FB30
#define CH32V_CAN2_F22R1_FB31     CH32V_CAN1_F22R1_FB31
#define CH32V_CAN2_F22R2_OFFSET   CH32V_CAN1_F22R2_OFFSET
#define CH32V_CAN2_F22R2          CH32V_CAN1_F22R2
#define CH32V_CAN2_F22R2_FB0      CH32V_CAN1_F22R2_FB0
#define CH32V_CAN2_F22R2_FB1      CH32V_CAN1_F22R2_FB1
#define CH32V_CAN2_F22R2_FB2      CH32V_CAN1_F22R2_FB2
#define CH32V_CAN2_F22R2_FB3      CH32V_CAN1_F22R2_FB3
#define CH32V_CAN2_F22R2_FB4      CH32V_CAN1_F22R2_FB4
#define CH32V_CAN2_F22R2_FB5      CH32V_CAN1_F22R2_FB5
#define CH32V_CAN2_F22R2_FB6      CH32V_CAN1_F22R2_FB6
#define CH32V_CAN2_F22R2_FB7      CH32V_CAN1_F22R2_FB7
#define CH32V_CAN2_F22R2_FB8      CH32V_CAN1_F22R2_FB8
#define CH32V_CAN2_F22R2_FB9      CH32V_CAN1_F22R2_FB9
#define CH32V_CAN2_F22R2_FB10     CH32V_CAN1_F22R2_FB10
#define CH32V_CAN2_F22R2_FB11     CH32V_CAN1_F22R2_FB11
#define CH32V_CAN2_F22R2_FB12     CH32V_CAN1_F22R2_FB12
#define CH32V_CAN2_F22R2_FB13     CH32V_CAN1_F22R2_FB13
#define CH32V_CAN2_F22R2_FB14     CH32V_CAN1_F22R2_FB14
#define CH32V_CAN2_F22R2_FB15     CH32V_CAN1_F22R2_FB15
#define CH32V_CAN2_F22R2_FB16     CH32V_CAN1_F22R2_FB16
#define CH32V_CAN2_F22R2_FB17     CH32V_CAN1_F22R2_FB17
#define CH32V_CAN2_F22R2_FB18     CH32V_CAN1_F22R2_FB18
#define CH32V_CAN2_F22R2_FB19     CH32V_CAN1_F22R2_FB19
#define CH32V_CAN2_F22R2_FB20     CH32V_CAN1_F22R2_FB20
#define CH32V_CAN2_F22R2_FB21     CH32V_CAN1_F22R2_FB21
#define CH32V_CAN2_F22R2_FB22     CH32V_CAN1_F22R2_FB22
#define CH32V_CAN2_F22R2_FB23     CH32V_CAN1_F22R2_FB23
#define CH32V_CAN2_F22R2_FB24     CH32V_CAN1_F22R2_FB24
#define CH32V_CAN2_F22R2_FB25     CH32V_CAN1_F22R2_FB25
#define CH32V_CAN2_F22R2_FB26     CH32V_CAN1_F22R2_FB26
#define CH32V_CAN2_F22R2_FB27     CH32V_CAN1_F22R2_FB27
#define CH32V_CAN2_F22R2_FB28     CH32V_CAN1_F22R2_FB28
#define CH32V_CAN2_F22R2_FB29     CH32V_CAN1_F22R2_FB29
#define CH32V_CAN2_F22R2_FB30     CH32V_CAN1_F22R2_FB30
#define CH32V_CAN2_F22R2_FB31     CH32V_CAN1_F22R2_FB31
#define CH32V_CAN2_F23R1_OFFSET   CH32V_CAN1_F23R1_OFFSET
#define CH32V_CAN2_F23R1          CH32V_CAN1_F23R1
#define CH32V_CAN2_F23R1_FB0      CH32V_CAN1_F23R1_FB0
#define CH32V_CAN2_F23R1_FB1      CH32V_CAN1_F23R1_FB1
#define CH32V_CAN2_F23R1_FB2      CH32V_CAN1_F23R1_FB2
#define CH32V_CAN2_F23R1_FB3      CH32V_CAN1_F23R1_FB3
#define CH32V_CAN2_F23R1_FB4      CH32V_CAN1_F23R1_FB4
#define CH32V_CAN2_F23R1_FB5      CH32V_CAN1_F23R1_FB5
#define CH32V_CAN2_F23R1_FB6      CH32V_CAN1_F23R1_FB6
#define CH32V_CAN2_F23R1_FB7      CH32V_CAN1_F23R1_FB7
#define CH32V_CAN2_F23R1_FB8      CH32V_CAN1_F23R1_FB8
#define CH32V_CAN2_F23R1_FB9      CH32V_CAN1_F23R1_FB9
#define CH32V_CAN2_F23R1_FB10     CH32V_CAN1_F23R1_FB10
#define CH32V_CAN2_F23R1_FB11     CH32V_CAN1_F23R1_FB11
#define CH32V_CAN2_F23R1_FB12     CH32V_CAN1_F23R1_FB12
#define CH32V_CAN2_F23R1_FB13     CH32V_CAN1_F23R1_FB13
#define CH32V_CAN2_F23R1_FB14     CH32V_CAN1_F23R1_FB14
#define CH32V_CAN2_F23R1_FB15     CH32V_CAN1_F23R1_FB15
#define CH32V_CAN2_F23R1_FB16     CH32V_CAN1_F23R1_FB16
#define CH32V_CAN2_F23R1_FB17     CH32V_CAN1_F23R1_FB17
#define CH32V_CAN2_F23R1_FB18     CH32V_CAN1_F23R1_FB18
#define CH32V_CAN2_F23R1_FB19     CH32V_CAN1_F23R1_FB19
#define CH32V_CAN2_F23R1_FB20     CH32V_CAN1_F23R1_FB20
#define CH32V_CAN2_F23R1_FB21     CH32V_CAN1_F23R1_FB21
#define CH32V_CAN2_F23R1_FB22     CH32V_CAN1_F23R1_FB22
#define CH32V_CAN2_F23R1_FB23     CH32V_CAN1_F23R1_FB23
#define CH32V_CAN2_F23R1_FB24     CH32V_CAN1_F23R1_FB24
#define CH32V_CAN2_F23R1_FB25     CH32V_CAN1_F23R1_FB25
#define CH32V_CAN2_F23R1_FB26     CH32V_CAN1_F23R1_FB26
#define CH32V_CAN2_F23R1_FB27     CH32V_CAN1_F23R1_FB27
#define CH32V_CAN2_F23R1_FB28     CH32V_CAN1_F23R1_FB28
#define CH32V_CAN2_F23R1_FB29     CH32V_CAN1_F23R1_FB29
#define CH32V_CAN2_F23R1_FB30     CH32V_CAN1_F23R1_FB30
#define CH32V_CAN2_F23R1_FB31     CH32V_CAN1_F23R1_FB31
#define CH32V_CAN2_F23R2_OFFSET   CH32V_CAN1_F23R2_OFFSET
#define CH32V_CAN2_F23R2          CH32V_CAN1_F23R2
#define CH32V_CAN2_F23R2_FB0      CH32V_CAN1_F23R2_FB0
#define CH32V_CAN2_F23R2_FB1      CH32V_CAN1_F23R2_FB1
#define CH32V_CAN2_F23R2_FB2      CH32V_CAN1_F23R2_FB2
#define CH32V_CAN2_F23R2_FB3      CH32V_CAN1_F23R2_FB3
#define CH32V_CAN2_F23R2_FB4      CH32V_CAN1_F23R2_FB4
#define CH32V_CAN2_F23R2_FB5      CH32V_CAN1_F23R2_FB5
#define CH32V_CAN2_F23R2_FB6      CH32V_CAN1_F23R2_FB6
#define CH32V_CAN2_F23R2_FB7      CH32V_CAN1_F23R2_FB7
#define CH32V_CAN2_F23R2_FB8      CH32V_CAN1_F23R2_FB8
#define CH32V_CAN2_F23R2_FB9      CH32V_CAN1_F23R2_FB9
#define CH32V_CAN2_F23R2_FB10     CH32V_CAN1_F23R2_FB10
#define CH32V_CAN2_F23R2_FB11     CH32V_CAN1_F23R2_FB11
#define CH32V_CAN2_F23R2_FB12     CH32V_CAN1_F23R2_FB12
#define CH32V_CAN2_F23R2_FB13     CH32V_CAN1_F23R2_FB13
#define CH32V_CAN2_F23R2_FB14     CH32V_CAN1_F23R2_FB14
#define CH32V_CAN2_F23R2_FB15     CH32V_CAN1_F23R2_FB15
#define CH32V_CAN2_F23R2_FB16     CH32V_CAN1_F23R2_FB16
#define CH32V_CAN2_F23R2_FB17     CH32V_CAN1_F23R2_FB17
#define CH32V_CAN2_F23R2_FB18     CH32V_CAN1_F23R2_FB18
#define CH32V_CAN2_F23R2_FB19     CH32V_CAN1_F23R2_FB19
#define CH32V_CAN2_F23R2_FB20     CH32V_CAN1_F23R2_FB20
#define CH32V_CAN2_F23R2_FB21     CH32V_CAN1_F23R2_FB21
#define CH32V_CAN2_F23R2_FB22     CH32V_CAN1_F23R2_FB22
#define CH32V_CAN2_F23R2_FB23     CH32V_CAN1_F23R2_FB23
#define CH32V_CAN2_F23R2_FB24     CH32V_CAN1_F23R2_FB24
#define CH32V_CAN2_F23R2_FB25     CH32V_CAN1_F23R2_FB25
#define CH32V_CAN2_F23R2_FB26     CH32V_CAN1_F23R2_FB26
#define CH32V_CAN2_F23R2_FB27     CH32V_CAN1_F23R2_FB27
#define CH32V_CAN2_F23R2_FB28     CH32V_CAN1_F23R2_FB28
#define CH32V_CAN2_F23R2_FB29     CH32V_CAN1_F23R2_FB29
#define CH32V_CAN2_F23R2_FB30     CH32V_CAN1_F23R2_FB30
#define CH32V_CAN2_F23R2_FB31     CH32V_CAN1_F23R2_FB31
#define CH32V_CAN2_F24R1_OFFSET   CH32V_CAN1_F24R1_OFFSET
#define CH32V_CAN2_F24R1          CH32V_CAN1_F24R1
#define CH32V_CAN2_F24R1_FB0      CH32V_CAN1_F24R1_FB0
#define CH32V_CAN2_F24R1_FB1      CH32V_CAN1_F24R1_FB1
#define CH32V_CAN2_F24R1_FB2      CH32V_CAN1_F24R1_FB2
#define CH32V_CAN2_F24R1_FB3      CH32V_CAN1_F24R1_FB3
#define CH32V_CAN2_F24R1_FB4      CH32V_CAN1_F24R1_FB4
#define CH32V_CAN2_F24R1_FB5      CH32V_CAN1_F24R1_FB5
#define CH32V_CAN2_F24R1_FB6      CH32V_CAN1_F24R1_FB6
#define CH32V_CAN2_F24R1_FB7      CH32V_CAN1_F24R1_FB7
#define CH32V_CAN2_F24R1_FB8      CH32V_CAN1_F24R1_FB8
#define CH32V_CAN2_F24R1_FB9      CH32V_CAN1_F24R1_FB9
#define CH32V_CAN2_F24R1_FB10     CH32V_CAN1_F24R1_FB10
#define CH32V_CAN2_F24R1_FB11     CH32V_CAN1_F24R1_FB11
#define CH32V_CAN2_F24R1_FB12     CH32V_CAN1_F24R1_FB12
#define CH32V_CAN2_F24R1_FB13     CH32V_CAN1_F24R1_FB13
#define CH32V_CAN2_F24R1_FB14     CH32V_CAN1_F24R1_FB14
#define CH32V_CAN2_F24R1_FB15     CH32V_CAN1_F24R1_FB15
#define CH32V_CAN2_F24R1_FB16     CH32V_CAN1_F24R1_FB16
#define CH32V_CAN2_F24R1_FB17     CH32V_CAN1_F24R1_FB17
#define CH32V_CAN2_F24R1_FB18     CH32V_CAN1_F24R1_FB18
#define CH32V_CAN2_F24R1_FB19     CH32V_CAN1_F24R1_FB19
#define CH32V_CAN2_F24R1_FB20     CH32V_CAN1_F24R1_FB20
#define CH32V_CAN2_F24R1_FB21     CH32V_CAN1_F24R1_FB21
#define CH32V_CAN2_F24R1_FB22     CH32V_CAN1_F24R1_FB22
#define CH32V_CAN2_F24R1_FB23     CH32V_CAN1_F24R1_FB23
#define CH32V_CAN2_F24R1_FB24     CH32V_CAN1_F24R1_FB24
#define CH32V_CAN2_F24R1_FB25     CH32V_CAN1_F24R1_FB25
#define CH32V_CAN2_F24R1_FB26     CH32V_CAN1_F24R1_FB26
#define CH32V_CAN2_F24R1_FB27     CH32V_CAN1_F24R1_FB27
#define CH32V_CAN2_F24R1_FB28     CH32V_CAN1_F24R1_FB28
#define CH32V_CAN2_F24R1_FB29     CH32V_CAN1_F24R1_FB29
#define CH32V_CAN2_F24R1_FB30     CH32V_CAN1_F24R1_FB30
#define CH32V_CAN2_F24R1_FB31     CH32V_CAN1_F24R1_FB31
#define CH32V_CAN2_F24R2_OFFSET   CH32V_CAN1_F24R2_OFFSET
#define CH32V_CAN2_F24R2          CH32V_CAN1_F24R2
#define CH32V_CAN2_F24R2_FB0      CH32V_CAN1_F24R2_FB0
#define CH32V_CAN2_F24R2_FB1      CH32V_CAN1_F24R2_FB1
#define CH32V_CAN2_F24R2_FB2      CH32V_CAN1_F24R2_FB2
#define CH32V_CAN2_F24R2_FB3      CH32V_CAN1_F24R2_FB3
#define CH32V_CAN2_F24R2_FB4      CH32V_CAN1_F24R2_FB4
#define CH32V_CAN2_F24R2_FB5      CH32V_CAN1_F24R2_FB5
#define CH32V_CAN2_F24R2_FB6      CH32V_CAN1_F24R2_FB6
#define CH32V_CAN2_F24R2_FB7      CH32V_CAN1_F24R2_FB7
#define CH32V_CAN2_F24R2_FB8      CH32V_CAN1_F24R2_FB8
#define CH32V_CAN2_F24R2_FB9      CH32V_CAN1_F24R2_FB9
#define CH32V_CAN2_F24R2_FB10     CH32V_CAN1_F24R2_FB10
#define CH32V_CAN2_F24R2_FB11     CH32V_CAN1_F24R2_FB11
#define CH32V_CAN2_F24R2_FB12     CH32V_CAN1_F24R2_FB12
#define CH32V_CAN2_F24R2_FB13     CH32V_CAN1_F24R2_FB13
#define CH32V_CAN2_F24R2_FB14     CH32V_CAN1_F24R2_FB14
#define CH32V_CAN2_F24R2_FB15     CH32V_CAN1_F24R2_FB15
#define CH32V_CAN2_F24R2_FB16     CH32V_CAN1_F24R2_FB16
#define CH32V_CAN2_F24R2_FB17     CH32V_CAN1_F24R2_FB17
#define CH32V_CAN2_F24R2_FB18     CH32V_CAN1_F24R2_FB18
#define CH32V_CAN2_F24R2_FB19     CH32V_CAN1_F24R2_FB19
#define CH32V_CAN2_F24R2_FB20     CH32V_CAN1_F24R2_FB20
#define CH32V_CAN2_F24R2_FB21     CH32V_CAN1_F24R2_FB21
#define CH32V_CAN2_F24R2_FB22     CH32V_CAN1_F24R2_FB22
#define CH32V_CAN2_F24R2_FB23     CH32V_CAN1_F24R2_FB23
#define CH32V_CAN2_F24R2_FB24     CH32V_CAN1_F24R2_FB24
#define CH32V_CAN2_F24R2_FB25     CH32V_CAN1_F24R2_FB25
#define CH32V_CAN2_F24R2_FB26     CH32V_CAN1_F24R2_FB26
#define CH32V_CAN2_F24R2_FB27     CH32V_CAN1_F24R2_FB27
#define CH32V_CAN2_F24R2_FB28     CH32V_CAN1_F24R2_FB28
#define CH32V_CAN2_F24R2_FB29     CH32V_CAN1_F24R2_FB29
#define CH32V_CAN2_F24R2_FB30     CH32V_CAN1_F24R2_FB30
#define CH32V_CAN2_F24R2_FB31     CH32V_CAN1_F24R2_FB31
#define CH32V_CAN2_F25R1_OFFSET   CH32V_CAN1_F25R1_OFFSET
#define CH32V_CAN2_F25R1          CH32V_CAN1_F25R1
#define CH32V_CAN2_F25R1_FB0      CH32V_CAN1_F25R1_FB0
#define CH32V_CAN2_F25R1_FB1      CH32V_CAN1_F25R1_FB1
#define CH32V_CAN2_F25R1_FB2      CH32V_CAN1_F25R1_FB2
#define CH32V_CAN2_F25R1_FB3      CH32V_CAN1_F25R1_FB3
#define CH32V_CAN2_F25R1_FB4      CH32V_CAN1_F25R1_FB4
#define CH32V_CAN2_F25R1_FB5      CH32V_CAN1_F25R1_FB5
#define CH32V_CAN2_F25R1_FB6      CH32V_CAN1_F25R1_FB6
#define CH32V_CAN2_F25R1_FB7      CH32V_CAN1_F25R1_FB7
#define CH32V_CAN2_F25R1_FB8      CH32V_CAN1_F25R1_FB8
#define CH32V_CAN2_F25R1_FB9      CH32V_CAN1_F25R1_FB9
#define CH32V_CAN2_F25R1_FB10     CH32V_CAN1_F25R1_FB10
#define CH32V_CAN2_F25R1_FB11     CH32V_CAN1_F25R1_FB11
#define CH32V_CAN2_F25R1_FB12     CH32V_CAN1_F25R1_FB12
#define CH32V_CAN2_F25R1_FB13     CH32V_CAN1_F25R1_FB13
#define CH32V_CAN2_F25R1_FB14     CH32V_CAN1_F25R1_FB14
#define CH32V_CAN2_F25R1_FB15     CH32V_CAN1_F25R1_FB15
#define CH32V_CAN2_F25R1_FB16     CH32V_CAN1_F25R1_FB16
#define CH32V_CAN2_F25R1_FB17     CH32V_CAN1_F25R1_FB17
#define CH32V_CAN2_F25R1_FB18     CH32V_CAN1_F25R1_FB18
#define CH32V_CAN2_F25R1_FB19     CH32V_CAN1_F25R1_FB19
#define CH32V_CAN2_F25R1_FB20     CH32V_CAN1_F25R1_FB20
#define CH32V_CAN2_F25R1_FB21     CH32V_CAN1_F25R1_FB21
#define CH32V_CAN2_F25R1_FB22     CH32V_CAN1_F25R1_FB22
#define CH32V_CAN2_F25R1_FB23     CH32V_CAN1_F25R1_FB23
#define CH32V_CAN2_F25R1_FB24     CH32V_CAN1_F25R1_FB24
#define CH32V_CAN2_F25R1_FB25     CH32V_CAN1_F25R1_FB25
#define CH32V_CAN2_F25R1_FB26     CH32V_CAN1_F25R1_FB26
#define CH32V_CAN2_F25R1_FB27     CH32V_CAN1_F25R1_FB27
#define CH32V_CAN2_F25R1_FB28     CH32V_CAN1_F25R1_FB28
#define CH32V_CAN2_F25R1_FB29     CH32V_CAN1_F25R1_FB29
#define CH32V_CAN2_F25R1_FB30     CH32V_CAN1_F25R1_FB30
#define CH32V_CAN2_F25R1_FB31     CH32V_CAN1_F25R1_FB31
#define CH32V_CAN2_F25R2_OFFSET   CH32V_CAN1_F25R2_OFFSET
#define CH32V_CAN2_F25R2          CH32V_CAN1_F25R2
#define CH32V_CAN2_F25R2_FB0      CH32V_CAN1_F25R2_FB0
#define CH32V_CAN2_F25R2_FB1      CH32V_CAN1_F25R2_FB1
#define CH32V_CAN2_F25R2_FB2      CH32V_CAN1_F25R2_FB2
#define CH32V_CAN2_F25R2_FB3      CH32V_CAN1_F25R2_FB3
#define CH32V_CAN2_F25R2_FB4      CH32V_CAN1_F25R2_FB4
#define CH32V_CAN2_F25R2_FB5      CH32V_CAN1_F25R2_FB5
#define CH32V_CAN2_F25R2_FB6      CH32V_CAN1_F25R2_FB6
#define CH32V_CAN2_F25R2_FB7      CH32V_CAN1_F25R2_FB7
#define CH32V_CAN2_F25R2_FB8      CH32V_CAN1_F25R2_FB8
#define CH32V_CAN2_F25R2_FB9      CH32V_CAN1_F25R2_FB9
#define CH32V_CAN2_F25R2_FB10     CH32V_CAN1_F25R2_FB10
#define CH32V_CAN2_F25R2_FB11     CH32V_CAN1_F25R2_FB11
#define CH32V_CAN2_F25R2_FB12     CH32V_CAN1_F25R2_FB12
#define CH32V_CAN2_F25R2_FB13     CH32V_CAN1_F25R2_FB13
#define CH32V_CAN2_F25R2_FB14     CH32V_CAN1_F25R2_FB14
#define CH32V_CAN2_F25R2_FB15     CH32V_CAN1_F25R2_FB15
#define CH32V_CAN2_F25R2_FB16     CH32V_CAN1_F25R2_FB16
#define CH32V_CAN2_F25R2_FB17     CH32V_CAN1_F25R2_FB17
#define CH32V_CAN2_F25R2_FB18     CH32V_CAN1_F25R2_FB18
#define CH32V_CAN2_F25R2_FB19     CH32V_CAN1_F25R2_FB19
#define CH32V_CAN2_F25R2_FB20     CH32V_CAN1_F25R2_FB20
#define CH32V_CAN2_F25R2_FB21     CH32V_CAN1_F25R2_FB21
#define CH32V_CAN2_F25R2_FB22     CH32V_CAN1_F25R2_FB22
#define CH32V_CAN2_F25R2_FB23     CH32V_CAN1_F25R2_FB23
#define CH32V_CAN2_F25R2_FB24     CH32V_CAN1_F25R2_FB24
#define CH32V_CAN2_F25R2_FB25     CH32V_CAN1_F25R2_FB25
#define CH32V_CAN2_F25R2_FB26     CH32V_CAN1_F25R2_FB26
#define CH32V_CAN2_F25R2_FB27     CH32V_CAN1_F25R2_FB27
#define CH32V_CAN2_F25R2_FB28     CH32V_CAN1_F25R2_FB28
#define CH32V_CAN2_F25R2_FB29     CH32V_CAN1_F25R2_FB29
#define CH32V_CAN2_F25R2_FB30     CH32V_CAN1_F25R2_FB30
#define CH32V_CAN2_F25R2_FB31     CH32V_CAN1_F25R2_FB31
#define CH32V_CAN2_F26R1_OFFSET   CH32V_CAN1_F26R1_OFFSET
#define CH32V_CAN2_F26R1          CH32V_CAN1_F26R1
#define CH32V_CAN2_F26R1_FB0      CH32V_CAN1_F26R1_FB0
#define CH32V_CAN2_F26R1_FB1      CH32V_CAN1_F26R1_FB1
#define CH32V_CAN2_F26R1_FB2      CH32V_CAN1_F26R1_FB2
#define CH32V_CAN2_F26R1_FB3      CH32V_CAN1_F26R1_FB3
#define CH32V_CAN2_F26R1_FB4      CH32V_CAN1_F26R1_FB4
#define CH32V_CAN2_F26R1_FB5      CH32V_CAN1_F26R1_FB5
#define CH32V_CAN2_F26R1_FB6      CH32V_CAN1_F26R1_FB6
#define CH32V_CAN2_F26R1_FB7      CH32V_CAN1_F26R1_FB7
#define CH32V_CAN2_F26R1_FB8      CH32V_CAN1_F26R1_FB8
#define CH32V_CAN2_F26R1_FB9      CH32V_CAN1_F26R1_FB9
#define CH32V_CAN2_F26R1_FB10     CH32V_CAN1_F26R1_FB10
#define CH32V_CAN2_F26R1_FB11     CH32V_CAN1_F26R1_FB11
#define CH32V_CAN2_F26R1_FB12     CH32V_CAN1_F26R1_FB12
#define CH32V_CAN2_F26R1_FB13     CH32V_CAN1_F26R1_FB13
#define CH32V_CAN2_F26R1_FB14     CH32V_CAN1_F26R1_FB14
#define CH32V_CAN2_F26R1_FB15     CH32V_CAN1_F26R1_FB15
#define CH32V_CAN2_F26R1_FB16     CH32V_CAN1_F26R1_FB16
#define CH32V_CAN2_F26R1_FB17     CH32V_CAN1_F26R1_FB17
#define CH32V_CAN2_F26R1_FB18     CH32V_CAN1_F26R1_FB18
#define CH32V_CAN2_F26R1_FB19     CH32V_CAN1_F26R1_FB19
#define CH32V_CAN2_F26R1_FB20     CH32V_CAN1_F26R1_FB20
#define CH32V_CAN2_F26R1_FB21     CH32V_CAN1_F26R1_FB21
#define CH32V_CAN2_F26R1_FB22     CH32V_CAN1_F26R1_FB22
#define CH32V_CAN2_F26R1_FB23     CH32V_CAN1_F26R1_FB23
#define CH32V_CAN2_F26R1_FB24     CH32V_CAN1_F26R1_FB24
#define CH32V_CAN2_F26R1_FB25     CH32V_CAN1_F26R1_FB25
#define CH32V_CAN2_F26R1_FB26     CH32V_CAN1_F26R1_FB26
#define CH32V_CAN2_F26R1_FB27     CH32V_CAN1_F26R1_FB27
#define CH32V_CAN2_F26R1_FB28     CH32V_CAN1_F26R1_FB28
#define CH32V_CAN2_F26R1_FB29     CH32V_CAN1_F26R1_FB29
#define CH32V_CAN2_F26R1_FB30     CH32V_CAN1_F26R1_FB30
#define CH32V_CAN2_F26R1_FB31     CH32V_CAN1_F26R1_FB31
#define CH32V_CAN2_F26R2_OFFSET   CH32V_CAN1_F26R2_OFFSET
#define CH32V_CAN2_F26R2          CH32V_CAN1_F26R2
#define CH32V_CAN2_F26R2_FB0      CH32V_CAN1_F26R2_FB0
#define CH32V_CAN2_F26R2_FB1      CH32V_CAN1_F26R2_FB1
#define CH32V_CAN2_F26R2_FB2      CH32V_CAN1_F26R2_FB2
#define CH32V_CAN2_F26R2_FB3      CH32V_CAN1_F26R2_FB3
#define CH32V_CAN2_F26R2_FB4      CH32V_CAN1_F26R2_FB4
#define CH32V_CAN2_F26R2_FB5      CH32V_CAN1_F26R2_FB5
#define CH32V_CAN2_F26R2_FB6      CH32V_CAN1_F26R2_FB6
#define CH32V_CAN2_F26R2_FB7      CH32V_CAN1_F26R2_FB7
#define CH32V_CAN2_F26R2_FB8      CH32V_CAN1_F26R2_FB8
#define CH32V_CAN2_F26R2_FB9      CH32V_CAN1_F26R2_FB9
#define CH32V_CAN2_F26R2_FB10     CH32V_CAN1_F26R2_FB10
#define CH32V_CAN2_F26R2_FB11     CH32V_CAN1_F26R2_FB11
#define CH32V_CAN2_F26R2_FB12     CH32V_CAN1_F26R2_FB12
#define CH32V_CAN2_F26R2_FB13     CH32V_CAN1_F26R2_FB13
#define CH32V_CAN2_F26R2_FB14     CH32V_CAN1_F26R2_FB14
#define CH32V_CAN2_F26R2_FB15     CH32V_CAN1_F26R2_FB15
#define CH32V_CAN2_F26R2_FB16     CH32V_CAN1_F26R2_FB16
#define CH32V_CAN2_F26R2_FB17     CH32V_CAN1_F26R2_FB17
#define CH32V_CAN2_F26R2_FB18     CH32V_CAN1_F26R2_FB18
#define CH32V_CAN2_F26R2_FB19     CH32V_CAN1_F26R2_FB19
#define CH32V_CAN2_F26R2_FB20     CH32V_CAN1_F26R2_FB20
#define CH32V_CAN2_F26R2_FB21     CH32V_CAN1_F26R2_FB21
#define CH32V_CAN2_F26R2_FB22     CH32V_CAN1_F26R2_FB22
#define CH32V_CAN2_F26R2_FB23     CH32V_CAN1_F26R2_FB23
#define CH32V_CAN2_F26R2_FB24     CH32V_CAN1_F26R2_FB24
#define CH32V_CAN2_F26R2_FB25     CH32V_CAN1_F26R2_FB25
#define CH32V_CAN2_F26R2_FB26     CH32V_CAN1_F26R2_FB26
#define CH32V_CAN2_F26R2_FB27     CH32V_CAN1_F26R2_FB27
#define CH32V_CAN2_F26R2_FB28     CH32V_CAN1_F26R2_FB28
#define CH32V_CAN2_F26R2_FB29     CH32V_CAN1_F26R2_FB29
#define CH32V_CAN2_F26R2_FB30     CH32V_CAN1_F26R2_FB30
#define CH32V_CAN2_F26R2_FB31     CH32V_CAN1_F26R2_FB31
#define CH32V_CAN2_F27R1_OFFSET   CH32V_CAN1_F27R1_OFFSET
#define CH32V_CAN2_F27R1          CH32V_CAN1_F27R1
#define CH32V_CAN2_F27R1_FB0      CH32V_CAN1_F27R1_FB0
#define CH32V_CAN2_F27R1_FB1      CH32V_CAN1_F27R1_FB1
#define CH32V_CAN2_F27R1_FB2      CH32V_CAN1_F27R1_FB2
#define CH32V_CAN2_F27R1_FB3      CH32V_CAN1_F27R1_FB3
#define CH32V_CAN2_F27R1_FB4      CH32V_CAN1_F27R1_FB4
#define CH32V_CAN2_F27R1_FB5      CH32V_CAN1_F27R1_FB5
#define CH32V_CAN2_F27R1_FB6      CH32V_CAN1_F27R1_FB6
#define CH32V_CAN2_F27R1_FB7      CH32V_CAN1_F27R1_FB7
#define CH32V_CAN2_F27R1_FB8      CH32V_CAN1_F27R1_FB8
#define CH32V_CAN2_F27R1_FB9      CH32V_CAN1_F27R1_FB9
#define CH32V_CAN2_F27R1_FB10     CH32V_CAN1_F27R1_FB10
#define CH32V_CAN2_F27R1_FB11     CH32V_CAN1_F27R1_FB11
#define CH32V_CAN2_F27R1_FB12     CH32V_CAN1_F27R1_FB12
#define CH32V_CAN2_F27R1_FB13     CH32V_CAN1_F27R1_FB13
#define CH32V_CAN2_F27R1_FB14     CH32V_CAN1_F27R1_FB14
#define CH32V_CAN2_F27R1_FB15     CH32V_CAN1_F27R1_FB15
#define CH32V_CAN2_F27R1_FB16     CH32V_CAN1_F27R1_FB16
#define CH32V_CAN2_F27R1_FB17     CH32V_CAN1_F27R1_FB17
#define CH32V_CAN2_F27R1_FB18     CH32V_CAN1_F27R1_FB18
#define CH32V_CAN2_F27R1_FB19     CH32V_CAN1_F27R1_FB19
#define CH32V_CAN2_F27R1_FB20     CH32V_CAN1_F27R1_FB20
#define CH32V_CAN2_F27R1_FB21     CH32V_CAN1_F27R1_FB21
#define CH32V_CAN2_F27R1_FB22     CH32V_CAN1_F27R1_FB22
#define CH32V_CAN2_F27R1_FB23     CH32V_CAN1_F27R1_FB23
#define CH32V_CAN2_F27R1_FB24     CH32V_CAN1_F27R1_FB24
#define CH32V_CAN2_F27R1_FB25     CH32V_CAN1_F27R1_FB25
#define CH32V_CAN2_F27R1_FB26     CH32V_CAN1_F27R1_FB26
#define CH32V_CAN2_F27R1_FB27     CH32V_CAN1_F27R1_FB27
#define CH32V_CAN2_F27R1_FB28     CH32V_CAN1_F27R1_FB28
#define CH32V_CAN2_F27R1_FB29     CH32V_CAN1_F27R1_FB29
#define CH32V_CAN2_F27R1_FB30     CH32V_CAN1_F27R1_FB30
#define CH32V_CAN2_F27R1_FB31     CH32V_CAN1_F27R1_FB31
#define CH32V_CAN2_F27R2_OFFSET   CH32V_CAN1_F27R2_OFFSET
#define CH32V_CAN2_F27R2          CH32V_CAN1_F27R2
#define CH32V_CAN2_F27R2_FB0      CH32V_CAN1_F27R2_FB0
#define CH32V_CAN2_F27R2_FB1      CH32V_CAN1_F27R2_FB1
#define CH32V_CAN2_F27R2_FB2      CH32V_CAN1_F27R2_FB2
#define CH32V_CAN2_F27R2_FB3      CH32V_CAN1_F27R2_FB3
#define CH32V_CAN2_F27R2_FB4      CH32V_CAN1_F27R2_FB4
#define CH32V_CAN2_F27R2_FB5      CH32V_CAN1_F27R2_FB5
#define CH32V_CAN2_F27R2_FB6      CH32V_CAN1_F27R2_FB6
#define CH32V_CAN2_F27R2_FB7      CH32V_CAN1_F27R2_FB7
#define CH32V_CAN2_F27R2_FB8      CH32V_CAN1_F27R2_FB8
#define CH32V_CAN2_F27R2_FB9      CH32V_CAN1_F27R2_FB9
#define CH32V_CAN2_F27R2_FB10     CH32V_CAN1_F27R2_FB10
#define CH32V_CAN2_F27R2_FB11     CH32V_CAN1_F27R2_FB11
#define CH32V_CAN2_F27R2_FB12     CH32V_CAN1_F27R2_FB12
#define CH32V_CAN2_F27R2_FB13     CH32V_CAN1_F27R2_FB13
#define CH32V_CAN2_F27R2_FB14     CH32V_CAN1_F27R2_FB14
#define CH32V_CAN2_F27R2_FB15     CH32V_CAN1_F27R2_FB15
#define CH32V_CAN2_F27R2_FB16     CH32V_CAN1_F27R2_FB16
#define CH32V_CAN2_F27R2_FB17     CH32V_CAN1_F27R2_FB17
#define CH32V_CAN2_F27R2_FB18     CH32V_CAN1_F27R2_FB18
#define CH32V_CAN2_F27R2_FB19     CH32V_CAN1_F27R2_FB19
#define CH32V_CAN2_F27R2_FB20     CH32V_CAN1_F27R2_FB20
#define CH32V_CAN2_F27R2_FB21     CH32V_CAN1_F27R2_FB21
#define CH32V_CAN2_F27R2_FB22     CH32V_CAN1_F27R2_FB22
#define CH32V_CAN2_F27R2_FB23     CH32V_CAN1_F27R2_FB23
#define CH32V_CAN2_F27R2_FB24     CH32V_CAN1_F27R2_FB24
#define CH32V_CAN2_F27R2_FB25     CH32V_CAN1_F27R2_FB25
#define CH32V_CAN2_F27R2_FB26     CH32V_CAN1_F27R2_FB26
#define CH32V_CAN2_F27R2_FB27     CH32V_CAN1_F27R2_FB27
#define CH32V_CAN2_F27R2_FB28     CH32V_CAN1_F27R2_FB28
#define CH32V_CAN2_F27R2_FB29     CH32V_CAN1_F27R2_FB29
#define CH32V_CAN2_F27R2_FB30     CH32V_CAN1_F27R2_FB30
#define CH32V_CAN2_F27R2_FB31     CH32V_CAN1_F27R2_FB31

/* ETHERNET_MAC - Ethernet: media access control */
#define CH32V_ETHERNET_MAC_BASE   0x40028000
#define CH32V_ETHERNET_MAC_MACCR_OFFSET 0x0000
#define CH32V_ETHERNET_MAC_MACCR  (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACCR_OFFSET)
#define CH32V_ETHERNET_MAC_MACCR_TCES (1 <<  0) /* 01: Send clock selection bit */
#define CH32V_ETHERNET_MAC_MACCR_TCF (1 <<  1) /* 02: Send clock reversal */
#define CH32V_ETHERNET_MAC_MACCR_RE (1 <<  2) /* 04: Receiver enable */
#define CH32V_ETHERNET_MAC_MACCR_TE (1 <<  3) /* 08: Transmitter enable */
#define CH32V_ETHERNET_MAC_MACCR_DC (1 <<  4) /* 10: Deferral check */
#define CH32V_ETHERNET_MAC_MACCR_BL (2 <<  5) /* 20: Back-off limit */
#define CH32V_ETHERNET_MAC_MACCR_BL_MASK (0x03)
#define CH32V_ETHERNET_MAC_MACCR_APCS (1 <<  7) /* 80: Automatic pad/CRC stripping */
#define CH32V_ETHERNET_MAC_MACCR_RD (1 <<  9) /* 200: Retry disable */
#define CH32V_ETHERNET_MAC_MACCR_IPCO (1 << 10) /* 400: IPv4 checksum offload */
#define CH32V_ETHERNET_MAC_MACCR_DM (1 << 11) /* 800: Duplex mode */
#define CH32V_ETHERNET_MAC_MACCR_LM (1 << 12) /* 1000: Loopback mode */
#define CH32V_ETHERNET_MAC_MACCR_ROD (1 << 13) /* 2000: Receive own disable */
#define CH32V_ETHERNET_MAC_MACCR_FES (1 << 14) /* 4000: Fast Ethernet speed */
#define CH32V_ETHERNET_MAC_MACCR_CSD (1 << 16) /* 10000: Carrier sense disable */
#define CH32V_ETHERNET_MAC_MACCR_IFG (3 << 17) /* 20000: Interframe gap */
#define CH32V_ETHERNET_MAC_MACCR_IFG_MASK (0x07)
#define CH32V_ETHERNET_MAC_MACCR_IRE (1 << 20) /* 100000: 10MPHY 50Ω set */
#define CH32V_ETHERNET_MAC_MACCR_PDI (1 << 21) /* 200000: 10MPHY TX DRIVER bisa current */
#define CH32V_ETHERNET_MAC_MACCR_JD (1 << 22) /* 400000: Jabber disable */
#define CH32V_ETHERNET_MAC_MACCR_WD (1 << 23) /* 800000: Watchdog disable */
#define CH32V_ETHERNET_MAC_MACCR_TCD (3 << 29) /* 20000000: SEND clock delay */
#define CH32V_ETHERNET_MAC_MACCR_TCD_MASK (0x07)
#define CH32V_ETHERNET_MAC_MACFFR_OFFSET 0x0004
#define CH32V_ETHERNET_MAC_MACFFR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACFFR_OFFSET)
#define CH32V_ETHERNET_MAC_MACFFR_PM (1 <<  0) /* 01: Promiscuous mode */
#define CH32V_ETHERNET_MAC_MACFFR_HU (1 <<  1) /* 02: Hash unicast */
#define CH32V_ETHERNET_MAC_MACFFR_HM (1 <<  2) /* 04: Hash multicast */
#define CH32V_ETHERNET_MAC_MACFFR_DAIF (1 <<  3) /* 08: Destination address inverse filtering */
#define CH32V_ETHERNET_MAC_MACFFR_PAM (1 <<  4) /* 10: Pass all multicast */
#define CH32V_ETHERNET_MAC_MACFFR_BFD (1 <<  5) /* 20: Broadcast frames disable */
#define CH32V_ETHERNET_MAC_MACFFR_PCF (2 <<  6) /* 40: Pass control frames */
#define CH32V_ETHERNET_MAC_MACFFR_PCF_MASK (0x03)
#define CH32V_ETHERNET_MAC_MACFFR_SAIF (1 <<  8) /* 100: Source address inverse filtering */
#define CH32V_ETHERNET_MAC_MACFFR_SAF (1 <<  9) /* 200: Source address filter */
#define CH32V_ETHERNET_MAC_MACFFR_HPF (1 << 10) /* 400: Hash or perfect filter */
#define CH32V_ETHERNET_MAC_MACFFR_RA (1 << 31) /* 80000000: Receive all */
#define CH32V_ETHERNET_MAC_MACHTHR_OFFSET 0x0008
#define CH32V_ETHERNET_MAC_MACHTHR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACHTHR_OFFSET)
#define CH32V_ETHERNET_MAC_MACHTHR_HTH (32 <<  0) /* 01: Hash table high */
#define CH32V_ETHERNET_MAC_MACHTHR_HTH_MASK (0xffffffff)
#define CH32V_ETHERNET_MAC_MACHTLR_OFFSET 0x000c
#define CH32V_ETHERNET_MAC_MACHTLR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACHTLR_OFFSET)
#define CH32V_ETHERNET_MAC_MACHTLR_HTL (32 <<  0) /* 01: Hash table low */
#define CH32V_ETHERNET_MAC_MACHTLR_HTL_MASK (0xffffffff)
#define CH32V_ETHERNET_MAC_MACMIIAR_OFFSET 0x0010
#define CH32V_ETHERNET_MAC_MACMIIAR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACMIIAR_OFFSET)
#define CH32V_ETHERNET_MAC_MACMIIAR_MB (1 <<  0) /* 01: MII busy */
#define CH32V_ETHERNET_MAC_MACMIIAR_MW (1 <<  1) /* 02: MII write */
#define CH32V_ETHERNET_MAC_MACMIIAR_CR (3 <<  2) /* 04: Clock range */
#define CH32V_ETHERNET_MAC_MACMIIAR_CR_MASK (0x07)
#define CH32V_ETHERNET_MAC_MACMIIAR_MR (5 <<  6) /* 40: MII register */
#define CH32V_ETHERNET_MAC_MACMIIAR_MR_MASK (0x1f)
#define CH32V_ETHERNET_MAC_MACMIIAR_PA (5 << 11) /* 800: PHY address */
#define CH32V_ETHERNET_MAC_MACMIIAR_PA_MASK (0x1f)
#define CH32V_ETHERNET_MAC_MACMIIDR_OFFSET 0x0014
#define CH32V_ETHERNET_MAC_MACMIIDR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACMIIDR_OFFSET)
#define CH32V_ETHERNET_MAC_MACMIIDR_MD (16 <<  0) /* 01: MII data */
#define CH32V_ETHERNET_MAC_MACMIIDR_MD_MASK (0xffff)
#define CH32V_ETHERNET_MAC_MACFCR_OFFSET 0x0018
#define CH32V_ETHERNET_MAC_MACFCR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACFCR_OFFSET)
#define CH32V_ETHERNET_MAC_MACFCR_FCB_BPA (1 <<  0) /* 01: Flow control busy/back pressure activate */
#define CH32V_ETHERNET_MAC_MACFCR_TFCE (1 <<  1) /* 02: Transmit flow control enable */
#define CH32V_ETHERNET_MAC_MACFCR_RFCE (1 <<  2) /* 04: Receive flow control enable */
#define CH32V_ETHERNET_MAC_MACFCR_UPFD (1 <<  3) /* 08: Unicast pause frame detect */
#define CH32V_ETHERNET_MAC_MACFCR_PLT (2 <<  4) /* 10: Pause low threshold */
#define CH32V_ETHERNET_MAC_MACFCR_PLT_MASK (0x03)
#define CH32V_ETHERNET_MAC_MACFCR_ZQPD (1 <<  7) /* 80: Zero-quanta pause disable */
#define CH32V_ETHERNET_MAC_MACFCR_PT (16 << 16) /* 10000: Pass control frames */
#define CH32V_ETHERNET_MAC_MACFCR_PT_MASK (0xffff)
#define CH32V_ETHERNET_MAC_MACVLANTR_OFFSET 0x001c
#define CH32V_ETHERNET_MAC_MACVLANTR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACVLANTR_OFFSET)
#define CH32V_ETHERNET_MAC_MACVLANTR_VLANTI (16 <<  0) /* 01: VLAN tag identifier (for receive frames) */
#define CH32V_ETHERNET_MAC_MACVLANTR_VLANTI_MASK (0xffff)
#define CH32V_ETHERNET_MAC_MACVLANTR_VLANTC (1 << 16) /* 10000: 12-bit VLAN tag comparison */
#define CH32V_ETHERNET_MAC_MACRWUFFR_OFFSET 0x0028
#define CH32V_ETHERNET_MAC_MACRWUFFR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACRWUFFR_OFFSET)
#define CH32V_ETHERNET_MAC_MACPMTCSR_OFFSET 0x002c
#define CH32V_ETHERNET_MAC_MACPMTCSR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACPMTCSR_OFFSET)
#define CH32V_ETHERNET_MAC_MACPMTCSR_PD (1 <<  0) /* 01: Power down */
#define CH32V_ETHERNET_MAC_MACPMTCSR_MPE (1 <<  1) /* 02: Magic Packet enable */
#define CH32V_ETHERNET_MAC_MACPMTCSR_WFE (1 <<  2) /* 04: Wakeup frame enable */
#define CH32V_ETHERNET_MAC_MACPMTCSR_MPR (1 <<  5) /* 20: Magic packet received */
#define CH32V_ETHERNET_MAC_MACPMTCSR_WFR (1 <<  6) /* 40: Wakeup frame received */
#define CH32V_ETHERNET_MAC_MACPMTCSR_GU (1 <<  9) /* 200: Global unicast */
#define CH32V_ETHERNET_MAC_MACPMTCSR_WFFRPR (1 << 31) /* 80000000: Wakeup frame filter register pointer reset */
#define CH32V_ETHERNET_MAC_MACSR_OFFSET 0x0038
#define CH32V_ETHERNET_MAC_MACSR  (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACSR_OFFSET)
#define CH32V_ETHERNET_MAC_MACSR_PMTS (1 <<  3) /* 08: PMT status */
#define CH32V_ETHERNET_MAC_MACSR_MMCS (1 <<  4) /* 10: MMC status */
#define CH32V_ETHERNET_MAC_MACSR_MMCRS (1 <<  5) /* 20: MMC receive status */
#define CH32V_ETHERNET_MAC_MACSR_MMCTS (1 <<  6) /* 40: MMC transmit status */
#define CH32V_ETHERNET_MAC_MACSR_TSTS (1 <<  9) /* 200: Time stamp trigger status */
#define CH32V_ETHERNET_MAC_MACIMR_OFFSET 0x003c
#define CH32V_ETHERNET_MAC_MACIMR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACIMR_OFFSET)
#define CH32V_ETHERNET_MAC_MACIMR_PMTIM (1 <<  3) /* 08: PMT interrupt mask */
#define CH32V_ETHERNET_MAC_MACIMR_TSTIM (1 <<  9) /* 200: Time stamp trigger interrupt mask */
#define CH32V_ETHERNET_MAC_MACA0HR_OFFSET 0x0040
#define CH32V_ETHERNET_MAC_MACA0HR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACA0HR_OFFSET)
#define CH32V_ETHERNET_MAC_MACA0HR_MACA0H (16 <<  0) /* 01: MAC address0 high */
#define CH32V_ETHERNET_MAC_MACA0HR_MACA0H_MASK (0xffff)
#define CH32V_ETHERNET_MAC_MACA0HR_MO (1 << 31) /* 80000000: Always 1 */
#define CH32V_ETHERNET_MAC_MACA0LR_OFFSET 0x0044
#define CH32V_ETHERNET_MAC_MACA0LR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACA0LR_OFFSET)
#define CH32V_ETHERNET_MAC_MACA0LR_MACA0L (32 <<  0) /* 01: MAC address0 low */
#define CH32V_ETHERNET_MAC_MACA0LR_MACA0L_MASK (0xffffffff)
#define CH32V_ETHERNET_MAC_MACA1HR_OFFSET 0x0048
#define CH32V_ETHERNET_MAC_MACA1HR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACA1HR_OFFSET)
#define CH32V_ETHERNET_MAC_MACA1HR_MACA1H (16 <<  0) /* 01: MAC address1 high */
#define CH32V_ETHERNET_MAC_MACA1HR_MACA1H_MASK (0xffff)
#define CH32V_ETHERNET_MAC_MACA1HR_MBC (6 << 24) /* 1000000: Mask byte control */
#define CH32V_ETHERNET_MAC_MACA1HR_MBC_MASK (0x3f)
#define CH32V_ETHERNET_MAC_MACA1HR_SA (1 << 30) /* 40000000: Source address */
#define CH32V_ETHERNET_MAC_MACA1HR_AE (1 << 31) /* 80000000: Address enable */
#define CH32V_ETHERNET_MAC_MACA1LR_OFFSET 0x004c
#define CH32V_ETHERNET_MAC_MACA1LR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACA1LR_OFFSET)
#define CH32V_ETHERNET_MAC_MACA1LR_MACA1L (32 <<  0) /* 01: MAC address1 low */
#define CH32V_ETHERNET_MAC_MACA1LR_MACA1L_MASK (0xffffffff)
#define CH32V_ETHERNET_MAC_MACA2HR_OFFSET 0x0050
#define CH32V_ETHERNET_MAC_MACA2HR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACA2HR_OFFSET)
#define CH32V_ETHERNET_MAC_MACA2HR_ETH_MACA2HR (16 <<  0) /* 01: Ethernet MAC address 2 high register */
#define CH32V_ETHERNET_MAC_MACA2HR_ETH_MACA2HR_MASK (0xffff)
#define CH32V_ETHERNET_MAC_MACA2HR_MBC (6 << 24) /* 1000000: Mask byte control */
#define CH32V_ETHERNET_MAC_MACA2HR_MBC_MASK (0x3f)
#define CH32V_ETHERNET_MAC_MACA2HR_SA (1 << 30) /* 40000000: Source address */
#define CH32V_ETHERNET_MAC_MACA2HR_AE (1 << 31) /* 80000000: Address enable */
#define CH32V_ETHERNET_MAC_MACA2LR_OFFSET 0x0054
#define CH32V_ETHERNET_MAC_MACA2LR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACA2LR_OFFSET)
#define CH32V_ETHERNET_MAC_MACA2LR_MACA2L (31 <<  0) /* 01: MAC address2 low */
#define CH32V_ETHERNET_MAC_MACA2LR_MACA2L_MASK (0x7fffffff)
#define CH32V_ETHERNET_MAC_MACA3HR_OFFSET 0x0058
#define CH32V_ETHERNET_MAC_MACA3HR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACA3HR_OFFSET)
#define CH32V_ETHERNET_MAC_MACA3HR_MACA3H (16 <<  0) /* 01: MAC address3 high */
#define CH32V_ETHERNET_MAC_MACA3HR_MACA3H_MASK (0xffff)
#define CH32V_ETHERNET_MAC_MACA3HR_MBC (6 << 24) /* 1000000: Mask byte control */
#define CH32V_ETHERNET_MAC_MACA3HR_MBC_MASK (0x3f)
#define CH32V_ETHERNET_MAC_MACA3HR_SA (1 << 30) /* 40000000: Source address */
#define CH32V_ETHERNET_MAC_MACA3HR_AE (1 << 31) /* 80000000: Address enable */
#define CH32V_ETHERNET_MAC_MACA3LR_OFFSET 0x005c
#define CH32V_ETHERNET_MAC_MACA3LR (CH32V_ETHERNET_MAC_BASE + CH32V_ETHERNET_MAC_MACA3LR_OFFSET)
#define CH32V_ETHERNET_MAC_MACA3LR_MBCA3L (32 <<  0) /* 01: MAC address3 low */
#define CH32V_ETHERNET_MAC_MACA3LR_MBCA3L_MASK (0xffffffff)

/* ETHERNET_MMC - Ethernet: MAC management counters */
#define CH32V_ETHERNET_MMC_BASE   0x40028100
#define CH32V_ETHERNET_MMC_MMCCR_OFFSET 0x0000
#define CH32V_ETHERNET_MMC_MMCCR  (CH32V_ETHERNET_MMC_BASE + CH32V_ETHERNET_MMC_MMCCR_OFFSET)
#define CH32V_ETHERNET_MMC_MMCCR_CR (1 <<  0) /* 01: Counter reset */
#define CH32V_ETHERNET_MMC_MMCCR_CSR (1 <<  1) /* 02: Counter stop rollover */
#define CH32V_ETHERNET_MMC_MMCCR_ROR (1 <<  2) /* 04: Reset on read */
#define CH32V_ETHERNET_MMC_MMCCR_MCF (1 << 31) /* 80000000: MMC counter freeze */
#define CH32V_ETHERNET_MMC_MMCRIR_OFFSET 0x0004
#define CH32V_ETHERNET_MMC_MMCRIR (CH32V_ETHERNET_MMC_BASE + CH32V_ETHERNET_MMC_MMCRIR_OFFSET)
#define CH32V_ETHERNET_MMC_MMCRIR_RFCES (1 <<  5) /* 20: Received frames CRC error status */
#define CH32V_ETHERNET_MMC_MMCRIR_RFAES (1 <<  6) /* 40: Received frames alignment error status */
#define CH32V_ETHERNET_MMC_MMCRIR_RGUFS (1 << 17) /* 20000: Received Good Unicast Frames Status */
#define CH32V_ETHERNET_MMC_MMCTIR_OFFSET 0x0008
#define CH32V_ETHERNET_MMC_MMCTIR (CH32V_ETHERNET_MMC_BASE + CH32V_ETHERNET_MMC_MMCTIR_OFFSET)
#define CH32V_ETHERNET_MMC_MMCTIR_TGFSCS (1 << 14) /* 4000: Transmitted good frames single collision status */
#define CH32V_ETHERNET_MMC_MMCTIR_TGFMSCS (1 << 15) /* 8000: Transmitted good frames more single collision status */
#define CH32V_ETHERNET_MMC_MMCTIR_TGFS (1 << 21) /* 200000: Transmitted good frames status */
#define CH32V_ETHERNET_MMC_MMCRIMR_OFFSET 0x000c
#define CH32V_ETHERNET_MMC_MMCRIMR (CH32V_ETHERNET_MMC_BASE + CH32V_ETHERNET_MMC_MMCRIMR_OFFSET)
#define CH32V_ETHERNET_MMC_MMCRIMR_RFCEM (1 <<  5) /* 20: Received frame CRC error mask */
#define CH32V_ETHERNET_MMC_MMCRIMR_RFAEM (1 <<  6) /* 40: Received frames alignment error mask */
#define CH32V_ETHERNET_MMC_MMCRIMR_RGUFM (1 << 17) /* 20000: Received good unicast frames mask */
#define CH32V_ETHERNET_MMC_MMCTIMR_OFFSET 0x0010
#define CH32V_ETHERNET_MMC_MMCTIMR (CH32V_ETHERNET_MMC_BASE + CH32V_ETHERNET_MMC_MMCTIMR_OFFSET)
#define CH32V_ETHERNET_MMC_MMCTIMR_TGFSCM (1 << 14) /* 4000: Transmitted good frames single collision mask */
#define CH32V_ETHERNET_MMC_MMCTIMR_TGFMSCM (1 << 15) /* 8000: Transmitted good frames more single collision mask */
#define CH32V_ETHERNET_MMC_MMCTIMR_TGFM (1 << 21) /* 200000: Transmitted good frames mask */
#define CH32V_ETHERNET_MMC_MMCTGFSCCR_OFFSET 0x004c
#define CH32V_ETHERNET_MMC_MMCTGFSCCR (CH32V_ETHERNET_MMC_BASE + CH32V_ETHERNET_MMC_MMCTGFSCCR_OFFSET)
#define CH32V_ETHERNET_MMC_MMCTGFSCCR_TGFSCC (32 <<  0) /* 01: Transmitted good frames after a single collision counter */
#define CH32V_ETHERNET_MMC_MMCTGFSCCR_TGFSCC_MASK (0xffffffff)
#define CH32V_ETHERNET_MMC_MMCTGFMSCCR_OFFSET 0x0050
#define CH32V_ETHERNET_MMC_MMCTGFMSCCR (CH32V_ETHERNET_MMC_BASE + CH32V_ETHERNET_MMC_MMCTGFMSCCR_OFFSET)
#define CH32V_ETHERNET_MMC_MMCTGFMSCCR_TGFMSCC (32 <<  0) /* 01: Transmitted good frames after more than a single collision counter */
#define CH32V_ETHERNET_MMC_MMCTGFMSCCR_TGFMSCC_MASK (0xffffffff)
#define CH32V_ETHERNET_MMC_MMCTGFCR_OFFSET 0x0068
#define CH32V_ETHERNET_MMC_MMCTGFCR (CH32V_ETHERNET_MMC_BASE + CH32V_ETHERNET_MMC_MMCTGFCR_OFFSET)
#define CH32V_ETHERNET_MMC_MMCTGFCR_TGFC (32 <<  0) /* 01: Transmitted good frames counter */
#define CH32V_ETHERNET_MMC_MMCTGFCR_TGFC_MASK (0xffffffff)
#define CH32V_ETHERNET_MMC_MMCRFCECR_OFFSET 0x0094
#define CH32V_ETHERNET_MMC_MMCRFCECR (CH32V_ETHERNET_MMC_BASE + CH32V_ETHERNET_MMC_MMCRFCECR_OFFSET)
#define CH32V_ETHERNET_MMC_MMCRFCECR_RFCFC (32 <<  0) /* 01: Received frames with CRC error counter */
#define CH32V_ETHERNET_MMC_MMCRFCECR_RFCFC_MASK (0xffffffff)
#define CH32V_ETHERNET_MMC_MMCRFAECR_OFFSET 0x0098
#define CH32V_ETHERNET_MMC_MMCRFAECR (CH32V_ETHERNET_MMC_BASE + CH32V_ETHERNET_MMC_MMCRFAECR_OFFSET)
#define CH32V_ETHERNET_MMC_MMCRFAECR_RFAEC (32 <<  0) /* 01: Received frames with alignment error counter */
#define CH32V_ETHERNET_MMC_MMCRFAECR_RFAEC_MASK (0xffffffff)
#define CH32V_ETHERNET_MMC_MMCRGUFCR_OFFSET 0x00c4
#define CH32V_ETHERNET_MMC_MMCRGUFCR (CH32V_ETHERNET_MMC_BASE + CH32V_ETHERNET_MMC_MMCRGUFCR_OFFSET)
#define CH32V_ETHERNET_MMC_MMCRGUFCR_RGUFC (32 <<  0) /* 01: Received good unicast frames counter */
#define CH32V_ETHERNET_MMC_MMCRGUFCR_RGUFC_MASK (0xffffffff)

/* ETHERNET_PTP - Ethernet: Precision time protocol */
#define CH32V_ETHERNET_PTP_BASE   0x40028700
#define CH32V_ETHERNET_PTP_PTPTSCR_OFFSET 0x0000
#define CH32V_ETHERNET_PTP_PTPTSCR (CH32V_ETHERNET_PTP_BASE + CH32V_ETHERNET_PTP_PTPTSCR_OFFSET)
#define CH32V_ETHERNET_PTP_PTPTSCR_TSE (1 <<  0) /* 01: Time stamp enable */
#define CH32V_ETHERNET_PTP_PTPTSCR_TSFCU (1 <<  1) /* 02: Time stamp fine or coarse update */
#define CH32V_ETHERNET_PTP_PTPTSCR_TSSTI (1 <<  2) /* 04: Time stamp system time initialize */
#define CH32V_ETHERNET_PTP_PTPTSCR_TSSTU (1 <<  3) /* 08: Time stamp system time update */
#define CH32V_ETHERNET_PTP_PTPTSCR_TSITE (1 <<  4) /* 10: Time stamp interrupt trigger enable */
#define CH32V_ETHERNET_PTP_PTPTSCR_TSARU (1 <<  5) /* 20: Time stamp addend register update */
#define CH32V_ETHERNET_PTP_PTPSSIR_OFFSET 0x0004
#define CH32V_ETHERNET_PTP_PTPSSIR (CH32V_ETHERNET_PTP_BASE + CH32V_ETHERNET_PTP_PTPSSIR_OFFSET)
#define CH32V_ETHERNET_PTP_PTPSSIR_STSSI (8 <<  0) /* 01: System time subsecond increment */
#define CH32V_ETHERNET_PTP_PTPSSIR_STSSI_MASK (0xff)
#define CH32V_ETHERNET_PTP_PTPTSHR_OFFSET 0x0008
#define CH32V_ETHERNET_PTP_PTPTSHR (CH32V_ETHERNET_PTP_BASE + CH32V_ETHERNET_PTP_PTPTSHR_OFFSET)
#define CH32V_ETHERNET_PTP_PTPTSHR_STS (32 <<  0) /* 01: System time second */
#define CH32V_ETHERNET_PTP_PTPTSHR_STS_MASK (0xffffffff)
#define CH32V_ETHERNET_PTP_PTPTSLR_OFFSET 0x000c
#define CH32V_ETHERNET_PTP_PTPTSLR (CH32V_ETHERNET_PTP_BASE + CH32V_ETHERNET_PTP_PTPTSLR_OFFSET)
#define CH32V_ETHERNET_PTP_PTPTSLR_STSS (31 <<  0) /* 01: System time subseconds */
#define CH32V_ETHERNET_PTP_PTPTSLR_STSS_MASK (0x7fffffff)
#define CH32V_ETHERNET_PTP_PTPTSLR_STPNS (1 << 31) /* 80000000: System time positive or negative sign */
#define CH32V_ETHERNET_PTP_PTPTSHUR_OFFSET 0x0010
#define CH32V_ETHERNET_PTP_PTPTSHUR (CH32V_ETHERNET_PTP_BASE + CH32V_ETHERNET_PTP_PTPTSHUR_OFFSET)
#define CH32V_ETHERNET_PTP_PTPTSHUR_TSUS (32 <<  0) /* 01: Time stamp update second */
#define CH32V_ETHERNET_PTP_PTPTSHUR_TSUS_MASK (0xffffffff)
#define CH32V_ETHERNET_PTP_PTPTSLUR_OFFSET 0x0014
#define CH32V_ETHERNET_PTP_PTPTSLUR (CH32V_ETHERNET_PTP_BASE + CH32V_ETHERNET_PTP_PTPTSLUR_OFFSET)
#define CH32V_ETHERNET_PTP_PTPTSLUR_TSUSS (31 <<  0) /* 01: Time stamp update subseconds */
#define CH32V_ETHERNET_PTP_PTPTSLUR_TSUSS_MASK (0x7fffffff)
#define CH32V_ETHERNET_PTP_PTPTSLUR_TSUPNS (1 << 31) /* 80000000: Time stamp update positive or negative sign */
#define CH32V_ETHERNET_PTP_PTPTSAR_OFFSET 0x0018
#define CH32V_ETHERNET_PTP_PTPTSAR (CH32V_ETHERNET_PTP_BASE + CH32V_ETHERNET_PTP_PTPTSAR_OFFSET)
#define CH32V_ETHERNET_PTP_PTPTSAR_TSA (32 <<  0) /* 01: Time stamp addend */
#define CH32V_ETHERNET_PTP_PTPTSAR_TSA_MASK (0xffffffff)
#define CH32V_ETHERNET_PTP_PTPTTHR_OFFSET 0x001c
#define CH32V_ETHERNET_PTP_PTPTTHR (CH32V_ETHERNET_PTP_BASE + CH32V_ETHERNET_PTP_PTPTTHR_OFFSET)
#define CH32V_ETHERNET_PTP_PTPTTHR_TTSH (32 <<  0) /* 01: Target time stamp high */
#define CH32V_ETHERNET_PTP_PTPTTHR_TTSH_MASK (0xffffffff)
#define CH32V_ETHERNET_PTP_PTPTTLR_OFFSET 0x0020
#define CH32V_ETHERNET_PTP_PTPTTLR (CH32V_ETHERNET_PTP_BASE + CH32V_ETHERNET_PTP_PTPTTLR_OFFSET)
#define CH32V_ETHERNET_PTP_PTPTTLR_TTSL (32 <<  0) /* 01: Target time stamp low */
#define CH32V_ETHERNET_PTP_PTPTTLR_TTSL_MASK (0xffffffff)

/* ETHERNET_DMA - Ethernet: DMA controller operation */
#define CH32V_ETHERNET_DMA_BASE   0x40029000
#define CH32V_ETHERNET_DMA_DMABMR_OFFSET 0x0000
#define CH32V_ETHERNET_DMA_DMABMR (CH32V_ETHERNET_DMA_BASE + CH32V_ETHERNET_DMA_DMABMR_OFFSET)
#define CH32V_ETHERNET_DMA_DMABMR_SR (1 <<  0) /* 01: Software reset */
#define CH32V_ETHERNET_DMA_DMABMR_DA (1 <<  1) /* 02: DMA Arbitration */
#define CH32V_ETHERNET_DMA_DMABMR_DSL (5 <<  2) /* 04: Descriptor skip length */
#define CH32V_ETHERNET_DMA_DMABMR_DSL_MASK (0x1f)
#define CH32V_ETHERNET_DMA_DMABMR_PBL (6 <<  8) /* 100: Programmable burst length */
#define CH32V_ETHERNET_DMA_DMABMR_PBL_MASK (0x3f)
#define CH32V_ETHERNET_DMA_DMABMR_RTPR (2 << 14) /* 4000: Rx Tx priority ratio */
#define CH32V_ETHERNET_DMA_DMABMR_RTPR_MASK (0x03)
#define CH32V_ETHERNET_DMA_DMABMR_FB (1 << 16) /* 10000: Fixed burst */
#define CH32V_ETHERNET_DMA_DMABMR_RDP (6 << 17) /* 20000: Rx DMA PBL */
#define CH32V_ETHERNET_DMA_DMABMR_RDP_MASK (0x3f)
#define CH32V_ETHERNET_DMA_DMABMR_USP (1 << 23) /* 800000: Use separate PBL */
#define CH32V_ETHERNET_DMA_DMABMR_FPM (1 << 24) /* 1000000: 4xPBL mode */
#define CH32V_ETHERNET_DMA_DMABMR_AAB (1 << 25) /* 2000000: Address-aligned beats */
#define CH32V_ETHERNET_DMA_DMATPDR_OFFSET 0x0004
#define CH32V_ETHERNET_DMA_DMATPDR (CH32V_ETHERNET_DMA_BASE + CH32V_ETHERNET_DMA_DMATPDR_OFFSET)
#define CH32V_ETHERNET_DMA_DMATPDR_TPD (32 <<  0) /* 01: Transmit poll demand */
#define CH32V_ETHERNET_DMA_DMATPDR_TPD_MASK (0xffffffff)
#define CH32V_ETHERNET_DMA_DMARPDR_OFFSET 0x0008
#define CH32V_ETHERNET_DMA_DMARPDR (CH32V_ETHERNET_DMA_BASE + CH32V_ETHERNET_DMA_DMARPDR_OFFSET)
#define CH32V_ETHERNET_DMA_DMARPDR_RPD (32 <<  0) /* 01: Receive poll demand */
#define CH32V_ETHERNET_DMA_DMARPDR_RPD_MASK (0xffffffff)
#define CH32V_ETHERNET_DMA_DMARDLAR_OFFSET 0x000c
#define CH32V_ETHERNET_DMA_DMARDLAR (CH32V_ETHERNET_DMA_BASE + CH32V_ETHERNET_DMA_DMARDLAR_OFFSET)
#define CH32V_ETHERNET_DMA_DMARDLAR_SRL (32 <<  0) /* 01: Start of receive list */
#define CH32V_ETHERNET_DMA_DMARDLAR_SRL_MASK (0xffffffff)
#define CH32V_ETHERNET_DMA_DMATDLAR_OFFSET 0x0010
#define CH32V_ETHERNET_DMA_DMATDLAR (CH32V_ETHERNET_DMA_BASE + CH32V_ETHERNET_DMA_DMATDLAR_OFFSET)
#define CH32V_ETHERNET_DMA_DMATDLAR_STL (32 <<  0) /* 01: Start of transmit list */
#define CH32V_ETHERNET_DMA_DMATDLAR_STL_MASK (0xffffffff)
#define CH32V_ETHERNET_DMA_DMASR_OFFSET 0x0014
#define CH32V_ETHERNET_DMA_DMASR  (CH32V_ETHERNET_DMA_BASE + CH32V_ETHERNET_DMA_DMASR_OFFSET)
#define CH32V_ETHERNET_DMA_DMASR_TS (1 <<  0) /* 01: Transmit status */
#define CH32V_ETHERNET_DMA_DMASR_TPSS (1 <<  1) /* 02: Transmit process stopped status */
#define CH32V_ETHERNET_DMA_DMASR_TBUS (1 <<  2) /* 04: Transmit buffer unavailable status */
#define CH32V_ETHERNET_DMA_DMASR_TJTS (1 <<  3) /* 08: Transmit jabber timeout status */
#define CH32V_ETHERNET_DMA_DMASR_ROS (1 <<  4) /* 10: Receive overflow status */
#define CH32V_ETHERNET_DMA_DMASR_TUS (1 <<  5) /* 20: Transmit underflow status */
#define CH32V_ETHERNET_DMA_DMASR_RS (1 <<  6) /* 40: Receive status */
#define CH32V_ETHERNET_DMA_DMASR_RBUS (1 <<  7) /* 80: Receive buffer unavailable status */
#define CH32V_ETHERNET_DMA_DMASR_RPSS (1 <<  8) /* 100: Receive process stopped status */
#define CH32V_ETHERNET_DMA_DMASR_PWTS (1 <<  9) /* 200: Receive watchdog timeout status */
#define CH32V_ETHERNET_DMA_DMASR_ETS (1 << 10) /* 400: Early transmit status */
#define CH32V_ETHERNET_DMA_DMASR_FBES (1 << 13) /* 2000: Fatal bus error status */
#define CH32V_ETHERNET_DMA_DMASR_ERS (1 << 14) /* 4000: Early receive status */
#define CH32V_ETHERNET_DMA_DMASR_AIS (1 << 15) /* 8000: Abnormal interrupt summary */
#define CH32V_ETHERNET_DMA_DMASR_NIS (1 << 16) /* 10000: Normal interrupt summary */
#define CH32V_ETHERNET_DMA_DMASR_RPS (3 << 17) /* 20000: Receive process state */
#define CH32V_ETHERNET_DMA_DMASR_RPS_MASK (0x07)
#define CH32V_ETHERNET_DMA_DMASR_TPS (3 << 20) /* 100000: Transmit process state */
#define CH32V_ETHERNET_DMA_DMASR_TPS_MASK (0x07)
#define CH32V_ETHERNET_DMA_DMASR_EBS (3 << 23) /* 800000: Error bits status */
#define CH32V_ETHERNET_DMA_DMASR_EBS_MASK (0x07)
#define CH32V_ETHERNET_DMA_DMASR_MMCS (1 << 27) /* 8000000: MMC status */
#define CH32V_ETHERNET_DMA_DMASR_PMTS (1 << 28) /* 10000000: PMT status */
#define CH32V_ETHERNET_DMA_DMASR_TSTS (1 << 29) /* 20000000: Time stamp trigger status */
#define CH32V_ETHERNET_DMA_DMASR_IPLS (1 << 31) /* 80000000: 10MPHY Physical layer variation */
#define CH32V_ETHERNET_DMA_DMAOMR_OFFSET 0x0018
#define CH32V_ETHERNET_DMA_DMAOMR (CH32V_ETHERNET_DMA_BASE + CH32V_ETHERNET_DMA_DMAOMR_OFFSET)
#define CH32V_ETHERNET_DMA_DMAOMR_SR (1 <<  1) /* 02: SR */
#define CH32V_ETHERNET_DMA_DMAOMR_OSF (1 <<  2) /* 04: OSF */
#define CH32V_ETHERNET_DMA_DMAOMR_RTC (2 <<  3) /* 08: RTC */
#define CH32V_ETHERNET_DMA_DMAOMR_RTC_MASK (0x03)
#define CH32V_ETHERNET_DMA_DMAOMR_FUGF (1 <<  6) /* 40: FUGF */
#define CH32V_ETHERNET_DMA_DMAOMR_FEF (1 <<  7) /* 80: FEF */
#define CH32V_ETHERNET_DMA_DMAOMR_ST (1 << 13) /* 2000: ST */
#define CH32V_ETHERNET_DMA_DMAOMR_TTC (3 << 14) /* 4000: TTC */
#define CH32V_ETHERNET_DMA_DMAOMR_TTC_MASK (0x07)
#define CH32V_ETHERNET_DMA_DMAOMR_FTF (1 << 20) /* 100000: FTF */
#define CH32V_ETHERNET_DMA_DMAOMR_TSF (1 << 21) /* 200000: TSF */
#define CH32V_ETHERNET_DMA_DMAOMR_DFRF (1 << 24) /* 1000000: DFRF */
#define CH32V_ETHERNET_DMA_DMAOMR_RSF (1 << 25) /* 2000000: RSF */
#define CH32V_ETHERNET_DMA_DMAOMR_DTCEFD (1 << 26) /* 4000000: DTCEFD */
#define CH32V_ETHERNET_DMA_DMAIER_OFFSET 0x001c
#define CH32V_ETHERNET_DMA_DMAIER (CH32V_ETHERNET_DMA_BASE + CH32V_ETHERNET_DMA_DMAIER_OFFSET)
#define CH32V_ETHERNET_DMA_DMAIER_TIE (1 <<  0) /* 01: Transmit interrupt enable */
#define CH32V_ETHERNET_DMA_DMAIER_TPSIE (1 <<  1) /* 02: Transmit process stopped interrupt enable */
#define CH32V_ETHERNET_DMA_DMAIER_TBUIE (1 <<  2) /* 04: Transmit buffer unavailable interrupt enable */
#define CH32V_ETHERNET_DMA_DMAIER_TJTIE (1 <<  3) /* 08: Transmit jabber timeout interrupt enable */
#define CH32V_ETHERNET_DMA_DMAIER_ROIE (1 <<  4) /* 10: Overflow interrupt enable */
#define CH32V_ETHERNET_DMA_DMAIER_TUIE (1 <<  5) /* 20: Underflow interrupt enable */
#define CH32V_ETHERNET_DMA_DMAIER_RIE (1 <<  6) /* 40: Receive interrupt enable */
#define CH32V_ETHERNET_DMA_DMAIER_RBUIE (1 <<  7) /* 80: Receive buffer unavailable interrupt enable */
#define CH32V_ETHERNET_DMA_DMAIER_RPSIE (1 <<  8) /* 100: Receive process stopped interrupt enable */
#define CH32V_ETHERNET_DMA_DMAIER_RWTIE (1 <<  9) /* 200: receive watchdog timeout interrupt enable */
#define CH32V_ETHERNET_DMA_DMAIER_ETIE (1 << 10) /* 400: Early transmit interrupt enable */
#define CH32V_ETHERNET_DMA_DMAIER_FBEIE (1 << 13) /* 2000: Fatal bus error interrupt enable */
#define CH32V_ETHERNET_DMA_DMAIER_ERIE (1 << 14) /* 4000: Early receive interrupt enable */
#define CH32V_ETHERNET_DMA_DMAIER_AISE (1 << 15) /* 8000: Abnormal interrupt summary enable */
#define CH32V_ETHERNET_DMA_DMAIER_NISE (1 << 16) /* 10000: Normal interrupt summary enable */
#define CH32V_ETHERNET_DMA_DMAIER_IPLE (1 << 31) /* 80000000: 10M Physical layer connection */
#define CH32V_ETHERNET_DMA_DMAMFBOCR_OFFSET 0x0020
#define CH32V_ETHERNET_DMA_DMAMFBOCR (CH32V_ETHERNET_DMA_BASE + CH32V_ETHERNET_DMA_DMAMFBOCR_OFFSET)
#define CH32V_ETHERNET_DMA_DMAMFBOCR_MFC (16 <<  0) /* 01: Missed frames by the controller */
#define CH32V_ETHERNET_DMA_DMAMFBOCR_MFC_MASK (0xffff)
#define CH32V_ETHERNET_DMA_DMAMFBOCR_OMFC (1 << 16) /* 10000: Overflow bit for missed frame counter */
#define CH32V_ETHERNET_DMA_DMAMFBOCR_MFA (11 << 17) /* 20000: Missed frames by the application */
#define CH32V_ETHERNET_DMA_DMAMFBOCR_MFA_MASK (0x7ff)
#define CH32V_ETHERNET_DMA_DMAMFBOCR_OFOC (1 << 28) /* 10000000: Overflow bit for FIFO overflow counter */
#define CH32V_ETHERNET_DMA_DMACHTDR_OFFSET 0x0048
#define CH32V_ETHERNET_DMA_DMACHTDR (CH32V_ETHERNET_DMA_BASE + CH32V_ETHERNET_DMA_DMACHTDR_OFFSET)
#define CH32V_ETHERNET_DMA_DMACHTDR_HTDAP (32 <<  0) /* 01: Host transmit descriptor address pointer */
#define CH32V_ETHERNET_DMA_DMACHTDR_HTDAP_MASK (0xffffffff)
#define CH32V_ETHERNET_DMA_DMACHRDR_OFFSET 0x004c
#define CH32V_ETHERNET_DMA_DMACHRDR (CH32V_ETHERNET_DMA_BASE + CH32V_ETHERNET_DMA_DMACHRDR_OFFSET)
#define CH32V_ETHERNET_DMA_DMACHRDR_HRDAP (32 <<  0) /* 01: Host receive descriptor address pointer */
#define CH32V_ETHERNET_DMA_DMACHRDR_HRDAP_MASK (0xffffffff)
#define CH32V_ETHERNET_DMA_DMACHTBAR_OFFSET 0x0050
#define CH32V_ETHERNET_DMA_DMACHTBAR (CH32V_ETHERNET_DMA_BASE + CH32V_ETHERNET_DMA_DMACHTBAR_OFFSET)
#define CH32V_ETHERNET_DMA_DMACHTBAR_HTBAP (32 <<  0) /* 01: Host transmit buffer address pointer */
#define CH32V_ETHERNET_DMA_DMACHTBAR_HTBAP_MASK (0xffffffff)
#define CH32V_ETHERNET_DMA_DMACHRBAR_OFFSET 0x0054
#define CH32V_ETHERNET_DMA_DMACHRBAR (CH32V_ETHERNET_DMA_BASE + CH32V_ETHERNET_DMA_DMACHRBAR_OFFSET)
#define CH32V_ETHERNET_DMA_DMACHRBAR_HRBAP (32 <<  0) /* 01: Host receive buffer address pointer */
#define CH32V_ETHERNET_DMA_DMACHRBAR_HRBAP_MASK (0xffffffff)

/* SDIO - Secure digital input/output interface */
#define CH32V_SDIO_BASE           0x40018000
#define CH32V_SDIO_POWER_OFFSET   0x0000
#define CH32V_SDIO_POWER          (CH32V_SDIO_BASE + CH32V_SDIO_POWER_OFFSET)
#define CH32V_SDIO_POWER_PWRCTRL  (2 <<  0) /* 01: Power supply control bits */
#define CH32V_SDIO_POWER_PWRCTRL_MASK  (0x03)
#define CH32V_SDIO_CLKCR_OFFSET   0x0004
#define CH32V_SDIO_CLKCR          (CH32V_SDIO_BASE + CH32V_SDIO_CLKCR_OFFSET)
#define CH32V_SDIO_CLKCR_CLKDIV   (8 <<  0) /* 01: Clock divide factor */
#define CH32V_SDIO_CLKCR_CLKDIV_MASK   (0xff)
#define CH32V_SDIO_CLKCR_CLKEN    (1 <<  8) /* 100: Clock enable bit */
#define CH32V_SDIO_CLKCR_PWRSAV   (1 <<  9) /* 200: Power saving configuration bit */
#define CH32V_SDIO_CLKCR_BYPASS   (1 << 10) /* 400: Clock divider bypass enable bit */
#define CH32V_SDIO_CLKCR_WIDBUS   (2 << 11) /* 800: Wide bus mode enable bit */
#define CH32V_SDIO_CLKCR_WIDBUS_MASK   (0x03)
#define CH32V_SDIO_CLKCR_NEGEDGE  (1 << 13) /* 2000: SDIO_CK dephasing selection bit */
#define CH32V_SDIO_CLKCR_HWFC_EN  (1 << 14) /* 4000: HW Flow Control enable */
#define CH32V_SDIO_ARG_OFFSET     0x0008
#define CH32V_SDIO_ARG            (CH32V_SDIO_BASE + CH32V_SDIO_ARG_OFFSET)
#define CH32V_SDIO_ARG_CMDARG     (32 <<  0) /* 01: Command argument */
#define CH32V_SDIO_ARG_CMDARG_MASK     (0xffffffff)
#define CH32V_SDIO_CMD_OFFSET     0x000c
#define CH32V_SDIO_CMD            (CH32V_SDIO_BASE + CH32V_SDIO_CMD_OFFSET)
#define CH32V_SDIO_CMD_CMDINDEX   (6 <<  0) /* 01: Command index */
#define CH32V_SDIO_CMD_CMDINDEX_MASK   (0x3f)
#define CH32V_SDIO_CMD_WAITRESP   (2 <<  6) /* 40: Wait for response bits */
#define CH32V_SDIO_CMD_WAITRESP_MASK   (0x03)
#define CH32V_SDIO_CMD_WAITINT    (1 <<  8) /* 100: CPSM waits for interrupt request */
#define CH32V_SDIO_CMD_WAITPEND   (1 <<  9) /* 200: CPSM Waits for ends of data transfer (CmdPend internal signal) */
#define CH32V_SDIO_CMD_CPSMEN     (1 << 10) /* 400: Command path state machine (CPSM) Enable bit */
#define CH32V_SDIO_CMD_SDIOSuspend (1 << 11) /* 800: SD I/O suspend command */
#define CH32V_SDIO_CMD_ENCMDcompl (1 << 12) /* 1000: Enable CMD completion */
#define CH32V_SDIO_CMD_nIEN       (1 << 13) /* 2000: not Interrupt Enable */
#define CH32V_SDIO_CMD_CE_ATACMD  (1 << 14) /* 4000: CE-ATA command */
#define CH32V_SDIO_RESPCMD_OFFSET 0x0010
#define CH32V_SDIO_RESPCMD        (CH32V_SDIO_BASE + CH32V_SDIO_RESPCMD_OFFSET)
#define CH32V_SDIO_RESPCMD_RESPCMD (6 <<  0) /* 01: Response command index */
#define CH32V_SDIO_RESPCMD_RESPCMD_MASK (0x3f)
#define CH32V_SDIO_RESP1_OFFSET   0x0014
#define CH32V_SDIO_RESP1          (CH32V_SDIO_BASE + CH32V_SDIO_RESP1_OFFSET)
#define CH32V_SDIO_RESP1_CARDSTATUS1 (32 <<  0) /* 01: Card status 1 */
#define CH32V_SDIO_RESP1_CARDSTATUS1_MASK (0xffffffff)
#define CH32V_SDIO_RESP2_OFFSET   0x0018
#define CH32V_SDIO_RESP2          (CH32V_SDIO_BASE + CH32V_SDIO_RESP2_OFFSET)
#define CH32V_SDIO_RESP2_CARDSTATUS2 (32 <<  0) /* 01: Card status 2 */
#define CH32V_SDIO_RESP2_CARDSTATUS2_MASK (0xffffffff)
#define CH32V_SDIO_RESP3_OFFSET   0x001c
#define CH32V_SDIO_RESP3          (CH32V_SDIO_BASE + CH32V_SDIO_RESP3_OFFSET)
#define CH32V_SDIO_RESP3_CARDSTATUS3 (32 <<  0) /* 01: Card status 3 */
#define CH32V_SDIO_RESP3_CARDSTATUS3_MASK (0xffffffff)
#define CH32V_SDIO_RESP4_OFFSET   0x0020
#define CH32V_SDIO_RESP4          (CH32V_SDIO_BASE + CH32V_SDIO_RESP4_OFFSET)
#define CH32V_SDIO_RESP4_CARDSTATUS4 (32 <<  0) /* 01: Card status 4 */
#define CH32V_SDIO_RESP4_CARDSTATUS4_MASK (0xffffffff)
#define CH32V_SDIO_DTIMER_OFFSET  0x0024
#define CH32V_SDIO_DTIMER         (CH32V_SDIO_BASE + CH32V_SDIO_DTIMER_OFFSET)
#define CH32V_SDIO_DTIMER_DATATIME (32 <<  0) /* 01: Data timeout period */
#define CH32V_SDIO_DTIMER_DATATIME_MASK (0xffffffff)
#define CH32V_SDIO_DLEN_OFFSET    0x0028
#define CH32V_SDIO_DLEN           (CH32V_SDIO_BASE + CH32V_SDIO_DLEN_OFFSET)
#define CH32V_SDIO_DLEN_DATALENGTH (25 <<  0) /* 01: Data length value */
#define CH32V_SDIO_DLEN_DATALENGTH_MASK (0x1ffffff)
#define CH32V_SDIO_DCTRL_OFFSET   0x002c
#define CH32V_SDIO_DCTRL          (CH32V_SDIO_BASE + CH32V_SDIO_DCTRL_OFFSET)
#define CH32V_SDIO_DCTRL_DTEN     (1 <<  0) /* 01: Data transfer enabled bit */
#define CH32V_SDIO_DCTRL_DTDIR    (1 <<  1) /* 02: Data transfer direction selection */
#define CH32V_SDIO_DCTRL_DTMODE   (1 <<  2) /* 04: Data transfer mode selection 1: Stream or SDIO multibyte data transfer */
#define CH32V_SDIO_DCTRL_DMAEN    (1 <<  3) /* 08: DMA enable bit */
#define CH32V_SDIO_DCTRL_DBLOCKSIZE (4 <<  4) /* 10: Data block size */
#define CH32V_SDIO_DCTRL_DBLOCKSIZE_MASK (0x0f)
#define CH32V_SDIO_DCTRL_PWSTART  (1 <<  8) /* 100: Read wait start */
#define CH32V_SDIO_DCTRL_PWSTOP   (1 <<  9) /* 200: Read wait stop */
#define CH32V_SDIO_DCTRL_RWMOD    (1 << 10) /* 400: Read wait mode */
#define CH32V_SDIO_DCTRL_SDIOEN   (1 << 11) /* 800: SD I/O enable functions */
#define CH32V_SDIO_DCOUNT_OFFSET  0x0030
#define CH32V_SDIO_DCOUNT         (CH32V_SDIO_BASE + CH32V_SDIO_DCOUNT_OFFSET)
#define CH32V_SDIO_DCOUNT_DATACOUNT (25 <<  0) /* 01: Data count value */
#define CH32V_SDIO_DCOUNT_DATACOUNT_MASK (0x1ffffff)
#define CH32V_SDIO_STA_OFFSET     0x0034
#define CH32V_SDIO_STA            (CH32V_SDIO_BASE + CH32V_SDIO_STA_OFFSET)
#define CH32V_SDIO_STA_CCRCFAIL   (1 <<  0) /* 01: Command response received (CRC check failed) */
#define CH32V_SDIO_STA_DCRCFAIL   (1 <<  1) /* 02: Data block sent/received (CRC check failed) */
#define CH32V_SDIO_STA_CTIMEOUT   (1 <<  2) /* 04: Command response timeout */
#define CH32V_SDIO_STA_DTIMEOUT   (1 <<  3) /* 08: Data timeout */
#define CH32V_SDIO_STA_TXUNDERR   (1 <<  4) /* 10: Transmit FIFO underrun error */
#define CH32V_SDIO_STA_RXOVERR    (1 <<  5) /* 20: Received FIFO overrun error */
#define CH32V_SDIO_STA_CMDREND    (1 <<  6) /* 40: Command response received (CRC check passed) */
#define CH32V_SDIO_STA_CMDSENT    (1 <<  7) /* 80: Command sent (no response required) */
#define CH32V_SDIO_STA_DATAEND    (1 <<  8) /* 100: Data end (data counter, SDIDCOUNT, is zero) */
#define CH32V_SDIO_STA_STBITERR   (1 <<  9) /* 200: Start bit not detected on all data signals in wide bus mode */
#define CH32V_SDIO_STA_DBCKEND    (1 << 10) /* 400: Data block sent/received (CRC check passed) */
#define CH32V_SDIO_STA_CMDACT     (1 << 11) /* 800: Command transfer in progress */
#define CH32V_SDIO_STA_TXACT      (1 << 12) /* 1000: Data transmit in progress */
#define CH32V_SDIO_STA_RXACT      (1 << 13) /* 2000: Data receive in progress */
#define CH32V_SDIO_STA_TXFIFOHE   (1 << 14) /* 4000: Transmit FIFO half empty: at least 8 words can be written into the FIFO */
#define CH32V_SDIO_STA_RXFIFOHF   (1 << 15) /* 8000: Receive FIFO half full: there are at least 8 words in the FIFO */
#define CH32V_SDIO_STA_TXFIFOF    (1 << 16) /* 10000: Transmit FIFO full */
#define CH32V_SDIO_STA_RXFIFOF    (1 << 17) /* 20000: Receive FIFO full */
#define CH32V_SDIO_STA_TXFIFOE    (1 << 18) /* 40000: Transmit FIFO empty */
#define CH32V_SDIO_STA_RXFIFOE    (1 << 19) /* 80000: Receive FIFO empty */
#define CH32V_SDIO_STA_TXDAVL     (1 << 20) /* 100000: Data available in transmit FIFO */
#define CH32V_SDIO_STA_RXDAVL     (1 << 21) /* 200000: Data available in receive FIFO */
#define CH32V_SDIO_STA_SDIOIT     (1 << 22) /* 400000: SDIO interrupt received */
#define CH32V_SDIO_STA_CEATAEND   (1 << 23) /* 800000: CE-ATA command completion signal received for CMD61 */
#define CH32V_SDIO_ICR_OFFSET     0x0038
#define CH32V_SDIO_ICR            (CH32V_SDIO_BASE + CH32V_SDIO_ICR_OFFSET)
#define CH32V_SDIO_ICR_CCRCFAILC  (1 <<  0) /* 01: CCRCFAIL flag clear bit */
#define CH32V_SDIO_ICR_DCRCFAILC  (1 <<  1) /* 02: DCRCFAIL flag clear bit */
#define CH32V_SDIO_ICR_CTIMEOUTC  (1 <<  2) /* 04: CTIMEOUT flag clear bit */
#define CH32V_SDIO_ICR_DTIMEOUTC  (1 <<  3) /* 08: DTIMEOUT flag clear bit */
#define CH32V_SDIO_ICR_TXUNDERRC  (1 <<  4) /* 10: TXUNDERR flag clear bit */
#define CH32V_SDIO_ICR_RXOVERRC   (1 <<  5) /* 20: RXOVERR flag clear bit */
#define CH32V_SDIO_ICR_CMDRENDC   (1 <<  6) /* 40: CMDREND flag clear bit */
#define CH32V_SDIO_ICR_CMDSENTC   (1 <<  7) /* 80: CMDSENT flag clear bit */
#define CH32V_SDIO_ICR_DATAENDC   (1 <<  8) /* 100: DATAEND flag clear bit */
#define CH32V_SDIO_ICR_STBITERRC  (1 <<  9) /* 200: STBITERR flag clear bit */
#define CH32V_SDIO_ICR_DBCKENDC   (1 << 10) /* 400: DBCKEND flag clear bit */
#define CH32V_SDIO_ICR_SDIOITC    (1 << 22) /* 400000: SDIOIT flag clear bit */
#define CH32V_SDIO_ICR_CEATAENDC  (1 << 23) /* 800000: CEATAEND flag clear bit */
#define CH32V_SDIO_MASK_OFFSET    0x003c
#define CH32V_SDIO_MASK           (CH32V_SDIO_BASE + CH32V_SDIO_MASK_OFFSET)
#define CH32V_SDIO_MASK_CCRCFAILIE (1 <<  0) /* 01: Command CRC fail interrupt enable */
#define CH32V_SDIO_MASK_DCRCFAILIE (1 <<  1) /* 02: Data CRC fail interrupt enable */
#define CH32V_SDIO_MASK_CTIMEOUTIE (1 <<  2) /* 04: Command timeout interrupt enable */
#define CH32V_SDIO_MASK_DTIMEOUTIE (1 <<  3) /* 08: Data timeout interrupt enable */
#define CH32V_SDIO_MASK_TXUNDERRIE (1 <<  4) /* 10: Tx FIFO underrun error interrupt enable */
#define CH32V_SDIO_MASK_RXOVERRIE (1 <<  5) /* 20: Rx FIFO overrun error interrupt enable */
#define CH32V_SDIO_MASK_CMDRENDIE (1 <<  6) /* 40: Command response received interrupt enable */
#define CH32V_SDIO_MASK_CMDSENTIE (1 <<  7) /* 80: Command sent interrupt enable */
#define CH32V_SDIO_MASK_DATAENDIE (1 <<  8) /* 100: Data end interrupt enable */
#define CH32V_SDIO_MASK_STBITERRIE (1 <<  9) /* 200: Start bit error interrupt enable */
#define CH32V_SDIO_MASK_DBACKENDIE (1 << 10) /* 400: Data block end interrupt enable */
#define CH32V_SDIO_MASK_CMDACTIE  (1 << 11) /* 800: Command acting interrupt enable */
#define CH32V_SDIO_MASK_TXACTIE   (1 << 12) /* 1000: Data transmit acting interrupt enable */
#define CH32V_SDIO_MASK_RXACTIE   (1 << 13) /* 2000: Data receive acting interrupt enable */
#define CH32V_SDIO_MASK_TXFIFOHEIE (1 << 14) /* 4000: Tx FIFO half empty interrupt enable */
#define CH32V_SDIO_MASK_RXFIFOHFIE (1 << 15) /* 8000: Rx FIFO half full interrupt enable */
#define CH32V_SDIO_MASK_TXFIFOFIE (1 << 16) /* 10000: Tx FIFO full interrupt enable */
#define CH32V_SDIO_MASK_RXFIFOFIE (1 << 17) /* 20000: Rx FIFO full interrupt enable */
#define CH32V_SDIO_MASK_TXFIFOEIE (1 << 18) /* 40000: Tx FIFO empty interrupt enable */
#define CH32V_SDIO_MASK_RXFIFOEIE (1 << 19) /* 80000: Rx FIFO empty interrupt enable */
#define CH32V_SDIO_MASK_TXDAVLIE  (1 << 20) /* 100000: Data available in Tx FIFO interrupt enable */
#define CH32V_SDIO_MASK_RXDAVLIE  (1 << 21) /* 200000: Data available in Rx FIFO interrupt enable */
#define CH32V_SDIO_MASK_SDIOITIE  (1 << 22) /* 400000: SDIO mode interrupt received interrupt enable */
#define CH32V_SDIO_MASK_CEATENDIE (1 << 23) /* 800000: CE-ATA command completion signal received interrupt enable */
#define CH32V_SDIO_FIFOCNT_OFFSET 0x0048
#define CH32V_SDIO_FIFOCNT        (CH32V_SDIO_BASE + CH32V_SDIO_FIFOCNT_OFFSET)
#define CH32V_SDIO_FIFOCNT_FIF0COUNT (32 <<  0) /* 01: Remaining number of words to be written to or read from the FIFO */
#define CH32V_SDIO_FIFOCNT_FIF0COUNT_MASK (0xffffffff)
#define CH32V_SDIO_FIFO_OFFSET    0x0080
#define CH32V_SDIO_FIFO           (CH32V_SDIO_BASE + CH32V_SDIO_FIFO_OFFSET)
#define CH32V_SDIO_FIFO_FIFOData  (32 <<  0) /* 01: Receive and transmit FIFO data */
#define CH32V_SDIO_FIFO_FIFOData_MASK  (0xffffffff)

/* FSMC - Flexible static memory controller */
#define CH32V_FSMC_BASE           0xa0000000
#define CH32V_FSMC_BCR1_OFFSET    0x0000
#define CH32V_FSMC_BCR1           (CH32V_FSMC_BASE + CH32V_FSMC_BCR1_OFFSET)
#define CH32V_FSMC_BCR1_CBURSTRW  (1 << 19) /* 80000: Write burst enable */
#define CH32V_FSMC_BCR1_ASYNCWAIT (1 << 15) /* 8000: Wait signal during asynchronous transfers */
#define CH32V_FSMC_BCR1_EXTMOD    (1 << 14) /* 4000: Extended mode enable */
#define CH32V_FSMC_BCR1_WAITEN    (1 << 13) /* 2000: Wait enable bit */
#define CH32V_FSMC_BCR1_WREN      (1 << 12) /* 1000: Write enable bit */
#define CH32V_FSMC_BCR1_WAITCFG   (1 << 11) /* 800: Wait timing configuration */
#define CH32V_FSMC_BCR1_WRAPMOD   (1 << 10) /* 400: Wrapped burst mode support */
#define CH32V_FSMC_BCR1_WAITPOL   (1 <<  9) /* 200: Wait signal polarity bit */
#define CH32V_FSMC_BCR1_BURSTEN   (1 <<  8) /* 100: Burst enable bit */
#define CH32V_FSMC_BCR1_FACCEN    (1 <<  6) /* 40: Flash access enable */
#define CH32V_FSMC_BCR1_MWID      (2 <<  4) /* 10: Memory databus width */
#define CH32V_FSMC_BCR1_MWID_MASK      (0x03)
#define CH32V_FSMC_BCR1_MTYP      (2 <<  2) /* 04: Memory type */
#define CH32V_FSMC_BCR1_MTYP_MASK      (0x03)
#define CH32V_FSMC_BCR1_MUXEN     (1 <<  1) /* 02: Address/data multiplexing enable bit */
#define CH32V_FSMC_BCR1_MBKEN     (1 <<  0) /* 01: Memory bank enable bit */
#define CH32V_FSMC_BTR1_OFFSET    0x0004
#define CH32V_FSMC_BTR1           (CH32V_FSMC_BASE + CH32V_FSMC_BTR1_OFFSET)
#define CH32V_FSMC_BTR1_ACCMOD    (2 << 28) /* 10000000: Access mode */
#define CH32V_FSMC_BTR1_ACCMOD_MASK    (0x03)
#define CH32V_FSMC_BTR1_DATLAT    (4 << 24) /* 1000000: Data latency for synchronous NOR Flash memory */
#define CH32V_FSMC_BTR1_DATLAT_MASK    (0x0f)
#define CH32V_FSMC_BTR1_CLKDIV    (4 << 20) /* 100000: Clock divide ratio (for FSMC_CLK signal) */
#define CH32V_FSMC_BTR1_CLKDIV_MASK    (0x0f)
#define CH32V_FSMC_BTR1_BUSTURN   (4 << 16) /* 10000: Bus turnaround phase duration */
#define CH32V_FSMC_BTR1_BUSTURN_MASK   (0x0f)
#define CH32V_FSMC_BTR1_DATAST    (8 <<  8) /* 100: Data-phase duration */
#define CH32V_FSMC_BTR1_DATAST_MASK    (0xff)
#define CH32V_FSMC_BTR1_ADDHLD    (4 <<  4) /* 10: Address-hold phase duration */
#define CH32V_FSMC_BTR1_ADDHLD_MASK    (0x0f)
#define CH32V_FSMC_BTR1_ADDSET    (4 <<  0) /* 01: Address setup phase duration */
#define CH32V_FSMC_BTR1_ADDSET_MASK    (0x0f)
#define CH32V_FSMC_PCR2_OFFSET    0x0060
#define CH32V_FSMC_PCR2           (CH32V_FSMC_BASE + CH32V_FSMC_PCR2_OFFSET)
#define CH32V_FSMC_PCR2_ECCPS     (3 << 17) /* 20000: ECC page size */
#define CH32V_FSMC_PCR2_ECCPS_MASK     (0x07)
#define CH32V_FSMC_PCR2_TAR       (4 << 13) /* 2000: ALE to RE delay */
#define CH32V_FSMC_PCR2_TAR_MASK       (0x0f)
#define CH32V_FSMC_PCR2_TCLR      (4 <<  9) /* 200: CLE to RE delay */
#define CH32V_FSMC_PCR2_TCLR_MASK      (0x0f)
#define CH32V_FSMC_PCR2_ECCEN     (1 <<  6) /* 40: ECC computation logic enable bit */
#define CH32V_FSMC_PCR2_PWID      (2 <<  4) /* 10: Databus width */
#define CH32V_FSMC_PCR2_PWID_MASK      (0x03)
#define CH32V_FSMC_PCR2_PTYP      (1 <<  3) /* 08: Memory type */
#define CH32V_FSMC_PCR2_PBKEN     (1 <<  2) /* 04: PC Card/NAND Flash memory bank enable bit */
#define CH32V_FSMC_PCR2_PWAITEN   (1 <<  1) /* 02: Wait feature enable bit */
#define CH32V_FSMC_SR2_OFFSET     0x0064
#define CH32V_FSMC_SR2            (CH32V_FSMC_BASE + CH32V_FSMC_SR2_OFFSET)
#define CH32V_FSMC_SR2_FEMPT      (1 <<  6) /* 40: FIFO empty */
#define CH32V_FSMC_SR2_IFEN       (1 <<  5) /* 20: Interrupt falling edge detection enable bit */
#define CH32V_FSMC_SR2_ILEN       (1 <<  4) /* 10: Interrupt high-level detection enable bit */
#define CH32V_FSMC_SR2_IREN       (1 <<  3) /* 08: Interrupt rising edge detection enable bit */
#define CH32V_FSMC_SR2_IFS        (1 <<  2) /* 04: Interrupt falling edge status */
#define CH32V_FSMC_SR2_ILS        (1 <<  1) /* 02: Interrupt high-level status */
#define CH32V_FSMC_SR2_IRS        (1 <<  0) /* 01: Interrupt rising edge status */
#define CH32V_FSMC_PMEM2_OFFSET   0x0068
#define CH32V_FSMC_PMEM2          (CH32V_FSMC_BASE + CH32V_FSMC_PMEM2_OFFSET)
#define CH32V_FSMC_PMEM2_MEMHIZx  (8 << 24) /* 1000000: Common memory x databus HiZ time */
#define CH32V_FSMC_PMEM2_MEMHIZx_MASK  (0xff)
#define CH32V_FSMC_PMEM2_MEMHOLDx (8 << 16) /* 10000: Common memory x hold time */
#define CH32V_FSMC_PMEM2_MEMHOLDx_MASK (0xff)
#define CH32V_FSMC_PMEM2_MEMWAITx (8 <<  8) /* 100: Common memory x wait time */
#define CH32V_FSMC_PMEM2_MEMWAITx_MASK (0xff)
#define CH32V_FSMC_PMEM2_MEMSETx  (8 <<  0) /* 01: Common memory x setup time */
#define CH32V_FSMC_PMEM2_MEMSETx_MASK  (0xff)
#define CH32V_FSMC_PATT2_OFFSET   0x006c
#define CH32V_FSMC_PATT2          (CH32V_FSMC_BASE + CH32V_FSMC_PATT2_OFFSET)
#define CH32V_FSMC_PATT2_ATTHIZx  (8 << 24) /* 1000000: Attribute memory x databus HiZ time */
#define CH32V_FSMC_PATT2_ATTHIZx_MASK  (0xff)
#define CH32V_FSMC_PATT2_ATTHOLDx (8 << 16) /* 10000: Attribute memory x hold time */
#define CH32V_FSMC_PATT2_ATTHOLDx_MASK (0xff)
#define CH32V_FSMC_PATT2_ATTWAITx (8 <<  8) /* 100: Attribute memory x wait time */
#define CH32V_FSMC_PATT2_ATTWAITx_MASK (0xff)
#define CH32V_FSMC_PATT2_ATTSETx  (8 <<  0) /* 01: Attribute memory x setup time */
#define CH32V_FSMC_PATT2_ATTSETx_MASK  (0xff)
#define CH32V_FSMC_ECCR2_OFFSET   0x0074
#define CH32V_FSMC_ECCR2          (CH32V_FSMC_BASE + CH32V_FSMC_ECCR2_OFFSET)
#define CH32V_FSMC_ECCR2_ECCx     (32 <<  0) /* 01: ECC result */
#define CH32V_FSMC_ECCR2_ECCx_MASK     (0xffffffff)
#define CH32V_FSMC_BWTR1_OFFSET   0x0104
#define CH32V_FSMC_BWTR1          (CH32V_FSMC_BASE + CH32V_FSMC_BWTR1_OFFSET)
#define CH32V_FSMC_BWTR1_ACCMOD   (2 << 28) /* 10000000: Access mode */
#define CH32V_FSMC_BWTR1_ACCMOD_MASK   (0x03)
#define CH32V_FSMC_BWTR1_DATLAT   (4 << 24) /* 1000000: Data latency for synchronous NOR Flash memory */
#define CH32V_FSMC_BWTR1_DATLAT_MASK   (0x0f)
#define CH32V_FSMC_BWTR1_CLKDIV   (4 << 20) /* 100000: Clock divide ratio (for FSMC_CLK signal) */
#define CH32V_FSMC_BWTR1_CLKDIV_MASK   (0x0f)
#define CH32V_FSMC_BWTR1_DATAST   (8 <<  8) /* 100: Data-phase duration */
#define CH32V_FSMC_BWTR1_DATAST_MASK   (0xff)
#define CH32V_FSMC_BWTR1_ADDHLD   (4 <<  4) /* 10: Address-hold phase duration */
#define CH32V_FSMC_BWTR1_ADDHLD_MASK   (0x0f)
#define CH32V_FSMC_BWTR1_ADDSET   (4 <<  0) /* 01: Address setup phase duration */
#define CH32V_FSMC_BWTR1_ADDSET_MASK   (0x0f)

/* DVP - Digital Video Port */
#define CH32V_DVP_BASE            0x50050000
#define CH32V_DVP_CR0_OFFSET      0x0000
#define CH32V_DVP_CR0             (CH32V_DVP_BASE + CH32V_DVP_CR0_OFFSET)
#define CH32V_DVP_CR0_RB_DVP_ENABLE (1 <<  0) /* 01: DVP enable */
#define CH32V_DVP_CR0_RB_DVP_V_POLAR (1 <<  1) /* 02: DVP VSYNC polarity control */
#define CH32V_DVP_CR0_RB_DVP_H_POLAR (1 <<  2) /* 04: DVP HSYNC polarity control */
#define CH32V_DVP_CR0_RB_DVP_P_POLAR (1 <<  3) /* 08: DVP PCLK polarity control */
#define CH32V_DVP_CR0_RB_DVP_MSK_DAT_MOD (2 <<  4) /* 10: DVP data mode */
#define CH32V_DVP_CR0_RB_DVP_MSK_DAT_MOD_MASK (0x03)
#define CH32V_DVP_CR0_RB_DVP_JPEG (1 <<  6) /* 40: DVP JPEG mode */
#define CH32V_DVP_CR1_OFFSET      0x0001
#define CH32V_DVP_CR1             (CH32V_DVP_BASE + CH32V_DVP_CR1_OFFSET)
#define CH32V_DVP_CR1_RB_DVP_DMA_EN (1 <<  0) /* 01: DVP dma enable */
#define CH32V_DVP_CR1_RB_DVP_ALL_CLR (1 <<  1) /* 02: DVP all clear */
#define CH32V_DVP_CR1_RB_DVP_RCV_CLR (1 <<  2) /* 04: DVP receive logic clear */
#define CH32V_DVP_CR1_RB_DVP_BUF_TOG (1 <<  3) /* 08: DVP bug toggle by software */
#define CH32V_DVP_CR1_RB_DVP_CM   (1 <<  4) /* 10: DVP capture mode */
#define CH32V_DVP_CR1_RB_DVP_CROP (1 <<  5) /* 20: DVP Crop feature enable */
#define CH32V_DVP_CR1_RB_DVP_FCRC (2 <<  6) /* 40: DVP frame capture rate control */
#define CH32V_DVP_CR1_RB_DVP_FCRC_MASK (0x03)
#define CH32V_DVP_IER_OFFSET      0x0002
#define CH32V_DVP_IER             (CH32V_DVP_BASE + CH32V_DVP_IER_OFFSET)
#define CH32V_DVP_IER_RB_DVP_IE_STR_FRM (1 <<  0) /* 01: DVP frame start interrupt enable */
#define CH32V_DVP_IER_RB_DVP_IE_ROW_DONE (1 <<  1) /* 02: DVP row received done interrupt enable */
#define CH32V_DVP_IER_RB_DVP_IE_FRM_DONE (1 <<  2) /* 04: DVP frame received done interrupt enable */
#define CH32V_DVP_IER_RB_DVP_IE_FIFO_OV (1 <<  3) /* 08: DVP receive fifo overflow interrupt enable */
#define CH32V_DVP_IER_RB_DVP_IE_STP_FRM (1 <<  4) /* 10: DVP frame stop interrupt enable */
#define CH32V_DVP_ROW_NUM_OFFSET  0x0004
#define CH32V_DVP_ROW_NUM         (CH32V_DVP_BASE + CH32V_DVP_ROW_NUM_OFFSET)
#define CH32V_DVP_ROW_NUM_RB_DVP_ROW_NUM (16 <<  0) /* 01: The number of rows of frame image data */
#define CH32V_DVP_ROW_NUM_RB_DVP_ROW_NUM_MASK (0xffff)
#define CH32V_DVP_COL_NUM_OFFSET  0x0006
#define CH32V_DVP_COL_NUM         (CH32V_DVP_BASE + CH32V_DVP_COL_NUM_OFFSET)
#define CH32V_DVP_COL_NUM_RB_DVP_COL_NUM (16 <<  0) /* 01: Number of PCLK cycles for row data */
#define CH32V_DVP_COL_NUM_RB_DVP_COL_NUM_MASK (0xffff)
#define CH32V_DVP_DMA_BUF0_OFFSET 0x0008
#define CH32V_DVP_DMA_BUF0        (CH32V_DVP_BASE + CH32V_DVP_DMA_BUF0_OFFSET)
#define CH32V_DVP_DMA_BUF0_RB_DVP_DMA_BUF0 (17 <<  0) /* 01: DMA receive address 0 */
#define CH32V_DVP_DMA_BUF0_RB_DVP_DMA_BUF0_MASK (0x1ffff)
#define CH32V_DVP_DMA_BUF1_OFFSET 0x000c
#define CH32V_DVP_DMA_BUF1        (CH32V_DVP_BASE + CH32V_DVP_DMA_BUF1_OFFSET)
#define CH32V_DVP_DMA_BUF1_RB_DVP_DMA_BUF1 (17 <<  0) /* 01: DMA receive address 1 */
#define CH32V_DVP_DMA_BUF1_RB_DVP_DMA_BUF1_MASK (0x1ffff)
#define CH32V_DVP_IFR_OFFSET      0x0010
#define CH32V_DVP_IFR             (CH32V_DVP_BASE + CH32V_DVP_IFR_OFFSET)
#define CH32V_DVP_IFR_RB_DVP_IF_STR_FRM (1 <<  0) /* 01: DVP frame start interrupt enable */
#define CH32V_DVP_IFR_RB_DVP_IF_ROW_DONE (1 <<  1) /* 02: DVP row received done interrupt enable */
#define CH32V_DVP_IFR_RB_DVP_IF_FRM_DONE (1 <<  2) /* 04: DVP frame received done interrupt enable */
#define CH32V_DVP_IFR_RB_DVP_IF_FIFO_OV (1 <<  3) /* 08: DVP receive fifo overflow interrupt enable */
#define CH32V_DVP_IFR_RB_DVP_IF_STP_FRM (1 <<  4) /* 10: DVP frame stop interrupt enable */
#define CH32V_DVP_STATUS_OFFSET   0x0011
#define CH32V_DVP_STATUS          (CH32V_DVP_BASE + CH32V_DVP_STATUS_OFFSET)
#define CH32V_DVP_STATUS_RB_DVP_FIFO_RDY (1 <<  0) /* 01: DVP frame start interrupt enable */
#define CH32V_DVP_STATUS_RB_DVP_FIFO_FULL (1 <<  1) /* 02: DVP row received done interrupt enable */
#define CH32V_DVP_STATUS_RB_DVP_FIFO_OV (1 <<  2) /* 04: DVP frame received done interrupt enable */
#define CH32V_DVP_STATUS_RB_DVP_MSK_FIFO_CNT (3 <<  4) /* 10: DVP receive fifo overflow interrupt enable */
#define CH32V_DVP_STATUS_RB_DVP_MSK_FIFO_CNT_MASK (0x07)
#define CH32V_DVP_ROW_CNT_OFFSET  0x0014
#define CH32V_DVP_ROW_CNT         (CH32V_DVP_BASE + CH32V_DVP_ROW_CNT_OFFSET)
#define CH32V_DVP_ROW_CNT_RB_DVP_ROW_CNT (16 <<  0) /* 01: The number of rows of frame image data */
#define CH32V_DVP_ROW_CNT_RB_DVP_ROW_CNT_MASK (0xffff)
#define CH32V_DVP_HOFFCNT_OFFSET  0x0018
#define CH32V_DVP_HOFFCNT         (CH32V_DVP_BASE + CH32V_DVP_HOFFCNT_OFFSET)
#define CH32V_DVP_HOFFCNT_RB_DVP_HOFFCNT (16 <<  0) /* 01: Number of PCLK cycles for row data */
#define CH32V_DVP_HOFFCNT_RB_DVP_HOFFCNT_MASK (0xffff)
#define CH32V_DVP_VST_OFFSET      0x001a
#define CH32V_DVP_VST             (CH32V_DVP_BASE + CH32V_DVP_VST_OFFSET)
#define CH32V_DVP_VST_RB_DVP_VST  (16 <<  0) /* 01: The number of lines captured by the image */
#define CH32V_DVP_VST_RB_DVP_VST_MASK  (0xffff)
#define CH32V_DVP_CAPCNT_OFFSET   0x001c
#define CH32V_DVP_CAPCNT          (CH32V_DVP_BASE + CH32V_DVP_CAPCNT_OFFSET)
#define CH32V_DVP_CAPCNT_RB_DVP_CAPCNT (16 <<  0) /* 01: Number of PCLK cycles captured by clipping window */
#define CH32V_DVP_CAPCNT_RB_DVP_CAPCNT_MASK (0xffff)
#define CH32V_DVP_VLINE_OFFSET    0x001e
#define CH32V_DVP_VLINE           (CH32V_DVP_BASE + CH32V_DVP_VLINE_OFFSET)
#define CH32V_DVP_VLINE_RB_DVP_VLINE (16 <<  0) /* 01: Crop the number of rows captured by window */
#define CH32V_DVP_VLINE_RB_DVP_VLINE_MASK (0xffff)
#define CH32V_DVP_DR_OFFSET       0x0020
#define CH32V_DVP_DR              (CH32V_DVP_BASE + CH32V_DVP_DR_OFFSET)
#define CH32V_DVP_DR_RB_DVP_DR    (32 <<  0) /* 01: Prevent DMA overflow */
#define CH32V_DVP_DR_RB_DVP_DR_MASK    (0xffffffff)

/* DAC - Digital to analog converter */
#define CH32V_DAC_BASE            0x40007400
#define CH32V_DAC_CTLR_OFFSET     0x0000
#define CH32V_DAC_CTLR            (CH32V_DAC_BASE + CH32V_DAC_CTLR_OFFSET)
#define CH32V_DAC_CTLR_EN1        (1 <<  0) /* 01: DAC channel1 enable */
#define CH32V_DAC_CTLR_BOFF1      (1 <<  1) /* 02: DAC channel1 output buffer disable */
#define CH32V_DAC_CTLR_TEN1       (1 <<  2) /* 04: DAC channel1 trigger enable */
#define CH32V_DAC_CTLR_TSEL1      (3 <<  3) /* 08: DAC channel1 trigger selection */
#define CH32V_DAC_CTLR_TSEL1_MASK      (0x07)
#define CH32V_DAC_CTLR_WAVE1      (2 <<  6) /* 40: DAC channel1 noise/triangle wave generation enable */
#define CH32V_DAC_CTLR_WAVE1_MASK      (0x03)
#define CH32V_DAC_CTLR_MAMP1      (4 <<  8) /* 100: DAC channel1 mask/amplitude selector */
#define CH32V_DAC_CTLR_MAMP1_MASK      (0x0f)
#define CH32V_DAC_CTLR_DMAEN1     (1 << 12) /* 1000: DAC channel1 DMA enable */
#define CH32V_DAC_CTLR_EN2        (1 << 16) /* 10000: DAC channel2 enable */
#define CH32V_DAC_CTLR_BOFF2      (1 << 17) /* 20000: DAC channel2 output buffer disable */
#define CH32V_DAC_CTLR_TEN2       (1 << 18) /* 40000: DAC channel2 trigger enable */
#define CH32V_DAC_CTLR_TSEL2      (3 << 19) /* 80000: DAC channel2 trigger selection */
#define CH32V_DAC_CTLR_TSEL2_MASK      (0x07)
#define CH32V_DAC_CTLR_WAVE2      (2 << 22) /* 400000: DAC channel2 noise/triangle wave generation enable */
#define CH32V_DAC_CTLR_WAVE2_MASK      (0x03)
#define CH32V_DAC_CTLR_MAMP2      (4 << 24) /* 1000000: DAC channel2 mask/amplitude selector */
#define CH32V_DAC_CTLR_MAMP2_MASK      (0x0f)
#define CH32V_DAC_CTLR_DMAEN2     (1 << 28) /* 10000000: DAC channel2 DMA enable */
#define CH32V_DAC_SWTR_OFFSET     0x0004
#define CH32V_DAC_SWTR            (CH32V_DAC_BASE + CH32V_DAC_SWTR_OFFSET)
#define CH32V_DAC_SWTR_SWTRIG1    (1 <<  0) /* 01: DAC channel1 software trigger */
#define CH32V_DAC_SWTR_SWTRIG2    (1 <<  1) /* 02: DAC channel2 software trigger */
#define CH32V_DAC_R12BDHR1_OFFSET 0x0008
#define CH32V_DAC_R12BDHR1        (CH32V_DAC_BASE + CH32V_DAC_R12BDHR1_OFFSET)
#define CH32V_DAC_R12BDHR1_DACC1DHR (12 <<  0) /* 01: DAC channel1 12-bit right-aligned data */
#define CH32V_DAC_R12BDHR1_DACC1DHR_MASK (0xfff)
#define CH32V_DAC_L12BDHR1_OFFSET 0x000c
#define CH32V_DAC_L12BDHR1        (CH32V_DAC_BASE + CH32V_DAC_L12BDHR1_OFFSET)
#define CH32V_DAC_L12BDHR1_DACC1DHR (12 <<  4) /* 10: DAC channel1 12-bit left-aligned data */
#define CH32V_DAC_L12BDHR1_DACC1DHR_MASK (0xfff)
#define CH32V_DAC_R8BDHR1_OFFSET  0x0010
#define CH32V_DAC_R8BDHR1         (CH32V_DAC_BASE + CH32V_DAC_R8BDHR1_OFFSET)
#define CH32V_DAC_R8BDHR1_DACC1DHR (8 <<  0) /* 01: DAC channel1 8-bit right-aligned data */
#define CH32V_DAC_R8BDHR1_DACC1DHR_MASK (0xff)
#define CH32V_DAC_R12BDHR2_OFFSET 0x0014
#define CH32V_DAC_R12BDHR2        (CH32V_DAC_BASE + CH32V_DAC_R12BDHR2_OFFSET)
#define CH32V_DAC_R12BDHR2_DACC2DHR (12 <<  0) /* 01: DAC channel2 12-bit right-aligned data */
#define CH32V_DAC_R12BDHR2_DACC2DHR_MASK (0xfff)
#define CH32V_DAC_L12BDHR2_OFFSET 0x0018
#define CH32V_DAC_L12BDHR2        (CH32V_DAC_BASE + CH32V_DAC_L12BDHR2_OFFSET)
#define CH32V_DAC_L12BDHR2_DACC2DHR (12 <<  4) /* 10: DAC channel2 12-bit left-aligned data */
#define CH32V_DAC_L12BDHR2_DACC2DHR_MASK (0xfff)
#define CH32V_DAC_R8BDHR2_OFFSET  0x001c
#define CH32V_DAC_R8BDHR2         (CH32V_DAC_BASE + CH32V_DAC_R8BDHR2_OFFSET)
#define CH32V_DAC_R8BDHR2_DACC2DHR (8 <<  0) /* 01: DAC channel2 8-bit right-aligned data */
#define CH32V_DAC_R8BDHR2_DACC2DHR_MASK (0xff)
#define CH32V_DAC_RD12BDHR_OFFSET 0x0020
#define CH32V_DAC_RD12BDHR        (CH32V_DAC_BASE + CH32V_DAC_RD12BDHR_OFFSET)
#define CH32V_DAC_RD12BDHR_DACC1DHR (12 <<  0) /* 01: DAC channel1 12-bit right-aligned data */
#define CH32V_DAC_RD12BDHR_DACC1DHR_MASK (0xfff)
#define CH32V_DAC_RD12BDHR_DACC2DHR (12 << 16) /* 10000: DAC channel2 12-bit right-aligned data */
#define CH32V_DAC_RD12BDHR_DACC2DHR_MASK (0xfff)
#define CH32V_DAC_LD12BDHR_OFFSET 0x0024
#define CH32V_DAC_LD12BDHR        (CH32V_DAC_BASE + CH32V_DAC_LD12BDHR_OFFSET)
#define CH32V_DAC_LD12BDHR_DACC1DHR (12 <<  4) /* 10: DAC channel1 12-bit left-aligned data */
#define CH32V_DAC_LD12BDHR_DACC1DHR_MASK (0xfff)
#define CH32V_DAC_LD12BDHR_DACC2DHR (12 << 20) /* 100000: DAC channel2 12-bit right-aligned data */
#define CH32V_DAC_LD12BDHR_DACC2DHR_MASK (0xfff)
#define CH32V_DAC_RD8BDHR_OFFSET  0x0028
#define CH32V_DAC_RD8BDHR         (CH32V_DAC_BASE + CH32V_DAC_RD8BDHR_OFFSET)
#define CH32V_DAC_RD8BDHR_DACC1DHR (8 <<  0) /* 01: DAC channel1 8-bit right-aligned data */
#define CH32V_DAC_RD8BDHR_DACC1DHR_MASK (0xff)
#define CH32V_DAC_RD8BDHR_DACC2DHR (8 <<  8) /* 100: DAC channel2 8-bit right-aligned data */
#define CH32V_DAC_RD8BDHR_DACC2DHR_MASK (0xff)
#define CH32V_DAC_DOR1_OFFSET     0x002c
#define CH32V_DAC_DOR1            (CH32V_DAC_BASE + CH32V_DAC_DOR1_OFFSET)
#define CH32V_DAC_DOR1_DACC1DOR   (12 <<  0) /* 01: DAC channel1 data output */
#define CH32V_DAC_DOR1_DACC1DOR_MASK   (0xfff)
#define CH32V_DAC_DOR2_OFFSET     0x0030
#define CH32V_DAC_DOR2            (CH32V_DAC_BASE + CH32V_DAC_DOR2_OFFSET)
#define CH32V_DAC_DOR2_DACC2DOR   (12 <<  0) /* 01: DAC channel2 data output */
#define CH32V_DAC_DOR2_DACC2DOR_MASK   (0xfff)

/* PWR - Power control */
#define CH32V_PWR_BASE            0x40007000
#define CH32V_PWR_CTLR_OFFSET     0x0000
#define CH32V_PWR_CTLR            (CH32V_PWR_BASE + CH32V_PWR_CTLR_OFFSET)
#define CH32V_PWR_CTLR_LPDS       (1 <<  0) /* 01: Low Power Deep Sleep */
#define CH32V_PWR_CTLR_PDDS       (1 <<  1) /* 02: Power Down Deep Sleep */
#define CH32V_PWR_CTLR_CWUF       (1 <<  2) /* 04: Clear Wake-up Flag */
#define CH32V_PWR_CTLR_CSBF       (1 <<  3) /* 08: Clear STANDBY Flag */
#define CH32V_PWR_CTLR_PVDE       (1 <<  4) /* 10: Power Voltage Detector Enable */
#define CH32V_PWR_CTLR_PLS        (3 <<  5) /* 20: PVD Level Selection */
#define CH32V_PWR_CTLR_PLS_MASK        (0x07)
#define CH32V_PWR_CTLR_DBP        (1 <<  8) /* 100: Disable Backup Domain write protection */
#define CH32V_PWR_CTLR_R2K_STYEN  (1 << 16) /* 10000: standby 2k ram enable */
#define CH32V_PWR_CTLR_R30K_STYEN (1 << 17) /* 20000: standby 30k ram enable */
#define CH32V_PWR_CTLR_R2K_VBATEN (1 << 18) /* 40000: VBAT 30k ram enable */
#define CH32V_PWR_CTLR_R30K_VBATEN (1 << 19) /* 80000: VBAT 30k ram enable */
#define CH32V_PWR_CTLR_RAM_LVEN   (1 << 20) /* 100000: Ram LV Enable */
#define CH32V_PWR_CSR_OFFSET      0x0004
#define CH32V_PWR_CSR             (CH32V_PWR_BASE + CH32V_PWR_CSR_OFFSET)
#define CH32V_PWR_CSR_WUF         (1 <<  0) /* 01: Wake-Up Flag */
#define CH32V_PWR_CSR_SBF         (1 <<  1) /* 02: STANDBY Flag */
#define CH32V_PWR_CSR_PVDO        (1 <<  2) /* 04: PVD Output */
#define CH32V_PWR_CSR_EWUP        (1 <<  8) /* 100: Enable WKUP pin */

/* RCC - Reset and clock control */
#define CH32V_RCC_BASE            0x40021000
#define CH32V_RCC_CTLR_OFFSET     0x0000
#define CH32V_RCC_CTLR            (CH32V_RCC_BASE + CH32V_RCC_CTLR_OFFSET)
#define CH32V_RCC_CTLR_HSION      (1 <<  0) /* 01: Internal High Speed clock enable */
#define CH32V_RCC_CTLR_HSIRDY     (1 <<  1) /* 02: Internal High Speed clock ready flag */
#define CH32V_RCC_CTLR_HSITRIM    (5 <<  3) /* 08: Internal High Speed clock trimming */
#define CH32V_RCC_CTLR_HSITRIM_MASK    (0x1f)
#define CH32V_RCC_CTLR_HSICAL     (8 <<  8) /* 100: Internal High Speed clock Calibration */
#define CH32V_RCC_CTLR_HSICAL_MASK     (0xff)
#define CH32V_RCC_CTLR_HSEON      (1 << 16) /* 10000: External High Speed clock enable */
#define CH32V_RCC_CTLR_HSERDY     (1 << 17) /* 20000: External High Speed clock ready flag */
#define CH32V_RCC_CTLR_HSEBYP     (1 << 18) /* 40000: External High Speed clock Bypass */
#define CH32V_RCC_CTLR_CSSON      (1 << 19) /* 80000: Clock Security System enable */
#define CH32V_RCC_CTLR_PLLON      (1 << 24) /* 1000000: PLL enable */
#define CH32V_RCC_CTLR_PLLRDY     (1 << 25) /* 2000000: PLL clock ready flag */
#define CH32V_RCC_CTLR_PLL2ON     (1 << 26) /* 4000000: PLL2 enable */
#define CH32V_RCC_CTLR_PLL2RDY    (1 << 27) /* 8000000: PLL2 clock ready flag */
#define CH32V_RCC_CTLR_PLL3ON     (1 << 28) /* 10000000: PLL3 enable */
#define CH32V_RCC_CTLR_PLL3RDY    (1 << 29) /* 20000000: PLL3 clock ready flag */
#define CH32V_RCC_CFGR0_OFFSET    0x0004
#define CH32V_RCC_CFGR0           (CH32V_RCC_BASE + CH32V_RCC_CFGR0_OFFSET)
#define CH32V_RCC_CFGR0_SW        (2 <<  0) /* 01: System clock Switch */
#define CH32V_RCC_CFGR0_SW_MASK        (0x03)
#define CH32V_RCC_CFGR0_SWS       (2 <<  2) /* 04: System Clock Switch Status */
#define CH32V_RCC_CFGR0_SWS_MASK       (0x03)
#define CH32V_RCC_CFGR0_HPRE      (4 <<  4) /* 10: AHB prescaler */
#define CH32V_RCC_CFGR0_HPRE_MASK      (0x0f)
#define CH32V_RCC_CFGR0_PPRE1     (3 <<  8) /* 100: APB Low speed prescaler (APB1) */
#define CH32V_RCC_CFGR0_PPRE1_MASK     (0x07)
#define CH32V_RCC_CFGR0_PPRE2     (3 << 11) /* 800: APB High speed prescaler (APB2) */
#define CH32V_RCC_CFGR0_PPRE2_MASK     (0x07)
#define CH32V_RCC_CFGR0_ADCPRE    (2 << 14) /* 4000: ADC prescaler */
#define CH32V_RCC_CFGR0_ADCPRE_MASK    (0x03)
#define CH32V_RCC_CFGR0_PLLSRC    (1 << 16) /* 10000: PLL entry clock source */
#define CH32V_RCC_CFGR0_PLLXTPRE  (1 << 17) /* 20000: HSE divider for PLL entry */
#define CH32V_RCC_CFGR0_PLLMUL    (4 << 18) /* 40000: PLL Multiplication Factor */
#define CH32V_RCC_CFGR0_PLLMUL_MASK    (0x0f)
#define CH32V_RCC_CFGR0_USBPRE    (2 << 22) /* 400000: USB prescaler */
#define CH32V_RCC_CFGR0_USBPRE_MASK    (0x03)
#define CH32V_RCC_CFGR0_MCO       (4 << 24) /* 1000000: Microcontroller clock output */
#define CH32V_RCC_CFGR0_MCO_MASK       (0x0f)
#define CH32V_RCC_CFGR0_ADC_CLK_ADJ (1 << 31) /* 80000000: ADC clock ADJ */
#define CH32V_RCC_INTR_OFFSET     0x0008
#define CH32V_RCC_INTR            (CH32V_RCC_BASE + CH32V_RCC_INTR_OFFSET)
#define CH32V_RCC_INTR_LSIRDYF    (1 <<  0) /* 01: LSI Ready Interrupt flag */
#define CH32V_RCC_INTR_LSERDYF    (1 <<  1) /* 02: LSE Ready Interrupt flag */
#define CH32V_RCC_INTR_HSIRDYF    (1 <<  2) /* 04: HSI Ready Interrupt flag */
#define CH32V_RCC_INTR_HSERDYF    (1 <<  3) /* 08: HSE Ready Interrupt flag */
#define CH32V_RCC_INTR_PLLRDYF    (1 <<  4) /* 10: PLL Ready Interrupt flag */
#define CH32V_RCC_INTR_PLL2RDYF   (1 <<  5) /* 20: PLL2 Ready Interrupt flag */
#define CH32V_RCC_INTR_PLL3RDYF   (1 <<  6) /* 40: PLL3 Ready Interrupt flag */
#define CH32V_RCC_INTR_CSSF       (1 <<  7) /* 80: Clock Security System Interrupt flag */
#define CH32V_RCC_INTR_LSIRDYIE   (1 <<  8) /* 100: LSI Ready Interrupt Enable */
#define CH32V_RCC_INTR_LSERDYIE   (1 <<  9) /* 200: LSE Ready Interrupt Enable */
#define CH32V_RCC_INTR_HSIRDYIE   (1 << 10) /* 400: HSI Ready Interrupt Enable */
#define CH32V_RCC_INTR_HSERDYIE   (1 << 11) /* 800: HSE Ready Interrupt Enable */
#define CH32V_RCC_INTR_PLLRDYIE   (1 << 12) /* 1000: PLL Ready Interrupt Enable */
#define CH32V_RCC_INTR_PLL2RDYIE  (1 << 13) /* 2000: PLL2 Ready Interrupt Enable */
#define CH32V_RCC_INTR_PLL3RDYIE  (1 << 14) /* 4000: PLL3 Ready Interrupt Enable */
#define CH32V_RCC_INTR_LSIRDYC    (1 << 16) /* 10000: LSI Ready Interrupt Clear */
#define CH32V_RCC_INTR_LSERDYC    (1 << 17) /* 20000: LSE Ready Interrupt Clear */
#define CH32V_RCC_INTR_HSIRDYC    (1 << 18) /* 40000: HSI Ready Interrupt Clear */
#define CH32V_RCC_INTR_HSERDYC    (1 << 19) /* 80000: HSE Ready Interrupt Clear */
#define CH32V_RCC_INTR_PLLRDYC    (1 << 20) /* 100000: PLL Ready Interrupt Clear */
#define CH32V_RCC_INTR_PLL2RDYC   (1 << 21) /* 200000: PLL2 Ready Interrupt Clear */
#define CH32V_RCC_INTR_PLL3RDYC   (1 << 22) /* 400000: PLL3 Ready Interrupt Clear */
#define CH32V_RCC_INTR_CSSC       (1 << 23) /* 800000: Clock security system interrupt clear */
#define CH32V_RCC_APB2PRSTR_OFFSET 0x000c
#define CH32V_RCC_APB2PRSTR       (CH32V_RCC_BASE + CH32V_RCC_APB2PRSTR_OFFSET)
#define CH32V_RCC_APB2PRSTR_AFIORST (1 <<  0) /* 01: Alternate function I/O reset */
#define CH32V_RCC_APB2PRSTR_IOPARST (1 <<  2) /* 04: IO port A reset */
#define CH32V_RCC_APB2PRSTR_IOPBRST (1 <<  3) /* 08: IO port B reset */
#define CH32V_RCC_APB2PRSTR_IOPCRST (1 <<  4) /* 10: IO port C reset */
#define CH32V_RCC_APB2PRSTR_IOPDRST (1 <<  5) /* 20: IO port D reset */
#define CH32V_RCC_APB2PRSTR_IOPERST (1 <<  6) /* 40: IO port E reset */
#define CH32V_RCC_APB2PRSTR_ADC1RST (1 <<  9) /* 200: ADC 1 interface reset */
#define CH32V_RCC_APB2PRSTR_ADC2RST (1 << 10) /* 400: ADC 2 interface reset */
#define CH32V_RCC_APB2PRSTR_TIM1RST (1 << 11) /* 800: TIM1 timer reset */
#define CH32V_RCC_APB2PRSTR_SPI1RST (1 << 12) /* 1000: SPI 1 reset */
#define CH32V_RCC_APB2PRSTR_TIM8RST (1 << 13) /* 2000: TIM8 timer reset */
#define CH32V_RCC_APB2PRSTR_USART1RST (1 << 14) /* 4000: USART1 reset */
#define CH32V_RCC_APB2PRSTR_TIM9RST (1 << 19) /* 80000: TIM9 timer reset */
#define CH32V_RCC_APB2PRSTR_TIM10RST (1 << 20) /* 100000: TIM10 timer reset */
#define CH32V_RCC_APB1PRSTR_OFFSET 0x0010
#define CH32V_RCC_APB1PRSTR       (CH32V_RCC_BASE + CH32V_RCC_APB1PRSTR_OFFSET)
#define CH32V_RCC_APB1PRSTR_TIM2RST (1 <<  0) /* 01: Timer 2 reset */
#define CH32V_RCC_APB1PRSTR_TIM3RST (1 <<  1) /* 02: Timer 3 reset */
#define CH32V_RCC_APB1PRSTR_TIM4RST (1 <<  2) /* 04: Timer 4 reset */
#define CH32V_RCC_APB1PRSTR_TIM5RST (1 <<  3) /* 08: Timer 5 reset */
#define CH32V_RCC_APB1PRSTR_TIM6RST (1 <<  4) /* 10: Timer 6 reset */
#define CH32V_RCC_APB1PRSTR_TIM7RST (1 <<  5) /* 20: Timer 7 reset */
#define CH32V_RCC_APB1PRSTR_UART6RST (1 <<  6) /* 40: UART 6 reset */
#define CH32V_RCC_APB1PRSTR_UART7RST (1 <<  7) /* 80: UART 7 reset */
#define CH32V_RCC_APB1PRSTR_UART8RST (1 <<  8) /* 100: UART 8 reset */
#define CH32V_RCC_APB1PRSTR_WWDGRST (1 << 11) /* 800: Window watchdog reset */
#define CH32V_RCC_APB1PRSTR_SPI2RST (1 << 14) /* 4000: SPI2 reset */
#define CH32V_RCC_APB1PRSTR_SPI3RST (1 << 15) /* 8000: SPI3 reset */
#define CH32V_RCC_APB1PRSTR_USART2RST (1 << 17) /* 20000: USART 2 reset */
#define CH32V_RCC_APB1PRSTR_USART3RST (1 << 18) /* 40000: USART 3 reset */
#define CH32V_RCC_APB1PRSTR_USART4RST (1 << 19) /* 80000: USART 4 reset */
#define CH32V_RCC_APB1PRSTR_USART5RST (1 << 20) /* 100000: USART 5 reset */
#define CH32V_RCC_APB1PRSTR_I2C1RST (1 << 21) /* 200000: I2C1 reset */
#define CH32V_RCC_APB1PRSTR_I2C2RST (1 << 22) /* 400000: I2C2 reset */
#define CH32V_RCC_APB1PRSTR_USBDRST (1 << 23) /* 800000: USBD reset */
#define CH32V_RCC_APB1PRSTR_CAN1RST (1 << 25) /* 2000000: CAN1 reset */
#define CH32V_RCC_APB1PRSTR_CAN2RST (1 << 26) /* 4000000: CAN2 reset */
#define CH32V_RCC_APB1PRSTR_BKPRST (1 << 27) /* 8000000: Backup interface reset */
#define CH32V_RCC_APB1PRSTR_PWRRST (1 << 28) /* 10000000: Power interface reset */
#define CH32V_RCC_APB1PRSTR_DACRST (1 << 29) /* 20000000: DAC interface reset */
#define CH32V_RCC_AHBPCENR_OFFSET 0x0014
#define CH32V_RCC_AHBPCENR        (CH32V_RCC_BASE + CH32V_RCC_AHBPCENR_OFFSET)
#define CH32V_RCC_AHBPCENR_DMA1EN (1 <<  0) /* 01: DMA clock enable */
#define CH32V_RCC_AHBPCENR_DMA2EN (1 <<  1) /* 02: DMA2 clock enable */
#define CH32V_RCC_AHBPCENR_SRAMEN (1 <<  2) /* 04: SRAM interface clock enable */
#define CH32V_RCC_AHBPCENR_FLITFEN (1 <<  4) /* 10: FLITF clock enable */
#define CH32V_RCC_AHBPCENR_CRCEN  (1 <<  6) /* 40: CRC clock enable */
#define CH32V_RCC_AHBPCENR_FSMCEN (1 <<  8) /* 100: FSMC clock enable */
#define CH32V_RCC_AHBPCENR_TRNG_EN (1 <<  9) /* 200: TRNG clock enable */
#define CH32V_RCC_AHBPCENR_SDIOEN (1 << 10) /* 400: SDIO clock enable */
#define CH32V_RCC_AHBPCENR_USBHS_EN (1 << 11) /* 800: USBHS clock enable */
#define CH32V_RCC_AHBPCENR_OTG_EN (1 << 12) /* 1000: OTG clock enable */
#define CH32V_RCC_AHBPCENR_DVP_EN (1 << 13) /* 2000: DVP clock enable */
#define CH32V_RCC_AHBPCENR_ETHMACEN (1 << 14) /* 4000: Ethernet MAC clock enable */
#define CH32V_RCC_AHBPCENR_ETHMACTXEN (1 << 15) /* 8000: Ethernet MAC TX clock enable */
#define CH32V_RCC_AHBPCENR_ETHMACRXEN (1 << 16) /* 10000: Ethernet MAC RX clock enable */
#define CH32V_RCC_APB2PCENR_OFFSET 0x0018
#define CH32V_RCC_APB2PCENR       (CH32V_RCC_BASE + CH32V_RCC_APB2PCENR_OFFSET)
#define CH32V_RCC_APB2PCENR_AFIOEN (1 <<  0) /* 01: Alternate function I/O clock enable */
#define CH32V_RCC_APB2PCENR_IOPAEN (1 <<  2) /* 04: I/O port A clock enable */
#define CH32V_RCC_APB2PCENR_IOPBEN (1 <<  3) /* 08: I/O port B clock enable */
#define CH32V_RCC_APB2PCENR_IOPCEN (1 <<  4) /* 10: I/O port C clock enable */
#define CH32V_RCC_APB2PCENR_IOPDEN (1 <<  5) /* 20: I/O port D clock enable */
#define CH32V_RCC_APB2PCENR_IOPEEN (1 <<  6) /* 40: I/O port E clock enable */
#define CH32V_RCC_APB2PCENR_ADC1EN (1 <<  9) /* 200: ADC1 interface clock enable */
#define CH32V_RCC_APB2PCENR_ADC2EN (1 << 10) /* 400: ADC 2 interface clock enable */
#define CH32V_RCC_APB2PCENR_TIM1EN (1 << 11) /* 800: TIM1 Timer clock enable */
#define CH32V_RCC_APB2PCENR_SPI1EN (1 << 12) /* 1000: SPI 1 clock enable */
#define CH32V_RCC_APB2PCENR_TIM8EN (1 << 13) /* 2000: TIM8 Timer clock enable */
#define CH32V_RCC_APB2PCENR_USART1EN (1 << 14) /* 4000: USART1 clock enable */
#define CH32V_RCC_APB2PCENR_TIM9_EN (1 << 19) /* 80000: TIM9 Timer clock enable */
#define CH32V_RCC_APB2PCENR_TIM10_EN (1 << 20) /* 100000: TIM10 Timer clock enable */
#define CH32V_RCC_APB1PCENR_OFFSET 0x001c
#define CH32V_RCC_APB1PCENR       (CH32V_RCC_BASE + CH32V_RCC_APB1PCENR_OFFSET)
#define CH32V_RCC_APB1PCENR_TIM2EN (1 <<  0) /* 01: Timer 2 clock enable */
#define CH32V_RCC_APB1PCENR_TIM3EN (1 <<  1) /* 02: Timer 3 clock enable */
#define CH32V_RCC_APB1PCENR_TIM4EN (1 <<  2) /* 04: Timer 4 clock enable */
#define CH32V_RCC_APB1PCENR_TIM5EN (1 <<  3) /* 08: Timer 5 clock enable */
#define CH32V_RCC_APB1PCENR_TIM6EN (1 <<  4) /* 10: Timer 6 clock enable */
#define CH32V_RCC_APB1PCENR_TIM7EN (1 <<  5) /* 20: Timer 7 clock enable */
#define CH32V_RCC_APB1PCENR_USART6_EN (1 <<  6) /* 40: USART 6 clock enable */
#define CH32V_RCC_APB1PCENR_USART7_EN (1 <<  7) /* 80: USART 7 clock enable */
#define CH32V_RCC_APB1PCENR_USART8_EN (1 <<  8) /* 100: USART 8 clock enable */
#define CH32V_RCC_APB1PCENR_WWDGEN (1 << 11) /* 800: Window watchdog clock enable */
#define CH32V_RCC_APB1PCENR_SPI2EN (1 << 14) /* 4000: SPI 2 clock enable */
#define CH32V_RCC_APB1PCENR_SPI3EN (1 << 15) /* 8000: SPI 3 clock enable */
#define CH32V_RCC_APB1PCENR_USART2EN (1 << 17) /* 20000: USART 2 clock enable */
#define CH32V_RCC_APB1PCENR_USART3EN (1 << 18) /* 40000: USART 3 clock enable */
#define CH32V_RCC_APB1PCENR_UART4EN (1 << 19) /* 80000: UART 4 clock enable */
#define CH32V_RCC_APB1PCENR_UART5EN (1 << 20) /* 100000: UART 5 clock enable */
#define CH32V_RCC_APB1PCENR_I2C1EN (1 << 21) /* 200000: I2C 1 clock enable */
#define CH32V_RCC_APB1PCENR_I2C2EN (1 << 22) /* 400000: I2C 2 clock enable */
#define CH32V_RCC_APB1PCENR_USBDEN (1 << 23) /* 800000: USBD clock enable */
#define CH32V_RCC_APB1PCENR_CAN1EN (1 << 25) /* 2000000: CAN1 clock enable */
#define CH32V_RCC_APB1PCENR_CAN2EN (1 << 26) /* 4000000: CAN2 clock enable */
#define CH32V_RCC_APB1PCENR_BKPEN (1 << 27) /* 8000000: Backup interface clock enable */
#define CH32V_RCC_APB1PCENR_PWREN (1 << 28) /* 10000000: Power interface clock enable */
#define CH32V_RCC_APB1PCENR_DACEN (1 << 29) /* 20000000: DAC interface clock enable */
#define CH32V_RCC_BDCTLR_OFFSET   0x0020
#define CH32V_RCC_BDCTLR          (CH32V_RCC_BASE + CH32V_RCC_BDCTLR_OFFSET)
#define CH32V_RCC_BDCTLR_LSEON    (1 <<  0) /* 01: External Low Speed oscillator enable */
#define CH32V_RCC_BDCTLR_LSERDY   (1 <<  1) /* 02: External Low Speed oscillator ready */
#define CH32V_RCC_BDCTLR_LSEBYP   (1 <<  2) /* 04: External Low Speed oscillator bypass */
#define CH32V_RCC_BDCTLR_RTCSEL   (2 <<  8) /* 100: RTC clock source selection */
#define CH32V_RCC_BDCTLR_RTCSEL_MASK   (0x03)
#define CH32V_RCC_BDCTLR_RTCEN    (1 << 15) /* 8000: RTC clock enable */
#define CH32V_RCC_BDCTLR_BDRST    (1 << 16) /* 10000: Backup domain software reset */
#define CH32V_RCC_RSTSCKR_OFFSET  0x0024
#define CH32V_RCC_RSTSCKR         (CH32V_RCC_BASE + CH32V_RCC_RSTSCKR_OFFSET)
#define CH32V_RCC_RSTSCKR_LSION   (1 <<  0) /* 01: Internal low speed oscillator enable */
#define CH32V_RCC_RSTSCKR_LSIRDY  (1 <<  1) /* 02: Internal low speed oscillator ready */
#define CH32V_RCC_RSTSCKR_RMVF    (1 << 24) /* 1000000: Remove reset flag */
#define CH32V_RCC_RSTSCKR_PINRSTF (1 << 26) /* 4000000: PIN reset flag */
#define CH32V_RCC_RSTSCKR_PORRSTF (1 << 27) /* 8000000: POR/PDR reset flag */
#define CH32V_RCC_RSTSCKR_SFTRSTF (1 << 28) /* 10000000: Software reset flag */
#define CH32V_RCC_RSTSCKR_IWDGRSTF (1 << 29) /* 20000000: Independent watchdog reset flag */
#define CH32V_RCC_RSTSCKR_WWDGRSTF (1 << 30) /* 40000000: Window watchdog reset flag */
#define CH32V_RCC_RSTSCKR_LPWRRSTF (1 << 31) /* 80000000: Low-power reset flag */
#define CH32V_RCC_AHBRSTR_OFFSET  0x0028
#define CH32V_RCC_AHBRSTR         (CH32V_RCC_BASE + CH32V_RCC_AHBRSTR_OFFSET)
#define CH32V_RCC_AHBRSTR_USBHDRST (1 << 12) /* 1000: USBHD reset */
#define CH32V_RCC_AHBRSTR_DVPRST  (1 << 13) /* 2000: DVP reset */
#define CH32V_RCC_AHBRSTR_ETHMACRST (1 << 14) /* 4000: Ethernet MAC reset */
#define CH32V_RCC_CFGR2_OFFSET    0x002c
#define CH32V_RCC_CFGR2           (CH32V_RCC_BASE + CH32V_RCC_CFGR2_OFFSET)
#define CH32V_RCC_CFGR2_PREDIV1   (4 <<  0) /* 01: PREDIV1 division factor */
#define CH32V_RCC_CFGR2_PREDIV1_MASK   (0x0f)
#define CH32V_RCC_CFGR2_PREDIV2   (4 <<  4) /* 10: PREDIV2 division factor */
#define CH32V_RCC_CFGR2_PREDIV2_MASK   (0x0f)
#define CH32V_RCC_CFGR2_PLL2MUL   (4 <<  8) /* 100: PLL2 Multiplication Factor */
#define CH32V_RCC_CFGR2_PLL2MUL_MASK   (0x0f)
#define CH32V_RCC_CFGR2_PLL3MUL   (4 << 12) /* 1000: PLL3 Multiplication Factor */
#define CH32V_RCC_CFGR2_PLL3MUL_MASK   (0x0f)
#define CH32V_RCC_CFGR2_PREDIV1SRC (1 << 16) /* 10000: PREDIV1 entry clock source */
#define CH32V_RCC_CFGR2_I2S2SRC   (1 << 17) /* 20000: I2S2 clock source */
#define CH32V_RCC_CFGR2_I2S3SRC   (1 << 18) /* 40000: I2S3 clock source */
#define CH32V_RCC_CFGR2_TRNG_SRC  (1 << 19) /* 80000: TRNG clock source */
#define CH32V_RCC_CFGR2_ETH1G_SRC (2 << 20) /* 100000: ETH1G clock source */
#define CH32V_RCC_CFGR2_ETH1G_SRC_MASK (0x03)
#define CH32V_RCC_CFGR2_ETH1G_125M_EN (1 << 22) /* 400000: ETH1G _125M clock enable */
#define CH32V_RCC_CFGR2_USBHS_PREDIY (3 << 24) /* 1000000: USB HS PREDIV division factor */
#define CH32V_RCC_CFGR2_USBHS_PREDIY_MASK (0x07)
#define CH32V_RCC_CFGR2_USBHS_PLL_SRC (1 << 27) /* 8000000: USB HS Multiplication Factor clock source */
#define CH32V_RCC_CFGR2_USBHS_CKPEF_SEL (2 << 28) /* 10000000: USB HS Peference Clock source */
#define CH32V_RCC_CFGR2_USBHS_CKPEF_SEL_MASK (0x03)
#define CH32V_RCC_CFGR2_USBHS_PLLALIVE (1 << 30) /* 40000000: USB HS Multiplication control */
#define CH32V_RCC_CFGR2_USBHS_CLK_SRC (1 << 31) /* 80000000: USB HS clock source */

/* EXTEND - Extend configuration */
#define CH32V_EXTEND_BASE         0x40023800
#define CH32V_EXTEND_EXTEND_CTR_OFFSET 0x0000
#define CH32V_EXTEND_EXTEND_CTR   (CH32V_EXTEND_BASE + CH32V_EXTEND_EXTEND_CTR_OFFSET)
#define CH32V_EXTEND_EXTEND_CTR_USBDLS (1 <<  0) /* 01: USBD Lowspeed Enable */
#define CH32V_EXTEND_EXTEND_CTR_USBDPU (1 <<  1) /* 02: USBD pullup Enable */
#define CH32V_EXTEND_EXTEND_CTR_ETH_10M_EN (1 <<  2) /* 04: ETH 10M Enable */
#define CH32V_EXTEND_EXTEND_CTR_ETH_RGMII_EN (1 <<  3) /* 08: ETH RGMII Enable */
#define CH32V_EXTEND_EXTEND_CTR_PLL_HSI_PRE (1 <<  4) /* 10: Whether HSI is divided */
#define CH32V_EXTEND_EXTEND_CTR_LOCKUP_EN (1 <<  6) /* 40: LOCKUP_Eable */
#define CH32V_EXTEND_EXTEND_CTR_LOCKUP_RSTF (1 <<  7) /* 80: LOCKUP RESET */
#define CH32V_EXTEND_EXTEND_CTR_ULLDO_TRIM (2 <<  8) /* 100: ULLDO_TRIM */
#define CH32V_EXTEND_EXTEND_CTR_ULLDO_TRIM_MASK (0x03)
#define CH32V_EXTEND_EXTEND_CTR_LDO_TRIM (2 << 10) /* 400: LDO_TRIM */
#define CH32V_EXTEND_EXTEND_CTR_LDO_TRIM_MASK (0x03)
#define CH32V_EXTEND_EXTEND_CTR_HSE_KEEP_LP (1 << 12) /* 1000: HSE_KEEP_LP */

/* OPA - OPA configuration */
#define CH32V_OPA_BASE            0x40023804
#define CH32V_OPA_CR_OFFSET       0x0000
#define CH32V_OPA_CR              (CH32V_OPA_BASE + CH32V_OPA_CR_OFFSET)
#define CH32V_OPA_CR_EN1          (1 <<  0) /* 01: OPA Enable1 */
#define CH32V_OPA_CR_MODE1        (1 <<  1) /* 02: OPA MODE1 */
#define CH32V_OPA_CR_NSEL1        (1 <<  2) /* 04: OPA NSEL1 */
#define CH32V_OPA_CR_PSEL1        (1 <<  3) /* 08: OPA PSEL1 */
#define CH32V_OPA_CR_EN2          (1 <<  4) /* 10: OPA Enable2 */
#define CH32V_OPA_CR_MODE2        (1 <<  5) /* 20: OPA MODE2 */
#define CH32V_OPA_CR_NSEL2        (1 <<  6) /* 40: OPA NSEL2 */
#define CH32V_OPA_CR_PSEL2        (1 <<  7) /* 80: OPA PSEL2 */
#define CH32V_OPA_CR_EN3          (1 <<  8) /* 100: OPA Eable3 */
#define CH32V_OPA_CR_MODE3        (1 <<  9) /* 200: OPA MODE3 */
#define CH32V_OPA_CR_NSEL3        (1 << 10) /* 400: OPA NSEL3 */
#define CH32V_OPA_CR_PSEL3        (1 << 11) /* 800: OPA PSEL3 */
#define CH32V_OPA_CR_EN4          (1 << 12) /* 1000: OPA Enable4 */
#define CH32V_OPA_CR_MODE4        (1 << 13) /* 2000: OPA MODE4 */
#define CH32V_OPA_CR_NSEL4        (1 << 14) /* 4000: OPA NSEL4 */
#define CH32V_OPA_CR_PSEL4        (1 << 15) /* 8000: OPA PSEL4 */

/* GPIOA - General purpose I/O */
#define CH32V_GPIOA_BASE          0x40010800
#define CH32V_GPIOA_CFGLR_OFFSET  0x0000
#define CH32V_GPIOA_CFGLR         (CH32V_GPIOA_BASE + CH32V_GPIOA_CFGLR_OFFSET)
#define CH32V_GPIOA_CFGLR_MODE0   (2 <<  0) /* 01: Port n.0 mode bits */
#define CH32V_GPIOA_CFGLR_MODE0_MASK   (0x03)
#define CH32V_GPIOA_CFGLR_CNF0    (2 <<  2) /* 04: Port n.0 configuration bits */
#define CH32V_GPIOA_CFGLR_CNF0_MASK    (0x03)
#define CH32V_GPIOA_CFGLR_MODE1   (2 <<  4) /* 10: Port n.1 mode bits */
#define CH32V_GPIOA_CFGLR_MODE1_MASK   (0x03)
#define CH32V_GPIOA_CFGLR_CNF1    (2 <<  6) /* 40: Port n.1 configuration bits */
#define CH32V_GPIOA_CFGLR_CNF1_MASK    (0x03)
#define CH32V_GPIOA_CFGLR_MODE2   (2 <<  8) /* 100: Port n.2 mode bits */
#define CH32V_GPIOA_CFGLR_MODE2_MASK   (0x03)
#define CH32V_GPIOA_CFGLR_CNF2    (2 << 10) /* 400: Port n.2 configuration bits */
#define CH32V_GPIOA_CFGLR_CNF2_MASK    (0x03)
#define CH32V_GPIOA_CFGLR_MODE3   (2 << 12) /* 1000: Port n.3 mode bits */
#define CH32V_GPIOA_CFGLR_MODE3_MASK   (0x03)
#define CH32V_GPIOA_CFGLR_CNF3    (2 << 14) /* 4000: Port n.3 configuration bits */
#define CH32V_GPIOA_CFGLR_CNF3_MASK    (0x03)
#define CH32V_GPIOA_CFGLR_MODE4   (2 << 16) /* 10000: Port n.4 mode bits */
#define CH32V_GPIOA_CFGLR_MODE4_MASK   (0x03)
#define CH32V_GPIOA_CFGLR_CNF4    (2 << 18) /* 40000: Port n.4 configuration bits */
#define CH32V_GPIOA_CFGLR_CNF4_MASK    (0x03)
#define CH32V_GPIOA_CFGLR_MODE5   (2 << 20) /* 100000: Port n.5 mode bits */
#define CH32V_GPIOA_CFGLR_MODE5_MASK   (0x03)
#define CH32V_GPIOA_CFGLR_CNF5    (2 << 22) /* 400000: Port n.5 configuration bits */
#define CH32V_GPIOA_CFGLR_CNF5_MASK    (0x03)
#define CH32V_GPIOA_CFGLR_MODE6   (2 << 24) /* 1000000: Port n.6 mode bits */
#define CH32V_GPIOA_CFGLR_MODE6_MASK   (0x03)
#define CH32V_GPIOA_CFGLR_CNF6    (2 << 26) /* 4000000: Port n.6 configuration bits */
#define CH32V_GPIOA_CFGLR_CNF6_MASK    (0x03)
#define CH32V_GPIOA_CFGLR_MODE7   (2 << 28) /* 10000000: Port n.7 mode bits */
#define CH32V_GPIOA_CFGLR_MODE7_MASK   (0x03)
#define CH32V_GPIOA_CFGLR_CNF7    (2 << 30) /* 40000000: Port n.7 configuration bits */
#define CH32V_GPIOA_CFGLR_CNF7_MASK    (0x03)
#define CH32V_GPIOA_CFGHR_OFFSET  0x0004
#define CH32V_GPIOA_CFGHR         (CH32V_GPIOA_BASE + CH32V_GPIOA_CFGHR_OFFSET)
#define CH32V_GPIOA_CFGHR_MODE8   (2 <<  0) /* 01: Port n.8 mode bits */
#define CH32V_GPIOA_CFGHR_MODE8_MASK   (0x03)
#define CH32V_GPIOA_CFGHR_CNF8    (2 <<  2) /* 04: Port n.8 configuration bits */
#define CH32V_GPIOA_CFGHR_CNF8_MASK    (0x03)
#define CH32V_GPIOA_CFGHR_MODE9   (2 <<  4) /* 10: Port n.9 mode bits */
#define CH32V_GPIOA_CFGHR_MODE9_MASK   (0x03)
#define CH32V_GPIOA_CFGHR_CNF9    (2 <<  6) /* 40: Port n.9 configuration bits */
#define CH32V_GPIOA_CFGHR_CNF9_MASK    (0x03)
#define CH32V_GPIOA_CFGHR_MODE10  (2 <<  8) /* 100: Port n.10 mode bits */
#define CH32V_GPIOA_CFGHR_MODE10_MASK  (0x03)
#define CH32V_GPIOA_CFGHR_CNF10   (2 << 10) /* 400: Port n.10 configuration bits */
#define CH32V_GPIOA_CFGHR_CNF10_MASK   (0x03)
#define CH32V_GPIOA_CFGHR_MODE11  (2 << 12) /* 1000: Port n.11 mode bits */
#define CH32V_GPIOA_CFGHR_MODE11_MASK  (0x03)
#define CH32V_GPIOA_CFGHR_CNF11   (2 << 14) /* 4000: Port n.11 configuration bits */
#define CH32V_GPIOA_CFGHR_CNF11_MASK   (0x03)
#define CH32V_GPIOA_CFGHR_MODE12  (2 << 16) /* 10000: Port n.12 mode bits */
#define CH32V_GPIOA_CFGHR_MODE12_MASK  (0x03)
#define CH32V_GPIOA_CFGHR_CNF12   (2 << 18) /* 40000: Port n.12 configuration bits */
#define CH32V_GPIOA_CFGHR_CNF12_MASK   (0x03)
#define CH32V_GPIOA_CFGHR_MODE13  (2 << 20) /* 100000: Port n.13 mode bits */
#define CH32V_GPIOA_CFGHR_MODE13_MASK  (0x03)
#define CH32V_GPIOA_CFGHR_CNF13   (2 << 22) /* 400000: Port n.13 configuration bits */
#define CH32V_GPIOA_CFGHR_CNF13_MASK   (0x03)
#define CH32V_GPIOA_CFGHR_MODE14  (2 << 24) /* 1000000: Port n.14 mode bits */
#define CH32V_GPIOA_CFGHR_MODE14_MASK  (0x03)
#define CH32V_GPIOA_CFGHR_CNF14   (2 << 26) /* 4000000: Port n.14 configuration bits */
#define CH32V_GPIOA_CFGHR_CNF14_MASK   (0x03)
#define CH32V_GPIOA_CFGHR_MODE15  (2 << 28) /* 10000000: Port n.15 mode bits */
#define CH32V_GPIOA_CFGHR_MODE15_MASK  (0x03)
#define CH32V_GPIOA_CFGHR_CNF15   (2 << 30) /* 40000000: Port n.15 configuration bits */
#define CH32V_GPIOA_CFGHR_CNF15_MASK   (0x03)
#define CH32V_GPIOA_INDR_OFFSET   0x0008
#define CH32V_GPIOA_INDR          (CH32V_GPIOA_BASE + CH32V_GPIOA_INDR_OFFSET)
#define CH32V_GPIOA_INDR_IDR0     (1 <<  0) /* 01: Port input data */
#define CH32V_GPIOA_INDR_IDR1     (1 <<  1) /* 02: Port input data */
#define CH32V_GPIOA_INDR_IDR2     (1 <<  2) /* 04: Port input data */
#define CH32V_GPIOA_INDR_IDR3     (1 <<  3) /* 08: Port input data */
#define CH32V_GPIOA_INDR_IDR4     (1 <<  4) /* 10: Port input data */
#define CH32V_GPIOA_INDR_IDR5     (1 <<  5) /* 20: Port input data */
#define CH32V_GPIOA_INDR_IDR6     (1 <<  6) /* 40: Port input data */
#define CH32V_GPIOA_INDR_IDR7     (1 <<  7) /* 80: Port input data */
#define CH32V_GPIOA_INDR_IDR8     (1 <<  8) /* 100: Port input data */
#define CH32V_GPIOA_INDR_IDR9     (1 <<  9) /* 200: Port input data */
#define CH32V_GPIOA_INDR_IDR10    (1 << 10) /* 400: Port input data */
#define CH32V_GPIOA_INDR_IDR11    (1 << 11) /* 800: Port input data */
#define CH32V_GPIOA_INDR_IDR12    (1 << 12) /* 1000: Port input data */
#define CH32V_GPIOA_INDR_IDR13    (1 << 13) /* 2000: Port input data */
#define CH32V_GPIOA_INDR_IDR14    (1 << 14) /* 4000: Port input data */
#define CH32V_GPIOA_INDR_IDR15    (1 << 15) /* 8000: Port input data */
#define CH32V_GPIOA_OUTDR_OFFSET  0x000c
#define CH32V_GPIOA_OUTDR         (CH32V_GPIOA_BASE + CH32V_GPIOA_OUTDR_OFFSET)
#define CH32V_GPIOA_OUTDR_ODR0    (1 <<  0) /* 01: Port output data */
#define CH32V_GPIOA_OUTDR_ODR1    (1 <<  1) /* 02: Port output data */
#define CH32V_GPIOA_OUTDR_ODR2    (1 <<  2) /* 04: Port output data */
#define CH32V_GPIOA_OUTDR_ODR3    (1 <<  3) /* 08: Port output data */
#define CH32V_GPIOA_OUTDR_ODR4    (1 <<  4) /* 10: Port output data */
#define CH32V_GPIOA_OUTDR_ODR5    (1 <<  5) /* 20: Port output data */
#define CH32V_GPIOA_OUTDR_ODR6    (1 <<  6) /* 40: Port output data */
#define CH32V_GPIOA_OUTDR_ODR7    (1 <<  7) /* 80: Port output data */
#define CH32V_GPIOA_OUTDR_ODR8    (1 <<  8) /* 100: Port output data */
#define CH32V_GPIOA_OUTDR_ODR9    (1 <<  9) /* 200: Port output data */
#define CH32V_GPIOA_OUTDR_ODR10   (1 << 10) /* 400: Port output data */
#define CH32V_GPIOA_OUTDR_ODR11   (1 << 11) /* 800: Port output data */
#define CH32V_GPIOA_OUTDR_ODR12   (1 << 12) /* 1000: Port output data */
#define CH32V_GPIOA_OUTDR_ODR13   (1 << 13) /* 2000: Port output data */
#define CH32V_GPIOA_OUTDR_ODR14   (1 << 14) /* 4000: Port output data */
#define CH32V_GPIOA_OUTDR_ODR15   (1 << 15) /* 8000: Port output data */
#define CH32V_GPIOA_BSHR_OFFSET   0x0010
#define CH32V_GPIOA_BSHR          (CH32V_GPIOA_BASE + CH32V_GPIOA_BSHR_OFFSET)
#define CH32V_GPIOA_BSHR_BS0      (1 <<  0) /* 01: Set bit 0 */
#define CH32V_GPIOA_BSHR_BS1      (1 <<  1) /* 02: Set bit 1 */
#define CH32V_GPIOA_BSHR_BS2      (1 <<  2) /* 04: Set bit 1 */
#define CH32V_GPIOA_BSHR_BS3      (1 <<  3) /* 08: Set bit 3 */
#define CH32V_GPIOA_BSHR_BS4      (1 <<  4) /* 10: Set bit 4 */
#define CH32V_GPIOA_BSHR_BS5      (1 <<  5) /* 20: Set bit 5 */
#define CH32V_GPIOA_BSHR_BS6      (1 <<  6) /* 40: Set bit 6 */
#define CH32V_GPIOA_BSHR_BS7      (1 <<  7) /* 80: Set bit 7 */
#define CH32V_GPIOA_BSHR_BS8      (1 <<  8) /* 100: Set bit 8 */
#define CH32V_GPIOA_BSHR_BS9      (1 <<  9) /* 200: Set bit 9 */
#define CH32V_GPIOA_BSHR_BS10     (1 << 10) /* 400: Set bit 10 */
#define CH32V_GPIOA_BSHR_BS11     (1 << 11) /* 800: Set bit 11 */
#define CH32V_GPIOA_BSHR_BS12     (1 << 12) /* 1000: Set bit 12 */
#define CH32V_GPIOA_BSHR_BS13     (1 << 13) /* 2000: Set bit 13 */
#define CH32V_GPIOA_BSHR_BS14     (1 << 14) /* 4000: Set bit 14 */
#define CH32V_GPIOA_BSHR_BS15     (1 << 15) /* 8000: Set bit 15 */
#define CH32V_GPIOA_BSHR_BR0      (1 << 16) /* 10000: Reset bit 0 */
#define CH32V_GPIOA_BSHR_BR1      (1 << 17) /* 20000: Reset bit 1 */
#define CH32V_GPIOA_BSHR_BR2      (1 << 18) /* 40000: Reset bit 2 */
#define CH32V_GPIOA_BSHR_BR3      (1 << 19) /* 80000: Reset bit 3 */
#define CH32V_GPIOA_BSHR_BR4      (1 << 20) /* 100000: Reset bit 4 */
#define CH32V_GPIOA_BSHR_BR5      (1 << 21) /* 200000: Reset bit 5 */
#define CH32V_GPIOA_BSHR_BR6      (1 << 22) /* 400000: Reset bit 6 */
#define CH32V_GPIOA_BSHR_BR7      (1 << 23) /* 800000: Reset bit 7 */
#define CH32V_GPIOA_BSHR_BR8      (1 << 24) /* 1000000: Reset bit 8 */
#define CH32V_GPIOA_BSHR_BR9      (1 << 25) /* 2000000: Reset bit 9 */
#define CH32V_GPIOA_BSHR_BR10     (1 << 26) /* 4000000: Reset bit 10 */
#define CH32V_GPIOA_BSHR_BR11     (1 << 27) /* 8000000: Reset bit 11 */
#define CH32V_GPIOA_BSHR_BR12     (1 << 28) /* 10000000: Reset bit 12 */
#define CH32V_GPIOA_BSHR_BR13     (1 << 29) /* 20000000: Reset bit 13 */
#define CH32V_GPIOA_BSHR_BR14     (1 << 30) /* 40000000: Reset bit 14 */
#define CH32V_GPIOA_BSHR_BR15     (1 << 31) /* 80000000: Reset bit 15 */
#define CH32V_GPIOA_BCR_OFFSET    0x0014
#define CH32V_GPIOA_BCR           (CH32V_GPIOA_BASE + CH32V_GPIOA_BCR_OFFSET)
#define CH32V_GPIOA_BCR_BR0       (1 <<  0) /* 01: Reset bit 0 */
#define CH32V_GPIOA_BCR_BR1       (1 <<  1) /* 02: Reset bit 1 */
#define CH32V_GPIOA_BCR_BR2       (1 <<  2) /* 04: Reset bit 1 */
#define CH32V_GPIOA_BCR_BR3       (1 <<  3) /* 08: Reset bit 3 */
#define CH32V_GPIOA_BCR_BR4       (1 <<  4) /* 10: Reset bit 4 */
#define CH32V_GPIOA_BCR_BR5       (1 <<  5) /* 20: Reset bit 5 */
#define CH32V_GPIOA_BCR_BR6       (1 <<  6) /* 40: Reset bit 6 */
#define CH32V_GPIOA_BCR_BR7       (1 <<  7) /* 80: Reset bit 7 */
#define CH32V_GPIOA_BCR_BR8       (1 <<  8) /* 100: Reset bit 8 */
#define CH32V_GPIOA_BCR_BR9       (1 <<  9) /* 200: Reset bit 9 */
#define CH32V_GPIOA_BCR_BR10      (1 << 10) /* 400: Reset bit 10 */
#define CH32V_GPIOA_BCR_BR11      (1 << 11) /* 800: Reset bit 11 */
#define CH32V_GPIOA_BCR_BR12      (1 << 12) /* 1000: Reset bit 12 */
#define CH32V_GPIOA_BCR_BR13      (1 << 13) /* 2000: Reset bit 13 */
#define CH32V_GPIOA_BCR_BR14      (1 << 14) /* 4000: Reset bit 14 */
#define CH32V_GPIOA_BCR_BR15      (1 << 15) /* 8000: Reset bit 15 */
#define CH32V_GPIOA_LCKR_OFFSET   0x0018
#define CH32V_GPIOA_LCKR          (CH32V_GPIOA_BASE + CH32V_GPIOA_LCKR_OFFSET)
#define CH32V_GPIOA_LCKR_LCK0     (1 <<  0) /* 01: Port A Lock bit 0 */
#define CH32V_GPIOA_LCKR_LCK1     (1 <<  1) /* 02: Port A Lock bit 1 */
#define CH32V_GPIOA_LCKR_LCK2     (1 <<  2) /* 04: Port A Lock bit 2 */
#define CH32V_GPIOA_LCKR_LCK3     (1 <<  3) /* 08: Port A Lock bit 3 */
#define CH32V_GPIOA_LCKR_LCK4     (1 <<  4) /* 10: Port A Lock bit 4 */
#define CH32V_GPIOA_LCKR_LCK5     (1 <<  5) /* 20: Port A Lock bit 5 */
#define CH32V_GPIOA_LCKR_LCK6     (1 <<  6) /* 40: Port A Lock bit 6 */
#define CH32V_GPIOA_LCKR_LCK7     (1 <<  7) /* 80: Port A Lock bit 7 */
#define CH32V_GPIOA_LCKR_LCK8     (1 <<  8) /* 100: Port A Lock bit 8 */
#define CH32V_GPIOA_LCKR_LCK9     (1 <<  9) /* 200: Port A Lock bit 9 */
#define CH32V_GPIOA_LCKR_LCK10    (1 << 10) /* 400: Port A Lock bit 10 */
#define CH32V_GPIOA_LCKR_LCK11    (1 << 11) /* 800: Port A Lock bit 11 */
#define CH32V_GPIOA_LCKR_LCK12    (1 << 12) /* 1000: Port A Lock bit 12 */
#define CH32V_GPIOA_LCKR_LCK13    (1 << 13) /* 2000: Port A Lock bit 13 */
#define CH32V_GPIOA_LCKR_LCK14    (1 << 14) /* 4000: Port A Lock bit 14 */
#define CH32V_GPIOA_LCKR_LCK15    (1 << 15) /* 8000: Port A Lock bit 15 */
#define CH32V_GPIOA_LCKR_LCKK     (1 << 16) /* 10000: Lock key */

/* No registers defined for peripheral GPIOB. Using those of GPIOA. */
#define CH32V_GPIOB_BASE          0x40010c00
#define CH32V_GPIOB_CFGLR_OFFSET  CH32V_GPIOA_CFGLR_OFFSET
#define CH32V_GPIOB_CFGLR         CH32V_GPIOA_CFGLR
#define CH32V_GPIOB_CFGLR_MODE0   CH32V_GPIOA_CFGLR_MODE0
#define CH32V_GPIOB_CFGLR_MODE0_MASK CH32V_GPIOA_CFGLR_MODE0_MASK
#define CH32V_GPIOB_CFGLR_CNF0    CH32V_GPIOA_CFGLR_CNF0
#define CH32V_GPIOB_CFGLR_CNF0_MASK CH32V_GPIOA_CFGLR_CNF0_MASK
#define CH32V_GPIOB_CFGLR_MODE1   CH32V_GPIOA_CFGLR_MODE1
#define CH32V_GPIOB_CFGLR_MODE1_MASK CH32V_GPIOA_CFGLR_MODE1_MASK
#define CH32V_GPIOB_CFGLR_CNF1    CH32V_GPIOA_CFGLR_CNF1
#define CH32V_GPIOB_CFGLR_CNF1_MASK CH32V_GPIOA_CFGLR_CNF1_MASK
#define CH32V_GPIOB_CFGLR_MODE2   CH32V_GPIOA_CFGLR_MODE2
#define CH32V_GPIOB_CFGLR_MODE2_MASK CH32V_GPIOA_CFGLR_MODE2_MASK
#define CH32V_GPIOB_CFGLR_CNF2    CH32V_GPIOA_CFGLR_CNF2
#define CH32V_GPIOB_CFGLR_CNF2_MASK CH32V_GPIOA_CFGLR_CNF2_MASK
#define CH32V_GPIOB_CFGLR_MODE3   CH32V_GPIOA_CFGLR_MODE3
#define CH32V_GPIOB_CFGLR_MODE3_MASK CH32V_GPIOA_CFGLR_MODE3_MASK
#define CH32V_GPIOB_CFGLR_CNF3    CH32V_GPIOA_CFGLR_CNF3
#define CH32V_GPIOB_CFGLR_CNF3_MASK CH32V_GPIOA_CFGLR_CNF3_MASK
#define CH32V_GPIOB_CFGLR_MODE4   CH32V_GPIOA_CFGLR_MODE4
#define CH32V_GPIOB_CFGLR_MODE4_MASK CH32V_GPIOA_CFGLR_MODE4_MASK
#define CH32V_GPIOB_CFGLR_CNF4    CH32V_GPIOA_CFGLR_CNF4
#define CH32V_GPIOB_CFGLR_CNF4_MASK CH32V_GPIOA_CFGLR_CNF4_MASK
#define CH32V_GPIOB_CFGLR_MODE5   CH32V_GPIOA_CFGLR_MODE5
#define CH32V_GPIOB_CFGLR_MODE5_MASK CH32V_GPIOA_CFGLR_MODE5_MASK
#define CH32V_GPIOB_CFGLR_CNF5    CH32V_GPIOA_CFGLR_CNF5
#define CH32V_GPIOB_CFGLR_CNF5_MASK CH32V_GPIOA_CFGLR_CNF5_MASK
#define CH32V_GPIOB_CFGLR_MODE6   CH32V_GPIOA_CFGLR_MODE6
#define CH32V_GPIOB_CFGLR_MODE6_MASK CH32V_GPIOA_CFGLR_MODE6_MASK
#define CH32V_GPIOB_CFGLR_CNF6    CH32V_GPIOA_CFGLR_CNF6
#define CH32V_GPIOB_CFGLR_CNF6_MASK CH32V_GPIOA_CFGLR_CNF6_MASK
#define CH32V_GPIOB_CFGLR_MODE7   CH32V_GPIOA_CFGLR_MODE7
#define CH32V_GPIOB_CFGLR_MODE7_MASK CH32V_GPIOA_CFGLR_MODE7_MASK
#define CH32V_GPIOB_CFGLR_CNF7    CH32V_GPIOA_CFGLR_CNF7
#define CH32V_GPIOB_CFGLR_CNF7_MASK CH32V_GPIOA_CFGLR_CNF7_MASK
#define CH32V_GPIOB_CFGHR_OFFSET  CH32V_GPIOA_CFGHR_OFFSET
#define CH32V_GPIOB_CFGHR         CH32V_GPIOA_CFGHR
#define CH32V_GPIOB_CFGHR_MODE8   CH32V_GPIOA_CFGHR_MODE8
#define CH32V_GPIOB_CFGHR_MODE8_MASK CH32V_GPIOA_CFGHR_MODE8_MASK
#define CH32V_GPIOB_CFGHR_CNF8    CH32V_GPIOA_CFGHR_CNF8
#define CH32V_GPIOB_CFGHR_CNF8_MASK CH32V_GPIOA_CFGHR_CNF8_MASK
#define CH32V_GPIOB_CFGHR_MODE9   CH32V_GPIOA_CFGHR_MODE9
#define CH32V_GPIOB_CFGHR_MODE9_MASK CH32V_GPIOA_CFGHR_MODE9_MASK
#define CH32V_GPIOB_CFGHR_CNF9    CH32V_GPIOA_CFGHR_CNF9
#define CH32V_GPIOB_CFGHR_CNF9_MASK CH32V_GPIOA_CFGHR_CNF9_MASK
#define CH32V_GPIOB_CFGHR_MODE10  CH32V_GPIOA_CFGHR_MODE10
#define CH32V_GPIOB_CFGHR_MODE10_MASK CH32V_GPIOA_CFGHR_MODE10_MASK
#define CH32V_GPIOB_CFGHR_CNF10   CH32V_GPIOA_CFGHR_CNF10
#define CH32V_GPIOB_CFGHR_CNF10_MASK CH32V_GPIOA_CFGHR_CNF10_MASK
#define CH32V_GPIOB_CFGHR_MODE11  CH32V_GPIOA_CFGHR_MODE11
#define CH32V_GPIOB_CFGHR_MODE11_MASK CH32V_GPIOA_CFGHR_MODE11_MASK
#define CH32V_GPIOB_CFGHR_CNF11   CH32V_GPIOA_CFGHR_CNF11
#define CH32V_GPIOB_CFGHR_CNF11_MASK CH32V_GPIOA_CFGHR_CNF11_MASK
#define CH32V_GPIOB_CFGHR_MODE12  CH32V_GPIOA_CFGHR_MODE12
#define CH32V_GPIOB_CFGHR_MODE12_MASK CH32V_GPIOA_CFGHR_MODE12_MASK
#define CH32V_GPIOB_CFGHR_CNF12   CH32V_GPIOA_CFGHR_CNF12
#define CH32V_GPIOB_CFGHR_CNF12_MASK CH32V_GPIOA_CFGHR_CNF12_MASK
#define CH32V_GPIOB_CFGHR_MODE13  CH32V_GPIOA_CFGHR_MODE13
#define CH32V_GPIOB_CFGHR_MODE13_MASK CH32V_GPIOA_CFGHR_MODE13_MASK
#define CH32V_GPIOB_CFGHR_CNF13   CH32V_GPIOA_CFGHR_CNF13
#define CH32V_GPIOB_CFGHR_CNF13_MASK CH32V_GPIOA_CFGHR_CNF13_MASK
#define CH32V_GPIOB_CFGHR_MODE14  CH32V_GPIOA_CFGHR_MODE14
#define CH32V_GPIOB_CFGHR_MODE14_MASK CH32V_GPIOA_CFGHR_MODE14_MASK
#define CH32V_GPIOB_CFGHR_CNF14   CH32V_GPIOA_CFGHR_CNF14
#define CH32V_GPIOB_CFGHR_CNF14_MASK CH32V_GPIOA_CFGHR_CNF14_MASK
#define CH32V_GPIOB_CFGHR_MODE15  CH32V_GPIOA_CFGHR_MODE15
#define CH32V_GPIOB_CFGHR_MODE15_MASK CH32V_GPIOA_CFGHR_MODE15_MASK
#define CH32V_GPIOB_CFGHR_CNF15   CH32V_GPIOA_CFGHR_CNF15
#define CH32V_GPIOB_CFGHR_CNF15_MASK CH32V_GPIOA_CFGHR_CNF15_MASK
#define CH32V_GPIOB_INDR_OFFSET   CH32V_GPIOA_INDR_OFFSET
#define CH32V_GPIOB_INDR          CH32V_GPIOA_INDR
#define CH32V_GPIOB_INDR_IDR0     CH32V_GPIOA_INDR_IDR0
#define CH32V_GPIOB_INDR_IDR1     CH32V_GPIOA_INDR_IDR1
#define CH32V_GPIOB_INDR_IDR2     CH32V_GPIOA_INDR_IDR2
#define CH32V_GPIOB_INDR_IDR3     CH32V_GPIOA_INDR_IDR3
#define CH32V_GPIOB_INDR_IDR4     CH32V_GPIOA_INDR_IDR4
#define CH32V_GPIOB_INDR_IDR5     CH32V_GPIOA_INDR_IDR5
#define CH32V_GPIOB_INDR_IDR6     CH32V_GPIOA_INDR_IDR6
#define CH32V_GPIOB_INDR_IDR7     CH32V_GPIOA_INDR_IDR7
#define CH32V_GPIOB_INDR_IDR8     CH32V_GPIOA_INDR_IDR8
#define CH32V_GPIOB_INDR_IDR9     CH32V_GPIOA_INDR_IDR9
#define CH32V_GPIOB_INDR_IDR10    CH32V_GPIOA_INDR_IDR10
#define CH32V_GPIOB_INDR_IDR11    CH32V_GPIOA_INDR_IDR11
#define CH32V_GPIOB_INDR_IDR12    CH32V_GPIOA_INDR_IDR12
#define CH32V_GPIOB_INDR_IDR13    CH32V_GPIOA_INDR_IDR13
#define CH32V_GPIOB_INDR_IDR14    CH32V_GPIOA_INDR_IDR14
#define CH32V_GPIOB_INDR_IDR15    CH32V_GPIOA_INDR_IDR15
#define CH32V_GPIOB_OUTDR_OFFSET  CH32V_GPIOA_OUTDR_OFFSET
#define CH32V_GPIOB_OUTDR         CH32V_GPIOA_OUTDR
#define CH32V_GPIOB_OUTDR_ODR0    CH32V_GPIOA_OUTDR_ODR0
#define CH32V_GPIOB_OUTDR_ODR1    CH32V_GPIOA_OUTDR_ODR1
#define CH32V_GPIOB_OUTDR_ODR2    CH32V_GPIOA_OUTDR_ODR2
#define CH32V_GPIOB_OUTDR_ODR3    CH32V_GPIOA_OUTDR_ODR3
#define CH32V_GPIOB_OUTDR_ODR4    CH32V_GPIOA_OUTDR_ODR4
#define CH32V_GPIOB_OUTDR_ODR5    CH32V_GPIOA_OUTDR_ODR5
#define CH32V_GPIOB_OUTDR_ODR6    CH32V_GPIOA_OUTDR_ODR6
#define CH32V_GPIOB_OUTDR_ODR7    CH32V_GPIOA_OUTDR_ODR7
#define CH32V_GPIOB_OUTDR_ODR8    CH32V_GPIOA_OUTDR_ODR8
#define CH32V_GPIOB_OUTDR_ODR9    CH32V_GPIOA_OUTDR_ODR9
#define CH32V_GPIOB_OUTDR_ODR10   CH32V_GPIOA_OUTDR_ODR10
#define CH32V_GPIOB_OUTDR_ODR11   CH32V_GPIOA_OUTDR_ODR11
#define CH32V_GPIOB_OUTDR_ODR12   CH32V_GPIOA_OUTDR_ODR12
#define CH32V_GPIOB_OUTDR_ODR13   CH32V_GPIOA_OUTDR_ODR13
#define CH32V_GPIOB_OUTDR_ODR14   CH32V_GPIOA_OUTDR_ODR14
#define CH32V_GPIOB_OUTDR_ODR15   CH32V_GPIOA_OUTDR_ODR15
#define CH32V_GPIOB_BSHR_OFFSET   CH32V_GPIOA_BSHR_OFFSET
#define CH32V_GPIOB_BSHR          CH32V_GPIOA_BSHR
#define CH32V_GPIOB_BSHR_BS0      CH32V_GPIOA_BSHR_BS0
#define CH32V_GPIOB_BSHR_BS1      CH32V_GPIOA_BSHR_BS1
#define CH32V_GPIOB_BSHR_BS2      CH32V_GPIOA_BSHR_BS2
#define CH32V_GPIOB_BSHR_BS3      CH32V_GPIOA_BSHR_BS3
#define CH32V_GPIOB_BSHR_BS4      CH32V_GPIOA_BSHR_BS4
#define CH32V_GPIOB_BSHR_BS5      CH32V_GPIOA_BSHR_BS5
#define CH32V_GPIOB_BSHR_BS6      CH32V_GPIOA_BSHR_BS6
#define CH32V_GPIOB_BSHR_BS7      CH32V_GPIOA_BSHR_BS7
#define CH32V_GPIOB_BSHR_BS8      CH32V_GPIOA_BSHR_BS8
#define CH32V_GPIOB_BSHR_BS9      CH32V_GPIOA_BSHR_BS9
#define CH32V_GPIOB_BSHR_BS10     CH32V_GPIOA_BSHR_BS10
#define CH32V_GPIOB_BSHR_BS11     CH32V_GPIOA_BSHR_BS11
#define CH32V_GPIOB_BSHR_BS12     CH32V_GPIOA_BSHR_BS12
#define CH32V_GPIOB_BSHR_BS13     CH32V_GPIOA_BSHR_BS13
#define CH32V_GPIOB_BSHR_BS14     CH32V_GPIOA_BSHR_BS14
#define CH32V_GPIOB_BSHR_BS15     CH32V_GPIOA_BSHR_BS15
#define CH32V_GPIOB_BSHR_BR0      CH32V_GPIOA_BSHR_BR0
#define CH32V_GPIOB_BSHR_BR1      CH32V_GPIOA_BSHR_BR1
#define CH32V_GPIOB_BSHR_BR2      CH32V_GPIOA_BSHR_BR2
#define CH32V_GPIOB_BSHR_BR3      CH32V_GPIOA_BSHR_BR3
#define CH32V_GPIOB_BSHR_BR4      CH32V_GPIOA_BSHR_BR4
#define CH32V_GPIOB_BSHR_BR5      CH32V_GPIOA_BSHR_BR5
#define CH32V_GPIOB_BSHR_BR6      CH32V_GPIOA_BSHR_BR6
#define CH32V_GPIOB_BSHR_BR7      CH32V_GPIOA_BSHR_BR7
#define CH32V_GPIOB_BSHR_BR8      CH32V_GPIOA_BSHR_BR8
#define CH32V_GPIOB_BSHR_BR9      CH32V_GPIOA_BSHR_BR9
#define CH32V_GPIOB_BSHR_BR10     CH32V_GPIOA_BSHR_BR10
#define CH32V_GPIOB_BSHR_BR11     CH32V_GPIOA_BSHR_BR11
#define CH32V_GPIOB_BSHR_BR12     CH32V_GPIOA_BSHR_BR12
#define CH32V_GPIOB_BSHR_BR13     CH32V_GPIOA_BSHR_BR13
#define CH32V_GPIOB_BSHR_BR14     CH32V_GPIOA_BSHR_BR14
#define CH32V_GPIOB_BSHR_BR15     CH32V_GPIOA_BSHR_BR15
#define CH32V_GPIOB_BCR_OFFSET    CH32V_GPIOA_BCR_OFFSET
#define CH32V_GPIOB_BCR           CH32V_GPIOA_BCR
#define CH32V_GPIOB_BCR_BR0       CH32V_GPIOA_BCR_BR0
#define CH32V_GPIOB_BCR_BR1       CH32V_GPIOA_BCR_BR1
#define CH32V_GPIOB_BCR_BR2       CH32V_GPIOA_BCR_BR2
#define CH32V_GPIOB_BCR_BR3       CH32V_GPIOA_BCR_BR3
#define CH32V_GPIOB_BCR_BR4       CH32V_GPIOA_BCR_BR4
#define CH32V_GPIOB_BCR_BR5       CH32V_GPIOA_BCR_BR5
#define CH32V_GPIOB_BCR_BR6       CH32V_GPIOA_BCR_BR6
#define CH32V_GPIOB_BCR_BR7       CH32V_GPIOA_BCR_BR7
#define CH32V_GPIOB_BCR_BR8       CH32V_GPIOA_BCR_BR8
#define CH32V_GPIOB_BCR_BR9       CH32V_GPIOA_BCR_BR9
#define CH32V_GPIOB_BCR_BR10      CH32V_GPIOA_BCR_BR10
#define CH32V_GPIOB_BCR_BR11      CH32V_GPIOA_BCR_BR11
#define CH32V_GPIOB_BCR_BR12      CH32V_GPIOA_BCR_BR12
#define CH32V_GPIOB_BCR_BR13      CH32V_GPIOA_BCR_BR13
#define CH32V_GPIOB_BCR_BR14      CH32V_GPIOA_BCR_BR14
#define CH32V_GPIOB_BCR_BR15      CH32V_GPIOA_BCR_BR15
#define CH32V_GPIOB_LCKR_OFFSET   CH32V_GPIOA_LCKR_OFFSET
#define CH32V_GPIOB_LCKR          CH32V_GPIOA_LCKR
#define CH32V_GPIOB_LCKR_LCK0     CH32V_GPIOA_LCKR_LCK0
#define CH32V_GPIOB_LCKR_LCK1     CH32V_GPIOA_LCKR_LCK1
#define CH32V_GPIOB_LCKR_LCK2     CH32V_GPIOA_LCKR_LCK2
#define CH32V_GPIOB_LCKR_LCK3     CH32V_GPIOA_LCKR_LCK3
#define CH32V_GPIOB_LCKR_LCK4     CH32V_GPIOA_LCKR_LCK4
#define CH32V_GPIOB_LCKR_LCK5     CH32V_GPIOA_LCKR_LCK5
#define CH32V_GPIOB_LCKR_LCK6     CH32V_GPIOA_LCKR_LCK6
#define CH32V_GPIOB_LCKR_LCK7     CH32V_GPIOA_LCKR_LCK7
#define CH32V_GPIOB_LCKR_LCK8     CH32V_GPIOA_LCKR_LCK8
#define CH32V_GPIOB_LCKR_LCK9     CH32V_GPIOA_LCKR_LCK9
#define CH32V_GPIOB_LCKR_LCK10    CH32V_GPIOA_LCKR_LCK10
#define CH32V_GPIOB_LCKR_LCK11    CH32V_GPIOA_LCKR_LCK11
#define CH32V_GPIOB_LCKR_LCK12    CH32V_GPIOA_LCKR_LCK12
#define CH32V_GPIOB_LCKR_LCK13    CH32V_GPIOA_LCKR_LCK13
#define CH32V_GPIOB_LCKR_LCK14    CH32V_GPIOA_LCKR_LCK14
#define CH32V_GPIOB_LCKR_LCK15    CH32V_GPIOA_LCKR_LCK15
#define CH32V_GPIOB_LCKR_LCKK     CH32V_GPIOA_LCKR_LCKK

/* No registers defined for peripheral GPIOC. Using those of GPIOA. */
#define CH32V_GPIOC_BASE          0x40011000
#define CH32V_GPIOC_CFGLR_OFFSET  CH32V_GPIOA_CFGLR_OFFSET
#define CH32V_GPIOC_CFGLR         CH32V_GPIOA_CFGLR
#define CH32V_GPIOC_CFGLR_MODE0   CH32V_GPIOA_CFGLR_MODE0
#define CH32V_GPIOC_CFGLR_MODE0_MASK CH32V_GPIOA_CFGLR_MODE0_MASK
#define CH32V_GPIOC_CFGLR_CNF0    CH32V_GPIOA_CFGLR_CNF0
#define CH32V_GPIOC_CFGLR_CNF0_MASK CH32V_GPIOA_CFGLR_CNF0_MASK
#define CH32V_GPIOC_CFGLR_MODE1   CH32V_GPIOA_CFGLR_MODE1
#define CH32V_GPIOC_CFGLR_MODE1_MASK CH32V_GPIOA_CFGLR_MODE1_MASK
#define CH32V_GPIOC_CFGLR_CNF1    CH32V_GPIOA_CFGLR_CNF1
#define CH32V_GPIOC_CFGLR_CNF1_MASK CH32V_GPIOA_CFGLR_CNF1_MASK
#define CH32V_GPIOC_CFGLR_MODE2   CH32V_GPIOA_CFGLR_MODE2
#define CH32V_GPIOC_CFGLR_MODE2_MASK CH32V_GPIOA_CFGLR_MODE2_MASK
#define CH32V_GPIOC_CFGLR_CNF2    CH32V_GPIOA_CFGLR_CNF2
#define CH32V_GPIOC_CFGLR_CNF2_MASK CH32V_GPIOA_CFGLR_CNF2_MASK
#define CH32V_GPIOC_CFGLR_MODE3   CH32V_GPIOA_CFGLR_MODE3
#define CH32V_GPIOC_CFGLR_MODE3_MASK CH32V_GPIOA_CFGLR_MODE3_MASK
#define CH32V_GPIOC_CFGLR_CNF3    CH32V_GPIOA_CFGLR_CNF3
#define CH32V_GPIOC_CFGLR_CNF3_MASK CH32V_GPIOA_CFGLR_CNF3_MASK
#define CH32V_GPIOC_CFGLR_MODE4   CH32V_GPIOA_CFGLR_MODE4
#define CH32V_GPIOC_CFGLR_MODE4_MASK CH32V_GPIOA_CFGLR_MODE4_MASK
#define CH32V_GPIOC_CFGLR_CNF4    CH32V_GPIOA_CFGLR_CNF4
#define CH32V_GPIOC_CFGLR_CNF4_MASK CH32V_GPIOA_CFGLR_CNF4_MASK
#define CH32V_GPIOC_CFGLR_MODE5   CH32V_GPIOA_CFGLR_MODE5
#define CH32V_GPIOC_CFGLR_MODE5_MASK CH32V_GPIOA_CFGLR_MODE5_MASK
#define CH32V_GPIOC_CFGLR_CNF5    CH32V_GPIOA_CFGLR_CNF5
#define CH32V_GPIOC_CFGLR_CNF5_MASK CH32V_GPIOA_CFGLR_CNF5_MASK
#define CH32V_GPIOC_CFGLR_MODE6   CH32V_GPIOA_CFGLR_MODE6
#define CH32V_GPIOC_CFGLR_MODE6_MASK CH32V_GPIOA_CFGLR_MODE6_MASK
#define CH32V_GPIOC_CFGLR_CNF6    CH32V_GPIOA_CFGLR_CNF6
#define CH32V_GPIOC_CFGLR_CNF6_MASK CH32V_GPIOA_CFGLR_CNF6_MASK
#define CH32V_GPIOC_CFGLR_MODE7   CH32V_GPIOA_CFGLR_MODE7
#define CH32V_GPIOC_CFGLR_MODE7_MASK CH32V_GPIOA_CFGLR_MODE7_MASK
#define CH32V_GPIOC_CFGLR_CNF7    CH32V_GPIOA_CFGLR_CNF7
#define CH32V_GPIOC_CFGLR_CNF7_MASK CH32V_GPIOA_CFGLR_CNF7_MASK
#define CH32V_GPIOC_CFGHR_OFFSET  CH32V_GPIOA_CFGHR_OFFSET
#define CH32V_GPIOC_CFGHR         CH32V_GPIOA_CFGHR
#define CH32V_GPIOC_CFGHR_MODE8   CH32V_GPIOA_CFGHR_MODE8
#define CH32V_GPIOC_CFGHR_MODE8_MASK CH32V_GPIOA_CFGHR_MODE8_MASK
#define CH32V_GPIOC_CFGHR_CNF8    CH32V_GPIOA_CFGHR_CNF8
#define CH32V_GPIOC_CFGHR_CNF8_MASK CH32V_GPIOA_CFGHR_CNF8_MASK
#define CH32V_GPIOC_CFGHR_MODE9   CH32V_GPIOA_CFGHR_MODE9
#define CH32V_GPIOC_CFGHR_MODE9_MASK CH32V_GPIOA_CFGHR_MODE9_MASK
#define CH32V_GPIOC_CFGHR_CNF9    CH32V_GPIOA_CFGHR_CNF9
#define CH32V_GPIOC_CFGHR_CNF9_MASK CH32V_GPIOA_CFGHR_CNF9_MASK
#define CH32V_GPIOC_CFGHR_MODE10  CH32V_GPIOA_CFGHR_MODE10
#define CH32V_GPIOC_CFGHR_MODE10_MASK CH32V_GPIOA_CFGHR_MODE10_MASK
#define CH32V_GPIOC_CFGHR_CNF10   CH32V_GPIOA_CFGHR_CNF10
#define CH32V_GPIOC_CFGHR_CNF10_MASK CH32V_GPIOA_CFGHR_CNF10_MASK
#define CH32V_GPIOC_CFGHR_MODE11  CH32V_GPIOA_CFGHR_MODE11
#define CH32V_GPIOC_CFGHR_MODE11_MASK CH32V_GPIOA_CFGHR_MODE11_MASK
#define CH32V_GPIOC_CFGHR_CNF11   CH32V_GPIOA_CFGHR_CNF11
#define CH32V_GPIOC_CFGHR_CNF11_MASK CH32V_GPIOA_CFGHR_CNF11_MASK
#define CH32V_GPIOC_CFGHR_MODE12  CH32V_GPIOA_CFGHR_MODE12
#define CH32V_GPIOC_CFGHR_MODE12_MASK CH32V_GPIOA_CFGHR_MODE12_MASK
#define CH32V_GPIOC_CFGHR_CNF12   CH32V_GPIOA_CFGHR_CNF12
#define CH32V_GPIOC_CFGHR_CNF12_MASK CH32V_GPIOA_CFGHR_CNF12_MASK
#define CH32V_GPIOC_CFGHR_MODE13  CH32V_GPIOA_CFGHR_MODE13
#define CH32V_GPIOC_CFGHR_MODE13_MASK CH32V_GPIOA_CFGHR_MODE13_MASK
#define CH32V_GPIOC_CFGHR_CNF13   CH32V_GPIOA_CFGHR_CNF13
#define CH32V_GPIOC_CFGHR_CNF13_MASK CH32V_GPIOA_CFGHR_CNF13_MASK
#define CH32V_GPIOC_CFGHR_MODE14  CH32V_GPIOA_CFGHR_MODE14
#define CH32V_GPIOC_CFGHR_MODE14_MASK CH32V_GPIOA_CFGHR_MODE14_MASK
#define CH32V_GPIOC_CFGHR_CNF14   CH32V_GPIOA_CFGHR_CNF14
#define CH32V_GPIOC_CFGHR_CNF14_MASK CH32V_GPIOA_CFGHR_CNF14_MASK
#define CH32V_GPIOC_CFGHR_MODE15  CH32V_GPIOA_CFGHR_MODE15
#define CH32V_GPIOC_CFGHR_MODE15_MASK CH32V_GPIOA_CFGHR_MODE15_MASK
#define CH32V_GPIOC_CFGHR_CNF15   CH32V_GPIOA_CFGHR_CNF15
#define CH32V_GPIOC_CFGHR_CNF15_MASK CH32V_GPIOA_CFGHR_CNF15_MASK
#define CH32V_GPIOC_INDR_OFFSET   CH32V_GPIOA_INDR_OFFSET
#define CH32V_GPIOC_INDR          CH32V_GPIOA_INDR
#define CH32V_GPIOC_INDR_IDR0     CH32V_GPIOA_INDR_IDR0
#define CH32V_GPIOC_INDR_IDR1     CH32V_GPIOA_INDR_IDR1
#define CH32V_GPIOC_INDR_IDR2     CH32V_GPIOA_INDR_IDR2
#define CH32V_GPIOC_INDR_IDR3     CH32V_GPIOA_INDR_IDR3
#define CH32V_GPIOC_INDR_IDR4     CH32V_GPIOA_INDR_IDR4
#define CH32V_GPIOC_INDR_IDR5     CH32V_GPIOA_INDR_IDR5
#define CH32V_GPIOC_INDR_IDR6     CH32V_GPIOA_INDR_IDR6
#define CH32V_GPIOC_INDR_IDR7     CH32V_GPIOA_INDR_IDR7
#define CH32V_GPIOC_INDR_IDR8     CH32V_GPIOA_INDR_IDR8
#define CH32V_GPIOC_INDR_IDR9     CH32V_GPIOA_INDR_IDR9
#define CH32V_GPIOC_INDR_IDR10    CH32V_GPIOA_INDR_IDR10
#define CH32V_GPIOC_INDR_IDR11    CH32V_GPIOA_INDR_IDR11
#define CH32V_GPIOC_INDR_IDR12    CH32V_GPIOA_INDR_IDR12
#define CH32V_GPIOC_INDR_IDR13    CH32V_GPIOA_INDR_IDR13
#define CH32V_GPIOC_INDR_IDR14    CH32V_GPIOA_INDR_IDR14
#define CH32V_GPIOC_INDR_IDR15    CH32V_GPIOA_INDR_IDR15
#define CH32V_GPIOC_OUTDR_OFFSET  CH32V_GPIOA_OUTDR_OFFSET
#define CH32V_GPIOC_OUTDR         CH32V_GPIOA_OUTDR
#define CH32V_GPIOC_OUTDR_ODR0    CH32V_GPIOA_OUTDR_ODR0
#define CH32V_GPIOC_OUTDR_ODR1    CH32V_GPIOA_OUTDR_ODR1
#define CH32V_GPIOC_OUTDR_ODR2    CH32V_GPIOA_OUTDR_ODR2
#define CH32V_GPIOC_OUTDR_ODR3    CH32V_GPIOA_OUTDR_ODR3
#define CH32V_GPIOC_OUTDR_ODR4    CH32V_GPIOA_OUTDR_ODR4
#define CH32V_GPIOC_OUTDR_ODR5    CH32V_GPIOA_OUTDR_ODR5
#define CH32V_GPIOC_OUTDR_ODR6    CH32V_GPIOA_OUTDR_ODR6
#define CH32V_GPIOC_OUTDR_ODR7    CH32V_GPIOA_OUTDR_ODR7
#define CH32V_GPIOC_OUTDR_ODR8    CH32V_GPIOA_OUTDR_ODR8
#define CH32V_GPIOC_OUTDR_ODR9    CH32V_GPIOA_OUTDR_ODR9
#define CH32V_GPIOC_OUTDR_ODR10   CH32V_GPIOA_OUTDR_ODR10
#define CH32V_GPIOC_OUTDR_ODR11   CH32V_GPIOA_OUTDR_ODR11
#define CH32V_GPIOC_OUTDR_ODR12   CH32V_GPIOA_OUTDR_ODR12
#define CH32V_GPIOC_OUTDR_ODR13   CH32V_GPIOA_OUTDR_ODR13
#define CH32V_GPIOC_OUTDR_ODR14   CH32V_GPIOA_OUTDR_ODR14
#define CH32V_GPIOC_OUTDR_ODR15   CH32V_GPIOA_OUTDR_ODR15
#define CH32V_GPIOC_BSHR_OFFSET   CH32V_GPIOA_BSHR_OFFSET
#define CH32V_GPIOC_BSHR          CH32V_GPIOA_BSHR
#define CH32V_GPIOC_BSHR_BS0      CH32V_GPIOA_BSHR_BS0
#define CH32V_GPIOC_BSHR_BS1      CH32V_GPIOA_BSHR_BS1
#define CH32V_GPIOC_BSHR_BS2      CH32V_GPIOA_BSHR_BS2
#define CH32V_GPIOC_BSHR_BS3      CH32V_GPIOA_BSHR_BS3
#define CH32V_GPIOC_BSHR_BS4      CH32V_GPIOA_BSHR_BS4
#define CH32V_GPIOC_BSHR_BS5      CH32V_GPIOA_BSHR_BS5
#define CH32V_GPIOC_BSHR_BS6      CH32V_GPIOA_BSHR_BS6
#define CH32V_GPIOC_BSHR_BS7      CH32V_GPIOA_BSHR_BS7
#define CH32V_GPIOC_BSHR_BS8      CH32V_GPIOA_BSHR_BS8
#define CH32V_GPIOC_BSHR_BS9      CH32V_GPIOA_BSHR_BS9
#define CH32V_GPIOC_BSHR_BS10     CH32V_GPIOA_BSHR_BS10
#define CH32V_GPIOC_BSHR_BS11     CH32V_GPIOA_BSHR_BS11
#define CH32V_GPIOC_BSHR_BS12     CH32V_GPIOA_BSHR_BS12
#define CH32V_GPIOC_BSHR_BS13     CH32V_GPIOA_BSHR_BS13
#define CH32V_GPIOC_BSHR_BS14     CH32V_GPIOA_BSHR_BS14
#define CH32V_GPIOC_BSHR_BS15     CH32V_GPIOA_BSHR_BS15
#define CH32V_GPIOC_BSHR_BR0      CH32V_GPIOA_BSHR_BR0
#define CH32V_GPIOC_BSHR_BR1      CH32V_GPIOA_BSHR_BR1
#define CH32V_GPIOC_BSHR_BR2      CH32V_GPIOA_BSHR_BR2
#define CH32V_GPIOC_BSHR_BR3      CH32V_GPIOA_BSHR_BR3
#define CH32V_GPIOC_BSHR_BR4      CH32V_GPIOA_BSHR_BR4
#define CH32V_GPIOC_BSHR_BR5      CH32V_GPIOA_BSHR_BR5
#define CH32V_GPIOC_BSHR_BR6      CH32V_GPIOA_BSHR_BR6
#define CH32V_GPIOC_BSHR_BR7      CH32V_GPIOA_BSHR_BR7
#define CH32V_GPIOC_BSHR_BR8      CH32V_GPIOA_BSHR_BR8
#define CH32V_GPIOC_BSHR_BR9      CH32V_GPIOA_BSHR_BR9
#define CH32V_GPIOC_BSHR_BR10     CH32V_GPIOA_BSHR_BR10
#define CH32V_GPIOC_BSHR_BR11     CH32V_GPIOA_BSHR_BR11
#define CH32V_GPIOC_BSHR_BR12     CH32V_GPIOA_BSHR_BR12
#define CH32V_GPIOC_BSHR_BR13     CH32V_GPIOA_BSHR_BR13
#define CH32V_GPIOC_BSHR_BR14     CH32V_GPIOA_BSHR_BR14
#define CH32V_GPIOC_BSHR_BR15     CH32V_GPIOA_BSHR_BR15
#define CH32V_GPIOC_BCR_OFFSET    CH32V_GPIOA_BCR_OFFSET
#define CH32V_GPIOC_BCR           CH32V_GPIOA_BCR
#define CH32V_GPIOC_BCR_BR0       CH32V_GPIOA_BCR_BR0
#define CH32V_GPIOC_BCR_BR1       CH32V_GPIOA_BCR_BR1
#define CH32V_GPIOC_BCR_BR2       CH32V_GPIOA_BCR_BR2
#define CH32V_GPIOC_BCR_BR3       CH32V_GPIOA_BCR_BR3
#define CH32V_GPIOC_BCR_BR4       CH32V_GPIOA_BCR_BR4
#define CH32V_GPIOC_BCR_BR5       CH32V_GPIOA_BCR_BR5
#define CH32V_GPIOC_BCR_BR6       CH32V_GPIOA_BCR_BR6
#define CH32V_GPIOC_BCR_BR7       CH32V_GPIOA_BCR_BR7
#define CH32V_GPIOC_BCR_BR8       CH32V_GPIOA_BCR_BR8
#define CH32V_GPIOC_BCR_BR9       CH32V_GPIOA_BCR_BR9
#define CH32V_GPIOC_BCR_BR10      CH32V_GPIOA_BCR_BR10
#define CH32V_GPIOC_BCR_BR11      CH32V_GPIOA_BCR_BR11
#define CH32V_GPIOC_BCR_BR12      CH32V_GPIOA_BCR_BR12
#define CH32V_GPIOC_BCR_BR13      CH32V_GPIOA_BCR_BR13
#define CH32V_GPIOC_BCR_BR14      CH32V_GPIOA_BCR_BR14
#define CH32V_GPIOC_BCR_BR15      CH32V_GPIOA_BCR_BR15
#define CH32V_GPIOC_LCKR_OFFSET   CH32V_GPIOA_LCKR_OFFSET
#define CH32V_GPIOC_LCKR          CH32V_GPIOA_LCKR
#define CH32V_GPIOC_LCKR_LCK0     CH32V_GPIOA_LCKR_LCK0
#define CH32V_GPIOC_LCKR_LCK1     CH32V_GPIOA_LCKR_LCK1
#define CH32V_GPIOC_LCKR_LCK2     CH32V_GPIOA_LCKR_LCK2
#define CH32V_GPIOC_LCKR_LCK3     CH32V_GPIOA_LCKR_LCK3
#define CH32V_GPIOC_LCKR_LCK4     CH32V_GPIOA_LCKR_LCK4
#define CH32V_GPIOC_LCKR_LCK5     CH32V_GPIOA_LCKR_LCK5
#define CH32V_GPIOC_LCKR_LCK6     CH32V_GPIOA_LCKR_LCK6
#define CH32V_GPIOC_LCKR_LCK7     CH32V_GPIOA_LCKR_LCK7
#define CH32V_GPIOC_LCKR_LCK8     CH32V_GPIOA_LCKR_LCK8
#define CH32V_GPIOC_LCKR_LCK9     CH32V_GPIOA_LCKR_LCK9
#define CH32V_GPIOC_LCKR_LCK10    CH32V_GPIOA_LCKR_LCK10
#define CH32V_GPIOC_LCKR_LCK11    CH32V_GPIOA_LCKR_LCK11
#define CH32V_GPIOC_LCKR_LCK12    CH32V_GPIOA_LCKR_LCK12
#define CH32V_GPIOC_LCKR_LCK13    CH32V_GPIOA_LCKR_LCK13
#define CH32V_GPIOC_LCKR_LCK14    CH32V_GPIOA_LCKR_LCK14
#define CH32V_GPIOC_LCKR_LCK15    CH32V_GPIOA_LCKR_LCK15
#define CH32V_GPIOC_LCKR_LCKK     CH32V_GPIOA_LCKR_LCKK

/* No registers defined for peripheral GPIOD. Using those of GPIOA. */
#define CH32V_GPIOD_BASE          0x40011400
#define CH32V_GPIOD_CFGLR_OFFSET  CH32V_GPIOA_CFGLR_OFFSET
#define CH32V_GPIOD_CFGLR         CH32V_GPIOA_CFGLR
#define CH32V_GPIOD_CFGLR_MODE0   CH32V_GPIOA_CFGLR_MODE0
#define CH32V_GPIOD_CFGLR_MODE0_MASK CH32V_GPIOA_CFGLR_MODE0_MASK
#define CH32V_GPIOD_CFGLR_CNF0    CH32V_GPIOA_CFGLR_CNF0
#define CH32V_GPIOD_CFGLR_CNF0_MASK CH32V_GPIOA_CFGLR_CNF0_MASK
#define CH32V_GPIOD_CFGLR_MODE1   CH32V_GPIOA_CFGLR_MODE1
#define CH32V_GPIOD_CFGLR_MODE1_MASK CH32V_GPIOA_CFGLR_MODE1_MASK
#define CH32V_GPIOD_CFGLR_CNF1    CH32V_GPIOA_CFGLR_CNF1
#define CH32V_GPIOD_CFGLR_CNF1_MASK CH32V_GPIOA_CFGLR_CNF1_MASK
#define CH32V_GPIOD_CFGLR_MODE2   CH32V_GPIOA_CFGLR_MODE2
#define CH32V_GPIOD_CFGLR_MODE2_MASK CH32V_GPIOA_CFGLR_MODE2_MASK
#define CH32V_GPIOD_CFGLR_CNF2    CH32V_GPIOA_CFGLR_CNF2
#define CH32V_GPIOD_CFGLR_CNF2_MASK CH32V_GPIOA_CFGLR_CNF2_MASK
#define CH32V_GPIOD_CFGLR_MODE3   CH32V_GPIOA_CFGLR_MODE3
#define CH32V_GPIOD_CFGLR_MODE3_MASK CH32V_GPIOA_CFGLR_MODE3_MASK
#define CH32V_GPIOD_CFGLR_CNF3    CH32V_GPIOA_CFGLR_CNF3
#define CH32V_GPIOD_CFGLR_CNF3_MASK CH32V_GPIOA_CFGLR_CNF3_MASK
#define CH32V_GPIOD_CFGLR_MODE4   CH32V_GPIOA_CFGLR_MODE4
#define CH32V_GPIOD_CFGLR_MODE4_MASK CH32V_GPIOA_CFGLR_MODE4_MASK
#define CH32V_GPIOD_CFGLR_CNF4    CH32V_GPIOA_CFGLR_CNF4
#define CH32V_GPIOD_CFGLR_CNF4_MASK CH32V_GPIOA_CFGLR_CNF4_MASK
#define CH32V_GPIOD_CFGLR_MODE5   CH32V_GPIOA_CFGLR_MODE5
#define CH32V_GPIOD_CFGLR_MODE5_MASK CH32V_GPIOA_CFGLR_MODE5_MASK
#define CH32V_GPIOD_CFGLR_CNF5    CH32V_GPIOA_CFGLR_CNF5
#define CH32V_GPIOD_CFGLR_CNF5_MASK CH32V_GPIOA_CFGLR_CNF5_MASK
#define CH32V_GPIOD_CFGLR_MODE6   CH32V_GPIOA_CFGLR_MODE6
#define CH32V_GPIOD_CFGLR_MODE6_MASK CH32V_GPIOA_CFGLR_MODE6_MASK
#define CH32V_GPIOD_CFGLR_CNF6    CH32V_GPIOA_CFGLR_CNF6
#define CH32V_GPIOD_CFGLR_CNF6_MASK CH32V_GPIOA_CFGLR_CNF6_MASK
#define CH32V_GPIOD_CFGLR_MODE7   CH32V_GPIOA_CFGLR_MODE7
#define CH32V_GPIOD_CFGLR_MODE7_MASK CH32V_GPIOA_CFGLR_MODE7_MASK
#define CH32V_GPIOD_CFGLR_CNF7    CH32V_GPIOA_CFGLR_CNF7
#define CH32V_GPIOD_CFGLR_CNF7_MASK CH32V_GPIOA_CFGLR_CNF7_MASK
#define CH32V_GPIOD_CFGHR_OFFSET  CH32V_GPIOA_CFGHR_OFFSET
#define CH32V_GPIOD_CFGHR         CH32V_GPIOA_CFGHR
#define CH32V_GPIOD_CFGHR_MODE8   CH32V_GPIOA_CFGHR_MODE8
#define CH32V_GPIOD_CFGHR_MODE8_MASK CH32V_GPIOA_CFGHR_MODE8_MASK
#define CH32V_GPIOD_CFGHR_CNF8    CH32V_GPIOA_CFGHR_CNF8
#define CH32V_GPIOD_CFGHR_CNF8_MASK CH32V_GPIOA_CFGHR_CNF8_MASK
#define CH32V_GPIOD_CFGHR_MODE9   CH32V_GPIOA_CFGHR_MODE9
#define CH32V_GPIOD_CFGHR_MODE9_MASK CH32V_GPIOA_CFGHR_MODE9_MASK
#define CH32V_GPIOD_CFGHR_CNF9    CH32V_GPIOA_CFGHR_CNF9
#define CH32V_GPIOD_CFGHR_CNF9_MASK CH32V_GPIOA_CFGHR_CNF9_MASK
#define CH32V_GPIOD_CFGHR_MODE10  CH32V_GPIOA_CFGHR_MODE10
#define CH32V_GPIOD_CFGHR_MODE10_MASK CH32V_GPIOA_CFGHR_MODE10_MASK
#define CH32V_GPIOD_CFGHR_CNF10   CH32V_GPIOA_CFGHR_CNF10
#define CH32V_GPIOD_CFGHR_CNF10_MASK CH32V_GPIOA_CFGHR_CNF10_MASK
#define CH32V_GPIOD_CFGHR_MODE11  CH32V_GPIOA_CFGHR_MODE11
#define CH32V_GPIOD_CFGHR_MODE11_MASK CH32V_GPIOA_CFGHR_MODE11_MASK
#define CH32V_GPIOD_CFGHR_CNF11   CH32V_GPIOA_CFGHR_CNF11
#define CH32V_GPIOD_CFGHR_CNF11_MASK CH32V_GPIOA_CFGHR_CNF11_MASK
#define CH32V_GPIOD_CFGHR_MODE12  CH32V_GPIOA_CFGHR_MODE12
#define CH32V_GPIOD_CFGHR_MODE12_MASK CH32V_GPIOA_CFGHR_MODE12_MASK
#define CH32V_GPIOD_CFGHR_CNF12   CH32V_GPIOA_CFGHR_CNF12
#define CH32V_GPIOD_CFGHR_CNF12_MASK CH32V_GPIOA_CFGHR_CNF12_MASK
#define CH32V_GPIOD_CFGHR_MODE13  CH32V_GPIOA_CFGHR_MODE13
#define CH32V_GPIOD_CFGHR_MODE13_MASK CH32V_GPIOA_CFGHR_MODE13_MASK
#define CH32V_GPIOD_CFGHR_CNF13   CH32V_GPIOA_CFGHR_CNF13
#define CH32V_GPIOD_CFGHR_CNF13_MASK CH32V_GPIOA_CFGHR_CNF13_MASK
#define CH32V_GPIOD_CFGHR_MODE14  CH32V_GPIOA_CFGHR_MODE14
#define CH32V_GPIOD_CFGHR_MODE14_MASK CH32V_GPIOA_CFGHR_MODE14_MASK
#define CH32V_GPIOD_CFGHR_CNF14   CH32V_GPIOA_CFGHR_CNF14
#define CH32V_GPIOD_CFGHR_CNF14_MASK CH32V_GPIOA_CFGHR_CNF14_MASK
#define CH32V_GPIOD_CFGHR_MODE15  CH32V_GPIOA_CFGHR_MODE15
#define CH32V_GPIOD_CFGHR_MODE15_MASK CH32V_GPIOA_CFGHR_MODE15_MASK
#define CH32V_GPIOD_CFGHR_CNF15   CH32V_GPIOA_CFGHR_CNF15
#define CH32V_GPIOD_CFGHR_CNF15_MASK CH32V_GPIOA_CFGHR_CNF15_MASK
#define CH32V_GPIOD_INDR_OFFSET   CH32V_GPIOA_INDR_OFFSET
#define CH32V_GPIOD_INDR          CH32V_GPIOA_INDR
#define CH32V_GPIOD_INDR_IDR0     CH32V_GPIOA_INDR_IDR0
#define CH32V_GPIOD_INDR_IDR1     CH32V_GPIOA_INDR_IDR1
#define CH32V_GPIOD_INDR_IDR2     CH32V_GPIOA_INDR_IDR2
#define CH32V_GPIOD_INDR_IDR3     CH32V_GPIOA_INDR_IDR3
#define CH32V_GPIOD_INDR_IDR4     CH32V_GPIOA_INDR_IDR4
#define CH32V_GPIOD_INDR_IDR5     CH32V_GPIOA_INDR_IDR5
#define CH32V_GPIOD_INDR_IDR6     CH32V_GPIOA_INDR_IDR6
#define CH32V_GPIOD_INDR_IDR7     CH32V_GPIOA_INDR_IDR7
#define CH32V_GPIOD_INDR_IDR8     CH32V_GPIOA_INDR_IDR8
#define CH32V_GPIOD_INDR_IDR9     CH32V_GPIOA_INDR_IDR9
#define CH32V_GPIOD_INDR_IDR10    CH32V_GPIOA_INDR_IDR10
#define CH32V_GPIOD_INDR_IDR11    CH32V_GPIOA_INDR_IDR11
#define CH32V_GPIOD_INDR_IDR12    CH32V_GPIOA_INDR_IDR12
#define CH32V_GPIOD_INDR_IDR13    CH32V_GPIOA_INDR_IDR13
#define CH32V_GPIOD_INDR_IDR14    CH32V_GPIOA_INDR_IDR14
#define CH32V_GPIOD_INDR_IDR15    CH32V_GPIOA_INDR_IDR15
#define CH32V_GPIOD_OUTDR_OFFSET  CH32V_GPIOA_OUTDR_OFFSET
#define CH32V_GPIOD_OUTDR         CH32V_GPIOA_OUTDR
#define CH32V_GPIOD_OUTDR_ODR0    CH32V_GPIOA_OUTDR_ODR0
#define CH32V_GPIOD_OUTDR_ODR1    CH32V_GPIOA_OUTDR_ODR1
#define CH32V_GPIOD_OUTDR_ODR2    CH32V_GPIOA_OUTDR_ODR2
#define CH32V_GPIOD_OUTDR_ODR3    CH32V_GPIOA_OUTDR_ODR3
#define CH32V_GPIOD_OUTDR_ODR4    CH32V_GPIOA_OUTDR_ODR4
#define CH32V_GPIOD_OUTDR_ODR5    CH32V_GPIOA_OUTDR_ODR5
#define CH32V_GPIOD_OUTDR_ODR6    CH32V_GPIOA_OUTDR_ODR6
#define CH32V_GPIOD_OUTDR_ODR7    CH32V_GPIOA_OUTDR_ODR7
#define CH32V_GPIOD_OUTDR_ODR8    CH32V_GPIOA_OUTDR_ODR8
#define CH32V_GPIOD_OUTDR_ODR9    CH32V_GPIOA_OUTDR_ODR9
#define CH32V_GPIOD_OUTDR_ODR10   CH32V_GPIOA_OUTDR_ODR10
#define CH32V_GPIOD_OUTDR_ODR11   CH32V_GPIOA_OUTDR_ODR11
#define CH32V_GPIOD_OUTDR_ODR12   CH32V_GPIOA_OUTDR_ODR12
#define CH32V_GPIOD_OUTDR_ODR13   CH32V_GPIOA_OUTDR_ODR13
#define CH32V_GPIOD_OUTDR_ODR14   CH32V_GPIOA_OUTDR_ODR14
#define CH32V_GPIOD_OUTDR_ODR15   CH32V_GPIOA_OUTDR_ODR15
#define CH32V_GPIOD_BSHR_OFFSET   CH32V_GPIOA_BSHR_OFFSET
#define CH32V_GPIOD_BSHR          CH32V_GPIOA_BSHR
#define CH32V_GPIOD_BSHR_BS0      CH32V_GPIOA_BSHR_BS0
#define CH32V_GPIOD_BSHR_BS1      CH32V_GPIOA_BSHR_BS1
#define CH32V_GPIOD_BSHR_BS2      CH32V_GPIOA_BSHR_BS2
#define CH32V_GPIOD_BSHR_BS3      CH32V_GPIOA_BSHR_BS3
#define CH32V_GPIOD_BSHR_BS4      CH32V_GPIOA_BSHR_BS4
#define CH32V_GPIOD_BSHR_BS5      CH32V_GPIOA_BSHR_BS5
#define CH32V_GPIOD_BSHR_BS6      CH32V_GPIOA_BSHR_BS6
#define CH32V_GPIOD_BSHR_BS7      CH32V_GPIOA_BSHR_BS7
#define CH32V_GPIOD_BSHR_BS8      CH32V_GPIOA_BSHR_BS8
#define CH32V_GPIOD_BSHR_BS9      CH32V_GPIOA_BSHR_BS9
#define CH32V_GPIOD_BSHR_BS10     CH32V_GPIOA_BSHR_BS10
#define CH32V_GPIOD_BSHR_BS11     CH32V_GPIOA_BSHR_BS11
#define CH32V_GPIOD_BSHR_BS12     CH32V_GPIOA_BSHR_BS12
#define CH32V_GPIOD_BSHR_BS13     CH32V_GPIOA_BSHR_BS13
#define CH32V_GPIOD_BSHR_BS14     CH32V_GPIOA_BSHR_BS14
#define CH32V_GPIOD_BSHR_BS15     CH32V_GPIOA_BSHR_BS15
#define CH32V_GPIOD_BSHR_BR0      CH32V_GPIOA_BSHR_BR0
#define CH32V_GPIOD_BSHR_BR1      CH32V_GPIOA_BSHR_BR1
#define CH32V_GPIOD_BSHR_BR2      CH32V_GPIOA_BSHR_BR2
#define CH32V_GPIOD_BSHR_BR3      CH32V_GPIOA_BSHR_BR3
#define CH32V_GPIOD_BSHR_BR4      CH32V_GPIOA_BSHR_BR4
#define CH32V_GPIOD_BSHR_BR5      CH32V_GPIOA_BSHR_BR5
#define CH32V_GPIOD_BSHR_BR6      CH32V_GPIOA_BSHR_BR6
#define CH32V_GPIOD_BSHR_BR7      CH32V_GPIOA_BSHR_BR7
#define CH32V_GPIOD_BSHR_BR8      CH32V_GPIOA_BSHR_BR8
#define CH32V_GPIOD_BSHR_BR9      CH32V_GPIOA_BSHR_BR9
#define CH32V_GPIOD_BSHR_BR10     CH32V_GPIOA_BSHR_BR10
#define CH32V_GPIOD_BSHR_BR11     CH32V_GPIOA_BSHR_BR11
#define CH32V_GPIOD_BSHR_BR12     CH32V_GPIOA_BSHR_BR12
#define CH32V_GPIOD_BSHR_BR13     CH32V_GPIOA_BSHR_BR13
#define CH32V_GPIOD_BSHR_BR14     CH32V_GPIOA_BSHR_BR14
#define CH32V_GPIOD_BSHR_BR15     CH32V_GPIOA_BSHR_BR15
#define CH32V_GPIOD_BCR_OFFSET    CH32V_GPIOA_BCR_OFFSET
#define CH32V_GPIOD_BCR           CH32V_GPIOA_BCR
#define CH32V_GPIOD_BCR_BR0       CH32V_GPIOA_BCR_BR0
#define CH32V_GPIOD_BCR_BR1       CH32V_GPIOA_BCR_BR1
#define CH32V_GPIOD_BCR_BR2       CH32V_GPIOA_BCR_BR2
#define CH32V_GPIOD_BCR_BR3       CH32V_GPIOA_BCR_BR3
#define CH32V_GPIOD_BCR_BR4       CH32V_GPIOA_BCR_BR4
#define CH32V_GPIOD_BCR_BR5       CH32V_GPIOA_BCR_BR5
#define CH32V_GPIOD_BCR_BR6       CH32V_GPIOA_BCR_BR6
#define CH32V_GPIOD_BCR_BR7       CH32V_GPIOA_BCR_BR7
#define CH32V_GPIOD_BCR_BR8       CH32V_GPIOA_BCR_BR8
#define CH32V_GPIOD_BCR_BR9       CH32V_GPIOA_BCR_BR9
#define CH32V_GPIOD_BCR_BR10      CH32V_GPIOA_BCR_BR10
#define CH32V_GPIOD_BCR_BR11      CH32V_GPIOA_BCR_BR11
#define CH32V_GPIOD_BCR_BR12      CH32V_GPIOA_BCR_BR12
#define CH32V_GPIOD_BCR_BR13      CH32V_GPIOA_BCR_BR13
#define CH32V_GPIOD_BCR_BR14      CH32V_GPIOA_BCR_BR14
#define CH32V_GPIOD_BCR_BR15      CH32V_GPIOA_BCR_BR15
#define CH32V_GPIOD_LCKR_OFFSET   CH32V_GPIOA_LCKR_OFFSET
#define CH32V_GPIOD_LCKR          CH32V_GPIOA_LCKR
#define CH32V_GPIOD_LCKR_LCK0     CH32V_GPIOA_LCKR_LCK0
#define CH32V_GPIOD_LCKR_LCK1     CH32V_GPIOA_LCKR_LCK1
#define CH32V_GPIOD_LCKR_LCK2     CH32V_GPIOA_LCKR_LCK2
#define CH32V_GPIOD_LCKR_LCK3     CH32V_GPIOA_LCKR_LCK3
#define CH32V_GPIOD_LCKR_LCK4     CH32V_GPIOA_LCKR_LCK4
#define CH32V_GPIOD_LCKR_LCK5     CH32V_GPIOA_LCKR_LCK5
#define CH32V_GPIOD_LCKR_LCK6     CH32V_GPIOA_LCKR_LCK6
#define CH32V_GPIOD_LCKR_LCK7     CH32V_GPIOA_LCKR_LCK7
#define CH32V_GPIOD_LCKR_LCK8     CH32V_GPIOA_LCKR_LCK8
#define CH32V_GPIOD_LCKR_LCK9     CH32V_GPIOA_LCKR_LCK9
#define CH32V_GPIOD_LCKR_LCK10    CH32V_GPIOA_LCKR_LCK10
#define CH32V_GPIOD_LCKR_LCK11    CH32V_GPIOA_LCKR_LCK11
#define CH32V_GPIOD_LCKR_LCK12    CH32V_GPIOA_LCKR_LCK12
#define CH32V_GPIOD_LCKR_LCK13    CH32V_GPIOA_LCKR_LCK13
#define CH32V_GPIOD_LCKR_LCK14    CH32V_GPIOA_LCKR_LCK14
#define CH32V_GPIOD_LCKR_LCK15    CH32V_GPIOA_LCKR_LCK15
#define CH32V_GPIOD_LCKR_LCKK     CH32V_GPIOA_LCKR_LCKK

/* No registers defined for peripheral GPIOE. Using those of GPIOA. */
#define CH32V_GPIOE_BASE          0x40011800
#define CH32V_GPIOE_CFGLR_OFFSET  CH32V_GPIOA_CFGLR_OFFSET
#define CH32V_GPIOE_CFGLR         CH32V_GPIOA_CFGLR
#define CH32V_GPIOE_CFGLR_MODE0   CH32V_GPIOA_CFGLR_MODE0
#define CH32V_GPIOE_CFGLR_MODE0_MASK CH32V_GPIOA_CFGLR_MODE0_MASK
#define CH32V_GPIOE_CFGLR_CNF0    CH32V_GPIOA_CFGLR_CNF0
#define CH32V_GPIOE_CFGLR_CNF0_MASK CH32V_GPIOA_CFGLR_CNF0_MASK
#define CH32V_GPIOE_CFGLR_MODE1   CH32V_GPIOA_CFGLR_MODE1
#define CH32V_GPIOE_CFGLR_MODE1_MASK CH32V_GPIOA_CFGLR_MODE1_MASK
#define CH32V_GPIOE_CFGLR_CNF1    CH32V_GPIOA_CFGLR_CNF1
#define CH32V_GPIOE_CFGLR_CNF1_MASK CH32V_GPIOA_CFGLR_CNF1_MASK
#define CH32V_GPIOE_CFGLR_MODE2   CH32V_GPIOA_CFGLR_MODE2
#define CH32V_GPIOE_CFGLR_MODE2_MASK CH32V_GPIOA_CFGLR_MODE2_MASK
#define CH32V_GPIOE_CFGLR_CNF2    CH32V_GPIOA_CFGLR_CNF2
#define CH32V_GPIOE_CFGLR_CNF2_MASK CH32V_GPIOA_CFGLR_CNF2_MASK
#define CH32V_GPIOE_CFGLR_MODE3   CH32V_GPIOA_CFGLR_MODE3
#define CH32V_GPIOE_CFGLR_MODE3_MASK CH32V_GPIOA_CFGLR_MODE3_MASK
#define CH32V_GPIOE_CFGLR_CNF3    CH32V_GPIOA_CFGLR_CNF3
#define CH32V_GPIOE_CFGLR_CNF3_MASK CH32V_GPIOA_CFGLR_CNF3_MASK
#define CH32V_GPIOE_CFGLR_MODE4   CH32V_GPIOA_CFGLR_MODE4
#define CH32V_GPIOE_CFGLR_MODE4_MASK CH32V_GPIOA_CFGLR_MODE4_MASK
#define CH32V_GPIOE_CFGLR_CNF4    CH32V_GPIOA_CFGLR_CNF4
#define CH32V_GPIOE_CFGLR_CNF4_MASK CH32V_GPIOA_CFGLR_CNF4_MASK
#define CH32V_GPIOE_CFGLR_MODE5   CH32V_GPIOA_CFGLR_MODE5
#define CH32V_GPIOE_CFGLR_MODE5_MASK CH32V_GPIOA_CFGLR_MODE5_MASK
#define CH32V_GPIOE_CFGLR_CNF5    CH32V_GPIOA_CFGLR_CNF5
#define CH32V_GPIOE_CFGLR_CNF5_MASK CH32V_GPIOA_CFGLR_CNF5_MASK
#define CH32V_GPIOE_CFGLR_MODE6   CH32V_GPIOA_CFGLR_MODE6
#define CH32V_GPIOE_CFGLR_MODE6_MASK CH32V_GPIOA_CFGLR_MODE6_MASK
#define CH32V_GPIOE_CFGLR_CNF6    CH32V_GPIOA_CFGLR_CNF6
#define CH32V_GPIOE_CFGLR_CNF6_MASK CH32V_GPIOA_CFGLR_CNF6_MASK
#define CH32V_GPIOE_CFGLR_MODE7   CH32V_GPIOA_CFGLR_MODE7
#define CH32V_GPIOE_CFGLR_MODE7_MASK CH32V_GPIOA_CFGLR_MODE7_MASK
#define CH32V_GPIOE_CFGLR_CNF7    CH32V_GPIOA_CFGLR_CNF7
#define CH32V_GPIOE_CFGLR_CNF7_MASK CH32V_GPIOA_CFGLR_CNF7_MASK
#define CH32V_GPIOE_CFGHR_OFFSET  CH32V_GPIOA_CFGHR_OFFSET
#define CH32V_GPIOE_CFGHR         CH32V_GPIOA_CFGHR
#define CH32V_GPIOE_CFGHR_MODE8   CH32V_GPIOA_CFGHR_MODE8
#define CH32V_GPIOE_CFGHR_MODE8_MASK CH32V_GPIOA_CFGHR_MODE8_MASK
#define CH32V_GPIOE_CFGHR_CNF8    CH32V_GPIOA_CFGHR_CNF8
#define CH32V_GPIOE_CFGHR_CNF8_MASK CH32V_GPIOA_CFGHR_CNF8_MASK
#define CH32V_GPIOE_CFGHR_MODE9   CH32V_GPIOA_CFGHR_MODE9
#define CH32V_GPIOE_CFGHR_MODE9_MASK CH32V_GPIOA_CFGHR_MODE9_MASK
#define CH32V_GPIOE_CFGHR_CNF9    CH32V_GPIOA_CFGHR_CNF9
#define CH32V_GPIOE_CFGHR_CNF9_MASK CH32V_GPIOA_CFGHR_CNF9_MASK
#define CH32V_GPIOE_CFGHR_MODE10  CH32V_GPIOA_CFGHR_MODE10
#define CH32V_GPIOE_CFGHR_MODE10_MASK CH32V_GPIOA_CFGHR_MODE10_MASK
#define CH32V_GPIOE_CFGHR_CNF10   CH32V_GPIOA_CFGHR_CNF10
#define CH32V_GPIOE_CFGHR_CNF10_MASK CH32V_GPIOA_CFGHR_CNF10_MASK
#define CH32V_GPIOE_CFGHR_MODE11  CH32V_GPIOA_CFGHR_MODE11
#define CH32V_GPIOE_CFGHR_MODE11_MASK CH32V_GPIOA_CFGHR_MODE11_MASK
#define CH32V_GPIOE_CFGHR_CNF11   CH32V_GPIOA_CFGHR_CNF11
#define CH32V_GPIOE_CFGHR_CNF11_MASK CH32V_GPIOA_CFGHR_CNF11_MASK
#define CH32V_GPIOE_CFGHR_MODE12  CH32V_GPIOA_CFGHR_MODE12
#define CH32V_GPIOE_CFGHR_MODE12_MASK CH32V_GPIOA_CFGHR_MODE12_MASK
#define CH32V_GPIOE_CFGHR_CNF12   CH32V_GPIOA_CFGHR_CNF12
#define CH32V_GPIOE_CFGHR_CNF12_MASK CH32V_GPIOA_CFGHR_CNF12_MASK
#define CH32V_GPIOE_CFGHR_MODE13  CH32V_GPIOA_CFGHR_MODE13
#define CH32V_GPIOE_CFGHR_MODE13_MASK CH32V_GPIOA_CFGHR_MODE13_MASK
#define CH32V_GPIOE_CFGHR_CNF13   CH32V_GPIOA_CFGHR_CNF13
#define CH32V_GPIOE_CFGHR_CNF13_MASK CH32V_GPIOA_CFGHR_CNF13_MASK
#define CH32V_GPIOE_CFGHR_MODE14  CH32V_GPIOA_CFGHR_MODE14
#define CH32V_GPIOE_CFGHR_MODE14_MASK CH32V_GPIOA_CFGHR_MODE14_MASK
#define CH32V_GPIOE_CFGHR_CNF14   CH32V_GPIOA_CFGHR_CNF14
#define CH32V_GPIOE_CFGHR_CNF14_MASK CH32V_GPIOA_CFGHR_CNF14_MASK
#define CH32V_GPIOE_CFGHR_MODE15  CH32V_GPIOA_CFGHR_MODE15
#define CH32V_GPIOE_CFGHR_MODE15_MASK CH32V_GPIOA_CFGHR_MODE15_MASK
#define CH32V_GPIOE_CFGHR_CNF15   CH32V_GPIOA_CFGHR_CNF15
#define CH32V_GPIOE_CFGHR_CNF15_MASK CH32V_GPIOA_CFGHR_CNF15_MASK
#define CH32V_GPIOE_INDR_OFFSET   CH32V_GPIOA_INDR_OFFSET
#define CH32V_GPIOE_INDR          CH32V_GPIOA_INDR
#define CH32V_GPIOE_INDR_IDR0     CH32V_GPIOA_INDR_IDR0
#define CH32V_GPIOE_INDR_IDR1     CH32V_GPIOA_INDR_IDR1
#define CH32V_GPIOE_INDR_IDR2     CH32V_GPIOA_INDR_IDR2
#define CH32V_GPIOE_INDR_IDR3     CH32V_GPIOA_INDR_IDR3
#define CH32V_GPIOE_INDR_IDR4     CH32V_GPIOA_INDR_IDR4
#define CH32V_GPIOE_INDR_IDR5     CH32V_GPIOA_INDR_IDR5
#define CH32V_GPIOE_INDR_IDR6     CH32V_GPIOA_INDR_IDR6
#define CH32V_GPIOE_INDR_IDR7     CH32V_GPIOA_INDR_IDR7
#define CH32V_GPIOE_INDR_IDR8     CH32V_GPIOA_INDR_IDR8
#define CH32V_GPIOE_INDR_IDR9     CH32V_GPIOA_INDR_IDR9
#define CH32V_GPIOE_INDR_IDR10    CH32V_GPIOA_INDR_IDR10
#define CH32V_GPIOE_INDR_IDR11    CH32V_GPIOA_INDR_IDR11
#define CH32V_GPIOE_INDR_IDR12    CH32V_GPIOA_INDR_IDR12
#define CH32V_GPIOE_INDR_IDR13    CH32V_GPIOA_INDR_IDR13
#define CH32V_GPIOE_INDR_IDR14    CH32V_GPIOA_INDR_IDR14
#define CH32V_GPIOE_INDR_IDR15    CH32V_GPIOA_INDR_IDR15
#define CH32V_GPIOE_OUTDR_OFFSET  CH32V_GPIOA_OUTDR_OFFSET
#define CH32V_GPIOE_OUTDR         CH32V_GPIOA_OUTDR
#define CH32V_GPIOE_OUTDR_ODR0    CH32V_GPIOA_OUTDR_ODR0
#define CH32V_GPIOE_OUTDR_ODR1    CH32V_GPIOA_OUTDR_ODR1
#define CH32V_GPIOE_OUTDR_ODR2    CH32V_GPIOA_OUTDR_ODR2
#define CH32V_GPIOE_OUTDR_ODR3    CH32V_GPIOA_OUTDR_ODR3
#define CH32V_GPIOE_OUTDR_ODR4    CH32V_GPIOA_OUTDR_ODR4
#define CH32V_GPIOE_OUTDR_ODR5    CH32V_GPIOA_OUTDR_ODR5
#define CH32V_GPIOE_OUTDR_ODR6    CH32V_GPIOA_OUTDR_ODR6
#define CH32V_GPIOE_OUTDR_ODR7    CH32V_GPIOA_OUTDR_ODR7
#define CH32V_GPIOE_OUTDR_ODR8    CH32V_GPIOA_OUTDR_ODR8
#define CH32V_GPIOE_OUTDR_ODR9    CH32V_GPIOA_OUTDR_ODR9
#define CH32V_GPIOE_OUTDR_ODR10   CH32V_GPIOA_OUTDR_ODR10
#define CH32V_GPIOE_OUTDR_ODR11   CH32V_GPIOA_OUTDR_ODR11
#define CH32V_GPIOE_OUTDR_ODR12   CH32V_GPIOA_OUTDR_ODR12
#define CH32V_GPIOE_OUTDR_ODR13   CH32V_GPIOA_OUTDR_ODR13
#define CH32V_GPIOE_OUTDR_ODR14   CH32V_GPIOA_OUTDR_ODR14
#define CH32V_GPIOE_OUTDR_ODR15   CH32V_GPIOA_OUTDR_ODR15
#define CH32V_GPIOE_BSHR_OFFSET   CH32V_GPIOA_BSHR_OFFSET
#define CH32V_GPIOE_BSHR          CH32V_GPIOA_BSHR
#define CH32V_GPIOE_BSHR_BS0      CH32V_GPIOA_BSHR_BS0
#define CH32V_GPIOE_BSHR_BS1      CH32V_GPIOA_BSHR_BS1
#define CH32V_GPIOE_BSHR_BS2      CH32V_GPIOA_BSHR_BS2
#define CH32V_GPIOE_BSHR_BS3      CH32V_GPIOA_BSHR_BS3
#define CH32V_GPIOE_BSHR_BS4      CH32V_GPIOA_BSHR_BS4
#define CH32V_GPIOE_BSHR_BS5      CH32V_GPIOA_BSHR_BS5
#define CH32V_GPIOE_BSHR_BS6      CH32V_GPIOA_BSHR_BS6
#define CH32V_GPIOE_BSHR_BS7      CH32V_GPIOA_BSHR_BS7
#define CH32V_GPIOE_BSHR_BS8      CH32V_GPIOA_BSHR_BS8
#define CH32V_GPIOE_BSHR_BS9      CH32V_GPIOA_BSHR_BS9
#define CH32V_GPIOE_BSHR_BS10     CH32V_GPIOA_BSHR_BS10
#define CH32V_GPIOE_BSHR_BS11     CH32V_GPIOA_BSHR_BS11
#define CH32V_GPIOE_BSHR_BS12     CH32V_GPIOA_BSHR_BS12
#define CH32V_GPIOE_BSHR_BS13     CH32V_GPIOA_BSHR_BS13
#define CH32V_GPIOE_BSHR_BS14     CH32V_GPIOA_BSHR_BS14
#define CH32V_GPIOE_BSHR_BS15     CH32V_GPIOA_BSHR_BS15
#define CH32V_GPIOE_BSHR_BR0      CH32V_GPIOA_BSHR_BR0
#define CH32V_GPIOE_BSHR_BR1      CH32V_GPIOA_BSHR_BR1
#define CH32V_GPIOE_BSHR_BR2      CH32V_GPIOA_BSHR_BR2
#define CH32V_GPIOE_BSHR_BR3      CH32V_GPIOA_BSHR_BR3
#define CH32V_GPIOE_BSHR_BR4      CH32V_GPIOA_BSHR_BR4
#define CH32V_GPIOE_BSHR_BR5      CH32V_GPIOA_BSHR_BR5
#define CH32V_GPIOE_BSHR_BR6      CH32V_GPIOA_BSHR_BR6
#define CH32V_GPIOE_BSHR_BR7      CH32V_GPIOA_BSHR_BR7
#define CH32V_GPIOE_BSHR_BR8      CH32V_GPIOA_BSHR_BR8
#define CH32V_GPIOE_BSHR_BR9      CH32V_GPIOA_BSHR_BR9
#define CH32V_GPIOE_BSHR_BR10     CH32V_GPIOA_BSHR_BR10
#define CH32V_GPIOE_BSHR_BR11     CH32V_GPIOA_BSHR_BR11
#define CH32V_GPIOE_BSHR_BR12     CH32V_GPIOA_BSHR_BR12
#define CH32V_GPIOE_BSHR_BR13     CH32V_GPIOA_BSHR_BR13
#define CH32V_GPIOE_BSHR_BR14     CH32V_GPIOA_BSHR_BR14
#define CH32V_GPIOE_BSHR_BR15     CH32V_GPIOA_BSHR_BR15
#define CH32V_GPIOE_BCR_OFFSET    CH32V_GPIOA_BCR_OFFSET
#define CH32V_GPIOE_BCR           CH32V_GPIOA_BCR
#define CH32V_GPIOE_BCR_BR0       CH32V_GPIOA_BCR_BR0
#define CH32V_GPIOE_BCR_BR1       CH32V_GPIOA_BCR_BR1
#define CH32V_GPIOE_BCR_BR2       CH32V_GPIOA_BCR_BR2
#define CH32V_GPIOE_BCR_BR3       CH32V_GPIOA_BCR_BR3
#define CH32V_GPIOE_BCR_BR4       CH32V_GPIOA_BCR_BR4
#define CH32V_GPIOE_BCR_BR5       CH32V_GPIOA_BCR_BR5
#define CH32V_GPIOE_BCR_BR6       CH32V_GPIOA_BCR_BR6
#define CH32V_GPIOE_BCR_BR7       CH32V_GPIOA_BCR_BR7
#define CH32V_GPIOE_BCR_BR8       CH32V_GPIOA_BCR_BR8
#define CH32V_GPIOE_BCR_BR9       CH32V_GPIOA_BCR_BR9
#define CH32V_GPIOE_BCR_BR10      CH32V_GPIOA_BCR_BR10
#define CH32V_GPIOE_BCR_BR11      CH32V_GPIOA_BCR_BR11
#define CH32V_GPIOE_BCR_BR12      CH32V_GPIOA_BCR_BR12
#define CH32V_GPIOE_BCR_BR13      CH32V_GPIOA_BCR_BR13
#define CH32V_GPIOE_BCR_BR14      CH32V_GPIOA_BCR_BR14
#define CH32V_GPIOE_BCR_BR15      CH32V_GPIOA_BCR_BR15
#define CH32V_GPIOE_LCKR_OFFSET   CH32V_GPIOA_LCKR_OFFSET
#define CH32V_GPIOE_LCKR          CH32V_GPIOA_LCKR
#define CH32V_GPIOE_LCKR_LCK0     CH32V_GPIOA_LCKR_LCK0
#define CH32V_GPIOE_LCKR_LCK1     CH32V_GPIOA_LCKR_LCK1
#define CH32V_GPIOE_LCKR_LCK2     CH32V_GPIOA_LCKR_LCK2
#define CH32V_GPIOE_LCKR_LCK3     CH32V_GPIOA_LCKR_LCK3
#define CH32V_GPIOE_LCKR_LCK4     CH32V_GPIOA_LCKR_LCK4
#define CH32V_GPIOE_LCKR_LCK5     CH32V_GPIOA_LCKR_LCK5
#define CH32V_GPIOE_LCKR_LCK6     CH32V_GPIOA_LCKR_LCK6
#define CH32V_GPIOE_LCKR_LCK7     CH32V_GPIOA_LCKR_LCK7
#define CH32V_GPIOE_LCKR_LCK8     CH32V_GPIOA_LCKR_LCK8
#define CH32V_GPIOE_LCKR_LCK9     CH32V_GPIOA_LCKR_LCK9
#define CH32V_GPIOE_LCKR_LCK10    CH32V_GPIOA_LCKR_LCK10
#define CH32V_GPIOE_LCKR_LCK11    CH32V_GPIOA_LCKR_LCK11
#define CH32V_GPIOE_LCKR_LCK12    CH32V_GPIOA_LCKR_LCK12
#define CH32V_GPIOE_LCKR_LCK13    CH32V_GPIOA_LCKR_LCK13
#define CH32V_GPIOE_LCKR_LCK14    CH32V_GPIOA_LCKR_LCK14
#define CH32V_GPIOE_LCKR_LCK15    CH32V_GPIOA_LCKR_LCK15
#define CH32V_GPIOE_LCKR_LCKK     CH32V_GPIOA_LCKR_LCKK

/* AFIO - Alternate function I/O */
#define CH32V_AFIO_BASE           0x40010000
#define CH32V_AFIO_ECR_OFFSET     0x0000
#define CH32V_AFIO_ECR            (CH32V_AFIO_BASE + CH32V_AFIO_ECR_OFFSET)
#define CH32V_AFIO_ECR_PIN        (4 <<  0) /* 01: Pin selection */
#define CH32V_AFIO_ECR_PIN_MASK        (0x0f)
#define CH32V_AFIO_ECR_PORT       (3 <<  4) /* 10: Port selection */
#define CH32V_AFIO_ECR_PORT_MASK       (0x07)
#define CH32V_AFIO_ECR_EVOE       (1 <<  7) /* 80: Event Output Enable */
#define CH32V_AFIO_PCFR_OFFSET    0x0004
#define CH32V_AFIO_PCFR           (CH32V_AFIO_BASE + CH32V_AFIO_PCFR_OFFSET)
#define CH32V_AFIO_PCFR_SPI1RM    (1 <<  0) /* 01: SPI1 remapping */
#define CH32V_AFIO_PCFR_I2C1RM    (1 <<  1) /* 02: I2C1 remapping */
#define CH32V_AFIO_PCFR_USART1RM  (1 <<  2) /* 04: USART1 remapping */
#define CH32V_AFIO_PCFR_USART2RM  (1 <<  3) /* 08: USART2 remapping */
#define CH32V_AFIO_PCFR_USART3RM  (2 <<  4) /* 10: USART3 remapping */
#define CH32V_AFIO_PCFR_USART3RM_MASK  (0x03)
#define CH32V_AFIO_PCFR_TIM1RM    (2 <<  6) /* 40: TIM1 remapping */
#define CH32V_AFIO_PCFR_TIM1RM_MASK    (0x03)
#define CH32V_AFIO_PCFR_TIM2RM    (2 <<  8) /* 100: TIM2 remapping */
#define CH32V_AFIO_PCFR_TIM2RM_MASK    (0x03)
#define CH32V_AFIO_PCFR_TIM3RM    (2 << 10) /* 400: TIM3 remapping */
#define CH32V_AFIO_PCFR_TIM3RM_MASK    (0x03)
#define CH32V_AFIO_PCFR_TIM4RM    (1 << 12) /* 1000: TIM4 remapping */
#define CH32V_AFIO_PCFR_CAN1RM    (2 << 13) /* 2000: CAN1 remapping */
#define CH32V_AFIO_PCFR_CAN1RM_MASK    (0x03)
#define CH32V_AFIO_PCFR_PD01RM    (1 << 15) /* 8000: Port D0/Port D1 mapping on OSCIN/OSCOUT */
#define CH32V_AFIO_PCFR_TIM5CH4RM (1 << 16) /* 10000: TIM5 channel4 internal remap */
#define CH32V_AFIO_PCFR_ADC1_ETRGINJ_RM (1 << 17) /* 20000: ADC 1 External trigger injected conversion remapping */
#define CH32V_AFIO_PCFR_ADC1_ETRGREG_RM (1 << 18) /* 40000: ADC 1 external trigger regular conversion remapping */
#define CH32V_AFIO_PCFR_ADC2_ETRGINJ_RM (1 << 19) /* 80000: ADC 2 External trigger injected conversion remapping */
#define CH32V_AFIO_PCFR_ADC2_ETRGREG_RM (1 << 20) /* 100000: ADC 2 external trigger regular conversion remapping */
#define CH32V_AFIO_PCFR_ETHRM     (1 << 21) /* 200000: Ethernet remapping */
#define CH32V_AFIO_PCFR_CAN2RM    (1 << 22) /* 400000: CAN2 remapping */
#define CH32V_AFIO_PCFR_MII_RMII_SEL (1 << 23) /* 800000: MII_RMII_SEL */
#define CH32V_AFIO_PCFR_SWCFG     (3 << 24) /* 1000000: Serial wire JTAG configuration */
#define CH32V_AFIO_PCFR_SWCFG_MASK     (0x07)
#define CH32V_AFIO_PCFR_SPI3_RM   (1 << 28) /* 10000000: SPI3 remapping */
#define CH32V_AFIO_PCFR_TIM2ITRA_RM (1 << 29) /* 20000000: TIM2 internally triggers 1 remapping */
#define CH32V_AFIO_PCFR_PTP_PPSP_RM (1 << 30) /* 40000000: Ethernet PTP_PPS remapping */
#define CH32V_AFIO_EXTICR1_OFFSET 0x0008
#define CH32V_AFIO_EXTICR1        (CH32V_AFIO_BASE + CH32V_AFIO_EXTICR1_OFFSET)
#define CH32V_AFIO_EXTICR1_EXTI0  (4 <<  0) /* 01: EXTI0 configuration */
#define CH32V_AFIO_EXTICR1_EXTI0_MASK  (0x0f)
#define CH32V_AFIO_EXTICR1_EXTI1  (4 <<  4) /* 10: EXTI1 configuration */
#define CH32V_AFIO_EXTICR1_EXTI1_MASK  (0x0f)
#define CH32V_AFIO_EXTICR1_EXTI2  (4 <<  8) /* 100: EXTI2 configuration */
#define CH32V_AFIO_EXTICR1_EXTI2_MASK  (0x0f)
#define CH32V_AFIO_EXTICR1_EXTI3  (4 << 12) /* 1000: EXTI3 configuration */
#define CH32V_AFIO_EXTICR1_EXTI3_MASK  (0x0f)
#define CH32V_AFIO_EXTICR2_OFFSET 0x000c
#define CH32V_AFIO_EXTICR2        (CH32V_AFIO_BASE + CH32V_AFIO_EXTICR2_OFFSET)
#define CH32V_AFIO_EXTICR2_EXTI4  (4 <<  0) /* 01: EXTI4 configuration */
#define CH32V_AFIO_EXTICR2_EXTI4_MASK  (0x0f)
#define CH32V_AFIO_EXTICR2_EXTI5  (4 <<  4) /* 10: EXTI5 configuration */
#define CH32V_AFIO_EXTICR2_EXTI5_MASK  (0x0f)
#define CH32V_AFIO_EXTICR2_EXTI6  (4 <<  8) /* 100: EXTI6 configuration */
#define CH32V_AFIO_EXTICR2_EXTI6_MASK  (0x0f)
#define CH32V_AFIO_EXTICR2_EXTI7  (4 << 12) /* 1000: EXTI7 configuration */
#define CH32V_AFIO_EXTICR2_EXTI7_MASK  (0x0f)
#define CH32V_AFIO_EXTICR3_OFFSET 0x0010
#define CH32V_AFIO_EXTICR3        (CH32V_AFIO_BASE + CH32V_AFIO_EXTICR3_OFFSET)
#define CH32V_AFIO_EXTICR3_EXTI8  (4 <<  0) /* 01: EXTI8 configuration */
#define CH32V_AFIO_EXTICR3_EXTI8_MASK  (0x0f)
#define CH32V_AFIO_EXTICR3_EXTI9  (4 <<  4) /* 10: EXTI9 configuration */
#define CH32V_AFIO_EXTICR3_EXTI9_MASK  (0x0f)
#define CH32V_AFIO_EXTICR3_EXTI10 (4 <<  8) /* 100: EXTI10 configuration */
#define CH32V_AFIO_EXTICR3_EXTI10_MASK (0x0f)
#define CH32V_AFIO_EXTICR3_EXTI11 (4 << 12) /* 1000: EXTI11 configuration */
#define CH32V_AFIO_EXTICR3_EXTI11_MASK (0x0f)
#define CH32V_AFIO_EXTICR4_OFFSET 0x0014
#define CH32V_AFIO_EXTICR4        (CH32V_AFIO_BASE + CH32V_AFIO_EXTICR4_OFFSET)
#define CH32V_AFIO_EXTICR4_EXTI12 (4 <<  0) /* 01: EXTI12 configuration */
#define CH32V_AFIO_EXTICR4_EXTI12_MASK (0x0f)
#define CH32V_AFIO_EXTICR4_EXTI13 (4 <<  4) /* 10: EXTI13 configuration */
#define CH32V_AFIO_EXTICR4_EXTI13_MASK (0x0f)
#define CH32V_AFIO_EXTICR4_EXTI14 (4 <<  8) /* 100: EXTI14 configuration */
#define CH32V_AFIO_EXTICR4_EXTI14_MASK (0x0f)
#define CH32V_AFIO_EXTICR4_EXTI15 (4 << 12) /* 1000: EXTI15 configuration */
#define CH32V_AFIO_EXTICR4_EXTI15_MASK (0x0f)
#define CH32V_AFIO_PCFR2_OFFSET   0x001c
#define CH32V_AFIO_PCFR2          (CH32V_AFIO_BASE + CH32V_AFIO_PCFR2_OFFSET)
#define CH32V_AFIO_PCFR2_TIM8_REMAP (1 <<  2) /* 04: TIM8 remapping */
#define CH32V_AFIO_PCFR2_TIM9_REMAP (2 <<  3) /* 08: TIM9 remapping */
#define CH32V_AFIO_PCFR2_TIM9_REMAP_MASK (0x03)
#define CH32V_AFIO_PCFR2_TIM10_REMAP (2 <<  5) /* 20: TIM10 remapping */
#define CH32V_AFIO_PCFR2_TIM10_REMAP_MASK (0x03)
#define CH32V_AFIO_PCFR2_FSMC_NADV (1 << 10) /* 400: FSMC_NADV */
#define CH32V_AFIO_PCFR2_UART4_REMAP (2 << 16) /* 10000: UART4 remapping */
#define CH32V_AFIO_PCFR2_UART4_REMAP_MASK (0x03)
#define CH32V_AFIO_PCFR2_UART5_REMAP (2 << 18) /* 40000: UART5 remapping */
#define CH32V_AFIO_PCFR2_UART5_REMAP_MASK (0x03)
#define CH32V_AFIO_PCFR2_UART6_REMAP (2 << 20) /* 100000: UART6 remapping */
#define CH32V_AFIO_PCFR2_UART6_REMAP_MASK (0x03)
#define CH32V_AFIO_PCFR2_UART7_REMAP (2 << 22) /* 400000: UART7 remapping */
#define CH32V_AFIO_PCFR2_UART7_REMAP_MASK (0x03)
#define CH32V_AFIO_PCFR2_UART8_REMAP (2 << 24) /* 1000000: UART8 remapping */
#define CH32V_AFIO_PCFR2_UART8_REMAP_MASK (0x03)
#define CH32V_AFIO_PCFR2_UART1_REMAP2 (1 << 26) /* 4000000: UART1 remapping */

/* EXTI - EXTI */
#define CH32V_EXTI_BASE           0x40010400
#define CH32V_EXTI_INTENR_OFFSET  0x0000
#define CH32V_EXTI_INTENR         (CH32V_EXTI_BASE + CH32V_EXTI_INTENR_OFFSET)
#define CH32V_EXTI_INTENR_MR0     (1 <<  0) /* 01: Interrupt Mask on line 0 */
#define CH32V_EXTI_INTENR_MR1     (1 <<  1) /* 02: Interrupt Mask on line 1 */
#define CH32V_EXTI_INTENR_MR2     (1 <<  2) /* 04: Interrupt Mask on line 2 */
#define CH32V_EXTI_INTENR_MR3     (1 <<  3) /* 08: Interrupt Mask on line 3 */
#define CH32V_EXTI_INTENR_MR4     (1 <<  4) /* 10: Interrupt Mask on line 4 */
#define CH32V_EXTI_INTENR_MR5     (1 <<  5) /* 20: Interrupt Mask on line 5 */
#define CH32V_EXTI_INTENR_MR6     (1 <<  6) /* 40: Interrupt Mask on line 6 */
#define CH32V_EXTI_INTENR_MR7     (1 <<  7) /* 80: Interrupt Mask on line 7 */
#define CH32V_EXTI_INTENR_MR8     (1 <<  8) /* 100: Interrupt Mask on line 8 */
#define CH32V_EXTI_INTENR_MR9     (1 <<  9) /* 200: Interrupt Mask on line 9 */
#define CH32V_EXTI_INTENR_MR10    (1 << 10) /* 400: Interrupt Mask on line 10 */
#define CH32V_EXTI_INTENR_MR11    (1 << 11) /* 800: Interrupt Mask on line 11 */
#define CH32V_EXTI_INTENR_MR12    (1 << 12) /* 1000: Interrupt Mask on line 12 */
#define CH32V_EXTI_INTENR_MR13    (1 << 13) /* 2000: Interrupt Mask on line 13 */
#define CH32V_EXTI_INTENR_MR14    (1 << 14) /* 4000: Interrupt Mask on line 14 */
#define CH32V_EXTI_INTENR_MR15    (1 << 15) /* 8000: Interrupt Mask on line 15 */
#define CH32V_EXTI_INTENR_MR16    (1 << 16) /* 10000: Interrupt Mask on line 16 */
#define CH32V_EXTI_INTENR_MR17    (1 << 17) /* 20000: Interrupt Mask on line 17 */
#define CH32V_EXTI_INTENR_MR18    (1 << 18) /* 40000: Interrupt Mask on line 18 */
#define CH32V_EXTI_INTENR_MR19    (1 << 19) /* 80000: Interrupt Mask on line 19 */
#define CH32V_EXTI_EVENR_OFFSET   0x0004
#define CH32V_EXTI_EVENR          (CH32V_EXTI_BASE + CH32V_EXTI_EVENR_OFFSET)
#define CH32V_EXTI_EVENR_MR0      (1 <<  0) /* 01: Event Mask on line 0 */
#define CH32V_EXTI_EVENR_MR1      (1 <<  1) /* 02: Event Mask on line 1 */
#define CH32V_EXTI_EVENR_MR2      (1 <<  2) /* 04: Event Mask on line 2 */
#define CH32V_EXTI_EVENR_MR3      (1 <<  3) /* 08: Event Mask on line 3 */
#define CH32V_EXTI_EVENR_MR4      (1 <<  4) /* 10: Event Mask on line 4 */
#define CH32V_EXTI_EVENR_MR5      (1 <<  5) /* 20: Event Mask on line 5 */
#define CH32V_EXTI_EVENR_MR6      (1 <<  6) /* 40: Event Mask on line 6 */
#define CH32V_EXTI_EVENR_MR7      (1 <<  7) /* 80: Event Mask on line 7 */
#define CH32V_EXTI_EVENR_MR8      (1 <<  8) /* 100: Event Mask on line 8 */
#define CH32V_EXTI_EVENR_MR9      (1 <<  9) /* 200: Event Mask on line 9 */
#define CH32V_EXTI_EVENR_MR10     (1 << 10) /* 400: Event Mask on line 10 */
#define CH32V_EXTI_EVENR_MR11     (1 << 11) /* 800: Event Mask on line 11 */
#define CH32V_EXTI_EVENR_MR12     (1 << 12) /* 1000: Event Mask on line 12 */
#define CH32V_EXTI_EVENR_MR13     (1 << 13) /* 2000: Event Mask on line 13 */
#define CH32V_EXTI_EVENR_MR14     (1 << 14) /* 4000: Event Mask on line 14 */
#define CH32V_EXTI_EVENR_MR15     (1 << 15) /* 8000: Event Mask on line 15 */
#define CH32V_EXTI_EVENR_MR16     (1 << 16) /* 10000: Event Mask on line 16 */
#define CH32V_EXTI_EVENR_MR17     (1 << 17) /* 20000: Event Mask on line 17 */
#define CH32V_EXTI_EVENR_MR18     (1 << 18) /* 40000: Event Mask on line 18 */
#define CH32V_EXTI_EVENR_MR19     (1 << 19) /* 80000: Event Mask on line 19 */
#define CH32V_EXTI_RTENR_OFFSET   0x0008
#define CH32V_EXTI_RTENR          (CH32V_EXTI_BASE + CH32V_EXTI_RTENR_OFFSET)
#define CH32V_EXTI_RTENR_TR0      (1 <<  0) /* 01: Rising trigger event configuration of line 0 */
#define CH32V_EXTI_RTENR_TR1      (1 <<  1) /* 02: Rising trigger event configuration of line 1 */
#define CH32V_EXTI_RTENR_TR2      (1 <<  2) /* 04: Rising trigger event configuration of line 2 */
#define CH32V_EXTI_RTENR_TR3      (1 <<  3) /* 08: Rising trigger event configuration of line 3 */
#define CH32V_EXTI_RTENR_TR4      (1 <<  4) /* 10: Rising trigger event configuration of line 4 */
#define CH32V_EXTI_RTENR_TR5      (1 <<  5) /* 20: Rising trigger event configuration of line 5 */
#define CH32V_EXTI_RTENR_TR6      (1 <<  6) /* 40: Rising trigger event configuration of line 6 */
#define CH32V_EXTI_RTENR_TR7      (1 <<  7) /* 80: Rising trigger event configuration of line 7 */
#define CH32V_EXTI_RTENR_TR8      (1 <<  8) /* 100: Rising trigger event configuration of line 8 */
#define CH32V_EXTI_RTENR_TR9      (1 <<  9) /* 200: Rising trigger event configuration of line 9 */
#define CH32V_EXTI_RTENR_TR10     (1 << 10) /* 400: Rising trigger event configuration of line 10 */
#define CH32V_EXTI_RTENR_TR11     (1 << 11) /* 800: Rising trigger event configuration of line 11 */
#define CH32V_EXTI_RTENR_TR12     (1 << 12) /* 1000: Rising trigger event configuration of line 12 */
#define CH32V_EXTI_RTENR_TR13     (1 << 13) /* 2000: Rising trigger event configuration of line 13 */
#define CH32V_EXTI_RTENR_TR14     (1 << 14) /* 4000: Rising trigger event configuration of line 14 */
#define CH32V_EXTI_RTENR_TR15     (1 << 15) /* 8000: Rising trigger event configuration of line 15 */
#define CH32V_EXTI_RTENR_TR16     (1 << 16) /* 10000: Rising trigger event configuration of line 16 */
#define CH32V_EXTI_RTENR_TR17     (1 << 17) /* 20000: Rising trigger event configuration of line 17 */
#define CH32V_EXTI_RTENR_TR18     (1 << 18) /* 40000: Rising trigger event configuration of line 18 */
#define CH32V_EXTI_RTENR_TR19     (1 << 19) /* 80000: Rising trigger event configuration of line 19 */
#define CH32V_EXTI_FTENR_OFFSET   0x000c
#define CH32V_EXTI_FTENR          (CH32V_EXTI_BASE + CH32V_EXTI_FTENR_OFFSET)
#define CH32V_EXTI_FTENR_TR0      (1 <<  0) /* 01: Falling trigger event configuration of line 0 */
#define CH32V_EXTI_FTENR_TR1      (1 <<  1) /* 02: Falling trigger event configuration of line 1 */
#define CH32V_EXTI_FTENR_TR2      (1 <<  2) /* 04: Falling trigger event configuration of line 2 */
#define CH32V_EXTI_FTENR_TR3      (1 <<  3) /* 08: Falling trigger event configuration of line 3 */
#define CH32V_EXTI_FTENR_TR4      (1 <<  4) /* 10: Falling trigger event configuration of line 4 */
#define CH32V_EXTI_FTENR_TR5      (1 <<  5) /* 20: Falling trigger event configuration of line 5 */
#define CH32V_EXTI_FTENR_TR6      (1 <<  6) /* 40: Falling trigger event configuration of line 6 */
#define CH32V_EXTI_FTENR_TR7      (1 <<  7) /* 80: Falling trigger event configuration of line 7 */
#define CH32V_EXTI_FTENR_TR8      (1 <<  8) /* 100: Falling trigger event configuration of line 8 */
#define CH32V_EXTI_FTENR_TR9      (1 <<  9) /* 200: Falling trigger event configuration of line 9 */
#define CH32V_EXTI_FTENR_TR10     (1 << 10) /* 400: Falling trigger event configuration of line 10 */
#define CH32V_EXTI_FTENR_TR11     (1 << 11) /* 800: Falling trigger event configuration of line 11 */
#define CH32V_EXTI_FTENR_TR12     (1 << 12) /* 1000: Falling trigger event configuration of line 12 */
#define CH32V_EXTI_FTENR_TR13     (1 << 13) /* 2000: Falling trigger event configuration of line 13 */
#define CH32V_EXTI_FTENR_TR14     (1 << 14) /* 4000: Falling trigger event configuration of line 14 */
#define CH32V_EXTI_FTENR_TR15     (1 << 15) /* 8000: Falling trigger event configuration of line 15 */
#define CH32V_EXTI_FTENR_TR16     (1 << 16) /* 10000: Falling trigger event configuration of line 16 */
#define CH32V_EXTI_FTENR_TR17     (1 << 17) /* 20000: Falling trigger event configuration of line 17 */
#define CH32V_EXTI_FTENR_TR18     (1 << 18) /* 40000: Falling trigger event configuration of line 18 */
#define CH32V_EXTI_FTENR_TR19     (1 << 19) /* 80000: Falling trigger event configuration of line 19 */
#define CH32V_EXTI_SWIEVR_OFFSET  0x0010
#define CH32V_EXTI_SWIEVR         (CH32V_EXTI_BASE + CH32V_EXTI_SWIEVR_OFFSET)
#define CH32V_EXTI_SWIEVR_SWIER0  (1 <<  0) /* 01: Software Interrupt on line 0 */
#define CH32V_EXTI_SWIEVR_SWIER1  (1 <<  1) /* 02: Software Interrupt on line 1 */
#define CH32V_EXTI_SWIEVR_SWIER2  (1 <<  2) /* 04: Software Interrupt on line 2 */
#define CH32V_EXTI_SWIEVR_SWIER3  (1 <<  3) /* 08: Software Interrupt on line 3 */
#define CH32V_EXTI_SWIEVR_SWIER4  (1 <<  4) /* 10: Software Interrupt on line 4 */
#define CH32V_EXTI_SWIEVR_SWIER5  (1 <<  5) /* 20: Software Interrupt on line 5 */
#define CH32V_EXTI_SWIEVR_SWIER6  (1 <<  6) /* 40: Software Interrupt on line 6 */
#define CH32V_EXTI_SWIEVR_SWIER7  (1 <<  7) /* 80: Software Interrupt on line 7 */
#define CH32V_EXTI_SWIEVR_SWIER8  (1 <<  8) /* 100: Software Interrupt on line 8 */
#define CH32V_EXTI_SWIEVR_SWIER9  (1 <<  9) /* 200: Software Interrupt on line 9 */
#define CH32V_EXTI_SWIEVR_SWIER10 (1 << 10) /* 400: Software Interrupt on line 10 */
#define CH32V_EXTI_SWIEVR_SWIER11 (1 << 11) /* 800: Software Interrupt on line 11 */
#define CH32V_EXTI_SWIEVR_SWIER12 (1 << 12) /* 1000: Software Interrupt on line 12 */
#define CH32V_EXTI_SWIEVR_SWIER13 (1 << 13) /* 2000: Software Interrupt on line 13 */
#define CH32V_EXTI_SWIEVR_SWIER14 (1 << 14) /* 4000: Software Interrupt on line 14 */
#define CH32V_EXTI_SWIEVR_SWIER15 (1 << 15) /* 8000: Software Interrupt on line 15 */
#define CH32V_EXTI_SWIEVR_SWIER16 (1 << 16) /* 10000: Software Interrupt on line 16 */
#define CH32V_EXTI_SWIEVR_SWIER17 (1 << 17) /* 20000: Software Interrupt on line 17 */
#define CH32V_EXTI_SWIEVR_SWIER18 (1 << 18) /* 40000: Software Interrupt on line 18 */
#define CH32V_EXTI_SWIEVR_SWIER19 (1 << 19) /* 80000: Software Interrupt on line 19 */
#define CH32V_EXTI_INTFR_OFFSET   0x0014
#define CH32V_EXTI_INTFR          (CH32V_EXTI_BASE + CH32V_EXTI_INTFR_OFFSET)
#define CH32V_EXTI_INTFR_PR0      (1 <<  0) /* 01: Pending bit 0 */
#define CH32V_EXTI_INTFR_PR1      (1 <<  1) /* 02: Pending bit 1 */
#define CH32V_EXTI_INTFR_PR2      (1 <<  2) /* 04: Pending bit 2 */
#define CH32V_EXTI_INTFR_PR3      (1 <<  3) /* 08: Pending bit 3 */
#define CH32V_EXTI_INTFR_PR4      (1 <<  4) /* 10: Pending bit 4 */
#define CH32V_EXTI_INTFR_PR5      (1 <<  5) /* 20: Pending bit 5 */
#define CH32V_EXTI_INTFR_PR6      (1 <<  6) /* 40: Pending bit 6 */
#define CH32V_EXTI_INTFR_PR7      (1 <<  7) /* 80: Pending bit 7 */
#define CH32V_EXTI_INTFR_PR8      (1 <<  8) /* 100: Pending bit 8 */
#define CH32V_EXTI_INTFR_PR9      (1 <<  9) /* 200: Pending bit 9 */
#define CH32V_EXTI_INTFR_PR10     (1 << 10) /* 400: Pending bit 10 */
#define CH32V_EXTI_INTFR_PR11     (1 << 11) /* 800: Pending bit 11 */
#define CH32V_EXTI_INTFR_PR12     (1 << 12) /* 1000: Pending bit 12 */
#define CH32V_EXTI_INTFR_PR13     (1 << 13) /* 2000: Pending bit 13 */
#define CH32V_EXTI_INTFR_PR14     (1 << 14) /* 4000: Pending bit 14 */
#define CH32V_EXTI_INTFR_PR15     (1 << 15) /* 8000: Pending bit 15 */
#define CH32V_EXTI_INTFR_PR16     (1 << 16) /* 10000: Pending bit 16 */
#define CH32V_EXTI_INTFR_PR17     (1 << 17) /* 20000: Pending bit 17 */
#define CH32V_EXTI_INTFR_PR18     (1 << 18) /* 40000: Pending bit 18 */
#define CH32V_EXTI_INTFR_PR19     (1 << 19) /* 80000: Pending bit 19 */

/* DMA1 - DMA1 controller */
#define CH32V_DMA1_BASE           0x40020000
#define CH32V_DMA1_INTFR_OFFSET   0x0000
#define CH32V_DMA1_INTFR          (CH32V_DMA1_BASE + CH32V_DMA1_INTFR_OFFSET)
#define CH32V_DMA1_INTFR_GIF1     (1 <<  0) /* 01: Channel 1 Global interrupt flag */
#define CH32V_DMA1_INTFR_TCIF1    (1 <<  1) /* 02: Channel 1 Transfer Complete flag */
#define CH32V_DMA1_INTFR_HTIF1    (1 <<  2) /* 04: Channel 1 Half Transfer Complete flag */
#define CH32V_DMA1_INTFR_TEIF1    (1 <<  3) /* 08: Channel 1 Transfer Error flag */
#define CH32V_DMA1_INTFR_GIF2     (1 <<  4) /* 10: Channel 2 Global interrupt flag */
#define CH32V_DMA1_INTFR_TCIF2    (1 <<  5) /* 20: Channel 2 Transfer Complete flag */
#define CH32V_DMA1_INTFR_HTIF2    (1 <<  6) /* 40: Channel 2 Half Transfer Complete flag */
#define CH32V_DMA1_INTFR_TEIF2    (1 <<  7) /* 80: Channel 2 Transfer Error flag */
#define CH32V_DMA1_INTFR_GIF3     (1 <<  8) /* 100: Channel 3 Global interrupt flag */
#define CH32V_DMA1_INTFR_TCIF3    (1 <<  9) /* 200: Channel 3 Transfer Complete flag */
#define CH32V_DMA1_INTFR_HTIF3    (1 << 10) /* 400: Channel 3 Half Transfer Complete flag */
#define CH32V_DMA1_INTFR_TEIF3    (1 << 11) /* 800: Channel 3 Transfer Error flag */
#define CH32V_DMA1_INTFR_GIF4     (1 << 12) /* 1000: Channel 4 Global interrupt flag */
#define CH32V_DMA1_INTFR_TCIF4    (1 << 13) /* 2000: Channel 4 Transfer Complete flag */
#define CH32V_DMA1_INTFR_HTIF4    (1 << 14) /* 4000: Channel 4 Half Transfer Complete flag */
#define CH32V_DMA1_INTFR_TEIF4    (1 << 15) /* 8000: Channel 4 Transfer Error flag */
#define CH32V_DMA1_INTFR_GIF5     (1 << 16) /* 10000: Channel 5 Global interrupt flag */
#define CH32V_DMA1_INTFR_TCIF5    (1 << 17) /* 20000: Channel 5 Transfer Complete flag */
#define CH32V_DMA1_INTFR_HTIF5    (1 << 18) /* 40000: Channel 5 Half Transfer Complete flag */
#define CH32V_DMA1_INTFR_TEIF5    (1 << 19) /* 80000: Channel 5 Transfer Error flag */
#define CH32V_DMA1_INTFR_GIF6     (1 << 20) /* 100000: Channel 6 Global interrupt flag */
#define CH32V_DMA1_INTFR_TCIF6    (1 << 21) /* 200000: Channel 6 Transfer Complete flag */
#define CH32V_DMA1_INTFR_HTIF6    (1 << 22) /* 400000: Channel 6 Half Transfer Complete flag */
#define CH32V_DMA1_INTFR_TEIF6    (1 << 23) /* 800000: Channel 6 Transfer Error flag */
#define CH32V_DMA1_INTFR_GIF7     (1 << 24) /* 1000000: Channel 7 Global interrupt flag */
#define CH32V_DMA1_INTFR_TCIF7    (1 << 25) /* 2000000: Channel 7 Transfer Complete flag */
#define CH32V_DMA1_INTFR_HTIF7    (1 << 26) /* 4000000: Channel 7 Half Transfer Complete flag */
#define CH32V_DMA1_INTFR_TEIF7    (1 << 27) /* 8000000: Channel 7 Transfer Error flag */
#define CH32V_DMA1_INTFCR_OFFSET  0x0004
#define CH32V_DMA1_INTFCR         (CH32V_DMA1_BASE + CH32V_DMA1_INTFCR_OFFSET)
#define CH32V_DMA1_INTFCR_CGIF1   (1 <<  0) /* 01: Channel 1 Global interrupt clear */
#define CH32V_DMA1_INTFCR_CGIF2   (1 <<  4) /* 10: Channel 2 Global interrupt clear */
#define CH32V_DMA1_INTFCR_CGIF3   (1 <<  8) /* 100: Channel 3 Global interrupt clear */
#define CH32V_DMA1_INTFCR_CGIF4   (1 << 12) /* 1000: Channel 4 Global interrupt clear */
#define CH32V_DMA1_INTFCR_CGIF5   (1 << 16) /* 10000: Channel 5 Global interrupt clear */
#define CH32V_DMA1_INTFCR_CGIF6   (1 << 20) /* 100000: Channel 6 Global interrupt clear */
#define CH32V_DMA1_INTFCR_CGIF7   (1 << 24) /* 1000000: Channel 7 Global interrupt clear */
#define CH32V_DMA1_INTFCR_CTCIF1  (1 <<  1) /* 02: Channel 1 Transfer Complete clear */
#define CH32V_DMA1_INTFCR_CTCIF2  (1 <<  5) /* 20: Channel 2 Transfer Complete clear */
#define CH32V_DMA1_INTFCR_CTCIF3  (1 <<  9) /* 200: Channel 3 Transfer Complete clear */
#define CH32V_DMA1_INTFCR_CTCIF4  (1 << 13) /* 2000: Channel 4 Transfer Complete clear */
#define CH32V_DMA1_INTFCR_CTCIF5  (1 << 17) /* 20000: Channel 5 Transfer Complete clear */
#define CH32V_DMA1_INTFCR_CTCIF6  (1 << 21) /* 200000: Channel 6 Transfer Complete clear */
#define CH32V_DMA1_INTFCR_CTCIF7  (1 << 25) /* 2000000: Channel 7 Transfer Complete clear */
#define CH32V_DMA1_INTFCR_CHTIF1  (1 <<  2) /* 04: Channel 1 Half Transfer clear */
#define CH32V_DMA1_INTFCR_CHTIF2  (1 <<  6) /* 40: Channel 2 Half Transfer clear */
#define CH32V_DMA1_INTFCR_CHTIF3  (1 << 10) /* 400: Channel 3 Half Transfer clear */
#define CH32V_DMA1_INTFCR_CHTIF4  (1 << 14) /* 4000: Channel 4 Half Transfer clear */
#define CH32V_DMA1_INTFCR_CHTIF5  (1 << 18) /* 40000: Channel 5 Half Transfer clear */
#define CH32V_DMA1_INTFCR_CHTIF6  (1 << 22) /* 400000: Channel 6 Half Transfer clear */
#define CH32V_DMA1_INTFCR_CHTIF7  (1 << 26) /* 4000000: Channel 7 Half Transfer clear */
#define CH32V_DMA1_INTFCR_CTEIF1  (1 <<  3) /* 08: Channel 1 Transfer Error clear */
#define CH32V_DMA1_INTFCR_CTEIF2  (1 <<  7) /* 80: Channel 2 Transfer Error clear */
#define CH32V_DMA1_INTFCR_CTEIF3  (1 << 11) /* 800: Channel 3 Transfer Error clear */
#define CH32V_DMA1_INTFCR_CTEIF4  (1 << 15) /* 8000: Channel 4 Transfer Error clear */
#define CH32V_DMA1_INTFCR_CTEIF5  (1 << 19) /* 80000: Channel 5 Transfer Error clear */
#define CH32V_DMA1_INTFCR_CTEIF6  (1 << 23) /* 800000: Channel 6 Transfer Error clear */
#define CH32V_DMA1_INTFCR_CTEIF7  (1 << 27) /* 8000000: Channel 7 Transfer Error clear */
#define CH32V_DMA1_CFGR1_OFFSET   0x0008
#define CH32V_DMA1_CFGR1          (CH32V_DMA1_BASE + CH32V_DMA1_CFGR1_OFFSET)
#define CH32V_DMA1_CFGR1_EN       (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA1_CFGR1_TCIE     (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA1_CFGR1_HTIE     (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA1_CFGR1_TEIE     (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA1_CFGR1_DIR      (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA1_CFGR1_CIRC     (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA1_CFGR1_PINC     (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA1_CFGR1_MINC     (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA1_CFGR1_PSIZE    (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA1_CFGR1_PSIZE_MASK    (0x03)
#define CH32V_DMA1_CFGR1_MSIZE    (2 << 10) /* 400: Memory size */
#define CH32V_DMA1_CFGR1_MSIZE_MASK    (0x03)
#define CH32V_DMA1_CFGR1_PL       (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA1_CFGR1_PL_MASK       (0x03)
#define CH32V_DMA1_CFGR1_MEM2MEM  (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA1_CNTR1_OFFSET   0x000c
#define CH32V_DMA1_CNTR1          (CH32V_DMA1_BASE + CH32V_DMA1_CNTR1_OFFSET)
#define CH32V_DMA1_CNTR1_NDT      (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA1_CNTR1_NDT_MASK      (0xffff)
#define CH32V_DMA1_PADDR1_OFFSET  0x0010
#define CH32V_DMA1_PADDR1         (CH32V_DMA1_BASE + CH32V_DMA1_PADDR1_OFFSET)
#define CH32V_DMA1_PADDR1_PA      (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA1_PADDR1_PA_MASK      (0xffffffff)
#define CH32V_DMA1_MADDR1_OFFSET  0x0014
#define CH32V_DMA1_MADDR1         (CH32V_DMA1_BASE + CH32V_DMA1_MADDR1_OFFSET)
#define CH32V_DMA1_MADDR1_MA      (32 <<  0) /* 01: Memory address */
#define CH32V_DMA1_MADDR1_MA_MASK      (0xffffffff)
#define CH32V_DMA1_CFGR2_OFFSET   0x001c
#define CH32V_DMA1_CFGR2          (CH32V_DMA1_BASE + CH32V_DMA1_CFGR2_OFFSET)
#define CH32V_DMA1_CFGR2_EN       (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA1_CFGR2_TCIE     (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA1_CFGR2_HTIE     (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA1_CFGR2_TEIE     (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA1_CFGR2_DIR      (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA1_CFGR2_CIRC     (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA1_CFGR2_PINC     (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA1_CFGR2_MINC     (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA1_CFGR2_PSIZE    (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA1_CFGR2_PSIZE_MASK    (0x03)
#define CH32V_DMA1_CFGR2_MSIZE    (2 << 10) /* 400: Memory size */
#define CH32V_DMA1_CFGR2_MSIZE_MASK    (0x03)
#define CH32V_DMA1_CFGR2_PL       (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA1_CFGR2_PL_MASK       (0x03)
#define CH32V_DMA1_CFGR2_MEM2MEM  (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA1_CNTR2_OFFSET   0x0020
#define CH32V_DMA1_CNTR2          (CH32V_DMA1_BASE + CH32V_DMA1_CNTR2_OFFSET)
#define CH32V_DMA1_CNTR2_NDT      (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA1_CNTR2_NDT_MASK      (0xffff)
#define CH32V_DMA1_PADDR2_OFFSET  0x0024
#define CH32V_DMA1_PADDR2         (CH32V_DMA1_BASE + CH32V_DMA1_PADDR2_OFFSET)
#define CH32V_DMA1_PADDR2_PA      (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA1_PADDR2_PA_MASK      (0xffffffff)
#define CH32V_DMA1_MADDR2_OFFSET  0x0028
#define CH32V_DMA1_MADDR2         (CH32V_DMA1_BASE + CH32V_DMA1_MADDR2_OFFSET)
#define CH32V_DMA1_MADDR2_MA      (32 <<  0) /* 01: Memory address */
#define CH32V_DMA1_MADDR2_MA_MASK      (0xffffffff)
#define CH32V_DMA1_CFGR3_OFFSET   0x0030
#define CH32V_DMA1_CFGR3          (CH32V_DMA1_BASE + CH32V_DMA1_CFGR3_OFFSET)
#define CH32V_DMA1_CFGR3_EN       (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA1_CFGR3_TCIE     (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA1_CFGR3_HTIE     (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA1_CFGR3_TEIE     (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA1_CFGR3_DIR      (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA1_CFGR3_CIRC     (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA1_CFGR3_PINC     (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA1_CFGR3_MINC     (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA1_CFGR3_PSIZE    (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA1_CFGR3_PSIZE_MASK    (0x03)
#define CH32V_DMA1_CFGR3_MSIZE    (2 << 10) /* 400: Memory size */
#define CH32V_DMA1_CFGR3_MSIZE_MASK    (0x03)
#define CH32V_DMA1_CFGR3_PL       (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA1_CFGR3_PL_MASK       (0x03)
#define CH32V_DMA1_CFGR3_MEM2MEM  (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA1_CNTR3_OFFSET   0x0034
#define CH32V_DMA1_CNTR3          (CH32V_DMA1_BASE + CH32V_DMA1_CNTR3_OFFSET)
#define CH32V_DMA1_CNTR3_NDT      (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA1_CNTR3_NDT_MASK      (0xffff)
#define CH32V_DMA1_PADDR3_OFFSET  0x0038
#define CH32V_DMA1_PADDR3         (CH32V_DMA1_BASE + CH32V_DMA1_PADDR3_OFFSET)
#define CH32V_DMA1_PADDR3_PA      (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA1_PADDR3_PA_MASK      (0xffffffff)
#define CH32V_DMA1_MADDR3_OFFSET  0x003c
#define CH32V_DMA1_MADDR3         (CH32V_DMA1_BASE + CH32V_DMA1_MADDR3_OFFSET)
#define CH32V_DMA1_MADDR3_MA      (32 <<  0) /* 01: Memory address */
#define CH32V_DMA1_MADDR3_MA_MASK      (0xffffffff)
#define CH32V_DMA1_CFGR4_OFFSET   0x0044
#define CH32V_DMA1_CFGR4          (CH32V_DMA1_BASE + CH32V_DMA1_CFGR4_OFFSET)
#define CH32V_DMA1_CFGR4_EN       (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA1_CFGR4_TCIE     (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA1_CFGR4_HTIE     (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA1_CFGR4_TEIE     (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA1_CFGR4_DIR      (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA1_CFGR4_CIRC     (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA1_CFGR4_PINC     (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA1_CFGR4_MINC     (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA1_CFGR4_PSIZE    (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA1_CFGR4_PSIZE_MASK    (0x03)
#define CH32V_DMA1_CFGR4_MSIZE    (2 << 10) /* 400: Memory size */
#define CH32V_DMA1_CFGR4_MSIZE_MASK    (0x03)
#define CH32V_DMA1_CFGR4_PL       (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA1_CFGR4_PL_MASK       (0x03)
#define CH32V_DMA1_CFGR4_MEM2MEM  (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA1_CNTR4_OFFSET   0x0048
#define CH32V_DMA1_CNTR4          (CH32V_DMA1_BASE + CH32V_DMA1_CNTR4_OFFSET)
#define CH32V_DMA1_CNTR4_NDT      (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA1_CNTR4_NDT_MASK      (0xffff)
#define CH32V_DMA1_PADDR4_OFFSET  0x004c
#define CH32V_DMA1_PADDR4         (CH32V_DMA1_BASE + CH32V_DMA1_PADDR4_OFFSET)
#define CH32V_DMA1_PADDR4_PA      (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA1_PADDR4_PA_MASK      (0xffffffff)
#define CH32V_DMA1_MADDR4_OFFSET  0x0050
#define CH32V_DMA1_MADDR4         (CH32V_DMA1_BASE + CH32V_DMA1_MADDR4_OFFSET)
#define CH32V_DMA1_MADDR4_MA      (32 <<  0) /* 01: Memory address */
#define CH32V_DMA1_MADDR4_MA_MASK      (0xffffffff)
#define CH32V_DMA1_CFGR5_OFFSET   0x0058
#define CH32V_DMA1_CFGR5          (CH32V_DMA1_BASE + CH32V_DMA1_CFGR5_OFFSET)
#define CH32V_DMA1_CFGR5_EN       (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA1_CFGR5_TCIE     (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA1_CFGR5_HTIE     (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA1_CFGR5_TEIE     (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA1_CFGR5_DIR      (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA1_CFGR5_CIRC     (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA1_CFGR5_PINC     (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA1_CFGR5_MINC     (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA1_CFGR5_PSIZE    (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA1_CFGR5_PSIZE_MASK    (0x03)
#define CH32V_DMA1_CFGR5_MSIZE    (2 << 10) /* 400: Memory size */
#define CH32V_DMA1_CFGR5_MSIZE_MASK    (0x03)
#define CH32V_DMA1_CFGR5_PL       (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA1_CFGR5_PL_MASK       (0x03)
#define CH32V_DMA1_CFGR5_MEM2MEM  (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA1_CNTR5_OFFSET   0x005c
#define CH32V_DMA1_CNTR5          (CH32V_DMA1_BASE + CH32V_DMA1_CNTR5_OFFSET)
#define CH32V_DMA1_CNTR5_NDT      (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA1_CNTR5_NDT_MASK      (0xffff)
#define CH32V_DMA1_PADDR5_OFFSET  0x0060
#define CH32V_DMA1_PADDR5         (CH32V_DMA1_BASE + CH32V_DMA1_PADDR5_OFFSET)
#define CH32V_DMA1_PADDR5_PA      (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA1_PADDR5_PA_MASK      (0xffffffff)
#define CH32V_DMA1_MADDR5_OFFSET  0x0064
#define CH32V_DMA1_MADDR5         (CH32V_DMA1_BASE + CH32V_DMA1_MADDR5_OFFSET)
#define CH32V_DMA1_MADDR5_MA      (32 <<  0) /* 01: Memory address */
#define CH32V_DMA1_MADDR5_MA_MASK      (0xffffffff)
#define CH32V_DMA1_CFGR6_OFFSET   0x006c
#define CH32V_DMA1_CFGR6          (CH32V_DMA1_BASE + CH32V_DMA1_CFGR6_OFFSET)
#define CH32V_DMA1_CFGR6_EN       (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA1_CFGR6_TCIE     (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA1_CFGR6_HTIE     (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA1_CFGR6_TEIE     (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA1_CFGR6_DIR      (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA1_CFGR6_CIRC     (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA1_CFGR6_PINC     (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA1_CFGR6_MINC     (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA1_CFGR6_PSIZE    (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA1_CFGR6_PSIZE_MASK    (0x03)
#define CH32V_DMA1_CFGR6_MSIZE    (2 << 10) /* 400: Memory size */
#define CH32V_DMA1_CFGR6_MSIZE_MASK    (0x03)
#define CH32V_DMA1_CFGR6_PL       (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA1_CFGR6_PL_MASK       (0x03)
#define CH32V_DMA1_CFGR6_MEM2MEM  (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA1_CNTR6_OFFSET   0x0070
#define CH32V_DMA1_CNTR6          (CH32V_DMA1_BASE + CH32V_DMA1_CNTR6_OFFSET)
#define CH32V_DMA1_CNTR6_NDT      (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA1_CNTR6_NDT_MASK      (0xffff)
#define CH32V_DMA1_PADDR6_OFFSET  0x0074
#define CH32V_DMA1_PADDR6         (CH32V_DMA1_BASE + CH32V_DMA1_PADDR6_OFFSET)
#define CH32V_DMA1_PADDR6_PA      (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA1_PADDR6_PA_MASK      (0xffffffff)
#define CH32V_DMA1_MADDR6_OFFSET  0x0078
#define CH32V_DMA1_MADDR6         (CH32V_DMA1_BASE + CH32V_DMA1_MADDR6_OFFSET)
#define CH32V_DMA1_MADDR6_MA      (32 <<  0) /* 01: Memory address */
#define CH32V_DMA1_MADDR6_MA_MASK      (0xffffffff)
#define CH32V_DMA1_CFGR7_OFFSET   0x0080
#define CH32V_DMA1_CFGR7          (CH32V_DMA1_BASE + CH32V_DMA1_CFGR7_OFFSET)
#define CH32V_DMA1_CFGR7_EN       (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA1_CFGR7_TCIE     (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA1_CFGR7_HTIE     (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA1_CFGR7_TEIE     (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA1_CFGR7_DIR      (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA1_CFGR7_CIRC     (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA1_CFGR7_PINC     (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA1_CFGR7_MINC     (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA1_CFGR7_PSIZE    (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA1_CFGR7_PSIZE_MASK    (0x03)
#define CH32V_DMA1_CFGR7_MSIZE    (2 << 10) /* 400: Memory size */
#define CH32V_DMA1_CFGR7_MSIZE_MASK    (0x03)
#define CH32V_DMA1_CFGR7_PL       (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA1_CFGR7_PL_MASK       (0x03)
#define CH32V_DMA1_CFGR7_MEM2MEM  (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA1_CNTR7_OFFSET   0x0084
#define CH32V_DMA1_CNTR7          (CH32V_DMA1_BASE + CH32V_DMA1_CNTR7_OFFSET)
#define CH32V_DMA1_CNTR7_NDT      (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA1_CNTR7_NDT_MASK      (0xffff)
#define CH32V_DMA1_PADDR7_OFFSET  0x0088
#define CH32V_DMA1_PADDR7         (CH32V_DMA1_BASE + CH32V_DMA1_PADDR7_OFFSET)
#define CH32V_DMA1_PADDR7_PA      (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA1_PADDR7_PA_MASK      (0xffffffff)
#define CH32V_DMA1_MADDR7_OFFSET  0x008c
#define CH32V_DMA1_MADDR7         (CH32V_DMA1_BASE + CH32V_DMA1_MADDR7_OFFSET)
#define CH32V_DMA1_MADDR7_MA      (32 <<  0) /* 01: Memory address */
#define CH32V_DMA1_MADDR7_MA_MASK      (0xffffffff)

/* DMA2 - DMA2 controller */
#define CH32V_DMA2_BASE           0x40020400
#define CH32V_DMA2_INTFR_OFFSET   0x0000
#define CH32V_DMA2_INTFR          (CH32V_DMA2_BASE + CH32V_DMA2_INTFR_OFFSET)
#define CH32V_DMA2_INTFR_GIF1     (1 <<  0) /* 01: Channel 1 Global interrupt flag */
#define CH32V_DMA2_INTFR_TCIF1    (1 <<  1) /* 02: Channel 1 Transfer Complete flag */
#define CH32V_DMA2_INTFR_HTIF1    (1 <<  2) /* 04: Channel 1 Half Transfer Complete flag */
#define CH32V_DMA2_INTFR_TEIF1    (1 <<  3) /* 08: Channel 1 Transfer Error flag */
#define CH32V_DMA2_INTFR_GIF2     (1 <<  4) /* 10: Channel 2 Global interrupt flag */
#define CH32V_DMA2_INTFR_TCIF2    (1 <<  5) /* 20: Channel 2 Transfer Complete flag */
#define CH32V_DMA2_INTFR_HTIF2    (1 <<  6) /* 40: Channel 2 Half Transfer Complete flag */
#define CH32V_DMA2_INTFR_TEIF2    (1 <<  7) /* 80: Channel 2 Transfer Error flag */
#define CH32V_DMA2_INTFR_GIF3     (1 <<  8) /* 100: Channel 3 Global interrupt flag */
#define CH32V_DMA2_INTFR_TCIF3    (1 <<  9) /* 200: Channel 3 Transfer Complete flag */
#define CH32V_DMA2_INTFR_HTIF3    (1 << 10) /* 400: Channel 3 Half Transfer Complete flag */
#define CH32V_DMA2_INTFR_TEIF3    (1 << 11) /* 800: Channel 3 Transfer Error flag */
#define CH32V_DMA2_INTFR_GIF4     (1 << 12) /* 1000: Channel 4 Global interrupt flag */
#define CH32V_DMA2_INTFR_TCIF4    (1 << 13) /* 2000: Channel 4 Transfer Complete flag */
#define CH32V_DMA2_INTFR_HTIF4    (1 << 14) /* 4000: Channel 4 Half Transfer Complete flag */
#define CH32V_DMA2_INTFR_TEIF4    (1 << 15) /* 8000: Channel 4 Transfer Error flag */
#define CH32V_DMA2_INTFR_GIF5     (1 << 16) /* 10000: Channel 5 Global interrupt flag */
#define CH32V_DMA2_INTFR_TCIF5    (1 << 17) /* 20000: Channel 5 Transfer Complete flag */
#define CH32V_DMA2_INTFR_HTIF5    (1 << 18) /* 40000: Channel 5 Half Transfer Complete flag */
#define CH32V_DMA2_INTFR_TEIF5    (1 << 19) /* 80000: Channel 5 Transfer Error flag */
#define CH32V_DMA2_INTFR_GIF6     (1 << 20) /* 100000: Channel 6 Global interrupt flag */
#define CH32V_DMA2_INTFR_TCIF6    (1 << 21) /* 200000: Channel 6 Transfer Complete flag */
#define CH32V_DMA2_INTFR_HTIF6    (1 << 22) /* 400000: Channel 6 Half Transfer Complete flag */
#define CH32V_DMA2_INTFR_TEIF6    (1 << 23) /* 800000: Channel 6 Transfer Error flag */
#define CH32V_DMA2_INTFR_GIF7     (1 << 24) /* 1000000: Channel 7 Global interrupt flag */
#define CH32V_DMA2_INTFR_TCIF7    (1 << 25) /* 2000000: Channel 7 Transfer Complete flag */
#define CH32V_DMA2_INTFR_HTIF7    (1 << 26) /* 4000000: Channel 7 Half Transfer Complete flag */
#define CH32V_DMA2_INTFR_TEIF7    (1 << 27) /* 8000000: Channel 7 Transfer Error flag */
#define CH32V_DMA2_INTFCR_OFFSET  0x0004
#define CH32V_DMA2_INTFCR         (CH32V_DMA2_BASE + CH32V_DMA2_INTFCR_OFFSET)
#define CH32V_DMA2_INTFCR_CGIF1   (1 <<  0) /* 01: Channel 1 Global interrupt clear */
#define CH32V_DMA2_INTFCR_CGIF2   (1 <<  4) /* 10: Channel 2 Global interrupt clear */
#define CH32V_DMA2_INTFCR_CGIF3   (1 <<  8) /* 100: Channel 3 Global interrupt clear */
#define CH32V_DMA2_INTFCR_CGIF4   (1 << 12) /* 1000: Channel 4 Global interrupt clear */
#define CH32V_DMA2_INTFCR_CGIF5   (1 << 16) /* 10000: Channel 5 Global interrupt clear */
#define CH32V_DMA2_INTFCR_CGIF6   (1 << 20) /* 100000: Channel 6 Global interrupt clear */
#define CH32V_DMA2_INTFCR_CGIF7   (1 << 24) /* 1000000: Channel 7 Global interrupt clear */
#define CH32V_DMA2_INTFCR_CTCIF1  (1 <<  1) /* 02: Channel 1 Transfer Complete clear */
#define CH32V_DMA2_INTFCR_CTCIF2  (1 <<  5) /* 20: Channel 2 Transfer Complete clear */
#define CH32V_DMA2_INTFCR_CTCIF3  (1 <<  9) /* 200: Channel 3 Transfer Complete clear */
#define CH32V_DMA2_INTFCR_CTCIF4  (1 << 13) /* 2000: Channel 4 Transfer Complete clear */
#define CH32V_DMA2_INTFCR_CTCIF5  (1 << 17) /* 20000: Channel 5 Transfer Complete clear */
#define CH32V_DMA2_INTFCR_CTCIF6  (1 << 21) /* 200000: Channel 6 Transfer Complete clear */
#define CH32V_DMA2_INTFCR_CTCIF7  (1 << 25) /* 2000000: Channel 7 Transfer Complete clear */
#define CH32V_DMA2_INTFCR_CHTIF1  (1 <<  2) /* 04: Channel 1 Half Transfer clear */
#define CH32V_DMA2_INTFCR_CHTIF2  (1 <<  6) /* 40: Channel 2 Half Transfer clear */
#define CH32V_DMA2_INTFCR_CHTIF3  (1 << 10) /* 400: Channel 3 Half Transfer clear */
#define CH32V_DMA2_INTFCR_CHTIF4  (1 << 14) /* 4000: Channel 4 Half Transfer clear */
#define CH32V_DMA2_INTFCR_CHTIF5  (1 << 18) /* 40000: Channel 5 Half Transfer clear */
#define CH32V_DMA2_INTFCR_CHTIF6  (1 << 22) /* 400000: Channel 6 Half Transfer clear */
#define CH32V_DMA2_INTFCR_CHTIF7  (1 << 26) /* 4000000: Channel 7 Half Transfer clear */
#define CH32V_DMA2_INTFCR_CTEIF1  (1 <<  3) /* 08: Channel 1 Transfer Error clear */
#define CH32V_DMA2_INTFCR_CTEIF2  (1 <<  7) /* 80: Channel 2 Transfer Error clear */
#define CH32V_DMA2_INTFCR_CTEIF3  (1 << 11) /* 800: Channel 3 Transfer Error clear */
#define CH32V_DMA2_INTFCR_CTEIF4  (1 << 15) /* 8000: Channel 4 Transfer Error clear */
#define CH32V_DMA2_INTFCR_CTEIF5  (1 << 19) /* 80000: Channel 5 Transfer Error clear */
#define CH32V_DMA2_INTFCR_CTEIF6  (1 << 23) /* 800000: Channel 6 Transfer Error clear */
#define CH32V_DMA2_INTFCR_CTEIF7  (1 << 27) /* 8000000: Channel 7 Transfer Error clear */
#define CH32V_DMA2_CFGR1_OFFSET   0x0008
#define CH32V_DMA2_CFGR1          (CH32V_DMA2_BASE + CH32V_DMA2_CFGR1_OFFSET)
#define CH32V_DMA2_CFGR1_EN       (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA2_CFGR1_TCIE     (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA2_CFGR1_HTIE     (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA2_CFGR1_TEIE     (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA2_CFGR1_DIR      (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA2_CFGR1_CIRC     (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA2_CFGR1_PINC     (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA2_CFGR1_MINC     (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA2_CFGR1_PSIZE    (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA2_CFGR1_PSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR1_MSIZE    (2 << 10) /* 400: Memory size */
#define CH32V_DMA2_CFGR1_MSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR1_PL       (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA2_CFGR1_PL_MASK       (0x03)
#define CH32V_DMA2_CFGR1_MEM2MEM  (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA2_CNTR1_OFFSET   0x000c
#define CH32V_DMA2_CNTR1          (CH32V_DMA2_BASE + CH32V_DMA2_CNTR1_OFFSET)
#define CH32V_DMA2_CNTR1_NDT      (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA2_CNTR1_NDT_MASK      (0xffff)
#define CH32V_DMA2_PADDR1_OFFSET  0x0010
#define CH32V_DMA2_PADDR1         (CH32V_DMA2_BASE + CH32V_DMA2_PADDR1_OFFSET)
#define CH32V_DMA2_PADDR1_PA      (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA2_PADDR1_PA_MASK      (0xffffffff)
#define CH32V_DMA2_MADDR1_OFFSET  0x0014
#define CH32V_DMA2_MADDR1         (CH32V_DMA2_BASE + CH32V_DMA2_MADDR1_OFFSET)
#define CH32V_DMA2_MADDR1_MA      (32 <<  0) /* 01: Memory address */
#define CH32V_DMA2_MADDR1_MA_MASK      (0xffffffff)
#define CH32V_DMA2_CFGR2_OFFSET   0x001c
#define CH32V_DMA2_CFGR2          (CH32V_DMA2_BASE + CH32V_DMA2_CFGR2_OFFSET)
#define CH32V_DMA2_CFGR2_EN       (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA2_CFGR2_TCIE     (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA2_CFGR2_HTIE     (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA2_CFGR2_TEIE     (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA2_CFGR2_DIR      (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA2_CFGR2_CIRC     (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA2_CFGR2_PINC     (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA2_CFGR2_MINC     (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA2_CFGR2_PSIZE    (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA2_CFGR2_PSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR2_MSIZE    (2 << 10) /* 400: Memory size */
#define CH32V_DMA2_CFGR2_MSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR2_PL       (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA2_CFGR2_PL_MASK       (0x03)
#define CH32V_DMA2_CFGR2_MEM2MEM  (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA2_CNTR2_OFFSET   0x0020
#define CH32V_DMA2_CNTR2          (CH32V_DMA2_BASE + CH32V_DMA2_CNTR2_OFFSET)
#define CH32V_DMA2_CNTR2_NDT      (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA2_CNTR2_NDT_MASK      (0xffff)
#define CH32V_DMA2_PADDR2_OFFSET  0x0024
#define CH32V_DMA2_PADDR2         (CH32V_DMA2_BASE + CH32V_DMA2_PADDR2_OFFSET)
#define CH32V_DMA2_PADDR2_PA      (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA2_PADDR2_PA_MASK      (0xffffffff)
#define CH32V_DMA2_MADDR2_OFFSET  0x0028
#define CH32V_DMA2_MADDR2         (CH32V_DMA2_BASE + CH32V_DMA2_MADDR2_OFFSET)
#define CH32V_DMA2_MADDR2_MA      (32 <<  0) /* 01: Memory address */
#define CH32V_DMA2_MADDR2_MA_MASK      (0xffffffff)
#define CH32V_DMA2_CFGR3_OFFSET   0x0030
#define CH32V_DMA2_CFGR3          (CH32V_DMA2_BASE + CH32V_DMA2_CFGR3_OFFSET)
#define CH32V_DMA2_CFGR3_EN       (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA2_CFGR3_TCIE     (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA2_CFGR3_HTIE     (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA2_CFGR3_TEIE     (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA2_CFGR3_DIR      (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA2_CFGR3_CIRC     (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA2_CFGR3_PINC     (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA2_CFGR3_MINC     (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA2_CFGR3_PSIZE    (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA2_CFGR3_PSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR3_MSIZE    (2 << 10) /* 400: Memory size */
#define CH32V_DMA2_CFGR3_MSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR3_PL       (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA2_CFGR3_PL_MASK       (0x03)
#define CH32V_DMA2_CFGR3_MEM2MEM  (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA2_CNTR3_OFFSET   0x0034
#define CH32V_DMA2_CNTR3          (CH32V_DMA2_BASE + CH32V_DMA2_CNTR3_OFFSET)
#define CH32V_DMA2_CNTR3_NDT      (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA2_CNTR3_NDT_MASK      (0xffff)
#define CH32V_DMA2_PADDR3_OFFSET  0x0038
#define CH32V_DMA2_PADDR3         (CH32V_DMA2_BASE + CH32V_DMA2_PADDR3_OFFSET)
#define CH32V_DMA2_PADDR3_PA      (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA2_PADDR3_PA_MASK      (0xffffffff)
#define CH32V_DMA2_MADDR3_OFFSET  0x003c
#define CH32V_DMA2_MADDR3         (CH32V_DMA2_BASE + CH32V_DMA2_MADDR3_OFFSET)
#define CH32V_DMA2_MADDR3_MA      (32 <<  0) /* 01: Memory address */
#define CH32V_DMA2_MADDR3_MA_MASK      (0xffffffff)
#define CH32V_DMA2_CFGR4_OFFSET   0x0044
#define CH32V_DMA2_CFGR4          (CH32V_DMA2_BASE + CH32V_DMA2_CFGR4_OFFSET)
#define CH32V_DMA2_CFGR4_EN       (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA2_CFGR4_TCIE     (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA2_CFGR4_HTIE     (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA2_CFGR4_TEIE     (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA2_CFGR4_DIR      (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA2_CFGR4_CIRC     (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA2_CFGR4_PINC     (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA2_CFGR4_MINC     (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA2_CFGR4_PSIZE    (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA2_CFGR4_PSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR4_MSIZE    (2 << 10) /* 400: Memory size */
#define CH32V_DMA2_CFGR4_MSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR4_PL       (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA2_CFGR4_PL_MASK       (0x03)
#define CH32V_DMA2_CFGR4_MEM2MEM  (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA2_CNTR4_OFFSET   0x0048
#define CH32V_DMA2_CNTR4          (CH32V_DMA2_BASE + CH32V_DMA2_CNTR4_OFFSET)
#define CH32V_DMA2_CNTR4_NDT      (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA2_CNTR4_NDT_MASK      (0xffff)
#define CH32V_DMA2_PADDR4_OFFSET  0x004c
#define CH32V_DMA2_PADDR4         (CH32V_DMA2_BASE + CH32V_DMA2_PADDR4_OFFSET)
#define CH32V_DMA2_PADDR4_PA      (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA2_PADDR4_PA_MASK      (0xffffffff)
#define CH32V_DMA2_MADDR4_OFFSET  0x0050
#define CH32V_DMA2_MADDR4         (CH32V_DMA2_BASE + CH32V_DMA2_MADDR4_OFFSET)
#define CH32V_DMA2_MADDR4_MA      (32 <<  0) /* 01: Memory address */
#define CH32V_DMA2_MADDR4_MA_MASK      (0xffffffff)
#define CH32V_DMA2_CFGR5_OFFSET   0x0058
#define CH32V_DMA2_CFGR5          (CH32V_DMA2_BASE + CH32V_DMA2_CFGR5_OFFSET)
#define CH32V_DMA2_CFGR5_EN       (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA2_CFGR5_TCIE     (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA2_CFGR5_HTIE     (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA2_CFGR5_TEIE     (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA2_CFGR5_DIR      (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA2_CFGR5_CIRC     (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA2_CFGR5_PINC     (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA2_CFGR5_MINC     (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA2_CFGR5_PSIZE    (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA2_CFGR5_PSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR5_MSIZE    (2 << 10) /* 400: Memory size */
#define CH32V_DMA2_CFGR5_MSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR5_PL       (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA2_CFGR5_PL_MASK       (0x03)
#define CH32V_DMA2_CFGR5_MEM2MEM  (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA2_CNTR5_OFFSET   0x005c
#define CH32V_DMA2_CNTR5          (CH32V_DMA2_BASE + CH32V_DMA2_CNTR5_OFFSET)
#define CH32V_DMA2_CNTR5_NDT      (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA2_CNTR5_NDT_MASK      (0xffff)
#define CH32V_DMA2_PADDR5_OFFSET  0x0060
#define CH32V_DMA2_PADDR5         (CH32V_DMA2_BASE + CH32V_DMA2_PADDR5_OFFSET)
#define CH32V_DMA2_PADDR5_PA      (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA2_PADDR5_PA_MASK      (0xffffffff)
#define CH32V_DMA2_MADDR5_OFFSET  0x0064
#define CH32V_DMA2_MADDR5         (CH32V_DMA2_BASE + CH32V_DMA2_MADDR5_OFFSET)
#define CH32V_DMA2_MADDR5_MA      (32 <<  0) /* 01: Memory address */
#define CH32V_DMA2_MADDR5_MA_MASK      (0xffffffff)
#define CH32V_DMA2_CFGR6_OFFSET   0x006c
#define CH32V_DMA2_CFGR6          (CH32V_DMA2_BASE + CH32V_DMA2_CFGR6_OFFSET)
#define CH32V_DMA2_CFGR6_EN       (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA2_CFGR6_TCIE     (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA2_CFGR6_HTIE     (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA2_CFGR6_TEIE     (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA2_CFGR6_DIR      (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA2_CFGR6_CIRC     (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA2_CFGR6_PINC     (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA2_CFGR6_MINC     (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA2_CFGR6_PSIZE    (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA2_CFGR6_PSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR6_MSIZE    (2 << 10) /* 400: Memory size */
#define CH32V_DMA2_CFGR6_MSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR6_PL       (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA2_CFGR6_PL_MASK       (0x03)
#define CH32V_DMA2_CFGR6_MEM2MEM  (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA2_CNTR6_OFFSET   0x0070
#define CH32V_DMA2_CNTR6          (CH32V_DMA2_BASE + CH32V_DMA2_CNTR6_OFFSET)
#define CH32V_DMA2_CNTR6_NDT      (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA2_CNTR6_NDT_MASK      (0xffff)
#define CH32V_DMA2_PADDR6_OFFSET  0x0074
#define CH32V_DMA2_PADDR6         (CH32V_DMA2_BASE + CH32V_DMA2_PADDR6_OFFSET)
#define CH32V_DMA2_PADDR6_PA      (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA2_PADDR6_PA_MASK      (0xffffffff)
#define CH32V_DMA2_MADDR6_OFFSET  0x0078
#define CH32V_DMA2_MADDR6         (CH32V_DMA2_BASE + CH32V_DMA2_MADDR6_OFFSET)
#define CH32V_DMA2_MADDR6_MA      (32 <<  0) /* 01: Memory address */
#define CH32V_DMA2_MADDR6_MA_MASK      (0xffffffff)
#define CH32V_DMA2_CFGR7_OFFSET   0x0080
#define CH32V_DMA2_CFGR7          (CH32V_DMA2_BASE + CH32V_DMA2_CFGR7_OFFSET)
#define CH32V_DMA2_CFGR7_EN       (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA2_CFGR7_TCIE     (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA2_CFGR7_HTIE     (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA2_CFGR7_TEIE     (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA2_CFGR7_DIR      (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA2_CFGR7_CIRC     (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA2_CFGR7_PINC     (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA2_CFGR7_MINC     (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA2_CFGR7_PSIZE    (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA2_CFGR7_PSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR7_MSIZE    (2 << 10) /* 400: Memory size */
#define CH32V_DMA2_CFGR7_MSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR7_PL       (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA2_CFGR7_PL_MASK       (0x03)
#define CH32V_DMA2_CFGR7_MEM2MEM  (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA2_CNTR7_OFFSET   0x0084
#define CH32V_DMA2_CNTR7          (CH32V_DMA2_BASE + CH32V_DMA2_CNTR7_OFFSET)
#define CH32V_DMA2_CNTR7_NDT      (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA2_CNTR7_NDT_MASK      (0xffff)
#define CH32V_DMA2_PADDR7_OFFSET  0x0088
#define CH32V_DMA2_PADDR7         (CH32V_DMA2_BASE + CH32V_DMA2_PADDR7_OFFSET)
#define CH32V_DMA2_PADDR7_PA      (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA2_PADDR7_PA_MASK      (0xffffffff)
#define CH32V_DMA2_MADDR7_OFFSET  0x008c
#define CH32V_DMA2_MADDR7         (CH32V_DMA2_BASE + CH32V_DMA2_MADDR7_OFFSET)
#define CH32V_DMA2_MADDR7_MA      (32 <<  0) /* 01: Memory address */
#define CH32V_DMA2_MADDR7_MA_MASK      (0xffffffff)
#define CH32V_DMA2_CFGR8_OFFSET   0x0090
#define CH32V_DMA2_CFGR8          (CH32V_DMA2_BASE + CH32V_DMA2_CFGR8_OFFSET)
#define CH32V_DMA2_CFGR8_EN       (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA2_CFGR8_TCIE     (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA2_CFGR8_HTIE     (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA2_CFGR8_TEIE     (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA2_CFGR8_DIR      (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA2_CFGR8_CIRC     (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA2_CFGR8_PINC     (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA2_CFGR8_MINC     (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA2_CFGR8_PSIZE    (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA2_CFGR8_PSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR8_MSIZE    (2 << 10) /* 400: Memory size */
#define CH32V_DMA2_CFGR8_MSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR8_PL       (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA2_CFGR8_PL_MASK       (0x03)
#define CH32V_DMA2_CFGR8_MEM2MEM  (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA2_CNTR8_OFFSET   0x0094
#define CH32V_DMA2_CNTR8          (CH32V_DMA2_BASE + CH32V_DMA2_CNTR8_OFFSET)
#define CH32V_DMA2_CNTR8_NDT      (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA2_CNTR8_NDT_MASK      (0xffff)
#define CH32V_DMA2_PADDR8_OFFSET  0x0098
#define CH32V_DMA2_PADDR8         (CH32V_DMA2_BASE + CH32V_DMA2_PADDR8_OFFSET)
#define CH32V_DMA2_PADDR8_PA      (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA2_PADDR8_PA_MASK      (0xffffffff)
#define CH32V_DMA2_MADDR8_OFFSET  0x009c
#define CH32V_DMA2_MADDR8         (CH32V_DMA2_BASE + CH32V_DMA2_MADDR8_OFFSET)
#define CH32V_DMA2_MADDR8_MA      (32 <<  0) /* 01: Memory address */
#define CH32V_DMA2_MADDR8_MA_MASK      (0xffffffff)
#define CH32V_DMA2_CFGR9_OFFSET   0x00a0
#define CH32V_DMA2_CFGR9          (CH32V_DMA2_BASE + CH32V_DMA2_CFGR9_OFFSET)
#define CH32V_DMA2_CFGR9_EN       (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA2_CFGR9_TCIE     (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA2_CFGR9_HTIE     (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA2_CFGR9_TEIE     (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA2_CFGR9_DIR      (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA2_CFGR9_CIRC     (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA2_CFGR9_PINC     (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA2_CFGR9_MINC     (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA2_CFGR9_PSIZE    (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA2_CFGR9_PSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR9_MSIZE    (2 << 10) /* 400: Memory size */
#define CH32V_DMA2_CFGR9_MSIZE_MASK    (0x03)
#define CH32V_DMA2_CFGR9_PL       (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA2_CFGR9_PL_MASK       (0x03)
#define CH32V_DMA2_CFGR9_MEM2MEM  (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA2_CNTR9_OFFSET   0x00a4
#define CH32V_DMA2_CNTR9          (CH32V_DMA2_BASE + CH32V_DMA2_CNTR9_OFFSET)
#define CH32V_DMA2_CNTR9_NDT      (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA2_CNTR9_NDT_MASK      (0xffff)
#define CH32V_DMA2_PADDR9_OFFSET  0x00a8
#define CH32V_DMA2_PADDR9         (CH32V_DMA2_BASE + CH32V_DMA2_PADDR9_OFFSET)
#define CH32V_DMA2_PADDR9_PA      (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA2_PADDR9_PA_MASK      (0xffffffff)
#define CH32V_DMA2_MADDR9_OFFSET  0x00ac
#define CH32V_DMA2_MADDR9         (CH32V_DMA2_BASE + CH32V_DMA2_MADDR9_OFFSET)
#define CH32V_DMA2_MADDR9_MA      (32 <<  0) /* 01: Memory address */
#define CH32V_DMA2_MADDR9_MA_MASK      (0xffffffff)
#define CH32V_DMA2_CFGR10_OFFSET  0x00b0
#define CH32V_DMA2_CFGR10         (CH32V_DMA2_BASE + CH32V_DMA2_CFGR10_OFFSET)
#define CH32V_DMA2_CFGR10_EN      (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA2_CFGR10_TCIE    (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA2_CFGR10_HTIE    (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA2_CFGR10_TEIE    (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA2_CFGR10_DIR     (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA2_CFGR10_CIRC    (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA2_CFGR10_PINC    (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA2_CFGR10_MINC    (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA2_CFGR10_PSIZE   (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA2_CFGR10_PSIZE_MASK   (0x03)
#define CH32V_DMA2_CFGR10_MSIZE   (2 << 10) /* 400: Memory size */
#define CH32V_DMA2_CFGR10_MSIZE_MASK   (0x03)
#define CH32V_DMA2_CFGR10_PL      (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA2_CFGR10_PL_MASK      (0x03)
#define CH32V_DMA2_CFGR10_MEM2MEM (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA2_CNTR10_OFFSET  0x00b4
#define CH32V_DMA2_CNTR10         (CH32V_DMA2_BASE + CH32V_DMA2_CNTR10_OFFSET)
#define CH32V_DMA2_CNTR10_NDT     (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA2_CNTR10_NDT_MASK     (0xffff)
#define CH32V_DMA2_PADDR10_OFFSET 0x00b8
#define CH32V_DMA2_PADDR10        (CH32V_DMA2_BASE + CH32V_DMA2_PADDR10_OFFSET)
#define CH32V_DMA2_PADDR10_PA     (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA2_PADDR10_PA_MASK     (0xffffffff)
#define CH32V_DMA2_MADDR10_OFFSET 0x00bc
#define CH32V_DMA2_MADDR10        (CH32V_DMA2_BASE + CH32V_DMA2_MADDR10_OFFSET)
#define CH32V_DMA2_MADDR10_MA     (32 <<  0) /* 01: Memory address */
#define CH32V_DMA2_MADDR10_MA_MASK     (0xffffffff)
#define CH32V_DMA2_CFGR11_OFFSET  0x00c0
#define CH32V_DMA2_CFGR11         (CH32V_DMA2_BASE + CH32V_DMA2_CFGR11_OFFSET)
#define CH32V_DMA2_CFGR11_EN      (1 <<  0) /* 01: Channel enable */
#define CH32V_DMA2_CFGR11_TCIE    (1 <<  1) /* 02: Transfer complete interrupt enable */
#define CH32V_DMA2_CFGR11_HTIE    (1 <<  2) /* 04: Half Transfer interrupt enable */
#define CH32V_DMA2_CFGR11_TEIE    (1 <<  3) /* 08: Transfer error interrupt enable */
#define CH32V_DMA2_CFGR11_DIR     (1 <<  4) /* 10: Data transfer direction */
#define CH32V_DMA2_CFGR11_CIRC    (1 <<  5) /* 20: Circular mode */
#define CH32V_DMA2_CFGR11_PINC    (1 <<  6) /* 40: Peripheral increment mode */
#define CH32V_DMA2_CFGR11_MINC    (1 <<  7) /* 80: Memory increment mode */
#define CH32V_DMA2_CFGR11_PSIZE   (2 <<  8) /* 100: Peripheral size */
#define CH32V_DMA2_CFGR11_PSIZE_MASK   (0x03)
#define CH32V_DMA2_CFGR11_MSIZE   (2 << 10) /* 400: Memory size */
#define CH32V_DMA2_CFGR11_MSIZE_MASK   (0x03)
#define CH32V_DMA2_CFGR11_PL      (2 << 12) /* 1000: Channel Priority level */
#define CH32V_DMA2_CFGR11_PL_MASK      (0x03)
#define CH32V_DMA2_CFGR11_MEM2MEM (1 << 14) /* 4000: Memory to memory mode */
#define CH32V_DMA2_CNTR11_OFFSET  0x00c4
#define CH32V_DMA2_CNTR11         (CH32V_DMA2_BASE + CH32V_DMA2_CNTR11_OFFSET)
#define CH32V_DMA2_CNTR11_NDT     (16 <<  0) /* 01: Number of data to transfer */
#define CH32V_DMA2_CNTR11_NDT_MASK     (0xffff)
#define CH32V_DMA2_PADDR11_OFFSET 0x00c8
#define CH32V_DMA2_PADDR11        (CH32V_DMA2_BASE + CH32V_DMA2_PADDR11_OFFSET)
#define CH32V_DMA2_PADDR11_PA     (32 <<  0) /* 01: Peripheral address */
#define CH32V_DMA2_PADDR11_PA_MASK     (0xffffffff)
#define CH32V_DMA2_MADDR11_OFFSET 0x00cc
#define CH32V_DMA2_MADDR11        (CH32V_DMA2_BASE + CH32V_DMA2_MADDR11_OFFSET)
#define CH32V_DMA2_MADDR11_MA     (32 <<  0) /* 01: Memory address */
#define CH32V_DMA2_MADDR11_MA_MASK     (0xffffffff)
#define CH32V_DMA2_EXTEN_INTFR_OFFSET 0x00d0
#define CH32V_DMA2_EXTEN_INTFR    (CH32V_DMA2_BASE + CH32V_DMA2_EXTEN_INTFR_OFFSET)
#define CH32V_DMA2_EXTEN_INTFR_GIF8 (1 <<  0) /* 01: Channel 8 Global interrupt flag */
#define CH32V_DMA2_EXTEN_INTFR_TCIF8 (1 <<  1) /* 02: Channel 8 Transfer Complete flag */
#define CH32V_DMA2_EXTEN_INTFR_HTIF8 (1 <<  2) /* 04: Channel 8 Half Transfer Complete flag */
#define CH32V_DMA2_EXTEN_INTFR_TEIF8 (1 <<  3) /* 08: Channel 8 Transfer Error flag */
#define CH32V_DMA2_EXTEN_INTFR_GIF9 (1 <<  4) /* 10: Channel 9 Global interrupt flag */
#define CH32V_DMA2_EXTEN_INTFR_TCIF9 (1 <<  5) /* 20: Channel 9 Transfer Complete flag */
#define CH32V_DMA2_EXTEN_INTFR_HTIF9 (1 <<  6) /* 40: Channel 9 Half Transfer Complete flag */
#define CH32V_DMA2_EXTEN_INTFR_TEIF9 (1 <<  7) /* 80: Channel 9 Transfer Error flag */
#define CH32V_DMA2_EXTEN_INTFR_GIF10 (1 <<  8) /* 100: Channel 10 Global interrupt flag */
#define CH32V_DMA2_EXTEN_INTFR_TCIF10 (1 <<  9) /* 200: Channel 10 Transfer Complete flag */
#define CH32V_DMA2_EXTEN_INTFR_HTIF10 (1 << 10) /* 400: Channel 10 Half Transfer Complete flag */
#define CH32V_DMA2_EXTEN_INTFR_TEIF10 (1 << 11) /* 800: Channel 10 Transfer Error flag */
#define CH32V_DMA2_EXTEN_INTFR_GIF11 (1 << 12) /* 1000: Channel 11 Global interrupt flag */
#define CH32V_DMA2_EXTEN_INTFR_TCIF11 (1 << 13) /* 2000: Channel 11 Transfer Complete flag */
#define CH32V_DMA2_EXTEN_INTFR_HTIF11 (1 << 14) /* 4000: Channel 11 Half Transfer Complete flag */
#define CH32V_DMA2_EXTEN_INTFR_TEIF11 (1 << 15) /* 8000: Channel 11 Transfer Error flag */
#define CH32V_DMA2_EXTEN_INTFCR_OFFSET 0x00d4
#define CH32V_DMA2_EXTEN_INTFCR   (CH32V_DMA2_BASE + CH32V_DMA2_EXTEN_INTFCR_OFFSET)
#define CH32V_DMA2_EXTEN_INTFCR_CGIF8 (1 <<  0) /* 01: Channel 8 Global interrupt clear */
#define CH32V_DMA2_EXTEN_INTFCR_CGIF9 (1 <<  4) /* 10: Channel 9 Global interrupt clear */
#define CH32V_DMA2_EXTEN_INTFCR_CGIF10 (1 <<  8) /* 100: Channel 10 Global interrupt clear */
#define CH32V_DMA2_EXTEN_INTFCR_CGIF11 (1 << 12) /* 1000: Channel 11 Global interrupt clear */
#define CH32V_DMA2_EXTEN_INTFCR_CTCIF8 (1 <<  1) /* 02: Channel 8 Global interrupt clear */
#define CH32V_DMA2_EXTEN_INTFCR_CTCIF9 (1 <<  5) /* 20: Channel 9 Global interrupt clear */
#define CH32V_DMA2_EXTEN_INTFCR_CTCIF10 (1 <<  9) /* 200: Channel 10 Global interrupt clear */
#define CH32V_DMA2_EXTEN_INTFCR_CTCIF11 (1 << 13) /* 2000: Channel 11 Global interrupt clear */
#define CH32V_DMA2_EXTEN_INTFCR_CHTIF8 (1 <<  2) /* 04: Channel 8 Global interrupt clear */
#define CH32V_DMA2_EXTEN_INTFCR_CHTIF9 (1 <<  6) /* 40: Channel 9 Global interrupt clear */
#define CH32V_DMA2_EXTEN_INTFCR_CHTIF10 (1 << 10) /* 400: Channel 10 Global interrupt clear */
#define CH32V_DMA2_EXTEN_INTFCR_CHTIF11 (1 << 14) /* 4000: Channel 11 Global interrupt clear */
#define CH32V_DMA2_EXTEN_INTFCR_CTEIF8 (1 <<  3) /* 08: Channel 8 Global interrupt clear */
#define CH32V_DMA2_EXTEN_INTFCR_CTEIF9 (1 <<  7) /* 80: Channel 9 Global interrupt clear */
#define CH32V_DMA2_EXTEN_INTFCR_CTEIF10 (1 << 11) /* 800: Channel 10 Global interrupt clear */
#define CH32V_DMA2_EXTEN_INTFCR_CTEIF11 (1 << 15) /* 8000: Channel 11 Global interrupt clear */

/* RTC - Real time clock */
#define CH32V_RTC_BASE            0x40002800
#define CH32V_RTC_CTLRH_OFFSET    0x0000
#define CH32V_RTC_CTLRH           (CH32V_RTC_BASE + CH32V_RTC_CTLRH_OFFSET)
#define CH32V_RTC_CTLRH_SECIE     (1 <<  0) /* 01: Second interrupt Enable */
#define CH32V_RTC_CTLRH_ALRIE     (1 <<  1) /* 02: Alarm interrupt Enable */
#define CH32V_RTC_CTLRH_OWIE      (1 <<  2) /* 04: Overflow interrupt Enable */
#define CH32V_RTC_CTLRL_OFFSET    0x0004
#define CH32V_RTC_CTLRL           (CH32V_RTC_BASE + CH32V_RTC_CTLRL_OFFSET)
#define CH32V_RTC_CTLRL_SECF      (1 <<  0) /* 01: Second Flag */
#define CH32V_RTC_CTLRL_ALRF      (1 <<  1) /* 02: Alarm Flag */
#define CH32V_RTC_CTLRL_OWF       (1 <<  2) /* 04: Overflow Flag */
#define CH32V_RTC_CTLRL_RSF       (1 <<  3) /* 08: Registers Synchronized Flag */
#define CH32V_RTC_CTLRL_CNF       (1 <<  4) /* 10: Configuration Flag */
#define CH32V_RTC_CTLRL_RTOFF     (1 <<  5) /* 20: RTC operation OFF */
#define CH32V_RTC_PSCRH_OFFSET    0x0008
#define CH32V_RTC_PSCRH           (CH32V_RTC_BASE + CH32V_RTC_PSCRH_OFFSET)
#define CH32V_RTC_PSCRH_PRLH      (4 <<  0) /* 01: RTC Prescaler Load Register High */
#define CH32V_RTC_PSCRH_PRLH_MASK      (0x0f)
#define CH32V_RTC_PSCRL_OFFSET    0x000c
#define CH32V_RTC_PSCRL           (CH32V_RTC_BASE + CH32V_RTC_PSCRL_OFFSET)
#define CH32V_RTC_PSCRL_PRLL      (16 <<  0) /* 01: RTC Prescaler Divider Register Low */
#define CH32V_RTC_PSCRL_PRLL_MASK      (0xffff)
#define CH32V_RTC_DIVH_OFFSET     0x0010
#define CH32V_RTC_DIVH            (CH32V_RTC_BASE + CH32V_RTC_DIVH_OFFSET)
#define CH32V_RTC_DIVH_DIVH       (4 <<  0) /* 01: RTC prescaler divider register high */
#define CH32V_RTC_DIVH_DIVH_MASK       (0x0f)
#define CH32V_RTC_DIVL_OFFSET     0x0014
#define CH32V_RTC_DIVL            (CH32V_RTC_BASE + CH32V_RTC_DIVL_OFFSET)
#define CH32V_RTC_DIVL_DIVL       (16 <<  0) /* 01: RTC prescaler divider register Low */
#define CH32V_RTC_DIVL_DIVL_MASK       (0xffff)
#define CH32V_RTC_CNTH_OFFSET     0x0018
#define CH32V_RTC_CNTH            (CH32V_RTC_BASE + CH32V_RTC_CNTH_OFFSET)
#define CH32V_RTC_CNTH_CNTH       (16 <<  0) /* 01: RTC counter register high */
#define CH32V_RTC_CNTH_CNTH_MASK       (0xffff)
#define CH32V_RTC_CNTL_OFFSET     0x001c
#define CH32V_RTC_CNTL            (CH32V_RTC_BASE + CH32V_RTC_CNTL_OFFSET)
#define CH32V_RTC_CNTL_CNTL       (16 <<  0) /* 01: RTC counter register Low */
#define CH32V_RTC_CNTL_CNTL_MASK       (0xffff)
#define CH32V_RTC_ALRMH_OFFSET    0x0020
#define CH32V_RTC_ALRMH           (CH32V_RTC_BASE + CH32V_RTC_ALRMH_OFFSET)
#define CH32V_RTC_ALRMH_ALRH      (16 <<  0) /* 01: RTC alarm register high */
#define CH32V_RTC_ALRMH_ALRH_MASK      (0xffff)
#define CH32V_RTC_ALRML_OFFSET    0x0024
#define CH32V_RTC_ALRML           (CH32V_RTC_BASE + CH32V_RTC_ALRML_OFFSET)
#define CH32V_RTC_ALRML_ALRL      (16 <<  0) /* 01: RTC alarm register low */
#define CH32V_RTC_ALRML_ALRL_MASK      (0xffff)

/* BKP - Backup registers */
#define CH32V_BKP_BASE            0x40006c00
#define CH32V_BKP_DATAR1_OFFSET   0x0004
#define CH32V_BKP_DATAR1          (CH32V_BKP_BASE + CH32V_BKP_DATAR1_OFFSET)
#define CH32V_BKP_DATAR1_D1       (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR1_D1_MASK       (0xffff)
#define CH32V_BKP_DATAR2_OFFSET   0x0008
#define CH32V_BKP_DATAR2          (CH32V_BKP_BASE + CH32V_BKP_DATAR2_OFFSET)
#define CH32V_BKP_DATAR2_D2       (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR2_D2_MASK       (0xffff)
#define CH32V_BKP_DATAR3_OFFSET   0x000c
#define CH32V_BKP_DATAR3          (CH32V_BKP_BASE + CH32V_BKP_DATAR3_OFFSET)
#define CH32V_BKP_DATAR3_D3       (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR3_D3_MASK       (0xffff)
#define CH32V_BKP_DATAR4_OFFSET   0x0010
#define CH32V_BKP_DATAR4          (CH32V_BKP_BASE + CH32V_BKP_DATAR4_OFFSET)
#define CH32V_BKP_DATAR4_D4       (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR4_D4_MASK       (0xffff)
#define CH32V_BKP_DATAR5_OFFSET   0x0014
#define CH32V_BKP_DATAR5          (CH32V_BKP_BASE + CH32V_BKP_DATAR5_OFFSET)
#define CH32V_BKP_DATAR5_D5       (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR5_D5_MASK       (0xffff)
#define CH32V_BKP_DATAR6_OFFSET   0x0018
#define CH32V_BKP_DATAR6          (CH32V_BKP_BASE + CH32V_BKP_DATAR6_OFFSET)
#define CH32V_BKP_DATAR6_D6       (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR6_D6_MASK       (0xffff)
#define CH32V_BKP_DATAR7_OFFSET   0x001c
#define CH32V_BKP_DATAR7          (CH32V_BKP_BASE + CH32V_BKP_DATAR7_OFFSET)
#define CH32V_BKP_DATAR7_D7       (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR7_D7_MASK       (0xffff)
#define CH32V_BKP_DATAR8_OFFSET   0x0020
#define CH32V_BKP_DATAR8          (CH32V_BKP_BASE + CH32V_BKP_DATAR8_OFFSET)
#define CH32V_BKP_DATAR8_D8       (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR8_D8_MASK       (0xffff)
#define CH32V_BKP_DATAR9_OFFSET   0x0024
#define CH32V_BKP_DATAR9          (CH32V_BKP_BASE + CH32V_BKP_DATAR9_OFFSET)
#define CH32V_BKP_DATAR9_D9       (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR9_D9_MASK       (0xffff)
#define CH32V_BKP_DATAR10_OFFSET  0x0028
#define CH32V_BKP_DATAR10         (CH32V_BKP_BASE + CH32V_BKP_DATAR10_OFFSET)
#define CH32V_BKP_DATAR10_D10     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR10_D10_MASK     (0xffff)
#define CH32V_BKP_DATAR11_OFFSET  0x0040
#define CH32V_BKP_DATAR11         (CH32V_BKP_BASE + CH32V_BKP_DATAR11_OFFSET)
#define CH32V_BKP_DATAR11_DR11    (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR11_DR11_MASK    (0xffff)
#define CH32V_BKP_DATAR12_OFFSET  0x0044
#define CH32V_BKP_DATAR12         (CH32V_BKP_BASE + CH32V_BKP_DATAR12_OFFSET)
#define CH32V_BKP_DATAR12_DR12    (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR12_DR12_MASK    (0xffff)
#define CH32V_BKP_DATAR13_OFFSET  0x0048
#define CH32V_BKP_DATAR13         (CH32V_BKP_BASE + CH32V_BKP_DATAR13_OFFSET)
#define CH32V_BKP_DATAR13_DR13    (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR13_DR13_MASK    (0xffff)
#define CH32V_BKP_DATAR14_OFFSET  0x004c
#define CH32V_BKP_DATAR14         (CH32V_BKP_BASE + CH32V_BKP_DATAR14_OFFSET)
#define CH32V_BKP_DATAR14_D14     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR14_D14_MASK     (0xffff)
#define CH32V_BKP_DATAR15_OFFSET  0x0050
#define CH32V_BKP_DATAR15         (CH32V_BKP_BASE + CH32V_BKP_DATAR15_OFFSET)
#define CH32V_BKP_DATAR15_D15     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR15_D15_MASK     (0xffff)
#define CH32V_BKP_DATAR16_OFFSET  0x0054
#define CH32V_BKP_DATAR16         (CH32V_BKP_BASE + CH32V_BKP_DATAR16_OFFSET)
#define CH32V_BKP_DATAR16_D16     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR16_D16_MASK     (0xffff)
#define CH32V_BKP_DATAR17_OFFSET  0x0058
#define CH32V_BKP_DATAR17         (CH32V_BKP_BASE + CH32V_BKP_DATAR17_OFFSET)
#define CH32V_BKP_DATAR17_D17     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR17_D17_MASK     (0xffff)
#define CH32V_BKP_DATAR18_OFFSET  0x005c
#define CH32V_BKP_DATAR18         (CH32V_BKP_BASE + CH32V_BKP_DATAR18_OFFSET)
#define CH32V_BKP_DATAR18_D18     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR18_D18_MASK     (0xffff)
#define CH32V_BKP_DATAR19_OFFSET  0x0060
#define CH32V_BKP_DATAR19         (CH32V_BKP_BASE + CH32V_BKP_DATAR19_OFFSET)
#define CH32V_BKP_DATAR19_D19     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR19_D19_MASK     (0xffff)
#define CH32V_BKP_DATAR20_OFFSET  0x0064
#define CH32V_BKP_DATAR20         (CH32V_BKP_BASE + CH32V_BKP_DATAR20_OFFSET)
#define CH32V_BKP_DATAR20_D20     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR20_D20_MASK     (0xffff)
#define CH32V_BKP_DATAR21_OFFSET  0x0068
#define CH32V_BKP_DATAR21         (CH32V_BKP_BASE + CH32V_BKP_DATAR21_OFFSET)
#define CH32V_BKP_DATAR21_D21     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR21_D21_MASK     (0xffff)
#define CH32V_BKP_DATAR22_OFFSET  0x006c
#define CH32V_BKP_DATAR22         (CH32V_BKP_BASE + CH32V_BKP_DATAR22_OFFSET)
#define CH32V_BKP_DATAR22_D22     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR22_D22_MASK     (0xffff)
#define CH32V_BKP_DATAR23_OFFSET  0x0070
#define CH32V_BKP_DATAR23         (CH32V_BKP_BASE + CH32V_BKP_DATAR23_OFFSET)
#define CH32V_BKP_DATAR23_D23     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR23_D23_MASK     (0xffff)
#define CH32V_BKP_DATAR24_OFFSET  0x0074
#define CH32V_BKP_DATAR24         (CH32V_BKP_BASE + CH32V_BKP_DATAR24_OFFSET)
#define CH32V_BKP_DATAR24_D24     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR24_D24_MASK     (0xffff)
#define CH32V_BKP_DATAR25_OFFSET  0x0078
#define CH32V_BKP_DATAR25         (CH32V_BKP_BASE + CH32V_BKP_DATAR25_OFFSET)
#define CH32V_BKP_DATAR25_D25     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR25_D25_MASK     (0xffff)
#define CH32V_BKP_DATAR26_OFFSET  0x007c
#define CH32V_BKP_DATAR26         (CH32V_BKP_BASE + CH32V_BKP_DATAR26_OFFSET)
#define CH32V_BKP_DATAR26_D26     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR26_D26_MASK     (0xffff)
#define CH32V_BKP_DATAR27_OFFSET  0x0080
#define CH32V_BKP_DATAR27         (CH32V_BKP_BASE + CH32V_BKP_DATAR27_OFFSET)
#define CH32V_BKP_DATAR27_D27     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR27_D27_MASK     (0xffff)
#define CH32V_BKP_DATAR28_OFFSET  0x0084
#define CH32V_BKP_DATAR28         (CH32V_BKP_BASE + CH32V_BKP_DATAR28_OFFSET)
#define CH32V_BKP_DATAR28_D28     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR28_D28_MASK     (0xffff)
#define CH32V_BKP_DATAR29_OFFSET  0x0088
#define CH32V_BKP_DATAR29         (CH32V_BKP_BASE + CH32V_BKP_DATAR29_OFFSET)
#define CH32V_BKP_DATAR29_D29     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR29_D29_MASK     (0xffff)
#define CH32V_BKP_DATAR30_OFFSET  0x008c
#define CH32V_BKP_DATAR30         (CH32V_BKP_BASE + CH32V_BKP_DATAR30_OFFSET)
#define CH32V_BKP_DATAR30_D30     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR30_D30_MASK     (0xffff)
#define CH32V_BKP_DATAR31_OFFSET  0x0090
#define CH32V_BKP_DATAR31         (CH32V_BKP_BASE + CH32V_BKP_DATAR31_OFFSET)
#define CH32V_BKP_DATAR31_D31     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR31_D31_MASK     (0xffff)
#define CH32V_BKP_DATAR32_OFFSET  0x0094
#define CH32V_BKP_DATAR32         (CH32V_BKP_BASE + CH32V_BKP_DATAR32_OFFSET)
#define CH32V_BKP_DATAR32_D32     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR32_D32_MASK     (0xffff)
#define CH32V_BKP_DATAR33_OFFSET  0x0098
#define CH32V_BKP_DATAR33         (CH32V_BKP_BASE + CH32V_BKP_DATAR33_OFFSET)
#define CH32V_BKP_DATAR33_D33     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR33_D33_MASK     (0xffff)
#define CH32V_BKP_DATAR34_OFFSET  0x009c
#define CH32V_BKP_DATAR34         (CH32V_BKP_BASE + CH32V_BKP_DATAR34_OFFSET)
#define CH32V_BKP_DATAR34_D34     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR34_D34_MASK     (0xffff)
#define CH32V_BKP_DATAR35_OFFSET  0x00a0
#define CH32V_BKP_DATAR35         (CH32V_BKP_BASE + CH32V_BKP_DATAR35_OFFSET)
#define CH32V_BKP_DATAR35_D35     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR35_D35_MASK     (0xffff)
#define CH32V_BKP_DATAR36_OFFSET  0x00a4
#define CH32V_BKP_DATAR36         (CH32V_BKP_BASE + CH32V_BKP_DATAR36_OFFSET)
#define CH32V_BKP_DATAR36_D36     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR36_D36_MASK     (0xffff)
#define CH32V_BKP_DATAR37_OFFSET  0x00a8
#define CH32V_BKP_DATAR37         (CH32V_BKP_BASE + CH32V_BKP_DATAR37_OFFSET)
#define CH32V_BKP_DATAR37_D37     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR37_D37_MASK     (0xffff)
#define CH32V_BKP_DATAR38_OFFSET  0x00ac
#define CH32V_BKP_DATAR38         (CH32V_BKP_BASE + CH32V_BKP_DATAR38_OFFSET)
#define CH32V_BKP_DATAR38_D38     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR38_D38_MASK     (0xffff)
#define CH32V_BKP_DATAR39_OFFSET  0x00b0
#define CH32V_BKP_DATAR39         (CH32V_BKP_BASE + CH32V_BKP_DATAR39_OFFSET)
#define CH32V_BKP_DATAR39_D39     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR39_D39_MASK     (0xffff)
#define CH32V_BKP_DATAR40_OFFSET  0x00b4
#define CH32V_BKP_DATAR40         (CH32V_BKP_BASE + CH32V_BKP_DATAR40_OFFSET)
#define CH32V_BKP_DATAR40_D40     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR40_D40_MASK     (0xffff)
#define CH32V_BKP_DATAR41_OFFSET  0x00b8
#define CH32V_BKP_DATAR41         (CH32V_BKP_BASE + CH32V_BKP_DATAR41_OFFSET)
#define CH32V_BKP_DATAR41_D41     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR41_D41_MASK     (0xffff)
#define CH32V_BKP_DATAR42_OFFSET  0x00bc
#define CH32V_BKP_DATAR42         (CH32V_BKP_BASE + CH32V_BKP_DATAR42_OFFSET)
#define CH32V_BKP_DATAR42_D42     (16 <<  0) /* 01: Backup data */
#define CH32V_BKP_DATAR42_D42_MASK     (0xffff)
#define CH32V_BKP_OCTLR_OFFSET    0x002c
#define CH32V_BKP_OCTLR           (CH32V_BKP_BASE + CH32V_BKP_OCTLR_OFFSET)
#define CH32V_BKP_OCTLR_CAL       (7 <<  0) /* 01: Calibration value */
#define CH32V_BKP_OCTLR_CAL_MASK       (0x7f)
#define CH32V_BKP_OCTLR_CCO       (1 <<  7) /* 80: Calibration Clock Output */
#define CH32V_BKP_OCTLR_ASOE      (1 <<  8) /* 100: Alarm or second output enable */
#define CH32V_BKP_OCTLR_ASOS      (1 <<  9) /* 200: Alarm or second output selection */
#define CH32V_BKP_TPCTLR_OFFSET   0x0030
#define CH32V_BKP_TPCTLR          (CH32V_BKP_BASE + CH32V_BKP_TPCTLR_OFFSET)
#define CH32V_BKP_TPCTLR_TPE      (1 <<  0) /* 01: Tamper pin enable */
#define CH32V_BKP_TPCTLR_TPAL     (1 <<  1) /* 02: Tamper pin active level */
#define CH32V_BKP_TPCSR_OFFSET    0x0034
#define CH32V_BKP_TPCSR           (CH32V_BKP_BASE + CH32V_BKP_TPCSR_OFFSET)
#define CH32V_BKP_TPCSR_CTE       (1 <<  0) /* 01: Clear Tamper event */
#define CH32V_BKP_TPCSR_CTI       (1 <<  1) /* 02: Clear Tamper Interrupt */
#define CH32V_BKP_TPCSR_TPIE      (1 <<  2) /* 04: Tamper Pin interrupt enable */
#define CH32V_BKP_TPCSR_TEF       (1 <<  8) /* 100: Tamper Event Flag */
#define CH32V_BKP_TPCSR_TIF       (1 <<  9) /* 200: Tamper Interrupt Flag */

/* IWDG - Independent watchdog */
#define CH32V_IWDG_BASE           0x40003000
#define CH32V_IWDG_CTLR_OFFSET    0x0000
#define CH32V_IWDG_CTLR           (CH32V_IWDG_BASE + CH32V_IWDG_CTLR_OFFSET)
#define CH32V_IWDG_CTLR_KEY       (16 <<  0) /* 01: Key value */
#define CH32V_IWDG_CTLR_KEY_MASK       (0xffff)
#define CH32V_IWDG_PSCR_OFFSET    0x0004
#define CH32V_IWDG_PSCR           (CH32V_IWDG_BASE + CH32V_IWDG_PSCR_OFFSET)
#define CH32V_IWDG_PSCR_PR        (3 <<  0) /* 01: Prescaler divider */
#define CH32V_IWDG_PSCR_PR_MASK        (0x07)
#define CH32V_IWDG_RLDR_OFFSET    0x0008
#define CH32V_IWDG_RLDR           (CH32V_IWDG_BASE + CH32V_IWDG_RLDR_OFFSET)
#define CH32V_IWDG_RLDR_RL        (12 <<  0) /* 01: Watchdog counter reload value */
#define CH32V_IWDG_RLDR_RL_MASK        (0xfff)
#define CH32V_IWDG_STATR_OFFSET   0x000c
#define CH32V_IWDG_STATR          (CH32V_IWDG_BASE + CH32V_IWDG_STATR_OFFSET)
#define CH32V_IWDG_STATR_PVU      (1 <<  0) /* 01: Watchdog prescaler value update */
#define CH32V_IWDG_STATR_RVU      (1 <<  1) /* 02: Watchdog counter reload value update */

/* WWDG - Window watchdog */
#define CH32V_WWDG_BASE           0x40002c00
#define CH32V_WWDG_CTLR_OFFSET    0x0000
#define CH32V_WWDG_CTLR           (CH32V_WWDG_BASE + CH32V_WWDG_CTLR_OFFSET)
#define CH32V_WWDG_CTLR_T         (7 <<  0) /* 01: 7-bit counter (MSB to LSB) */
#define CH32V_WWDG_CTLR_T_MASK         (0x7f)
#define CH32V_WWDG_CTLR_WDGA      (1 <<  7) /* 80: Activation bit */
#define CH32V_WWDG_CFGR_OFFSET    0x0004
#define CH32V_WWDG_CFGR           (CH32V_WWDG_BASE + CH32V_WWDG_CFGR_OFFSET)
#define CH32V_WWDG_CFGR_W         (7 <<  0) /* 01: 7-bit window value */
#define CH32V_WWDG_CFGR_W_MASK         (0x7f)
#define CH32V_WWDG_CFGR_WDGTB     (2 <<  7) /* 80: Timer Base */
#define CH32V_WWDG_CFGR_WDGTB_MASK     (0x03)
#define CH32V_WWDG_CFGR_EWI       (1 <<  9) /* 200: Early Wakeup Interrupt */
#define CH32V_WWDG_STATR_OFFSET   0x0008
#define CH32V_WWDG_STATR          (CH32V_WWDG_BASE + CH32V_WWDG_STATR_OFFSET)
#define CH32V_WWDG_STATR_WEIF     (1 <<  0) /* 01: Early Wakeup Interrupt Flag */

/* TIM1 - Advanced timer */
#define CH32V_TIM1_BASE           0x40012c00
#define CH32V_TIM1_CTLR1_OFFSET   0x0000
#define CH32V_TIM1_CTLR1          (CH32V_TIM1_BASE + CH32V_TIM1_CTLR1_OFFSET)
#define CH32V_TIM1_CTLR1_CKD      (2 <<  8) /* 100: Clock division */
#define CH32V_TIM1_CTLR1_CKD_MASK      (0x03)
#define CH32V_TIM1_CTLR1_ARPE     (1 <<  7) /* 80: Auto-reload preload enable */
#define CH32V_TIM1_CTLR1_CMS      (2 <<  5) /* 20: Center-aligned mode selection */
#define CH32V_TIM1_CTLR1_CMS_MASK      (0x03)
#define CH32V_TIM1_CTLR1_DIR      (1 <<  4) /* 10: Direction */
#define CH32V_TIM1_CTLR1_OPM      (1 <<  3) /* 08: One-pulse mode */
#define CH32V_TIM1_CTLR1_URS      (1 <<  2) /* 04: Update request source */
#define CH32V_TIM1_CTLR1_UDIS     (1 <<  1) /* 02: Update disable */
#define CH32V_TIM1_CTLR1_CEN      (1 <<  0) /* 01: Counter enable */
#define CH32V_TIM1_CTLR2_OFFSET   0x0004
#define CH32V_TIM1_CTLR2          (CH32V_TIM1_BASE + CH32V_TIM1_CTLR2_OFFSET)
#define CH32V_TIM1_CTLR2_OIS4     (1 << 14) /* 4000: Output Idle state 4 */
#define CH32V_TIM1_CTLR2_OIS3N    (1 << 13) /* 2000: Output Idle state 3 */
#define CH32V_TIM1_CTLR2_OIS3     (1 << 12) /* 1000: Output Idle state 3 */
#define CH32V_TIM1_CTLR2_OIS2N    (1 << 11) /* 800: Output Idle state 2 */
#define CH32V_TIM1_CTLR2_OIS2     (1 << 10) /* 400: Output Idle state 2 */
#define CH32V_TIM1_CTLR2_OIS1N    (1 <<  9) /* 200: Output Idle state 1 */
#define CH32V_TIM1_CTLR2_OIS1     (1 <<  8) /* 100: Output Idle state 1 */
#define CH32V_TIM1_CTLR2_TI1S     (1 <<  7) /* 80: TI1 selection */
#define CH32V_TIM1_CTLR2_MMS      (3 <<  4) /* 10: Master mode selection */
#define CH32V_TIM1_CTLR2_MMS_MASK      (0x07)
#define CH32V_TIM1_CTLR2_CCDS     (1 <<  3) /* 08: Capture/compare DMA selection */
#define CH32V_TIM1_CTLR2_CCUS     (1 <<  2) /* 04: Capture/compare control update selection */
#define CH32V_TIM1_CTLR2_CCPC     (1 <<  0) /* 01: Capture/compare preloaded control */
#define CH32V_TIM1_SMCFGR_OFFSET  0x0008
#define CH32V_TIM1_SMCFGR         (CH32V_TIM1_BASE + CH32V_TIM1_SMCFGR_OFFSET)
#define CH32V_TIM1_SMCFGR_ETP     (1 << 15) /* 8000: External trigger polarity */
#define CH32V_TIM1_SMCFGR_ECE     (1 << 14) /* 4000: External clock enable */
#define CH32V_TIM1_SMCFGR_ETPS    (2 << 12) /* 1000: External trigger prescaler */
#define CH32V_TIM1_SMCFGR_ETPS_MASK    (0x03)
#define CH32V_TIM1_SMCFGR_ETF     (4 <<  8) /* 100: External trigger filter */
#define CH32V_TIM1_SMCFGR_ETF_MASK     (0x0f)
#define CH32V_TIM1_SMCFGR_MSM     (1 <<  7) /* 80: Master/Slave mode */
#define CH32V_TIM1_SMCFGR_TS      (3 <<  4) /* 10: Trigger selection */
#define CH32V_TIM1_SMCFGR_TS_MASK      (0x07)
#define CH32V_TIM1_SMCFGR_SMS     (3 <<  0) /* 01: Slave mode selection */
#define CH32V_TIM1_SMCFGR_SMS_MASK     (0x07)
#define CH32V_TIM1_DMAINTENR_OFFSET 0x000c
#define CH32V_TIM1_DMAINTENR      (CH32V_TIM1_BASE + CH32V_TIM1_DMAINTENR_OFFSET)
#define CH32V_TIM1_DMAINTENR_TDE  (1 << 14) /* 4000: Trigger DMA request enable */
#define CH32V_TIM1_DMAINTENR_COMDE (1 << 13) /* 2000: COM DMA request enable */
#define CH32V_TIM1_DMAINTENR_CC4DE (1 << 12) /* 1000: Capture/Compare 4 DMA request enable */
#define CH32V_TIM1_DMAINTENR_CC3DE (1 << 11) /* 800: Capture/Compare 3 DMA request enable */
#define CH32V_TIM1_DMAINTENR_CC2DE (1 << 10) /* 400: Capture/Compare 2 DMA request enable */
#define CH32V_TIM1_DMAINTENR_CC1DE (1 <<  9) /* 200: Capture/Compare 1 DMA request enable */
#define CH32V_TIM1_DMAINTENR_UDE  (1 <<  8) /* 100: Update DMA request enable */
#define CH32V_TIM1_DMAINTENR_BIE  (1 <<  7) /* 80: Break interrupt enable */
#define CH32V_TIM1_DMAINTENR_TIE  (1 <<  6) /* 40: Trigger interrupt enable */
#define CH32V_TIM1_DMAINTENR_COMIE (1 <<  5) /* 20: COM interrupt enable */
#define CH32V_TIM1_DMAINTENR_CC4IE (1 <<  4) /* 10: Capture/Compare 4 interrupt enable */
#define CH32V_TIM1_DMAINTENR_CC3IE (1 <<  3) /* 08: Capture/Compare 3 interrupt enable */
#define CH32V_TIM1_DMAINTENR_CC2IE (1 <<  2) /* 04: Capture/Compare 2 interrupt enable */
#define CH32V_TIM1_DMAINTENR_CC1IE (1 <<  1) /* 02: Capture/Compare 1 interrupt enable */
#define CH32V_TIM1_DMAINTENR_UIE  (1 <<  0) /* 01: Update interrupt enable */
#define CH32V_TIM1_INTFR_OFFSET   0x0010
#define CH32V_TIM1_INTFR          (CH32V_TIM1_BASE + CH32V_TIM1_INTFR_OFFSET)
#define CH32V_TIM1_INTFR_CC4OF    (1 << 12) /* 1000: Capture/Compare 4 overcapture flag */
#define CH32V_TIM1_INTFR_CC3OF    (1 << 11) /* 800: Capture/Compare 3 overcapture flag */
#define CH32V_TIM1_INTFR_CC2OF    (1 << 10) /* 400: Capture/compare 2 overcapture flag */
#define CH32V_TIM1_INTFR_CC1OF    (1 <<  9) /* 200: Capture/Compare 1 overcapture flag */
#define CH32V_TIM1_INTFR_BIF      (1 <<  7) /* 80: Break interrupt flag */
#define CH32V_TIM1_INTFR_TIF      (1 <<  6) /* 40: Trigger interrupt flag */
#define CH32V_TIM1_INTFR_COMIF    (1 <<  5) /* 20: COM interrupt flag */
#define CH32V_TIM1_INTFR_CC4IF    (1 <<  4) /* 10: Capture/Compare 4 interrupt flag */
#define CH32V_TIM1_INTFR_CC3IF    (1 <<  3) /* 08: Capture/Compare 3 interrupt flag */
#define CH32V_TIM1_INTFR_CC2IF    (1 <<  2) /* 04: Capture/Compare 2 interrupt flag */
#define CH32V_TIM1_INTFR_CC1IF    (1 <<  1) /* 02: Capture/compare 1 interrupt flag */
#define CH32V_TIM1_INTFR_UIF      (1 <<  0) /* 01: Update interrupt flag */
#define CH32V_TIM1_SWEVGR_OFFSET  0x0014
#define CH32V_TIM1_SWEVGR         (CH32V_TIM1_BASE + CH32V_TIM1_SWEVGR_OFFSET)
#define CH32V_TIM1_SWEVGR_BG      (1 <<  7) /* 80: Break generation */
#define CH32V_TIM1_SWEVGR_TG      (1 <<  6) /* 40: Trigger generation */
#define CH32V_TIM1_SWEVGR_COMG    (1 <<  5) /* 20: Capture/Compare control update generation */
#define CH32V_TIM1_SWEVGR_CC4G    (1 <<  4) /* 10: Capture/compare 4 generation */
#define CH32V_TIM1_SWEVGR_CC3G    (1 <<  3) /* 08: Capture/compare 3 generation */
#define CH32V_TIM1_SWEVGR_CC2G    (1 <<  2) /* 04: Capture/compare 2 generation */
#define CH32V_TIM1_SWEVGR_CC1G    (1 <<  1) /* 02: Capture/compare 1 generation */
#define CH32V_TIM1_SWEVGR_UG      (1 <<  0) /* 01: Update generation */
#define CH32V_TIM1_CHCTLR1_Output_OFFSET 0x0018
#define CH32V_TIM1_CHCTLR1_Output (CH32V_TIM1_BASE + CH32V_TIM1_CHCTLR1_Output_OFFSET)
#define CH32V_TIM1_CHCTLR1_Output_OC2CE (1 << 15) /* 8000: Output Compare 2 clear enable */
#define CH32V_TIM1_CHCTLR1_Output_OC2M (3 << 12) /* 1000: Output Compare 2 mode */
#define CH32V_TIM1_CHCTLR1_Output_OC2M_MASK (0x07)
#define CH32V_TIM1_CHCTLR1_Output_OC2PE (1 << 11) /* 800: Output Compare 2 preload enable */
#define CH32V_TIM1_CHCTLR1_Output_OC2FE (1 << 10) /* 400: Output Compare 2 fast enable */
#define CH32V_TIM1_CHCTLR1_Output_CC2S (2 <<  8) /* 100: Capture/Compare 2 selection */
#define CH32V_TIM1_CHCTLR1_Output_CC2S_MASK (0x03)
#define CH32V_TIM1_CHCTLR1_Output_OC1CE (1 <<  7) /* 80: Output Compare 1 clear enable */
#define CH32V_TIM1_CHCTLR1_Output_OC1M (3 <<  4) /* 10: Output Compare 1 mode */
#define CH32V_TIM1_CHCTLR1_Output_OC1M_MASK (0x07)
#define CH32V_TIM1_CHCTLR1_Output_OC1PE (1 <<  3) /* 08: Output Compare 1 preload enable */
#define CH32V_TIM1_CHCTLR1_Output_OC1FE (1 <<  2) /* 04: Output Compare 1 fast enable */
#define CH32V_TIM1_CHCTLR1_Output_CC1S (2 <<  0) /* 01: Capture/Compare 1 selection */
#define CH32V_TIM1_CHCTLR1_Output_CC1S_MASK (0x03)
#define CH32V_TIM1_CHCTLR1_Input_OFFSET 0x0018
#define CH32V_TIM1_CHCTLR1_Input  (CH32V_TIM1_BASE + CH32V_TIM1_CHCTLR1_Input_OFFSET)
#define CH32V_TIM1_CHCTLR1_Input_IC2F (4 << 12) /* 1000: Input capture 2 filter */
#define CH32V_TIM1_CHCTLR1_Input_IC2F_MASK (0x0f)
#define CH32V_TIM1_CHCTLR1_Input_IC2PCS (2 << 10) /* 400: Input capture 2 prescaler */
#define CH32V_TIM1_CHCTLR1_Input_IC2PCS_MASK (0x03)
#define CH32V_TIM1_CHCTLR1_Input_CC2S (2 <<  8) /* 100: Capture/Compare 2 selection */
#define CH32V_TIM1_CHCTLR1_Input_CC2S_MASK (0x03)
#define CH32V_TIM1_CHCTLR1_Input_IC1F (4 <<  4) /* 10: Input capture 1 filter */
#define CH32V_TIM1_CHCTLR1_Input_IC1F_MASK (0x0f)
#define CH32V_TIM1_CHCTLR1_Input_IC1PSC (2 <<  2) /* 04: Input capture 1 prescaler */
#define CH32V_TIM1_CHCTLR1_Input_IC1PSC_MASK (0x03)
#define CH32V_TIM1_CHCTLR1_Input_CC1S (2 <<  0) /* 01: Capture/Compare 1 selection */
#define CH32V_TIM1_CHCTLR1_Input_CC1S_MASK (0x03)
#define CH32V_TIM1_CHCTLR2_Output_OFFSET 0x001c
#define CH32V_TIM1_CHCTLR2_Output (CH32V_TIM1_BASE + CH32V_TIM1_CHCTLR2_Output_OFFSET)
#define CH32V_TIM1_CHCTLR2_Output_OC4CE (1 << 15) /* 8000: Output compare 4 clear enable */
#define CH32V_TIM1_CHCTLR2_Output_OC4M (3 << 12) /* 1000: Output compare 4 mode */
#define CH32V_TIM1_CHCTLR2_Output_OC4M_MASK (0x07)
#define CH32V_TIM1_CHCTLR2_Output_OC4PE (1 << 11) /* 800: Output compare 4 preload enable */
#define CH32V_TIM1_CHCTLR2_Output_OC4FE (1 << 10) /* 400: Output compare 4 fast enable */
#define CH32V_TIM1_CHCTLR2_Output_CC4S (2 <<  8) /* 100: Capture/Compare 4 selection */
#define CH32V_TIM1_CHCTLR2_Output_CC4S_MASK (0x03)
#define CH32V_TIM1_CHCTLR2_Output_OC3CE (1 <<  7) /* 80: Output compare 3 clear enable */
#define CH32V_TIM1_CHCTLR2_Output_OC3M (3 <<  4) /* 10: Output compare 3 mode */
#define CH32V_TIM1_CHCTLR2_Output_OC3M_MASK (0x07)
#define CH32V_TIM1_CHCTLR2_Output_OC3PE (1 <<  3) /* 08: Output compare 3 preload enable */
#define CH32V_TIM1_CHCTLR2_Output_OC3FE (1 <<  2) /* 04: Output compare 3 fast enable */
#define CH32V_TIM1_CHCTLR2_Output_CC3S (2 <<  0) /* 01: Capture/Compare 3 selection */
#define CH32V_TIM1_CHCTLR2_Output_CC3S_MASK (0x03)
#define CH32V_TIM1_CHCTLR2_Input_OFFSET 0x001c
#define CH32V_TIM1_CHCTLR2_Input  (CH32V_TIM1_BASE + CH32V_TIM1_CHCTLR2_Input_OFFSET)
#define CH32V_TIM1_CHCTLR2_Input_IC4F (4 << 12) /* 1000: Input capture 4 filter */
#define CH32V_TIM1_CHCTLR2_Input_IC4F_MASK (0x0f)
#define CH32V_TIM1_CHCTLR2_Input_IC4PSC (2 << 10) /* 400: Input capture 4 prescaler */
#define CH32V_TIM1_CHCTLR2_Input_IC4PSC_MASK (0x03)
#define CH32V_TIM1_CHCTLR2_Input_CC4S (2 <<  8) /* 100: Capture/Compare 4 selection */
#define CH32V_TIM1_CHCTLR2_Input_CC4S_MASK (0x03)
#define CH32V_TIM1_CHCTLR2_Input_IC3F (4 <<  4) /* 10: Input capture 3 filter */
#define CH32V_TIM1_CHCTLR2_Input_IC3F_MASK (0x0f)
#define CH32V_TIM1_CHCTLR2_Input_IC3PSC (2 <<  2) /* 04: Input capture 3 prescaler */
#define CH32V_TIM1_CHCTLR2_Input_IC3PSC_MASK (0x03)
#define CH32V_TIM1_CHCTLR2_Input_CC3S (2 <<  0) /* 01: Capture/compare 3 selection */
#define CH32V_TIM1_CHCTLR2_Input_CC3S_MASK (0x03)
#define CH32V_TIM1_CCER_OFFSET    0x0020
#define CH32V_TIM1_CCER           (CH32V_TIM1_BASE + CH32V_TIM1_CCER_OFFSET)
#define CH32V_TIM1_CCER_CC4P      (1 << 13) /* 2000: Capture/Compare 3 output Polarity */
#define CH32V_TIM1_CCER_CC4E      (1 << 12) /* 1000: Capture/Compare 4 output enable */
#define CH32V_TIM1_CCER_CC3NP     (1 << 11) /* 800: Capture/Compare 3 output Polarity */
#define CH32V_TIM1_CCER_CC3NE     (1 << 10) /* 400: Capture/Compare 3 complementary output enable */
#define CH32V_TIM1_CCER_CC3P      (1 <<  9) /* 200: Capture/Compare 3 output Polarity */
#define CH32V_TIM1_CCER_CC3E      (1 <<  8) /* 100: Capture/Compare 3 output enable */
#define CH32V_TIM1_CCER_CC2NP     (1 <<  7) /* 80: Capture/Compare 2 output Polarity */
#define CH32V_TIM1_CCER_CC2NE     (1 <<  6) /* 40: Capture/Compare 2 complementary output enable */
#define CH32V_TIM1_CCER_CC2P      (1 <<  5) /* 20: Capture/Compare 2 output Polarity */
#define CH32V_TIM1_CCER_CC2E      (1 <<  4) /* 10: Capture/Compare 2 output enable */
#define CH32V_TIM1_CCER_CC1NP     (1 <<  3) /* 08: Capture/Compare 1 output Polarity */
#define CH32V_TIM1_CCER_CC1NE     (1 <<  2) /* 04: Capture/Compare 1 complementary output enable */
#define CH32V_TIM1_CCER_CC1P      (1 <<  1) /* 02: Capture/Compare 1 output Polarity */
#define CH32V_TIM1_CCER_CC1E      (1 <<  0) /* 01: Capture/Compare 1 output enable */
#define CH32V_TIM1_CNT_OFFSET     0x0024
#define CH32V_TIM1_CNT            (CH32V_TIM1_BASE + CH32V_TIM1_CNT_OFFSET)
#define CH32V_TIM1_CNT_CNT        (16 <<  0) /* 01: counter value */
#define CH32V_TIM1_CNT_CNT_MASK        (0xffff)
#define CH32V_TIM1_PSC_OFFSET     0x0028
#define CH32V_TIM1_PSC            (CH32V_TIM1_BASE + CH32V_TIM1_PSC_OFFSET)
#define CH32V_TIM1_PSC_PSC        (16 <<  0) /* 01: Prescaler value */
#define CH32V_TIM1_PSC_PSC_MASK        (0xffff)
#define CH32V_TIM1_ATRLR_OFFSET   0x002c
#define CH32V_TIM1_ATRLR          (CH32V_TIM1_BASE + CH32V_TIM1_ATRLR_OFFSET)
#define CH32V_TIM1_ATRLR_ATRLR    (16 <<  0) /* 01: Auto-reload value */
#define CH32V_TIM1_ATRLR_ATRLR_MASK    (0xffff)
#define CH32V_TIM1_RPTCR_OFFSET   0x0030
#define CH32V_TIM1_RPTCR          (CH32V_TIM1_BASE + CH32V_TIM1_RPTCR_OFFSET)
#define CH32V_TIM1_RPTCR_RPTCR    (8 <<  0) /* 01: Repetition counter value */
#define CH32V_TIM1_RPTCR_RPTCR_MASK    (0xff)
#define CH32V_TIM1_CH1CVR_OFFSET  0x0034
#define CH32V_TIM1_CH1CVR         (CH32V_TIM1_BASE + CH32V_TIM1_CH1CVR_OFFSET)
#define CH32V_TIM1_CH1CVR_CH1CVR  (16 <<  0) /* 01: Capture/Compare 1 value */
#define CH32V_TIM1_CH1CVR_CH1CVR_MASK  (0xffff)
#define CH32V_TIM1_CH2CVR_OFFSET  0x0038
#define CH32V_TIM1_CH2CVR         (CH32V_TIM1_BASE + CH32V_TIM1_CH2CVR_OFFSET)
#define CH32V_TIM1_CH2CVR_CH2CVR  (16 <<  0) /* 01: Capture/Compare 2 value */
#define CH32V_TIM1_CH2CVR_CH2CVR_MASK  (0xffff)
#define CH32V_TIM1_CH3CVR_OFFSET  0x003c
#define CH32V_TIM1_CH3CVR         (CH32V_TIM1_BASE + CH32V_TIM1_CH3CVR_OFFSET)
#define CH32V_TIM1_CH3CVR_CH3CVR  (16 <<  0) /* 01: Capture/Compare value */
#define CH32V_TIM1_CH3CVR_CH3CVR_MASK  (0xffff)
#define CH32V_TIM1_CH4CVR_OFFSET  0x0040
#define CH32V_TIM1_CH4CVR         (CH32V_TIM1_BASE + CH32V_TIM1_CH4CVR_OFFSET)
#define CH32V_TIM1_CH4CVR_CH4CVR  (16 <<  0) /* 01: Capture/Compare value */
#define CH32V_TIM1_CH4CVR_CH4CVR_MASK  (0xffff)
#define CH32V_TIM1_BDTR_OFFSET    0x0044
#define CH32V_TIM1_BDTR           (CH32V_TIM1_BASE + CH32V_TIM1_BDTR_OFFSET)
#define CH32V_TIM1_BDTR_MOE       (1 << 15) /* 8000: Main output enable */
#define CH32V_TIM1_BDTR_AOE       (1 << 14) /* 4000: Automatic output enable */
#define CH32V_TIM1_BDTR_BKP       (1 << 13) /* 2000: Break polarity */
#define CH32V_TIM1_BDTR_BKE       (1 << 12) /* 1000: Break enable */
#define CH32V_TIM1_BDTR_OSSR      (1 << 11) /* 800: Off-state selection for Run mode */
#define CH32V_TIM1_BDTR_OSSI      (1 << 10) /* 400: Off-state selection for Idle mode */
#define CH32V_TIM1_BDTR_LOCK      (2 <<  8) /* 100: Lock configuration */
#define CH32V_TIM1_BDTR_LOCK_MASK      (0x03)
#define CH32V_TIM1_BDTR_DTG       (8 <<  0) /* 01: Dead-time generator setup */
#define CH32V_TIM1_BDTR_DTG_MASK       (0xff)
#define CH32V_TIM1_DMACFGR_OFFSET 0x0048
#define CH32V_TIM1_DMACFGR        (CH32V_TIM1_BASE + CH32V_TIM1_DMACFGR_OFFSET)
#define CH32V_TIM1_DMACFGR_DBL    (5 <<  8) /* 100: DMA burst length */
#define CH32V_TIM1_DMACFGR_DBL_MASK    (0x1f)
#define CH32V_TIM1_DMACFGR_DBA    (5 <<  0) /* 01: DMA base address */
#define CH32V_TIM1_DMACFGR_DBA_MASK    (0x1f)
#define CH32V_TIM1_DMAADR_OFFSET  0x004c
#define CH32V_TIM1_DMAADR         (CH32V_TIM1_BASE + CH32V_TIM1_DMAADR_OFFSET)
#define CH32V_TIM1_DMAADR_DMAADR  (16 <<  0) /* 01: DMA register for burst accesses */
#define CH32V_TIM1_DMAADR_DMAADR_MASK  (0xffff)

/* No registers defined for peripheral TIM8. Using those of TIM1. */
#define CH32V_TIM8_BASE           0x40013400
#define CH32V_TIM8_CTLR1_OFFSET   CH32V_TIM1_CTLR1_OFFSET
#define CH32V_TIM8_CTLR1          CH32V_TIM1_CTLR1
#define CH32V_TIM8_CTLR1_CKD      CH32V_TIM1_CTLR1_CKD
#define CH32V_TIM8_CTLR1_CKD_MASK CH32V_TIM1_CTLR1_CKD_MASK
#define CH32V_TIM8_CTLR1_ARPE     CH32V_TIM1_CTLR1_ARPE
#define CH32V_TIM8_CTLR1_CMS      CH32V_TIM1_CTLR1_CMS
#define CH32V_TIM8_CTLR1_CMS_MASK CH32V_TIM1_CTLR1_CMS_MASK
#define CH32V_TIM8_CTLR1_DIR      CH32V_TIM1_CTLR1_DIR
#define CH32V_TIM8_CTLR1_OPM      CH32V_TIM1_CTLR1_OPM
#define CH32V_TIM8_CTLR1_URS      CH32V_TIM1_CTLR1_URS
#define CH32V_TIM8_CTLR1_UDIS     CH32V_TIM1_CTLR1_UDIS
#define CH32V_TIM8_CTLR1_CEN      CH32V_TIM1_CTLR1_CEN
#define CH32V_TIM8_CTLR2_OFFSET   CH32V_TIM1_CTLR2_OFFSET
#define CH32V_TIM8_CTLR2          CH32V_TIM1_CTLR2
#define CH32V_TIM8_CTLR2_OIS4     CH32V_TIM1_CTLR2_OIS4
#define CH32V_TIM8_CTLR2_OIS3N    CH32V_TIM1_CTLR2_OIS3N
#define CH32V_TIM8_CTLR2_OIS3     CH32V_TIM1_CTLR2_OIS3
#define CH32V_TIM8_CTLR2_OIS2N    CH32V_TIM1_CTLR2_OIS2N
#define CH32V_TIM8_CTLR2_OIS2     CH32V_TIM1_CTLR2_OIS2
#define CH32V_TIM8_CTLR2_OIS1N    CH32V_TIM1_CTLR2_OIS1N
#define CH32V_TIM8_CTLR2_OIS1     CH32V_TIM1_CTLR2_OIS1
#define CH32V_TIM8_CTLR2_TI1S     CH32V_TIM1_CTLR2_TI1S
#define CH32V_TIM8_CTLR2_MMS      CH32V_TIM1_CTLR2_MMS
#define CH32V_TIM8_CTLR2_MMS_MASK CH32V_TIM1_CTLR2_MMS_MASK
#define CH32V_TIM8_CTLR2_CCDS     CH32V_TIM1_CTLR2_CCDS
#define CH32V_TIM8_CTLR2_CCUS     CH32V_TIM1_CTLR2_CCUS
#define CH32V_TIM8_CTLR2_CCPC     CH32V_TIM1_CTLR2_CCPC
#define CH32V_TIM8_SMCFGR_OFFSET  CH32V_TIM1_SMCFGR_OFFSET
#define CH32V_TIM8_SMCFGR         CH32V_TIM1_SMCFGR
#define CH32V_TIM8_SMCFGR_ETP     CH32V_TIM1_SMCFGR_ETP
#define CH32V_TIM8_SMCFGR_ECE     CH32V_TIM1_SMCFGR_ECE
#define CH32V_TIM8_SMCFGR_ETPS    CH32V_TIM1_SMCFGR_ETPS
#define CH32V_TIM8_SMCFGR_ETPS_MASK CH32V_TIM1_SMCFGR_ETPS_MASK
#define CH32V_TIM8_SMCFGR_ETF     CH32V_TIM1_SMCFGR_ETF
#define CH32V_TIM8_SMCFGR_ETF_MASK CH32V_TIM1_SMCFGR_ETF_MASK
#define CH32V_TIM8_SMCFGR_MSM     CH32V_TIM1_SMCFGR_MSM
#define CH32V_TIM8_SMCFGR_TS      CH32V_TIM1_SMCFGR_TS
#define CH32V_TIM8_SMCFGR_TS_MASK CH32V_TIM1_SMCFGR_TS_MASK
#define CH32V_TIM8_SMCFGR_SMS     CH32V_TIM1_SMCFGR_SMS
#define CH32V_TIM8_SMCFGR_SMS_MASK CH32V_TIM1_SMCFGR_SMS_MASK
#define CH32V_TIM8_DMAINTENR_OFFSET CH32V_TIM1_DMAINTENR_OFFSET
#define CH32V_TIM8_DMAINTENR      CH32V_TIM1_DMAINTENR
#define CH32V_TIM8_DMAINTENR_TDE  CH32V_TIM1_DMAINTENR_TDE
#define CH32V_TIM8_DMAINTENR_COMDE CH32V_TIM1_DMAINTENR_COMDE
#define CH32V_TIM8_DMAINTENR_CC4DE CH32V_TIM1_DMAINTENR_CC4DE
#define CH32V_TIM8_DMAINTENR_CC3DE CH32V_TIM1_DMAINTENR_CC3DE
#define CH32V_TIM8_DMAINTENR_CC2DE CH32V_TIM1_DMAINTENR_CC2DE
#define CH32V_TIM8_DMAINTENR_CC1DE CH32V_TIM1_DMAINTENR_CC1DE
#define CH32V_TIM8_DMAINTENR_UDE  CH32V_TIM1_DMAINTENR_UDE
#define CH32V_TIM8_DMAINTENR_BIE  CH32V_TIM1_DMAINTENR_BIE
#define CH32V_TIM8_DMAINTENR_TIE  CH32V_TIM1_DMAINTENR_TIE
#define CH32V_TIM8_DMAINTENR_COMIE CH32V_TIM1_DMAINTENR_COMIE
#define CH32V_TIM8_DMAINTENR_CC4IE CH32V_TIM1_DMAINTENR_CC4IE
#define CH32V_TIM8_DMAINTENR_CC3IE CH32V_TIM1_DMAINTENR_CC3IE
#define CH32V_TIM8_DMAINTENR_CC2IE CH32V_TIM1_DMAINTENR_CC2IE
#define CH32V_TIM8_DMAINTENR_CC1IE CH32V_TIM1_DMAINTENR_CC1IE
#define CH32V_TIM8_DMAINTENR_UIE  CH32V_TIM1_DMAINTENR_UIE
#define CH32V_TIM8_INTFR_OFFSET   CH32V_TIM1_INTFR_OFFSET
#define CH32V_TIM8_INTFR          CH32V_TIM1_INTFR
#define CH32V_TIM8_INTFR_CC4OF    CH32V_TIM1_INTFR_CC4OF
#define CH32V_TIM8_INTFR_CC3OF    CH32V_TIM1_INTFR_CC3OF
#define CH32V_TIM8_INTFR_CC2OF    CH32V_TIM1_INTFR_CC2OF
#define CH32V_TIM8_INTFR_CC1OF    CH32V_TIM1_INTFR_CC1OF
#define CH32V_TIM8_INTFR_BIF      CH32V_TIM1_INTFR_BIF
#define CH32V_TIM8_INTFR_TIF      CH32V_TIM1_INTFR_TIF
#define CH32V_TIM8_INTFR_COMIF    CH32V_TIM1_INTFR_COMIF
#define CH32V_TIM8_INTFR_CC4IF    CH32V_TIM1_INTFR_CC4IF
#define CH32V_TIM8_INTFR_CC3IF    CH32V_TIM1_INTFR_CC3IF
#define CH32V_TIM8_INTFR_CC2IF    CH32V_TIM1_INTFR_CC2IF
#define CH32V_TIM8_INTFR_CC1IF    CH32V_TIM1_INTFR_CC1IF
#define CH32V_TIM8_INTFR_UIF      CH32V_TIM1_INTFR_UIF
#define CH32V_TIM8_SWEVGR_OFFSET  CH32V_TIM1_SWEVGR_OFFSET
#define CH32V_TIM8_SWEVGR         CH32V_TIM1_SWEVGR
#define CH32V_TIM8_SWEVGR_BG      CH32V_TIM1_SWEVGR_BG
#define CH32V_TIM8_SWEVGR_TG      CH32V_TIM1_SWEVGR_TG
#define CH32V_TIM8_SWEVGR_COMG    CH32V_TIM1_SWEVGR_COMG
#define CH32V_TIM8_SWEVGR_CC4G    CH32V_TIM1_SWEVGR_CC4G
#define CH32V_TIM8_SWEVGR_CC3G    CH32V_TIM1_SWEVGR_CC3G
#define CH32V_TIM8_SWEVGR_CC2G    CH32V_TIM1_SWEVGR_CC2G
#define CH32V_TIM8_SWEVGR_CC1G    CH32V_TIM1_SWEVGR_CC1G
#define CH32V_TIM8_SWEVGR_UG      CH32V_TIM1_SWEVGR_UG
#define CH32V_TIM8_CHCTLR1_Output_OFFSET CH32V_TIM1_CHCTLR1_Output_OFFSET
#define CH32V_TIM8_CHCTLR1_Output CH32V_TIM1_CHCTLR1_Output
#define CH32V_TIM8_CHCTLR1_Output_OC2CE CH32V_TIM1_CHCTLR1_Output_OC2CE
#define CH32V_TIM8_CHCTLR1_Output_OC2M CH32V_TIM1_CHCTLR1_Output_OC2M
#define CH32V_TIM8_CHCTLR1_Output_OC2M_MASK CH32V_TIM1_CHCTLR1_Output_OC2M_MASK
#define CH32V_TIM8_CHCTLR1_Output_OC2PE CH32V_TIM1_CHCTLR1_Output_OC2PE
#define CH32V_TIM8_CHCTLR1_Output_OC2FE CH32V_TIM1_CHCTLR1_Output_OC2FE
#define CH32V_TIM8_CHCTLR1_Output_CC2S CH32V_TIM1_CHCTLR1_Output_CC2S
#define CH32V_TIM8_CHCTLR1_Output_CC2S_MASK CH32V_TIM1_CHCTLR1_Output_CC2S_MASK
#define CH32V_TIM8_CHCTLR1_Output_OC1CE CH32V_TIM1_CHCTLR1_Output_OC1CE
#define CH32V_TIM8_CHCTLR1_Output_OC1M CH32V_TIM1_CHCTLR1_Output_OC1M
#define CH32V_TIM8_CHCTLR1_Output_OC1M_MASK CH32V_TIM1_CHCTLR1_Output_OC1M_MASK
#define CH32V_TIM8_CHCTLR1_Output_OC1PE CH32V_TIM1_CHCTLR1_Output_OC1PE
#define CH32V_TIM8_CHCTLR1_Output_OC1FE CH32V_TIM1_CHCTLR1_Output_OC1FE
#define CH32V_TIM8_CHCTLR1_Output_CC1S CH32V_TIM1_CHCTLR1_Output_CC1S
#define CH32V_TIM8_CHCTLR1_Output_CC1S_MASK CH32V_TIM1_CHCTLR1_Output_CC1S_MASK
#define CH32V_TIM8_CHCTLR1_Input_OFFSET CH32V_TIM1_CHCTLR1_Input_OFFSET
#define CH32V_TIM8_CHCTLR1_Input  CH32V_TIM1_CHCTLR1_Input
#define CH32V_TIM8_CHCTLR1_Input_IC2F CH32V_TIM1_CHCTLR1_Input_IC2F
#define CH32V_TIM8_CHCTLR1_Input_IC2F_MASK CH32V_TIM1_CHCTLR1_Input_IC2F_MASK
#define CH32V_TIM8_CHCTLR1_Input_IC2PCS CH32V_TIM1_CHCTLR1_Input_IC2PCS
#define CH32V_TIM8_CHCTLR1_Input_IC2PCS_MASK CH32V_TIM1_CHCTLR1_Input_IC2PCS_MASK
#define CH32V_TIM8_CHCTLR1_Input_CC2S CH32V_TIM1_CHCTLR1_Input_CC2S
#define CH32V_TIM8_CHCTLR1_Input_CC2S_MASK CH32V_TIM1_CHCTLR1_Input_CC2S_MASK
#define CH32V_TIM8_CHCTLR1_Input_IC1F CH32V_TIM1_CHCTLR1_Input_IC1F
#define CH32V_TIM8_CHCTLR1_Input_IC1F_MASK CH32V_TIM1_CHCTLR1_Input_IC1F_MASK
#define CH32V_TIM8_CHCTLR1_Input_IC1PSC CH32V_TIM1_CHCTLR1_Input_IC1PSC
#define CH32V_TIM8_CHCTLR1_Input_IC1PSC_MASK CH32V_TIM1_CHCTLR1_Input_IC1PSC_MASK
#define CH32V_TIM8_CHCTLR1_Input_CC1S CH32V_TIM1_CHCTLR1_Input_CC1S
#define CH32V_TIM8_CHCTLR1_Input_CC1S_MASK CH32V_TIM1_CHCTLR1_Input_CC1S_MASK
#define CH32V_TIM8_CHCTLR2_Output_OFFSET CH32V_TIM1_CHCTLR2_Output_OFFSET
#define CH32V_TIM8_CHCTLR2_Output CH32V_TIM1_CHCTLR2_Output
#define CH32V_TIM8_CHCTLR2_Output_OC4CE CH32V_TIM1_CHCTLR2_Output_OC4CE
#define CH32V_TIM8_CHCTLR2_Output_OC4M CH32V_TIM1_CHCTLR2_Output_OC4M
#define CH32V_TIM8_CHCTLR2_Output_OC4M_MASK CH32V_TIM1_CHCTLR2_Output_OC4M_MASK
#define CH32V_TIM8_CHCTLR2_Output_OC4PE CH32V_TIM1_CHCTLR2_Output_OC4PE
#define CH32V_TIM8_CHCTLR2_Output_OC4FE CH32V_TIM1_CHCTLR2_Output_OC4FE
#define CH32V_TIM8_CHCTLR2_Output_CC4S CH32V_TIM1_CHCTLR2_Output_CC4S
#define CH32V_TIM8_CHCTLR2_Output_CC4S_MASK CH32V_TIM1_CHCTLR2_Output_CC4S_MASK
#define CH32V_TIM8_CHCTLR2_Output_OC3CE CH32V_TIM1_CHCTLR2_Output_OC3CE
#define CH32V_TIM8_CHCTLR2_Output_OC3M CH32V_TIM1_CHCTLR2_Output_OC3M
#define CH32V_TIM8_CHCTLR2_Output_OC3M_MASK CH32V_TIM1_CHCTLR2_Output_OC3M_MASK
#define CH32V_TIM8_CHCTLR2_Output_OC3PE CH32V_TIM1_CHCTLR2_Output_OC3PE
#define CH32V_TIM8_CHCTLR2_Output_OC3FE CH32V_TIM1_CHCTLR2_Output_OC3FE
#define CH32V_TIM8_CHCTLR2_Output_CC3S CH32V_TIM1_CHCTLR2_Output_CC3S
#define CH32V_TIM8_CHCTLR2_Output_CC3S_MASK CH32V_TIM1_CHCTLR2_Output_CC3S_MASK
#define CH32V_TIM8_CHCTLR2_Input_OFFSET CH32V_TIM1_CHCTLR2_Input_OFFSET
#define CH32V_TIM8_CHCTLR2_Input  CH32V_TIM1_CHCTLR2_Input
#define CH32V_TIM8_CHCTLR2_Input_IC4F CH32V_TIM1_CHCTLR2_Input_IC4F
#define CH32V_TIM8_CHCTLR2_Input_IC4F_MASK CH32V_TIM1_CHCTLR2_Input_IC4F_MASK
#define CH32V_TIM8_CHCTLR2_Input_IC4PSC CH32V_TIM1_CHCTLR2_Input_IC4PSC
#define CH32V_TIM8_CHCTLR2_Input_IC4PSC_MASK CH32V_TIM1_CHCTLR2_Input_IC4PSC_MASK
#define CH32V_TIM8_CHCTLR2_Input_CC4S CH32V_TIM1_CHCTLR2_Input_CC4S
#define CH32V_TIM8_CHCTLR2_Input_CC4S_MASK CH32V_TIM1_CHCTLR2_Input_CC4S_MASK
#define CH32V_TIM8_CHCTLR2_Input_IC3F CH32V_TIM1_CHCTLR2_Input_IC3F
#define CH32V_TIM8_CHCTLR2_Input_IC3F_MASK CH32V_TIM1_CHCTLR2_Input_IC3F_MASK
#define CH32V_TIM8_CHCTLR2_Input_IC3PSC CH32V_TIM1_CHCTLR2_Input_IC3PSC
#define CH32V_TIM8_CHCTLR2_Input_IC3PSC_MASK CH32V_TIM1_CHCTLR2_Input_IC3PSC_MASK
#define CH32V_TIM8_CHCTLR2_Input_CC3S CH32V_TIM1_CHCTLR2_Input_CC3S
#define CH32V_TIM8_CHCTLR2_Input_CC3S_MASK CH32V_TIM1_CHCTLR2_Input_CC3S_MASK
#define CH32V_TIM8_CCER_OFFSET    CH32V_TIM1_CCER_OFFSET
#define CH32V_TIM8_CCER           CH32V_TIM1_CCER
#define CH32V_TIM8_CCER_CC4P      CH32V_TIM1_CCER_CC4P
#define CH32V_TIM8_CCER_CC4E      CH32V_TIM1_CCER_CC4E
#define CH32V_TIM8_CCER_CC3NP     CH32V_TIM1_CCER_CC3NP
#define CH32V_TIM8_CCER_CC3NE     CH32V_TIM1_CCER_CC3NE
#define CH32V_TIM8_CCER_CC3P      CH32V_TIM1_CCER_CC3P
#define CH32V_TIM8_CCER_CC3E      CH32V_TIM1_CCER_CC3E
#define CH32V_TIM8_CCER_CC2NP     CH32V_TIM1_CCER_CC2NP
#define CH32V_TIM8_CCER_CC2NE     CH32V_TIM1_CCER_CC2NE
#define CH32V_TIM8_CCER_CC2P      CH32V_TIM1_CCER_CC2P
#define CH32V_TIM8_CCER_CC2E      CH32V_TIM1_CCER_CC2E
#define CH32V_TIM8_CCER_CC1NP     CH32V_TIM1_CCER_CC1NP
#define CH32V_TIM8_CCER_CC1NE     CH32V_TIM1_CCER_CC1NE
#define CH32V_TIM8_CCER_CC1P      CH32V_TIM1_CCER_CC1P
#define CH32V_TIM8_CCER_CC1E      CH32V_TIM1_CCER_CC1E
#define CH32V_TIM8_CNT_OFFSET     CH32V_TIM1_CNT_OFFSET
#define CH32V_TIM8_CNT            CH32V_TIM1_CNT
#define CH32V_TIM8_CNT_CNT        CH32V_TIM1_CNT_CNT
#define CH32V_TIM8_CNT_CNT_MASK   CH32V_TIM1_CNT_CNT_MASK
#define CH32V_TIM8_PSC_OFFSET     CH32V_TIM1_PSC_OFFSET
#define CH32V_TIM8_PSC            CH32V_TIM1_PSC
#define CH32V_TIM8_PSC_PSC        CH32V_TIM1_PSC_PSC
#define CH32V_TIM8_PSC_PSC_MASK   CH32V_TIM1_PSC_PSC_MASK
#define CH32V_TIM8_ATRLR_OFFSET   CH32V_TIM1_ATRLR_OFFSET
#define CH32V_TIM8_ATRLR          CH32V_TIM1_ATRLR
#define CH32V_TIM8_ATRLR_ATRLR    CH32V_TIM1_ATRLR_ATRLR
#define CH32V_TIM8_ATRLR_ATRLR_MASK CH32V_TIM1_ATRLR_ATRLR_MASK
#define CH32V_TIM8_RPTCR_OFFSET   CH32V_TIM1_RPTCR_OFFSET
#define CH32V_TIM8_RPTCR          CH32V_TIM1_RPTCR
#define CH32V_TIM8_RPTCR_RPTCR    CH32V_TIM1_RPTCR_RPTCR
#define CH32V_TIM8_RPTCR_RPTCR_MASK CH32V_TIM1_RPTCR_RPTCR_MASK
#define CH32V_TIM8_CH1CVR_OFFSET  CH32V_TIM1_CH1CVR_OFFSET
#define CH32V_TIM8_CH1CVR         CH32V_TIM1_CH1CVR
#define CH32V_TIM8_CH1CVR_CH1CVR  CH32V_TIM1_CH1CVR_CH1CVR
#define CH32V_TIM8_CH1CVR_CH1CVR_MASK CH32V_TIM1_CH1CVR_CH1CVR_MASK
#define CH32V_TIM8_CH2CVR_OFFSET  CH32V_TIM1_CH2CVR_OFFSET
#define CH32V_TIM8_CH2CVR         CH32V_TIM1_CH2CVR
#define CH32V_TIM8_CH2CVR_CH2CVR  CH32V_TIM1_CH2CVR_CH2CVR
#define CH32V_TIM8_CH2CVR_CH2CVR_MASK CH32V_TIM1_CH2CVR_CH2CVR_MASK
#define CH32V_TIM8_CH3CVR_OFFSET  CH32V_TIM1_CH3CVR_OFFSET
#define CH32V_TIM8_CH3CVR         CH32V_TIM1_CH3CVR
#define CH32V_TIM8_CH3CVR_CH3CVR  CH32V_TIM1_CH3CVR_CH3CVR
#define CH32V_TIM8_CH3CVR_CH3CVR_MASK CH32V_TIM1_CH3CVR_CH3CVR_MASK
#define CH32V_TIM8_CH4CVR_OFFSET  CH32V_TIM1_CH4CVR_OFFSET
#define CH32V_TIM8_CH4CVR         CH32V_TIM1_CH4CVR
#define CH32V_TIM8_CH4CVR_CH4CVR  CH32V_TIM1_CH4CVR_CH4CVR
#define CH32V_TIM8_CH4CVR_CH4CVR_MASK CH32V_TIM1_CH4CVR_CH4CVR_MASK
#define CH32V_TIM8_BDTR_OFFSET    CH32V_TIM1_BDTR_OFFSET
#define CH32V_TIM8_BDTR           CH32V_TIM1_BDTR
#define CH32V_TIM8_BDTR_MOE       CH32V_TIM1_BDTR_MOE
#define CH32V_TIM8_BDTR_AOE       CH32V_TIM1_BDTR_AOE
#define CH32V_TIM8_BDTR_BKP       CH32V_TIM1_BDTR_BKP
#define CH32V_TIM8_BDTR_BKE       CH32V_TIM1_BDTR_BKE
#define CH32V_TIM8_BDTR_OSSR      CH32V_TIM1_BDTR_OSSR
#define CH32V_TIM8_BDTR_OSSI      CH32V_TIM1_BDTR_OSSI
#define CH32V_TIM8_BDTR_LOCK      CH32V_TIM1_BDTR_LOCK
#define CH32V_TIM8_BDTR_LOCK_MASK CH32V_TIM1_BDTR_LOCK_MASK
#define CH32V_TIM8_BDTR_DTG       CH32V_TIM1_BDTR_DTG
#define CH32V_TIM8_BDTR_DTG_MASK  CH32V_TIM1_BDTR_DTG_MASK
#define CH32V_TIM8_DMACFGR_OFFSET CH32V_TIM1_DMACFGR_OFFSET
#define CH32V_TIM8_DMACFGR        CH32V_TIM1_DMACFGR
#define CH32V_TIM8_DMACFGR_DBL    CH32V_TIM1_DMACFGR_DBL
#define CH32V_TIM8_DMACFGR_DBL_MASK CH32V_TIM1_DMACFGR_DBL_MASK
#define CH32V_TIM8_DMACFGR_DBA    CH32V_TIM1_DMACFGR_DBA
#define CH32V_TIM8_DMACFGR_DBA_MASK CH32V_TIM1_DMACFGR_DBA_MASK
#define CH32V_TIM8_DMAADR_OFFSET  CH32V_TIM1_DMAADR_OFFSET
#define CH32V_TIM8_DMAADR         CH32V_TIM1_DMAADR
#define CH32V_TIM8_DMAADR_DMAADR  CH32V_TIM1_DMAADR_DMAADR
#define CH32V_TIM8_DMAADR_DMAADR_MASK CH32V_TIM1_DMAADR_DMAADR_MASK

/* No registers defined for peripheral TIM9. Using those of TIM1. */
#define CH32V_TIM9_BASE           0x40014c00
#define CH32V_TIM9_CTLR1_OFFSET   CH32V_TIM1_CTLR1_OFFSET
#define CH32V_TIM9_CTLR1          CH32V_TIM1_CTLR1
#define CH32V_TIM9_CTLR1_CKD      CH32V_TIM1_CTLR1_CKD
#define CH32V_TIM9_CTLR1_CKD_MASK CH32V_TIM1_CTLR1_CKD_MASK
#define CH32V_TIM9_CTLR1_ARPE     CH32V_TIM1_CTLR1_ARPE
#define CH32V_TIM9_CTLR1_CMS      CH32V_TIM1_CTLR1_CMS
#define CH32V_TIM9_CTLR1_CMS_MASK CH32V_TIM1_CTLR1_CMS_MASK
#define CH32V_TIM9_CTLR1_DIR      CH32V_TIM1_CTLR1_DIR
#define CH32V_TIM9_CTLR1_OPM      CH32V_TIM1_CTLR1_OPM
#define CH32V_TIM9_CTLR1_URS      CH32V_TIM1_CTLR1_URS
#define CH32V_TIM9_CTLR1_UDIS     CH32V_TIM1_CTLR1_UDIS
#define CH32V_TIM9_CTLR1_CEN      CH32V_TIM1_CTLR1_CEN
#define CH32V_TIM9_CTLR2_OFFSET   CH32V_TIM1_CTLR2_OFFSET
#define CH32V_TIM9_CTLR2          CH32V_TIM1_CTLR2
#define CH32V_TIM9_CTLR2_OIS4     CH32V_TIM1_CTLR2_OIS4
#define CH32V_TIM9_CTLR2_OIS3N    CH32V_TIM1_CTLR2_OIS3N
#define CH32V_TIM9_CTLR2_OIS3     CH32V_TIM1_CTLR2_OIS3
#define CH32V_TIM9_CTLR2_OIS2N    CH32V_TIM1_CTLR2_OIS2N
#define CH32V_TIM9_CTLR2_OIS2     CH32V_TIM1_CTLR2_OIS2
#define CH32V_TIM9_CTLR2_OIS1N    CH32V_TIM1_CTLR2_OIS1N
#define CH32V_TIM9_CTLR2_OIS1     CH32V_TIM1_CTLR2_OIS1
#define CH32V_TIM9_CTLR2_TI1S     CH32V_TIM1_CTLR2_TI1S
#define CH32V_TIM9_CTLR2_MMS      CH32V_TIM1_CTLR2_MMS
#define CH32V_TIM9_CTLR2_MMS_MASK CH32V_TIM1_CTLR2_MMS_MASK
#define CH32V_TIM9_CTLR2_CCDS     CH32V_TIM1_CTLR2_CCDS
#define CH32V_TIM9_CTLR2_CCUS     CH32V_TIM1_CTLR2_CCUS
#define CH32V_TIM9_CTLR2_CCPC     CH32V_TIM1_CTLR2_CCPC
#define CH32V_TIM9_SMCFGR_OFFSET  CH32V_TIM1_SMCFGR_OFFSET
#define CH32V_TIM9_SMCFGR         CH32V_TIM1_SMCFGR
#define CH32V_TIM9_SMCFGR_ETP     CH32V_TIM1_SMCFGR_ETP
#define CH32V_TIM9_SMCFGR_ECE     CH32V_TIM1_SMCFGR_ECE
#define CH32V_TIM9_SMCFGR_ETPS    CH32V_TIM1_SMCFGR_ETPS
#define CH32V_TIM9_SMCFGR_ETPS_MASK CH32V_TIM1_SMCFGR_ETPS_MASK
#define CH32V_TIM9_SMCFGR_ETF     CH32V_TIM1_SMCFGR_ETF
#define CH32V_TIM9_SMCFGR_ETF_MASK CH32V_TIM1_SMCFGR_ETF_MASK
#define CH32V_TIM9_SMCFGR_MSM     CH32V_TIM1_SMCFGR_MSM
#define CH32V_TIM9_SMCFGR_TS      CH32V_TIM1_SMCFGR_TS
#define CH32V_TIM9_SMCFGR_TS_MASK CH32V_TIM1_SMCFGR_TS_MASK
#define CH32V_TIM9_SMCFGR_SMS     CH32V_TIM1_SMCFGR_SMS
#define CH32V_TIM9_SMCFGR_SMS_MASK CH32V_TIM1_SMCFGR_SMS_MASK
#define CH32V_TIM9_DMAINTENR_OFFSET CH32V_TIM1_DMAINTENR_OFFSET
#define CH32V_TIM9_DMAINTENR      CH32V_TIM1_DMAINTENR
#define CH32V_TIM9_DMAINTENR_TDE  CH32V_TIM1_DMAINTENR_TDE
#define CH32V_TIM9_DMAINTENR_COMDE CH32V_TIM1_DMAINTENR_COMDE
#define CH32V_TIM9_DMAINTENR_CC4DE CH32V_TIM1_DMAINTENR_CC4DE
#define CH32V_TIM9_DMAINTENR_CC3DE CH32V_TIM1_DMAINTENR_CC3DE
#define CH32V_TIM9_DMAINTENR_CC2DE CH32V_TIM1_DMAINTENR_CC2DE
#define CH32V_TIM9_DMAINTENR_CC1DE CH32V_TIM1_DMAINTENR_CC1DE
#define CH32V_TIM9_DMAINTENR_UDE  CH32V_TIM1_DMAINTENR_UDE
#define CH32V_TIM9_DMAINTENR_BIE  CH32V_TIM1_DMAINTENR_BIE
#define CH32V_TIM9_DMAINTENR_TIE  CH32V_TIM1_DMAINTENR_TIE
#define CH32V_TIM9_DMAINTENR_COMIE CH32V_TIM1_DMAINTENR_COMIE
#define CH32V_TIM9_DMAINTENR_CC4IE CH32V_TIM1_DMAINTENR_CC4IE
#define CH32V_TIM9_DMAINTENR_CC3IE CH32V_TIM1_DMAINTENR_CC3IE
#define CH32V_TIM9_DMAINTENR_CC2IE CH32V_TIM1_DMAINTENR_CC2IE
#define CH32V_TIM9_DMAINTENR_CC1IE CH32V_TIM1_DMAINTENR_CC1IE
#define CH32V_TIM9_DMAINTENR_UIE  CH32V_TIM1_DMAINTENR_UIE
#define CH32V_TIM9_INTFR_OFFSET   CH32V_TIM1_INTFR_OFFSET
#define CH32V_TIM9_INTFR          CH32V_TIM1_INTFR
#define CH32V_TIM9_INTFR_CC4OF    CH32V_TIM1_INTFR_CC4OF
#define CH32V_TIM9_INTFR_CC3OF    CH32V_TIM1_INTFR_CC3OF
#define CH32V_TIM9_INTFR_CC2OF    CH32V_TIM1_INTFR_CC2OF
#define CH32V_TIM9_INTFR_CC1OF    CH32V_TIM1_INTFR_CC1OF
#define CH32V_TIM9_INTFR_BIF      CH32V_TIM1_INTFR_BIF
#define CH32V_TIM9_INTFR_TIF      CH32V_TIM1_INTFR_TIF
#define CH32V_TIM9_INTFR_COMIF    CH32V_TIM1_INTFR_COMIF
#define CH32V_TIM9_INTFR_CC4IF    CH32V_TIM1_INTFR_CC4IF
#define CH32V_TIM9_INTFR_CC3IF    CH32V_TIM1_INTFR_CC3IF
#define CH32V_TIM9_INTFR_CC2IF    CH32V_TIM1_INTFR_CC2IF
#define CH32V_TIM9_INTFR_CC1IF    CH32V_TIM1_INTFR_CC1IF
#define CH32V_TIM9_INTFR_UIF      CH32V_TIM1_INTFR_UIF
#define CH32V_TIM9_SWEVGR_OFFSET  CH32V_TIM1_SWEVGR_OFFSET
#define CH32V_TIM9_SWEVGR         CH32V_TIM1_SWEVGR
#define CH32V_TIM9_SWEVGR_BG      CH32V_TIM1_SWEVGR_BG
#define CH32V_TIM9_SWEVGR_TG      CH32V_TIM1_SWEVGR_TG
#define CH32V_TIM9_SWEVGR_COMG    CH32V_TIM1_SWEVGR_COMG
#define CH32V_TIM9_SWEVGR_CC4G    CH32V_TIM1_SWEVGR_CC4G
#define CH32V_TIM9_SWEVGR_CC3G    CH32V_TIM1_SWEVGR_CC3G
#define CH32V_TIM9_SWEVGR_CC2G    CH32V_TIM1_SWEVGR_CC2G
#define CH32V_TIM9_SWEVGR_CC1G    CH32V_TIM1_SWEVGR_CC1G
#define CH32V_TIM9_SWEVGR_UG      CH32V_TIM1_SWEVGR_UG
#define CH32V_TIM9_CHCTLR1_Output_OFFSET CH32V_TIM1_CHCTLR1_Output_OFFSET
#define CH32V_TIM9_CHCTLR1_Output CH32V_TIM1_CHCTLR1_Output
#define CH32V_TIM9_CHCTLR1_Output_OC2CE CH32V_TIM1_CHCTLR1_Output_OC2CE
#define CH32V_TIM9_CHCTLR1_Output_OC2M CH32V_TIM1_CHCTLR1_Output_OC2M
#define CH32V_TIM9_CHCTLR1_Output_OC2M_MASK CH32V_TIM1_CHCTLR1_Output_OC2M_MASK
#define CH32V_TIM9_CHCTLR1_Output_OC2PE CH32V_TIM1_CHCTLR1_Output_OC2PE
#define CH32V_TIM9_CHCTLR1_Output_OC2FE CH32V_TIM1_CHCTLR1_Output_OC2FE
#define CH32V_TIM9_CHCTLR1_Output_CC2S CH32V_TIM1_CHCTLR1_Output_CC2S
#define CH32V_TIM9_CHCTLR1_Output_CC2S_MASK CH32V_TIM1_CHCTLR1_Output_CC2S_MASK
#define CH32V_TIM9_CHCTLR1_Output_OC1CE CH32V_TIM1_CHCTLR1_Output_OC1CE
#define CH32V_TIM9_CHCTLR1_Output_OC1M CH32V_TIM1_CHCTLR1_Output_OC1M
#define CH32V_TIM9_CHCTLR1_Output_OC1M_MASK CH32V_TIM1_CHCTLR1_Output_OC1M_MASK
#define CH32V_TIM9_CHCTLR1_Output_OC1PE CH32V_TIM1_CHCTLR1_Output_OC1PE
#define CH32V_TIM9_CHCTLR1_Output_OC1FE CH32V_TIM1_CHCTLR1_Output_OC1FE
#define CH32V_TIM9_CHCTLR1_Output_CC1S CH32V_TIM1_CHCTLR1_Output_CC1S
#define CH32V_TIM9_CHCTLR1_Output_CC1S_MASK CH32V_TIM1_CHCTLR1_Output_CC1S_MASK
#define CH32V_TIM9_CHCTLR1_Input_OFFSET CH32V_TIM1_CHCTLR1_Input_OFFSET
#define CH32V_TIM9_CHCTLR1_Input  CH32V_TIM1_CHCTLR1_Input
#define CH32V_TIM9_CHCTLR1_Input_IC2F CH32V_TIM1_CHCTLR1_Input_IC2F
#define CH32V_TIM9_CHCTLR1_Input_IC2F_MASK CH32V_TIM1_CHCTLR1_Input_IC2F_MASK
#define CH32V_TIM9_CHCTLR1_Input_IC2PCS CH32V_TIM1_CHCTLR1_Input_IC2PCS
#define CH32V_TIM9_CHCTLR1_Input_IC2PCS_MASK CH32V_TIM1_CHCTLR1_Input_IC2PCS_MASK
#define CH32V_TIM9_CHCTLR1_Input_CC2S CH32V_TIM1_CHCTLR1_Input_CC2S
#define CH32V_TIM9_CHCTLR1_Input_CC2S_MASK CH32V_TIM1_CHCTLR1_Input_CC2S_MASK
#define CH32V_TIM9_CHCTLR1_Input_IC1F CH32V_TIM1_CHCTLR1_Input_IC1F
#define CH32V_TIM9_CHCTLR1_Input_IC1F_MASK CH32V_TIM1_CHCTLR1_Input_IC1F_MASK
#define CH32V_TIM9_CHCTLR1_Input_IC1PSC CH32V_TIM1_CHCTLR1_Input_IC1PSC
#define CH32V_TIM9_CHCTLR1_Input_IC1PSC_MASK CH32V_TIM1_CHCTLR1_Input_IC1PSC_MASK
#define CH32V_TIM9_CHCTLR1_Input_CC1S CH32V_TIM1_CHCTLR1_Input_CC1S
#define CH32V_TIM9_CHCTLR1_Input_CC1S_MASK CH32V_TIM1_CHCTLR1_Input_CC1S_MASK
#define CH32V_TIM9_CHCTLR2_Output_OFFSET CH32V_TIM1_CHCTLR2_Output_OFFSET
#define CH32V_TIM9_CHCTLR2_Output CH32V_TIM1_CHCTLR2_Output
#define CH32V_TIM9_CHCTLR2_Output_OC4CE CH32V_TIM1_CHCTLR2_Output_OC4CE
#define CH32V_TIM9_CHCTLR2_Output_OC4M CH32V_TIM1_CHCTLR2_Output_OC4M
#define CH32V_TIM9_CHCTLR2_Output_OC4M_MASK CH32V_TIM1_CHCTLR2_Output_OC4M_MASK
#define CH32V_TIM9_CHCTLR2_Output_OC4PE CH32V_TIM1_CHCTLR2_Output_OC4PE
#define CH32V_TIM9_CHCTLR2_Output_OC4FE CH32V_TIM1_CHCTLR2_Output_OC4FE
#define CH32V_TIM9_CHCTLR2_Output_CC4S CH32V_TIM1_CHCTLR2_Output_CC4S
#define CH32V_TIM9_CHCTLR2_Output_CC4S_MASK CH32V_TIM1_CHCTLR2_Output_CC4S_MASK
#define CH32V_TIM9_CHCTLR2_Output_OC3CE CH32V_TIM1_CHCTLR2_Output_OC3CE
#define CH32V_TIM9_CHCTLR2_Output_OC3M CH32V_TIM1_CHCTLR2_Output_OC3M
#define CH32V_TIM9_CHCTLR2_Output_OC3M_MASK CH32V_TIM1_CHCTLR2_Output_OC3M_MASK
#define CH32V_TIM9_CHCTLR2_Output_OC3PE CH32V_TIM1_CHCTLR2_Output_OC3PE
#define CH32V_TIM9_CHCTLR2_Output_OC3FE CH32V_TIM1_CHCTLR2_Output_OC3FE
#define CH32V_TIM9_CHCTLR2_Output_CC3S CH32V_TIM1_CHCTLR2_Output_CC3S
#define CH32V_TIM9_CHCTLR2_Output_CC3S_MASK CH32V_TIM1_CHCTLR2_Output_CC3S_MASK
#define CH32V_TIM9_CHCTLR2_Input_OFFSET CH32V_TIM1_CHCTLR2_Input_OFFSET
#define CH32V_TIM9_CHCTLR2_Input  CH32V_TIM1_CHCTLR2_Input
#define CH32V_TIM9_CHCTLR2_Input_IC4F CH32V_TIM1_CHCTLR2_Input_IC4F
#define CH32V_TIM9_CHCTLR2_Input_IC4F_MASK CH32V_TIM1_CHCTLR2_Input_IC4F_MASK
#define CH32V_TIM9_CHCTLR2_Input_IC4PSC CH32V_TIM1_CHCTLR2_Input_IC4PSC
#define CH32V_TIM9_CHCTLR2_Input_IC4PSC_MASK CH32V_TIM1_CHCTLR2_Input_IC4PSC_MASK
#define CH32V_TIM9_CHCTLR2_Input_CC4S CH32V_TIM1_CHCTLR2_Input_CC4S
#define CH32V_TIM9_CHCTLR2_Input_CC4S_MASK CH32V_TIM1_CHCTLR2_Input_CC4S_MASK
#define CH32V_TIM9_CHCTLR2_Input_IC3F CH32V_TIM1_CHCTLR2_Input_IC3F
#define CH32V_TIM9_CHCTLR2_Input_IC3F_MASK CH32V_TIM1_CHCTLR2_Input_IC3F_MASK
#define CH32V_TIM9_CHCTLR2_Input_IC3PSC CH32V_TIM1_CHCTLR2_Input_IC3PSC
#define CH32V_TIM9_CHCTLR2_Input_IC3PSC_MASK CH32V_TIM1_CHCTLR2_Input_IC3PSC_MASK
#define CH32V_TIM9_CHCTLR2_Input_CC3S CH32V_TIM1_CHCTLR2_Input_CC3S
#define CH32V_TIM9_CHCTLR2_Input_CC3S_MASK CH32V_TIM1_CHCTLR2_Input_CC3S_MASK
#define CH32V_TIM9_CCER_OFFSET    CH32V_TIM1_CCER_OFFSET
#define CH32V_TIM9_CCER           CH32V_TIM1_CCER
#define CH32V_TIM9_CCER_CC4P      CH32V_TIM1_CCER_CC4P
#define CH32V_TIM9_CCER_CC4E      CH32V_TIM1_CCER_CC4E
#define CH32V_TIM9_CCER_CC3NP     CH32V_TIM1_CCER_CC3NP
#define CH32V_TIM9_CCER_CC3NE     CH32V_TIM1_CCER_CC3NE
#define CH32V_TIM9_CCER_CC3P      CH32V_TIM1_CCER_CC3P
#define CH32V_TIM9_CCER_CC3E      CH32V_TIM1_CCER_CC3E
#define CH32V_TIM9_CCER_CC2NP     CH32V_TIM1_CCER_CC2NP
#define CH32V_TIM9_CCER_CC2NE     CH32V_TIM1_CCER_CC2NE
#define CH32V_TIM9_CCER_CC2P      CH32V_TIM1_CCER_CC2P
#define CH32V_TIM9_CCER_CC2E      CH32V_TIM1_CCER_CC2E
#define CH32V_TIM9_CCER_CC1NP     CH32V_TIM1_CCER_CC1NP
#define CH32V_TIM9_CCER_CC1NE     CH32V_TIM1_CCER_CC1NE
#define CH32V_TIM9_CCER_CC1P      CH32V_TIM1_CCER_CC1P
#define CH32V_TIM9_CCER_CC1E      CH32V_TIM1_CCER_CC1E
#define CH32V_TIM9_CNT_OFFSET     CH32V_TIM1_CNT_OFFSET
#define CH32V_TIM9_CNT            CH32V_TIM1_CNT
#define CH32V_TIM9_CNT_CNT        CH32V_TIM1_CNT_CNT
#define CH32V_TIM9_CNT_CNT_MASK   CH32V_TIM1_CNT_CNT_MASK
#define CH32V_TIM9_PSC_OFFSET     CH32V_TIM1_PSC_OFFSET
#define CH32V_TIM9_PSC            CH32V_TIM1_PSC
#define CH32V_TIM9_PSC_PSC        CH32V_TIM1_PSC_PSC
#define CH32V_TIM9_PSC_PSC_MASK   CH32V_TIM1_PSC_PSC_MASK
#define CH32V_TIM9_ATRLR_OFFSET   CH32V_TIM1_ATRLR_OFFSET
#define CH32V_TIM9_ATRLR          CH32V_TIM1_ATRLR
#define CH32V_TIM9_ATRLR_ATRLR    CH32V_TIM1_ATRLR_ATRLR
#define CH32V_TIM9_ATRLR_ATRLR_MASK CH32V_TIM1_ATRLR_ATRLR_MASK
#define CH32V_TIM9_RPTCR_OFFSET   CH32V_TIM1_RPTCR_OFFSET
#define CH32V_TIM9_RPTCR          CH32V_TIM1_RPTCR
#define CH32V_TIM9_RPTCR_RPTCR    CH32V_TIM1_RPTCR_RPTCR
#define CH32V_TIM9_RPTCR_RPTCR_MASK CH32V_TIM1_RPTCR_RPTCR_MASK
#define CH32V_TIM9_CH1CVR_OFFSET  CH32V_TIM1_CH1CVR_OFFSET
#define CH32V_TIM9_CH1CVR         CH32V_TIM1_CH1CVR
#define CH32V_TIM9_CH1CVR_CH1CVR  CH32V_TIM1_CH1CVR_CH1CVR
#define CH32V_TIM9_CH1CVR_CH1CVR_MASK CH32V_TIM1_CH1CVR_CH1CVR_MASK
#define CH32V_TIM9_CH2CVR_OFFSET  CH32V_TIM1_CH2CVR_OFFSET
#define CH32V_TIM9_CH2CVR         CH32V_TIM1_CH2CVR
#define CH32V_TIM9_CH2CVR_CH2CVR  CH32V_TIM1_CH2CVR_CH2CVR
#define CH32V_TIM9_CH2CVR_CH2CVR_MASK CH32V_TIM1_CH2CVR_CH2CVR_MASK
#define CH32V_TIM9_CH3CVR_OFFSET  CH32V_TIM1_CH3CVR_OFFSET
#define CH32V_TIM9_CH3CVR         CH32V_TIM1_CH3CVR
#define CH32V_TIM9_CH3CVR_CH3CVR  CH32V_TIM1_CH3CVR_CH3CVR
#define CH32V_TIM9_CH3CVR_CH3CVR_MASK CH32V_TIM1_CH3CVR_CH3CVR_MASK
#define CH32V_TIM9_CH4CVR_OFFSET  CH32V_TIM1_CH4CVR_OFFSET
#define CH32V_TIM9_CH4CVR         CH32V_TIM1_CH4CVR
#define CH32V_TIM9_CH4CVR_CH4CVR  CH32V_TIM1_CH4CVR_CH4CVR
#define CH32V_TIM9_CH4CVR_CH4CVR_MASK CH32V_TIM1_CH4CVR_CH4CVR_MASK
#define CH32V_TIM9_BDTR_OFFSET    CH32V_TIM1_BDTR_OFFSET
#define CH32V_TIM9_BDTR           CH32V_TIM1_BDTR
#define CH32V_TIM9_BDTR_MOE       CH32V_TIM1_BDTR_MOE
#define CH32V_TIM9_BDTR_AOE       CH32V_TIM1_BDTR_AOE
#define CH32V_TIM9_BDTR_BKP       CH32V_TIM1_BDTR_BKP
#define CH32V_TIM9_BDTR_BKE       CH32V_TIM1_BDTR_BKE
#define CH32V_TIM9_BDTR_OSSR      CH32V_TIM1_BDTR_OSSR
#define CH32V_TIM9_BDTR_OSSI      CH32V_TIM1_BDTR_OSSI
#define CH32V_TIM9_BDTR_LOCK      CH32V_TIM1_BDTR_LOCK
#define CH32V_TIM9_BDTR_LOCK_MASK CH32V_TIM1_BDTR_LOCK_MASK
#define CH32V_TIM9_BDTR_DTG       CH32V_TIM1_BDTR_DTG
#define CH32V_TIM9_BDTR_DTG_MASK  CH32V_TIM1_BDTR_DTG_MASK
#define CH32V_TIM9_DMACFGR_OFFSET CH32V_TIM1_DMACFGR_OFFSET
#define CH32V_TIM9_DMACFGR        CH32V_TIM1_DMACFGR
#define CH32V_TIM9_DMACFGR_DBL    CH32V_TIM1_DMACFGR_DBL
#define CH32V_TIM9_DMACFGR_DBL_MASK CH32V_TIM1_DMACFGR_DBL_MASK
#define CH32V_TIM9_DMACFGR_DBA    CH32V_TIM1_DMACFGR_DBA
#define CH32V_TIM9_DMACFGR_DBA_MASK CH32V_TIM1_DMACFGR_DBA_MASK
#define CH32V_TIM9_DMAADR_OFFSET  CH32V_TIM1_DMAADR_OFFSET
#define CH32V_TIM9_DMAADR         CH32V_TIM1_DMAADR
#define CH32V_TIM9_DMAADR_DMAADR  CH32V_TIM1_DMAADR_DMAADR
#define CH32V_TIM9_DMAADR_DMAADR_MASK CH32V_TIM1_DMAADR_DMAADR_MASK

/* No registers defined for peripheral TIM10. Using those of TIM1. */
#define CH32V_TIM10_BASE          0x40015000
#define CH32V_TIM10_CTLR1_OFFSET  CH32V_TIM1_CTLR1_OFFSET
#define CH32V_TIM10_CTLR1         CH32V_TIM1_CTLR1
#define CH32V_TIM10_CTLR1_CKD     CH32V_TIM1_CTLR1_CKD
#define CH32V_TIM10_CTLR1_CKD_MASK CH32V_TIM1_CTLR1_CKD_MASK
#define CH32V_TIM10_CTLR1_ARPE    CH32V_TIM1_CTLR1_ARPE
#define CH32V_TIM10_CTLR1_CMS     CH32V_TIM1_CTLR1_CMS
#define CH32V_TIM10_CTLR1_CMS_MASK CH32V_TIM1_CTLR1_CMS_MASK
#define CH32V_TIM10_CTLR1_DIR     CH32V_TIM1_CTLR1_DIR
#define CH32V_TIM10_CTLR1_OPM     CH32V_TIM1_CTLR1_OPM
#define CH32V_TIM10_CTLR1_URS     CH32V_TIM1_CTLR1_URS
#define CH32V_TIM10_CTLR1_UDIS    CH32V_TIM1_CTLR1_UDIS
#define CH32V_TIM10_CTLR1_CEN     CH32V_TIM1_CTLR1_CEN
#define CH32V_TIM10_CTLR2_OFFSET  CH32V_TIM1_CTLR2_OFFSET
#define CH32V_TIM10_CTLR2         CH32V_TIM1_CTLR2
#define CH32V_TIM10_CTLR2_OIS4    CH32V_TIM1_CTLR2_OIS4
#define CH32V_TIM10_CTLR2_OIS3N   CH32V_TIM1_CTLR2_OIS3N
#define CH32V_TIM10_CTLR2_OIS3    CH32V_TIM1_CTLR2_OIS3
#define CH32V_TIM10_CTLR2_OIS2N   CH32V_TIM1_CTLR2_OIS2N
#define CH32V_TIM10_CTLR2_OIS2    CH32V_TIM1_CTLR2_OIS2
#define CH32V_TIM10_CTLR2_OIS1N   CH32V_TIM1_CTLR2_OIS1N
#define CH32V_TIM10_CTLR2_OIS1    CH32V_TIM1_CTLR2_OIS1
#define CH32V_TIM10_CTLR2_TI1S    CH32V_TIM1_CTLR2_TI1S
#define CH32V_TIM10_CTLR2_MMS     CH32V_TIM1_CTLR2_MMS
#define CH32V_TIM10_CTLR2_MMS_MASK CH32V_TIM1_CTLR2_MMS_MASK
#define CH32V_TIM10_CTLR2_CCDS    CH32V_TIM1_CTLR2_CCDS
#define CH32V_TIM10_CTLR2_CCUS    CH32V_TIM1_CTLR2_CCUS
#define CH32V_TIM10_CTLR2_CCPC    CH32V_TIM1_CTLR2_CCPC
#define CH32V_TIM10_SMCFGR_OFFSET CH32V_TIM1_SMCFGR_OFFSET
#define CH32V_TIM10_SMCFGR        CH32V_TIM1_SMCFGR
#define CH32V_TIM10_SMCFGR_ETP    CH32V_TIM1_SMCFGR_ETP
#define CH32V_TIM10_SMCFGR_ECE    CH32V_TIM1_SMCFGR_ECE
#define CH32V_TIM10_SMCFGR_ETPS   CH32V_TIM1_SMCFGR_ETPS
#define CH32V_TIM10_SMCFGR_ETPS_MASK CH32V_TIM1_SMCFGR_ETPS_MASK
#define CH32V_TIM10_SMCFGR_ETF    CH32V_TIM1_SMCFGR_ETF
#define CH32V_TIM10_SMCFGR_ETF_MASK CH32V_TIM1_SMCFGR_ETF_MASK
#define CH32V_TIM10_SMCFGR_MSM    CH32V_TIM1_SMCFGR_MSM
#define CH32V_TIM10_SMCFGR_TS     CH32V_TIM1_SMCFGR_TS
#define CH32V_TIM10_SMCFGR_TS_MASK CH32V_TIM1_SMCFGR_TS_MASK
#define CH32V_TIM10_SMCFGR_SMS    CH32V_TIM1_SMCFGR_SMS
#define CH32V_TIM10_SMCFGR_SMS_MASK CH32V_TIM1_SMCFGR_SMS_MASK
#define CH32V_TIM10_DMAINTENR_OFFSET CH32V_TIM1_DMAINTENR_OFFSET
#define CH32V_TIM10_DMAINTENR     CH32V_TIM1_DMAINTENR
#define CH32V_TIM10_DMAINTENR_TDE CH32V_TIM1_DMAINTENR_TDE
#define CH32V_TIM10_DMAINTENR_COMDE CH32V_TIM1_DMAINTENR_COMDE
#define CH32V_TIM10_DMAINTENR_CC4DE CH32V_TIM1_DMAINTENR_CC4DE
#define CH32V_TIM10_DMAINTENR_CC3DE CH32V_TIM1_DMAINTENR_CC3DE
#define CH32V_TIM10_DMAINTENR_CC2DE CH32V_TIM1_DMAINTENR_CC2DE
#define CH32V_TIM10_DMAINTENR_CC1DE CH32V_TIM1_DMAINTENR_CC1DE
#define CH32V_TIM10_DMAINTENR_UDE CH32V_TIM1_DMAINTENR_UDE
#define CH32V_TIM10_DMAINTENR_BIE CH32V_TIM1_DMAINTENR_BIE
#define CH32V_TIM10_DMAINTENR_TIE CH32V_TIM1_DMAINTENR_TIE
#define CH32V_TIM10_DMAINTENR_COMIE CH32V_TIM1_DMAINTENR_COMIE
#define CH32V_TIM10_DMAINTENR_CC4IE CH32V_TIM1_DMAINTENR_CC4IE
#define CH32V_TIM10_DMAINTENR_CC3IE CH32V_TIM1_DMAINTENR_CC3IE
#define CH32V_TIM10_DMAINTENR_CC2IE CH32V_TIM1_DMAINTENR_CC2IE
#define CH32V_TIM10_DMAINTENR_CC1IE CH32V_TIM1_DMAINTENR_CC1IE
#define CH32V_TIM10_DMAINTENR_UIE CH32V_TIM1_DMAINTENR_UIE
#define CH32V_TIM10_INTFR_OFFSET  CH32V_TIM1_INTFR_OFFSET
#define CH32V_TIM10_INTFR         CH32V_TIM1_INTFR
#define CH32V_TIM10_INTFR_CC4OF   CH32V_TIM1_INTFR_CC4OF
#define CH32V_TIM10_INTFR_CC3OF   CH32V_TIM1_INTFR_CC3OF
#define CH32V_TIM10_INTFR_CC2OF   CH32V_TIM1_INTFR_CC2OF
#define CH32V_TIM10_INTFR_CC1OF   CH32V_TIM1_INTFR_CC1OF
#define CH32V_TIM10_INTFR_BIF     CH32V_TIM1_INTFR_BIF
#define CH32V_TIM10_INTFR_TIF     CH32V_TIM1_INTFR_TIF
#define CH32V_TIM10_INTFR_COMIF   CH32V_TIM1_INTFR_COMIF
#define CH32V_TIM10_INTFR_CC4IF   CH32V_TIM1_INTFR_CC4IF
#define CH32V_TIM10_INTFR_CC3IF   CH32V_TIM1_INTFR_CC3IF
#define CH32V_TIM10_INTFR_CC2IF   CH32V_TIM1_INTFR_CC2IF
#define CH32V_TIM10_INTFR_CC1IF   CH32V_TIM1_INTFR_CC1IF
#define CH32V_TIM10_INTFR_UIF     CH32V_TIM1_INTFR_UIF
#define CH32V_TIM10_SWEVGR_OFFSET CH32V_TIM1_SWEVGR_OFFSET
#define CH32V_TIM10_SWEVGR        CH32V_TIM1_SWEVGR
#define CH32V_TIM10_SWEVGR_BG     CH32V_TIM1_SWEVGR_BG
#define CH32V_TIM10_SWEVGR_TG     CH32V_TIM1_SWEVGR_TG
#define CH32V_TIM10_SWEVGR_COMG   CH32V_TIM1_SWEVGR_COMG
#define CH32V_TIM10_SWEVGR_CC4G   CH32V_TIM1_SWEVGR_CC4G
#define CH32V_TIM10_SWEVGR_CC3G   CH32V_TIM1_SWEVGR_CC3G
#define CH32V_TIM10_SWEVGR_CC2G   CH32V_TIM1_SWEVGR_CC2G
#define CH32V_TIM10_SWEVGR_CC1G   CH32V_TIM1_SWEVGR_CC1G
#define CH32V_TIM10_SWEVGR_UG     CH32V_TIM1_SWEVGR_UG
#define CH32V_TIM10_CHCTLR1_Output_OFFSET CH32V_TIM1_CHCTLR1_Output_OFFSET
#define CH32V_TIM10_CHCTLR1_Output CH32V_TIM1_CHCTLR1_Output
#define CH32V_TIM10_CHCTLR1_Output_OC2CE CH32V_TIM1_CHCTLR1_Output_OC2CE
#define CH32V_TIM10_CHCTLR1_Output_OC2M CH32V_TIM1_CHCTLR1_Output_OC2M
#define CH32V_TIM10_CHCTLR1_Output_OC2M_MASK CH32V_TIM1_CHCTLR1_Output_OC2M_MASK
#define CH32V_TIM10_CHCTLR1_Output_OC2PE CH32V_TIM1_CHCTLR1_Output_OC2PE
#define CH32V_TIM10_CHCTLR1_Output_OC2FE CH32V_TIM1_CHCTLR1_Output_OC2FE
#define CH32V_TIM10_CHCTLR1_Output_CC2S CH32V_TIM1_CHCTLR1_Output_CC2S
#define CH32V_TIM10_CHCTLR1_Output_CC2S_MASK CH32V_TIM1_CHCTLR1_Output_CC2S_MASK
#define CH32V_TIM10_CHCTLR1_Output_OC1CE CH32V_TIM1_CHCTLR1_Output_OC1CE
#define CH32V_TIM10_CHCTLR1_Output_OC1M CH32V_TIM1_CHCTLR1_Output_OC1M
#define CH32V_TIM10_CHCTLR1_Output_OC1M_MASK CH32V_TIM1_CHCTLR1_Output_OC1M_MASK
#define CH32V_TIM10_CHCTLR1_Output_OC1PE CH32V_TIM1_CHCTLR1_Output_OC1PE
#define CH32V_TIM10_CHCTLR1_Output_OC1FE CH32V_TIM1_CHCTLR1_Output_OC1FE
#define CH32V_TIM10_CHCTLR1_Output_CC1S CH32V_TIM1_CHCTLR1_Output_CC1S
#define CH32V_TIM10_CHCTLR1_Output_CC1S_MASK CH32V_TIM1_CHCTLR1_Output_CC1S_MASK
#define CH32V_TIM10_CHCTLR1_Input_OFFSET CH32V_TIM1_CHCTLR1_Input_OFFSET
#define CH32V_TIM10_CHCTLR1_Input CH32V_TIM1_CHCTLR1_Input
#define CH32V_TIM10_CHCTLR1_Input_IC2F CH32V_TIM1_CHCTLR1_Input_IC2F
#define CH32V_TIM10_CHCTLR1_Input_IC2F_MASK CH32V_TIM1_CHCTLR1_Input_IC2F_MASK
#define CH32V_TIM10_CHCTLR1_Input_IC2PCS CH32V_TIM1_CHCTLR1_Input_IC2PCS
#define CH32V_TIM10_CHCTLR1_Input_IC2PCS_MASK CH32V_TIM1_CHCTLR1_Input_IC2PCS_MASK
#define CH32V_TIM10_CHCTLR1_Input_CC2S CH32V_TIM1_CHCTLR1_Input_CC2S
#define CH32V_TIM10_CHCTLR1_Input_CC2S_MASK CH32V_TIM1_CHCTLR1_Input_CC2S_MASK
#define CH32V_TIM10_CHCTLR1_Input_IC1F CH32V_TIM1_CHCTLR1_Input_IC1F
#define CH32V_TIM10_CHCTLR1_Input_IC1F_MASK CH32V_TIM1_CHCTLR1_Input_IC1F_MASK
#define CH32V_TIM10_CHCTLR1_Input_IC1PSC CH32V_TIM1_CHCTLR1_Input_IC1PSC
#define CH32V_TIM10_CHCTLR1_Input_IC1PSC_MASK CH32V_TIM1_CHCTLR1_Input_IC1PSC_MASK
#define CH32V_TIM10_CHCTLR1_Input_CC1S CH32V_TIM1_CHCTLR1_Input_CC1S
#define CH32V_TIM10_CHCTLR1_Input_CC1S_MASK CH32V_TIM1_CHCTLR1_Input_CC1S_MASK
#define CH32V_TIM10_CHCTLR2_Output_OFFSET CH32V_TIM1_CHCTLR2_Output_OFFSET
#define CH32V_TIM10_CHCTLR2_Output CH32V_TIM1_CHCTLR2_Output
#define CH32V_TIM10_CHCTLR2_Output_OC4CE CH32V_TIM1_CHCTLR2_Output_OC4CE
#define CH32V_TIM10_CHCTLR2_Output_OC4M CH32V_TIM1_CHCTLR2_Output_OC4M
#define CH32V_TIM10_CHCTLR2_Output_OC4M_MASK CH32V_TIM1_CHCTLR2_Output_OC4M_MASK
#define CH32V_TIM10_CHCTLR2_Output_OC4PE CH32V_TIM1_CHCTLR2_Output_OC4PE
#define CH32V_TIM10_CHCTLR2_Output_OC4FE CH32V_TIM1_CHCTLR2_Output_OC4FE
#define CH32V_TIM10_CHCTLR2_Output_CC4S CH32V_TIM1_CHCTLR2_Output_CC4S
#define CH32V_TIM10_CHCTLR2_Output_CC4S_MASK CH32V_TIM1_CHCTLR2_Output_CC4S_MASK
#define CH32V_TIM10_CHCTLR2_Output_OC3CE CH32V_TIM1_CHCTLR2_Output_OC3CE
#define CH32V_TIM10_CHCTLR2_Output_OC3M CH32V_TIM1_CHCTLR2_Output_OC3M
#define CH32V_TIM10_CHCTLR2_Output_OC3M_MASK CH32V_TIM1_CHCTLR2_Output_OC3M_MASK
#define CH32V_TIM10_CHCTLR2_Output_OC3PE CH32V_TIM1_CHCTLR2_Output_OC3PE
#define CH32V_TIM10_CHCTLR2_Output_OC3FE CH32V_TIM1_CHCTLR2_Output_OC3FE
#define CH32V_TIM10_CHCTLR2_Output_CC3S CH32V_TIM1_CHCTLR2_Output_CC3S
#define CH32V_TIM10_CHCTLR2_Output_CC3S_MASK CH32V_TIM1_CHCTLR2_Output_CC3S_MASK
#define CH32V_TIM10_CHCTLR2_Input_OFFSET CH32V_TIM1_CHCTLR2_Input_OFFSET
#define CH32V_TIM10_CHCTLR2_Input CH32V_TIM1_CHCTLR2_Input
#define CH32V_TIM10_CHCTLR2_Input_IC4F CH32V_TIM1_CHCTLR2_Input_IC4F
#define CH32V_TIM10_CHCTLR2_Input_IC4F_MASK CH32V_TIM1_CHCTLR2_Input_IC4F_MASK
#define CH32V_TIM10_CHCTLR2_Input_IC4PSC CH32V_TIM1_CHCTLR2_Input_IC4PSC
#define CH32V_TIM10_CHCTLR2_Input_IC4PSC_MASK CH32V_TIM1_CHCTLR2_Input_IC4PSC_MASK
#define CH32V_TIM10_CHCTLR2_Input_CC4S CH32V_TIM1_CHCTLR2_Input_CC4S
#define CH32V_TIM10_CHCTLR2_Input_CC4S_MASK CH32V_TIM1_CHCTLR2_Input_CC4S_MASK
#define CH32V_TIM10_CHCTLR2_Input_IC3F CH32V_TIM1_CHCTLR2_Input_IC3F
#define CH32V_TIM10_CHCTLR2_Input_IC3F_MASK CH32V_TIM1_CHCTLR2_Input_IC3F_MASK
#define CH32V_TIM10_CHCTLR2_Input_IC3PSC CH32V_TIM1_CHCTLR2_Input_IC3PSC
#define CH32V_TIM10_CHCTLR2_Input_IC3PSC_MASK CH32V_TIM1_CHCTLR2_Input_IC3PSC_MASK
#define CH32V_TIM10_CHCTLR2_Input_CC3S CH32V_TIM1_CHCTLR2_Input_CC3S
#define CH32V_TIM10_CHCTLR2_Input_CC3S_MASK CH32V_TIM1_CHCTLR2_Input_CC3S_MASK
#define CH32V_TIM10_CCER_OFFSET   CH32V_TIM1_CCER_OFFSET
#define CH32V_TIM10_CCER          CH32V_TIM1_CCER
#define CH32V_TIM10_CCER_CC4P     CH32V_TIM1_CCER_CC4P
#define CH32V_TIM10_CCER_CC4E     CH32V_TIM1_CCER_CC4E
#define CH32V_TIM10_CCER_CC3NP    CH32V_TIM1_CCER_CC3NP
#define CH32V_TIM10_CCER_CC3NE    CH32V_TIM1_CCER_CC3NE
#define CH32V_TIM10_CCER_CC3P     CH32V_TIM1_CCER_CC3P
#define CH32V_TIM10_CCER_CC3E     CH32V_TIM1_CCER_CC3E
#define CH32V_TIM10_CCER_CC2NP    CH32V_TIM1_CCER_CC2NP
#define CH32V_TIM10_CCER_CC2NE    CH32V_TIM1_CCER_CC2NE
#define CH32V_TIM10_CCER_CC2P     CH32V_TIM1_CCER_CC2P
#define CH32V_TIM10_CCER_CC2E     CH32V_TIM1_CCER_CC2E
#define CH32V_TIM10_CCER_CC1NP    CH32V_TIM1_CCER_CC1NP
#define CH32V_TIM10_CCER_CC1NE    CH32V_TIM1_CCER_CC1NE
#define CH32V_TIM10_CCER_CC1P     CH32V_TIM1_CCER_CC1P
#define CH32V_TIM10_CCER_CC1E     CH32V_TIM1_CCER_CC1E
#define CH32V_TIM10_CNT_OFFSET    CH32V_TIM1_CNT_OFFSET
#define CH32V_TIM10_CNT           CH32V_TIM1_CNT
#define CH32V_TIM10_CNT_CNT       CH32V_TIM1_CNT_CNT
#define CH32V_TIM10_CNT_CNT_MASK  CH32V_TIM1_CNT_CNT_MASK
#define CH32V_TIM10_PSC_OFFSET    CH32V_TIM1_PSC_OFFSET
#define CH32V_TIM10_PSC           CH32V_TIM1_PSC
#define CH32V_TIM10_PSC_PSC       CH32V_TIM1_PSC_PSC
#define CH32V_TIM10_PSC_PSC_MASK  CH32V_TIM1_PSC_PSC_MASK
#define CH32V_TIM10_ATRLR_OFFSET  CH32V_TIM1_ATRLR_OFFSET
#define CH32V_TIM10_ATRLR         CH32V_TIM1_ATRLR
#define CH32V_TIM10_ATRLR_ATRLR   CH32V_TIM1_ATRLR_ATRLR
#define CH32V_TIM10_ATRLR_ATRLR_MASK CH32V_TIM1_ATRLR_ATRLR_MASK
#define CH32V_TIM10_RPTCR_OFFSET  CH32V_TIM1_RPTCR_OFFSET
#define CH32V_TIM10_RPTCR         CH32V_TIM1_RPTCR
#define CH32V_TIM10_RPTCR_RPTCR   CH32V_TIM1_RPTCR_RPTCR
#define CH32V_TIM10_RPTCR_RPTCR_MASK CH32V_TIM1_RPTCR_RPTCR_MASK
#define CH32V_TIM10_CH1CVR_OFFSET CH32V_TIM1_CH1CVR_OFFSET
#define CH32V_TIM10_CH1CVR        CH32V_TIM1_CH1CVR
#define CH32V_TIM10_CH1CVR_CH1CVR CH32V_TIM1_CH1CVR_CH1CVR
#define CH32V_TIM10_CH1CVR_CH1CVR_MASK CH32V_TIM1_CH1CVR_CH1CVR_MASK
#define CH32V_TIM10_CH2CVR_OFFSET CH32V_TIM1_CH2CVR_OFFSET
#define CH32V_TIM10_CH2CVR        CH32V_TIM1_CH2CVR
#define CH32V_TIM10_CH2CVR_CH2CVR CH32V_TIM1_CH2CVR_CH2CVR
#define CH32V_TIM10_CH2CVR_CH2CVR_MASK CH32V_TIM1_CH2CVR_CH2CVR_MASK
#define CH32V_TIM10_CH3CVR_OFFSET CH32V_TIM1_CH3CVR_OFFSET
#define CH32V_TIM10_CH3CVR        CH32V_TIM1_CH3CVR
#define CH32V_TIM10_CH3CVR_CH3CVR CH32V_TIM1_CH3CVR_CH3CVR
#define CH32V_TIM10_CH3CVR_CH3CVR_MASK CH32V_TIM1_CH3CVR_CH3CVR_MASK
#define CH32V_TIM10_CH4CVR_OFFSET CH32V_TIM1_CH4CVR_OFFSET
#define CH32V_TIM10_CH4CVR        CH32V_TIM1_CH4CVR
#define CH32V_TIM10_CH4CVR_CH4CVR CH32V_TIM1_CH4CVR_CH4CVR
#define CH32V_TIM10_CH4CVR_CH4CVR_MASK CH32V_TIM1_CH4CVR_CH4CVR_MASK
#define CH32V_TIM10_BDTR_OFFSET   CH32V_TIM1_BDTR_OFFSET
#define CH32V_TIM10_BDTR          CH32V_TIM1_BDTR
#define CH32V_TIM10_BDTR_MOE      CH32V_TIM1_BDTR_MOE
#define CH32V_TIM10_BDTR_AOE      CH32V_TIM1_BDTR_AOE
#define CH32V_TIM10_BDTR_BKP      CH32V_TIM1_BDTR_BKP
#define CH32V_TIM10_BDTR_BKE      CH32V_TIM1_BDTR_BKE
#define CH32V_TIM10_BDTR_OSSR     CH32V_TIM1_BDTR_OSSR
#define CH32V_TIM10_BDTR_OSSI     CH32V_TIM1_BDTR_OSSI
#define CH32V_TIM10_BDTR_LOCK     CH32V_TIM1_BDTR_LOCK
#define CH32V_TIM10_BDTR_LOCK_MASK CH32V_TIM1_BDTR_LOCK_MASK
#define CH32V_TIM10_BDTR_DTG      CH32V_TIM1_BDTR_DTG
#define CH32V_TIM10_BDTR_DTG_MASK CH32V_TIM1_BDTR_DTG_MASK
#define CH32V_TIM10_DMACFGR_OFFSET CH32V_TIM1_DMACFGR_OFFSET
#define CH32V_TIM10_DMACFGR       CH32V_TIM1_DMACFGR
#define CH32V_TIM10_DMACFGR_DBL   CH32V_TIM1_DMACFGR_DBL
#define CH32V_TIM10_DMACFGR_DBL_MASK CH32V_TIM1_DMACFGR_DBL_MASK
#define CH32V_TIM10_DMACFGR_DBA   CH32V_TIM1_DMACFGR_DBA
#define CH32V_TIM10_DMACFGR_DBA_MASK CH32V_TIM1_DMACFGR_DBA_MASK
#define CH32V_TIM10_DMAADR_OFFSET CH32V_TIM1_DMAADR_OFFSET
#define CH32V_TIM10_DMAADR        CH32V_TIM1_DMAADR
#define CH32V_TIM10_DMAADR_DMAADR CH32V_TIM1_DMAADR_DMAADR
#define CH32V_TIM10_DMAADR_DMAADR_MASK CH32V_TIM1_DMAADR_DMAADR_MASK

/* TIM2 - General purpose timer */
#define CH32V_TIM2_BASE           0x40000000
#define CH32V_TIM2_CTLR1_OFFSET   0x0000
#define CH32V_TIM2_CTLR1          (CH32V_TIM2_BASE + CH32V_TIM2_CTLR1_OFFSET)
#define CH32V_TIM2_CTLR1_CKD      (2 <<  8) /* 100: Clock division */
#define CH32V_TIM2_CTLR1_CKD_MASK      (0x03)
#define CH32V_TIM2_CTLR1_ARPE     (1 <<  7) /* 80: Auto-reload preload enable */
#define CH32V_TIM2_CTLR1_CMS      (2 <<  5) /* 20: Center-aligned mode selection */
#define CH32V_TIM2_CTLR1_CMS_MASK      (0x03)
#define CH32V_TIM2_CTLR1_DIR      (1 <<  4) /* 10: Direction */
#define CH32V_TIM2_CTLR1_OPM      (1 <<  3) /* 08: One-pulse mode */
#define CH32V_TIM2_CTLR1_URS      (1 <<  2) /* 04: Update request source */
#define CH32V_TIM2_CTLR1_UDIS     (1 <<  1) /* 02: Update disable */
#define CH32V_TIM2_CTLR1_CEN      (1 <<  0) /* 01: Counter enable */
#define CH32V_TIM2_CTLR2_OFFSET   0x0004
#define CH32V_TIM2_CTLR2          (CH32V_TIM2_BASE + CH32V_TIM2_CTLR2_OFFSET)
#define CH32V_TIM2_CTLR2_TI1S     (1 <<  7) /* 80: TI1 selection */
#define CH32V_TIM2_CTLR2_MMS      (3 <<  4) /* 10: Master mode selection */
#define CH32V_TIM2_CTLR2_MMS_MASK      (0x07)
#define CH32V_TIM2_CTLR2_CCDS     (1 <<  3) /* 08: Capture/compare DMA selection */
#define CH32V_TIM2_CTLR2_CCUS     (1 <<  2) /* 04: Update selection */
#define CH32V_TIM2_CTLR2_CCPC     (1 <<  0) /* 01: Compare selection */
#define CH32V_TIM2_SMCFGR_OFFSET  0x0008
#define CH32V_TIM2_SMCFGR         (CH32V_TIM2_BASE + CH32V_TIM2_SMCFGR_OFFSET)
#define CH32V_TIM2_SMCFGR_ETP     (1 << 15) /* 8000: External trigger polarity */
#define CH32V_TIM2_SMCFGR_ECE     (1 << 14) /* 4000: External clock enable */
#define CH32V_TIM2_SMCFGR_ETPS    (2 << 12) /* 1000: External trigger prescaler */
#define CH32V_TIM2_SMCFGR_ETPS_MASK    (0x03)
#define CH32V_TIM2_SMCFGR_ETF     (4 <<  8) /* 100: External trigger filter */
#define CH32V_TIM2_SMCFGR_ETF_MASK     (0x0f)
#define CH32V_TIM2_SMCFGR_MSM     (1 <<  7) /* 80: Master/Slave mode */
#define CH32V_TIM2_SMCFGR_TS      (3 <<  4) /* 10: Trigger selection */
#define CH32V_TIM2_SMCFGR_TS_MASK      (0x07)
#define CH32V_TIM2_SMCFGR_SMS     (3 <<  0) /* 01: Slave mode selection */
#define CH32V_TIM2_SMCFGR_SMS_MASK     (0x07)
#define CH32V_TIM2_DMAINTENR_OFFSET 0x000c
#define CH32V_TIM2_DMAINTENR      (CH32V_TIM2_BASE + CH32V_TIM2_DMAINTENR_OFFSET)
#define CH32V_TIM2_DMAINTENR_TDE  (1 << 14) /* 4000: Trigger DMA request enable */
#define CH32V_TIM2_DMAINTENR_COMDE (1 << 13) /* 2000: COM DMA request enable */
#define CH32V_TIM2_DMAINTENR_CC4DE (1 << 12) /* 1000: Capture/Compare 4 DMA request enable */
#define CH32V_TIM2_DMAINTENR_CC3DE (1 << 11) /* 800: Capture/Compare 3 DMA request enable */
#define CH32V_TIM2_DMAINTENR_CC2DE (1 << 10) /* 400: Capture/Compare 2 DMA request enable */
#define CH32V_TIM2_DMAINTENR_CC1DE (1 <<  9) /* 200: Capture/Compare 1 DMA request enable */
#define CH32V_TIM2_DMAINTENR_UDE  (1 <<  8) /* 100: Update DMA request enable */
#define CH32V_TIM2_DMAINTENR_TIE  (1 <<  6) /* 40: Trigger interrupt enable */
#define CH32V_TIM2_DMAINTENR_CC4IE (1 <<  4) /* 10: Capture/Compare 4 interrupt enable */
#define CH32V_TIM2_DMAINTENR_CC3IE (1 <<  3) /* 08: Capture/Compare 3 interrupt enable */
#define CH32V_TIM2_DMAINTENR_CC2IE (1 <<  2) /* 04: Capture/Compare 2 interrupt enable */
#define CH32V_TIM2_DMAINTENR_CC1IE (1 <<  1) /* 02: Capture/Compare 1 interrupt enable */
#define CH32V_TIM2_DMAINTENR_UIE  (1 <<  0) /* 01: Update interrupt enable */
#define CH32V_TIM2_INTFR_OFFSET   0x0010
#define CH32V_TIM2_INTFR          (CH32V_TIM2_BASE + CH32V_TIM2_INTFR_OFFSET)
#define CH32V_TIM2_INTFR_CC4OF    (1 << 12) /* 1000: Capture/Compare 4 overcapture flag */
#define CH32V_TIM2_INTFR_CC3OF    (1 << 11) /* 800: Capture/Compare 3 overcapture flag */
#define CH32V_TIM2_INTFR_CC2OF    (1 << 10) /* 400: Capture/compare 2 overcapture flag */
#define CH32V_TIM2_INTFR_CC1OF    (1 <<  9) /* 200: Capture/Compare 1 overcapture flag */
#define CH32V_TIM2_INTFR_TIF      (1 <<  6) /* 40: Trigger interrupt flag */
#define CH32V_TIM2_INTFR_CC4IF    (1 <<  4) /* 10: Capture/Compare 4 interrupt flag */
#define CH32V_TIM2_INTFR_CC3IF    (1 <<  3) /* 08: Capture/Compare 3 interrupt flag */
#define CH32V_TIM2_INTFR_CC2IF    (1 <<  2) /* 04: Capture/Compare 2 interrupt flag */
#define CH32V_TIM2_INTFR_CC1IF    (1 <<  1) /* 02: Capture/compare 1 interrupt flag */
#define CH32V_TIM2_INTFR_UIF      (1 <<  0) /* 01: Update interrupt flag */
#define CH32V_TIM2_SWEVGR_OFFSET  0x0014
#define CH32V_TIM2_SWEVGR         (CH32V_TIM2_BASE + CH32V_TIM2_SWEVGR_OFFSET)
#define CH32V_TIM2_SWEVGR_BG      (1 <<  7) /* 80: Brake generation */
#define CH32V_TIM2_SWEVGR_TG      (1 <<  6) /* 40: Trigger generation */
#define CH32V_TIM2_SWEVGR_COMG    (1 <<  5) /* 20: Capture/compare generation */
#define CH32V_TIM2_SWEVGR_CC4G    (1 <<  4) /* 10: Capture/compare 4 generation */
#define CH32V_TIM2_SWEVGR_CC3G    (1 <<  3) /* 08: Capture/compare 3 generation */
#define CH32V_TIM2_SWEVGR_CC2G    (1 <<  2) /* 04: Capture/compare 2 generation */
#define CH32V_TIM2_SWEVGR_CC1G    (1 <<  1) /* 02: Capture/compare 1 generation */
#define CH32V_TIM2_SWEVGR_UG      (1 <<  0) /* 01: Update generation */
#define CH32V_TIM2_CHCTLR1_Output_OFFSET 0x0018
#define CH32V_TIM2_CHCTLR1_Output (CH32V_TIM2_BASE + CH32V_TIM2_CHCTLR1_Output_OFFSET)
#define CH32V_TIM2_CHCTLR1_Output_OC2CE (1 << 15) /* 8000: Output compare 2 clear enable */
#define CH32V_TIM2_CHCTLR1_Output_OC2M (3 << 12) /* 1000: Output compare 2 mode */
#define CH32V_TIM2_CHCTLR1_Output_OC2M_MASK (0x07)
#define CH32V_TIM2_CHCTLR1_Output_OC2PE (1 << 11) /* 800: Output compare 2 preload enable */
#define CH32V_TIM2_CHCTLR1_Output_OC2FE (1 << 10) /* 400: Output compare 2 fast enable */
#define CH32V_TIM2_CHCTLR1_Output_CC2S (2 <<  8) /* 100: Capture/Compare 2 selection */
#define CH32V_TIM2_CHCTLR1_Output_CC2S_MASK (0x03)
#define CH32V_TIM2_CHCTLR1_Output_OC1CE (1 <<  7) /* 80: Output compare 1 clear enable */
#define CH32V_TIM2_CHCTLR1_Output_OC1M (3 <<  4) /* 10: Output compare 1 mode */
#define CH32V_TIM2_CHCTLR1_Output_OC1M_MASK (0x07)
#define CH32V_TIM2_CHCTLR1_Output_OC1PE (1 <<  3) /* 08: Output compare 1 preload enable */
#define CH32V_TIM2_CHCTLR1_Output_OC1FE (1 <<  2) /* 04: Output compare 1 fast enable */
#define CH32V_TIM2_CHCTLR1_Output_CC1S (2 <<  0) /* 01: Capture/Compare 1 selection */
#define CH32V_TIM2_CHCTLR1_Output_CC1S_MASK (0x03)
#define CH32V_TIM2_CHCTLR1_Input_OFFSET 0x0018
#define CH32V_TIM2_CHCTLR1_Input  (CH32V_TIM2_BASE + CH32V_TIM2_CHCTLR1_Input_OFFSET)
#define CH32V_TIM2_CHCTLR1_Input_IC2F (4 << 12) /* 1000: Input capture 2 filter */
#define CH32V_TIM2_CHCTLR1_Input_IC2F_MASK (0x0f)
#define CH32V_TIM2_CHCTLR1_Input_IC2PSC (2 << 10) /* 400: Input capture 2 prescaler */
#define CH32V_TIM2_CHCTLR1_Input_IC2PSC_MASK (0x03)
#define CH32V_TIM2_CHCTLR1_Input_CC2S (2 <<  8) /* 100: Capture/compare 2 selection */
#define CH32V_TIM2_CHCTLR1_Input_CC2S_MASK (0x03)
#define CH32V_TIM2_CHCTLR1_Input_IC1F (4 <<  4) /* 10: Input capture 1 filter */
#define CH32V_TIM2_CHCTLR1_Input_IC1F_MASK (0x0f)
#define CH32V_TIM2_CHCTLR1_Input_IC1PSC (2 <<  2) /* 04: Input capture 1 prescaler */
#define CH32V_TIM2_CHCTLR1_Input_IC1PSC_MASK (0x03)
#define CH32V_TIM2_CHCTLR1_Input_CC1S (2 <<  0) /* 01: Capture/Compare 1 selection */
#define CH32V_TIM2_CHCTLR1_Input_CC1S_MASK (0x03)
#define CH32V_TIM2_CHCTLR2_Output_OFFSET 0x001c
#define CH32V_TIM2_CHCTLR2_Output (CH32V_TIM2_BASE + CH32V_TIM2_CHCTLR2_Output_OFFSET)
#define CH32V_TIM2_CHCTLR2_Output_OC4CE (1 << 15) /* 8000: Output compare 4 clear enable */
#define CH32V_TIM2_CHCTLR2_Output_OC4M (3 << 12) /* 1000: Output compare 4 mode */
#define CH32V_TIM2_CHCTLR2_Output_OC4M_MASK (0x07)
#define CH32V_TIM2_CHCTLR2_Output_OC4PE (1 << 11) /* 800: Output compare 4 preload enable */
#define CH32V_TIM2_CHCTLR2_Output_OC4FE (1 << 10) /* 400: Output compare 4 fast enable */
#define CH32V_TIM2_CHCTLR2_Output_CC4S (2 <<  8) /* 100: Capture/Compare 4 selection */
#define CH32V_TIM2_CHCTLR2_Output_CC4S_MASK (0x03)
#define CH32V_TIM2_CHCTLR2_Output_OC3CE (1 <<  7) /* 80: Output compare 3 clear enable */
#define CH32V_TIM2_CHCTLR2_Output_OC3M (3 <<  4) /* 10: Output compare 3 mode */
#define CH32V_TIM2_CHCTLR2_Output_OC3M_MASK (0x07)
#define CH32V_TIM2_CHCTLR2_Output_OC3PE (1 <<  3) /* 08: Output compare 3 preload enable */
#define CH32V_TIM2_CHCTLR2_Output_OC3FE (1 <<  2) /* 04: Output compare 3 fast enable */
#define CH32V_TIM2_CHCTLR2_Output_CC3S (2 <<  0) /* 01: Capture/Compare 3 selection */
#define CH32V_TIM2_CHCTLR2_Output_CC3S_MASK (0x03)
#define CH32V_TIM2_CHCTLR2_Input_OFFSET 0x001c
#define CH32V_TIM2_CHCTLR2_Input  (CH32V_TIM2_BASE + CH32V_TIM2_CHCTLR2_Input_OFFSET)
#define CH32V_TIM2_CHCTLR2_Input_IC4F (4 << 12) /* 1000: Input capture 4 filter */
#define CH32V_TIM2_CHCTLR2_Input_IC4F_MASK (0x0f)
#define CH32V_TIM2_CHCTLR2_Input_IC4PSC (2 << 10) /* 400: Input capture 4 prescaler */
#define CH32V_TIM2_CHCTLR2_Input_IC4PSC_MASK (0x03)
#define CH32V_TIM2_CHCTLR2_Input_CC4S (2 <<  8) /* 100: Capture/Compare 4 selection */
#define CH32V_TIM2_CHCTLR2_Input_CC4S_MASK (0x03)
#define CH32V_TIM2_CHCTLR2_Input_IC3F (4 <<  4) /* 10: Input capture 3 filter */
#define CH32V_TIM2_CHCTLR2_Input_IC3F_MASK (0x0f)
#define CH32V_TIM2_CHCTLR2_Input_IC3PSC (2 <<  2) /* 04: Input capture 3 prescaler */
#define CH32V_TIM2_CHCTLR2_Input_IC3PSC_MASK (0x03)
#define CH32V_TIM2_CHCTLR2_Input_CC3S (2 <<  0) /* 01: Capture/Compare 3 selection */
#define CH32V_TIM2_CHCTLR2_Input_CC3S_MASK (0x03)
#define CH32V_TIM2_CCER_OFFSET    0x0020
#define CH32V_TIM2_CCER           (CH32V_TIM2_BASE + CH32V_TIM2_CCER_OFFSET)
#define CH32V_TIM2_CCER_CC4P      (1 << 13) /* 2000: Capture/Compare 3 output Polarity */
#define CH32V_TIM2_CCER_CC4E      (1 << 12) /* 1000: Capture/Compare 4 output enable */
#define CH32V_TIM2_CCER_CC3P      (1 <<  9) /* 200: Capture/Compare 3 output Polarity */
#define CH32V_TIM2_CCER_CC3E      (1 <<  8) /* 100: Capture/Compare 3 output enable */
#define CH32V_TIM2_CCER_CC2P      (1 <<  5) /* 20: Capture/Compare 2 output Polarity */
#define CH32V_TIM2_CCER_CC2E      (1 <<  4) /* 10: Capture/Compare 2 output enable */
#define CH32V_TIM2_CCER_CC1P      (1 <<  1) /* 02: Capture/Compare 1 output Polarity */
#define CH32V_TIM2_CCER_CC1E      (1 <<  0) /* 01: Capture/Compare 1 output enable */
#define CH32V_TIM2_CNT_OFFSET     0x0024
#define CH32V_TIM2_CNT            (CH32V_TIM2_BASE + CH32V_TIM2_CNT_OFFSET)
#define CH32V_TIM2_CNT_CNT        (16 <<  0) /* 01: counter value */
#define CH32V_TIM2_CNT_CNT_MASK        (0xffff)
#define CH32V_TIM2_PSC_OFFSET     0x0028
#define CH32V_TIM2_PSC            (CH32V_TIM2_BASE + CH32V_TIM2_PSC_OFFSET)
#define CH32V_TIM2_PSC_PSC        (16 <<  0) /* 01: Prescaler value */
#define CH32V_TIM2_PSC_PSC_MASK        (0xffff)
#define CH32V_TIM2_ATRLR_OFFSET   0x002c
#define CH32V_TIM2_ATRLR          (CH32V_TIM2_BASE + CH32V_TIM2_ATRLR_OFFSET)
#define CH32V_TIM2_ATRLR_ATRLR    (16 <<  0) /* 01: Auto-reload value */
#define CH32V_TIM2_ATRLR_ATRLR_MASK    (0xffff)
#define CH32V_TIM2_CH1CVR_OFFSET  0x0034
#define CH32V_TIM2_CH1CVR         (CH32V_TIM2_BASE + CH32V_TIM2_CH1CVR_OFFSET)
#define CH32V_TIM2_CH1CVR_CH1CVR  (16 <<  0) /* 01: Capture/Compare 1 value */
#define CH32V_TIM2_CH1CVR_CH1CVR_MASK  (0xffff)
#define CH32V_TIM2_CH2CVR_OFFSET  0x0038
#define CH32V_TIM2_CH2CVR         (CH32V_TIM2_BASE + CH32V_TIM2_CH2CVR_OFFSET)
#define CH32V_TIM2_CH2CVR_CH2CVR  (16 <<  0) /* 01: Capture/Compare 2 value */
#define CH32V_TIM2_CH2CVR_CH2CVR_MASK  (0xffff)
#define CH32V_TIM2_CH3CVR_OFFSET  0x003c
#define CH32V_TIM2_CH3CVR         (CH32V_TIM2_BASE + CH32V_TIM2_CH3CVR_OFFSET)
#define CH32V_TIM2_CH3CVR_CH3CVR  (16 <<  0) /* 01: Capture/Compare value */
#define CH32V_TIM2_CH3CVR_CH3CVR_MASK  (0xffff)
#define CH32V_TIM2_CH4CVR_OFFSET  0x0040
#define CH32V_TIM2_CH4CVR         (CH32V_TIM2_BASE + CH32V_TIM2_CH4CVR_OFFSET)
#define CH32V_TIM2_CH4CVR_CH4CVR  (16 <<  0) /* 01: Capture/Compare value */
#define CH32V_TIM2_CH4CVR_CH4CVR_MASK  (0xffff)
#define CH32V_TIM2_DMACFGR_OFFSET 0x0048
#define CH32V_TIM2_DMACFGR        (CH32V_TIM2_BASE + CH32V_TIM2_DMACFGR_OFFSET)
#define CH32V_TIM2_DMACFGR_DBL    (5 <<  8) /* 100: DMA burst length */
#define CH32V_TIM2_DMACFGR_DBL_MASK    (0x1f)
#define CH32V_TIM2_DMACFGR_DBA    (5 <<  0) /* 01: DMA base address */
#define CH32V_TIM2_DMACFGR_DBA_MASK    (0x1f)
#define CH32V_TIM2_DMAADR_OFFSET  0x004c
#define CH32V_TIM2_DMAADR         (CH32V_TIM2_BASE + CH32V_TIM2_DMAADR_OFFSET)
#define CH32V_TIM2_DMAADR_DMAADR  (16 <<  0) /* 01: DMA register for burst accesses */
#define CH32V_TIM2_DMAADR_DMAADR_MASK  (0xffff)

/* No registers defined for peripheral TIM3. Using those of TIM2. */
#define CH32V_TIM3_BASE           0x40000400
#define CH32V_TIM3_CTLR1_OFFSET   CH32V_TIM2_CTLR1_OFFSET
#define CH32V_TIM3_CTLR1          CH32V_TIM2_CTLR1
#define CH32V_TIM3_CTLR1_CKD      CH32V_TIM2_CTLR1_CKD
#define CH32V_TIM3_CTLR1_CKD_MASK CH32V_TIM2_CTLR1_CKD_MASK
#define CH32V_TIM3_CTLR1_ARPE     CH32V_TIM2_CTLR1_ARPE
#define CH32V_TIM3_CTLR1_CMS      CH32V_TIM2_CTLR1_CMS
#define CH32V_TIM3_CTLR1_CMS_MASK CH32V_TIM2_CTLR1_CMS_MASK
#define CH32V_TIM3_CTLR1_DIR      CH32V_TIM2_CTLR1_DIR
#define CH32V_TIM3_CTLR1_OPM      CH32V_TIM2_CTLR1_OPM
#define CH32V_TIM3_CTLR1_URS      CH32V_TIM2_CTLR1_URS
#define CH32V_TIM3_CTLR1_UDIS     CH32V_TIM2_CTLR1_UDIS
#define CH32V_TIM3_CTLR1_CEN      CH32V_TIM2_CTLR1_CEN
#define CH32V_TIM3_CTLR2_OFFSET   CH32V_TIM2_CTLR2_OFFSET
#define CH32V_TIM3_CTLR2          CH32V_TIM2_CTLR2
#define CH32V_TIM3_CTLR2_TI1S     CH32V_TIM2_CTLR2_TI1S
#define CH32V_TIM3_CTLR2_MMS      CH32V_TIM2_CTLR2_MMS
#define CH32V_TIM3_CTLR2_MMS_MASK CH32V_TIM2_CTLR2_MMS_MASK
#define CH32V_TIM3_CTLR2_CCDS     CH32V_TIM2_CTLR2_CCDS
#define CH32V_TIM3_CTLR2_CCUS     CH32V_TIM2_CTLR2_CCUS
#define CH32V_TIM3_CTLR2_CCPC     CH32V_TIM2_CTLR2_CCPC
#define CH32V_TIM3_SMCFGR_OFFSET  CH32V_TIM2_SMCFGR_OFFSET
#define CH32V_TIM3_SMCFGR         CH32V_TIM2_SMCFGR
#define CH32V_TIM3_SMCFGR_ETP     CH32V_TIM2_SMCFGR_ETP
#define CH32V_TIM3_SMCFGR_ECE     CH32V_TIM2_SMCFGR_ECE
#define CH32V_TIM3_SMCFGR_ETPS    CH32V_TIM2_SMCFGR_ETPS
#define CH32V_TIM3_SMCFGR_ETPS_MASK CH32V_TIM2_SMCFGR_ETPS_MASK
#define CH32V_TIM3_SMCFGR_ETF     CH32V_TIM2_SMCFGR_ETF
#define CH32V_TIM3_SMCFGR_ETF_MASK CH32V_TIM2_SMCFGR_ETF_MASK
#define CH32V_TIM3_SMCFGR_MSM     CH32V_TIM2_SMCFGR_MSM
#define CH32V_TIM3_SMCFGR_TS      CH32V_TIM2_SMCFGR_TS
#define CH32V_TIM3_SMCFGR_TS_MASK CH32V_TIM2_SMCFGR_TS_MASK
#define CH32V_TIM3_SMCFGR_SMS     CH32V_TIM2_SMCFGR_SMS
#define CH32V_TIM3_SMCFGR_SMS_MASK CH32V_TIM2_SMCFGR_SMS_MASK
#define CH32V_TIM3_DMAINTENR_OFFSET CH32V_TIM2_DMAINTENR_OFFSET
#define CH32V_TIM3_DMAINTENR      CH32V_TIM2_DMAINTENR
#define CH32V_TIM3_DMAINTENR_TDE  CH32V_TIM2_DMAINTENR_TDE
#define CH32V_TIM3_DMAINTENR_COMDE CH32V_TIM2_DMAINTENR_COMDE
#define CH32V_TIM3_DMAINTENR_CC4DE CH32V_TIM2_DMAINTENR_CC4DE
#define CH32V_TIM3_DMAINTENR_CC3DE CH32V_TIM2_DMAINTENR_CC3DE
#define CH32V_TIM3_DMAINTENR_CC2DE CH32V_TIM2_DMAINTENR_CC2DE
#define CH32V_TIM3_DMAINTENR_CC1DE CH32V_TIM2_DMAINTENR_CC1DE
#define CH32V_TIM3_DMAINTENR_UDE  CH32V_TIM2_DMAINTENR_UDE
#define CH32V_TIM3_DMAINTENR_TIE  CH32V_TIM2_DMAINTENR_TIE
#define CH32V_TIM3_DMAINTENR_CC4IE CH32V_TIM2_DMAINTENR_CC4IE
#define CH32V_TIM3_DMAINTENR_CC3IE CH32V_TIM2_DMAINTENR_CC3IE
#define CH32V_TIM3_DMAINTENR_CC2IE CH32V_TIM2_DMAINTENR_CC2IE
#define CH32V_TIM3_DMAINTENR_CC1IE CH32V_TIM2_DMAINTENR_CC1IE
#define CH32V_TIM3_DMAINTENR_UIE  CH32V_TIM2_DMAINTENR_UIE
#define CH32V_TIM3_INTFR_OFFSET   CH32V_TIM2_INTFR_OFFSET
#define CH32V_TIM3_INTFR          CH32V_TIM2_INTFR
#define CH32V_TIM3_INTFR_CC4OF    CH32V_TIM2_INTFR_CC4OF
#define CH32V_TIM3_INTFR_CC3OF    CH32V_TIM2_INTFR_CC3OF
#define CH32V_TIM3_INTFR_CC2OF    CH32V_TIM2_INTFR_CC2OF
#define CH32V_TIM3_INTFR_CC1OF    CH32V_TIM2_INTFR_CC1OF
#define CH32V_TIM3_INTFR_TIF      CH32V_TIM2_INTFR_TIF
#define CH32V_TIM3_INTFR_CC4IF    CH32V_TIM2_INTFR_CC4IF
#define CH32V_TIM3_INTFR_CC3IF    CH32V_TIM2_INTFR_CC3IF
#define CH32V_TIM3_INTFR_CC2IF    CH32V_TIM2_INTFR_CC2IF
#define CH32V_TIM3_INTFR_CC1IF    CH32V_TIM2_INTFR_CC1IF
#define CH32V_TIM3_INTFR_UIF      CH32V_TIM2_INTFR_UIF
#define CH32V_TIM3_SWEVGR_OFFSET  CH32V_TIM2_SWEVGR_OFFSET
#define CH32V_TIM3_SWEVGR         CH32V_TIM2_SWEVGR
#define CH32V_TIM3_SWEVGR_BG      CH32V_TIM2_SWEVGR_BG
#define CH32V_TIM3_SWEVGR_TG      CH32V_TIM2_SWEVGR_TG
#define CH32V_TIM3_SWEVGR_COMG    CH32V_TIM2_SWEVGR_COMG
#define CH32V_TIM3_SWEVGR_CC4G    CH32V_TIM2_SWEVGR_CC4G
#define CH32V_TIM3_SWEVGR_CC3G    CH32V_TIM2_SWEVGR_CC3G
#define CH32V_TIM3_SWEVGR_CC2G    CH32V_TIM2_SWEVGR_CC2G
#define CH32V_TIM3_SWEVGR_CC1G    CH32V_TIM2_SWEVGR_CC1G
#define CH32V_TIM3_SWEVGR_UG      CH32V_TIM2_SWEVGR_UG
#define CH32V_TIM3_CHCTLR1_Output_OFFSET CH32V_TIM2_CHCTLR1_Output_OFFSET
#define CH32V_TIM3_CHCTLR1_Output CH32V_TIM2_CHCTLR1_Output
#define CH32V_TIM3_CHCTLR1_Output_OC2CE CH32V_TIM2_CHCTLR1_Output_OC2CE
#define CH32V_TIM3_CHCTLR1_Output_OC2M CH32V_TIM2_CHCTLR1_Output_OC2M
#define CH32V_TIM3_CHCTLR1_Output_OC2M_MASK CH32V_TIM2_CHCTLR1_Output_OC2M_MASK
#define CH32V_TIM3_CHCTLR1_Output_OC2PE CH32V_TIM2_CHCTLR1_Output_OC2PE
#define CH32V_TIM3_CHCTLR1_Output_OC2FE CH32V_TIM2_CHCTLR1_Output_OC2FE
#define CH32V_TIM3_CHCTLR1_Output_CC2S CH32V_TIM2_CHCTLR1_Output_CC2S
#define CH32V_TIM3_CHCTLR1_Output_CC2S_MASK CH32V_TIM2_CHCTLR1_Output_CC2S_MASK
#define CH32V_TIM3_CHCTLR1_Output_OC1CE CH32V_TIM2_CHCTLR1_Output_OC1CE
#define CH32V_TIM3_CHCTLR1_Output_OC1M CH32V_TIM2_CHCTLR1_Output_OC1M
#define CH32V_TIM3_CHCTLR1_Output_OC1M_MASK CH32V_TIM2_CHCTLR1_Output_OC1M_MASK
#define CH32V_TIM3_CHCTLR1_Output_OC1PE CH32V_TIM2_CHCTLR1_Output_OC1PE
#define CH32V_TIM3_CHCTLR1_Output_OC1FE CH32V_TIM2_CHCTLR1_Output_OC1FE
#define CH32V_TIM3_CHCTLR1_Output_CC1S CH32V_TIM2_CHCTLR1_Output_CC1S
#define CH32V_TIM3_CHCTLR1_Output_CC1S_MASK CH32V_TIM2_CHCTLR1_Output_CC1S_MASK
#define CH32V_TIM3_CHCTLR1_Input_OFFSET CH32V_TIM2_CHCTLR1_Input_OFFSET
#define CH32V_TIM3_CHCTLR1_Input  CH32V_TIM2_CHCTLR1_Input
#define CH32V_TIM3_CHCTLR1_Input_IC2F CH32V_TIM2_CHCTLR1_Input_IC2F
#define CH32V_TIM3_CHCTLR1_Input_IC2F_MASK CH32V_TIM2_CHCTLR1_Input_IC2F_MASK
#define CH32V_TIM3_CHCTLR1_Input_IC2PSC CH32V_TIM2_CHCTLR1_Input_IC2PSC
#define CH32V_TIM3_CHCTLR1_Input_IC2PSC_MASK CH32V_TIM2_CHCTLR1_Input_IC2PSC_MASK
#define CH32V_TIM3_CHCTLR1_Input_CC2S CH32V_TIM2_CHCTLR1_Input_CC2S
#define CH32V_TIM3_CHCTLR1_Input_CC2S_MASK CH32V_TIM2_CHCTLR1_Input_CC2S_MASK
#define CH32V_TIM3_CHCTLR1_Input_IC1F CH32V_TIM2_CHCTLR1_Input_IC1F
#define CH32V_TIM3_CHCTLR1_Input_IC1F_MASK CH32V_TIM2_CHCTLR1_Input_IC1F_MASK
#define CH32V_TIM3_CHCTLR1_Input_IC1PSC CH32V_TIM2_CHCTLR1_Input_IC1PSC
#define CH32V_TIM3_CHCTLR1_Input_IC1PSC_MASK CH32V_TIM2_CHCTLR1_Input_IC1PSC_MASK
#define CH32V_TIM3_CHCTLR1_Input_CC1S CH32V_TIM2_CHCTLR1_Input_CC1S
#define CH32V_TIM3_CHCTLR1_Input_CC1S_MASK CH32V_TIM2_CHCTLR1_Input_CC1S_MASK
#define CH32V_TIM3_CHCTLR2_Output_OFFSET CH32V_TIM2_CHCTLR2_Output_OFFSET
#define CH32V_TIM3_CHCTLR2_Output CH32V_TIM2_CHCTLR2_Output
#define CH32V_TIM3_CHCTLR2_Output_OC4CE CH32V_TIM2_CHCTLR2_Output_OC4CE
#define CH32V_TIM3_CHCTLR2_Output_OC4M CH32V_TIM2_CHCTLR2_Output_OC4M
#define CH32V_TIM3_CHCTLR2_Output_OC4M_MASK CH32V_TIM2_CHCTLR2_Output_OC4M_MASK
#define CH32V_TIM3_CHCTLR2_Output_OC4PE CH32V_TIM2_CHCTLR2_Output_OC4PE
#define CH32V_TIM3_CHCTLR2_Output_OC4FE CH32V_TIM2_CHCTLR2_Output_OC4FE
#define CH32V_TIM3_CHCTLR2_Output_CC4S CH32V_TIM2_CHCTLR2_Output_CC4S
#define CH32V_TIM3_CHCTLR2_Output_CC4S_MASK CH32V_TIM2_CHCTLR2_Output_CC4S_MASK
#define CH32V_TIM3_CHCTLR2_Output_OC3CE CH32V_TIM2_CHCTLR2_Output_OC3CE
#define CH32V_TIM3_CHCTLR2_Output_OC3M CH32V_TIM2_CHCTLR2_Output_OC3M
#define CH32V_TIM3_CHCTLR2_Output_OC3M_MASK CH32V_TIM2_CHCTLR2_Output_OC3M_MASK
#define CH32V_TIM3_CHCTLR2_Output_OC3PE CH32V_TIM2_CHCTLR2_Output_OC3PE
#define CH32V_TIM3_CHCTLR2_Output_OC3FE CH32V_TIM2_CHCTLR2_Output_OC3FE
#define CH32V_TIM3_CHCTLR2_Output_CC3S CH32V_TIM2_CHCTLR2_Output_CC3S
#define CH32V_TIM3_CHCTLR2_Output_CC3S_MASK CH32V_TIM2_CHCTLR2_Output_CC3S_MASK
#define CH32V_TIM3_CHCTLR2_Input_OFFSET CH32V_TIM2_CHCTLR2_Input_OFFSET
#define CH32V_TIM3_CHCTLR2_Input  CH32V_TIM2_CHCTLR2_Input
#define CH32V_TIM3_CHCTLR2_Input_IC4F CH32V_TIM2_CHCTLR2_Input_IC4F
#define CH32V_TIM3_CHCTLR2_Input_IC4F_MASK CH32V_TIM2_CHCTLR2_Input_IC4F_MASK
#define CH32V_TIM3_CHCTLR2_Input_IC4PSC CH32V_TIM2_CHCTLR2_Input_IC4PSC
#define CH32V_TIM3_CHCTLR2_Input_IC4PSC_MASK CH32V_TIM2_CHCTLR2_Input_IC4PSC_MASK
#define CH32V_TIM3_CHCTLR2_Input_CC4S CH32V_TIM2_CHCTLR2_Input_CC4S
#define CH32V_TIM3_CHCTLR2_Input_CC4S_MASK CH32V_TIM2_CHCTLR2_Input_CC4S_MASK
#define CH32V_TIM3_CHCTLR2_Input_IC3F CH32V_TIM2_CHCTLR2_Input_IC3F
#define CH32V_TIM3_CHCTLR2_Input_IC3F_MASK CH32V_TIM2_CHCTLR2_Input_IC3F_MASK
#define CH32V_TIM3_CHCTLR2_Input_IC3PSC CH32V_TIM2_CHCTLR2_Input_IC3PSC
#define CH32V_TIM3_CHCTLR2_Input_IC3PSC_MASK CH32V_TIM2_CHCTLR2_Input_IC3PSC_MASK
#define CH32V_TIM3_CHCTLR2_Input_CC3S CH32V_TIM2_CHCTLR2_Input_CC3S
#define CH32V_TIM3_CHCTLR2_Input_CC3S_MASK CH32V_TIM2_CHCTLR2_Input_CC3S_MASK
#define CH32V_TIM3_CCER_OFFSET    CH32V_TIM2_CCER_OFFSET
#define CH32V_TIM3_CCER           CH32V_TIM2_CCER
#define CH32V_TIM3_CCER_CC4P      CH32V_TIM2_CCER_CC4P
#define CH32V_TIM3_CCER_CC4E      CH32V_TIM2_CCER_CC4E
#define CH32V_TIM3_CCER_CC3P      CH32V_TIM2_CCER_CC3P
#define CH32V_TIM3_CCER_CC3E      CH32V_TIM2_CCER_CC3E
#define CH32V_TIM3_CCER_CC2P      CH32V_TIM2_CCER_CC2P
#define CH32V_TIM3_CCER_CC2E      CH32V_TIM2_CCER_CC2E
#define CH32V_TIM3_CCER_CC1P      CH32V_TIM2_CCER_CC1P
#define CH32V_TIM3_CCER_CC1E      CH32V_TIM2_CCER_CC1E
#define CH32V_TIM3_CNT_OFFSET     CH32V_TIM2_CNT_OFFSET
#define CH32V_TIM3_CNT            CH32V_TIM2_CNT
#define CH32V_TIM3_CNT_CNT        CH32V_TIM2_CNT_CNT
#define CH32V_TIM3_CNT_CNT_MASK   CH32V_TIM2_CNT_CNT_MASK
#define CH32V_TIM3_PSC_OFFSET     CH32V_TIM2_PSC_OFFSET
#define CH32V_TIM3_PSC            CH32V_TIM2_PSC
#define CH32V_TIM3_PSC_PSC        CH32V_TIM2_PSC_PSC
#define CH32V_TIM3_PSC_PSC_MASK   CH32V_TIM2_PSC_PSC_MASK
#define CH32V_TIM3_ATRLR_OFFSET   CH32V_TIM2_ATRLR_OFFSET
#define CH32V_TIM3_ATRLR          CH32V_TIM2_ATRLR
#define CH32V_TIM3_ATRLR_ATRLR    CH32V_TIM2_ATRLR_ATRLR
#define CH32V_TIM3_ATRLR_ATRLR_MASK CH32V_TIM2_ATRLR_ATRLR_MASK
#define CH32V_TIM3_CH1CVR_OFFSET  CH32V_TIM2_CH1CVR_OFFSET
#define CH32V_TIM3_CH1CVR         CH32V_TIM2_CH1CVR
#define CH32V_TIM3_CH1CVR_CH1CVR  CH32V_TIM2_CH1CVR_CH1CVR
#define CH32V_TIM3_CH1CVR_CH1CVR_MASK CH32V_TIM2_CH1CVR_CH1CVR_MASK
#define CH32V_TIM3_CH2CVR_OFFSET  CH32V_TIM2_CH2CVR_OFFSET
#define CH32V_TIM3_CH2CVR         CH32V_TIM2_CH2CVR
#define CH32V_TIM3_CH2CVR_CH2CVR  CH32V_TIM2_CH2CVR_CH2CVR
#define CH32V_TIM3_CH2CVR_CH2CVR_MASK CH32V_TIM2_CH2CVR_CH2CVR_MASK
#define CH32V_TIM3_CH3CVR_OFFSET  CH32V_TIM2_CH3CVR_OFFSET
#define CH32V_TIM3_CH3CVR         CH32V_TIM2_CH3CVR
#define CH32V_TIM3_CH3CVR_CH3CVR  CH32V_TIM2_CH3CVR_CH3CVR
#define CH32V_TIM3_CH3CVR_CH3CVR_MASK CH32V_TIM2_CH3CVR_CH3CVR_MASK
#define CH32V_TIM3_CH4CVR_OFFSET  CH32V_TIM2_CH4CVR_OFFSET
#define CH32V_TIM3_CH4CVR         CH32V_TIM2_CH4CVR
#define CH32V_TIM3_CH4CVR_CH4CVR  CH32V_TIM2_CH4CVR_CH4CVR
#define CH32V_TIM3_CH4CVR_CH4CVR_MASK CH32V_TIM2_CH4CVR_CH4CVR_MASK
#define CH32V_TIM3_DMACFGR_OFFSET CH32V_TIM2_DMACFGR_OFFSET
#define CH32V_TIM3_DMACFGR        CH32V_TIM2_DMACFGR
#define CH32V_TIM3_DMACFGR_DBL    CH32V_TIM2_DMACFGR_DBL
#define CH32V_TIM3_DMACFGR_DBL_MASK CH32V_TIM2_DMACFGR_DBL_MASK
#define CH32V_TIM3_DMACFGR_DBA    CH32V_TIM2_DMACFGR_DBA
#define CH32V_TIM3_DMACFGR_DBA_MASK CH32V_TIM2_DMACFGR_DBA_MASK
#define CH32V_TIM3_DMAADR_OFFSET  CH32V_TIM2_DMAADR_OFFSET
#define CH32V_TIM3_DMAADR         CH32V_TIM2_DMAADR
#define CH32V_TIM3_DMAADR_DMAADR  CH32V_TIM2_DMAADR_DMAADR
#define CH32V_TIM3_DMAADR_DMAADR_MASK CH32V_TIM2_DMAADR_DMAADR_MASK

/* No registers defined for peripheral TIM4. Using those of TIM2. */
#define CH32V_TIM4_BASE           0x40000800
#define CH32V_TIM4_CTLR1_OFFSET   CH32V_TIM2_CTLR1_OFFSET
#define CH32V_TIM4_CTLR1          CH32V_TIM2_CTLR1
#define CH32V_TIM4_CTLR1_CKD      CH32V_TIM2_CTLR1_CKD
#define CH32V_TIM4_CTLR1_CKD_MASK CH32V_TIM2_CTLR1_CKD_MASK
#define CH32V_TIM4_CTLR1_ARPE     CH32V_TIM2_CTLR1_ARPE
#define CH32V_TIM4_CTLR1_CMS      CH32V_TIM2_CTLR1_CMS
#define CH32V_TIM4_CTLR1_CMS_MASK CH32V_TIM2_CTLR1_CMS_MASK
#define CH32V_TIM4_CTLR1_DIR      CH32V_TIM2_CTLR1_DIR
#define CH32V_TIM4_CTLR1_OPM      CH32V_TIM2_CTLR1_OPM
#define CH32V_TIM4_CTLR1_URS      CH32V_TIM2_CTLR1_URS
#define CH32V_TIM4_CTLR1_UDIS     CH32V_TIM2_CTLR1_UDIS
#define CH32V_TIM4_CTLR1_CEN      CH32V_TIM2_CTLR1_CEN
#define CH32V_TIM4_CTLR2_OFFSET   CH32V_TIM2_CTLR2_OFFSET
#define CH32V_TIM4_CTLR2          CH32V_TIM2_CTLR2
#define CH32V_TIM4_CTLR2_TI1S     CH32V_TIM2_CTLR2_TI1S
#define CH32V_TIM4_CTLR2_MMS      CH32V_TIM2_CTLR2_MMS
#define CH32V_TIM4_CTLR2_MMS_MASK CH32V_TIM2_CTLR2_MMS_MASK
#define CH32V_TIM4_CTLR2_CCDS     CH32V_TIM2_CTLR2_CCDS
#define CH32V_TIM4_CTLR2_CCUS     CH32V_TIM2_CTLR2_CCUS
#define CH32V_TIM4_CTLR2_CCPC     CH32V_TIM2_CTLR2_CCPC
#define CH32V_TIM4_SMCFGR_OFFSET  CH32V_TIM2_SMCFGR_OFFSET
#define CH32V_TIM4_SMCFGR         CH32V_TIM2_SMCFGR
#define CH32V_TIM4_SMCFGR_ETP     CH32V_TIM2_SMCFGR_ETP
#define CH32V_TIM4_SMCFGR_ECE     CH32V_TIM2_SMCFGR_ECE
#define CH32V_TIM4_SMCFGR_ETPS    CH32V_TIM2_SMCFGR_ETPS
#define CH32V_TIM4_SMCFGR_ETPS_MASK CH32V_TIM2_SMCFGR_ETPS_MASK
#define CH32V_TIM4_SMCFGR_ETF     CH32V_TIM2_SMCFGR_ETF
#define CH32V_TIM4_SMCFGR_ETF_MASK CH32V_TIM2_SMCFGR_ETF_MASK
#define CH32V_TIM4_SMCFGR_MSM     CH32V_TIM2_SMCFGR_MSM
#define CH32V_TIM4_SMCFGR_TS      CH32V_TIM2_SMCFGR_TS
#define CH32V_TIM4_SMCFGR_TS_MASK CH32V_TIM2_SMCFGR_TS_MASK
#define CH32V_TIM4_SMCFGR_SMS     CH32V_TIM2_SMCFGR_SMS
#define CH32V_TIM4_SMCFGR_SMS_MASK CH32V_TIM2_SMCFGR_SMS_MASK
#define CH32V_TIM4_DMAINTENR_OFFSET CH32V_TIM2_DMAINTENR_OFFSET
#define CH32V_TIM4_DMAINTENR      CH32V_TIM2_DMAINTENR
#define CH32V_TIM4_DMAINTENR_TDE  CH32V_TIM2_DMAINTENR_TDE
#define CH32V_TIM4_DMAINTENR_COMDE CH32V_TIM2_DMAINTENR_COMDE
#define CH32V_TIM4_DMAINTENR_CC4DE CH32V_TIM2_DMAINTENR_CC4DE
#define CH32V_TIM4_DMAINTENR_CC3DE CH32V_TIM2_DMAINTENR_CC3DE
#define CH32V_TIM4_DMAINTENR_CC2DE CH32V_TIM2_DMAINTENR_CC2DE
#define CH32V_TIM4_DMAINTENR_CC1DE CH32V_TIM2_DMAINTENR_CC1DE
#define CH32V_TIM4_DMAINTENR_UDE  CH32V_TIM2_DMAINTENR_UDE
#define CH32V_TIM4_DMAINTENR_TIE  CH32V_TIM2_DMAINTENR_TIE
#define CH32V_TIM4_DMAINTENR_CC4IE CH32V_TIM2_DMAINTENR_CC4IE
#define CH32V_TIM4_DMAINTENR_CC3IE CH32V_TIM2_DMAINTENR_CC3IE
#define CH32V_TIM4_DMAINTENR_CC2IE CH32V_TIM2_DMAINTENR_CC2IE
#define CH32V_TIM4_DMAINTENR_CC1IE CH32V_TIM2_DMAINTENR_CC1IE
#define CH32V_TIM4_DMAINTENR_UIE  CH32V_TIM2_DMAINTENR_UIE
#define CH32V_TIM4_INTFR_OFFSET   CH32V_TIM2_INTFR_OFFSET
#define CH32V_TIM4_INTFR          CH32V_TIM2_INTFR
#define CH32V_TIM4_INTFR_CC4OF    CH32V_TIM2_INTFR_CC4OF
#define CH32V_TIM4_INTFR_CC3OF    CH32V_TIM2_INTFR_CC3OF
#define CH32V_TIM4_INTFR_CC2OF    CH32V_TIM2_INTFR_CC2OF
#define CH32V_TIM4_INTFR_CC1OF    CH32V_TIM2_INTFR_CC1OF
#define CH32V_TIM4_INTFR_TIF      CH32V_TIM2_INTFR_TIF
#define CH32V_TIM4_INTFR_CC4IF    CH32V_TIM2_INTFR_CC4IF
#define CH32V_TIM4_INTFR_CC3IF    CH32V_TIM2_INTFR_CC3IF
#define CH32V_TIM4_INTFR_CC2IF    CH32V_TIM2_INTFR_CC2IF
#define CH32V_TIM4_INTFR_CC1IF    CH32V_TIM2_INTFR_CC1IF
#define CH32V_TIM4_INTFR_UIF      CH32V_TIM2_INTFR_UIF
#define CH32V_TIM4_SWEVGR_OFFSET  CH32V_TIM2_SWEVGR_OFFSET
#define CH32V_TIM4_SWEVGR         CH32V_TIM2_SWEVGR
#define CH32V_TIM4_SWEVGR_BG      CH32V_TIM2_SWEVGR_BG
#define CH32V_TIM4_SWEVGR_TG      CH32V_TIM2_SWEVGR_TG
#define CH32V_TIM4_SWEVGR_COMG    CH32V_TIM2_SWEVGR_COMG
#define CH32V_TIM4_SWEVGR_CC4G    CH32V_TIM2_SWEVGR_CC4G
#define CH32V_TIM4_SWEVGR_CC3G    CH32V_TIM2_SWEVGR_CC3G
#define CH32V_TIM4_SWEVGR_CC2G    CH32V_TIM2_SWEVGR_CC2G
#define CH32V_TIM4_SWEVGR_CC1G    CH32V_TIM2_SWEVGR_CC1G
#define CH32V_TIM4_SWEVGR_UG      CH32V_TIM2_SWEVGR_UG
#define CH32V_TIM4_CHCTLR1_Output_OFFSET CH32V_TIM2_CHCTLR1_Output_OFFSET
#define CH32V_TIM4_CHCTLR1_Output CH32V_TIM2_CHCTLR1_Output
#define CH32V_TIM4_CHCTLR1_Output_OC2CE CH32V_TIM2_CHCTLR1_Output_OC2CE
#define CH32V_TIM4_CHCTLR1_Output_OC2M CH32V_TIM2_CHCTLR1_Output_OC2M
#define CH32V_TIM4_CHCTLR1_Output_OC2M_MASK CH32V_TIM2_CHCTLR1_Output_OC2M_MASK
#define CH32V_TIM4_CHCTLR1_Output_OC2PE CH32V_TIM2_CHCTLR1_Output_OC2PE
#define CH32V_TIM4_CHCTLR1_Output_OC2FE CH32V_TIM2_CHCTLR1_Output_OC2FE
#define CH32V_TIM4_CHCTLR1_Output_CC2S CH32V_TIM2_CHCTLR1_Output_CC2S
#define CH32V_TIM4_CHCTLR1_Output_CC2S_MASK CH32V_TIM2_CHCTLR1_Output_CC2S_MASK
#define CH32V_TIM4_CHCTLR1_Output_OC1CE CH32V_TIM2_CHCTLR1_Output_OC1CE
#define CH32V_TIM4_CHCTLR1_Output_OC1M CH32V_TIM2_CHCTLR1_Output_OC1M
#define CH32V_TIM4_CHCTLR1_Output_OC1M_MASK CH32V_TIM2_CHCTLR1_Output_OC1M_MASK
#define CH32V_TIM4_CHCTLR1_Output_OC1PE CH32V_TIM2_CHCTLR1_Output_OC1PE
#define CH32V_TIM4_CHCTLR1_Output_OC1FE CH32V_TIM2_CHCTLR1_Output_OC1FE
#define CH32V_TIM4_CHCTLR1_Output_CC1S CH32V_TIM2_CHCTLR1_Output_CC1S
#define CH32V_TIM4_CHCTLR1_Output_CC1S_MASK CH32V_TIM2_CHCTLR1_Output_CC1S_MASK
#define CH32V_TIM4_CHCTLR1_Input_OFFSET CH32V_TIM2_CHCTLR1_Input_OFFSET
#define CH32V_TIM4_CHCTLR1_Input  CH32V_TIM2_CHCTLR1_Input
#define CH32V_TIM4_CHCTLR1_Input_IC2F CH32V_TIM2_CHCTLR1_Input_IC2F
#define CH32V_TIM4_CHCTLR1_Input_IC2F_MASK CH32V_TIM2_CHCTLR1_Input_IC2F_MASK
#define CH32V_TIM4_CHCTLR1_Input_IC2PSC CH32V_TIM2_CHCTLR1_Input_IC2PSC
#define CH32V_TIM4_CHCTLR1_Input_IC2PSC_MASK CH32V_TIM2_CHCTLR1_Input_IC2PSC_MASK
#define CH32V_TIM4_CHCTLR1_Input_CC2S CH32V_TIM2_CHCTLR1_Input_CC2S
#define CH32V_TIM4_CHCTLR1_Input_CC2S_MASK CH32V_TIM2_CHCTLR1_Input_CC2S_MASK
#define CH32V_TIM4_CHCTLR1_Input_IC1F CH32V_TIM2_CHCTLR1_Input_IC1F
#define CH32V_TIM4_CHCTLR1_Input_IC1F_MASK CH32V_TIM2_CHCTLR1_Input_IC1F_MASK
#define CH32V_TIM4_CHCTLR1_Input_IC1PSC CH32V_TIM2_CHCTLR1_Input_IC1PSC
#define CH32V_TIM4_CHCTLR1_Input_IC1PSC_MASK CH32V_TIM2_CHCTLR1_Input_IC1PSC_MASK
#define CH32V_TIM4_CHCTLR1_Input_CC1S CH32V_TIM2_CHCTLR1_Input_CC1S
#define CH32V_TIM4_CHCTLR1_Input_CC1S_MASK CH32V_TIM2_CHCTLR1_Input_CC1S_MASK
#define CH32V_TIM4_CHCTLR2_Output_OFFSET CH32V_TIM2_CHCTLR2_Output_OFFSET
#define CH32V_TIM4_CHCTLR2_Output CH32V_TIM2_CHCTLR2_Output
#define CH32V_TIM4_CHCTLR2_Output_OC4CE CH32V_TIM2_CHCTLR2_Output_OC4CE
#define CH32V_TIM4_CHCTLR2_Output_OC4M CH32V_TIM2_CHCTLR2_Output_OC4M
#define CH32V_TIM4_CHCTLR2_Output_OC4M_MASK CH32V_TIM2_CHCTLR2_Output_OC4M_MASK
#define CH32V_TIM4_CHCTLR2_Output_OC4PE CH32V_TIM2_CHCTLR2_Output_OC4PE
#define CH32V_TIM4_CHCTLR2_Output_OC4FE CH32V_TIM2_CHCTLR2_Output_OC4FE
#define CH32V_TIM4_CHCTLR2_Output_CC4S CH32V_TIM2_CHCTLR2_Output_CC4S
#define CH32V_TIM4_CHCTLR2_Output_CC4S_MASK CH32V_TIM2_CHCTLR2_Output_CC4S_MASK
#define CH32V_TIM4_CHCTLR2_Output_OC3CE CH32V_TIM2_CHCTLR2_Output_OC3CE
#define CH32V_TIM4_CHCTLR2_Output_OC3M CH32V_TIM2_CHCTLR2_Output_OC3M
#define CH32V_TIM4_CHCTLR2_Output_OC3M_MASK CH32V_TIM2_CHCTLR2_Output_OC3M_MASK
#define CH32V_TIM4_CHCTLR2_Output_OC3PE CH32V_TIM2_CHCTLR2_Output_OC3PE
#define CH32V_TIM4_CHCTLR2_Output_OC3FE CH32V_TIM2_CHCTLR2_Output_OC3FE
#define CH32V_TIM4_CHCTLR2_Output_CC3S CH32V_TIM2_CHCTLR2_Output_CC3S
#define CH32V_TIM4_CHCTLR2_Output_CC3S_MASK CH32V_TIM2_CHCTLR2_Output_CC3S_MASK
#define CH32V_TIM4_CHCTLR2_Input_OFFSET CH32V_TIM2_CHCTLR2_Input_OFFSET
#define CH32V_TIM4_CHCTLR2_Input  CH32V_TIM2_CHCTLR2_Input
#define CH32V_TIM4_CHCTLR2_Input_IC4F CH32V_TIM2_CHCTLR2_Input_IC4F
#define CH32V_TIM4_CHCTLR2_Input_IC4F_MASK CH32V_TIM2_CHCTLR2_Input_IC4F_MASK
#define CH32V_TIM4_CHCTLR2_Input_IC4PSC CH32V_TIM2_CHCTLR2_Input_IC4PSC
#define CH32V_TIM4_CHCTLR2_Input_IC4PSC_MASK CH32V_TIM2_CHCTLR2_Input_IC4PSC_MASK
#define CH32V_TIM4_CHCTLR2_Input_CC4S CH32V_TIM2_CHCTLR2_Input_CC4S
#define CH32V_TIM4_CHCTLR2_Input_CC4S_MASK CH32V_TIM2_CHCTLR2_Input_CC4S_MASK
#define CH32V_TIM4_CHCTLR2_Input_IC3F CH32V_TIM2_CHCTLR2_Input_IC3F
#define CH32V_TIM4_CHCTLR2_Input_IC3F_MASK CH32V_TIM2_CHCTLR2_Input_IC3F_MASK
#define CH32V_TIM4_CHCTLR2_Input_IC3PSC CH32V_TIM2_CHCTLR2_Input_IC3PSC
#define CH32V_TIM4_CHCTLR2_Input_IC3PSC_MASK CH32V_TIM2_CHCTLR2_Input_IC3PSC_MASK
#define CH32V_TIM4_CHCTLR2_Input_CC3S CH32V_TIM2_CHCTLR2_Input_CC3S
#define CH32V_TIM4_CHCTLR2_Input_CC3S_MASK CH32V_TIM2_CHCTLR2_Input_CC3S_MASK
#define CH32V_TIM4_CCER_OFFSET    CH32V_TIM2_CCER_OFFSET
#define CH32V_TIM4_CCER           CH32V_TIM2_CCER
#define CH32V_TIM4_CCER_CC4P      CH32V_TIM2_CCER_CC4P
#define CH32V_TIM4_CCER_CC4E      CH32V_TIM2_CCER_CC4E
#define CH32V_TIM4_CCER_CC3P      CH32V_TIM2_CCER_CC3P
#define CH32V_TIM4_CCER_CC3E      CH32V_TIM2_CCER_CC3E
#define CH32V_TIM4_CCER_CC2P      CH32V_TIM2_CCER_CC2P
#define CH32V_TIM4_CCER_CC2E      CH32V_TIM2_CCER_CC2E
#define CH32V_TIM4_CCER_CC1P      CH32V_TIM2_CCER_CC1P
#define CH32V_TIM4_CCER_CC1E      CH32V_TIM2_CCER_CC1E
#define CH32V_TIM4_CNT_OFFSET     CH32V_TIM2_CNT_OFFSET
#define CH32V_TIM4_CNT            CH32V_TIM2_CNT
#define CH32V_TIM4_CNT_CNT        CH32V_TIM2_CNT_CNT
#define CH32V_TIM4_CNT_CNT_MASK   CH32V_TIM2_CNT_CNT_MASK
#define CH32V_TIM4_PSC_OFFSET     CH32V_TIM2_PSC_OFFSET
#define CH32V_TIM4_PSC            CH32V_TIM2_PSC
#define CH32V_TIM4_PSC_PSC        CH32V_TIM2_PSC_PSC
#define CH32V_TIM4_PSC_PSC_MASK   CH32V_TIM2_PSC_PSC_MASK
#define CH32V_TIM4_ATRLR_OFFSET   CH32V_TIM2_ATRLR_OFFSET
#define CH32V_TIM4_ATRLR          CH32V_TIM2_ATRLR
#define CH32V_TIM4_ATRLR_ATRLR    CH32V_TIM2_ATRLR_ATRLR
#define CH32V_TIM4_ATRLR_ATRLR_MASK CH32V_TIM2_ATRLR_ATRLR_MASK
#define CH32V_TIM4_CH1CVR_OFFSET  CH32V_TIM2_CH1CVR_OFFSET
#define CH32V_TIM4_CH1CVR         CH32V_TIM2_CH1CVR
#define CH32V_TIM4_CH1CVR_CH1CVR  CH32V_TIM2_CH1CVR_CH1CVR
#define CH32V_TIM4_CH1CVR_CH1CVR_MASK CH32V_TIM2_CH1CVR_CH1CVR_MASK
#define CH32V_TIM4_CH2CVR_OFFSET  CH32V_TIM2_CH2CVR_OFFSET
#define CH32V_TIM4_CH2CVR         CH32V_TIM2_CH2CVR
#define CH32V_TIM4_CH2CVR_CH2CVR  CH32V_TIM2_CH2CVR_CH2CVR
#define CH32V_TIM4_CH2CVR_CH2CVR_MASK CH32V_TIM2_CH2CVR_CH2CVR_MASK
#define CH32V_TIM4_CH3CVR_OFFSET  CH32V_TIM2_CH3CVR_OFFSET
#define CH32V_TIM4_CH3CVR         CH32V_TIM2_CH3CVR
#define CH32V_TIM4_CH3CVR_CH3CVR  CH32V_TIM2_CH3CVR_CH3CVR
#define CH32V_TIM4_CH3CVR_CH3CVR_MASK CH32V_TIM2_CH3CVR_CH3CVR_MASK
#define CH32V_TIM4_CH4CVR_OFFSET  CH32V_TIM2_CH4CVR_OFFSET
#define CH32V_TIM4_CH4CVR         CH32V_TIM2_CH4CVR
#define CH32V_TIM4_CH4CVR_CH4CVR  CH32V_TIM2_CH4CVR_CH4CVR
#define CH32V_TIM4_CH4CVR_CH4CVR_MASK CH32V_TIM2_CH4CVR_CH4CVR_MASK
#define CH32V_TIM4_DMACFGR_OFFSET CH32V_TIM2_DMACFGR_OFFSET
#define CH32V_TIM4_DMACFGR        CH32V_TIM2_DMACFGR
#define CH32V_TIM4_DMACFGR_DBL    CH32V_TIM2_DMACFGR_DBL
#define CH32V_TIM4_DMACFGR_DBL_MASK CH32V_TIM2_DMACFGR_DBL_MASK
#define CH32V_TIM4_DMACFGR_DBA    CH32V_TIM2_DMACFGR_DBA
#define CH32V_TIM4_DMACFGR_DBA_MASK CH32V_TIM2_DMACFGR_DBA_MASK
#define CH32V_TIM4_DMAADR_OFFSET  CH32V_TIM2_DMAADR_OFFSET
#define CH32V_TIM4_DMAADR         CH32V_TIM2_DMAADR
#define CH32V_TIM4_DMAADR_DMAADR  CH32V_TIM2_DMAADR_DMAADR
#define CH32V_TIM4_DMAADR_DMAADR_MASK CH32V_TIM2_DMAADR_DMAADR_MASK

/* No registers defined for peripheral TIM5. Using those of TIM2. */
#define CH32V_TIM5_BASE           0x40000c00
#define CH32V_TIM5_CTLR1_OFFSET   CH32V_TIM2_CTLR1_OFFSET
#define CH32V_TIM5_CTLR1          CH32V_TIM2_CTLR1
#define CH32V_TIM5_CTLR1_CKD      CH32V_TIM2_CTLR1_CKD
#define CH32V_TIM5_CTLR1_CKD_MASK CH32V_TIM2_CTLR1_CKD_MASK
#define CH32V_TIM5_CTLR1_ARPE     CH32V_TIM2_CTLR1_ARPE
#define CH32V_TIM5_CTLR1_CMS      CH32V_TIM2_CTLR1_CMS
#define CH32V_TIM5_CTLR1_CMS_MASK CH32V_TIM2_CTLR1_CMS_MASK
#define CH32V_TIM5_CTLR1_DIR      CH32V_TIM2_CTLR1_DIR
#define CH32V_TIM5_CTLR1_OPM      CH32V_TIM2_CTLR1_OPM
#define CH32V_TIM5_CTLR1_URS      CH32V_TIM2_CTLR1_URS
#define CH32V_TIM5_CTLR1_UDIS     CH32V_TIM2_CTLR1_UDIS
#define CH32V_TIM5_CTLR1_CEN      CH32V_TIM2_CTLR1_CEN
#define CH32V_TIM5_CTLR2_OFFSET   CH32V_TIM2_CTLR2_OFFSET
#define CH32V_TIM5_CTLR2          CH32V_TIM2_CTLR2
#define CH32V_TIM5_CTLR2_TI1S     CH32V_TIM2_CTLR2_TI1S
#define CH32V_TIM5_CTLR2_MMS      CH32V_TIM2_CTLR2_MMS
#define CH32V_TIM5_CTLR2_MMS_MASK CH32V_TIM2_CTLR2_MMS_MASK
#define CH32V_TIM5_CTLR2_CCDS     CH32V_TIM2_CTLR2_CCDS
#define CH32V_TIM5_CTLR2_CCUS     CH32V_TIM2_CTLR2_CCUS
#define CH32V_TIM5_CTLR2_CCPC     CH32V_TIM2_CTLR2_CCPC
#define CH32V_TIM5_SMCFGR_OFFSET  CH32V_TIM2_SMCFGR_OFFSET
#define CH32V_TIM5_SMCFGR         CH32V_TIM2_SMCFGR
#define CH32V_TIM5_SMCFGR_ETP     CH32V_TIM2_SMCFGR_ETP
#define CH32V_TIM5_SMCFGR_ECE     CH32V_TIM2_SMCFGR_ECE
#define CH32V_TIM5_SMCFGR_ETPS    CH32V_TIM2_SMCFGR_ETPS
#define CH32V_TIM5_SMCFGR_ETPS_MASK CH32V_TIM2_SMCFGR_ETPS_MASK
#define CH32V_TIM5_SMCFGR_ETF     CH32V_TIM2_SMCFGR_ETF
#define CH32V_TIM5_SMCFGR_ETF_MASK CH32V_TIM2_SMCFGR_ETF_MASK
#define CH32V_TIM5_SMCFGR_MSM     CH32V_TIM2_SMCFGR_MSM
#define CH32V_TIM5_SMCFGR_TS      CH32V_TIM2_SMCFGR_TS
#define CH32V_TIM5_SMCFGR_TS_MASK CH32V_TIM2_SMCFGR_TS_MASK
#define CH32V_TIM5_SMCFGR_SMS     CH32V_TIM2_SMCFGR_SMS
#define CH32V_TIM5_SMCFGR_SMS_MASK CH32V_TIM2_SMCFGR_SMS_MASK
#define CH32V_TIM5_DMAINTENR_OFFSET CH32V_TIM2_DMAINTENR_OFFSET
#define CH32V_TIM5_DMAINTENR      CH32V_TIM2_DMAINTENR
#define CH32V_TIM5_DMAINTENR_TDE  CH32V_TIM2_DMAINTENR_TDE
#define CH32V_TIM5_DMAINTENR_COMDE CH32V_TIM2_DMAINTENR_COMDE
#define CH32V_TIM5_DMAINTENR_CC4DE CH32V_TIM2_DMAINTENR_CC4DE
#define CH32V_TIM5_DMAINTENR_CC3DE CH32V_TIM2_DMAINTENR_CC3DE
#define CH32V_TIM5_DMAINTENR_CC2DE CH32V_TIM2_DMAINTENR_CC2DE
#define CH32V_TIM5_DMAINTENR_CC1DE CH32V_TIM2_DMAINTENR_CC1DE
#define CH32V_TIM5_DMAINTENR_UDE  CH32V_TIM2_DMAINTENR_UDE
#define CH32V_TIM5_DMAINTENR_TIE  CH32V_TIM2_DMAINTENR_TIE
#define CH32V_TIM5_DMAINTENR_CC4IE CH32V_TIM2_DMAINTENR_CC4IE
#define CH32V_TIM5_DMAINTENR_CC3IE CH32V_TIM2_DMAINTENR_CC3IE
#define CH32V_TIM5_DMAINTENR_CC2IE CH32V_TIM2_DMAINTENR_CC2IE
#define CH32V_TIM5_DMAINTENR_CC1IE CH32V_TIM2_DMAINTENR_CC1IE
#define CH32V_TIM5_DMAINTENR_UIE  CH32V_TIM2_DMAINTENR_UIE
#define CH32V_TIM5_INTFR_OFFSET   CH32V_TIM2_INTFR_OFFSET
#define CH32V_TIM5_INTFR          CH32V_TIM2_INTFR
#define CH32V_TIM5_INTFR_CC4OF    CH32V_TIM2_INTFR_CC4OF
#define CH32V_TIM5_INTFR_CC3OF    CH32V_TIM2_INTFR_CC3OF
#define CH32V_TIM5_INTFR_CC2OF    CH32V_TIM2_INTFR_CC2OF
#define CH32V_TIM5_INTFR_CC1OF    CH32V_TIM2_INTFR_CC1OF
#define CH32V_TIM5_INTFR_TIF      CH32V_TIM2_INTFR_TIF
#define CH32V_TIM5_INTFR_CC4IF    CH32V_TIM2_INTFR_CC4IF
#define CH32V_TIM5_INTFR_CC3IF    CH32V_TIM2_INTFR_CC3IF
#define CH32V_TIM5_INTFR_CC2IF    CH32V_TIM2_INTFR_CC2IF
#define CH32V_TIM5_INTFR_CC1IF    CH32V_TIM2_INTFR_CC1IF
#define CH32V_TIM5_INTFR_UIF      CH32V_TIM2_INTFR_UIF
#define CH32V_TIM5_SWEVGR_OFFSET  CH32V_TIM2_SWEVGR_OFFSET
#define CH32V_TIM5_SWEVGR         CH32V_TIM2_SWEVGR
#define CH32V_TIM5_SWEVGR_BG      CH32V_TIM2_SWEVGR_BG
#define CH32V_TIM5_SWEVGR_TG      CH32V_TIM2_SWEVGR_TG
#define CH32V_TIM5_SWEVGR_COMG    CH32V_TIM2_SWEVGR_COMG
#define CH32V_TIM5_SWEVGR_CC4G    CH32V_TIM2_SWEVGR_CC4G
#define CH32V_TIM5_SWEVGR_CC3G    CH32V_TIM2_SWEVGR_CC3G
#define CH32V_TIM5_SWEVGR_CC2G    CH32V_TIM2_SWEVGR_CC2G
#define CH32V_TIM5_SWEVGR_CC1G    CH32V_TIM2_SWEVGR_CC1G
#define CH32V_TIM5_SWEVGR_UG      CH32V_TIM2_SWEVGR_UG
#define CH32V_TIM5_CHCTLR1_Output_OFFSET CH32V_TIM2_CHCTLR1_Output_OFFSET
#define CH32V_TIM5_CHCTLR1_Output CH32V_TIM2_CHCTLR1_Output
#define CH32V_TIM5_CHCTLR1_Output_OC2CE CH32V_TIM2_CHCTLR1_Output_OC2CE
#define CH32V_TIM5_CHCTLR1_Output_OC2M CH32V_TIM2_CHCTLR1_Output_OC2M
#define CH32V_TIM5_CHCTLR1_Output_OC2M_MASK CH32V_TIM2_CHCTLR1_Output_OC2M_MASK
#define CH32V_TIM5_CHCTLR1_Output_OC2PE CH32V_TIM2_CHCTLR1_Output_OC2PE
#define CH32V_TIM5_CHCTLR1_Output_OC2FE CH32V_TIM2_CHCTLR1_Output_OC2FE
#define CH32V_TIM5_CHCTLR1_Output_CC2S CH32V_TIM2_CHCTLR1_Output_CC2S
#define CH32V_TIM5_CHCTLR1_Output_CC2S_MASK CH32V_TIM2_CHCTLR1_Output_CC2S_MASK
#define CH32V_TIM5_CHCTLR1_Output_OC1CE CH32V_TIM2_CHCTLR1_Output_OC1CE
#define CH32V_TIM5_CHCTLR1_Output_OC1M CH32V_TIM2_CHCTLR1_Output_OC1M
#define CH32V_TIM5_CHCTLR1_Output_OC1M_MASK CH32V_TIM2_CHCTLR1_Output_OC1M_MASK
#define CH32V_TIM5_CHCTLR1_Output_OC1PE CH32V_TIM2_CHCTLR1_Output_OC1PE
#define CH32V_TIM5_CHCTLR1_Output_OC1FE CH32V_TIM2_CHCTLR1_Output_OC1FE
#define CH32V_TIM5_CHCTLR1_Output_CC1S CH32V_TIM2_CHCTLR1_Output_CC1S
#define CH32V_TIM5_CHCTLR1_Output_CC1S_MASK CH32V_TIM2_CHCTLR1_Output_CC1S_MASK
#define CH32V_TIM5_CHCTLR1_Input_OFFSET CH32V_TIM2_CHCTLR1_Input_OFFSET
#define CH32V_TIM5_CHCTLR1_Input  CH32V_TIM2_CHCTLR1_Input
#define CH32V_TIM5_CHCTLR1_Input_IC2F CH32V_TIM2_CHCTLR1_Input_IC2F
#define CH32V_TIM5_CHCTLR1_Input_IC2F_MASK CH32V_TIM2_CHCTLR1_Input_IC2F_MASK
#define CH32V_TIM5_CHCTLR1_Input_IC2PSC CH32V_TIM2_CHCTLR1_Input_IC2PSC
#define CH32V_TIM5_CHCTLR1_Input_IC2PSC_MASK CH32V_TIM2_CHCTLR1_Input_IC2PSC_MASK
#define CH32V_TIM5_CHCTLR1_Input_CC2S CH32V_TIM2_CHCTLR1_Input_CC2S
#define CH32V_TIM5_CHCTLR1_Input_CC2S_MASK CH32V_TIM2_CHCTLR1_Input_CC2S_MASK
#define CH32V_TIM5_CHCTLR1_Input_IC1F CH32V_TIM2_CHCTLR1_Input_IC1F
#define CH32V_TIM5_CHCTLR1_Input_IC1F_MASK CH32V_TIM2_CHCTLR1_Input_IC1F_MASK
#define CH32V_TIM5_CHCTLR1_Input_IC1PSC CH32V_TIM2_CHCTLR1_Input_IC1PSC
#define CH32V_TIM5_CHCTLR1_Input_IC1PSC_MASK CH32V_TIM2_CHCTLR1_Input_IC1PSC_MASK
#define CH32V_TIM5_CHCTLR1_Input_CC1S CH32V_TIM2_CHCTLR1_Input_CC1S
#define CH32V_TIM5_CHCTLR1_Input_CC1S_MASK CH32V_TIM2_CHCTLR1_Input_CC1S_MASK
#define CH32V_TIM5_CHCTLR2_Output_OFFSET CH32V_TIM2_CHCTLR2_Output_OFFSET
#define CH32V_TIM5_CHCTLR2_Output CH32V_TIM2_CHCTLR2_Output
#define CH32V_TIM5_CHCTLR2_Output_OC4CE CH32V_TIM2_CHCTLR2_Output_OC4CE
#define CH32V_TIM5_CHCTLR2_Output_OC4M CH32V_TIM2_CHCTLR2_Output_OC4M
#define CH32V_TIM5_CHCTLR2_Output_OC4M_MASK CH32V_TIM2_CHCTLR2_Output_OC4M_MASK
#define CH32V_TIM5_CHCTLR2_Output_OC4PE CH32V_TIM2_CHCTLR2_Output_OC4PE
#define CH32V_TIM5_CHCTLR2_Output_OC4FE CH32V_TIM2_CHCTLR2_Output_OC4FE
#define CH32V_TIM5_CHCTLR2_Output_CC4S CH32V_TIM2_CHCTLR2_Output_CC4S
#define CH32V_TIM5_CHCTLR2_Output_CC4S_MASK CH32V_TIM2_CHCTLR2_Output_CC4S_MASK
#define CH32V_TIM5_CHCTLR2_Output_OC3CE CH32V_TIM2_CHCTLR2_Output_OC3CE
#define CH32V_TIM5_CHCTLR2_Output_OC3M CH32V_TIM2_CHCTLR2_Output_OC3M
#define CH32V_TIM5_CHCTLR2_Output_OC3M_MASK CH32V_TIM2_CHCTLR2_Output_OC3M_MASK
#define CH32V_TIM5_CHCTLR2_Output_OC3PE CH32V_TIM2_CHCTLR2_Output_OC3PE
#define CH32V_TIM5_CHCTLR2_Output_OC3FE CH32V_TIM2_CHCTLR2_Output_OC3FE
#define CH32V_TIM5_CHCTLR2_Output_CC3S CH32V_TIM2_CHCTLR2_Output_CC3S
#define CH32V_TIM5_CHCTLR2_Output_CC3S_MASK CH32V_TIM2_CHCTLR2_Output_CC3S_MASK
#define CH32V_TIM5_CHCTLR2_Input_OFFSET CH32V_TIM2_CHCTLR2_Input_OFFSET
#define CH32V_TIM5_CHCTLR2_Input  CH32V_TIM2_CHCTLR2_Input
#define CH32V_TIM5_CHCTLR2_Input_IC4F CH32V_TIM2_CHCTLR2_Input_IC4F
#define CH32V_TIM5_CHCTLR2_Input_IC4F_MASK CH32V_TIM2_CHCTLR2_Input_IC4F_MASK
#define CH32V_TIM5_CHCTLR2_Input_IC4PSC CH32V_TIM2_CHCTLR2_Input_IC4PSC
#define CH32V_TIM5_CHCTLR2_Input_IC4PSC_MASK CH32V_TIM2_CHCTLR2_Input_IC4PSC_MASK
#define CH32V_TIM5_CHCTLR2_Input_CC4S CH32V_TIM2_CHCTLR2_Input_CC4S
#define CH32V_TIM5_CHCTLR2_Input_CC4S_MASK CH32V_TIM2_CHCTLR2_Input_CC4S_MASK
#define CH32V_TIM5_CHCTLR2_Input_IC3F CH32V_TIM2_CHCTLR2_Input_IC3F
#define CH32V_TIM5_CHCTLR2_Input_IC3F_MASK CH32V_TIM2_CHCTLR2_Input_IC3F_MASK
#define CH32V_TIM5_CHCTLR2_Input_IC3PSC CH32V_TIM2_CHCTLR2_Input_IC3PSC
#define CH32V_TIM5_CHCTLR2_Input_IC3PSC_MASK CH32V_TIM2_CHCTLR2_Input_IC3PSC_MASK
#define CH32V_TIM5_CHCTLR2_Input_CC3S CH32V_TIM2_CHCTLR2_Input_CC3S
#define CH32V_TIM5_CHCTLR2_Input_CC3S_MASK CH32V_TIM2_CHCTLR2_Input_CC3S_MASK
#define CH32V_TIM5_CCER_OFFSET    CH32V_TIM2_CCER_OFFSET
#define CH32V_TIM5_CCER           CH32V_TIM2_CCER
#define CH32V_TIM5_CCER_CC4P      CH32V_TIM2_CCER_CC4P
#define CH32V_TIM5_CCER_CC4E      CH32V_TIM2_CCER_CC4E
#define CH32V_TIM5_CCER_CC3P      CH32V_TIM2_CCER_CC3P
#define CH32V_TIM5_CCER_CC3E      CH32V_TIM2_CCER_CC3E
#define CH32V_TIM5_CCER_CC2P      CH32V_TIM2_CCER_CC2P
#define CH32V_TIM5_CCER_CC2E      CH32V_TIM2_CCER_CC2E
#define CH32V_TIM5_CCER_CC1P      CH32V_TIM2_CCER_CC1P
#define CH32V_TIM5_CCER_CC1E      CH32V_TIM2_CCER_CC1E
#define CH32V_TIM5_CNT_OFFSET     CH32V_TIM2_CNT_OFFSET
#define CH32V_TIM5_CNT            CH32V_TIM2_CNT
#define CH32V_TIM5_CNT_CNT        CH32V_TIM2_CNT_CNT
#define CH32V_TIM5_CNT_CNT_MASK   CH32V_TIM2_CNT_CNT_MASK
#define CH32V_TIM5_PSC_OFFSET     CH32V_TIM2_PSC_OFFSET
#define CH32V_TIM5_PSC            CH32V_TIM2_PSC
#define CH32V_TIM5_PSC_PSC        CH32V_TIM2_PSC_PSC
#define CH32V_TIM5_PSC_PSC_MASK   CH32V_TIM2_PSC_PSC_MASK
#define CH32V_TIM5_ATRLR_OFFSET   CH32V_TIM2_ATRLR_OFFSET
#define CH32V_TIM5_ATRLR          CH32V_TIM2_ATRLR
#define CH32V_TIM5_ATRLR_ATRLR    CH32V_TIM2_ATRLR_ATRLR
#define CH32V_TIM5_ATRLR_ATRLR_MASK CH32V_TIM2_ATRLR_ATRLR_MASK
#define CH32V_TIM5_CH1CVR_OFFSET  CH32V_TIM2_CH1CVR_OFFSET
#define CH32V_TIM5_CH1CVR         CH32V_TIM2_CH1CVR
#define CH32V_TIM5_CH1CVR_CH1CVR  CH32V_TIM2_CH1CVR_CH1CVR
#define CH32V_TIM5_CH1CVR_CH1CVR_MASK CH32V_TIM2_CH1CVR_CH1CVR_MASK
#define CH32V_TIM5_CH2CVR_OFFSET  CH32V_TIM2_CH2CVR_OFFSET
#define CH32V_TIM5_CH2CVR         CH32V_TIM2_CH2CVR
#define CH32V_TIM5_CH2CVR_CH2CVR  CH32V_TIM2_CH2CVR_CH2CVR
#define CH32V_TIM5_CH2CVR_CH2CVR_MASK CH32V_TIM2_CH2CVR_CH2CVR_MASK
#define CH32V_TIM5_CH3CVR_OFFSET  CH32V_TIM2_CH3CVR_OFFSET
#define CH32V_TIM5_CH3CVR         CH32V_TIM2_CH3CVR
#define CH32V_TIM5_CH3CVR_CH3CVR  CH32V_TIM2_CH3CVR_CH3CVR
#define CH32V_TIM5_CH3CVR_CH3CVR_MASK CH32V_TIM2_CH3CVR_CH3CVR_MASK
#define CH32V_TIM5_CH4CVR_OFFSET  CH32V_TIM2_CH4CVR_OFFSET
#define CH32V_TIM5_CH4CVR         CH32V_TIM2_CH4CVR
#define CH32V_TIM5_CH4CVR_CH4CVR  CH32V_TIM2_CH4CVR_CH4CVR
#define CH32V_TIM5_CH4CVR_CH4CVR_MASK CH32V_TIM2_CH4CVR_CH4CVR_MASK
#define CH32V_TIM5_DMACFGR_OFFSET CH32V_TIM2_DMACFGR_OFFSET
#define CH32V_TIM5_DMACFGR        CH32V_TIM2_DMACFGR
#define CH32V_TIM5_DMACFGR_DBL    CH32V_TIM2_DMACFGR_DBL
#define CH32V_TIM5_DMACFGR_DBL_MASK CH32V_TIM2_DMACFGR_DBL_MASK
#define CH32V_TIM5_DMACFGR_DBA    CH32V_TIM2_DMACFGR_DBA
#define CH32V_TIM5_DMACFGR_DBA_MASK CH32V_TIM2_DMACFGR_DBA_MASK
#define CH32V_TIM5_DMAADR_OFFSET  CH32V_TIM2_DMAADR_OFFSET
#define CH32V_TIM5_DMAADR         CH32V_TIM2_DMAADR
#define CH32V_TIM5_DMAADR_DMAADR  CH32V_TIM2_DMAADR_DMAADR
#define CH32V_TIM5_DMAADR_DMAADR_MASK CH32V_TIM2_DMAADR_DMAADR_MASK

/* TIM6 - Basic timer */
#define CH32V_TIM6_BASE           0x40001000
#define CH32V_TIM6_CTLR1_OFFSET   0x0000
#define CH32V_TIM6_CTLR1          (CH32V_TIM6_BASE + CH32V_TIM6_CTLR1_OFFSET)
#define CH32V_TIM6_CTLR1_ARPE     (1 <<  7) /* 80: Auto-reload preload enable */
#define CH32V_TIM6_CTLR1_OPM      (1 <<  3) /* 08: One-pulse mode */
#define CH32V_TIM6_CTLR1_URS      (1 <<  2) /* 04: Update request source */
#define CH32V_TIM6_CTLR1_UDIS     (1 <<  1) /* 02: Update disable */
#define CH32V_TIM6_CTLR1_CEN      (1 <<  0) /* 01: Counter enable */
#define CH32V_TIM6_CTLR2_OFFSET   0x0004
#define CH32V_TIM6_CTLR2          (CH32V_TIM6_BASE + CH32V_TIM6_CTLR2_OFFSET)
#define CH32V_TIM6_CTLR2_MMS      (3 <<  4) /* 10: Master mode selection */
#define CH32V_TIM6_CTLR2_MMS_MASK      (0x07)
#define CH32V_TIM6_DMAINTENR_OFFSET 0x000c
#define CH32V_TIM6_DMAINTENR      (CH32V_TIM6_BASE + CH32V_TIM6_DMAINTENR_OFFSET)
#define CH32V_TIM6_DMAINTENR_UDE  (1 <<  8) /* 100: Update DMA request enable */
#define CH32V_TIM6_DMAINTENR_UIE  (1 <<  0) /* 01: Update interrupt enable */
#define CH32V_TIM6_INTFR_OFFSET   0x0010
#define CH32V_TIM6_INTFR          (CH32V_TIM6_BASE + CH32V_TIM6_INTFR_OFFSET)
#define CH32V_TIM6_INTFR_UIF      (1 <<  0) /* 01: Update interrupt flag */
#define CH32V_TIM6_SWEVGR_OFFSET  0x0014
#define CH32V_TIM6_SWEVGR         (CH32V_TIM6_BASE + CH32V_TIM6_SWEVGR_OFFSET)
#define CH32V_TIM6_SWEVGR_UG      (1 <<  0) /* 01: Update generation */
#define CH32V_TIM6_CNT_OFFSET     0x0024
#define CH32V_TIM6_CNT            (CH32V_TIM6_BASE + CH32V_TIM6_CNT_OFFSET)
#define CH32V_TIM6_CNT_CNT        (16 <<  0) /* 01: counter value */
#define CH32V_TIM6_CNT_CNT_MASK        (0xffff)
#define CH32V_TIM6_PSC_OFFSET     0x0028
#define CH32V_TIM6_PSC            (CH32V_TIM6_BASE + CH32V_TIM6_PSC_OFFSET)
#define CH32V_TIM6_PSC_PSC        (16 <<  0) /* 01: Prescaler value */
#define CH32V_TIM6_PSC_PSC_MASK        (0xffff)
#define CH32V_TIM6_ATRLR_OFFSET   0x002c
#define CH32V_TIM6_ATRLR          (CH32V_TIM6_BASE + CH32V_TIM6_ATRLR_OFFSET)
#define CH32V_TIM6_ATRLR_ATRLR    (16 <<  0) /* 01: Auto-reload value */
#define CH32V_TIM6_ATRLR_ATRLR_MASK    (0xffff)

/* No registers defined for peripheral TIM7. Using those of TIM6. */
#define CH32V_TIM7_BASE           0x40001400
#define CH32V_TIM7_CTLR1_OFFSET   CH32V_TIM6_CTLR1_OFFSET
#define CH32V_TIM7_CTLR1          CH32V_TIM6_CTLR1
#define CH32V_TIM7_CTLR1_ARPE     CH32V_TIM6_CTLR1_ARPE
#define CH32V_TIM7_CTLR1_OPM      CH32V_TIM6_CTLR1_OPM
#define CH32V_TIM7_CTLR1_URS      CH32V_TIM6_CTLR1_URS
#define CH32V_TIM7_CTLR1_UDIS     CH32V_TIM6_CTLR1_UDIS
#define CH32V_TIM7_CTLR1_CEN      CH32V_TIM6_CTLR1_CEN
#define CH32V_TIM7_CTLR2_OFFSET   CH32V_TIM6_CTLR2_OFFSET
#define CH32V_TIM7_CTLR2          CH32V_TIM6_CTLR2
#define CH32V_TIM7_CTLR2_MMS      CH32V_TIM6_CTLR2_MMS
#define CH32V_TIM7_CTLR2_MMS_MASK CH32V_TIM6_CTLR2_MMS_MASK
#define CH32V_TIM7_DMAINTENR_OFFSET CH32V_TIM6_DMAINTENR_OFFSET
#define CH32V_TIM7_DMAINTENR      CH32V_TIM6_DMAINTENR
#define CH32V_TIM7_DMAINTENR_UDE  CH32V_TIM6_DMAINTENR_UDE
#define CH32V_TIM7_DMAINTENR_UIE  CH32V_TIM6_DMAINTENR_UIE
#define CH32V_TIM7_INTFR_OFFSET   CH32V_TIM6_INTFR_OFFSET
#define CH32V_TIM7_INTFR          CH32V_TIM6_INTFR
#define CH32V_TIM7_INTFR_UIF      CH32V_TIM6_INTFR_UIF
#define CH32V_TIM7_SWEVGR_OFFSET  CH32V_TIM6_SWEVGR_OFFSET
#define CH32V_TIM7_SWEVGR         CH32V_TIM6_SWEVGR
#define CH32V_TIM7_SWEVGR_UG      CH32V_TIM6_SWEVGR_UG
#define CH32V_TIM7_CNT_OFFSET     CH32V_TIM6_CNT_OFFSET
#define CH32V_TIM7_CNT            CH32V_TIM6_CNT
#define CH32V_TIM7_CNT_CNT        CH32V_TIM6_CNT_CNT
#define CH32V_TIM7_CNT_CNT_MASK   CH32V_TIM6_CNT_CNT_MASK
#define CH32V_TIM7_PSC_OFFSET     CH32V_TIM6_PSC_OFFSET
#define CH32V_TIM7_PSC            CH32V_TIM6_PSC
#define CH32V_TIM7_PSC_PSC        CH32V_TIM6_PSC_PSC
#define CH32V_TIM7_PSC_PSC_MASK   CH32V_TIM6_PSC_PSC_MASK
#define CH32V_TIM7_ATRLR_OFFSET   CH32V_TIM6_ATRLR_OFFSET
#define CH32V_TIM7_ATRLR          CH32V_TIM6_ATRLR
#define CH32V_TIM7_ATRLR_ATRLR    CH32V_TIM6_ATRLR_ATRLR
#define CH32V_TIM7_ATRLR_ATRLR_MASK CH32V_TIM6_ATRLR_ATRLR_MASK

/* I2C1 - Inter integrated circuit */
#define CH32V_I2C1_BASE           0x40005400
#define CH32V_I2C1_CTLR1_OFFSET   0x0000
#define CH32V_I2C1_CTLR1          (CH32V_I2C1_BASE + CH32V_I2C1_CTLR1_OFFSET)
#define CH32V_I2C1_CTLR1_SWRST    (1 << 15) /* 8000: Software reset */
#define CH32V_I2C1_CTLR1_ALERT    (1 << 13) /* 2000: SMBus alert */
#define CH32V_I2C1_CTLR1_PEC      (1 << 12) /* 1000: Packet error checking */
#define CH32V_I2C1_CTLR1_POS      (1 << 11) /* 800: Acknowledge/PEC Position (for data reception) */
#define CH32V_I2C1_CTLR1_ACK      (1 << 10) /* 400: Acknowledge enable */
#define CH32V_I2C1_CTLR1_STOP     (1 <<  9) /* 200: Stop generation */
#define CH32V_I2C1_CTLR1_START    (1 <<  8) /* 100: Start generation */
#define CH32V_I2C1_CTLR1_NOSTRETCH (1 <<  7) /* 80: Clock stretching disable (Slave mode) */
#define CH32V_I2C1_CTLR1_ENGC     (1 <<  6) /* 40: General call enable */
#define CH32V_I2C1_CTLR1_ENPEC    (1 <<  5) /* 20: PEC enable */
#define CH32V_I2C1_CTLR1_ENARP    (1 <<  4) /* 10: ARP enable */
#define CH32V_I2C1_CTLR1_SMBTYPE  (1 <<  3) /* 08: SMBus type */
#define CH32V_I2C1_CTLR1_SMBUS    (1 <<  1) /* 02: SMBus mode */
#define CH32V_I2C1_CTLR1_PE       (1 <<  0) /* 01: Peripheral enable */
#define CH32V_I2C1_CTLR2_OFFSET   0x0004
#define CH32V_I2C1_CTLR2          (CH32V_I2C1_BASE + CH32V_I2C1_CTLR2_OFFSET)
#define CH32V_I2C1_CTLR2_LAST     (1 << 12) /* 1000: DMA last transfer */
#define CH32V_I2C1_CTLR2_DMAEN    (1 << 11) /* 800: DMA requests enable */
#define CH32V_I2C1_CTLR2_ITBUFEN  (1 << 10) /* 400: Buffer interrupt enable */
#define CH32V_I2C1_CTLR2_ITEVTEN  (1 <<  9) /* 200: Event interrupt enable */
#define CH32V_I2C1_CTLR2_ITERREN  (1 <<  8) /* 100: Error interrupt enable */
#define CH32V_I2C1_CTLR2_FREQ     (6 <<  0) /* 01: Peripheral clock frequency */
#define CH32V_I2C1_CTLR2_FREQ_MASK     (0x3f)
#define CH32V_I2C1_OADDR1_OFFSET  0x0008
#define CH32V_I2C1_OADDR1         (CH32V_I2C1_BASE + CH32V_I2C1_OADDR1_OFFSET)
#define CH32V_I2C1_OADDR1_ADDMODE (1 << 15) /* 8000: Addressing mode (slave mode) */
#define CH32V_I2C1_OADDR1_MUST1   (1 << 14) /* 4000: Must be 1 */
#define CH32V_I2C1_OADDR1_ADD9_8  (2 <<  8) /* 100: Interface address */
#define CH32V_I2C1_OADDR1_ADD9_8_MASK  (0x03)
#define CH32V_I2C1_OADDR1_ADD7_1  (7 <<  1) /* 02: Interface address */
#define CH32V_I2C1_OADDR1_ADD7_1_MASK  (0x7f)
#define CH32V_I2C1_OADDR1_ADD0    (1 <<  0) /* 01: Interface address */
#define CH32V_I2C1_OADDR2_OFFSET  0x000c
#define CH32V_I2C1_OADDR2         (CH32V_I2C1_BASE + CH32V_I2C1_OADDR2_OFFSET)
#define CH32V_I2C1_OADDR2_ADD2    (7 <<  1) /* 02: Interface address */
#define CH32V_I2C1_OADDR2_ADD2_MASK    (0x7f)
#define CH32V_I2C1_OADDR2_ENDUAL  (1 <<  0) /* 01: Dual addressing mode enable */
#define CH32V_I2C1_DATAR_OFFSET   0x0010
#define CH32V_I2C1_DATAR          (CH32V_I2C1_BASE + CH32V_I2C1_DATAR_OFFSET)
#define CH32V_I2C1_DATAR_DATAR    (8 <<  0) /* 01: 8-bit data register */
#define CH32V_I2C1_DATAR_DATAR_MASK    (0xff)
#define CH32V_I2C1_STAR1_OFFSET   0x0014
#define CH32V_I2C1_STAR1          (CH32V_I2C1_BASE + CH32V_I2C1_STAR1_OFFSET)
#define CH32V_I2C1_STAR1_SMBALERT (1 << 15) /* 8000: SMBus alert */
#define CH32V_I2C1_STAR1_TIMEOUT  (1 << 14) /* 4000: Timeout or Tlow error */
#define CH32V_I2C1_STAR1_PECERR   (1 << 12) /* 1000: PEC Error in reception */
#define CH32V_I2C1_STAR1_OVR      (1 << 11) /* 800: Overrun/Underrun */
#define CH32V_I2C1_STAR1_AF       (1 << 10) /* 400: Acknowledge failure */
#define CH32V_I2C1_STAR1_ARLO     (1 <<  9) /* 200: Arbitration lost (master mode) */
#define CH32V_I2C1_STAR1_BERR     (1 <<  8) /* 100: Bus error */
#define CH32V_I2C1_STAR1_TxE      (1 <<  7) /* 80: Data register empty (transmitters) */
#define CH32V_I2C1_STAR1_RxNE     (1 <<  6) /* 40: Data register not empty (receivers) */
#define CH32V_I2C1_STAR1_STOPF    (1 <<  4) /* 10: Stop detection (slave mode) */
#define CH32V_I2C1_STAR1_ADD10    (1 <<  3) /* 08: 10-bit header sent (Master mode) */
#define CH32V_I2C1_STAR1_BTF      (1 <<  2) /* 04: Byte transfer finished */
#define CH32V_I2C1_STAR1_ADDR     (1 <<  1) /* 02: Address sent (master mode)/matched (slave mode) */
#define CH32V_I2C1_STAR1_SB       (1 <<  0) /* 01: Start bit (Master mode) */
#define CH32V_I2C1_STAR2_OFFSET   0x0018
#define CH32V_I2C1_STAR2          (CH32V_I2C1_BASE + CH32V_I2C1_STAR2_OFFSET)
#define CH32V_I2C1_STAR2_PEC      (8 <<  8) /* 100: acket error checking register */
#define CH32V_I2C1_STAR2_PEC_MASK      (0xff)
#define CH32V_I2C1_STAR2_DUALF    (1 <<  7) /* 80: Dual flag (Slave mode) */
#define CH32V_I2C1_STAR2_SMBHOST  (1 <<  6) /* 40: SMBus host header (Slave mode) */
#define CH32V_I2C1_STAR2_SMBDEFAULT (1 <<  5) /* 20: SMBus device default address (Slave mode) */
#define CH32V_I2C1_STAR2_GENCALL  (1 <<  4) /* 10: General call address (Slave mode) */
#define CH32V_I2C1_STAR2_TRA      (1 <<  2) /* 04: Transmitter/receiver */
#define CH32V_I2C1_STAR2_BUSY     (1 <<  1) /* 02: Bus busy */
#define CH32V_I2C1_STAR2_MSL      (1 <<  0) /* 01: Master/slave */
#define CH32V_I2C1_CKCFGR_OFFSET  0x001c
#define CH32V_I2C1_CKCFGR         (CH32V_I2C1_BASE + CH32V_I2C1_CKCFGR_OFFSET)
#define CH32V_I2C1_CKCFGR_F_S     (1 << 15) /* 8000: I2C master mode selection */
#define CH32V_I2C1_CKCFGR_DUTY    (1 << 14) /* 4000: Fast mode duty cycle */
#define CH32V_I2C1_CKCFGR_CCR     (12 <<  0) /* 01: Clock control register in Fast/Standard mode (Master mode) */
#define CH32V_I2C1_CKCFGR_CCR_MASK     (0xfff)
#define CH32V_I2C1_RTR_OFFSET     0x0020
#define CH32V_I2C1_RTR            (CH32V_I2C1_BASE + CH32V_I2C1_RTR_OFFSET)
#define CH32V_I2C1_RTR_TRISE      (6 <<  0) /* 01: Maximum rise time in Fast/Standard mode (Master mode) */
#define CH32V_I2C1_RTR_TRISE_MASK      (0x3f)

/* No registers defined for peripheral I2C2. Using those of I2C1. */
#define CH32V_I2C2_BASE           0x40005800
#define CH32V_I2C2_CTLR1_OFFSET   CH32V_I2C1_CTLR1_OFFSET
#define CH32V_I2C2_CTLR1          CH32V_I2C1_CTLR1
#define CH32V_I2C2_CTLR1_SWRST    CH32V_I2C1_CTLR1_SWRST
#define CH32V_I2C2_CTLR1_ALERT    CH32V_I2C1_CTLR1_ALERT
#define CH32V_I2C2_CTLR1_PEC      CH32V_I2C1_CTLR1_PEC
#define CH32V_I2C2_CTLR1_POS      CH32V_I2C1_CTLR1_POS
#define CH32V_I2C2_CTLR1_ACK      CH32V_I2C1_CTLR1_ACK
#define CH32V_I2C2_CTLR1_STOP     CH32V_I2C1_CTLR1_STOP
#define CH32V_I2C2_CTLR1_START    CH32V_I2C1_CTLR1_START
#define CH32V_I2C2_CTLR1_NOSTRETCH CH32V_I2C1_CTLR1_NOSTRETCH
#define CH32V_I2C2_CTLR1_ENGC     CH32V_I2C1_CTLR1_ENGC
#define CH32V_I2C2_CTLR1_ENPEC    CH32V_I2C1_CTLR1_ENPEC
#define CH32V_I2C2_CTLR1_ENARP    CH32V_I2C1_CTLR1_ENARP
#define CH32V_I2C2_CTLR1_SMBTYPE  CH32V_I2C1_CTLR1_SMBTYPE
#define CH32V_I2C2_CTLR1_SMBUS    CH32V_I2C1_CTLR1_SMBUS
#define CH32V_I2C2_CTLR1_PE       CH32V_I2C1_CTLR1_PE
#define CH32V_I2C2_CTLR2_OFFSET   CH32V_I2C1_CTLR2_OFFSET
#define CH32V_I2C2_CTLR2          CH32V_I2C1_CTLR2
#define CH32V_I2C2_CTLR2_LAST     CH32V_I2C1_CTLR2_LAST
#define CH32V_I2C2_CTLR2_DMAEN    CH32V_I2C1_CTLR2_DMAEN
#define CH32V_I2C2_CTLR2_ITBUFEN  CH32V_I2C1_CTLR2_ITBUFEN
#define CH32V_I2C2_CTLR2_ITEVTEN  CH32V_I2C1_CTLR2_ITEVTEN
#define CH32V_I2C2_CTLR2_ITERREN  CH32V_I2C1_CTLR2_ITERREN
#define CH32V_I2C2_CTLR2_FREQ     CH32V_I2C1_CTLR2_FREQ
#define CH32V_I2C2_CTLR2_FREQ_MASK CH32V_I2C1_CTLR2_FREQ_MASK
#define CH32V_I2C2_OADDR1_OFFSET  CH32V_I2C1_OADDR1_OFFSET
#define CH32V_I2C2_OADDR1         CH32V_I2C1_OADDR1
#define CH32V_I2C2_OADDR1_ADDMODE CH32V_I2C1_OADDR1_ADDMODE
#define CH32V_I2C2_OADDR1_MUST1   CH32V_I2C1_OADDR1_MUST1
#define CH32V_I2C2_OADDR1_ADD9_8  CH32V_I2C1_OADDR1_ADD9_8
#define CH32V_I2C2_OADDR1_ADD9_8_MASK CH32V_I2C1_OADDR1_ADD9_8_MASK
#define CH32V_I2C2_OADDR1_ADD7_1  CH32V_I2C1_OADDR1_ADD7_1
#define CH32V_I2C2_OADDR1_ADD7_1_MASK CH32V_I2C1_OADDR1_ADD7_1_MASK
#define CH32V_I2C2_OADDR1_ADD0    CH32V_I2C1_OADDR1_ADD0
#define CH32V_I2C2_OADDR2_OFFSET  CH32V_I2C1_OADDR2_OFFSET
#define CH32V_I2C2_OADDR2         CH32V_I2C1_OADDR2
#define CH32V_I2C2_OADDR2_ADD2    CH32V_I2C1_OADDR2_ADD2
#define CH32V_I2C2_OADDR2_ADD2_MASK CH32V_I2C1_OADDR2_ADD2_MASK
#define CH32V_I2C2_OADDR2_ENDUAL  CH32V_I2C1_OADDR2_ENDUAL
#define CH32V_I2C2_DATAR_OFFSET   CH32V_I2C1_DATAR_OFFSET
#define CH32V_I2C2_DATAR          CH32V_I2C1_DATAR
#define CH32V_I2C2_DATAR_DATAR    CH32V_I2C1_DATAR_DATAR
#define CH32V_I2C2_DATAR_DATAR_MASK CH32V_I2C1_DATAR_DATAR_MASK
#define CH32V_I2C2_STAR1_OFFSET   CH32V_I2C1_STAR1_OFFSET
#define CH32V_I2C2_STAR1          CH32V_I2C1_STAR1
#define CH32V_I2C2_STAR1_SMBALERT CH32V_I2C1_STAR1_SMBALERT
#define CH32V_I2C2_STAR1_TIMEOUT  CH32V_I2C1_STAR1_TIMEOUT
#define CH32V_I2C2_STAR1_PECERR   CH32V_I2C1_STAR1_PECERR
#define CH32V_I2C2_STAR1_OVR      CH32V_I2C1_STAR1_OVR
#define CH32V_I2C2_STAR1_AF       CH32V_I2C1_STAR1_AF
#define CH32V_I2C2_STAR1_ARLO     CH32V_I2C1_STAR1_ARLO
#define CH32V_I2C2_STAR1_BERR     CH32V_I2C1_STAR1_BERR
#define CH32V_I2C2_STAR1_TxE      CH32V_I2C1_STAR1_TxE
#define CH32V_I2C2_STAR1_RxNE     CH32V_I2C1_STAR1_RxNE
#define CH32V_I2C2_STAR1_STOPF    CH32V_I2C1_STAR1_STOPF
#define CH32V_I2C2_STAR1_ADD10    CH32V_I2C1_STAR1_ADD10
#define CH32V_I2C2_STAR1_BTF      CH32V_I2C1_STAR1_BTF
#define CH32V_I2C2_STAR1_ADDR     CH32V_I2C1_STAR1_ADDR
#define CH32V_I2C2_STAR1_SB       CH32V_I2C1_STAR1_SB
#define CH32V_I2C2_STAR2_OFFSET   CH32V_I2C1_STAR2_OFFSET
#define CH32V_I2C2_STAR2          CH32V_I2C1_STAR2
#define CH32V_I2C2_STAR2_PEC      CH32V_I2C1_STAR2_PEC
#define CH32V_I2C2_STAR2_PEC_MASK CH32V_I2C1_STAR2_PEC_MASK
#define CH32V_I2C2_STAR2_DUALF    CH32V_I2C1_STAR2_DUALF
#define CH32V_I2C2_STAR2_SMBHOST  CH32V_I2C1_STAR2_SMBHOST
#define CH32V_I2C2_STAR2_SMBDEFAULT CH32V_I2C1_STAR2_SMBDEFAULT
#define CH32V_I2C2_STAR2_GENCALL  CH32V_I2C1_STAR2_GENCALL
#define CH32V_I2C2_STAR2_TRA      CH32V_I2C1_STAR2_TRA
#define CH32V_I2C2_STAR2_BUSY     CH32V_I2C1_STAR2_BUSY
#define CH32V_I2C2_STAR2_MSL      CH32V_I2C1_STAR2_MSL
#define CH32V_I2C2_CKCFGR_OFFSET  CH32V_I2C1_CKCFGR_OFFSET
#define CH32V_I2C2_CKCFGR         CH32V_I2C1_CKCFGR
#define CH32V_I2C2_CKCFGR_F_S     CH32V_I2C1_CKCFGR_F_S
#define CH32V_I2C2_CKCFGR_DUTY    CH32V_I2C1_CKCFGR_DUTY
#define CH32V_I2C2_CKCFGR_CCR     CH32V_I2C1_CKCFGR_CCR
#define CH32V_I2C2_CKCFGR_CCR_MASK CH32V_I2C1_CKCFGR_CCR_MASK
#define CH32V_I2C2_RTR_OFFSET     CH32V_I2C1_RTR_OFFSET
#define CH32V_I2C2_RTR            CH32V_I2C1_RTR
#define CH32V_I2C2_RTR_TRISE      CH32V_I2C1_RTR_TRISE
#define CH32V_I2C2_RTR_TRISE_MASK CH32V_I2C1_RTR_TRISE_MASK

/* SPI1 - Serial peripheral interface */
#define CH32V_SPI1_BASE           0x40013000
#define CH32V_SPI1_CTLR1_OFFSET   0x0000
#define CH32V_SPI1_CTLR1          (CH32V_SPI1_BASE + CH32V_SPI1_CTLR1_OFFSET)
#define CH32V_SPI1_CTLR1_BIDIMODE (1 << 15) /* 8000: Bidirectional data mode enable */
#define CH32V_SPI1_CTLR1_BIDIOE   (1 << 14) /* 4000: Output enable in bidirectional mode */
#define CH32V_SPI1_CTLR1_CRCEN    (1 << 13) /* 2000: Hardware CRC calculation enable */
#define CH32V_SPI1_CTLR1_CRCNEXT  (1 << 12) /* 1000: CRC transfer next */
#define CH32V_SPI1_CTLR1_DFF      (1 << 11) /* 800: Data frame format */
#define CH32V_SPI1_CTLR1_RXONLY   (1 << 10) /* 400: Receive only */
#define CH32V_SPI1_CTLR1_SSM      (1 <<  9) /* 200: Software slave management */
#define CH32V_SPI1_CTLR1_SSI      (1 <<  8) /* 100: Internal slave select */
#define CH32V_SPI1_CTLR1_LSBFIRST (1 <<  7) /* 80: Frame format */
#define CH32V_SPI1_CTLR1_SPE      (1 <<  6) /* 40: SPI enable */
#define CH32V_SPI1_CTLR1_BR       (3 <<  3) /* 08: Baud rate control */
#define CH32V_SPI1_CTLR1_BR_MASK       (0x07)
#define CH32V_SPI1_CTLR1_MSTR     (1 <<  2) /* 04: Master selection */
#define CH32V_SPI1_CTLR1_CPOL     (1 <<  1) /* 02: Clock polarity */
#define CH32V_SPI1_CTLR1_CPHA     (1 <<  0) /* 01: Clock phase */
#define CH32V_SPI1_CTLR2_OFFSET   0x0004
#define CH32V_SPI1_CTLR2          (CH32V_SPI1_BASE + CH32V_SPI1_CTLR2_OFFSET)
#define CH32V_SPI1_CTLR2_TXEIE    (1 <<  7) /* 80: Tx buffer empty interrupt enable */
#define CH32V_SPI1_CTLR2_RXNEIE   (1 <<  6) /* 40: RX buffer not empty interrupt enable */
#define CH32V_SPI1_CTLR2_ERRIE    (1 <<  5) /* 20: Error interrupt enable */
#define CH32V_SPI1_CTLR2_SSOE     (1 <<  2) /* 04: SS output enable */
#define CH32V_SPI1_CTLR2_TXDMAEN  (1 <<  1) /* 02: Tx buffer DMA enable */
#define CH32V_SPI1_CTLR2_RXDMAEN  (1 <<  0) /* 01: Rx buffer DMA enable */
#define CH32V_SPI1_STATR_OFFSET   0x0008
#define CH32V_SPI1_STATR          (CH32V_SPI1_BASE + CH32V_SPI1_STATR_OFFSET)
#define CH32V_SPI1_STATR_BSY      (1 <<  7) /* 80: Busy flag */
#define CH32V_SPI1_STATR_OVR      (1 <<  6) /* 40: Overrun flag */
#define CH32V_SPI1_STATR_MODF     (1 <<  5) /* 20: Mode fault */
#define CH32V_SPI1_STATR_CRCERR   (1 <<  4) /* 10: CRC error flag */
#define CH32V_SPI1_STATR_UDR      (1 <<  3) /* 08: Underrun flag */
#define CH32V_SPI1_STATR_CHSID    (1 <<  2) /* 04: Channel side */
#define CH32V_SPI1_STATR_TXE      (1 <<  1) /* 02: Transmit buffer empty */
#define CH32V_SPI1_STATR_RXNE     (1 <<  0) /* 01: Receive buffer not empty */
#define CH32V_SPI1_DATAR_OFFSET   0x000c
#define CH32V_SPI1_DATAR          (CH32V_SPI1_BASE + CH32V_SPI1_DATAR_OFFSET)
#define CH32V_SPI1_DATAR_DATAR    (16 <<  0) /* 01: Data register */
#define CH32V_SPI1_DATAR_DATAR_MASK    (0xffff)
#define CH32V_SPI1_CRCR_OFFSET    0x0010
#define CH32V_SPI1_CRCR           (CH32V_SPI1_BASE + CH32V_SPI1_CRCR_OFFSET)
#define CH32V_SPI1_CRCR_CRCPOLY   (16 <<  0) /* 01: CRC polynomial register */
#define CH32V_SPI1_CRCR_CRCPOLY_MASK   (0xffff)
#define CH32V_SPI1_RCRCR_OFFSET   0x0014
#define CH32V_SPI1_RCRCR          (CH32V_SPI1_BASE + CH32V_SPI1_RCRCR_OFFSET)
#define CH32V_SPI1_RCRCR_RXCRC    (16 <<  0) /* 01: Rx CRC register */
#define CH32V_SPI1_RCRCR_RXCRC_MASK    (0xffff)
#define CH32V_SPI1_TCRCR_OFFSET   0x0018
#define CH32V_SPI1_TCRCR          (CH32V_SPI1_BASE + CH32V_SPI1_TCRCR_OFFSET)
#define CH32V_SPI1_TCRCR_TXCRC    (16 <<  0) /* 01: Tx CRC register */
#define CH32V_SPI1_TCRCR_TXCRC_MASK    (0xffff)
#define CH32V_SPI1_SPI_I2S_CFGR_OFFSET 0x001c
#define CH32V_SPI1_SPI_I2S_CFGR   (CH32V_SPI1_BASE + CH32V_SPI1_SPI_I2S_CFGR_OFFSET)
#define CH32V_SPI1_SPI_I2S_CFGR_CHLEN (1 <<  0) /* 01: Channel length (number of bits per audio channel) */
#define CH32V_SPI1_SPI_I2S_CFGR_DATLEN (2 <<  1) /* 02: DATLEN[1:0] bits (Data length to be transferred) */
#define CH32V_SPI1_SPI_I2S_CFGR_DATLEN_MASK (0x03)
#define CH32V_SPI1_SPI_I2S_CFGR_CKPOL (1 <<  3) /* 08: steady state clock polarity */
#define CH32V_SPI1_SPI_I2S_CFGR_I2SSTD (2 <<  4) /* 10: I2SSTD[1:0] bits (I2S standard selection) */
#define CH32V_SPI1_SPI_I2S_CFGR_I2SSTD_MASK (0x03)
#define CH32V_SPI1_SPI_I2S_CFGR_PCMSYNC (1 <<  7) /* 80: PCM frame synchronization */
#define CH32V_SPI1_SPI_I2S_CFGR_I2SCFG (2 <<  8) /* 100: I2SCFG[1:0] bits (I2S configuration mode) */
#define CH32V_SPI1_SPI_I2S_CFGR_I2SCFG_MASK (0x03)
#define CH32V_SPI1_SPI_I2S_CFGR_I2SE (1 << 10) /* 400: I2S Enable */
#define CH32V_SPI1_SPI_I2S_CFGR_I2SMOD (1 << 11) /* 800: I2S mode selection */
#define CH32V_SPI1_HSCR_OFFSET    0x0024
#define CH32V_SPI1_HSCR           (CH32V_SPI1_BASE + CH32V_SPI1_HSCR_OFFSET)
#define CH32V_SPI1_HSCR_HSRXEN    (1 <<  0) /* 01: High speed mode read enable */

/* SPI2 - Serial peripheral interface */
#define CH32V_SPI2_BASE           0x40003800
#define CH32V_SPI2_CTLR1_OFFSET   0x0000
#define CH32V_SPI2_CTLR1          (CH32V_SPI2_BASE + CH32V_SPI2_CTLR1_OFFSET)
#define CH32V_SPI2_CTLR1_BIDIMODE (1 << 15) /* 8000: Bidirectional data mode enable */
#define CH32V_SPI2_CTLR1_BIDIOE   (1 << 14) /* 4000: Output enable in bidirectional mode */
#define CH32V_SPI2_CTLR1_CRCEN    (1 << 13) /* 2000: Hardware CRC calculation enable */
#define CH32V_SPI2_CTLR1_CRCNEXT  (1 << 12) /* 1000: CRC transfer next */
#define CH32V_SPI2_CTLR1_DFF      (1 << 11) /* 800: Data frame format */
#define CH32V_SPI2_CTLR1_RXONLY   (1 << 10) /* 400: Receive only */
#define CH32V_SPI2_CTLR1_SSM      (1 <<  9) /* 200: Software slave management */
#define CH32V_SPI2_CTLR1_SSI      (1 <<  8) /* 100: Internal slave select */
#define CH32V_SPI2_CTLR1_LSBFIRST (1 <<  7) /* 80: Frame format */
#define CH32V_SPI2_CTLR1_SPE      (1 <<  6) /* 40: SPI enable */
#define CH32V_SPI2_CTLR1_BR       (3 <<  3) /* 08: Baud rate control */
#define CH32V_SPI2_CTLR1_BR_MASK       (0x07)
#define CH32V_SPI2_CTLR1_MSTR     (1 <<  2) /* 04: Master selection */
#define CH32V_SPI2_CTLR1_CPOL     (1 <<  1) /* 02: Clock polarity */
#define CH32V_SPI2_CTLR1_CPHA     (1 <<  0) /* 01: Clock phase */
#define CH32V_SPI2_CTLR2_OFFSET   0x0004
#define CH32V_SPI2_CTLR2          (CH32V_SPI2_BASE + CH32V_SPI2_CTLR2_OFFSET)
#define CH32V_SPI2_CTLR2_TXEIE    (1 <<  7) /* 80: Tx buffer empty interrupt enable */
#define CH32V_SPI2_CTLR2_RXNEIE   (1 <<  6) /* 40: RX buffer not empty interrupt enable */
#define CH32V_SPI2_CTLR2_ERRIE    (1 <<  5) /* 20: Error interrupt enable */
#define CH32V_SPI2_CTLR2_SSOE     (1 <<  2) /* 04: SS output enable */
#define CH32V_SPI2_CTLR2_TXDMAEN  (1 <<  1) /* 02: Tx buffer DMA enable */
#define CH32V_SPI2_CTLR2_RXDMAEN  (1 <<  0) /* 01: Rx buffer DMA enable */
#define CH32V_SPI2_STATR_OFFSET   0x0008
#define CH32V_SPI2_STATR          (CH32V_SPI2_BASE + CH32V_SPI2_STATR_OFFSET)
#define CH32V_SPI2_STATR_BSY      (1 <<  7) /* 80: Busy flag */
#define CH32V_SPI2_STATR_OVR      (1 <<  6) /* 40: Overrun flag */
#define CH32V_SPI2_STATR_MODF     (1 <<  5) /* 20: Mode fault */
#define CH32V_SPI2_STATR_CRCERR   (1 <<  4) /* 10: CRC error flag */
#define CH32V_SPI2_STATR_TXE      (1 <<  1) /* 02: Transmit buffer empty */
#define CH32V_SPI2_STATR_RXNE     (1 <<  0) /* 01: Receive buffer not empty */
#define CH32V_SPI2_DATAR_OFFSET   0x000c
#define CH32V_SPI2_DATAR          (CH32V_SPI2_BASE + CH32V_SPI2_DATAR_OFFSET)
#define CH32V_SPI2_DATAR_DATAR    (16 <<  0) /* 01: Data register */
#define CH32V_SPI2_DATAR_DATAR_MASK    (0xffff)
#define CH32V_SPI2_CRCR_OFFSET    0x0010
#define CH32V_SPI2_CRCR           (CH32V_SPI2_BASE + CH32V_SPI2_CRCR_OFFSET)
#define CH32V_SPI2_CRCR_CRCPOLY   (16 <<  0) /* 01: CRC polynomial register */
#define CH32V_SPI2_CRCR_CRCPOLY_MASK   (0xffff)
#define CH32V_SPI2_RCRCR_OFFSET   0x0014
#define CH32V_SPI2_RCRCR          (CH32V_SPI2_BASE + CH32V_SPI2_RCRCR_OFFSET)
#define CH32V_SPI2_RCRCR_RXCRC    (16 <<  0) /* 01: Rx CRC register */
#define CH32V_SPI2_RCRCR_RXCRC_MASK    (0xffff)
#define CH32V_SPI2_TCRCR_OFFSET   0x0018
#define CH32V_SPI2_TCRCR          (CH32V_SPI2_BASE + CH32V_SPI2_TCRCR_OFFSET)
#define CH32V_SPI2_TCRCR_TXCRC    (16 <<  0) /* 01: Tx CRC register */
#define CH32V_SPI2_TCRCR_TXCRC_MASK    (0xffff)
#define CH32V_SPI2_I2SCFGR_OFFSET 0x001c
#define CH32V_SPI2_I2SCFGR        (CH32V_SPI2_BASE + CH32V_SPI2_I2SCFGR_OFFSET)
#define CH32V_SPI2_I2SCFGR_I2SMOD (1 << 11) /* 800: I2S mode selection */
#define CH32V_SPI2_I2SCFGR_I2SE   (1 << 10) /* 400: I2S Enable */
#define CH32V_SPI2_I2SCFGR_I2SCFG (2 <<  8) /* 100: I2S configuration mode */
#define CH32V_SPI2_I2SCFGR_I2SCFG_MASK (0x03)
#define CH32V_SPI2_I2SCFGR_PCMSYNC (1 <<  7) /* 80: PCM frame synchronization */
#define CH32V_SPI2_I2SCFGR_I2SSTD (2 <<  4) /* 10: I2S standard selection */
#define CH32V_SPI2_I2SCFGR_I2SSTD_MASK (0x03)
#define CH32V_SPI2_I2SCFGR_CKPOL  (1 <<  3) /* 08: Steady state clock polarity */
#define CH32V_SPI2_I2SCFGR_DATLEN (2 <<  1) /* 02: Data length to be transferred */
#define CH32V_SPI2_I2SCFGR_DATLEN_MASK (0x03)
#define CH32V_SPI2_I2SCFGR_CHLEN  (1 <<  0) /* 01: Channel length (number of bits per audio channel) */
#define CH32V_SPI2_I2SPR_OFFSET   0x0020
#define CH32V_SPI2_I2SPR          (CH32V_SPI2_BASE + CH32V_SPI2_I2SPR_OFFSET)
#define CH32V_SPI2_I2SPR_MCKOE    (1 <<  9) /* 200: Master clock output enable */
#define CH32V_SPI2_I2SPR_ODD      (1 <<  8) /* 100: Odd factor for the prescaler */
#define CH32V_SPI2_I2SPR_I2SDIV   (8 <<  0) /* 01: I2S Linear prescaler */
#define CH32V_SPI2_I2SPR_I2SDIV_MASK   (0xff)
#define CH32V_SPI2_HSCR_OFFSET    0x0024
#define CH32V_SPI2_HSCR           (CH32V_SPI2_BASE + CH32V_SPI2_HSCR_OFFSET)
#define CH32V_SPI2_HSCR_HSRXEN    (1 <<  0) /* 01: High speed mode read enable */

/* No registers defined for peripheral SPI3. Using those of SPI2. */
#define CH32V_SPI3_BASE           0x40003c00
#define CH32V_SPI3_CTLR1_OFFSET   CH32V_SPI2_CTLR1_OFFSET
#define CH32V_SPI3_CTLR1          CH32V_SPI2_CTLR1
#define CH32V_SPI3_CTLR1_BIDIMODE CH32V_SPI2_CTLR1_BIDIMODE
#define CH32V_SPI3_CTLR1_BIDIOE   CH32V_SPI2_CTLR1_BIDIOE
#define CH32V_SPI3_CTLR1_CRCEN    CH32V_SPI2_CTLR1_CRCEN
#define CH32V_SPI3_CTLR1_CRCNEXT  CH32V_SPI2_CTLR1_CRCNEXT
#define CH32V_SPI3_CTLR1_DFF      CH32V_SPI2_CTLR1_DFF
#define CH32V_SPI3_CTLR1_RXONLY   CH32V_SPI2_CTLR1_RXONLY
#define CH32V_SPI3_CTLR1_SSM      CH32V_SPI2_CTLR1_SSM
#define CH32V_SPI3_CTLR1_SSI      CH32V_SPI2_CTLR1_SSI
#define CH32V_SPI3_CTLR1_LSBFIRST CH32V_SPI2_CTLR1_LSBFIRST
#define CH32V_SPI3_CTLR1_SPE      CH32V_SPI2_CTLR1_SPE
#define CH32V_SPI3_CTLR1_BR       CH32V_SPI2_CTLR1_BR
#define CH32V_SPI3_CTLR1_BR_MASK  CH32V_SPI2_CTLR1_BR_MASK
#define CH32V_SPI3_CTLR1_MSTR     CH32V_SPI2_CTLR1_MSTR
#define CH32V_SPI3_CTLR1_CPOL     CH32V_SPI2_CTLR1_CPOL
#define CH32V_SPI3_CTLR1_CPHA     CH32V_SPI2_CTLR1_CPHA
#define CH32V_SPI3_CTLR2_OFFSET   CH32V_SPI2_CTLR2_OFFSET
#define CH32V_SPI3_CTLR2          CH32V_SPI2_CTLR2
#define CH32V_SPI3_CTLR2_TXEIE    CH32V_SPI2_CTLR2_TXEIE
#define CH32V_SPI3_CTLR2_RXNEIE   CH32V_SPI2_CTLR2_RXNEIE
#define CH32V_SPI3_CTLR2_ERRIE    CH32V_SPI2_CTLR2_ERRIE
#define CH32V_SPI3_CTLR2_SSOE     CH32V_SPI2_CTLR2_SSOE
#define CH32V_SPI3_CTLR2_TXDMAEN  CH32V_SPI2_CTLR2_TXDMAEN
#define CH32V_SPI3_CTLR2_RXDMAEN  CH32V_SPI2_CTLR2_RXDMAEN
#define CH32V_SPI3_STATR_OFFSET   CH32V_SPI2_STATR_OFFSET
#define CH32V_SPI3_STATR          CH32V_SPI2_STATR
#define CH32V_SPI3_STATR_BSY      CH32V_SPI2_STATR_BSY
#define CH32V_SPI3_STATR_OVR      CH32V_SPI2_STATR_OVR
#define CH32V_SPI3_STATR_MODF     CH32V_SPI2_STATR_MODF
#define CH32V_SPI3_STATR_CRCERR   CH32V_SPI2_STATR_CRCERR
#define CH32V_SPI3_STATR_TXE      CH32V_SPI2_STATR_TXE
#define CH32V_SPI3_STATR_RXNE     CH32V_SPI2_STATR_RXNE
#define CH32V_SPI3_DATAR_OFFSET   CH32V_SPI2_DATAR_OFFSET
#define CH32V_SPI3_DATAR          CH32V_SPI2_DATAR
#define CH32V_SPI3_DATAR_DATAR    CH32V_SPI2_DATAR_DATAR
#define CH32V_SPI3_DATAR_DATAR_MASK CH32V_SPI2_DATAR_DATAR_MASK
#define CH32V_SPI3_CRCR_OFFSET    CH32V_SPI2_CRCR_OFFSET
#define CH32V_SPI3_CRCR           CH32V_SPI2_CRCR
#define CH32V_SPI3_CRCR_CRCPOLY   CH32V_SPI2_CRCR_CRCPOLY
#define CH32V_SPI3_CRCR_CRCPOLY_MASK CH32V_SPI2_CRCR_CRCPOLY_MASK
#define CH32V_SPI3_RCRCR_OFFSET   CH32V_SPI2_RCRCR_OFFSET
#define CH32V_SPI3_RCRCR          CH32V_SPI2_RCRCR
#define CH32V_SPI3_RCRCR_RXCRC    CH32V_SPI2_RCRCR_RXCRC
#define CH32V_SPI3_RCRCR_RXCRC_MASK CH32V_SPI2_RCRCR_RXCRC_MASK
#define CH32V_SPI3_TCRCR_OFFSET   CH32V_SPI2_TCRCR_OFFSET
#define CH32V_SPI3_TCRCR          CH32V_SPI2_TCRCR
#define CH32V_SPI3_TCRCR_TXCRC    CH32V_SPI2_TCRCR_TXCRC
#define CH32V_SPI3_TCRCR_TXCRC_MASK CH32V_SPI2_TCRCR_TXCRC_MASK
#define CH32V_SPI3_I2SCFGR_OFFSET CH32V_SPI2_I2SCFGR_OFFSET
#define CH32V_SPI3_I2SCFGR        CH32V_SPI2_I2SCFGR
#define CH32V_SPI3_I2SCFGR_I2SMOD CH32V_SPI2_I2SCFGR_I2SMOD
#define CH32V_SPI3_I2SCFGR_I2SE   CH32V_SPI2_I2SCFGR_I2SE
#define CH32V_SPI3_I2SCFGR_I2SCFG CH32V_SPI2_I2SCFGR_I2SCFG
#define CH32V_SPI3_I2SCFGR_I2SCFG_MASK CH32V_SPI2_I2SCFGR_I2SCFG_MASK
#define CH32V_SPI3_I2SCFGR_PCMSYNC CH32V_SPI2_I2SCFGR_PCMSYNC
#define CH32V_SPI3_I2SCFGR_I2SSTD CH32V_SPI2_I2SCFGR_I2SSTD
#define CH32V_SPI3_I2SCFGR_I2SSTD_MASK CH32V_SPI2_I2SCFGR_I2SSTD_MASK
#define CH32V_SPI3_I2SCFGR_CKPOL  CH32V_SPI2_I2SCFGR_CKPOL
#define CH32V_SPI3_I2SCFGR_DATLEN CH32V_SPI2_I2SCFGR_DATLEN
#define CH32V_SPI3_I2SCFGR_DATLEN_MASK CH32V_SPI2_I2SCFGR_DATLEN_MASK
#define CH32V_SPI3_I2SCFGR_CHLEN  CH32V_SPI2_I2SCFGR_CHLEN
#define CH32V_SPI3_I2SPR_OFFSET   CH32V_SPI2_I2SPR_OFFSET
#define CH32V_SPI3_I2SPR          CH32V_SPI2_I2SPR
#define CH32V_SPI3_I2SPR_MCKOE    CH32V_SPI2_I2SPR_MCKOE
#define CH32V_SPI3_I2SPR_ODD      CH32V_SPI2_I2SPR_ODD
#define CH32V_SPI3_I2SPR_I2SDIV   CH32V_SPI2_I2SPR_I2SDIV
#define CH32V_SPI3_I2SPR_I2SDIV_MASK CH32V_SPI2_I2SPR_I2SDIV_MASK
#define CH32V_SPI3_HSCR_OFFSET    CH32V_SPI2_HSCR_OFFSET
#define CH32V_SPI3_HSCR           CH32V_SPI2_HSCR
#define CH32V_SPI3_HSCR_HSRXEN    CH32V_SPI2_HSCR_HSRXEN

/* USART1 - Universal synchronous asynchronous receiver transmitter */
#define CH32V_USART1_BASE         0x40013800
#define CH32V_USART1_STATR_OFFSET 0x0000
#define CH32V_USART1_STATR        (CH32V_USART1_BASE + CH32V_USART1_STATR_OFFSET)
#define CH32V_USART1_STATR_CTS    (1 <<  9) /* 200: CTS flag */
#define CH32V_USART1_STATR_LBD    (1 <<  8) /* 100: LIN break detection flag */
#define CH32V_USART1_STATR_TXE    (1 <<  7) /* 80: Transmit data register empty */
#define CH32V_USART1_STATR_TC     (1 <<  6) /* 40: Transmission complete */
#define CH32V_USART1_STATR_RXNE   (1 <<  5) /* 20: Read data register not empty */
#define CH32V_USART1_STATR_IDLE   (1 <<  4) /* 10: IDLE line detected */
#define CH32V_USART1_STATR_ORE    (1 <<  3) /* 08: Overrun error */
#define CH32V_USART1_STATR_NE     (1 <<  2) /* 04: Noise error flag */
#define CH32V_USART1_STATR_FE     (1 <<  1) /* 02: Framing error */
#define CH32V_USART1_STATR_PE     (1 <<  0) /* 01: Parity error */
#define CH32V_USART1_DATAR_OFFSET 0x0004
#define CH32V_USART1_DATAR        (CH32V_USART1_BASE + CH32V_USART1_DATAR_OFFSET)
#define CH32V_USART1_DATAR_DR     (9 <<  0) /* 01: Data value */
#define CH32V_USART1_DATAR_DR_MASK     (0x1ff)
#define CH32V_USART1_BRR_OFFSET   0x0008
#define CH32V_USART1_BRR          (CH32V_USART1_BASE + CH32V_USART1_BRR_OFFSET)
#define CH32V_USART1_BRR_DIV_Mantissa (12 <<  4) /* 10: mantissa of USARTDIV */
#define CH32V_USART1_BRR_DIV_Mantissa_MASK (0xfff)
#define CH32V_USART1_BRR_DIV_Fraction (4 <<  0) /* 01: fraction of USARTDIV */
#define CH32V_USART1_BRR_DIV_Fraction_MASK (0x0f)
#define CH32V_USART1_CTLR1_OFFSET 0x000c
#define CH32V_USART1_CTLR1        (CH32V_USART1_BASE + CH32V_USART1_CTLR1_OFFSET)
#define CH32V_USART1_CTLR1_UE     (1 << 13) /* 2000: USART enable */
#define CH32V_USART1_CTLR1_M      (1 << 12) /* 1000: Word length */
#define CH32V_USART1_CTLR1_WAKE   (1 << 11) /* 800: Wakeup method */
#define CH32V_USART1_CTLR1_PCE    (1 << 10) /* 400: Parity control enable */
#define CH32V_USART1_CTLR1_PS     (1 <<  9) /* 200: Parity selection */
#define CH32V_USART1_CTLR1_PEIE   (1 <<  8) /* 100: PE interrupt enable */
#define CH32V_USART1_CTLR1_TXEIE  (1 <<  7) /* 80: TXE interrupt enable */
#define CH32V_USART1_CTLR1_TCIE   (1 <<  6) /* 40: Transmission complete interrupt enable */
#define CH32V_USART1_CTLR1_RXNEIE (1 <<  5) /* 20: RXNE interrupt enable */
#define CH32V_USART1_CTLR1_IDLEIE (1 <<  4) /* 10: IDLE interrupt enable */
#define CH32V_USART1_CTLR1_TE     (1 <<  3) /* 08: Transmitter enable */
#define CH32V_USART1_CTLR1_RE     (1 <<  2) /* 04: Receiver enable */
#define CH32V_USART1_CTLR1_RWU    (1 <<  1) /* 02: Receiver wakeup */
#define CH32V_USART1_CTLR1_SBK    (1 <<  0) /* 01: Send break */
#define CH32V_USART1_CTLR2_OFFSET 0x0010
#define CH32V_USART1_CTLR2        (CH32V_USART1_BASE + CH32V_USART1_CTLR2_OFFSET)
#define CH32V_USART1_CTLR2_LINEN  (1 << 14) /* 4000: LIN mode enable */
#define CH32V_USART1_CTLR2_STOP   (2 << 12) /* 1000: STOP bits */
#define CH32V_USART1_CTLR2_STOP_MASK   (0x03)
#define CH32V_USART1_CTLR2_CLKEN  (1 << 11) /* 800: Clock enable */
#define CH32V_USART1_CTLR2_CPOL   (1 << 10) /* 400: Clock polarity */
#define CH32V_USART1_CTLR2_CPHA   (1 <<  9) /* 200: Clock phase */
#define CH32V_USART1_CTLR2_LBCL   (1 <<  8) /* 100: Last bit clock pulse */
#define CH32V_USART1_CTLR2_LBDIE  (1 <<  6) /* 40: LIN break detection interrupt enable */
#define CH32V_USART1_CTLR2_LBDL   (1 <<  5) /* 20: lin break detection length */
#define CH32V_USART1_CTLR2_ADD    (4 <<  0) /* 01: Address of the USART node */
#define CH32V_USART1_CTLR2_ADD_MASK    (0x0f)
#define CH32V_USART1_CTLR3_OFFSET 0x0014
#define CH32V_USART1_CTLR3        (CH32V_USART1_BASE + CH32V_USART1_CTLR3_OFFSET)
#define CH32V_USART1_CTLR3_CTSIE  (1 << 10) /* 400: CTS interrupt enable */
#define CH32V_USART1_CTLR3_CTSE   (1 <<  9) /* 200: CTS enable */
#define CH32V_USART1_CTLR3_RTSE   (1 <<  8) /* 100: RTS enable */
#define CH32V_USART1_CTLR3_DMAT   (1 <<  7) /* 80: DMA enable transmitter */
#define CH32V_USART1_CTLR3_DMAR   (1 <<  6) /* 40: DMA enable receiver */
#define CH32V_USART1_CTLR3_SCEN   (1 <<  5) /* 20: Smartcard mode enable */
#define CH32V_USART1_CTLR3_NACK   (1 <<  4) /* 10: Smartcard NACK enable */
#define CH32V_USART1_CTLR3_HDSEL  (1 <<  3) /* 08: Half-duplex selection */
#define CH32V_USART1_CTLR3_IRLP   (1 <<  2) /* 04: IrDA low-power */
#define CH32V_USART1_CTLR3_IREN   (1 <<  1) /* 02: IrDA mode enable */
#define CH32V_USART1_CTLR3_EIE    (1 <<  0) /* 01: Error interrupt enable */
#define CH32V_USART1_GPR_OFFSET   0x0018
#define CH32V_USART1_GPR          (CH32V_USART1_BASE + CH32V_USART1_GPR_OFFSET)
#define CH32V_USART1_GPR_GT       (8 <<  8) /* 100: Guard time value */
#define CH32V_USART1_GPR_GT_MASK       (0xff)
#define CH32V_USART1_GPR_PSC      (8 <<  0) /* 01: Prescaler value */
#define CH32V_USART1_GPR_PSC_MASK      (0xff)

/* No registers defined for peripheral USART2. Using those of USART1. */
#define CH32V_USART2_BASE         0x40004400
#define CH32V_USART2_STATR_OFFSET CH32V_USART1_STATR_OFFSET
#define CH32V_USART2_STATR        CH32V_USART1_STATR
#define CH32V_USART2_STATR_CTS    CH32V_USART1_STATR_CTS
#define CH32V_USART2_STATR_LBD    CH32V_USART1_STATR_LBD
#define CH32V_USART2_STATR_TXE    CH32V_USART1_STATR_TXE
#define CH32V_USART2_STATR_TC     CH32V_USART1_STATR_TC
#define CH32V_USART2_STATR_RXNE   CH32V_USART1_STATR_RXNE
#define CH32V_USART2_STATR_IDLE   CH32V_USART1_STATR_IDLE
#define CH32V_USART2_STATR_ORE    CH32V_USART1_STATR_ORE
#define CH32V_USART2_STATR_NE     CH32V_USART1_STATR_NE
#define CH32V_USART2_STATR_FE     CH32V_USART1_STATR_FE
#define CH32V_USART2_STATR_PE     CH32V_USART1_STATR_PE
#define CH32V_USART2_DATAR_OFFSET CH32V_USART1_DATAR_OFFSET
#define CH32V_USART2_DATAR        CH32V_USART1_DATAR
#define CH32V_USART2_DATAR_DR     CH32V_USART1_DATAR_DR
#define CH32V_USART2_DATAR_DR_MASK CH32V_USART1_DATAR_DR_MASK
#define CH32V_USART2_BRR_OFFSET   CH32V_USART1_BRR_OFFSET
#define CH32V_USART2_BRR          CH32V_USART1_BRR
#define CH32V_USART2_BRR_DIV_Mantissa CH32V_USART1_BRR_DIV_Mantissa
#define CH32V_USART2_BRR_DIV_Mantissa_MASK CH32V_USART1_BRR_DIV_Mantissa_MASK
#define CH32V_USART2_BRR_DIV_Fraction CH32V_USART1_BRR_DIV_Fraction
#define CH32V_USART2_BRR_DIV_Fraction_MASK CH32V_USART1_BRR_DIV_Fraction_MASK
#define CH32V_USART2_CTLR1_OFFSET CH32V_USART1_CTLR1_OFFSET
#define CH32V_USART2_CTLR1        CH32V_USART1_CTLR1
#define CH32V_USART2_CTLR1_UE     CH32V_USART1_CTLR1_UE
#define CH32V_USART2_CTLR1_M      CH32V_USART1_CTLR1_M
#define CH32V_USART2_CTLR1_WAKE   CH32V_USART1_CTLR1_WAKE
#define CH32V_USART2_CTLR1_PCE    CH32V_USART1_CTLR1_PCE
#define CH32V_USART2_CTLR1_PS     CH32V_USART1_CTLR1_PS
#define CH32V_USART2_CTLR1_PEIE   CH32V_USART1_CTLR1_PEIE
#define CH32V_USART2_CTLR1_TXEIE  CH32V_USART1_CTLR1_TXEIE
#define CH32V_USART2_CTLR1_TCIE   CH32V_USART1_CTLR1_TCIE
#define CH32V_USART2_CTLR1_RXNEIE CH32V_USART1_CTLR1_RXNEIE
#define CH32V_USART2_CTLR1_IDLEIE CH32V_USART1_CTLR1_IDLEIE
#define CH32V_USART2_CTLR1_TE     CH32V_USART1_CTLR1_TE
#define CH32V_USART2_CTLR1_RE     CH32V_USART1_CTLR1_RE
#define CH32V_USART2_CTLR1_RWU    CH32V_USART1_CTLR1_RWU
#define CH32V_USART2_CTLR1_SBK    CH32V_USART1_CTLR1_SBK
#define CH32V_USART2_CTLR2_OFFSET CH32V_USART1_CTLR2_OFFSET
#define CH32V_USART2_CTLR2        CH32V_USART1_CTLR2
#define CH32V_USART2_CTLR2_LINEN  CH32V_USART1_CTLR2_LINEN
#define CH32V_USART2_CTLR2_STOP   CH32V_USART1_CTLR2_STOP
#define CH32V_USART2_CTLR2_STOP_MASK CH32V_USART1_CTLR2_STOP_MASK
#define CH32V_USART2_CTLR2_CLKEN  CH32V_USART1_CTLR2_CLKEN
#define CH32V_USART2_CTLR2_CPOL   CH32V_USART1_CTLR2_CPOL
#define CH32V_USART2_CTLR2_CPHA   CH32V_USART1_CTLR2_CPHA
#define CH32V_USART2_CTLR2_LBCL   CH32V_USART1_CTLR2_LBCL
#define CH32V_USART2_CTLR2_LBDIE  CH32V_USART1_CTLR2_LBDIE
#define CH32V_USART2_CTLR2_LBDL   CH32V_USART1_CTLR2_LBDL
#define CH32V_USART2_CTLR2_ADD    CH32V_USART1_CTLR2_ADD
#define CH32V_USART2_CTLR2_ADD_MASK CH32V_USART1_CTLR2_ADD_MASK
#define CH32V_USART2_CTLR3_OFFSET CH32V_USART1_CTLR3_OFFSET
#define CH32V_USART2_CTLR3        CH32V_USART1_CTLR3
#define CH32V_USART2_CTLR3_CTSIE  CH32V_USART1_CTLR3_CTSIE
#define CH32V_USART2_CTLR3_CTSE   CH32V_USART1_CTLR3_CTSE
#define CH32V_USART2_CTLR3_RTSE   CH32V_USART1_CTLR3_RTSE
#define CH32V_USART2_CTLR3_DMAT   CH32V_USART1_CTLR3_DMAT
#define CH32V_USART2_CTLR3_DMAR   CH32V_USART1_CTLR3_DMAR
#define CH32V_USART2_CTLR3_SCEN   CH32V_USART1_CTLR3_SCEN
#define CH32V_USART2_CTLR3_NACK   CH32V_USART1_CTLR3_NACK
#define CH32V_USART2_CTLR3_HDSEL  CH32V_USART1_CTLR3_HDSEL
#define CH32V_USART2_CTLR3_IRLP   CH32V_USART1_CTLR3_IRLP
#define CH32V_USART2_CTLR3_IREN   CH32V_USART1_CTLR3_IREN
#define CH32V_USART2_CTLR3_EIE    CH32V_USART1_CTLR3_EIE
#define CH32V_USART2_GPR_OFFSET   CH32V_USART1_GPR_OFFSET
#define CH32V_USART2_GPR          CH32V_USART1_GPR
#define CH32V_USART2_GPR_GT       CH32V_USART1_GPR_GT
#define CH32V_USART2_GPR_GT_MASK  CH32V_USART1_GPR_GT_MASK
#define CH32V_USART2_GPR_PSC      CH32V_USART1_GPR_PSC
#define CH32V_USART2_GPR_PSC_MASK CH32V_USART1_GPR_PSC_MASK

/* No registers defined for peripheral USART3. Using those of USART1. */
#define CH32V_USART3_BASE         0x40004800
#define CH32V_USART3_STATR_OFFSET CH32V_USART1_STATR_OFFSET
#define CH32V_USART3_STATR        CH32V_USART1_STATR
#define CH32V_USART3_STATR_CTS    CH32V_USART1_STATR_CTS
#define CH32V_USART3_STATR_LBD    CH32V_USART1_STATR_LBD
#define CH32V_USART3_STATR_TXE    CH32V_USART1_STATR_TXE
#define CH32V_USART3_STATR_TC     CH32V_USART1_STATR_TC
#define CH32V_USART3_STATR_RXNE   CH32V_USART1_STATR_RXNE
#define CH32V_USART3_STATR_IDLE   CH32V_USART1_STATR_IDLE
#define CH32V_USART3_STATR_ORE    CH32V_USART1_STATR_ORE
#define CH32V_USART3_STATR_NE     CH32V_USART1_STATR_NE
#define CH32V_USART3_STATR_FE     CH32V_USART1_STATR_FE
#define CH32V_USART3_STATR_PE     CH32V_USART1_STATR_PE
#define CH32V_USART3_DATAR_OFFSET CH32V_USART1_DATAR_OFFSET
#define CH32V_USART3_DATAR        CH32V_USART1_DATAR
#define CH32V_USART3_DATAR_DR     CH32V_USART1_DATAR_DR
#define CH32V_USART3_DATAR_DR_MASK CH32V_USART1_DATAR_DR_MASK
#define CH32V_USART3_BRR_OFFSET   CH32V_USART1_BRR_OFFSET
#define CH32V_USART3_BRR          CH32V_USART1_BRR
#define CH32V_USART3_BRR_DIV_Mantissa CH32V_USART1_BRR_DIV_Mantissa
#define CH32V_USART3_BRR_DIV_Mantissa_MASK CH32V_USART1_BRR_DIV_Mantissa_MASK
#define CH32V_USART3_BRR_DIV_Fraction CH32V_USART1_BRR_DIV_Fraction
#define CH32V_USART3_BRR_DIV_Fraction_MASK CH32V_USART1_BRR_DIV_Fraction_MASK
#define CH32V_USART3_CTLR1_OFFSET CH32V_USART1_CTLR1_OFFSET
#define CH32V_USART3_CTLR1        CH32V_USART1_CTLR1
#define CH32V_USART3_CTLR1_UE     CH32V_USART1_CTLR1_UE
#define CH32V_USART3_CTLR1_M      CH32V_USART1_CTLR1_M
#define CH32V_USART3_CTLR1_WAKE   CH32V_USART1_CTLR1_WAKE
#define CH32V_USART3_CTLR1_PCE    CH32V_USART1_CTLR1_PCE
#define CH32V_USART3_CTLR1_PS     CH32V_USART1_CTLR1_PS
#define CH32V_USART3_CTLR1_PEIE   CH32V_USART1_CTLR1_PEIE
#define CH32V_USART3_CTLR1_TXEIE  CH32V_USART1_CTLR1_TXEIE
#define CH32V_USART3_CTLR1_TCIE   CH32V_USART1_CTLR1_TCIE
#define CH32V_USART3_CTLR1_RXNEIE CH32V_USART1_CTLR1_RXNEIE
#define CH32V_USART3_CTLR1_IDLEIE CH32V_USART1_CTLR1_IDLEIE
#define CH32V_USART3_CTLR1_TE     CH32V_USART1_CTLR1_TE
#define CH32V_USART3_CTLR1_RE     CH32V_USART1_CTLR1_RE
#define CH32V_USART3_CTLR1_RWU    CH32V_USART1_CTLR1_RWU
#define CH32V_USART3_CTLR1_SBK    CH32V_USART1_CTLR1_SBK
#define CH32V_USART3_CTLR2_OFFSET CH32V_USART1_CTLR2_OFFSET
#define CH32V_USART3_CTLR2        CH32V_USART1_CTLR2
#define CH32V_USART3_CTLR2_LINEN  CH32V_USART1_CTLR2_LINEN
#define CH32V_USART3_CTLR2_STOP   CH32V_USART1_CTLR2_STOP
#define CH32V_USART3_CTLR2_STOP_MASK CH32V_USART1_CTLR2_STOP_MASK
#define CH32V_USART3_CTLR2_CLKEN  CH32V_USART1_CTLR2_CLKEN
#define CH32V_USART3_CTLR2_CPOL   CH32V_USART1_CTLR2_CPOL
#define CH32V_USART3_CTLR2_CPHA   CH32V_USART1_CTLR2_CPHA
#define CH32V_USART3_CTLR2_LBCL   CH32V_USART1_CTLR2_LBCL
#define CH32V_USART3_CTLR2_LBDIE  CH32V_USART1_CTLR2_LBDIE
#define CH32V_USART3_CTLR2_LBDL   CH32V_USART1_CTLR2_LBDL
#define CH32V_USART3_CTLR2_ADD    CH32V_USART1_CTLR2_ADD
#define CH32V_USART3_CTLR2_ADD_MASK CH32V_USART1_CTLR2_ADD_MASK
#define CH32V_USART3_CTLR3_OFFSET CH32V_USART1_CTLR3_OFFSET
#define CH32V_USART3_CTLR3        CH32V_USART1_CTLR3
#define CH32V_USART3_CTLR3_CTSIE  CH32V_USART1_CTLR3_CTSIE
#define CH32V_USART3_CTLR3_CTSE   CH32V_USART1_CTLR3_CTSE
#define CH32V_USART3_CTLR3_RTSE   CH32V_USART1_CTLR3_RTSE
#define CH32V_USART3_CTLR3_DMAT   CH32V_USART1_CTLR3_DMAT
#define CH32V_USART3_CTLR3_DMAR   CH32V_USART1_CTLR3_DMAR
#define CH32V_USART3_CTLR3_SCEN   CH32V_USART1_CTLR3_SCEN
#define CH32V_USART3_CTLR3_NACK   CH32V_USART1_CTLR3_NACK
#define CH32V_USART3_CTLR3_HDSEL  CH32V_USART1_CTLR3_HDSEL
#define CH32V_USART3_CTLR3_IRLP   CH32V_USART1_CTLR3_IRLP
#define CH32V_USART3_CTLR3_IREN   CH32V_USART1_CTLR3_IREN
#define CH32V_USART3_CTLR3_EIE    CH32V_USART1_CTLR3_EIE
#define CH32V_USART3_GPR_OFFSET   CH32V_USART1_GPR_OFFSET
#define CH32V_USART3_GPR          CH32V_USART1_GPR
#define CH32V_USART3_GPR_GT       CH32V_USART1_GPR_GT
#define CH32V_USART3_GPR_GT_MASK  CH32V_USART1_GPR_GT_MASK
#define CH32V_USART3_GPR_PSC      CH32V_USART1_GPR_PSC
#define CH32V_USART3_GPR_PSC_MASK CH32V_USART1_GPR_PSC_MASK

/* No registers defined for peripheral UART4. Using those of USART1. */
#define CH32V_UART4_BASE          0x40004c00
#define CH32V_UART4_STATR_OFFSET  CH32V_USART1_STATR_OFFSET
#define CH32V_UART4_STATR         CH32V_USART1_STATR
#define CH32V_UART4_STATR_CTS     CH32V_USART1_STATR_CTS
#define CH32V_UART4_STATR_LBD     CH32V_USART1_STATR_LBD
#define CH32V_UART4_STATR_TXE     CH32V_USART1_STATR_TXE
#define CH32V_UART4_STATR_TC      CH32V_USART1_STATR_TC
#define CH32V_UART4_STATR_RXNE    CH32V_USART1_STATR_RXNE
#define CH32V_UART4_STATR_IDLE    CH32V_USART1_STATR_IDLE
#define CH32V_UART4_STATR_ORE     CH32V_USART1_STATR_ORE
#define CH32V_UART4_STATR_NE      CH32V_USART1_STATR_NE
#define CH32V_UART4_STATR_FE      CH32V_USART1_STATR_FE
#define CH32V_UART4_STATR_PE      CH32V_USART1_STATR_PE
#define CH32V_UART4_DATAR_OFFSET  CH32V_USART1_DATAR_OFFSET
#define CH32V_UART4_DATAR         CH32V_USART1_DATAR
#define CH32V_UART4_DATAR_DR      CH32V_USART1_DATAR_DR
#define CH32V_UART4_DATAR_DR_MASK CH32V_USART1_DATAR_DR_MASK
#define CH32V_UART4_BRR_OFFSET    CH32V_USART1_BRR_OFFSET
#define CH32V_UART4_BRR           CH32V_USART1_BRR
#define CH32V_UART4_BRR_DIV_Mantissa CH32V_USART1_BRR_DIV_Mantissa
#define CH32V_UART4_BRR_DIV_Mantissa_MASK CH32V_USART1_BRR_DIV_Mantissa_MASK
#define CH32V_UART4_BRR_DIV_Fraction CH32V_USART1_BRR_DIV_Fraction
#define CH32V_UART4_BRR_DIV_Fraction_MASK CH32V_USART1_BRR_DIV_Fraction_MASK
#define CH32V_UART4_CTLR1_OFFSET  CH32V_USART1_CTLR1_OFFSET
#define CH32V_UART4_CTLR1         CH32V_USART1_CTLR1
#define CH32V_UART4_CTLR1_UE      CH32V_USART1_CTLR1_UE
#define CH32V_UART4_CTLR1_M       CH32V_USART1_CTLR1_M
#define CH32V_UART4_CTLR1_WAKE    CH32V_USART1_CTLR1_WAKE
#define CH32V_UART4_CTLR1_PCE     CH32V_USART1_CTLR1_PCE
#define CH32V_UART4_CTLR1_PS      CH32V_USART1_CTLR1_PS
#define CH32V_UART4_CTLR1_PEIE    CH32V_USART1_CTLR1_PEIE
#define CH32V_UART4_CTLR1_TXEIE   CH32V_USART1_CTLR1_TXEIE
#define CH32V_UART4_CTLR1_TCIE    CH32V_USART1_CTLR1_TCIE
#define CH32V_UART4_CTLR1_RXNEIE  CH32V_USART1_CTLR1_RXNEIE
#define CH32V_UART4_CTLR1_IDLEIE  CH32V_USART1_CTLR1_IDLEIE
#define CH32V_UART4_CTLR1_TE      CH32V_USART1_CTLR1_TE
#define CH32V_UART4_CTLR1_RE      CH32V_USART1_CTLR1_RE
#define CH32V_UART4_CTLR1_RWU     CH32V_USART1_CTLR1_RWU
#define CH32V_UART4_CTLR1_SBK     CH32V_USART1_CTLR1_SBK
#define CH32V_UART4_CTLR2_OFFSET  CH32V_USART1_CTLR2_OFFSET
#define CH32V_UART4_CTLR2         CH32V_USART1_CTLR2
#define CH32V_UART4_CTLR2_LINEN   CH32V_USART1_CTLR2_LINEN
#define CH32V_UART4_CTLR2_STOP    CH32V_USART1_CTLR2_STOP
#define CH32V_UART4_CTLR2_STOP_MASK CH32V_USART1_CTLR2_STOP_MASK
#define CH32V_UART4_CTLR2_CLKEN   CH32V_USART1_CTLR2_CLKEN
#define CH32V_UART4_CTLR2_CPOL    CH32V_USART1_CTLR2_CPOL
#define CH32V_UART4_CTLR2_CPHA    CH32V_USART1_CTLR2_CPHA
#define CH32V_UART4_CTLR2_LBCL    CH32V_USART1_CTLR2_LBCL
#define CH32V_UART4_CTLR2_LBDIE   CH32V_USART1_CTLR2_LBDIE
#define CH32V_UART4_CTLR2_LBDL    CH32V_USART1_CTLR2_LBDL
#define CH32V_UART4_CTLR2_ADD     CH32V_USART1_CTLR2_ADD
#define CH32V_UART4_CTLR2_ADD_MASK CH32V_USART1_CTLR2_ADD_MASK
#define CH32V_UART4_CTLR3_OFFSET  CH32V_USART1_CTLR3_OFFSET
#define CH32V_UART4_CTLR3         CH32V_USART1_CTLR3
#define CH32V_UART4_CTLR3_CTSIE   CH32V_USART1_CTLR3_CTSIE
#define CH32V_UART4_CTLR3_CTSE    CH32V_USART1_CTLR3_CTSE
#define CH32V_UART4_CTLR3_RTSE    CH32V_USART1_CTLR3_RTSE
#define CH32V_UART4_CTLR3_DMAT    CH32V_USART1_CTLR3_DMAT
#define CH32V_UART4_CTLR3_DMAR    CH32V_USART1_CTLR3_DMAR
#define CH32V_UART4_CTLR3_SCEN    CH32V_USART1_CTLR3_SCEN
#define CH32V_UART4_CTLR3_NACK    CH32V_USART1_CTLR3_NACK
#define CH32V_UART4_CTLR3_HDSEL   CH32V_USART1_CTLR3_HDSEL
#define CH32V_UART4_CTLR3_IRLP    CH32V_USART1_CTLR3_IRLP
#define CH32V_UART4_CTLR3_IREN    CH32V_USART1_CTLR3_IREN
#define CH32V_UART4_CTLR3_EIE     CH32V_USART1_CTLR3_EIE
#define CH32V_UART4_GPR_OFFSET    CH32V_USART1_GPR_OFFSET
#define CH32V_UART4_GPR           CH32V_USART1_GPR
#define CH32V_UART4_GPR_GT        CH32V_USART1_GPR_GT
#define CH32V_UART4_GPR_GT_MASK   CH32V_USART1_GPR_GT_MASK
#define CH32V_UART4_GPR_PSC       CH32V_USART1_GPR_PSC
#define CH32V_UART4_GPR_PSC_MASK  CH32V_USART1_GPR_PSC_MASK

/* No registers defined for peripheral UART5. Using those of USART1. */
#define CH32V_UART5_BASE          0x40005000
#define CH32V_UART5_STATR_OFFSET  CH32V_USART1_STATR_OFFSET
#define CH32V_UART5_STATR         CH32V_USART1_STATR
#define CH32V_UART5_STATR_CTS     CH32V_USART1_STATR_CTS
#define CH32V_UART5_STATR_LBD     CH32V_USART1_STATR_LBD
#define CH32V_UART5_STATR_TXE     CH32V_USART1_STATR_TXE
#define CH32V_UART5_STATR_TC      CH32V_USART1_STATR_TC
#define CH32V_UART5_STATR_RXNE    CH32V_USART1_STATR_RXNE
#define CH32V_UART5_STATR_IDLE    CH32V_USART1_STATR_IDLE
#define CH32V_UART5_STATR_ORE     CH32V_USART1_STATR_ORE
#define CH32V_UART5_STATR_NE      CH32V_USART1_STATR_NE
#define CH32V_UART5_STATR_FE      CH32V_USART1_STATR_FE
#define CH32V_UART5_STATR_PE      CH32V_USART1_STATR_PE
#define CH32V_UART5_DATAR_OFFSET  CH32V_USART1_DATAR_OFFSET
#define CH32V_UART5_DATAR         CH32V_USART1_DATAR
#define CH32V_UART5_DATAR_DR      CH32V_USART1_DATAR_DR
#define CH32V_UART5_DATAR_DR_MASK CH32V_USART1_DATAR_DR_MASK
#define CH32V_UART5_BRR_OFFSET    CH32V_USART1_BRR_OFFSET
#define CH32V_UART5_BRR           CH32V_USART1_BRR
#define CH32V_UART5_BRR_DIV_Mantissa CH32V_USART1_BRR_DIV_Mantissa
#define CH32V_UART5_BRR_DIV_Mantissa_MASK CH32V_USART1_BRR_DIV_Mantissa_MASK
#define CH32V_UART5_BRR_DIV_Fraction CH32V_USART1_BRR_DIV_Fraction
#define CH32V_UART5_BRR_DIV_Fraction_MASK CH32V_USART1_BRR_DIV_Fraction_MASK
#define CH32V_UART5_CTLR1_OFFSET  CH32V_USART1_CTLR1_OFFSET
#define CH32V_UART5_CTLR1         CH32V_USART1_CTLR1
#define CH32V_UART5_CTLR1_UE      CH32V_USART1_CTLR1_UE
#define CH32V_UART5_CTLR1_M       CH32V_USART1_CTLR1_M
#define CH32V_UART5_CTLR1_WAKE    CH32V_USART1_CTLR1_WAKE
#define CH32V_UART5_CTLR1_PCE     CH32V_USART1_CTLR1_PCE
#define CH32V_UART5_CTLR1_PS      CH32V_USART1_CTLR1_PS
#define CH32V_UART5_CTLR1_PEIE    CH32V_USART1_CTLR1_PEIE
#define CH32V_UART5_CTLR1_TXEIE   CH32V_USART1_CTLR1_TXEIE
#define CH32V_UART5_CTLR1_TCIE    CH32V_USART1_CTLR1_TCIE
#define CH32V_UART5_CTLR1_RXNEIE  CH32V_USART1_CTLR1_RXNEIE
#define CH32V_UART5_CTLR1_IDLEIE  CH32V_USART1_CTLR1_IDLEIE
#define CH32V_UART5_CTLR1_TE      CH32V_USART1_CTLR1_TE
#define CH32V_UART5_CTLR1_RE      CH32V_USART1_CTLR1_RE
#define CH32V_UART5_CTLR1_RWU     CH32V_USART1_CTLR1_RWU
#define CH32V_UART5_CTLR1_SBK     CH32V_USART1_CTLR1_SBK
#define CH32V_UART5_CTLR2_OFFSET  CH32V_USART1_CTLR2_OFFSET
#define CH32V_UART5_CTLR2         CH32V_USART1_CTLR2
#define CH32V_UART5_CTLR2_LINEN   CH32V_USART1_CTLR2_LINEN
#define CH32V_UART5_CTLR2_STOP    CH32V_USART1_CTLR2_STOP
#define CH32V_UART5_CTLR2_STOP_MASK CH32V_USART1_CTLR2_STOP_MASK
#define CH32V_UART5_CTLR2_CLKEN   CH32V_USART1_CTLR2_CLKEN
#define CH32V_UART5_CTLR2_CPOL    CH32V_USART1_CTLR2_CPOL
#define CH32V_UART5_CTLR2_CPHA    CH32V_USART1_CTLR2_CPHA
#define CH32V_UART5_CTLR2_LBCL    CH32V_USART1_CTLR2_LBCL
#define CH32V_UART5_CTLR2_LBDIE   CH32V_USART1_CTLR2_LBDIE
#define CH32V_UART5_CTLR2_LBDL    CH32V_USART1_CTLR2_LBDL
#define CH32V_UART5_CTLR2_ADD     CH32V_USART1_CTLR2_ADD
#define CH32V_UART5_CTLR2_ADD_MASK CH32V_USART1_CTLR2_ADD_MASK
#define CH32V_UART5_CTLR3_OFFSET  CH32V_USART1_CTLR3_OFFSET
#define CH32V_UART5_CTLR3         CH32V_USART1_CTLR3
#define CH32V_UART5_CTLR3_CTSIE   CH32V_USART1_CTLR3_CTSIE
#define CH32V_UART5_CTLR3_CTSE    CH32V_USART1_CTLR3_CTSE
#define CH32V_UART5_CTLR3_RTSE    CH32V_USART1_CTLR3_RTSE
#define CH32V_UART5_CTLR3_DMAT    CH32V_USART1_CTLR3_DMAT
#define CH32V_UART5_CTLR3_DMAR    CH32V_USART1_CTLR3_DMAR
#define CH32V_UART5_CTLR3_SCEN    CH32V_USART1_CTLR3_SCEN
#define CH32V_UART5_CTLR3_NACK    CH32V_USART1_CTLR3_NACK
#define CH32V_UART5_CTLR3_HDSEL   CH32V_USART1_CTLR3_HDSEL
#define CH32V_UART5_CTLR3_IRLP    CH32V_USART1_CTLR3_IRLP
#define CH32V_UART5_CTLR3_IREN    CH32V_USART1_CTLR3_IREN
#define CH32V_UART5_CTLR3_EIE     CH32V_USART1_CTLR3_EIE
#define CH32V_UART5_GPR_OFFSET    CH32V_USART1_GPR_OFFSET
#define CH32V_UART5_GPR           CH32V_USART1_GPR
#define CH32V_UART5_GPR_GT        CH32V_USART1_GPR_GT
#define CH32V_UART5_GPR_GT_MASK   CH32V_USART1_GPR_GT_MASK
#define CH32V_UART5_GPR_PSC       CH32V_USART1_GPR_PSC
#define CH32V_UART5_GPR_PSC_MASK  CH32V_USART1_GPR_PSC_MASK

/* No registers defined for peripheral UART6. Using those of USART1. */
#define CH32V_UART6_BASE          0x40001800
#define CH32V_UART6_STATR_OFFSET  CH32V_USART1_STATR_OFFSET
#define CH32V_UART6_STATR         CH32V_USART1_STATR
#define CH32V_UART6_STATR_CTS     CH32V_USART1_STATR_CTS
#define CH32V_UART6_STATR_LBD     CH32V_USART1_STATR_LBD
#define CH32V_UART6_STATR_TXE     CH32V_USART1_STATR_TXE
#define CH32V_UART6_STATR_TC      CH32V_USART1_STATR_TC
#define CH32V_UART6_STATR_RXNE    CH32V_USART1_STATR_RXNE
#define CH32V_UART6_STATR_IDLE    CH32V_USART1_STATR_IDLE
#define CH32V_UART6_STATR_ORE     CH32V_USART1_STATR_ORE
#define CH32V_UART6_STATR_NE      CH32V_USART1_STATR_NE
#define CH32V_UART6_STATR_FE      CH32V_USART1_STATR_FE
#define CH32V_UART6_STATR_PE      CH32V_USART1_STATR_PE
#define CH32V_UART6_DATAR_OFFSET  CH32V_USART1_DATAR_OFFSET
#define CH32V_UART6_DATAR         CH32V_USART1_DATAR
#define CH32V_UART6_DATAR_DR      CH32V_USART1_DATAR_DR
#define CH32V_UART6_DATAR_DR_MASK CH32V_USART1_DATAR_DR_MASK
#define CH32V_UART6_BRR_OFFSET    CH32V_USART1_BRR_OFFSET
#define CH32V_UART6_BRR           CH32V_USART1_BRR
#define CH32V_UART6_BRR_DIV_Mantissa CH32V_USART1_BRR_DIV_Mantissa
#define CH32V_UART6_BRR_DIV_Mantissa_MASK CH32V_USART1_BRR_DIV_Mantissa_MASK
#define CH32V_UART6_BRR_DIV_Fraction CH32V_USART1_BRR_DIV_Fraction
#define CH32V_UART6_BRR_DIV_Fraction_MASK CH32V_USART1_BRR_DIV_Fraction_MASK
#define CH32V_UART6_CTLR1_OFFSET  CH32V_USART1_CTLR1_OFFSET
#define CH32V_UART6_CTLR1         CH32V_USART1_CTLR1
#define CH32V_UART6_CTLR1_UE      CH32V_USART1_CTLR1_UE
#define CH32V_UART6_CTLR1_M       CH32V_USART1_CTLR1_M
#define CH32V_UART6_CTLR1_WAKE    CH32V_USART1_CTLR1_WAKE
#define CH32V_UART6_CTLR1_PCE     CH32V_USART1_CTLR1_PCE
#define CH32V_UART6_CTLR1_PS      CH32V_USART1_CTLR1_PS
#define CH32V_UART6_CTLR1_PEIE    CH32V_USART1_CTLR1_PEIE
#define CH32V_UART6_CTLR1_TXEIE   CH32V_USART1_CTLR1_TXEIE
#define CH32V_UART6_CTLR1_TCIE    CH32V_USART1_CTLR1_TCIE
#define CH32V_UART6_CTLR1_RXNEIE  CH32V_USART1_CTLR1_RXNEIE
#define CH32V_UART6_CTLR1_IDLEIE  CH32V_USART1_CTLR1_IDLEIE
#define CH32V_UART6_CTLR1_TE      CH32V_USART1_CTLR1_TE
#define CH32V_UART6_CTLR1_RE      CH32V_USART1_CTLR1_RE
#define CH32V_UART6_CTLR1_RWU     CH32V_USART1_CTLR1_RWU
#define CH32V_UART6_CTLR1_SBK     CH32V_USART1_CTLR1_SBK
#define CH32V_UART6_CTLR2_OFFSET  CH32V_USART1_CTLR2_OFFSET
#define CH32V_UART6_CTLR2         CH32V_USART1_CTLR2
#define CH32V_UART6_CTLR2_LINEN   CH32V_USART1_CTLR2_LINEN
#define CH32V_UART6_CTLR2_STOP    CH32V_USART1_CTLR2_STOP
#define CH32V_UART6_CTLR2_STOP_MASK CH32V_USART1_CTLR2_STOP_MASK
#define CH32V_UART6_CTLR2_CLKEN   CH32V_USART1_CTLR2_CLKEN
#define CH32V_UART6_CTLR2_CPOL    CH32V_USART1_CTLR2_CPOL
#define CH32V_UART6_CTLR2_CPHA    CH32V_USART1_CTLR2_CPHA
#define CH32V_UART6_CTLR2_LBCL    CH32V_USART1_CTLR2_LBCL
#define CH32V_UART6_CTLR2_LBDIE   CH32V_USART1_CTLR2_LBDIE
#define CH32V_UART6_CTLR2_LBDL    CH32V_USART1_CTLR2_LBDL
#define CH32V_UART6_CTLR2_ADD     CH32V_USART1_CTLR2_ADD
#define CH32V_UART6_CTLR2_ADD_MASK CH32V_USART1_CTLR2_ADD_MASK
#define CH32V_UART6_CTLR3_OFFSET  CH32V_USART1_CTLR3_OFFSET
#define CH32V_UART6_CTLR3         CH32V_USART1_CTLR3
#define CH32V_UART6_CTLR3_CTSIE   CH32V_USART1_CTLR3_CTSIE
#define CH32V_UART6_CTLR3_CTSE    CH32V_USART1_CTLR3_CTSE
#define CH32V_UART6_CTLR3_RTSE    CH32V_USART1_CTLR3_RTSE
#define CH32V_UART6_CTLR3_DMAT    CH32V_USART1_CTLR3_DMAT
#define CH32V_UART6_CTLR3_DMAR    CH32V_USART1_CTLR3_DMAR
#define CH32V_UART6_CTLR3_SCEN    CH32V_USART1_CTLR3_SCEN
#define CH32V_UART6_CTLR3_NACK    CH32V_USART1_CTLR3_NACK
#define CH32V_UART6_CTLR3_HDSEL   CH32V_USART1_CTLR3_HDSEL
#define CH32V_UART6_CTLR3_IRLP    CH32V_USART1_CTLR3_IRLP
#define CH32V_UART6_CTLR3_IREN    CH32V_USART1_CTLR3_IREN
#define CH32V_UART6_CTLR3_EIE     CH32V_USART1_CTLR3_EIE
#define CH32V_UART6_GPR_OFFSET    CH32V_USART1_GPR_OFFSET
#define CH32V_UART6_GPR           CH32V_USART1_GPR
#define CH32V_UART6_GPR_GT        CH32V_USART1_GPR_GT
#define CH32V_UART6_GPR_GT_MASK   CH32V_USART1_GPR_GT_MASK
#define CH32V_UART6_GPR_PSC       CH32V_USART1_GPR_PSC
#define CH32V_UART6_GPR_PSC_MASK  CH32V_USART1_GPR_PSC_MASK

/* No registers defined for peripheral UART7. Using those of USART1. */
#define CH32V_UART7_BASE          0x40001c00
#define CH32V_UART7_STATR_OFFSET  CH32V_USART1_STATR_OFFSET
#define CH32V_UART7_STATR         CH32V_USART1_STATR
#define CH32V_UART7_STATR_CTS     CH32V_USART1_STATR_CTS
#define CH32V_UART7_STATR_LBD     CH32V_USART1_STATR_LBD
#define CH32V_UART7_STATR_TXE     CH32V_USART1_STATR_TXE
#define CH32V_UART7_STATR_TC      CH32V_USART1_STATR_TC
#define CH32V_UART7_STATR_RXNE    CH32V_USART1_STATR_RXNE
#define CH32V_UART7_STATR_IDLE    CH32V_USART1_STATR_IDLE
#define CH32V_UART7_STATR_ORE     CH32V_USART1_STATR_ORE
#define CH32V_UART7_STATR_NE      CH32V_USART1_STATR_NE
#define CH32V_UART7_STATR_FE      CH32V_USART1_STATR_FE
#define CH32V_UART7_STATR_PE      CH32V_USART1_STATR_PE
#define CH32V_UART7_DATAR_OFFSET  CH32V_USART1_DATAR_OFFSET
#define CH32V_UART7_DATAR         CH32V_USART1_DATAR
#define CH32V_UART7_DATAR_DR      CH32V_USART1_DATAR_DR
#define CH32V_UART7_DATAR_DR_MASK CH32V_USART1_DATAR_DR_MASK
#define CH32V_UART7_BRR_OFFSET    CH32V_USART1_BRR_OFFSET
#define CH32V_UART7_BRR           CH32V_USART1_BRR
#define CH32V_UART7_BRR_DIV_Mantissa CH32V_USART1_BRR_DIV_Mantissa
#define CH32V_UART7_BRR_DIV_Mantissa_MASK CH32V_USART1_BRR_DIV_Mantissa_MASK
#define CH32V_UART7_BRR_DIV_Fraction CH32V_USART1_BRR_DIV_Fraction
#define CH32V_UART7_BRR_DIV_Fraction_MASK CH32V_USART1_BRR_DIV_Fraction_MASK
#define CH32V_UART7_CTLR1_OFFSET  CH32V_USART1_CTLR1_OFFSET
#define CH32V_UART7_CTLR1         CH32V_USART1_CTLR1
#define CH32V_UART7_CTLR1_UE      CH32V_USART1_CTLR1_UE
#define CH32V_UART7_CTLR1_M       CH32V_USART1_CTLR1_M
#define CH32V_UART7_CTLR1_WAKE    CH32V_USART1_CTLR1_WAKE
#define CH32V_UART7_CTLR1_PCE     CH32V_USART1_CTLR1_PCE
#define CH32V_UART7_CTLR1_PS      CH32V_USART1_CTLR1_PS
#define CH32V_UART7_CTLR1_PEIE    CH32V_USART1_CTLR1_PEIE
#define CH32V_UART7_CTLR1_TXEIE   CH32V_USART1_CTLR1_TXEIE
#define CH32V_UART7_CTLR1_TCIE    CH32V_USART1_CTLR1_TCIE
#define CH32V_UART7_CTLR1_RXNEIE  CH32V_USART1_CTLR1_RXNEIE
#define CH32V_UART7_CTLR1_IDLEIE  CH32V_USART1_CTLR1_IDLEIE
#define CH32V_UART7_CTLR1_TE      CH32V_USART1_CTLR1_TE
#define CH32V_UART7_CTLR1_RE      CH32V_USART1_CTLR1_RE
#define CH32V_UART7_CTLR1_RWU     CH32V_USART1_CTLR1_RWU
#define CH32V_UART7_CTLR1_SBK     CH32V_USART1_CTLR1_SBK
#define CH32V_UART7_CTLR2_OFFSET  CH32V_USART1_CTLR2_OFFSET
#define CH32V_UART7_CTLR2         CH32V_USART1_CTLR2
#define CH32V_UART7_CTLR2_LINEN   CH32V_USART1_CTLR2_LINEN
#define CH32V_UART7_CTLR2_STOP    CH32V_USART1_CTLR2_STOP
#define CH32V_UART7_CTLR2_STOP_MASK CH32V_USART1_CTLR2_STOP_MASK
#define CH32V_UART7_CTLR2_CLKEN   CH32V_USART1_CTLR2_CLKEN
#define CH32V_UART7_CTLR2_CPOL    CH32V_USART1_CTLR2_CPOL
#define CH32V_UART7_CTLR2_CPHA    CH32V_USART1_CTLR2_CPHA
#define CH32V_UART7_CTLR2_LBCL    CH32V_USART1_CTLR2_LBCL
#define CH32V_UART7_CTLR2_LBDIE   CH32V_USART1_CTLR2_LBDIE
#define CH32V_UART7_CTLR2_LBDL    CH32V_USART1_CTLR2_LBDL
#define CH32V_UART7_CTLR2_ADD     CH32V_USART1_CTLR2_ADD
#define CH32V_UART7_CTLR2_ADD_MASK CH32V_USART1_CTLR2_ADD_MASK
#define CH32V_UART7_CTLR3_OFFSET  CH32V_USART1_CTLR3_OFFSET
#define CH32V_UART7_CTLR3         CH32V_USART1_CTLR3
#define CH32V_UART7_CTLR3_CTSIE   CH32V_USART1_CTLR3_CTSIE
#define CH32V_UART7_CTLR3_CTSE    CH32V_USART1_CTLR3_CTSE
#define CH32V_UART7_CTLR3_RTSE    CH32V_USART1_CTLR3_RTSE
#define CH32V_UART7_CTLR3_DMAT    CH32V_USART1_CTLR3_DMAT
#define CH32V_UART7_CTLR3_DMAR    CH32V_USART1_CTLR3_DMAR
#define CH32V_UART7_CTLR3_SCEN    CH32V_USART1_CTLR3_SCEN
#define CH32V_UART7_CTLR3_NACK    CH32V_USART1_CTLR3_NACK
#define CH32V_UART7_CTLR3_HDSEL   CH32V_USART1_CTLR3_HDSEL
#define CH32V_UART7_CTLR3_IRLP    CH32V_USART1_CTLR3_IRLP
#define CH32V_UART7_CTLR3_IREN    CH32V_USART1_CTLR3_IREN
#define CH32V_UART7_CTLR3_EIE     CH32V_USART1_CTLR3_EIE
#define CH32V_UART7_GPR_OFFSET    CH32V_USART1_GPR_OFFSET
#define CH32V_UART7_GPR           CH32V_USART1_GPR
#define CH32V_UART7_GPR_GT        CH32V_USART1_GPR_GT
#define CH32V_UART7_GPR_GT_MASK   CH32V_USART1_GPR_GT_MASK
#define CH32V_UART7_GPR_PSC       CH32V_USART1_GPR_PSC
#define CH32V_UART7_GPR_PSC_MASK  CH32V_USART1_GPR_PSC_MASK

/* No registers defined for peripheral UART8. Using those of USART1. */
#define CH32V_UART8_BASE          0x40002000
#define CH32V_UART8_STATR_OFFSET  CH32V_USART1_STATR_OFFSET
#define CH32V_UART8_STATR         CH32V_USART1_STATR
#define CH32V_UART8_STATR_CTS     CH32V_USART1_STATR_CTS
#define CH32V_UART8_STATR_LBD     CH32V_USART1_STATR_LBD
#define CH32V_UART8_STATR_TXE     CH32V_USART1_STATR_TXE
#define CH32V_UART8_STATR_TC      CH32V_USART1_STATR_TC
#define CH32V_UART8_STATR_RXNE    CH32V_USART1_STATR_RXNE
#define CH32V_UART8_STATR_IDLE    CH32V_USART1_STATR_IDLE
#define CH32V_UART8_STATR_ORE     CH32V_USART1_STATR_ORE
#define CH32V_UART8_STATR_NE      CH32V_USART1_STATR_NE
#define CH32V_UART8_STATR_FE      CH32V_USART1_STATR_FE
#define CH32V_UART8_STATR_PE      CH32V_USART1_STATR_PE
#define CH32V_UART8_DATAR_OFFSET  CH32V_USART1_DATAR_OFFSET
#define CH32V_UART8_DATAR         CH32V_USART1_DATAR
#define CH32V_UART8_DATAR_DR      CH32V_USART1_DATAR_DR
#define CH32V_UART8_DATAR_DR_MASK CH32V_USART1_DATAR_DR_MASK
#define CH32V_UART8_BRR_OFFSET    CH32V_USART1_BRR_OFFSET
#define CH32V_UART8_BRR           CH32V_USART1_BRR
#define CH32V_UART8_BRR_DIV_Mantissa CH32V_USART1_BRR_DIV_Mantissa
#define CH32V_UART8_BRR_DIV_Mantissa_MASK CH32V_USART1_BRR_DIV_Mantissa_MASK
#define CH32V_UART8_BRR_DIV_Fraction CH32V_USART1_BRR_DIV_Fraction
#define CH32V_UART8_BRR_DIV_Fraction_MASK CH32V_USART1_BRR_DIV_Fraction_MASK
#define CH32V_UART8_CTLR1_OFFSET  CH32V_USART1_CTLR1_OFFSET
#define CH32V_UART8_CTLR1         CH32V_USART1_CTLR1
#define CH32V_UART8_CTLR1_UE      CH32V_USART1_CTLR1_UE
#define CH32V_UART8_CTLR1_M       CH32V_USART1_CTLR1_M
#define CH32V_UART8_CTLR1_WAKE    CH32V_USART1_CTLR1_WAKE
#define CH32V_UART8_CTLR1_PCE     CH32V_USART1_CTLR1_PCE
#define CH32V_UART8_CTLR1_PS      CH32V_USART1_CTLR1_PS
#define CH32V_UART8_CTLR1_PEIE    CH32V_USART1_CTLR1_PEIE
#define CH32V_UART8_CTLR1_TXEIE   CH32V_USART1_CTLR1_TXEIE
#define CH32V_UART8_CTLR1_TCIE    CH32V_USART1_CTLR1_TCIE
#define CH32V_UART8_CTLR1_RXNEIE  CH32V_USART1_CTLR1_RXNEIE
#define CH32V_UART8_CTLR1_IDLEIE  CH32V_USART1_CTLR1_IDLEIE
#define CH32V_UART8_CTLR1_TE      CH32V_USART1_CTLR1_TE
#define CH32V_UART8_CTLR1_RE      CH32V_USART1_CTLR1_RE
#define CH32V_UART8_CTLR1_RWU     CH32V_USART1_CTLR1_RWU
#define CH32V_UART8_CTLR1_SBK     CH32V_USART1_CTLR1_SBK
#define CH32V_UART8_CTLR2_OFFSET  CH32V_USART1_CTLR2_OFFSET
#define CH32V_UART8_CTLR2         CH32V_USART1_CTLR2
#define CH32V_UART8_CTLR2_LINEN   CH32V_USART1_CTLR2_LINEN
#define CH32V_UART8_CTLR2_STOP    CH32V_USART1_CTLR2_STOP
#define CH32V_UART8_CTLR2_STOP_MASK CH32V_USART1_CTLR2_STOP_MASK
#define CH32V_UART8_CTLR2_CLKEN   CH32V_USART1_CTLR2_CLKEN
#define CH32V_UART8_CTLR2_CPOL    CH32V_USART1_CTLR2_CPOL
#define CH32V_UART8_CTLR2_CPHA    CH32V_USART1_CTLR2_CPHA
#define CH32V_UART8_CTLR2_LBCL    CH32V_USART1_CTLR2_LBCL
#define CH32V_UART8_CTLR2_LBDIE   CH32V_USART1_CTLR2_LBDIE
#define CH32V_UART8_CTLR2_LBDL    CH32V_USART1_CTLR2_LBDL
#define CH32V_UART8_CTLR2_ADD     CH32V_USART1_CTLR2_ADD
#define CH32V_UART8_CTLR2_ADD_MASK CH32V_USART1_CTLR2_ADD_MASK
#define CH32V_UART8_CTLR3_OFFSET  CH32V_USART1_CTLR3_OFFSET
#define CH32V_UART8_CTLR3         CH32V_USART1_CTLR3
#define CH32V_UART8_CTLR3_CTSIE   CH32V_USART1_CTLR3_CTSIE
#define CH32V_UART8_CTLR3_CTSE    CH32V_USART1_CTLR3_CTSE
#define CH32V_UART8_CTLR3_RTSE    CH32V_USART1_CTLR3_RTSE
#define CH32V_UART8_CTLR3_DMAT    CH32V_USART1_CTLR3_DMAT
#define CH32V_UART8_CTLR3_DMAR    CH32V_USART1_CTLR3_DMAR
#define CH32V_UART8_CTLR3_SCEN    CH32V_USART1_CTLR3_SCEN
#define CH32V_UART8_CTLR3_NACK    CH32V_USART1_CTLR3_NACK
#define CH32V_UART8_CTLR3_HDSEL   CH32V_USART1_CTLR3_HDSEL
#define CH32V_UART8_CTLR3_IRLP    CH32V_USART1_CTLR3_IRLP
#define CH32V_UART8_CTLR3_IREN    CH32V_USART1_CTLR3_IREN
#define CH32V_UART8_CTLR3_EIE     CH32V_USART1_CTLR3_EIE
#define CH32V_UART8_GPR_OFFSET    CH32V_USART1_GPR_OFFSET
#define CH32V_UART8_GPR           CH32V_USART1_GPR
#define CH32V_UART8_GPR_GT        CH32V_USART1_GPR_GT
#define CH32V_UART8_GPR_GT_MASK   CH32V_USART1_GPR_GT_MASK
#define CH32V_UART8_GPR_PSC       CH32V_USART1_GPR_PSC
#define CH32V_UART8_GPR_PSC_MASK  CH32V_USART1_GPR_PSC_MASK

/* ADC1 - Analog to digital converter */
#define CH32V_ADC1_BASE           0x40012400
#define CH32V_ADC1_STATR_OFFSET   0x0000
#define CH32V_ADC1_STATR          (CH32V_ADC1_BASE + CH32V_ADC1_STATR_OFFSET)
#define CH32V_ADC1_STATR_STRT     (1 <<  4) /* 10: Regular channel start flag */
#define CH32V_ADC1_STATR_JSTRT    (1 <<  3) /* 08: Injected channel start flag */
#define CH32V_ADC1_STATR_JEOC     (1 <<  2) /* 04: Injected channel end of conversion */
#define CH32V_ADC1_STATR_EOC      (1 <<  1) /* 02: Regular channel end of conversion */
#define CH32V_ADC1_STATR_AWD      (1 <<  0) /* 01: Analog watchdog flag */
#define CH32V_ADC1_CTLR1_OFFSET   0x0004
#define CH32V_ADC1_CTLR1          (CH32V_ADC1_BASE + CH32V_ADC1_CTLR1_OFFSET)
#define CH32V_ADC1_CTLR1_PGA      (2 << 27) /* 8000000: ADC_PGA */
#define CH32V_ADC1_CTLR1_PGA_MASK      (0x03)
#define CH32V_ADC1_CTLR1_BUFEN    (1 << 26) /* 4000000: TKEY_BUF_Enable */
#define CH32V_ADC1_CTLR1_TKITUNE  (1 << 25) /* 2000000: TKEY_I enable */
#define CH32V_ADC1_CTLR1_TKEYEN   (1 << 24) /* 1000000: TKEY enable, including TKEY_F and TKEY_V */
#define CH32V_ADC1_CTLR1_AWDEN    (1 << 23) /* 800000: Analog watchdog enable on regular channels */
#define CH32V_ADC1_CTLR1_JAWDEN   (1 << 22) /* 400000: Analog watchdog enable on injected channels */
#define CH32V_ADC1_CTLR1_DUALMOD  (4 << 16) /* 10000: Dual mode selection */
#define CH32V_ADC1_CTLR1_DUALMOD_MASK  (0x0f)
#define CH32V_ADC1_CTLR1_DISCNUM  (3 << 13) /* 2000: Discontinuous mode channel count */
#define CH32V_ADC1_CTLR1_DISCNUM_MASK  (0x07)
#define CH32V_ADC1_CTLR1_JDISCEN  (1 << 12) /* 1000: Discontinuous mode on injected channels */
#define CH32V_ADC1_CTLR1_DISCEN   (1 << 11) /* 800: Discontinuous mode on regular channels */
#define CH32V_ADC1_CTLR1_JAUTO    (1 << 10) /* 400: Automatic injected group conversion */
#define CH32V_ADC1_CTLR1_AWDSGL   (1 <<  9) /* 200: Enable the watchdog on a single channel in scan mode */
#define CH32V_ADC1_CTLR1_SCAN     (1 <<  8) /* 100: Scan mode enable */
#define CH32V_ADC1_CTLR1_JEOCIE   (1 <<  7) /* 80: Interrupt enable for injected channels */
#define CH32V_ADC1_CTLR1_AWDIE    (1 <<  6) /* 40: Analog watchdog interrupt enable */
#define CH32V_ADC1_CTLR1_EOCIE    (1 <<  5) /* 20: Interrupt enable for EOC */
#define CH32V_ADC1_CTLR1_AWDCH    (5 <<  0) /* 01: Analog watchdog channel select bits */
#define CH32V_ADC1_CTLR1_AWDCH_MASK    (0x1f)
#define CH32V_ADC1_CTLR2_OFFSET   0x0008
#define CH32V_ADC1_CTLR2          (CH32V_ADC1_BASE + CH32V_ADC1_CTLR2_OFFSET)
#define CH32V_ADC1_CTLR2_TSVREFE  (1 << 23) /* 800000: Temperature sensor and VREFINT enable */
#define CH32V_ADC1_CTLR2_SWSTART  (1 << 22) /* 400000: Start conversion of regular channels */
#define CH32V_ADC1_CTLR2_JSWSTART (1 << 21) /* 200000: Start conversion of injected channels */
#define CH32V_ADC1_CTLR2_EXTTRIG  (1 << 20) /* 100000: External trigger conversion mode for regular channels */
#define CH32V_ADC1_CTLR2_EXTSEL   (3 << 17) /* 20000: External event select for regular group */
#define CH32V_ADC1_CTLR2_EXTSEL_MASK   (0x07)
#define CH32V_ADC1_CTLR2_JEXTTRIG (1 << 15) /* 8000: External trigger conversion mode for injected channels */
#define CH32V_ADC1_CTLR2_JEXTSEL  (3 << 12) /* 1000: External event select for injected group */
#define CH32V_ADC1_CTLR2_JEXTSEL_MASK  (0x07)
#define CH32V_ADC1_CTLR2_ALIGN    (1 << 11) /* 800: Data alignment */
#define CH32V_ADC1_CTLR2_DMA      (1 <<  8) /* 100: Direct memory access mode */
#define CH32V_ADC1_CTLR2_RSTCAL   (1 <<  3) /* 08: Reset calibration */
#define CH32V_ADC1_CTLR2_CAL      (1 <<  2) /* 04: A/D calibration */
#define CH32V_ADC1_CTLR2_CONT     (1 <<  1) /* 02: Continuous conversion */
#define CH32V_ADC1_CTLR2_ADON     (1 <<  0) /* 01: A/D converter ON / OFF */
#define CH32V_ADC1_SAMPTR1_CHARGE1_OFFSET 0x000c
#define CH32V_ADC1_SAMPTR1_CHARGE1 (CH32V_ADC1_BASE + CH32V_ADC1_SAMPTR1_CHARGE1_OFFSET)
#define CH32V_ADC1_SAMPTR1_CHARGE1_SMP10_TKCG10 (3 <<  0) /* 01: Channel 10 sample time selection */
#define CH32V_ADC1_SAMPTR1_CHARGE1_SMP10_TKCG10_MASK (0x07)
#define CH32V_ADC1_SAMPTR1_CHARGE1_SMP11_TKCG11 (3 <<  3) /* 08: Channel 11 sample time selection */
#define CH32V_ADC1_SAMPTR1_CHARGE1_SMP11_TKCG11_MASK (0x07)
#define CH32V_ADC1_SAMPTR1_CHARGE1_SMP12_TKCG12 (3 <<  6) /* 40: Channel 12 sample time selection */
#define CH32V_ADC1_SAMPTR1_CHARGE1_SMP12_TKCG12_MASK (0x07)
#define CH32V_ADC1_SAMPTR1_CHARGE1_SMP13_TKCG13 (3 <<  9) /* 200: Channel 13 sample time selection */
#define CH32V_ADC1_SAMPTR1_CHARGE1_SMP13_TKCG13_MASK (0x07)
#define CH32V_ADC1_SAMPTR1_CHARGE1_SMP14_TKCG14 (3 << 12) /* 1000: Channel 14 sample time selection */
#define CH32V_ADC1_SAMPTR1_CHARGE1_SMP14_TKCG14_MASK (0x07)
#define CH32V_ADC1_SAMPTR1_CHARGE1_SMP15_TKCG15 (3 << 15) /* 8000: Channel 15 sample time selection */
#define CH32V_ADC1_SAMPTR1_CHARGE1_SMP15_TKCG15_MASK (0x07)
#define CH32V_ADC1_SAMPTR1_CHARGE1_SMP16_TKCG16 (3 << 18) /* 40000: Channel 16 sample time selection */
#define CH32V_ADC1_SAMPTR1_CHARGE1_SMP16_TKCG16_MASK (0x07)
#define CH32V_ADC1_SAMPTR1_CHARGE1_SMP17_TKCG17 (3 << 21) /* 200000: Channel 17 sample time selection */
#define CH32V_ADC1_SAMPTR1_CHARGE1_SMP17_TKCG17_MASK (0x07)
#define CH32V_ADC1_SAMPTR2_CHARGE2_OFFSET 0x0010
#define CH32V_ADC1_SAMPTR2_CHARGE2 (CH32V_ADC1_BASE + CH32V_ADC1_SAMPTR2_CHARGE2_OFFSET)
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP0_TKCG0 (3 <<  0) /* 01: Channel 0 sample time selection */
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP0_TKCG0_MASK (0x07)
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP1_TKCG1 (3 <<  3) /* 08: Channel 1 sample time selection */
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP1_TKCG1_MASK (0x07)
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP2_TKCG2 (3 <<  6) /* 40: Channel 2 sample time selection */
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP2_TKCG2_MASK (0x07)
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP3_TKCG3 (3 <<  9) /* 200: Channel 3 sample time selection */
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP3_TKCG3_MASK (0x07)
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP4_TKCG4 (3 << 12) /* 1000: Channel 4 sample time selection */
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP4_TKCG4_MASK (0x07)
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP5_TKCG5 (3 << 15) /* 8000: Channel 5 sample time selection */
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP5_TKCG5_MASK (0x07)
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP6_TKCG6 (3 << 18) /* 40000: Channel 6 sample time selection */
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP6_TKCG6_MASK (0x07)
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP7_TKCG7 (3 << 21) /* 200000: Channel 7 sample time selection */
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP7_TKCG7_MASK (0x07)
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP8_TKCG8 (3 << 24) /* 1000000: Channel 8 sample time selection */
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP8_TKCG8_MASK (0x07)
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP9_TKCG9 (3 << 27) /* 8000000: Channel 9 sample time selection */
#define CH32V_ADC1_SAMPTR2_CHARGE2_SMP9_TKCG9_MASK (0x07)
#define CH32V_ADC1_IOFR1_OFFSET   0x0014
#define CH32V_ADC1_IOFR1          (CH32V_ADC1_BASE + CH32V_ADC1_IOFR1_OFFSET)
#define CH32V_ADC1_IOFR1_JOFFSET1 (12 <<  0) /* 01: Data offset for injected channel x */
#define CH32V_ADC1_IOFR1_JOFFSET1_MASK (0xfff)
#define CH32V_ADC1_IOFR2_OFFSET   0x0018
#define CH32V_ADC1_IOFR2          (CH32V_ADC1_BASE + CH32V_ADC1_IOFR2_OFFSET)
#define CH32V_ADC1_IOFR2_JOFFSET2 (12 <<  0) /* 01: Data offset for injected channel x */
#define CH32V_ADC1_IOFR2_JOFFSET2_MASK (0xfff)
#define CH32V_ADC1_IOFR3_OFFSET   0x001c
#define CH32V_ADC1_IOFR3          (CH32V_ADC1_BASE + CH32V_ADC1_IOFR3_OFFSET)
#define CH32V_ADC1_IOFR3_JOFFSET3 (12 <<  0) /* 01: Data offset for injected channel x */
#define CH32V_ADC1_IOFR3_JOFFSET3_MASK (0xfff)
#define CH32V_ADC1_IOFR4_OFFSET   0x0020
#define CH32V_ADC1_IOFR4          (CH32V_ADC1_BASE + CH32V_ADC1_IOFR4_OFFSET)
#define CH32V_ADC1_IOFR4_JOFFSET4 (12 <<  0) /* 01: Data offset for injected channel x */
#define CH32V_ADC1_IOFR4_JOFFSET4_MASK (0xfff)
#define CH32V_ADC1_WDHTR_OFFSET   0x0024
#define CH32V_ADC1_WDHTR          (CH32V_ADC1_BASE + CH32V_ADC1_WDHTR_OFFSET)
#define CH32V_ADC1_WDHTR_HT       (12 <<  0) /* 01: Analog watchdog higher threshold */
#define CH32V_ADC1_WDHTR_HT_MASK       (0xfff)
#define CH32V_ADC1_WDLTR_OFFSET   0x0028
#define CH32V_ADC1_WDLTR          (CH32V_ADC1_BASE + CH32V_ADC1_WDLTR_OFFSET)
#define CH32V_ADC1_WDLTR_LT       (12 <<  0) /* 01: Analog watchdog lower threshold */
#define CH32V_ADC1_WDLTR_LT_MASK       (0xfff)
#define CH32V_ADC1_RSQR1_OFFSET   0x002c
#define CH32V_ADC1_RSQR1          (CH32V_ADC1_BASE + CH32V_ADC1_RSQR1_OFFSET)
#define CH32V_ADC1_RSQR1_L        (4 << 20) /* 100000: Regular channel sequence length */
#define CH32V_ADC1_RSQR1_L_MASK        (0x0f)
#define CH32V_ADC1_RSQR1_SQ16     (5 << 15) /* 8000: 16th conversion in regular sequence */
#define CH32V_ADC1_RSQR1_SQ16_MASK     (0x1f)
#define CH32V_ADC1_RSQR1_SQ15     (5 << 10) /* 400: 15th conversion in regular sequence */
#define CH32V_ADC1_RSQR1_SQ15_MASK     (0x1f)
#define CH32V_ADC1_RSQR1_SQ14     (5 <<  5) /* 20: 14th conversion in regular sequence */
#define CH32V_ADC1_RSQR1_SQ14_MASK     (0x1f)
#define CH32V_ADC1_RSQR1_SQ13     (5 <<  0) /* 01: 13th conversion in regular sequence */
#define CH32V_ADC1_RSQR1_SQ13_MASK     (0x1f)
#define CH32V_ADC1_RSQR2_OFFSET   0x0030
#define CH32V_ADC1_RSQR2          (CH32V_ADC1_BASE + CH32V_ADC1_RSQR2_OFFSET)
#define CH32V_ADC1_RSQR2_SQ12     (5 << 25) /* 2000000: 12th conversion in regular sequence */
#define CH32V_ADC1_RSQR2_SQ12_MASK     (0x1f)
#define CH32V_ADC1_RSQR2_SQ11     (5 << 20) /* 100000: 11th conversion in regular sequence */
#define CH32V_ADC1_RSQR2_SQ11_MASK     (0x1f)
#define CH32V_ADC1_RSQR2_SQ10     (5 << 15) /* 8000: 10th conversion in regular sequence */
#define CH32V_ADC1_RSQR2_SQ10_MASK     (0x1f)
#define CH32V_ADC1_RSQR2_SQ9      (5 << 10) /* 400: 9th conversion in regular sequence */
#define CH32V_ADC1_RSQR2_SQ9_MASK      (0x1f)
#define CH32V_ADC1_RSQR2_SQ8      (5 <<  5) /* 20: 8th conversion in regular sequence */
#define CH32V_ADC1_RSQR2_SQ8_MASK      (0x1f)
#define CH32V_ADC1_RSQR2_SQ7      (5 <<  0) /* 01: 7th conversion in regular sequence */
#define CH32V_ADC1_RSQR2_SQ7_MASK      (0x1f)
#define CH32V_ADC1_RSQR3__CHANNEL_OFFSET 0x0034
#define CH32V_ADC1_RSQR3__CHANNEL (CH32V_ADC1_BASE + CH32V_ADC1_RSQR3__CHANNEL_OFFSET)
#define CH32V_ADC1_RSQR3__CHANNEL_SQ6 (5 << 25) /* 2000000: 6th conversion in regular sequence */
#define CH32V_ADC1_RSQR3__CHANNEL_SQ6_MASK (0x1f)
#define CH32V_ADC1_RSQR3__CHANNEL_SQ5 (5 << 20) /* 100000: 5th conversion in regular sequence */
#define CH32V_ADC1_RSQR3__CHANNEL_SQ5_MASK (0x1f)
#define CH32V_ADC1_RSQR3__CHANNEL_SQ4 (5 << 15) /* 8000: 4th conversion in regular sequence */
#define CH32V_ADC1_RSQR3__CHANNEL_SQ4_MASK (0x1f)
#define CH32V_ADC1_RSQR3__CHANNEL_SQ3 (5 << 10) /* 400: 3rd conversion in regular sequence */
#define CH32V_ADC1_RSQR3__CHANNEL_SQ3_MASK (0x1f)
#define CH32V_ADC1_RSQR3__CHANNEL_SQ2 (5 <<  5) /* 20: 2nd conversion in regular sequence */
#define CH32V_ADC1_RSQR3__CHANNEL_SQ2_MASK (0x1f)
#define CH32V_ADC1_RSQR3__CHANNEL_SQ1__CHSEL (5 <<  0) /* 01: 1st conversion in regular sequence;TKDY_V channel select */
#define CH32V_ADC1_RSQR3__CHANNEL_SQ1__CHSEL_MASK (0x1f)
#define CH32V_ADC1_ISQR_OFFSET    0x0038
#define CH32V_ADC1_ISQR           (CH32V_ADC1_BASE + CH32V_ADC1_ISQR_OFFSET)
#define CH32V_ADC1_ISQR_JL        (2 << 20) /* 100000: Injected sequence length */
#define CH32V_ADC1_ISQR_JL_MASK        (0x03)
#define CH32V_ADC1_ISQR_JSQ4      (5 << 15) /* 8000: 4th conversion in injected sequence */
#define CH32V_ADC1_ISQR_JSQ4_MASK      (0x1f)
#define CH32V_ADC1_ISQR_JSQ3      (5 << 10) /* 400: 3rd conversion in injected sequence */
#define CH32V_ADC1_ISQR_JSQ3_MASK      (0x1f)
#define CH32V_ADC1_ISQR_JSQ2      (5 <<  5) /* 20: 2nd conversion in injected sequence */
#define CH32V_ADC1_ISQR_JSQ2_MASK      (0x1f)
#define CH32V_ADC1_ISQR_JSQ1      (5 <<  0) /* 01: 1st conversion in injected sequence */
#define CH32V_ADC1_ISQR_JSQ1_MASK      (0x1f)
#define CH32V_ADC1_IDATAR1_CHGOFFSET_OFFSET 0x003c
#define CH32V_ADC1_IDATAR1_CHGOFFSET (CH32V_ADC1_BASE + CH32V_ADC1_IDATAR1_CHGOFFSET_OFFSET)
#define CH32V_ADC1_IDATAR1_CHGOFFSET_IDATA0_7_TKCGOFFSET (8 <<  0) /* 01: Injected data_Touch key charge data offset for injected channel x */
#define CH32V_ADC1_IDATAR1_CHGOFFSET_IDATA0_7_TKCGOFFSET_MASK (0xff)
#define CH32V_ADC1_IDATAR1_CHGOFFSET_IDATA8_15 (8 <<  8) /* 100: Injected data */
#define CH32V_ADC1_IDATAR1_CHGOFFSET_IDATA8_15_MASK (0xff)
#define CH32V_ADC1_IDATAR2_OFFSET 0x0040
#define CH32V_ADC1_IDATAR2        (CH32V_ADC1_BASE + CH32V_ADC1_IDATAR2_OFFSET)
#define CH32V_ADC1_IDATAR2_JDATA  (16 <<  0) /* 01: Injected data */
#define CH32V_ADC1_IDATAR2_JDATA_MASK  (0xffff)
#define CH32V_ADC1_IDATAR3_OFFSET 0x0044
#define CH32V_ADC1_IDATAR3        (CH32V_ADC1_BASE + CH32V_ADC1_IDATAR3_OFFSET)
#define CH32V_ADC1_IDATAR3_JDATA  (16 <<  0) /* 01: Injected data */
#define CH32V_ADC1_IDATAR3_JDATA_MASK  (0xffff)
#define CH32V_ADC1_IDATAR4_OFFSET 0x0048
#define CH32V_ADC1_IDATAR4        (CH32V_ADC1_BASE + CH32V_ADC1_IDATAR4_OFFSET)
#define CH32V_ADC1_IDATAR4_JDATA  (16 <<  0) /* 01: Injected data */
#define CH32V_ADC1_IDATAR4_JDATA_MASK  (0xffff)
#define CH32V_ADC1_RDATAR_DR_ACT_DCG_OFFSET 0x004c
#define CH32V_ADC1_RDATAR_DR_ACT_DCG (CH32V_ADC1_BASE + CH32V_ADC1_RDATAR_DR_ACT_DCG_OFFSET)
#define CH32V_ADC1_RDATAR_DR_ACT_DCG_DATA0_7_TKACT_DCG (8 <<  0) /* 01: Regular data_Touch key start and discharge time register */
#define CH32V_ADC1_RDATAR_DR_ACT_DCG_DATA0_7_TKACT_DCG_MASK (0xff)
#define CH32V_ADC1_RDATAR_DR_ACT_DCG_DATA8_15 (8 <<  8) /* 100: Regular data */
#define CH32V_ADC1_RDATAR_DR_ACT_DCG_DATA8_15_MASK (0xff)

/* ADC2 - Analog to digital converter */
#define CH32V_ADC2_BASE           0x40012800
#define CH32V_ADC2_STATR_OFFSET   0x0000
#define CH32V_ADC2_STATR          (CH32V_ADC2_BASE + CH32V_ADC2_STATR_OFFSET)
#define CH32V_ADC2_STATR_STRT     (1 <<  4) /* 10: Regular channel start flag */
#define CH32V_ADC2_STATR_JSTRT    (1 <<  3) /* 08: Injected channel start flag */
#define CH32V_ADC2_STATR_JEOC     (1 <<  2) /* 04: Injected channel end of conversion */
#define CH32V_ADC2_STATR_EOC      (1 <<  1) /* 02: Regular channel end of conversion */
#define CH32V_ADC2_STATR_AWD      (1 <<  0) /* 01: Analog watchdog flag */
#define CH32V_ADC2_CTLR1_OFFSET   0x0004
#define CH32V_ADC2_CTLR1          (CH32V_ADC2_BASE + CH32V_ADC2_CTLR1_OFFSET)
#define CH32V_ADC2_CTLR1_PGA      (2 << 27) /* 8000000: ADC_PGA */
#define CH32V_ADC2_CTLR1_PGA_MASK      (0x03)
#define CH32V_ADC2_CTLR1_BUFEN    (1 << 26) /* 4000000: TKEY_BUF_Enable */
#define CH32V_ADC2_CTLR1_TKITUNE  (1 << 25) /* 2000000: TKEY_I enable */
#define CH32V_ADC2_CTLR1_TKEYEN   (1 << 24) /* 1000000: TKEY enable, including TKEY_F and TKEY_V */
#define CH32V_ADC2_CTLR1_AWDEN    (1 << 23) /* 800000: Analog watchdog enable on regular channels */
#define CH32V_ADC2_CTLR1_JAWDEN   (1 << 22) /* 400000: Analog watchdog enable on injected channels */
#define CH32V_ADC2_CTLR1_DUALMOD  (4 << 16) /* 10000: Dual mode selection */
#define CH32V_ADC2_CTLR1_DUALMOD_MASK  (0x0f)
#define CH32V_ADC2_CTLR1_DISCNUM  (3 << 13) /* 2000: Discontinuous mode channel count */
#define CH32V_ADC2_CTLR1_DISCNUM_MASK  (0x07)
#define CH32V_ADC2_CTLR1_JDISCEN  (1 << 12) /* 1000: Discontinuous mode on injected channels */
#define CH32V_ADC2_CTLR1_DISCEN   (1 << 11) /* 800: Discontinuous mode on regular channels */
#define CH32V_ADC2_CTLR1_JAUTO    (1 << 10) /* 400: Automatic injected group conversion */
#define CH32V_ADC2_CTLR1_AWDSGL   (1 <<  9) /* 200: Enable the watchdog on a single channel in scan mode */
#define CH32V_ADC2_CTLR1_SCAN     (1 <<  8) /* 100: Scan mode enable */
#define CH32V_ADC2_CTLR1_JEOCIE   (1 <<  7) /* 80: Interrupt enable for injected channels */
#define CH32V_ADC2_CTLR1_AWDIE    (1 <<  6) /* 40: Analog watchdog interrupt enable */
#define CH32V_ADC2_CTLR1_EOCIE    (1 <<  5) /* 20: Interrupt enable for EOC */
#define CH32V_ADC2_CTLR1_AWDCH    (5 <<  0) /* 01: Analog watchdog channel select bits */
#define CH32V_ADC2_CTLR1_AWDCH_MASK    (0x1f)
#define CH32V_ADC2_CTLR2_OFFSET   0x0008
#define CH32V_ADC2_CTLR2          (CH32V_ADC2_BASE + CH32V_ADC2_CTLR2_OFFSET)
#define CH32V_ADC2_CTLR2_TSVREFE  (1 << 23) /* 800000: Temperature sensor and VREFINT enable */
#define CH32V_ADC2_CTLR2_SWSTART  (1 << 22) /* 400000: Start conversion of regular channels */
#define CH32V_ADC2_CTLR2_JSWSTART (1 << 21) /* 200000: Start conversion of injected channels */
#define CH32V_ADC2_CTLR2_EXTTRIG  (1 << 20) /* 100000: External trigger conversion mode for regular channels */
#define CH32V_ADC2_CTLR2_EXTSEL   (3 << 17) /* 20000: External event select for regular group */
#define CH32V_ADC2_CTLR2_EXTSEL_MASK   (0x07)
#define CH32V_ADC2_CTLR2_JEXTTRIG (1 << 15) /* 8000: External trigger conversion mode for injected channels */
#define CH32V_ADC2_CTLR2_JEXTSEL  (3 << 12) /* 1000: External event select for injected group */
#define CH32V_ADC2_CTLR2_JEXTSEL_MASK  (0x07)
#define CH32V_ADC2_CTLR2_ALIGN    (1 << 11) /* 800: Data alignment */
#define CH32V_ADC2_CTLR2_DMA      (1 <<  8) /* 100: Direct memory access mode */
#define CH32V_ADC2_CTLR2_RSTCAL   (1 <<  3) /* 08: Reset calibration */
#define CH32V_ADC2_CTLR2_CAL      (1 <<  2) /* 04: A/D calibration */
#define CH32V_ADC2_CTLR2_CONT     (1 <<  1) /* 02: Continuous conversion */
#define CH32V_ADC2_CTLR2_ADON     (1 <<  0) /* 01: A/D converter ON / OFF */
#define CH32V_ADC2_SAMPTR1_CHARGE1_OFFSET 0x000c
#define CH32V_ADC2_SAMPTR1_CHARGE1 (CH32V_ADC2_BASE + CH32V_ADC2_SAMPTR1_CHARGE1_OFFSET)
#define CH32V_ADC2_SAMPTR1_CHARGE1_SMP10_TKCG10 (3 <<  0) /* 01: Channel 10 sample time selection */
#define CH32V_ADC2_SAMPTR1_CHARGE1_SMP10_TKCG10_MASK (0x07)
#define CH32V_ADC2_SAMPTR1_CHARGE1_SMP11_TKCG11 (3 <<  3) /* 08: Channel 11 sample time selection */
#define CH32V_ADC2_SAMPTR1_CHARGE1_SMP11_TKCG11_MASK (0x07)
#define CH32V_ADC2_SAMPTR1_CHARGE1_SMP12_TKCG12 (3 <<  6) /* 40: Channel 12 sample time selection */
#define CH32V_ADC2_SAMPTR1_CHARGE1_SMP12_TKCG12_MASK (0x07)
#define CH32V_ADC2_SAMPTR1_CHARGE1_SMP13_TKCG13 (3 <<  9) /* 200: Channel 13 sample time selection */
#define CH32V_ADC2_SAMPTR1_CHARGE1_SMP13_TKCG13_MASK (0x07)
#define CH32V_ADC2_SAMPTR1_CHARGE1_SMP14_TKCG14 (3 << 12) /* 1000: Channel 14 sample time selection */
#define CH32V_ADC2_SAMPTR1_CHARGE1_SMP14_TKCG14_MASK (0x07)
#define CH32V_ADC2_SAMPTR1_CHARGE1_SMP15_TKCG15 (3 << 15) /* 8000: Channel 15 sample time selection */
#define CH32V_ADC2_SAMPTR1_CHARGE1_SMP15_TKCG15_MASK (0x07)
#define CH32V_ADC2_SAMPTR1_CHARGE1_SMP16_TKCG16 (3 << 18) /* 40000: Channel 16 sample time selection */
#define CH32V_ADC2_SAMPTR1_CHARGE1_SMP16_TKCG16_MASK (0x07)
#define CH32V_ADC2_SAMPTR1_CHARGE1_SMP17_TKCG17 (3 << 21) /* 200000: Channel 17 sample time selection */
#define CH32V_ADC2_SAMPTR1_CHARGE1_SMP17_TKCG17_MASK (0x07)
#define CH32V_ADC2_SAMPTR2_CHARGE2_OFFSET 0x0010
#define CH32V_ADC2_SAMPTR2_CHARGE2 (CH32V_ADC2_BASE + CH32V_ADC2_SAMPTR2_CHARGE2_OFFSET)
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP0_TKCG0 (3 <<  0) /* 01: Channel 0 sample time selection */
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP0_TKCG0_MASK (0x07)
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP1_TKCG1 (3 <<  3) /* 08: Channel 1 sample time selection */
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP1_TKCG1_MASK (0x07)
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP2_TKCG2 (3 <<  6) /* 40: Channel 2 sample time selection */
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP2_TKCG2_MASK (0x07)
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP3_TKCG3 (3 <<  9) /* 200: Channel 3 sample time selection */
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP3_TKCG3_MASK (0x07)
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP4_TKCG4 (3 << 12) /* 1000: Channel 4 sample time selection */
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP4_TKCG4_MASK (0x07)
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP5_TKCG5 (3 << 15) /* 8000: Channel 5 sample time selection */
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP5_TKCG5_MASK (0x07)
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP6_TKCG6 (3 << 18) /* 40000: Channel 6 sample time selection */
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP6_TKCG6_MASK (0x07)
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP7_TKCG7 (3 << 21) /* 200000: Channel 7 sample time selection */
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP7_TKCG7_MASK (0x07)
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP8_TKCG8 (3 << 24) /* 1000000: Channel 8 sample time selection */
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP8_TKCG8_MASK (0x07)
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP9_TKCG9 (3 << 27) /* 8000000: Channel 9 sample time selection */
#define CH32V_ADC2_SAMPTR2_CHARGE2_SMP9_TKCG9_MASK (0x07)
#define CH32V_ADC2_IOFR1_OFFSET   0x0014
#define CH32V_ADC2_IOFR1          (CH32V_ADC2_BASE + CH32V_ADC2_IOFR1_OFFSET)
#define CH32V_ADC2_IOFR1_JOFFSET1 (12 <<  0) /* 01: Data offset for injected channel x */
#define CH32V_ADC2_IOFR1_JOFFSET1_MASK (0xfff)
#define CH32V_ADC2_IOFR2_OFFSET   0x0018
#define CH32V_ADC2_IOFR2          (CH32V_ADC2_BASE + CH32V_ADC2_IOFR2_OFFSET)
#define CH32V_ADC2_IOFR2_JOFFSET2 (12 <<  0) /* 01: Data offset for injected channel x */
#define CH32V_ADC2_IOFR2_JOFFSET2_MASK (0xfff)
#define CH32V_ADC2_IOFR3_OFFSET   0x001c
#define CH32V_ADC2_IOFR3          (CH32V_ADC2_BASE + CH32V_ADC2_IOFR3_OFFSET)
#define CH32V_ADC2_IOFR3_JOFFSET3 (12 <<  0) /* 01: Data offset for injected channel x */
#define CH32V_ADC2_IOFR3_JOFFSET3_MASK (0xfff)
#define CH32V_ADC2_IOFR4_OFFSET   0x0020
#define CH32V_ADC2_IOFR4          (CH32V_ADC2_BASE + CH32V_ADC2_IOFR4_OFFSET)
#define CH32V_ADC2_IOFR4_JOFFSET4 (12 <<  0) /* 01: Data offset for injected channel x */
#define CH32V_ADC2_IOFR4_JOFFSET4_MASK (0xfff)
#define CH32V_ADC2_WDHTR_OFFSET   0x0024
#define CH32V_ADC2_WDHTR          (CH32V_ADC2_BASE + CH32V_ADC2_WDHTR_OFFSET)
#define CH32V_ADC2_WDHTR_HT       (12 <<  0) /* 01: Analog watchdog higher threshold */
#define CH32V_ADC2_WDHTR_HT_MASK       (0xfff)
#define CH32V_ADC2_WDLTR_OFFSET   0x0028
#define CH32V_ADC2_WDLTR          (CH32V_ADC2_BASE + CH32V_ADC2_WDLTR_OFFSET)
#define CH32V_ADC2_WDLTR_LT       (12 <<  0) /* 01: Analog watchdog lower threshold */
#define CH32V_ADC2_WDLTR_LT_MASK       (0xfff)
#define CH32V_ADC2_RSQR1_OFFSET   0x002c
#define CH32V_ADC2_RSQR1          (CH32V_ADC2_BASE + CH32V_ADC2_RSQR1_OFFSET)
#define CH32V_ADC2_RSQR1_L        (4 << 20) /* 100000: Regular channel sequence length */
#define CH32V_ADC2_RSQR1_L_MASK        (0x0f)
#define CH32V_ADC2_RSQR1_SQ16     (5 << 15) /* 8000: 16th conversion in regular sequence */
#define CH32V_ADC2_RSQR1_SQ16_MASK     (0x1f)
#define CH32V_ADC2_RSQR1_SQ15     (5 << 10) /* 400: 15th conversion in regular sequence */
#define CH32V_ADC2_RSQR1_SQ15_MASK     (0x1f)
#define CH32V_ADC2_RSQR1_SQ14     (5 <<  5) /* 20: 14th conversion in regular sequence */
#define CH32V_ADC2_RSQR1_SQ14_MASK     (0x1f)
#define CH32V_ADC2_RSQR1_SQ13     (5 <<  0) /* 01: 13th conversion in regular sequence */
#define CH32V_ADC2_RSQR1_SQ13_MASK     (0x1f)
#define CH32V_ADC2_RSQR2_OFFSET   0x0030
#define CH32V_ADC2_RSQR2          (CH32V_ADC2_BASE + CH32V_ADC2_RSQR2_OFFSET)
#define CH32V_ADC2_RSQR2_SQ12     (5 << 25) /* 2000000: 12th conversion in regular sequence */
#define CH32V_ADC2_RSQR2_SQ12_MASK     (0x1f)
#define CH32V_ADC2_RSQR2_SQ11     (5 << 20) /* 100000: 11th conversion in regular sequence */
#define CH32V_ADC2_RSQR2_SQ11_MASK     (0x1f)
#define CH32V_ADC2_RSQR2_SQ10     (5 << 15) /* 8000: 10th conversion in regular sequence */
#define CH32V_ADC2_RSQR2_SQ10_MASK     (0x1f)
#define CH32V_ADC2_RSQR2_SQ9      (5 << 10) /* 400: 9th conversion in regular sequence */
#define CH32V_ADC2_RSQR2_SQ9_MASK      (0x1f)
#define CH32V_ADC2_RSQR2_SQ8      (5 <<  5) /* 20: 8th conversion in regular sequence */
#define CH32V_ADC2_RSQR2_SQ8_MASK      (0x1f)
#define CH32V_ADC2_RSQR2_SQ7      (5 <<  0) /* 01: 7th conversion in regular sequence */
#define CH32V_ADC2_RSQR2_SQ7_MASK      (0x1f)
#define CH32V_ADC2_RSQR3__CHANNEL_OFFSET 0x0034
#define CH32V_ADC2_RSQR3__CHANNEL (CH32V_ADC2_BASE + CH32V_ADC2_RSQR3__CHANNEL_OFFSET)
#define CH32V_ADC2_RSQR3__CHANNEL_SQ6 (5 << 25) /* 2000000: 6th conversion in regular sequence */
#define CH32V_ADC2_RSQR3__CHANNEL_SQ6_MASK (0x1f)
#define CH32V_ADC2_RSQR3__CHANNEL_SQ5 (5 << 20) /* 100000: 5th conversion in regular sequence */
#define CH32V_ADC2_RSQR3__CHANNEL_SQ5_MASK (0x1f)
#define CH32V_ADC2_RSQR3__CHANNEL_SQ4 (5 << 15) /* 8000: 4th conversion in regular sequence */
#define CH32V_ADC2_RSQR3__CHANNEL_SQ4_MASK (0x1f)
#define CH32V_ADC2_RSQR3__CHANNEL_SQ3 (5 << 10) /* 400: 3rd conversion in regular sequence */
#define CH32V_ADC2_RSQR3__CHANNEL_SQ3_MASK (0x1f)
#define CH32V_ADC2_RSQR3__CHANNEL_SQ2 (5 <<  5) /* 20: 2nd conversion in regular sequence */
#define CH32V_ADC2_RSQR3__CHANNEL_SQ2_MASK (0x1f)
#define CH32V_ADC2_RSQR3__CHANNEL_SQ1__CHSEL (5 <<  0) /* 01: 1st conversion in regular sequence;TKDY_V channel select */
#define CH32V_ADC2_RSQR3__CHANNEL_SQ1__CHSEL_MASK (0x1f)
#define CH32V_ADC2_ISQR_OFFSET    0x0038
#define CH32V_ADC2_ISQR           (CH32V_ADC2_BASE + CH32V_ADC2_ISQR_OFFSET)
#define CH32V_ADC2_ISQR_JL        (2 << 20) /* 100000: Injected sequence length */
#define CH32V_ADC2_ISQR_JL_MASK        (0x03)
#define CH32V_ADC2_ISQR_JSQ4      (5 << 15) /* 8000: 4th conversion in injected sequence */
#define CH32V_ADC2_ISQR_JSQ4_MASK      (0x1f)
#define CH32V_ADC2_ISQR_JSQ3      (5 << 10) /* 400: 3rd conversion in injected sequence */
#define CH32V_ADC2_ISQR_JSQ3_MASK      (0x1f)
#define CH32V_ADC2_ISQR_JSQ2      (5 <<  5) /* 20: 2nd conversion in injected sequence */
#define CH32V_ADC2_ISQR_JSQ2_MASK      (0x1f)
#define CH32V_ADC2_ISQR_JSQ1      (5 <<  0) /* 01: 1st conversion in injected sequence */
#define CH32V_ADC2_ISQR_JSQ1_MASK      (0x1f)
#define CH32V_ADC2_IDATAR1_CHGOFFSET_OFFSET 0x003c
#define CH32V_ADC2_IDATAR1_CHGOFFSET (CH32V_ADC2_BASE + CH32V_ADC2_IDATAR1_CHGOFFSET_OFFSET)
#define CH32V_ADC2_IDATAR1_CHGOFFSET_IDATA0_7_TKCGOFFSET (8 <<  0) /* 01: Injected data_Touch key charge data offset for injected channel x */
#define CH32V_ADC2_IDATAR1_CHGOFFSET_IDATA0_7_TKCGOFFSET_MASK (0xff)
#define CH32V_ADC2_IDATAR1_CHGOFFSET_IDATA8_15 (8 <<  8) /* 100: Injected data */
#define CH32V_ADC2_IDATAR1_CHGOFFSET_IDATA8_15_MASK (0xff)
#define CH32V_ADC2_IDATAR2_OFFSET 0x0040
#define CH32V_ADC2_IDATAR2        (CH32V_ADC2_BASE + CH32V_ADC2_IDATAR2_OFFSET)
#define CH32V_ADC2_IDATAR2_JDATA  (16 <<  0) /* 01: Injected data */
#define CH32V_ADC2_IDATAR2_JDATA_MASK  (0xffff)
#define CH32V_ADC2_IDATAR3_OFFSET 0x0044
#define CH32V_ADC2_IDATAR3        (CH32V_ADC2_BASE + CH32V_ADC2_IDATAR3_OFFSET)
#define CH32V_ADC2_IDATAR3_JDATA  (16 <<  0) /* 01: Injected data */
#define CH32V_ADC2_IDATAR3_JDATA_MASK  (0xffff)
#define CH32V_ADC2_IDATAR4_OFFSET 0x0048
#define CH32V_ADC2_IDATAR4        (CH32V_ADC2_BASE + CH32V_ADC2_IDATAR4_OFFSET)
#define CH32V_ADC2_IDATAR4_JDATA  (16 <<  0) /* 01: Injected data */
#define CH32V_ADC2_IDATAR4_JDATA_MASK  (0xffff)
#define CH32V_ADC2_RDATAR_DR_ACT_DCG_OFFSET 0x004c
#define CH32V_ADC2_RDATAR_DR_ACT_DCG (CH32V_ADC2_BASE + CH32V_ADC2_RDATAR_DR_ACT_DCG_OFFSET)
#define CH32V_ADC2_RDATAR_DR_ACT_DCG_DATA0_7_TKACT_DCG (8 <<  0) /* 01: Regular data_Touch key start and discharge time register */
#define CH32V_ADC2_RDATAR_DR_ACT_DCG_DATA0_7_TKACT_DCG_MASK (0xff)
#define CH32V_ADC2_RDATAR_DR_ACT_DCG_DATA8_15 (8 <<  8) /* 100: Regular data */
#define CH32V_ADC2_RDATAR_DR_ACT_DCG_DATA8_15_MASK (0xff)

/* DBG - Debug support */
#define CH32V_DBG_BASE            0xe000d000
#define CH32V_DBG_CFGR1_OFFSET    0x0000
#define CH32V_DBG_CFGR1           (CH32V_DBG_BASE + CH32V_DBG_CFGR1_OFFSET)
#define CH32V_DBG_CFGR1_DEG_IWDG  (1 <<  0) /* 01: DEG_IWDG */
#define CH32V_DBG_CFGR1_DEG_WWDG  (1 <<  1) /* 02: DEG_WWDG */
#define CH32V_DBG_CFGR1_DEG_I2C1  (1 <<  2) /* 04: DEG_I2C1 */
#define CH32V_DBG_CFGR1_DEG_I2C2  (1 <<  3) /* 08: DEG_I2C2 */
#define CH32V_DBG_CFGR1_DEG_TIM1  (1 <<  4) /* 10: DEG_TIM1 */
#define CH32V_DBG_CFGR1_DEG_TIM2  (1 <<  5) /* 20: DEG_TIM2 */
#define CH32V_DBG_CFGR1_DEG_TIM3  (1 <<  6) /* 40: DEG_TIM3 */
#define CH32V_DBG_CFGR1_DEG_TIM4  (1 <<  7) /* 80: DEG_TIM4 */
#define CH32V_DBG_CFGR2_OFFSET    0x0004
#define CH32V_DBG_CFGR2           (CH32V_DBG_BASE + CH32V_DBG_CFGR2_OFFSET)
#define CH32V_DBG_CFGR2_DBG_SLEEP (1 <<  0) /* 01: DBG_SLEEP */
#define CH32V_DBG_CFGR2_DBG_STOP  (1 <<  1) /* 02: DBG_STOP */
#define CH32V_DBG_CFGR2_DBG_STANDBY (1 <<  2) /* 04: DBG_STANDBY */

/* USBHD - USB register */
#define CH32V_USBHD_BASE          0x40023400
#define CH32V_USBHD_USB_CTRL_OFFSET 0x0000
#define CH32V_USBHD_USB_CTRL      (CH32V_USBHD_BASE + CH32V_USBHD_USB_CTRL_OFFSET)
#define CH32V_USBHD_UHOST_CTRL_OFFSET 0x0001
#define CH32V_USBHD_UHOST_CTRL    (CH32V_USBHD_BASE + CH32V_USBHD_UHOST_CTRL_OFFSET)
#define CH32V_USBHD_USB_INT_EN_OFFSET 0x0002
#define CH32V_USBHD_USB_INT_EN    (CH32V_USBHD_BASE + CH32V_USBHD_USB_INT_EN_OFFSET)
#define CH32V_USBHD_USB_DEV_AD_OFFSET 0x0003
#define CH32V_USBHD_USB_DEV_AD    (CH32V_USBHD_BASE + CH32V_USBHD_USB_DEV_AD_OFFSET)
#define CH32V_USBHD_USB_FRAME_NO_OFFSET 0x0004
#define CH32V_USBHD_USB_FRAME_NO  (CH32V_USBHD_BASE + CH32V_USBHD_USB_FRAME_NO_OFFSET)
#define CH32V_USBHD_USB_USB_SUSPEND_OFFSET 0x0006
#define CH32V_USBHD_USB_USB_SUSPEND (CH32V_USBHD_BASE + CH32V_USBHD_USB_USB_SUSPEND_OFFSET)
#define CH32V_USBHD_USB_SPEED_TYPE_OFFSET 0x0008
#define CH32V_USBHD_USB_SPEED_TYPE (CH32V_USBHD_BASE + CH32V_USBHD_USB_SPEED_TYPE_OFFSET)
#define CH32V_USBHD_USB_MIS_ST_OFFSET 0x0009
#define CH32V_USBHD_USB_MIS_ST    (CH32V_USBHD_BASE + CH32V_USBHD_USB_MIS_ST_OFFSET)
#define CH32V_USBHD_USB_INT_FG_OFFSET 0x000a
#define CH32V_USBHD_USB_INT_FG    (CH32V_USBHD_BASE + CH32V_USBHD_USB_INT_FG_OFFSET)
#define CH32V_USBHD_USB_INT_ST_OFFSET 0x000b
#define CH32V_USBHD_USB_INT_ST    (CH32V_USBHD_BASE + CH32V_USBHD_USB_INT_ST_OFFSET)
#define CH32V_USBHD_USB_RX_LEN_OFFSET 0x000c
#define CH32V_USBHD_USB_RX_LEN    (CH32V_USBHD_BASE + CH32V_USBHD_USB_RX_LEN_OFFSET)
#define CH32V_USBHD_UEP_CONFIG_OFFSET 0x0010
#define CH32V_USBHD_UEP_CONFIG    (CH32V_USBHD_BASE + CH32V_USBHD_UEP_CONFIG_OFFSET)
#define CH32V_USBHD_UEP_TYPE_OFFSET 0x0014
#define CH32V_USBHD_UEP_TYPE      (CH32V_USBHD_BASE + CH32V_USBHD_UEP_TYPE_OFFSET)
#define CH32V_USBHD_UEP_BUF_MOD_OFFSET 0x0018
#define CH32V_USBHD_UEP_BUF_MOD   (CH32V_USBHD_BASE + CH32V_USBHD_UEP_BUF_MOD_OFFSET)
#define CH32V_USBHD_UEP0_DMA_OFFSET 0x001c
#define CH32V_USBHD_UEP0_DMA      (CH32V_USBHD_BASE + CH32V_USBHD_UEP0_DMA_OFFSET)
#define CH32V_USBHD_UEP1_RX_DMA_OFFSET 0x0020
#define CH32V_USBHD_UEP1_RX_DMA   (CH32V_USBHD_BASE + CH32V_USBHD_UEP1_RX_DMA_OFFSET)
#define CH32V_USBHD_UEP2_RX_DMA__UH_RX_DMA_OFFSET 0x0024
#define CH32V_USBHD_UEP2_RX_DMA__UH_RX_DMA (CH32V_USBHD_BASE + CH32V_USBHD_UEP2_RX_DMA__UH_RX_DMA_OFFSET)
#define CH32V_USBHD_UEP3_RX_DMA_OFFSET 0x0028
#define CH32V_USBHD_UEP3_RX_DMA   (CH32V_USBHD_BASE + CH32V_USBHD_UEP3_RX_DMA_OFFSET)
#define CH32V_USBHD_UEP4_RX_DMA_OFFSET 0x002c
#define CH32V_USBHD_UEP4_RX_DMA   (CH32V_USBHD_BASE + CH32V_USBHD_UEP4_RX_DMA_OFFSET)
#define CH32V_USBHD_UEP5_RX_DMA_OFFSET 0x0030
#define CH32V_USBHD_UEP5_RX_DMA   (CH32V_USBHD_BASE + CH32V_USBHD_UEP5_RX_DMA_OFFSET)
#define CH32V_USBHD_UEP6_RX_DMA_OFFSET 0x0034
#define CH32V_USBHD_UEP6_RX_DMA   (CH32V_USBHD_BASE + CH32V_USBHD_UEP6_RX_DMA_OFFSET)
#define CH32V_USBHD_UEP7_RX_DMA_OFFSET 0x0038
#define CH32V_USBHD_UEP7_RX_DMA   (CH32V_USBHD_BASE + CH32V_USBHD_UEP7_RX_DMA_OFFSET)
#define CH32V_USBHD_UEP8_RX_DMA_OFFSET 0x003c
#define CH32V_USBHD_UEP8_RX_DMA   (CH32V_USBHD_BASE + CH32V_USBHD_UEP8_RX_DMA_OFFSET)
#define CH32V_USBHD_UEP9_RX_DMA_OFFSET 0x0040
#define CH32V_USBHD_UEP9_RX_DMA   (CH32V_USBHD_BASE + CH32V_USBHD_UEP9_RX_DMA_OFFSET)
#define CH32V_USBHD_UEP10_RX_DMA_OFFSET 0x0044
#define CH32V_USBHD_UEP10_RX_DMA  (CH32V_USBHD_BASE + CH32V_USBHD_UEP10_RX_DMA_OFFSET)
#define CH32V_USBHD_UEP11_RX_DMA_OFFSET 0x0048
#define CH32V_USBHD_UEP11_RX_DMA  (CH32V_USBHD_BASE + CH32V_USBHD_UEP11_RX_DMA_OFFSET)
#define CH32V_USBHD_UEP12_RX_DMA_OFFSET 0x004c
#define CH32V_USBHD_UEP12_RX_DMA  (CH32V_USBHD_BASE + CH32V_USBHD_UEP12_RX_DMA_OFFSET)
#define CH32V_USBHD_UEP13_RX_DMA_OFFSET 0x0050
#define CH32V_USBHD_UEP13_RX_DMA  (CH32V_USBHD_BASE + CH32V_USBHD_UEP13_RX_DMA_OFFSET)
#define CH32V_USBHD_UEP14_RX_DMA_OFFSET 0x0054
#define CH32V_USBHD_UEP14_RX_DMA  (CH32V_USBHD_BASE + CH32V_USBHD_UEP14_RX_DMA_OFFSET)
#define CH32V_USBHD_UEP15_RX_DMA_OFFSET 0x0058
#define CH32V_USBHD_UEP15_RX_DMA  (CH32V_USBHD_BASE + CH32V_USBHD_UEP15_RX_DMA_OFFSET)
#define CH32V_USBHD_UEP1_TX_DMA_OFFSET 0x005c
#define CH32V_USBHD_UEP1_TX_DMA   (CH32V_USBHD_BASE + CH32V_USBHD_UEP1_TX_DMA_OFFSET)
#define CH32V_USBHD_UEP2_TX_DMA_OFFSET 0x0060
#define CH32V_USBHD_UEP2_TX_DMA   (CH32V_USBHD_BASE + CH32V_USBHD_UEP2_TX_DMA_OFFSET)
#define CH32V_USBHD_UEP3_TX_DMA__UH_TX_DMA_OFFSET 0x0064
#define CH32V_USBHD_UEP3_TX_DMA__UH_TX_DMA (CH32V_USBHD_BASE + CH32V_USBHD_UEP3_TX_DMA__UH_TX_DMA_OFFSET)
#define CH32V_USBHD_UEP4_TX_DMA_OFFSET 0x0068
#define CH32V_USBHD_UEP4_TX_DMA   (CH32V_USBHD_BASE + CH32V_USBHD_UEP4_TX_DMA_OFFSET)
#define CH32V_USBHD_UEP5_TX_DMA_OFFSET 0x006c
#define CH32V_USBHD_UEP5_TX_DMA   (CH32V_USBHD_BASE + CH32V_USBHD_UEP5_TX_DMA_OFFSET)
#define CH32V_USBHD_UEP6_TX_DMA_OFFSET 0x0070
#define CH32V_USBHD_UEP6_TX_DMA   (CH32V_USBHD_BASE + CH32V_USBHD_UEP6_TX_DMA_OFFSET)
#define CH32V_USBHD_UEP7_TX_DMA_OFFSET 0x0074
#define CH32V_USBHD_UEP7_TX_DMA   (CH32V_USBHD_BASE + CH32V_USBHD_UEP7_TX_DMA_OFFSET)
#define CH32V_USBHD_UEP8_TX_DMA_OFFSET 0x0078
#define CH32V_USBHD_UEP8_TX_DMA   (CH32V_USBHD_BASE + CH32V_USBHD_UEP8_TX_DMA_OFFSET)
#define CH32V_USBHD_UEP9_TX_DMA_OFFSET 0x007c
#define CH32V_USBHD_UEP9_TX_DMA   (CH32V_USBHD_BASE + CH32V_USBHD_UEP9_TX_DMA_OFFSET)
#define CH32V_USBHD_UEP10_TX_DMA_OFFSET 0x0080
#define CH32V_USBHD_UEP10_TX_DMA  (CH32V_USBHD_BASE + CH32V_USBHD_UEP10_TX_DMA_OFFSET)
#define CH32V_USBHD_UEP11_TX_DMA_OFFSET 0x0084
#define CH32V_USBHD_UEP11_TX_DMA  (CH32V_USBHD_BASE + CH32V_USBHD_UEP11_TX_DMA_OFFSET)
#define CH32V_USBHD_UEP12_TX_DMA____UH_SPLIT_DATA_OFFSET 0x0088
#define CH32V_USBHD_UEP12_TX_DMA____UH_SPLIT_DATA (CH32V_USBHD_BASE + CH32V_USBHD_UEP12_TX_DMA____UH_SPLIT_DATA_OFFSET)
#define CH32V_USBHD_UEP13_TX_DMA_OFFSET 0x008c
#define CH32V_USBHD_UEP13_TX_DMA  (CH32V_USBHD_BASE + CH32V_USBHD_UEP13_TX_DMA_OFFSET)
#define CH32V_USBHD_UEP14_TX_DMA_OFFSET 0x0090
#define CH32V_USBHD_UEP14_TX_DMA  (CH32V_USBHD_BASE + CH32V_USBHD_UEP14_TX_DMA_OFFSET)
#define CH32V_USBHD_UEP15_TX_DMA_OFFSET 0x0094
#define CH32V_USBHD_UEP15_TX_DMA  (CH32V_USBHD_BASE + CH32V_USBHD_UEP15_TX_DMA_OFFSET)
#define CH32V_USBHD_UEP0_MAX_LEN_OFFSET 0x0098
#define CH32V_USBHD_UEP0_MAX_LEN  (CH32V_USBHD_BASE + CH32V_USBHD_UEP0_MAX_LEN_OFFSET)
#define CH32V_USBHD_UEP1_MAX_LEN_OFFSET 0x009c
#define CH32V_USBHD_UEP1_MAX_LEN  (CH32V_USBHD_BASE + CH32V_USBHD_UEP1_MAX_LEN_OFFSET)
#define CH32V_USBHD_UEP2_MAX_LEN__UH_RX_MAX_LEN_OFFSET 0x00a0
#define CH32V_USBHD_UEP2_MAX_LEN__UH_RX_MAX_LEN (CH32V_USBHD_BASE + CH32V_USBHD_UEP2_MAX_LEN__UH_RX_MAX_LEN_OFFSET)
#define CH32V_USBHD_UEP3_MAX_LEN_OFFSET 0x00a4
#define CH32V_USBHD_UEP3_MAX_LEN  (CH32V_USBHD_BASE + CH32V_USBHD_UEP3_MAX_LEN_OFFSET)
#define CH32V_USBHD_UEP4_MAX_LEN_OFFSET 0x00a8
#define CH32V_USBHD_UEP4_MAX_LEN  (CH32V_USBHD_BASE + CH32V_USBHD_UEP4_MAX_LEN_OFFSET)
#define CH32V_USBHD_UEP5_MAX_LEN_OFFSET 0x00ac
#define CH32V_USBHD_UEP5_MAX_LEN  (CH32V_USBHD_BASE + CH32V_USBHD_UEP5_MAX_LEN_OFFSET)
#define CH32V_USBHD_UEP6_MAX_LEN_OFFSET 0x00b0
#define CH32V_USBHD_UEP6_MAX_LEN  (CH32V_USBHD_BASE + CH32V_USBHD_UEP6_MAX_LEN_OFFSET)
#define CH32V_USBHD_UEP7_MAX_LEN_OFFSET 0x00b4
#define CH32V_USBHD_UEP7_MAX_LEN  (CH32V_USBHD_BASE + CH32V_USBHD_UEP7_MAX_LEN_OFFSET)
#define CH32V_USBHD_UEP8_MAX_LEN_OFFSET 0x00b8
#define CH32V_USBHD_UEP8_MAX_LEN  (CH32V_USBHD_BASE + CH32V_USBHD_UEP8_MAX_LEN_OFFSET)
#define CH32V_USBHD_UEP9_MAX_LEN_OFFSET 0x00bc
#define CH32V_USBHD_UEP9_MAX_LEN  (CH32V_USBHD_BASE + CH32V_USBHD_UEP9_MAX_LEN_OFFSET)
#define CH32V_USBHD_UEP10_MAX_LEN_OFFSET 0x00c0
#define CH32V_USBHD_UEP10_MAX_LEN (CH32V_USBHD_BASE + CH32V_USBHD_UEP10_MAX_LEN_OFFSET)
#define CH32V_USBHD_UEP11_MAX_LEN_OFFSET 0x00c4
#define CH32V_USBHD_UEP11_MAX_LEN (CH32V_USBHD_BASE + CH32V_USBHD_UEP11_MAX_LEN_OFFSET)
#define CH32V_USBHD_UEP12_MAX_LEN_OFFSET 0x00c8
#define CH32V_USBHD_UEP12_MAX_LEN (CH32V_USBHD_BASE + CH32V_USBHD_UEP12_MAX_LEN_OFFSET)
#define CH32V_USBHD_UEP13_MAX_LEN_OFFSET 0x00cc
#define CH32V_USBHD_UEP13_MAX_LEN (CH32V_USBHD_BASE + CH32V_USBHD_UEP13_MAX_LEN_OFFSET)
#define CH32V_USBHD_UEP14_MAX_LEN_OFFSET 0x00d0
#define CH32V_USBHD_UEP14_MAX_LEN (CH32V_USBHD_BASE + CH32V_USBHD_UEP14_MAX_LEN_OFFSET)
#define CH32V_USBHD_UEP15_MAX_LEN_OFFSET 0x00d4
#define CH32V_USBHD_UEP15_MAX_LEN (CH32V_USBHD_BASE + CH32V_USBHD_UEP15_MAX_LEN_OFFSET)
#define CH32V_USBHD_UEP0_T_LEN_OFFSET 0x00d8
#define CH32V_USBHD_UEP0_T_LEN    (CH32V_USBHD_BASE + CH32V_USBHD_UEP0_T_LEN_OFFSET)
#define CH32V_USBHD_UEP0_T_CTRL_OFFSET 0x00da
#define CH32V_USBHD_UEP0_T_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP0_T_CTRL_OFFSET)
#define CH32V_USBHD_UEP0_R_CTRL_OFFSET 0x00db
#define CH32V_USBHD_UEP0_R_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP0_R_CTRL_OFFSET)
#define CH32V_USBHD_UEP1_T_LEN_OFFSET 0x00dc
#define CH32V_USBHD_UEP1_T_LEN    (CH32V_USBHD_BASE + CH32V_USBHD_UEP1_T_LEN_OFFSET)
#define CH32V_USBHD_UEP1_T_CTRL_OFFSET 0x00de
#define CH32V_USBHD_UEP1_T_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP1_T_CTRL_OFFSET)
#define CH32V_USBHD_UEP1_R_CTRL_OFFSET 0x00df
#define CH32V_USBHD_UEP1_R_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP1_R_CTRL_OFFSET)
#define CH32V_USBHD_UEP2_T_LEN__UH_EP_PID_OFFSET 0x00e0
#define CH32V_USBHD_UEP2_T_LEN__UH_EP_PID (CH32V_USBHD_BASE + CH32V_USBHD_UEP2_T_LEN__UH_EP_PID_OFFSET)
#define CH32V_USBHD_UEP2_T_CTRL_OFFSET 0x00e2
#define CH32V_USBHD_UEP2_T_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP2_T_CTRL_OFFSET)
#define CH32V_USBHD_UEP2_R_CTRL__UH_RX_CTRL_OFFSET 0x00e3
#define CH32V_USBHD_UEP2_R_CTRL__UH_RX_CTRL (CH32V_USBHD_BASE + CH32V_USBHD_UEP2_R_CTRL__UH_RX_CTRL_OFFSET)
#define CH32V_USBHD_UEP3_T_LEN___UH_TX_LEN_H_OFFSET 0x00e4
#define CH32V_USBHD_UEP3_T_LEN___UH_TX_LEN_H (CH32V_USBHD_BASE + CH32V_USBHD_UEP3_T_LEN___UH_TX_LEN_H_OFFSET)
#define CH32V_USBHD_UEP3_T_CTRL___UH_TX_CTRL_OFFSET 0x00e6
#define CH32V_USBHD_UEP3_T_CTRL___UH_TX_CTRL (CH32V_USBHD_BASE + CH32V_USBHD_UEP3_T_CTRL___UH_TX_CTRL_OFFSET)
#define CH32V_USBHD_UEP3_R_CTRL_OFFSET 0x00e7
#define CH32V_USBHD_UEP3_R_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP3_R_CTRL_OFFSET)
#define CH32V_USBHD_UEP4_T_LEN_OFFSET 0x00e8
#define CH32V_USBHD_UEP4_T_LEN    (CH32V_USBHD_BASE + CH32V_USBHD_UEP4_T_LEN_OFFSET)
#define CH32V_USBHD_UEP4_T_CTRL_OFFSET 0x00ea
#define CH32V_USBHD_UEP4_T_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP4_T_CTRL_OFFSET)
#define CH32V_USBHD_UEP4_R_CTRL_OFFSET 0x00eb
#define CH32V_USBHD_UEP4_R_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP4_R_CTRL_OFFSET)
#define CH32V_USBHD_UEP5_T_LEN_OFFSET 0x00ec
#define CH32V_USBHD_UEP5_T_LEN    (CH32V_USBHD_BASE + CH32V_USBHD_UEP5_T_LEN_OFFSET)
#define CH32V_USBHD_UEP5_T_CTRL_OFFSET 0x00ee
#define CH32V_USBHD_UEP5_T_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP5_T_CTRL_OFFSET)
#define CH32V_USBHD_UEP5_R_CTRL_OFFSET 0x00ef
#define CH32V_USBHD_UEP5_R_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP5_R_CTRL_OFFSET)
#define CH32V_USBHD_UEP6_T_LEN_OFFSET 0x00f0
#define CH32V_USBHD_UEP6_T_LEN    (CH32V_USBHD_BASE + CH32V_USBHD_UEP6_T_LEN_OFFSET)
#define CH32V_USBHD_UEP6_T_CTRL_OFFSET 0x00f2
#define CH32V_USBHD_UEP6_T_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP6_T_CTRL_OFFSET)
#define CH32V_USBHD_UEP6_R_CTRL_OFFSET 0x00f3
#define CH32V_USBHD_UEP6_R_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP6_R_CTRL_OFFSET)
#define CH32V_USBHD_UEP7_T_LEN_OFFSET 0x00f4
#define CH32V_USBHD_UEP7_T_LEN    (CH32V_USBHD_BASE + CH32V_USBHD_UEP7_T_LEN_OFFSET)
#define CH32V_USBHD_UEP7_T_CTRL_OFFSET 0x00f6
#define CH32V_USBHD_UEP7_T_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP7_T_CTRL_OFFSET)
#define CH32V_USBHD_UEP7_R_CTRL_OFFSET 0x00f7
#define CH32V_USBHD_UEP7_R_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP7_R_CTRL_OFFSET)
#define CH32V_USBHD_UEP8_T_LEN_OFFSET 0x00f8
#define CH32V_USBHD_UEP8_T_LEN    (CH32V_USBHD_BASE + CH32V_USBHD_UEP8_T_LEN_OFFSET)
#define CH32V_USBHD_UEP8_T_CTRL_OFFSET 0x00fa
#define CH32V_USBHD_UEP8_T_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP8_T_CTRL_OFFSET)
#define CH32V_USBHD_UEP8_R_CTRL_OFFSET 0x00fb
#define CH32V_USBHD_UEP8_R_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP8_R_CTRL_OFFSET)
#define CH32V_USBHD_UEP9_T_LEN_OFFSET 0x00fc
#define CH32V_USBHD_UEP9_T_LEN    (CH32V_USBHD_BASE + CH32V_USBHD_UEP9_T_LEN_OFFSET)
#define CH32V_USBHD_UEP9_T_CTRL_OFFSET 0x00fe
#define CH32V_USBHD_UEP9_T_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP9_T_CTRL_OFFSET)
#define CH32V_USBHD_UEP9_R_CTRL_OFFSET 0x00ff
#define CH32V_USBHD_UEP9_R_CTRL   (CH32V_USBHD_BASE + CH32V_USBHD_UEP9_R_CTRL_OFFSET)
#define CH32V_USBHD_UEP10_T_LEN_OFFSET 0x0100
#define CH32V_USBHD_UEP10_T_LEN   (CH32V_USBHD_BASE + CH32V_USBHD_UEP10_T_LEN_OFFSET)
#define CH32V_USBHD_UEP10_T_CTRL_OFFSET 0x0102
#define CH32V_USBHD_UEP10_T_CTRL  (CH32V_USBHD_BASE + CH32V_USBHD_UEP10_T_CTRL_OFFSET)
#define CH32V_USBHD_UEP10_R_CTRL_OFFSET 0x0103
#define CH32V_USBHD_UEP10_R_CTRL  (CH32V_USBHD_BASE + CH32V_USBHD_UEP10_R_CTRL_OFFSET)
#define CH32V_USBHD_UEP11_T_LEN_OFFSET 0x0104
#define CH32V_USBHD_UEP11_T_LEN   (CH32V_USBHD_BASE + CH32V_USBHD_UEP11_T_LEN_OFFSET)
#define CH32V_USBHD_UEP11_T_CTRL_OFFSET 0x0106
#define CH32V_USBHD_UEP11_T_CTRL  (CH32V_USBHD_BASE + CH32V_USBHD_UEP11_T_CTRL_OFFSET)
#define CH32V_USBHD_UEP11_R_CTRL_OFFSET 0x0107
#define CH32V_USBHD_UEP11_R_CTRL  (CH32V_USBHD_BASE + CH32V_USBHD_UEP11_R_CTRL_OFFSET)
#define CH32V_USBHD_UEP12_T_LEN_OFFSET 0x0108
#define CH32V_USBHD_UEP12_T_LEN   (CH32V_USBHD_BASE + CH32V_USBHD_UEP12_T_LEN_OFFSET)
#define CH32V_USBHD_UEP12_T_CTRL_OFFSET 0x010a
#define CH32V_USBHD_UEP12_T_CTRL  (CH32V_USBHD_BASE + CH32V_USBHD_UEP12_T_CTRL_OFFSET)
#define CH32V_USBHD_UEP12_R_CTRL_OFFSET 0x010b
#define CH32V_USBHD_UEP12_R_CTRL  (CH32V_USBHD_BASE + CH32V_USBHD_UEP12_R_CTRL_OFFSET)
#define CH32V_USBHD_UEP13_T_LEN_OFFSET 0x010c
#define CH32V_USBHD_UEP13_T_LEN   (CH32V_USBHD_BASE + CH32V_USBHD_UEP13_T_LEN_OFFSET)
#define CH32V_USBHD_UEP13_T_CTRL_OFFSET 0x010e
#define CH32V_USBHD_UEP13_T_CTRL  (CH32V_USBHD_BASE + CH32V_USBHD_UEP13_T_CTRL_OFFSET)
#define CH32V_USBHD_UEP13_R_CTRL_OFFSET 0x010f
#define CH32V_USBHD_UEP13_R_CTRL  (CH32V_USBHD_BASE + CH32V_USBHD_UEP13_R_CTRL_OFFSET)
#define CH32V_USBHD_UEP14_T_LEN_OFFSET 0x0110
#define CH32V_USBHD_UEP14_T_LEN   (CH32V_USBHD_BASE + CH32V_USBHD_UEP14_T_LEN_OFFSET)
#define CH32V_USBHD_UEP14_T_CTRL_OFFSET 0x0112
#define CH32V_USBHD_UEP14_T_CTRL  (CH32V_USBHD_BASE + CH32V_USBHD_UEP14_T_CTRL_OFFSET)
#define CH32V_USBHD_UEP14_R_CTRL_OFFSET 0x0113
#define CH32V_USBHD_UEP14_R_CTRL  (CH32V_USBHD_BASE + CH32V_USBHD_UEP14_R_CTRL_OFFSET)
#define CH32V_USBHD_UEP15_T_LEN_OFFSET 0x0114
#define CH32V_USBHD_UEP15_T_LEN   (CH32V_USBHD_BASE + CH32V_USBHD_UEP15_T_LEN_OFFSET)
#define CH32V_USBHD_UEP15_T_CTRL_OFFSET 0x0116
#define CH32V_USBHD_UEP15_T_CTRL  (CH32V_USBHD_BASE + CH32V_USBHD_UEP15_T_CTRL_OFFSET)
#define CH32V_USBHD_UEP15_R_CTRL_OFFSET 0x0117
#define CH32V_USBHD_UEP15_R_CTRL  (CH32V_USBHD_BASE + CH32V_USBHD_UEP15_R_CTRL_OFFSET)

/* CRC - CRC calculation unit */
#define CH32V_CRC_BASE            0x40023000
#define CH32V_CRC_DATAR_OFFSET    0x0000
#define CH32V_CRC_DATAR           (CH32V_CRC_BASE + CH32V_CRC_DATAR_OFFSET)
#define CH32V_CRC_DATAR_DR        (32 <<  0) /* 01: Data Register */
#define CH32V_CRC_DATAR_DR_MASK        (0xffffffff)
#define CH32V_CRC_IDATAR_OFFSET   0x0004
#define CH32V_CRC_IDATAR          (CH32V_CRC_BASE + CH32V_CRC_IDATAR_OFFSET)
#define CH32V_CRC_IDATAR_IDR      (8 <<  0) /* 01: Independent Data register */
#define CH32V_CRC_IDATAR_IDR_MASK      (0xff)
#define CH32V_CRC_CTLR_OFFSET     0x0008
#define CH32V_CRC_CTLR            (CH32V_CRC_BASE + CH32V_CRC_CTLR_OFFSET)
#define CH32V_CRC_CTLR_RESET      (1 <<  0) /* 01: Reset bit */

/* FLASH - FLASH */
#define CH32V_FLASH_BASE          0x40022000
#define CH32V_FLASH_KEYR_OFFSET   0x0004
#define CH32V_FLASH_KEYR          (CH32V_FLASH_BASE + CH32V_FLASH_KEYR_OFFSET)
#define CH32V_FLASH_KEYR_KEYR     (32 <<  0) /* 01: FPEC key */
#define CH32V_FLASH_KEYR_KEYR_MASK     (0xffffffff)
#define CH32V_FLASH_OBKEYR_OFFSET 0x0008
#define CH32V_FLASH_OBKEYR        (CH32V_FLASH_BASE + CH32V_FLASH_OBKEYR_OFFSET)
#define CH32V_FLASH_OBKEYR_OPTKEY (32 <<  0) /* 01: Option byte key */
#define CH32V_FLASH_OBKEYR_OPTKEY_MASK (0xffffffff)
#define CH32V_FLASH_STATR_OFFSET  0x000c
#define CH32V_FLASH_STATR         (CH32V_FLASH_BASE + CH32V_FLASH_STATR_OFFSET)
#define CH32V_FLASH_STATR_ENHANCE_MOD_STA (1 <<  7) /* 80: Enhance mode start */
#define CH32V_FLASH_STATR_EOP     (1 <<  5) /* 20: End of operation */
#define CH32V_FLASH_STATR_WRPRTERR (1 <<  4) /* 10: Write protection error */
#define CH32V_FLASH_STATR_WR_BSY  (1 <<  1) /* 02: Quick page programming */
#define CH32V_FLASH_STATR_BSY     (1 <<  0) /* 01: Busy */
#define CH32V_FLASH_CTLR_OFFSET   0x0010
#define CH32V_FLASH_CTLR          (CH32V_FLASH_BASE + CH32V_FLASH_CTLR_OFFSET)
#define CH32V_FLASH_CTLR_PG       (1 <<  0) /* 01: Programming */
#define CH32V_FLASH_CTLR_PER      (1 <<  1) /* 02: Page Erase */
#define CH32V_FLASH_CTLR_MER      (1 <<  2) /* 04: Mass Erase */
#define CH32V_FLASH_CTLR_OBPG     (1 <<  4) /* 10: Option byte programming */
#define CH32V_FLASH_CTLR_OBER     (1 <<  5) /* 20: Option byte erase */
#define CH32V_FLASH_CTLR_STRT     (1 <<  6) /* 40: Start */
#define CH32V_FLASH_CTLR_LOCK     (1 <<  7) /* 80: Lock */
#define CH32V_FLASH_CTLR_OBWRE    (1 <<  9) /* 200: Option bytes write enable */
#define CH32V_FLASH_CTLR_ERRIE    (1 << 10) /* 400: Error interrupt enable */
#define CH32V_FLASH_CTLR_EOPIE    (1 << 12) /* 1000: End of operation interrupt enable */
#define CH32V_FLASH_CTLR_FLOCK    (1 << 15) /* 8000: Fast programmable lock */
#define CH32V_FLASH_CTLR_PAGE_PG  (1 << 16) /* 10000: Fast programming */
#define CH32V_FLASH_CTLR_PAGE_ER  (1 << 17) /* 20000: Fast erase */
#define CH32V_FLASH_CTLR_BER32    (1 << 18) /* 40000: Block Erase 32K */
#define CH32V_FLASH_CTLR_BER64    (1 << 19) /* 80000: Block Erase 64K */
#define CH32V_FLASH_CTLR_PGSTART  (1 << 21) /* 200000: Page Programming Start */
#define CH32V_FLASH_CTLR_RSENACT  (1 << 22) /* 400000: Reset Flash Enhance read mode */
#define CH32V_FLASH_CTLR_ENHANCEMODE (1 << 24) /* 1000000: Flash Enhance read mode */
#define CH32V_FLASH_CTLR_SCKMODE  (1 << 25) /* 2000000: Flash SCK mode */
#define CH32V_FLASH_ADDR_OFFSET   0x0014
#define CH32V_FLASH_ADDR          (CH32V_FLASH_BASE + CH32V_FLASH_ADDR_OFFSET)
#define CH32V_FLASH_ADDR_FAR      (32 <<  0) /* 01: Flash Address */
#define CH32V_FLASH_ADDR_FAR_MASK      (0xffffffff)
#define CH32V_FLASH_OBR_OFFSET    0x001c
#define CH32V_FLASH_OBR           (CH32V_FLASH_BASE + CH32V_FLASH_OBR_OFFSET)
#define CH32V_FLASH_OBR_OBERR     (1 <<  0) /* 01: Option byte error */
#define CH32V_FLASH_OBR_RDPRT     (1 <<  1) /* 02: Read protection */
#define CH32V_FLASH_OBR_IWDG_SW   (1 <<  2) /* 04: IWDG_SW */
#define CH32V_FLASH_OBR_STOP_RST  (1 <<  3) /* 08: STOP_RST */
#define CH32V_FLASH_OBR_STANDY_RST (1 <<  4) /* 10: STANDY_RST */
#define CH32V_FLASH_OBR_SRAM_CODE_MODE (2 <<  8) /* 100: SRAM_CODE_MODE */
#define CH32V_FLASH_OBR_SRAM_CODE_MODE_MASK (0x03)
#define CH32V_FLASH_WPR_OFFSET    0x0020
#define CH32V_FLASH_WPR           (CH32V_FLASH_BASE + CH32V_FLASH_WPR_OFFSET)
#define CH32V_FLASH_WPR_WRP       (32 <<  0) /* 01: Write protect */
#define CH32V_FLASH_WPR_WRP_MASK       (0xffffffff)
#define CH32V_FLASH_MODEKEYR_OFFSET 0x0024
#define CH32V_FLASH_MODEKEYR      (CH32V_FLASH_BASE + CH32V_FLASH_MODEKEYR_OFFSET)
#define CH32V_FLASH_MODEKEYR_MODEKEYR (32 <<  0) /* 01: Mode select */
#define CH32V_FLASH_MODEKEYR_MODEKEYR_MASK (0xffffffff)

/* USB_OTG_FS - USB FS OTG register */
#define CH32V_USB_OTG_FS_BASE     0x50000000
#define CH32V_USB_OTG_FS_USBHD_BASE_CTRL_OFFSET 0x0000
#define CH32V_USB_OTG_FS_USBHD_BASE_CTRL (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_USBHD_BASE_CTRL_OFFSET)
#define CH32V_USB_OTG_FS_USBHD_UDEV_CTRL__USBHD_UHOST_CTRL_OFFSET 0x0001
#define CH32V_USB_OTG_FS_USBHD_UDEV_CTRL__USBHD_UHOST_CTRL (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_USBHD_UDEV_CTRL__USBHD_UHOST_CTRL_OFFSET)
#define CH32V_USB_OTG_FS_R8_USB_INT_EN_OFFSET 0x0002
#define CH32V_USB_OTG_FS_R8_USB_INT_EN (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_USB_INT_EN_OFFSET)
#define CH32V_USB_OTG_FS_R8_USB_DEV_AD_OFFSET 0x0003
#define CH32V_USB_OTG_FS_R8_USB_DEV_AD (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_USB_DEV_AD_OFFSET)
#define CH32V_USB_OTG_FS_R8_USB_MIS_ST_OFFSET 0x0005
#define CH32V_USB_OTG_FS_R8_USB_MIS_ST (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_USB_MIS_ST_OFFSET)
#define CH32V_USB_OTG_FS_R8_USB_INT_FG_OFFSET 0x0006
#define CH32V_USB_OTG_FS_R8_USB_INT_FG (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_USB_INT_FG_OFFSET)
#define CH32V_USB_OTG_FS_R8_USB_INT_ST_OFFSET 0x0007
#define CH32V_USB_OTG_FS_R8_USB_INT_ST (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_USB_INT_ST_OFFSET)
#define CH32V_USB_OTG_FS_R16_USB_RX_LEN_OFFSET 0x0008
#define CH32V_USB_OTG_FS_R16_USB_RX_LEN (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R16_USB_RX_LEN_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP4_1_MOD_OFFSET 0x000c
#define CH32V_USB_OTG_FS_R8_UEP4_1_MOD (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP4_1_MOD_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP2_3_MOD__R8_UH_EP_MOD_OFFSET 0x000d
#define CH32V_USB_OTG_FS_R8_UEP2_3_MOD__R8_UH_EP_MOD (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP2_3_MOD__R8_UH_EP_MOD_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP5_6_MOD_OFFSET 0x000e
#define CH32V_USB_OTG_FS_R8_UEP5_6_MOD (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP5_6_MOD_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP7_MOD_OFFSET 0x000f
#define CH32V_USB_OTG_FS_R8_UEP7_MOD (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP7_MOD_OFFSET)
#define CH32V_USB_OTG_FS_R32_UEP0_DMA_OFFSET 0x0010
#define CH32V_USB_OTG_FS_R32_UEP0_DMA (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R32_UEP0_DMA_OFFSET)
#define CH32V_USB_OTG_FS_R32_UEP1_DMA_OFFSET 0x0014
#define CH32V_USB_OTG_FS_R32_UEP1_DMA (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R32_UEP1_DMA_OFFSET)
#define CH32V_USB_OTG_FS_R32_UEP2_DMA__R32_UH_RX_DMA_OFFSET 0x0018
#define CH32V_USB_OTG_FS_R32_UEP2_DMA__R32_UH_RX_DMA (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R32_UEP2_DMA__R32_UH_RX_DMA_OFFSET)
#define CH32V_USB_OTG_FS_R32_UEP3_DMA__R32_UH_TX_DMA_OFFSET 0x001c
#define CH32V_USB_OTG_FS_R32_UEP3_DMA__R32_UH_TX_DMA (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R32_UEP3_DMA__R32_UH_TX_DMA_OFFSET)
#define CH32V_USB_OTG_FS_R32_UEP4_DMA_OFFSET 0x0020
#define CH32V_USB_OTG_FS_R32_UEP4_DMA (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R32_UEP4_DMA_OFFSET)
#define CH32V_USB_OTG_FS_R32_UEP5_DMA_OFFSET 0x0024
#define CH32V_USB_OTG_FS_R32_UEP5_DMA (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R32_UEP5_DMA_OFFSET)
#define CH32V_USB_OTG_FS_R32_UEP6_DMA_OFFSET 0x0028
#define CH32V_USB_OTG_FS_R32_UEP6_DMA (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R32_UEP6_DMA_OFFSET)
#define CH32V_USB_OTG_FS_R32_UEP7_DMA_OFFSET 0x002c
#define CH32V_USB_OTG_FS_R32_UEP7_DMA (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R32_UEP7_DMA_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP0_T_LEN_OFFSET 0x0030
#define CH32V_USB_OTG_FS_R8_UEP0_T_LEN (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP0_T_LEN_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP0_T_CTRL_OFFSET 0x0032
#define CH32V_USB_OTG_FS_R8_UEP0_T_CTRL (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP0_T_CTRL_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP0_R_CTRL_OFFSET 0x0033
#define CH32V_USB_OTG_FS_R8_UEP0_R_CTRL (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP0_R_CTRL_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP1_T_LEN_OFFSET 0x0034
#define CH32V_USB_OTG_FS_R8_UEP1_T_LEN (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP1_T_LEN_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP1_T_CTRL___USBHD_UH_SETUP_OFFSET 0x0036
#define CH32V_USB_OTG_FS_R8_UEP1_T_CTRL___USBHD_UH_SETUP (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP1_T_CTRL___USBHD_UH_SETUP_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP1_R_CTRL_OFFSET 0x0037
#define CH32V_USB_OTG_FS_R8_UEP1_R_CTRL (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP1_R_CTRL_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP2_T_LEN__USBHD_UH_EP_PID_OFFSET 0x0038
#define CH32V_USB_OTG_FS_R8_UEP2_T_LEN__USBHD_UH_EP_PID (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP2_T_LEN__USBHD_UH_EP_PID_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP2_T_CTRL_OFFSET 0x003a
#define CH32V_USB_OTG_FS_R8_UEP2_T_CTRL (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP2_T_CTRL_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP2_R_CTRL__USBHD_UH_RX_CTRL_OFFSET 0x003b
#define CH32V_USB_OTG_FS_R8_UEP2_R_CTRL__USBHD_UH_RX_CTRL (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP2_R_CTRL__USBHD_UH_RX_CTRL_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP3_T_LEN__USBHD_UH_TX_LEN_OFFSET 0x003c
#define CH32V_USB_OTG_FS_R8_UEP3_T_LEN__USBHD_UH_TX_LEN (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP3_T_LEN__USBHD_UH_TX_LEN_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP3_T_CTRL__USBHD_UH_TX_CTRL_OFFSET 0x003e
#define CH32V_USB_OTG_FS_R8_UEP3_T_CTRL__USBHD_UH_TX_CTRL (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP3_T_CTRL__USBHD_UH_TX_CTRL_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP3_R_CTRL__OFFSET 0x003f
#define CH32V_USB_OTG_FS_R8_UEP3_R_CTRL_ (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP3_R_CTRL__OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP4_T_LEN_OFFSET 0x0040
#define CH32V_USB_OTG_FS_R8_UEP4_T_LEN (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP4_T_LEN_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP4_T_CTRL_OFFSET 0x0042
#define CH32V_USB_OTG_FS_R8_UEP4_T_CTRL (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP4_T_CTRL_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP4_R_CTRL__OFFSET 0x0043
#define CH32V_USB_OTG_FS_R8_UEP4_R_CTRL_ (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP4_R_CTRL__OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP5_T_LEN_OFFSET 0x0044
#define CH32V_USB_OTG_FS_R8_UEP5_T_LEN (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP5_T_LEN_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP5_T_CTRL_OFFSET 0x0046
#define CH32V_USB_OTG_FS_R8_UEP5_T_CTRL (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP5_T_CTRL_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP5_R_CTRL__OFFSET 0x0047
#define CH32V_USB_OTG_FS_R8_UEP5_R_CTRL_ (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP5_R_CTRL__OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP6_T_LEN_OFFSET 0x0048
#define CH32V_USB_OTG_FS_R8_UEP6_T_LEN (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP6_T_LEN_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP6_T_CTRL_OFFSET 0x004a
#define CH32V_USB_OTG_FS_R8_UEP6_T_CTRL (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP6_T_CTRL_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP6_R_CTRL__OFFSET 0x004b
#define CH32V_USB_OTG_FS_R8_UEP6_R_CTRL_ (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP6_R_CTRL__OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP7_T_LEN_OFFSET 0x004c
#define CH32V_USB_OTG_FS_R8_UEP7_T_LEN (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP7_T_LEN_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP7_T_CTRL_OFFSET 0x004e
#define CH32V_USB_OTG_FS_R8_UEP7_T_CTRL (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP7_T_CTRL_OFFSET)
#define CH32V_USB_OTG_FS_R8_UEP7_R_CTRL__OFFSET 0x004f
#define CH32V_USB_OTG_FS_R8_UEP7_R_CTRL_ (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_R8_UEP7_R_CTRL__OFFSET)
#define CH32V_USB_OTG_FS_USB_OTG_CR_OFFSET 0x0054
#define CH32V_USB_OTG_FS_USB_OTG_CR (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_USB_OTG_CR_OFFSET)
#define CH32V_USB_OTG_FS_USB_OTG_SR_OFFSET 0x0058
#define CH32V_USB_OTG_FS_USB_OTG_SR (CH32V_USB_OTG_FS_BASE + CH32V_USB_OTG_FS_USB_OTG_SR_OFFSET)

/* PFIC - Programmable Fast Interrupt Controller */
#define CH32V_PFIC_BASE           0xe000e000
#define CH32V_PFIC_ISR1_OFFSET    0x0000
#define CH32V_PFIC_ISR1           (CH32V_PFIC_BASE + CH32V_PFIC_ISR1_OFFSET)
#define CH32V_PFIC_ISR1_INTENSTA2_3 (2 <<  2) /* 04: Interrupt ID Status */
#define CH32V_PFIC_ISR1_INTENSTA2_3_MASK (0x03)
#define CH32V_PFIC_ISR1_INTENSTA12_31 (20 << 12) /* 1000: Interrupt ID Status */
#define CH32V_PFIC_ISR1_INTENSTA12_31_MASK (0xfffff)
#define CH32V_PFIC_ISR2_OFFSET    0x0004
#define CH32V_PFIC_ISR2           (CH32V_PFIC_BASE + CH32V_PFIC_ISR2_OFFSET)
#define CH32V_PFIC_ISR2_INTENSTA  (32 <<  0) /* 01: Interrupt ID Status */
#define CH32V_PFIC_ISR2_INTENSTA_MASK  (0xffffffff)
#define CH32V_PFIC_ISR3_OFFSET    0x0008
#define CH32V_PFIC_ISR3           (CH32V_PFIC_BASE + CH32V_PFIC_ISR3_OFFSET)
#define CH32V_PFIC_ISR3_INTENSTA  (32 <<  0) /* 01: Interrupt ID Status */
#define CH32V_PFIC_ISR3_INTENSTA_MASK  (0xffffffff)
#define CH32V_PFIC_ISR4_OFFSET    0x000c
#define CH32V_PFIC_ISR4           (CH32V_PFIC_BASE + CH32V_PFIC_ISR4_OFFSET)
#define CH32V_PFIC_ISR4_INTENSTA  (8 <<  0) /* 01: Interrupt ID Status */
#define CH32V_PFIC_ISR4_INTENSTA_MASK  (0xff)
#define CH32V_PFIC_IPR1_OFFSET    0x0020
#define CH32V_PFIC_IPR1           (CH32V_PFIC_BASE + CH32V_PFIC_IPR1_OFFSET)
#define CH32V_PFIC_IPR1_PENDSTA2_3 (2 <<  2) /* 04: PENDSTA */
#define CH32V_PFIC_IPR1_PENDSTA2_3_MASK (0x03)
#define CH32V_PFIC_IPR1_PENDSTA12_31 (20 << 12) /* 1000: PENDSTA */
#define CH32V_PFIC_IPR1_PENDSTA12_31_MASK (0xfffff)
#define CH32V_PFIC_IPR2_OFFSET    0x0024
#define CH32V_PFIC_IPR2           (CH32V_PFIC_BASE + CH32V_PFIC_IPR2_OFFSET)
#define CH32V_PFIC_IPR2_PENDSTA   (32 <<  0) /* 01: PENDSTA */
#define CH32V_PFIC_IPR2_PENDSTA_MASK   (0xffffffff)
#define CH32V_PFIC_IPR3_OFFSET    0x0028
#define CH32V_PFIC_IPR3           (CH32V_PFIC_BASE + CH32V_PFIC_IPR3_OFFSET)
#define CH32V_PFIC_IPR3_PENDSTA   (32 <<  0) /* 01: PENDSTA */
#define CH32V_PFIC_IPR3_PENDSTA_MASK   (0xffffffff)
#define CH32V_PFIC_IPR4_OFFSET    0x002c
#define CH32V_PFIC_IPR4           (CH32V_PFIC_BASE + CH32V_PFIC_IPR4_OFFSET)
#define CH32V_PFIC_IPR4_PENDSTA   (8 <<  0) /* 01: PENDSTA */
#define CH32V_PFIC_IPR4_PENDSTA_MASK   (0xff)
#define CH32V_PFIC_ITHRESDR_OFFSET 0x0040
#define CH32V_PFIC_ITHRESDR       (CH32V_PFIC_BASE + CH32V_PFIC_ITHRESDR_OFFSET)
#define CH32V_PFIC_ITHRESDR_THRESHOLD (8 <<  0) /* 01: THRESHOLD */
#define CH32V_PFIC_ITHRESDR_THRESHOLD_MASK (0xff)
#define CH32V_PFIC_CFGR_OFFSET    0x0048
#define CH32V_PFIC_CFGR           (CH32V_PFIC_BASE + CH32V_PFIC_CFGR_OFFSET)
#define CH32V_PFIC_CFGR_RESETSYS  (1 <<  7) /* 80: RESETSYS */
#define CH32V_PFIC_CFGR_KEYCODE   (16 << 16) /* 10000: KEYCODE */
#define CH32V_PFIC_CFGR_KEYCODE_MASK   (0xffff)
#define CH32V_PFIC_GISR_OFFSET    0x004c
#define CH32V_PFIC_GISR           (CH32V_PFIC_BASE + CH32V_PFIC_GISR_OFFSET)
#define CH32V_PFIC_GISR_NESTSTA   (8 <<  0) /* 01: NESTSTA */
#define CH32V_PFIC_GISR_NESTSTA_MASK   (0xff)
#define CH32V_PFIC_GISR_GACTSTA   (1 <<  8) /* 100: GACTSTA */
#define CH32V_PFIC_GISR_GPENDSTA  (1 <<  9) /* 200: GPENDSTA */
#define CH32V_PFIC_VTFIDR_OFFSET  0x0050
#define CH32V_PFIC_VTFIDR         (CH32V_PFIC_BASE + CH32V_PFIC_VTFIDR_OFFSET)
#define CH32V_PFIC_VTFIDR_VTFID0  (8 <<  0) /* 01: VTFID0 */
#define CH32V_PFIC_VTFIDR_VTFID0_MASK  (0xff)
#define CH32V_PFIC_VTFIDR_VTFID1  (8 <<  8) /* 100: VTFID1 */
#define CH32V_PFIC_VTFIDR_VTFID1_MASK  (0xff)
#define CH32V_PFIC_VTFIDR_VTFID2  (8 << 16) /* 10000: VTFID2 */
#define CH32V_PFIC_VTFIDR_VTFID2_MASK  (0xff)
#define CH32V_PFIC_VTFIDR_VTFID3  (8 << 24) /* 1000000: VTFID3 */
#define CH32V_PFIC_VTFIDR_VTFID3_MASK  (0xff)
#define CH32V_PFIC_VTFADDRR0_OFFSET 0x0060
#define CH32V_PFIC_VTFADDRR0      (CH32V_PFIC_BASE + CH32V_PFIC_VTFADDRR0_OFFSET)
#define CH32V_PFIC_VTFADDRR0_VTF0EN (1 <<  0) /* 01: VTF0EN */
#define CH32V_PFIC_VTFADDRR0_ADDR0 (31 <<  1) /* 02: ADDR0 */
#define CH32V_PFIC_VTFADDRR0_ADDR0_MASK (0x7fffffff)
#define CH32V_PFIC_VTFADDRR1_OFFSET 0x0064
#define CH32V_PFIC_VTFADDRR1      (CH32V_PFIC_BASE + CH32V_PFIC_VTFADDRR1_OFFSET)
#define CH32V_PFIC_VTFADDRR1_VTF1EN (1 <<  0) /* 01: VTF1EN */
#define CH32V_PFIC_VTFADDRR1_ADDR1 (31 <<  1) /* 02: ADDR1 */
#define CH32V_PFIC_VTFADDRR1_ADDR1_MASK (0x7fffffff)
#define CH32V_PFIC_VTFADDRR2_OFFSET 0x0068
#define CH32V_PFIC_VTFADDRR2      (CH32V_PFIC_BASE + CH32V_PFIC_VTFADDRR2_OFFSET)
#define CH32V_PFIC_VTFADDRR2_VTF2EN (1 <<  0) /* 01: VTF2EN */
#define CH32V_PFIC_VTFADDRR2_ADDR2 (31 <<  1) /* 02: ADDR2 */
#define CH32V_PFIC_VTFADDRR2_ADDR2_MASK (0x7fffffff)
#define CH32V_PFIC_VTFADDRR3_OFFSET 0x006c
#define CH32V_PFIC_VTFADDRR3      (CH32V_PFIC_BASE + CH32V_PFIC_VTFADDRR3_OFFSET)
#define CH32V_PFIC_VTFADDRR3_VTF3EN (1 <<  0) /* 01: VTF3EN */
#define CH32V_PFIC_VTFADDRR3_ADDR3 (31 <<  1) /* 02: ADDR3 */
#define CH32V_PFIC_VTFADDRR3_ADDR3_MASK (0x7fffffff)
#define CH32V_PFIC_IENR1_OFFSET   0x0100
#define CH32V_PFIC_IENR1          (CH32V_PFIC_BASE + CH32V_PFIC_IENR1_OFFSET)
#define CH32V_PFIC_IENR1_INTEN    (20 << 12) /* 1000: INTEN */
#define CH32V_PFIC_IENR1_INTEN_MASK    (0xfffff)
#define CH32V_PFIC_IENR2_OFFSET   0x0104
#define CH32V_PFIC_IENR2          (CH32V_PFIC_BASE + CH32V_PFIC_IENR2_OFFSET)
#define CH32V_PFIC_IENR2_INTEN    (32 <<  0) /* 01: INTEN */
#define CH32V_PFIC_IENR2_INTEN_MASK    (0xffffffff)
#define CH32V_PFIC_IENR3_OFFSET   0x0108
#define CH32V_PFIC_IENR3          (CH32V_PFIC_BASE + CH32V_PFIC_IENR3_OFFSET)
#define CH32V_PFIC_IENR3_INTEN    (32 <<  0) /* 01: INTEN */
#define CH32V_PFIC_IENR3_INTEN_MASK    (0xffffffff)
#define CH32V_PFIC_IENR4_OFFSET   0x010c
#define CH32V_PFIC_IENR4          (CH32V_PFIC_BASE + CH32V_PFIC_IENR4_OFFSET)
#define CH32V_PFIC_IENR4_INTEN    (8 <<  0) /* 01: INTEN */
#define CH32V_PFIC_IENR4_INTEN_MASK    (0xff)
#define CH32V_PFIC_IRER1_OFFSET   0x0180
#define CH32V_PFIC_IRER1          (CH32V_PFIC_BASE + CH32V_PFIC_IRER1_OFFSET)
#define CH32V_PFIC_IRER1_INTRSET  (20 << 12) /* 1000: INTRSET */
#define CH32V_PFIC_IRER1_INTRSET_MASK  (0xfffff)
#define CH32V_PFIC_IRER2_OFFSET   0x0184
#define CH32V_PFIC_IRER2          (CH32V_PFIC_BASE + CH32V_PFIC_IRER2_OFFSET)
#define CH32V_PFIC_IRER2_INTRSET  (32 <<  0) /* 01: INTRSET */
#define CH32V_PFIC_IRER2_INTRSET_MASK  (0xffffffff)
#define CH32V_PFIC_IRER3_OFFSET   0x0188
#define CH32V_PFIC_IRER3          (CH32V_PFIC_BASE + CH32V_PFIC_IRER3_OFFSET)
#define CH32V_PFIC_IRER3_INTRSET  (32 <<  0) /* 01: INTRSET */
#define CH32V_PFIC_IRER3_INTRSET_MASK  (0xffffffff)
#define CH32V_PFIC_IRER4_OFFSET   0x018c
#define CH32V_PFIC_IRER4          (CH32V_PFIC_BASE + CH32V_PFIC_IRER4_OFFSET)
#define CH32V_PFIC_IRER4_INTRSET  (8 <<  0) /* 01: INTRSET */
#define CH32V_PFIC_IRER4_INTRSET_MASK  (0xff)
#define CH32V_PFIC_IPSR1_OFFSET   0x0200
#define CH32V_PFIC_IPSR1          (CH32V_PFIC_BASE + CH32V_PFIC_IPSR1_OFFSET)
#define CH32V_PFIC_IPSR1_PENDSET2_3 (2 <<  2) /* 04: PENDSET */
#define CH32V_PFIC_IPSR1_PENDSET2_3_MASK (0x03)
#define CH32V_PFIC_IPSR1_PENDSET12_31 (20 << 12) /* 1000: PENDSET */
#define CH32V_PFIC_IPSR1_PENDSET12_31_MASK (0xfffff)
#define CH32V_PFIC_IPSR2_OFFSET   0x0204
#define CH32V_PFIC_IPSR2          (CH32V_PFIC_BASE + CH32V_PFIC_IPSR2_OFFSET)
#define CH32V_PFIC_IPSR2_PENDSET  (32 <<  0) /* 01: PENDSET */
#define CH32V_PFIC_IPSR2_PENDSET_MASK  (0xffffffff)
#define CH32V_PFIC_IPSR3_OFFSET   0x0208
#define CH32V_PFIC_IPSR3          (CH32V_PFIC_BASE + CH32V_PFIC_IPSR3_OFFSET)
#define CH32V_PFIC_IPSR3_PENDSET  (32 <<  0) /* 01: PENDSET */
#define CH32V_PFIC_IPSR3_PENDSET_MASK  (0xffffffff)
#define CH32V_PFIC_IPSR4_OFFSET   0x020c
#define CH32V_PFIC_IPSR4          (CH32V_PFIC_BASE + CH32V_PFIC_IPSR4_OFFSET)
#define CH32V_PFIC_IPSR4_PENDSET  (8 <<  0) /* 01: PENDSET */
#define CH32V_PFIC_IPSR4_PENDSET_MASK  (0xff)
#define CH32V_PFIC_IPRR1_OFFSET   0x0280
#define CH32V_PFIC_IPRR1          (CH32V_PFIC_BASE + CH32V_PFIC_IPRR1_OFFSET)
#define CH32V_PFIC_IPRR1_PENDRESET2_3 (2 <<  2) /* 04: PENDRESET */
#define CH32V_PFIC_IPRR1_PENDRESET2_3_MASK (0x03)
#define CH32V_PFIC_IPRR1_PENDRESET12_31 (20 << 12) /* 1000: PENDRESET */
#define CH32V_PFIC_IPRR1_PENDRESET12_31_MASK (0xfffff)
#define CH32V_PFIC_IPRR2_OFFSET   0x0284
#define CH32V_PFIC_IPRR2          (CH32V_PFIC_BASE + CH32V_PFIC_IPRR2_OFFSET)
#define CH32V_PFIC_IPRR2_PENDRESET (32 <<  0) /* 01: PENDRESET */
#define CH32V_PFIC_IPRR2_PENDRESET_MASK (0xffffffff)
#define CH32V_PFIC_IPRR3_OFFSET   0x0288
#define CH32V_PFIC_IPRR3          (CH32V_PFIC_BASE + CH32V_PFIC_IPRR3_OFFSET)
#define CH32V_PFIC_IPRR3_PENDRESET (32 <<  0) /* 01: PENDRESET */
#define CH32V_PFIC_IPRR3_PENDRESET_MASK (0xffffffff)
#define CH32V_PFIC_IPRR4_OFFSET   0x028c
#define CH32V_PFIC_IPRR4          (CH32V_PFIC_BASE + CH32V_PFIC_IPRR4_OFFSET)
#define CH32V_PFIC_IPRR4_PENDRESET (8 <<  0) /* 01: PENDRESET */
#define CH32V_PFIC_IPRR4_PENDRESET_MASK (0xff)
#define CH32V_PFIC_IACTR1_OFFSET  0x0300
#define CH32V_PFIC_IACTR1         (CH32V_PFIC_BASE + CH32V_PFIC_IACTR1_OFFSET)
#define CH32V_PFIC_IACTR1_IACTS2_3 (2 <<  2) /* 04: IACTS */
#define CH32V_PFIC_IACTR1_IACTS2_3_MASK (0x03)
#define CH32V_PFIC_IACTR1_IACTS12_31 (20 << 12) /* 1000: IACTS */
#define CH32V_PFIC_IACTR1_IACTS12_31_MASK (0xfffff)
#define CH32V_PFIC_IACTR2_OFFSET  0x0304
#define CH32V_PFIC_IACTR2         (CH32V_PFIC_BASE + CH32V_PFIC_IACTR2_OFFSET)
#define CH32V_PFIC_IACTR2_IACTS   (32 <<  0) /* 01: IACTS */
#define CH32V_PFIC_IACTR2_IACTS_MASK   (0xffffffff)
#define CH32V_PFIC_IACTR3_OFFSET  0x0308
#define CH32V_PFIC_IACTR3         (CH32V_PFIC_BASE + CH32V_PFIC_IACTR3_OFFSET)
#define CH32V_PFIC_IACTR3_IACTS   (32 <<  0) /* 01: IACTS */
#define CH32V_PFIC_IACTR3_IACTS_MASK   (0xffffffff)
#define CH32V_PFIC_IACTR4_OFFSET  0x030c
#define CH32V_PFIC_IACTR4         (CH32V_PFIC_BASE + CH32V_PFIC_IACTR4_OFFSET)
#define CH32V_PFIC_IACTR4_IACTS   (8 <<  0) /* 01: IACTS */
#define CH32V_PFIC_IACTR4_IACTS_MASK   (0xff)
#define CH32V_PFIC_IPRIOR0_OFFSET 0x0400
#define CH32V_PFIC_IPRIOR0        (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR0_OFFSET)
#define CH32V_PFIC_IPRIOR1_OFFSET 0x0401
#define CH32V_PFIC_IPRIOR1        (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR1_OFFSET)
#define CH32V_PFIC_IPRIOR2_OFFSET 0x0402
#define CH32V_PFIC_IPRIOR2        (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR2_OFFSET)
#define CH32V_PFIC_IPRIOR3_OFFSET 0x0403
#define CH32V_PFIC_IPRIOR3        (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR3_OFFSET)
#define CH32V_PFIC_IPRIOR4_OFFSET 0x0404
#define CH32V_PFIC_IPRIOR4        (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR4_OFFSET)
#define CH32V_PFIC_IPRIOR5_OFFSET 0x0405
#define CH32V_PFIC_IPRIOR5        (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR5_OFFSET)
#define CH32V_PFIC_IPRIOR6_OFFSET 0x0406
#define CH32V_PFIC_IPRIOR6        (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR6_OFFSET)
#define CH32V_PFIC_IPRIOR7_OFFSET 0x0407
#define CH32V_PFIC_IPRIOR7        (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR7_OFFSET)
#define CH32V_PFIC_IPRIOR8_OFFSET 0x0408
#define CH32V_PFIC_IPRIOR8        (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR8_OFFSET)
#define CH32V_PFIC_IPRIOR9_OFFSET 0x0409
#define CH32V_PFIC_IPRIOR9        (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR9_OFFSET)
#define CH32V_PFIC_IPRIOR10_OFFSET 0x040a
#define CH32V_PFIC_IPRIOR10       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR10_OFFSET)
#define CH32V_PFIC_IPRIOR11_OFFSET 0x040b
#define CH32V_PFIC_IPRIOR11       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR11_OFFSET)
#define CH32V_PFIC_IPRIOR12_OFFSET 0x040c
#define CH32V_PFIC_IPRIOR12       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR12_OFFSET)
#define CH32V_PFIC_IPRIOR13_OFFSET 0x040d
#define CH32V_PFIC_IPRIOR13       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR13_OFFSET)
#define CH32V_PFIC_IPRIOR14_OFFSET 0x040e
#define CH32V_PFIC_IPRIOR14       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR14_OFFSET)
#define CH32V_PFIC_IPRIOR15_OFFSET 0x040f
#define CH32V_PFIC_IPRIOR15       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR15_OFFSET)
#define CH32V_PFIC_IPRIOR16_OFFSET 0x0410
#define CH32V_PFIC_IPRIOR16       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR16_OFFSET)
#define CH32V_PFIC_IPRIOR17_OFFSET 0x0411
#define CH32V_PFIC_IPRIOR17       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR17_OFFSET)
#define CH32V_PFIC_IPRIOR18_OFFSET 0x0412
#define CH32V_PFIC_IPRIOR18       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR18_OFFSET)
#define CH32V_PFIC_IPRIOR19_OFFSET 0x0413
#define CH32V_PFIC_IPRIOR19       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR19_OFFSET)
#define CH32V_PFIC_IPRIOR20_OFFSET 0x0414
#define CH32V_PFIC_IPRIOR20       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR20_OFFSET)
#define CH32V_PFIC_IPRIOR21_OFFSET 0x0415
#define CH32V_PFIC_IPRIOR21       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR21_OFFSET)
#define CH32V_PFIC_IPRIOR22_OFFSET 0x0416
#define CH32V_PFIC_IPRIOR22       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR22_OFFSET)
#define CH32V_PFIC_IPRIOR23_OFFSET 0x0417
#define CH32V_PFIC_IPRIOR23       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR23_OFFSET)
#define CH32V_PFIC_IPRIOR24_OFFSET 0x0418
#define CH32V_PFIC_IPRIOR24       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR24_OFFSET)
#define CH32V_PFIC_IPRIOR25_OFFSET 0x0419
#define CH32V_PFIC_IPRIOR25       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR25_OFFSET)
#define CH32V_PFIC_IPRIOR26_OFFSET 0x041a
#define CH32V_PFIC_IPRIOR26       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR26_OFFSET)
#define CH32V_PFIC_IPRIOR27_OFFSET 0x041b
#define CH32V_PFIC_IPRIOR27       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR27_OFFSET)
#define CH32V_PFIC_IPRIOR28_OFFSET 0x041c
#define CH32V_PFIC_IPRIOR28       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR28_OFFSET)
#define CH32V_PFIC_IPRIOR29_OFFSET 0x041d
#define CH32V_PFIC_IPRIOR29       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR29_OFFSET)
#define CH32V_PFIC_IPRIOR30_OFFSET 0x041e
#define CH32V_PFIC_IPRIOR30       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR30_OFFSET)
#define CH32V_PFIC_IPRIOR31_OFFSET 0x041f
#define CH32V_PFIC_IPRIOR31       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR31_OFFSET)
#define CH32V_PFIC_IPRIOR32_OFFSET 0x0420
#define CH32V_PFIC_IPRIOR32       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR32_OFFSET)
#define CH32V_PFIC_IPRIOR33_OFFSET 0x0421
#define CH32V_PFIC_IPRIOR33       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR33_OFFSET)
#define CH32V_PFIC_IPRIOR34_OFFSET 0x0422
#define CH32V_PFIC_IPRIOR34       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR34_OFFSET)
#define CH32V_PFIC_IPRIOR35_OFFSET 0x0423
#define CH32V_PFIC_IPRIOR35       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR35_OFFSET)
#define CH32V_PFIC_IPRIOR36_OFFSET 0x0424
#define CH32V_PFIC_IPRIOR36       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR36_OFFSET)
#define CH32V_PFIC_IPRIOR37_OFFSET 0x0425
#define CH32V_PFIC_IPRIOR37       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR37_OFFSET)
#define CH32V_PFIC_IPRIOR38_OFFSET 0x0426
#define CH32V_PFIC_IPRIOR38       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR38_OFFSET)
#define CH32V_PFIC_IPRIOR39_OFFSET 0x0427
#define CH32V_PFIC_IPRIOR39       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR39_OFFSET)
#define CH32V_PFIC_IPRIOR40_OFFSET 0x0428
#define CH32V_PFIC_IPRIOR40       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR40_OFFSET)
#define CH32V_PFIC_IPRIOR41_OFFSET 0x0429
#define CH32V_PFIC_IPRIOR41       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR41_OFFSET)
#define CH32V_PFIC_IPRIOR42_OFFSET 0x042a
#define CH32V_PFIC_IPRIOR42       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR42_OFFSET)
#define CH32V_PFIC_IPRIOR43_OFFSET 0x042b
#define CH32V_PFIC_IPRIOR43       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR43_OFFSET)
#define CH32V_PFIC_IPRIOR44_OFFSET 0x042c
#define CH32V_PFIC_IPRIOR44       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR44_OFFSET)
#define CH32V_PFIC_IPRIOR45_OFFSET 0x042d
#define CH32V_PFIC_IPRIOR45       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR45_OFFSET)
#define CH32V_PFIC_IPRIOR46_OFFSET 0x042e
#define CH32V_PFIC_IPRIOR46       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR46_OFFSET)
#define CH32V_PFIC_IPRIOR47_OFFSET 0x042f
#define CH32V_PFIC_IPRIOR47       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR47_OFFSET)
#define CH32V_PFIC_IPRIOR48_OFFSET 0x0430
#define CH32V_PFIC_IPRIOR48       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR48_OFFSET)
#define CH32V_PFIC_IPRIOR49_OFFSET 0x0431
#define CH32V_PFIC_IPRIOR49       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR49_OFFSET)
#define CH32V_PFIC_IPRIOR50_OFFSET 0x0432
#define CH32V_PFIC_IPRIOR50       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR50_OFFSET)
#define CH32V_PFIC_IPRIOR51_OFFSET 0x0433
#define CH32V_PFIC_IPRIOR51       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR51_OFFSET)
#define CH32V_PFIC_IPRIOR52_OFFSET 0x0434
#define CH32V_PFIC_IPRIOR52       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR52_OFFSET)
#define CH32V_PFIC_IPRIOR53_OFFSET 0x0435
#define CH32V_PFIC_IPRIOR53       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR53_OFFSET)
#define CH32V_PFIC_IPRIOR54_OFFSET 0x0436
#define CH32V_PFIC_IPRIOR54       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR54_OFFSET)
#define CH32V_PFIC_IPRIOR55_OFFSET 0x0437
#define CH32V_PFIC_IPRIOR55       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR55_OFFSET)
#define CH32V_PFIC_IPRIOR56_OFFSET 0x0438
#define CH32V_PFIC_IPRIOR56       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR56_OFFSET)
#define CH32V_PFIC_IPRIOR57_OFFSET 0x0439
#define CH32V_PFIC_IPRIOR57       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR57_OFFSET)
#define CH32V_PFIC_IPRIOR58_OFFSET 0x043a
#define CH32V_PFIC_IPRIOR58       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR58_OFFSET)
#define CH32V_PFIC_IPRIOR59_OFFSET 0x043b
#define CH32V_PFIC_IPRIOR59       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR59_OFFSET)
#define CH32V_PFIC_IPRIOR60_OFFSET 0x043c
#define CH32V_PFIC_IPRIOR60       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR60_OFFSET)
#define CH32V_PFIC_IPRIOR61_OFFSET 0x043d
#define CH32V_PFIC_IPRIOR61       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR61_OFFSET)
#define CH32V_PFIC_IPRIOR62_OFFSET 0x043e
#define CH32V_PFIC_IPRIOR62       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR62_OFFSET)
#define CH32V_PFIC_IPRIOR63_OFFSET 0x043f
#define CH32V_PFIC_IPRIOR63       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR63_OFFSET)
#define CH32V_PFIC_IPRIOR64_OFFSET 0x0440
#define CH32V_PFIC_IPRIOR64       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR64_OFFSET)
#define CH32V_PFIC_IPRIOR65_OFFSET 0x0441
#define CH32V_PFIC_IPRIOR65       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR65_OFFSET)
#define CH32V_PFIC_IPRIOR66_OFFSET 0x0442
#define CH32V_PFIC_IPRIOR66       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR66_OFFSET)
#define CH32V_PFIC_IPRIOR67_OFFSET 0x0443
#define CH32V_PFIC_IPRIOR67       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR67_OFFSET)
#define CH32V_PFIC_IPRIOR68_OFFSET 0x0444
#define CH32V_PFIC_IPRIOR68       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR68_OFFSET)
#define CH32V_PFIC_IPRIOR69_OFFSET 0x0445
#define CH32V_PFIC_IPRIOR69       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR69_OFFSET)
#define CH32V_PFIC_IPRIOR70_OFFSET 0x0446
#define CH32V_PFIC_IPRIOR70       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR70_OFFSET)
#define CH32V_PFIC_IPRIOR71_OFFSET 0x0447
#define CH32V_PFIC_IPRIOR71       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR71_OFFSET)
#define CH32V_PFIC_IPRIOR72_OFFSET 0x0448
#define CH32V_PFIC_IPRIOR72       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR72_OFFSET)
#define CH32V_PFIC_IPRIOR73_OFFSET 0x0449
#define CH32V_PFIC_IPRIOR73       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR73_OFFSET)
#define CH32V_PFIC_IPRIOR74_OFFSET 0x044a
#define CH32V_PFIC_IPRIOR74       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR74_OFFSET)
#define CH32V_PFIC_IPRIOR75_OFFSET 0x044b
#define CH32V_PFIC_IPRIOR75       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR75_OFFSET)
#define CH32V_PFIC_IPRIOR76_OFFSET 0x044c
#define CH32V_PFIC_IPRIOR76       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR76_OFFSET)
#define CH32V_PFIC_IPRIOR77_OFFSET 0x044d
#define CH32V_PFIC_IPRIOR77       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR77_OFFSET)
#define CH32V_PFIC_IPRIOR78_OFFSET 0x044e
#define CH32V_PFIC_IPRIOR78       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR78_OFFSET)
#define CH32V_PFIC_IPRIOR79_OFFSET 0x044f
#define CH32V_PFIC_IPRIOR79       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR79_OFFSET)
#define CH32V_PFIC_IPRIOR80_OFFSET 0x0450
#define CH32V_PFIC_IPRIOR80       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR80_OFFSET)
#define CH32V_PFIC_IPRIOR81_OFFSET 0x0451
#define CH32V_PFIC_IPRIOR81       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR81_OFFSET)
#define CH32V_PFIC_IPRIOR82_OFFSET 0x0452
#define CH32V_PFIC_IPRIOR82       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR82_OFFSET)
#define CH32V_PFIC_IPRIOR83_OFFSET 0x0453
#define CH32V_PFIC_IPRIOR83       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR83_OFFSET)
#define CH32V_PFIC_IPRIOR84_OFFSET 0x0454
#define CH32V_PFIC_IPRIOR84       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR84_OFFSET)
#define CH32V_PFIC_IPRIOR85_OFFSET 0x0455
#define CH32V_PFIC_IPRIOR85       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR85_OFFSET)
#define CH32V_PFIC_IPRIOR86_OFFSET 0x0456
#define CH32V_PFIC_IPRIOR86       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR86_OFFSET)
#define CH32V_PFIC_IPRIOR87_OFFSET 0x0457
#define CH32V_PFIC_IPRIOR87       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR87_OFFSET)
#define CH32V_PFIC_IPRIOR88_OFFSET 0x0458
#define CH32V_PFIC_IPRIOR88       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR88_OFFSET)
#define CH32V_PFIC_IPRIOR89_OFFSET 0x0459
#define CH32V_PFIC_IPRIOR89       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR89_OFFSET)
#define CH32V_PFIC_IPRIOR90_OFFSET 0x045a
#define CH32V_PFIC_IPRIOR90       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR90_OFFSET)
#define CH32V_PFIC_IPRIOR91_OFFSET 0x045b
#define CH32V_PFIC_IPRIOR91       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR91_OFFSET)
#define CH32V_PFIC_IPRIOR92_OFFSET 0x045c
#define CH32V_PFIC_IPRIOR92       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR92_OFFSET)
#define CH32V_PFIC_IPRIOR93_OFFSET 0x045d
#define CH32V_PFIC_IPRIOR93       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR93_OFFSET)
#define CH32V_PFIC_IPRIOR94_OFFSET 0x045e
#define CH32V_PFIC_IPRIOR94       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR94_OFFSET)
#define CH32V_PFIC_IPRIOR95_OFFSET 0x045f
#define CH32V_PFIC_IPRIOR95       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR95_OFFSET)
#define CH32V_PFIC_IPRIOR96_OFFSET 0x0460
#define CH32V_PFIC_IPRIOR96       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR96_OFFSET)
#define CH32V_PFIC_IPRIOR97_OFFSET 0x0461
#define CH32V_PFIC_IPRIOR97       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR97_OFFSET)
#define CH32V_PFIC_IPRIOR98_OFFSET 0x0462
#define CH32V_PFIC_IPRIOR98       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR98_OFFSET)
#define CH32V_PFIC_IPRIOR99_OFFSET 0x0463
#define CH32V_PFIC_IPRIOR99       (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR99_OFFSET)
#define CH32V_PFIC_IPRIOR100_OFFSET 0x0464
#define CH32V_PFIC_IPRIOR100      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR100_OFFSET)
#define CH32V_PFIC_IPRIOR101_OFFSET 0x0465
#define CH32V_PFIC_IPRIOR101      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR101_OFFSET)
#define CH32V_PFIC_IPRIOR102_OFFSET 0x0466
#define CH32V_PFIC_IPRIOR102      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR102_OFFSET)
#define CH32V_PFIC_IPRIOR103_OFFSET 0x0467
#define CH32V_PFIC_IPRIOR103      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR103_OFFSET)
#define CH32V_PFIC_IPRIOR104_OFFSET 0x0468
#define CH32V_PFIC_IPRIOR104      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR104_OFFSET)
#define CH32V_PFIC_IPRIOR105_OFFSET 0x0469
#define CH32V_PFIC_IPRIOR105      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR105_OFFSET)
#define CH32V_PFIC_IPRIOR106_OFFSET 0x046a
#define CH32V_PFIC_IPRIOR106      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR106_OFFSET)
#define CH32V_PFIC_IPRIOR107_OFFSET 0x046b
#define CH32V_PFIC_IPRIOR107      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR107_OFFSET)
#define CH32V_PFIC_IPRIOR108_OFFSET 0x046c
#define CH32V_PFIC_IPRIOR108      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR108_OFFSET)
#define CH32V_PFIC_IPRIOR109_OFFSET 0x046d
#define CH32V_PFIC_IPRIOR109      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR109_OFFSET)
#define CH32V_PFIC_IPRIOR110_OFFSET 0x046e
#define CH32V_PFIC_IPRIOR110      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR110_OFFSET)
#define CH32V_PFIC_IPRIOR111_OFFSET 0x046f
#define CH32V_PFIC_IPRIOR111      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR111_OFFSET)
#define CH32V_PFIC_IPRIOR112_OFFSET 0x0470
#define CH32V_PFIC_IPRIOR112      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR112_OFFSET)
#define CH32V_PFIC_IPRIOR113_OFFSET 0x0471
#define CH32V_PFIC_IPRIOR113      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR113_OFFSET)
#define CH32V_PFIC_IPRIOR114_OFFSET 0x0472
#define CH32V_PFIC_IPRIOR114      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR114_OFFSET)
#define CH32V_PFIC_IPRIOR115_OFFSET 0x0473
#define CH32V_PFIC_IPRIOR115      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR115_OFFSET)
#define CH32V_PFIC_IPRIOR116_OFFSET 0x0474
#define CH32V_PFIC_IPRIOR116      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR116_OFFSET)
#define CH32V_PFIC_IPRIOR117_OFFSET 0x0475
#define CH32V_PFIC_IPRIOR117      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR117_OFFSET)
#define CH32V_PFIC_IPRIOR118_OFFSET 0x0476
#define CH32V_PFIC_IPRIOR118      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR118_OFFSET)
#define CH32V_PFIC_IPRIOR119_OFFSET 0x0477
#define CH32V_PFIC_IPRIOR119      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR119_OFFSET)
#define CH32V_PFIC_IPRIOR120_OFFSET 0x0478
#define CH32V_PFIC_IPRIOR120      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR120_OFFSET)
#define CH32V_PFIC_IPRIOR121_OFFSET 0x0479
#define CH32V_PFIC_IPRIOR121      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR121_OFFSET)
#define CH32V_PFIC_IPRIOR122_OFFSET 0x047a
#define CH32V_PFIC_IPRIOR122      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR122_OFFSET)
#define CH32V_PFIC_IPRIOR123_OFFSET 0x047b
#define CH32V_PFIC_IPRIOR123      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR123_OFFSET)
#define CH32V_PFIC_IPRIOR124_OFFSET 0x047c
#define CH32V_PFIC_IPRIOR124      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR124_OFFSET)
#define CH32V_PFIC_IPRIOR125_OFFSET 0x047d
#define CH32V_PFIC_IPRIOR125      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR125_OFFSET)
#define CH32V_PFIC_IPRIOR126_OFFSET 0x047e
#define CH32V_PFIC_IPRIOR126      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR126_OFFSET)
#define CH32V_PFIC_IPRIOR127_OFFSET 0x047f
#define CH32V_PFIC_IPRIOR127      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR127_OFFSET)
#define CH32V_PFIC_IPRIOR128_OFFSET 0x0480
#define CH32V_PFIC_IPRIOR128      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR128_OFFSET)
#define CH32V_PFIC_IPRIOR129_OFFSET 0x0481
#define CH32V_PFIC_IPRIOR129      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR129_OFFSET)
#define CH32V_PFIC_IPRIOR130_OFFSET 0x0482
#define CH32V_PFIC_IPRIOR130      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR130_OFFSET)
#define CH32V_PFIC_IPRIOR131_OFFSET 0x0483
#define CH32V_PFIC_IPRIOR131      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR131_OFFSET)
#define CH32V_PFIC_IPRIOR132_OFFSET 0x0484
#define CH32V_PFIC_IPRIOR132      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR132_OFFSET)
#define CH32V_PFIC_IPRIOR133_OFFSET 0x0485
#define CH32V_PFIC_IPRIOR133      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR133_OFFSET)
#define CH32V_PFIC_IPRIOR134_OFFSET 0x0486
#define CH32V_PFIC_IPRIOR134      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR134_OFFSET)
#define CH32V_PFIC_IPRIOR135_OFFSET 0x0487
#define CH32V_PFIC_IPRIOR135      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR135_OFFSET)
#define CH32V_PFIC_IPRIOR136_OFFSET 0x0488
#define CH32V_PFIC_IPRIOR136      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR136_OFFSET)
#define CH32V_PFIC_IPRIOR137_OFFSET 0x0489
#define CH32V_PFIC_IPRIOR137      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR137_OFFSET)
#define CH32V_PFIC_IPRIOR138_OFFSET 0x048a
#define CH32V_PFIC_IPRIOR138      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR138_OFFSET)
#define CH32V_PFIC_IPRIOR139_OFFSET 0x048b
#define CH32V_PFIC_IPRIOR139      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR139_OFFSET)
#define CH32V_PFIC_IPRIOR140_OFFSET 0x048c
#define CH32V_PFIC_IPRIOR140      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR140_OFFSET)
#define CH32V_PFIC_IPRIOR141_OFFSET 0x048d
#define CH32V_PFIC_IPRIOR141      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR141_OFFSET)
#define CH32V_PFIC_IPRIOR142_OFFSET 0x048e
#define CH32V_PFIC_IPRIOR142      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR142_OFFSET)
#define CH32V_PFIC_IPRIOR143_OFFSET 0x048f
#define CH32V_PFIC_IPRIOR143      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR143_OFFSET)
#define CH32V_PFIC_IPRIOR144_OFFSET 0x0490
#define CH32V_PFIC_IPRIOR144      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR144_OFFSET)
#define CH32V_PFIC_IPRIOR145_OFFSET 0x0491
#define CH32V_PFIC_IPRIOR145      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR145_OFFSET)
#define CH32V_PFIC_IPRIOR146_OFFSET 0x0492
#define CH32V_PFIC_IPRIOR146      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR146_OFFSET)
#define CH32V_PFIC_IPRIOR147_OFFSET 0x0493
#define CH32V_PFIC_IPRIOR147      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR147_OFFSET)
#define CH32V_PFIC_IPRIOR148_OFFSET 0x0494
#define CH32V_PFIC_IPRIOR148      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR148_OFFSET)
#define CH32V_PFIC_IPRIOR149_OFFSET 0x0495
#define CH32V_PFIC_IPRIOR149      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR149_OFFSET)
#define CH32V_PFIC_IPRIOR150_OFFSET 0x0496
#define CH32V_PFIC_IPRIOR150      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR150_OFFSET)
#define CH32V_PFIC_IPRIOR151_OFFSET 0x0497
#define CH32V_PFIC_IPRIOR151      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR151_OFFSET)
#define CH32V_PFIC_IPRIOR152_OFFSET 0x0498
#define CH32V_PFIC_IPRIOR152      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR152_OFFSET)
#define CH32V_PFIC_IPRIOR153_OFFSET 0x0499
#define CH32V_PFIC_IPRIOR153      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR153_OFFSET)
#define CH32V_PFIC_IPRIOR154_OFFSET 0x049a
#define CH32V_PFIC_IPRIOR154      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR154_OFFSET)
#define CH32V_PFIC_IPRIOR155_OFFSET 0x049b
#define CH32V_PFIC_IPRIOR155      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR155_OFFSET)
#define CH32V_PFIC_IPRIOR156_OFFSET 0x049c
#define CH32V_PFIC_IPRIOR156      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR156_OFFSET)
#define CH32V_PFIC_IPRIOR157_OFFSET 0x049d
#define CH32V_PFIC_IPRIOR157      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR157_OFFSET)
#define CH32V_PFIC_IPRIOR158_OFFSET 0x049e
#define CH32V_PFIC_IPRIOR158      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR158_OFFSET)
#define CH32V_PFIC_IPRIOR159_OFFSET 0x049f
#define CH32V_PFIC_IPRIOR159      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR159_OFFSET)
#define CH32V_PFIC_IPRIOR160_OFFSET 0x04a0
#define CH32V_PFIC_IPRIOR160      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR160_OFFSET)
#define CH32V_PFIC_IPRIOR161_OFFSET 0x04a1
#define CH32V_PFIC_IPRIOR161      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR161_OFFSET)
#define CH32V_PFIC_IPRIOR162_OFFSET 0x04a2
#define CH32V_PFIC_IPRIOR162      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR162_OFFSET)
#define CH32V_PFIC_IPRIOR163_OFFSET 0x04a3
#define CH32V_PFIC_IPRIOR163      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR163_OFFSET)
#define CH32V_PFIC_IPRIOR164_OFFSET 0x04a4
#define CH32V_PFIC_IPRIOR164      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR164_OFFSET)
#define CH32V_PFIC_IPRIOR165_OFFSET 0x04a5
#define CH32V_PFIC_IPRIOR165      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR165_OFFSET)
#define CH32V_PFIC_IPRIOR166_OFFSET 0x04a6
#define CH32V_PFIC_IPRIOR166      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR166_OFFSET)
#define CH32V_PFIC_IPRIOR167_OFFSET 0x04a7
#define CH32V_PFIC_IPRIOR167      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR167_OFFSET)
#define CH32V_PFIC_IPRIOR168_OFFSET 0x04a8
#define CH32V_PFIC_IPRIOR168      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR168_OFFSET)
#define CH32V_PFIC_IPRIOR169_OFFSET 0x04a9
#define CH32V_PFIC_IPRIOR169      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR169_OFFSET)
#define CH32V_PFIC_IPRIOR170_OFFSET 0x04aa
#define CH32V_PFIC_IPRIOR170      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR170_OFFSET)
#define CH32V_PFIC_IPRIOR171_OFFSET 0x04ab
#define CH32V_PFIC_IPRIOR171      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR171_OFFSET)
#define CH32V_PFIC_IPRIOR172_OFFSET 0x04ac
#define CH32V_PFIC_IPRIOR172      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR172_OFFSET)
#define CH32V_PFIC_IPRIOR173_OFFSET 0x04ad
#define CH32V_PFIC_IPRIOR173      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR173_OFFSET)
#define CH32V_PFIC_IPRIOR174_OFFSET 0x04ae
#define CH32V_PFIC_IPRIOR174      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR174_OFFSET)
#define CH32V_PFIC_IPRIOR175_OFFSET 0x04af
#define CH32V_PFIC_IPRIOR175      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR175_OFFSET)
#define CH32V_PFIC_IPRIOR176_OFFSET 0x04b0
#define CH32V_PFIC_IPRIOR176      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR176_OFFSET)
#define CH32V_PFIC_IPRIOR177_OFFSET 0x04b1
#define CH32V_PFIC_IPRIOR177      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR177_OFFSET)
#define CH32V_PFIC_IPRIOR178_OFFSET 0x04b2
#define CH32V_PFIC_IPRIOR178      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR178_OFFSET)
#define CH32V_PFIC_IPRIOR179_OFFSET 0x04b3
#define CH32V_PFIC_IPRIOR179      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR179_OFFSET)
#define CH32V_PFIC_IPRIOR180_OFFSET 0x04b4
#define CH32V_PFIC_IPRIOR180      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR180_OFFSET)
#define CH32V_PFIC_IPRIOR181_OFFSET 0x04b5
#define CH32V_PFIC_IPRIOR181      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR181_OFFSET)
#define CH32V_PFIC_IPRIOR182_OFFSET 0x04b6
#define CH32V_PFIC_IPRIOR182      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR182_OFFSET)
#define CH32V_PFIC_IPRIOR183_OFFSET 0x04b7
#define CH32V_PFIC_IPRIOR183      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR183_OFFSET)
#define CH32V_PFIC_IPRIOR184_OFFSET 0x04b8
#define CH32V_PFIC_IPRIOR184      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR184_OFFSET)
#define CH32V_PFIC_IPRIOR185_OFFSET 0x04b9
#define CH32V_PFIC_IPRIOR185      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR185_OFFSET)
#define CH32V_PFIC_IPRIOR186_OFFSET 0x04ba
#define CH32V_PFIC_IPRIOR186      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR186_OFFSET)
#define CH32V_PFIC_IPRIOR187_OFFSET 0x04bb
#define CH32V_PFIC_IPRIOR187      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR187_OFFSET)
#define CH32V_PFIC_IPRIOR188_OFFSET 0x04bc
#define CH32V_PFIC_IPRIOR188      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR188_OFFSET)
#define CH32V_PFIC_IPRIOR189_OFFSET 0x04bd
#define CH32V_PFIC_IPRIOR189      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR189_OFFSET)
#define CH32V_PFIC_IPRIOR190_OFFSET 0x04be
#define CH32V_PFIC_IPRIOR190      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR190_OFFSET)
#define CH32V_PFIC_IPRIOR191_OFFSET 0x04bf
#define CH32V_PFIC_IPRIOR191      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR191_OFFSET)
#define CH32V_PFIC_IPRIOR192_OFFSET 0x04c0
#define CH32V_PFIC_IPRIOR192      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR192_OFFSET)
#define CH32V_PFIC_IPRIOR193_OFFSET 0x04c1
#define CH32V_PFIC_IPRIOR193      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR193_OFFSET)
#define CH32V_PFIC_IPRIOR194_OFFSET 0x04c2
#define CH32V_PFIC_IPRIOR194      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR194_OFFSET)
#define CH32V_PFIC_IPRIOR195_OFFSET 0x04c3
#define CH32V_PFIC_IPRIOR195      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR195_OFFSET)
#define CH32V_PFIC_IPRIOR196_OFFSET 0x04c4
#define CH32V_PFIC_IPRIOR196      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR196_OFFSET)
#define CH32V_PFIC_IPRIOR197_OFFSET 0x04c5
#define CH32V_PFIC_IPRIOR197      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR197_OFFSET)
#define CH32V_PFIC_IPRIOR198_OFFSET 0x04c6
#define CH32V_PFIC_IPRIOR198      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR198_OFFSET)
#define CH32V_PFIC_IPRIOR199_OFFSET 0x04c7
#define CH32V_PFIC_IPRIOR199      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR199_OFFSET)
#define CH32V_PFIC_IPRIOR200_OFFSET 0x04c8
#define CH32V_PFIC_IPRIOR200      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR200_OFFSET)
#define CH32V_PFIC_IPRIOR201_OFFSET 0x04c9
#define CH32V_PFIC_IPRIOR201      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR201_OFFSET)
#define CH32V_PFIC_IPRIOR202_OFFSET 0x04ca
#define CH32V_PFIC_IPRIOR202      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR202_OFFSET)
#define CH32V_PFIC_IPRIOR203_OFFSET 0x04cb
#define CH32V_PFIC_IPRIOR203      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR203_OFFSET)
#define CH32V_PFIC_IPRIOR204_OFFSET 0x04cc
#define CH32V_PFIC_IPRIOR204      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR204_OFFSET)
#define CH32V_PFIC_IPRIOR205_OFFSET 0x04cd
#define CH32V_PFIC_IPRIOR205      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR205_OFFSET)
#define CH32V_PFIC_IPRIOR206_OFFSET 0x04ce
#define CH32V_PFIC_IPRIOR206      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR206_OFFSET)
#define CH32V_PFIC_IPRIOR207_OFFSET 0x04cf
#define CH32V_PFIC_IPRIOR207      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR207_OFFSET)
#define CH32V_PFIC_IPRIOR208_OFFSET 0x04d0
#define CH32V_PFIC_IPRIOR208      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR208_OFFSET)
#define CH32V_PFIC_IPRIOR209_OFFSET 0x04d1
#define CH32V_PFIC_IPRIOR209      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR209_OFFSET)
#define CH32V_PFIC_IPRIOR210_OFFSET 0x04d2
#define CH32V_PFIC_IPRIOR210      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR210_OFFSET)
#define CH32V_PFIC_IPRIOR211_OFFSET 0x04d3
#define CH32V_PFIC_IPRIOR211      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR211_OFFSET)
#define CH32V_PFIC_IPRIOR212_OFFSET 0x04d4
#define CH32V_PFIC_IPRIOR212      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR212_OFFSET)
#define CH32V_PFIC_IPRIOR213_OFFSET 0x04d5
#define CH32V_PFIC_IPRIOR213      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR213_OFFSET)
#define CH32V_PFIC_IPRIOR214_OFFSET 0x04d6
#define CH32V_PFIC_IPRIOR214      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR214_OFFSET)
#define CH32V_PFIC_IPRIOR215_OFFSET 0x04d7
#define CH32V_PFIC_IPRIOR215      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR215_OFFSET)
#define CH32V_PFIC_IPRIOR216_OFFSET 0x04d8
#define CH32V_PFIC_IPRIOR216      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR216_OFFSET)
#define CH32V_PFIC_IPRIOR217_OFFSET 0x04d9
#define CH32V_PFIC_IPRIOR217      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR217_OFFSET)
#define CH32V_PFIC_IPRIOR218_OFFSET 0x04da
#define CH32V_PFIC_IPRIOR218      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR218_OFFSET)
#define CH32V_PFIC_IPRIOR219_OFFSET 0x04db
#define CH32V_PFIC_IPRIOR219      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR219_OFFSET)
#define CH32V_PFIC_IPRIOR220_OFFSET 0x04dc
#define CH32V_PFIC_IPRIOR220      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR220_OFFSET)
#define CH32V_PFIC_IPRIOR221_OFFSET 0x04dd
#define CH32V_PFIC_IPRIOR221      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR221_OFFSET)
#define CH32V_PFIC_IPRIOR222_OFFSET 0x04de
#define CH32V_PFIC_IPRIOR222      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR222_OFFSET)
#define CH32V_PFIC_IPRIOR223_OFFSET 0x04df
#define CH32V_PFIC_IPRIOR223      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR223_OFFSET)
#define CH32V_PFIC_IPRIOR224_OFFSET 0x04e0
#define CH32V_PFIC_IPRIOR224      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR224_OFFSET)
#define CH32V_PFIC_IPRIOR225_OFFSET 0x04e1
#define CH32V_PFIC_IPRIOR225      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR225_OFFSET)
#define CH32V_PFIC_IPRIOR226_OFFSET 0x04e2
#define CH32V_PFIC_IPRIOR226      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR226_OFFSET)
#define CH32V_PFIC_IPRIOR227_OFFSET 0x04e3
#define CH32V_PFIC_IPRIOR227      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR227_OFFSET)
#define CH32V_PFIC_IPRIOR228_OFFSET 0x04e4
#define CH32V_PFIC_IPRIOR228      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR228_OFFSET)
#define CH32V_PFIC_IPRIOR229_OFFSET 0x04e5
#define CH32V_PFIC_IPRIOR229      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR229_OFFSET)
#define CH32V_PFIC_IPRIOR230_OFFSET 0x04e6
#define CH32V_PFIC_IPRIOR230      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR230_OFFSET)
#define CH32V_PFIC_IPRIOR231_OFFSET 0x04e7
#define CH32V_PFIC_IPRIOR231      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR231_OFFSET)
#define CH32V_PFIC_IPRIOR232_OFFSET 0x04e8
#define CH32V_PFIC_IPRIOR232      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR232_OFFSET)
#define CH32V_PFIC_IPRIOR233_OFFSET 0x04e9
#define CH32V_PFIC_IPRIOR233      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR233_OFFSET)
#define CH32V_PFIC_IPRIOR234_OFFSET 0x04ea
#define CH32V_PFIC_IPRIOR234      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR234_OFFSET)
#define CH32V_PFIC_IPRIOR235_OFFSET 0x04eb
#define CH32V_PFIC_IPRIOR235      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR235_OFFSET)
#define CH32V_PFIC_IPRIOR236_OFFSET 0x04ec
#define CH32V_PFIC_IPRIOR236      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR236_OFFSET)
#define CH32V_PFIC_IPRIOR237_OFFSET 0x04ed
#define CH32V_PFIC_IPRIOR237      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR237_OFFSET)
#define CH32V_PFIC_IPRIOR238_OFFSET 0x04ee
#define CH32V_PFIC_IPRIOR238      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR238_OFFSET)
#define CH32V_PFIC_IPRIOR239_OFFSET 0x04ef
#define CH32V_PFIC_IPRIOR239      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR239_OFFSET)
#define CH32V_PFIC_IPRIOR240_OFFSET 0x04f0
#define CH32V_PFIC_IPRIOR240      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR240_OFFSET)
#define CH32V_PFIC_IPRIOR241_OFFSET 0x04f1
#define CH32V_PFIC_IPRIOR241      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR241_OFFSET)
#define CH32V_PFIC_IPRIOR242_OFFSET 0x04f2
#define CH32V_PFIC_IPRIOR242      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR242_OFFSET)
#define CH32V_PFIC_IPRIOR243_OFFSET 0x04f3
#define CH32V_PFIC_IPRIOR243      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR243_OFFSET)
#define CH32V_PFIC_IPRIOR244_OFFSET 0x04f4
#define CH32V_PFIC_IPRIOR244      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR244_OFFSET)
#define CH32V_PFIC_IPRIOR245_OFFSET 0x04f5
#define CH32V_PFIC_IPRIOR245      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR245_OFFSET)
#define CH32V_PFIC_IPRIOR246_OFFSET 0x04f6
#define CH32V_PFIC_IPRIOR246      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR246_OFFSET)
#define CH32V_PFIC_IPRIOR247_OFFSET 0x04f7
#define CH32V_PFIC_IPRIOR247      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR247_OFFSET)
#define CH32V_PFIC_IPRIOR248_OFFSET 0x04f8
#define CH32V_PFIC_IPRIOR248      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR248_OFFSET)
#define CH32V_PFIC_IPRIOR249_OFFSET 0x04f9
#define CH32V_PFIC_IPRIOR249      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR249_OFFSET)
#define CH32V_PFIC_IPRIOR250_OFFSET 0x04fa
#define CH32V_PFIC_IPRIOR250      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR250_OFFSET)
#define CH32V_PFIC_IPRIOR251_OFFSET 0x04fb
#define CH32V_PFIC_IPRIOR251      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR251_OFFSET)
#define CH32V_PFIC_IPRIOR252_OFFSET 0x04fc
#define CH32V_PFIC_IPRIOR252      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR252_OFFSET)
#define CH32V_PFIC_IPRIOR253_OFFSET 0x04fd
#define CH32V_PFIC_IPRIOR253      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR253_OFFSET)
#define CH32V_PFIC_IPRIOR254_OFFSET 0x04fe
#define CH32V_PFIC_IPRIOR254      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR254_OFFSET)
#define CH32V_PFIC_IPRIOR255_OFFSET 0x04ff
#define CH32V_PFIC_IPRIOR255      (CH32V_PFIC_BASE + CH32V_PFIC_IPRIOR255_OFFSET)
#define CH32V_PFIC_SCTLR_OFFSET   0x0d10
#define CH32V_PFIC_SCTLR          (CH32V_PFIC_BASE + CH32V_PFIC_SCTLR_OFFSET)
#define CH32V_PFIC_SCTLR_SLEEPONEXIT (1 <<  1) /* 02: SLEEPONEXIT */
#define CH32V_PFIC_SCTLR_SLEEPDEEP (1 <<  2) /* 04: SLEEPDEEP */
#define CH32V_PFIC_SCTLR_WFITOWFE (1 <<  3) /* 08: WFITOWFE */
#define CH32V_PFIC_SCTLR_SEVONPEND (1 <<  4) /* 10: SEVONPEND */
#define CH32V_PFIC_SCTLR_SETEVENT (1 <<  5) /* 20: SETEVENT */
#define CH32V_PFIC_SCTLR_SYSRESET (1 << 31) /* 80000000: SYSRESET */
#define CH32V_PFIC_STK_CTLR_OFFSET 0x1000
#define CH32V_PFIC_STK_CTLR       (CH32V_PFIC_BASE + CH32V_PFIC_STK_CTLR_OFFSET)
#define CH32V_PFIC_STK_CTLR_STE   (1 <<  0) /* 01: System counter enable */
#define CH32V_PFIC_STK_CTLR_STIE  (1 <<  1) /* 02: System counter interrupt enable */
#define CH32V_PFIC_STK_CTLR_STCLK (1 <<  2) /* 04: System selects the clock source */
#define CH32V_PFIC_STK_CTLR_STRE  (1 <<  3) /* 08: System reload register */
#define CH32V_PFIC_STK_CTLR_MODE  (1 <<  4) /* 10: System Mode */
#define CH32V_PFIC_STK_CTLR_INIT  (1 <<  5) /* 20: System Initialization update */
#define CH32V_PFIC_STK_CTLR_SWIE  (1 << 31) /* 80000000: System software triggered interrupts enable */
#define CH32V_PFIC_STK_SR_OFFSET  0x1004
#define CH32V_PFIC_STK_SR         (CH32V_PFIC_BASE + CH32V_PFIC_STK_SR_OFFSET)
#define CH32V_PFIC_STK_SR_CNTIF   (1 <<  0) /* 01: CNTIF */
#define CH32V_PFIC_STK_CNTL_OFFSET 0x1008
#define CH32V_PFIC_STK_CNTL       (CH32V_PFIC_BASE + CH32V_PFIC_STK_CNTL_OFFSET)
#define CH32V_PFIC_STK_CNTL_CNTL  (32 <<  0) /* 01: CNTL */
#define CH32V_PFIC_STK_CNTL_CNTL_MASK  (0xffffffff)
#define CH32V_PFIC_STK_CNTH_OFFSET 0x100c
#define CH32V_PFIC_STK_CNTH       (CH32V_PFIC_BASE + CH32V_PFIC_STK_CNTH_OFFSET)
#define CH32V_PFIC_STK_CNTH_CNTH  (32 <<  0) /* 01: CNTH */
#define CH32V_PFIC_STK_CNTH_CNTH_MASK  (0xffffffff)
#define CH32V_PFIC_STK_CMPLR_OFFSET 0x1010
#define CH32V_PFIC_STK_CMPLR      (CH32V_PFIC_BASE + CH32V_PFIC_STK_CMPLR_OFFSET)
#define CH32V_PFIC_STK_CMPLR_CMPL (32 <<  0) /* 01: CMPL */
#define CH32V_PFIC_STK_CMPLR_CMPL_MASK (0xffffffff)
#define CH32V_PFIC_STK_CMPHR_OFFSET 0x1014
#define CH32V_PFIC_STK_CMPHR      (CH32V_PFIC_BASE + CH32V_PFIC_STK_CMPHR_OFFSET)
#define CH32V_PFIC_STK_CMPHR_CMPH (32 <<  0) /* 01: CMPH */
#define CH32V_PFIC_STK_CMPHR_CMPH_MASK (0xffffffff)
