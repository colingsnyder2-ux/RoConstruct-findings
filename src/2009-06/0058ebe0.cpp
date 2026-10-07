// roc 2009-06 0058ebe0  unit: seg_00580000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058ebe0
//
// 0058ebe0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058ebe4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058ebe8  8b542408             mov edx, dword ptr [esp + 8]
// 0058ebec  50                   push eax
// 0058ebed  51                   push ecx
// 0058ebee  52                   push edx
// 0058ebef  e880b01800           call 0x719c74
// 0058ebf4  83c40c               add esp, 0xc
// 0058ebf7  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_memcpy_check)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
