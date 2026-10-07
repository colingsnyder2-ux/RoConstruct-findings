// roc 2008-06 0051dce0  unit: seg_00510000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051dce0
//
// 0051dce0  8b442408             mov eax, dword ptr [esp + 8]
// 0051dce4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051dce8  50                   push eax
// 0051dce9  6a00                 push 0
// 0051dceb  51                   push ecx
// 0051dcec  e8fffeffff           call 0x51dbf0
// 0051dcf1  83c40c               add esp, 0xc
// 0051dcf4  f7d8                 neg eax
// 0051dcf6  1bc0                 sbb eax, eax
// 0051dcf8  40                   inc eax
// 0051dcf9  c3                   ret 
// library libpng-1.2.5/png.c (function _png_check_sig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
