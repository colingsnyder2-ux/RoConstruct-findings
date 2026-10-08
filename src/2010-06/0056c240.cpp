// from server: 100% by auto
// roc 2010-06 0056c240  unit: seg_00560000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056c240
//
// 0056c240  837c240400           cmp dword ptr [esp + 4], 0
// 0056c245  740c                 je 0x56c253
// 0056c247  8b442408             mov eax, dword ptr [esp + 8]
// 0056c24b  85c0                 test eax, eax
// 0056c24d  7404                 je 0x56c253
// 0056c24f  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056c252  c3                   ret 
// 0056c253  33c0                 xor eax, eax
// 0056c255  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_rowbytes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
