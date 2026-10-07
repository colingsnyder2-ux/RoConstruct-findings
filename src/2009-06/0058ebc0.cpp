// roc 2009-06 0058ebc0  unit: seg_00580000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058ebc0
//
// 0058ebc0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058ebc4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058ebc8  8b542408             mov edx, dword ptr [esp + 8]
// 0058ebcc  50                   push eax
// 0058ebcd  51                   push ecx
// 0058ebce  52                   push edx
// 0058ebcf  e8e2b21800           call 0x719eb6
// 0058ebd4  83c40c               add esp, 0xc
// 0058ebd7  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_memcpy_check)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
