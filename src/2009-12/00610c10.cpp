// roc 2009-12 00610c10  unit: seg_00610000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00610c10
//
// 00610c10  8b442410             mov eax, dword ptr [esp + 0x10]
// 00610c14  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00610c18  8b542408             mov edx, dword ptr [esp + 8]
// 00610c1c  50                   push eax
// 00610c1d  51                   push ecx
// 00610c1e  52                   push edx
// 00610c1f  e8803e1e00           call 0x7f4aa4
// 00610c24  83c40c               add esp, 0xc
// 00610c27  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_memcpy_check)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
