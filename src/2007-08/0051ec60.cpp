// roc 2007-08 0051ec60  unit: seg_00510000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051ec60
//
// 0051ec60  8b442404             mov eax, dword ptr [esp + 4]
// 0051ec64  6a00                 push 0
// 0051ec66  6a00                 push 0
// 0051ec68  50                   push eax
// 0051ec69  e8a2feffff           call 0x51eb10
// 0051ec6e  83c40c               add esp, 0xc
// 0051ec71  c3                   ret 
// library libpng-1.2.7/pngmem.c (function _png_create_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS /MD
// roc-lib: libpng-1.2.7 pngmem.c
