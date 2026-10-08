// roc 2009-12 00610bf0  unit: seg_00610000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00610bf0
//
// 00610bf0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00610bf4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00610bf8  8b542408             mov edx, dword ptr [esp + 8]
// 00610bfc  50                   push eax
// 00610bfd  51                   push ecx
// 00610bfe  52                   push edx
// 00610bff  e8e2401e00           call 0x7f4ce6
// 00610c04  83c40c               add esp, 0xc
// 00610c07  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_memcpy_check)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
