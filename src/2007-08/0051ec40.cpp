// roc 2007-08 0051ec40  unit: seg_00510000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051ec40
//
// 0051ec40  8b442404             mov eax, dword ptr [esp + 4]
// 0051ec44  6a00                 push 0
// 0051ec46  6a00                 push 0
// 0051ec48  50                   push eax
// 0051ec49  e812feffff           call 0x51ea60
// 0051ec4e  83c40c               add esp, 0xc
// 0051ec51  c3                   ret 
// library libpng-1.2.7/pngmem.c (function _png_create_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS /MD
// roc-lib: libpng-1.2.7 pngmem.c
