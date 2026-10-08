// roc 2009-12 00603650  unit: seg_00600000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00603650
//
// 00603650  6a00                 push 0
// 00603652  6a00                 push 0
// 00603654  6a00                 push 0
// 00603656  e845f30000           call 0x6129a0
// 0060365b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060365f  83c40c               add esp, 0xc
// 00603662  898110010000         mov dword ptr [ecx + 0x110], eax
// 00603668  c3                   ret 
// library libpng-1.2.5/png.c (function _png_reset_crc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
