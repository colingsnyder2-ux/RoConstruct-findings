// roc 2012-06 0063ddf0  unit: seg_00630000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0063ddf0
//
// 0063ddf0  8b442408             mov eax, dword ptr [esp + 8]
// 0063ddf4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063ddf8  50                   push eax
// 0063ddf9  6a00                 push 0
// 0063ddfb  51                   push ecx
// 0063ddfc  e8fffeffff           call 0x63dd00
// 0063de01  83c40c               add esp, 0xc
// 0063de04  f7d8                 neg eax
// 0063de06  1bc0                 sbb eax, eax
// 0063de08  40                   inc eax
// 0063de09  c3                   ret 
// library libpng-1.2.5/png.c (function _png_check_sig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
