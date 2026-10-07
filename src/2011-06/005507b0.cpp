// roc 2011-06 005507b0  unit: seg_00550000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005507b0
//
// 005507b0  8b442408             mov eax, dword ptr [esp + 8]
// 005507b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005507b8  50                   push eax
// 005507b9  6a00                 push 0
// 005507bb  51                   push ecx
// 005507bc  e8fffeffff           call 0x5506c0
// 005507c1  83c40c               add esp, 0xc
// 005507c4  f7d8                 neg eax
// 005507c6  1bc0                 sbb eax, eax
// 005507c8  40                   inc eax
// 005507c9  c3                   ret 
// library libpng-1.2.5/png.c (function _png_check_sig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
