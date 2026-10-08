// from server: 100% by auto
// roc 2009-06 00581820  unit: seg_00580000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00581820
//
// 00581820  8b442408             mov eax, dword ptr [esp + 8]
// 00581824  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00581828  50                   push eax
// 00581829  6a00                 push 0
// 0058182b  51                   push ecx
// 0058182c  e8fffeffff           call 0x581730
// 00581831  83c40c               add esp, 0xc
// 00581834  f7d8                 neg eax
// 00581836  1bc0                 sbb eax, eax
// 00581838  40                   inc eax
// 00581839  c3                   ret 
// library libpng-1.2.5/png.c (function _png_check_sig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
