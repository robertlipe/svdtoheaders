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

Almost certainly. After you fix them, please submit a [pull request](https://github.com/robertlipe/svdtoheaders) to repair them. :-)

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
