#ifndef COSMOPOLITAN_LIBC_NT_STRUCT_IMAGEBOUNDFORWARDERREF_H_
#define COSMOPOLITAN_LIBC_NT_STRUCT_IMAGEBOUNDFORWARDERREF_H_
#if !(__ASSEMBLER__ + __LINKER__ + 0)

struct NtImageBoundForwarderRef {
  uint32_t TimeDateStamp;
  uint16_t OffsetModuleName;
  uint16_t Reserved;
};

#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_NT_STRUCT_IMAGEBOUNDFORWARDERREF_H_ */