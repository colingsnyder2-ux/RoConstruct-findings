// roc 2012-06 0064e430  unit: seg_00640000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0064e430
//
// 0064e430  8b442410             mov eax, dword ptr [esp + 0x10]
// 0064e434  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064e438  8b542408             mov edx, dword ptr [esp + 8]
// 0064e43c  50                   push eax
// 0064e43d  51                   push ecx
// 0064e43e  52                   push edx
// 0064e43f  e818523300           call 0x98365c
// 0064e444  83c40c               add esp, 0xc
// 0064e447  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_memcpy_check)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
