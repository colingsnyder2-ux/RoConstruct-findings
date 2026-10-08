// from server: 100% by auto
// roc 2011-06 00560da0  unit: seg_00560000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00560da0
//
// 00560da0  837c240400           cmp dword ptr [esp + 4], 0
// 00560da5  740c                 je 0x560db3
// 00560da7  8b442408             mov eax, dword ptr [esp + 8]
// 00560dab  85c0                 test eax, eax
// 00560dad  7404                 je 0x560db3
// 00560daf  8b400c               mov eax, dword ptr [eax + 0xc]
// 00560db2  c3                   ret 
// 00560db3  33c0                 xor eax, eax
// 00560db5  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_rowbytes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
