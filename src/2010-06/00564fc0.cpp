// roc 2010-06 00564fc0  unit: seg_00560000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00564fc0
//
// 00564fc0  6a00                 push 0
// 00564fc2  6a00                 push 0
// 00564fc4  6a00                 push 0
// 00564fc6  e8f5f20000           call 0x5742c0
// 00564fcb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00564fcf  83c40c               add esp, 0xc
// 00564fd2  898110010000         mov dword ptr [ecx + 0x110], eax
// 00564fd8  c3                   ret 
// library libpng-1.2.5/png.c (function _png_reset_crc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
