// from server: 100% by auto
// roc 2009-06 005818a0  unit: seg_00580000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005818a0
//
// 005818a0  6a00                 push 0
// 005818a2  6a00                 push 0
// 005818a4  6a00                 push 0
// 005818a6  e8d5f00000           call 0x590980
// 005818ab  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005818af  83c40c               add esp, 0xc
// 005818b2  898110010000         mov dword ptr [ecx + 0x110], eax
// 005818b8  c3                   ret 
// library libpng-1.2.5/png.c (function _png_reset_crc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
