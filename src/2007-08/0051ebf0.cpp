// from server: 100% by auto
// roc 2007-08 0051ebf0  unit: seg_00510000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051ebf0
//
// 0051ebf0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051ebf4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051ebf8  8b542408             mov edx, dword ptr [esp + 8]
// 0051ebfc  50                   push eax
// 0051ebfd  51                   push ecx
// 0051ebfe  52                   push edx
// 0051ebff  e8881f1100           call 0x630b8c
// 0051ec04  83c40c               add esp, 0xc
// 0051ec07  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_memcpy_check)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
