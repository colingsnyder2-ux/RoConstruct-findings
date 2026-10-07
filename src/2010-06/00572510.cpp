// roc 2010-06 00572510  unit: seg_00570000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00572510
//
// 00572510  8b442410             mov eax, dword ptr [esp + 0x10]
// 00572514  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00572518  8b542408             mov edx, dword ptr [esp + 8]
// 0057251c  50                   push eax
// 0057251d  51                   push ecx
// 0057251e  52                   push edx
// 0057251f  e802692300           call 0x7a8e26
// 00572524  83c40c               add esp, 0xc
// 00572527  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_memcpy_check)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
