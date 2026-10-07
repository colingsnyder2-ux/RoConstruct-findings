// roc 2007-08 0051ebd0  unit: seg_00510000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051ebd0
//
// 0051ebd0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051ebd4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051ebd8  8b542408             mov edx, dword ptr [esp + 8]
// 0051ebdc  50                   push eax
// 0051ebdd  51                   push ecx
// 0051ebde  52                   push edx
// 0051ebdf  e868211100           call 0x630d4c
// 0051ebe4  83c40c               add esp, 0xc
// 0051ebe7  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_memcpy_check)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
