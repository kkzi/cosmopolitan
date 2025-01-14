#ifndef COSMOPOLITAN_LIBC_NEXGEN32E_CACHESIZE_H_
#define COSMOPOLITAN_LIBC_NEXGEN32E_CACHESIZE_H_

#define kCpuCacheTypeData        1
#define kCpuCacheTypeInstruction 2
#define kCpuCacheTypeUnified     3

#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

unsigned _getcachesize(int, int);

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_NEXGEN32E_CACHESIZE_H_ */
