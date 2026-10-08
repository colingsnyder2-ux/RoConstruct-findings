// from server: 100% by auto
// roc 2011-06 005615b0  unit: seg_00560000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005615b0
//
// 005615b0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005615b4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005615b8  8b542408             mov edx, dword ptr [esp + 8]
// 005615bc  50                   push eax
// 005615bd  51                   push ecx
// 005615be  52                   push edx
// 005615bf  e818a02a00           call 0x80b5dc
// 005615c4  83c40c               add esp, 0xc
// 005615c7  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_memcpy_check)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
