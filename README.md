# svdtoheaders
svdtoheaders parses CMSIS System View Description (SVD) file and writes C headers describing parts, written in style of Nuttx memorymap.h and various peripheral device register files.


NAME
====
**svdtoheaders** Converts CMSSIS SVD to C headers.

SYNOPSIS
========
**svdtoheaders** [**-h**] [**-m _mapfile_**] [**-r _registerfile_**] [**-p _prefix_**] [**-s _svdfile_**] [**-v**] [**-o**]

Options
-------
  -h, --help            show this help message and exit
  
  -m MEMORYMAP, --memorymap MEMORYMAP
                        Create file "memorymap" with mempory map of device.
                        
  -r REGISTERS, --registers REGISTERS
                        Create file "registers" with registerss of device.
                        
  -p PREFIX, --prefix PREFIX
                        Prefix C symbols with "prefix".
                        
  -s SVDFILE, --svdfile SVDFILE
                        Read SVD source "file".
                        
  -v, --verbose         Be vefbose about actions taken.
  
  -o, --overwrite       Allow overwrite

FILES
=====

BUGS
====

Almost certainly. After you fix them, please submit a [pull request](https://github.com/robertlipe/svdtoheaders) to repair them. 😉

More seriously, there are many opportunities for progrmas like this to jump
the rails when facing different input. This program was created to parse
three specific SVD files from one company and has not been exposed to all
the potential opportuntties for creative expression within the SVD vocabulary.

I'll also confess to not being a very good Python developer, so I'm sure to have
violated some community conventions. I'm teachable, so please just send a
(polite) pull request to help fix it.


AUTHOR
======

Robert Lipe, of fame for [GPSBabel](http://gpsbabel.org) and a blog for various [RISC-V, embedded development, and electronics](https://www.robertlipe.com)

SEE ALSO
========

Wordy words go here.

### MOTIVATION


The author was attempting to reconcile a part that was like the SVM32F1,
but with differences in the ever-important register descriptions to work on a port
for NuttX, an operating system with very strong opinions about code
conventions. Some peripherals would have different names, some names were
different in the existing code and the STM doc. Some registers were named
differently, in different places, or have different naming scheme. Names
were different between the manufacturer's own SDK and their data sheets.
NuttX and the data sheets had different ideas if the least-significant bit
whould grow larger from zero or shrink down from thirty two.  Multiple days
were spent chasing what turned out to be a misnumbered bit pattern for a 
command the chip simply didn't have.

### A NEW TARGET

It was decided to quit treating the WCH32V307 like an STM part at all
in this early stage. ll register names and bit patterns would come from the maker's own 
documentation as provided by their SVD files. Then we'd be left to fix
bugs that we actually created ourselvs instead of mistakes caused by
over-fitting the CH3V307 from the STM32.  NuttX likes a table
of SoC-wide addresses sorted and commended in a specific way, so we write a 
file that should be drop-is for that. NuttX drivers are controlled by
a large number of drivers scattered around the kernel tree, it was decided
to provide a single file containing all the registers, knowing that the 
individual blocks of interest would be harvested or copy-pasted into the
device driver blocks, usually with a ton of NuttX boilerplate around them.

### GOALS

The output was designed to be human readable, but with the knowledge that the
primary consumer would be compilers. Two characters for the length
when printing bit numbers, for example; reducing the visual discontinuity
when jumping from register 9 to register 10 just looks better. Comments start
in fixed columns.

### LANGUAGES

Our input files are XML files that describe the individual peripherals
on the SoC and the addresses they respond to. That data is in the [Common Microcontroller Software Interface Standard (CMSIS)](https://www.arm.com/technologies/cmsis) format.

Our two types of output  are ISO-C89 (***I know...I know***) files.
The first explains the SoC and where the resident peripherals show in the address space of the device.   As we support similar devices (CH32V203, CH32V205, CH32V307, etc.) that may or may not peripherals are similar or even identical, we'd like an identifier to have optional prefixes as c89 dosdfsfsf have namespaces in C89.

Most modern languages have lovely handling of strings and can reduce XML to DOM with have good tools to traverse nodes and such. Python3 was chosen. WORDS ABOUT NOT KNOWING PYTHON WELL GO HERE

### TYPICAL USAGE

Technically, all arguments are optional. As a practical matter, you'll want
to at least specify -s and provide  one SVD to read plus either -m or -r to write at least one C header file.
```
svdtoheaders -s ch32v103.svd -m  ch32v103_map.h
```
Reads SVD file "ch32v307.svd", studies it, then writes the memory map to "ch32v103_map". That file will start off like this:

```
$ head -6 -5 ch3v103_map.h

#define CH32V_ADC1_BASE      0x40012400 /* 0x40012400-0x400127ff: 1kB Analog to digital converter */
#define CH32V_ADC2_BASE      0x40012800 /* 0x40012800-0x40012bff: 1kB Analog to digital converter */
#define CH32V_AFIO_BASE      0x40010000 /* 0x40010000-0x400103ff: 1kB Alternate function I/O */
#define CH32V_BKP_BASE       0x40006c00 /* 0x40006c00-0x40006fff: 1kB Backup registers */
#define CH32V_CAN1_BASE      0x40006400 /* 0x40006400-0x400067ff: 1kB Controller area network */
```
The corresponding entries for the [Nuttx STM32F10](https://github.com/apache/nuttx/blob/master/arch/arm/src/stm32/hardware/stm32f10xxx_memorymap.h) are:
```
#define STM32_ADC1_BASE      0x40012400     /* 0x40012400 - 0x400127ff: ADC1 */
#define STM32_ADC2_BASE      0x40012800     /* 0x40012800 - 0x40012bff: ADC2 */
#define STM32_AFIO_BASE      0x40010000     /* 0x40010000 - 0x400103ff: AFIO */
#define STM32_BKP_BASE       0x40006c00     /* 0x40006c00 - 0x40006fff: Backup registers (BKP) */
#define STM32_CAN1_BASE      0x40006400     /* 0x40006400 - 0x400067ff: bxCAN1 */
#define STM32_CAN2_BASE      0x40006800     /* 0x40006800 - 0x40006bff: bxCAN2 */
```

so that's a high-fidelity conversion. (It actually looks more like the STM32F20 version cosmetically - even the NuttX code is internally inconsistent, so we had to just pick something to base it on.)

Because the model numbers are long and it's very easy to accidentally clobber a file when writing, especially if you're scripting multiple calls, we will disallow overwriting files by default. If you repeat the above command, you will get a fatal error like this:
```
$ svdtoheaders -s ch32v103.svd -m  ch32v103_map.h

Unable to overwrite existing file "ch32v103_map.h".
```
This is easy to overcome by adding "-o" (as in "overwrite") to the command if you're absolutely certain that the filenames as specified by -m and -r are correct and are safe to overwrite.

To get to the blocks of device registers __inclding bitfields and masks__, use the "-r" flag and provide a filename. One might therefore run:
```
svdtoheaders -o -s ch32v103.svd -m  ch32v103_reg.h
```
Looking inside the newly created ch32v103_reg.h for the ADC1 register that we saw above, we'll see the definition of the actual bits that compose the analog/digital peripheral located at 0x40012400:
```
/* ADC - Analog to digital converter */
#define CH32V_ADC_BASE            0x40012400
#define CH32V_ADC_STATR_OFFSET    0x0000
#define CH32V_ADC_STATR           (CH32V_ADC_BASE + CH32V_ADC_STATR_OFFSET)
#define CH32V_ADC_STATR_STRT      (1 <<  4) /* 10: Regular channel start flag */
#define CH32V_ADC_STATR_JSTRT     (1 <<  3) /* 08: Injected channel start flag */
#define CH32V_ADC_STATR_JEOC      (1 <<  2) /* 04: Injected channel end of conversion */
#define CH32V_ADC_STATR_EOC       (1 <<  1) /* 02: Regular channel end of conversion */
#define CH32V_ADC_STATR_AWD       (1 <<  0) /* 01: Analog watchdog flag */
#define CH32V_ADC_CTLR1_OFFSET    0x0004
#define CH32V_ADC_CTLR1           (CH32V_ADC_BASE + CH32V_ADC_CTLR1_OFFSET)
#define CH32V_ADC_CTLR1_TKENABLE  (1 << 24) /* 1000000: Touch key enable, including TKEY_F and TKEY_V */
#define CH32V_ADC_CTLR1_AWDEN     (1 << 23) /* 800000: Analog watchdog enable on regular channels */
```

So we see the entire peripheral has the base address of 0x40012400 and the first register, the status (STAT) register is offset from the base register by zero bytes and can be reached via a pointer to CH32V_ADC_STATR. This is difficult to correlate exactly to the [Nuttx STM32 definitions](https://github.com/apache/nuttx/blob/6c6a54b0c98abf8f62b706d55012a991bc04c3b6/arch/arm/src/stm32/hardware/stm32_adc_v1.h#L198)  as there are five distincly different versions of the ADC registers. You can also see the reversed register bit numbers and the slightly changed names which just makes this so difficult to pencil-check for veracity:
```
#define ADC_SR_AWD                   (1 << 0)  /* Bit 0 : Analog watchdog flag */
#define ADC_SR_EOC                   (1 << 1)  /* Bit 1 : End of conversion */
#define ADC_SR_JEOC                  (1 << 2)  /* Bit 2 : Injected channel end of conversion */
#define ADC_SR_JSTRT                 (1 << 3)  /* Bit 3 : Injected channel Start flag */
#define ADC_SR_STRT                  (1 << 4)  /* Bit 4 : Regular channel Start flag *
```
This time, we see we don't have the chip prefix at all, but we still have five bits: 0-4, in descinding order of start, injected start, injected end, EOC, and watchdog. Again, all the bits are there and match.

If you were scripting this and wanted to match STM's convention, you can specify a prefix (-p) of nothing ("") like this:
```
$ svdtoheaders -o -p"" -s ch32v103.svd -m  ch32v103_reg.h
```
We have no provision to rename "STATR" to "SR", but it's easier to program if the register names match the manual anyway and renaming a thousand registers would be unpleasant anywy.
```
#define ADC_STATR_STRT            (1 <<  4) /* 10: Regular channel start flag */
#define ADC_STATR_JSTRT           (1 <<  3) /* 08: Injected channel start flag */
#define ADC_STATR_JEOC            (1 <<  2) /* 04: Injected channel end of conversion */
#define ADC_STATR_EOC             (1 <<  1) /* 02: Regular channel end of conversion */
#define ADC_STATR_AWD             (1 <<  0) /* 01: Analog watchdog flag */
```

### derivedFrom

It's convenient to think of peripherals on a chip like instances of a data structures in software. For example, on CH32V307, there are four instantiantions of GPIO controllers: GPIOA-GPIOD and there are two I2C blocks that are identical. There are eleven (!) timer blocks on that chip, but they're of three different types and thus have different register names, bits, and values. Our handling of derivedFrom handles all this, but you should probably be familiar with it. As an example, TIM10 is of type Timer1, but TIM3 is of time Timer2 variety. This is handle in the SVG thusly (abbreviated):

```
    <peripheral derivedFrom="TIM1">
      <name>TIM10</name>
      <baseAddress>0x40015000</baseAddress>
    </peripheral>
    <peripheral derivedFrom="TIM2">
      <name>TIM3</name>
      <baseAddress>0x40000400</baseAddress>
    </peripheral>
```
TIM10 thus has all the bits of a TIM1, but TIM2 has all the bits of a TIM2. For these derived peripherals, we inherit all base features, including peripheral size, but will override the baseAddress becaue the decoder for these blocks is tagged to a different base address. This is self-evident in the memory file's defines:
```
#define CH32V_TIM10_BASE     0x40015000 /* 0x40015000-0x400153ff: 1kB TIM10 */
#define CH32V_TIM1_BASE      0x40012c00 /* 0x40012c00-0x40012fff: 1kB Advanced timer */
#define CH32V_TIM2_BASE      0x40000000 /* 0x40000000-0x400003ff: 1kB General purpose timer */
#define CH32V_TIM3_BASE      0x40000400 /* 0x40000400-0x400007ff: 1kB TIM3 */
```
For the file used for register definitions, though, we have to go a different way:
```
/* No registers defined for peripheral TIM10. Using those of TIM1. */
#define CH32V_TIM10_BASE          0x40015000
#define CH32V_TIM10_CTLR1_OFFSET  CH32V_TIM1_CTLR1_OFFSET
#define CH32V_TIM10_CTLR1         CH32V_TIM1_CTLR1
#define CH32V_TIM10_CTLR1_CKD     CH32V_TIM1_CTLR1_CKD
#define CH32V_TIM10_CTLR1_CKD_MASK CH32V_TIM1_CTLR1_CKD_MASK
[ ... ]
/* No registers defined for peripheral TIM3. Using those of TIM2. */
#define CH32V_TIM3_BASE           0x40000400
#define CH32V_TIM3_CTLR1_OFFSET   CH32V_TIM2_CTLR1_OFFSET
#define CH32V_TIM3_CTLR1          CH32V_TIM2_CTLR1
#define CH32V_TIM3_CTLR1_CKD      CH32V_TIM2_CTLR1_CKD
#define CH32V_TIM3_CTLR1_CKD_MASK CH32V_TIM2_CTLR1_CKD_MASK
[ ... ] 

```
This pile of extra #defines, even though they have the same numeric values once propagated, has the advantage of letting you use the registers of a derived name by their 'nickname' and not their basenames.  For example.
```
modifyreg32(CH32V_TIM10_CTLR1, CH32V_TIM10_CTLR1_ARPE, CH32V_TIM10_CTLR1_CKD_MASK)
```
to set the Reload Enable and clear the clock division mask. If we DIDN'T jump through the derivedFrom hoop, you'd have to use the TIM1 bit patterns as the last two arguments. It's opcode equivalentm, but if you later redesign your board and move this to TIM8 (also derivedFrom TIM1) hopefully it at least catches your eye that the arguments don't match the register instead of being anesthetized to it.



### ALL THE THINGS

Since anyone reading this far is a self-respecting embedded programmer not wishing to spend the extra few microseconds to invoke svdtoheaders __twice__ (oh, the agony!), you're wonderig if you can script this and build a register file AND a memorymap for Nuttx all at the same time from the same invocation. No problem. Do it all at once.
```
$ svdtoheaders -v -o -p CH32V203_ -s ch32v20x.svd -m ch32v20x_map.h -r ch32v20x_reg.h
```

Take it to the next level. Can you do all of all the things? Yes, and that's actually slightly useful. During development,
it was handy to do have this script:

```
➜  cat test.c
#include "ch32v103_map.h"
#include "ch32v103_reg.h"
#include "ch32v20x_map.h"
#include "ch32v20x_reg.h"
#include "ch32v307_map.h"
#include "ch32v307_reg.h"


// #define CH32V_PFIC_STK_CMPHR_OFFSET 4321
long foo() { return CH32V_PFIC_STK_CMPHR_CMPH_MASK; }


$ cat go
$ set -e
$ python3 svdtoheaders $* -o -p CH32V103_ -s ch32v103.svd -m ch32v103_map.h -r ch32v103_reg.h
$ python3 svdtoheaders $* -o -p CH32V203_ -s ch32v20x.svd -m ch32v20x_map.h -r ch32v20x_reg.h
$ python3 svdtoheaders $* -o -m ch32v307_map.h -r ch32v307_reg.h
$ cc -Wall -c test.c

```

This read all three of the three SVD files for the RV32I parts from WinChipHead (they each invoke unique code paths within svto2headers itself) and writes both the memory map and the register definitions for all the boards, each with a unique prefix. We take advantage of the C rule that a 'trivial redeclaration' of a C define is legal (e.g "define FOO 1/#define FOO 1" is legal, but making changing either of those numbers is not) This therefore guarantees that all the names in the #defines are unique or at least not redeclared, so in practice, it's quite handy during development.
