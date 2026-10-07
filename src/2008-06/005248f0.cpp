// roc 2008-06 005248f0  unit: seg_00520000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005248f0
//
// 005248f0  837c240400           cmp dword ptr [esp + 4], 0
// 005248f5  740c                 je 0x524903
// 005248f7  8b442408             mov eax, dword ptr [esp + 8]
// 005248fb  85c0                 test eax, eax
// 005248fd  7404                 je 0x524903
// 005248ff  8b400c               mov eax, dword ptr [eax + 0xc]
// 00524902  c3                   ret 
// 00524903  33c0                 xor eax, eax
// 00524905  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_rowbytes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
