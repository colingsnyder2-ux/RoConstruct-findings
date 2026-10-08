// roc 2009-12 006035d0  unit: seg_00600000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006035d0
//
// 006035d0  8b442408             mov eax, dword ptr [esp + 8]
// 006035d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006035d8  50                   push eax
// 006035d9  6a00                 push 0
// 006035db  51                   push ecx
// 006035dc  e8fffeffff           call 0x6034e0
// 006035e1  83c40c               add esp, 0xc
// 006035e4  f7d8                 neg eax
// 006035e6  1bc0                 sbb eax, eax
// 006035e8  40                   inc eax
// 006035e9  c3                   ret 
// library libpng-1.2.5/png.c (function _png_check_sig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
