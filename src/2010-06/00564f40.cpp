// from server: 100% by auto
// roc 2010-06 00564f40  unit: seg_00560000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00564f40
//
// 00564f40  8b442408             mov eax, dword ptr [esp + 8]
// 00564f44  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00564f48  50                   push eax
// 00564f49  6a00                 push 0
// 00564f4b  51                   push ecx
// 00564f4c  e8fffeffff           call 0x564e50
// 00564f51  83c40c               add esp, 0xc
// 00564f54  f7d8                 neg eax
// 00564f56  1bc0                 sbb eax, eax
// 00564f58  40                   inc eax
// 00564f59  c3                   ret 
// library libpng-1.2.5/png.c (function _png_check_sig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
