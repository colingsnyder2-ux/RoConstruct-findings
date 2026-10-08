// from server: 100% by auto
// roc 2012-06 0064dc20  unit: seg_00640000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0064dc20
//
// 0064dc20  837c240400           cmp dword ptr [esp + 4], 0
// 0064dc25  740c                 je 0x64dc33
// 0064dc27  8b442408             mov eax, dword ptr [esp + 8]
// 0064dc2b  85c0                 test eax, eax
// 0064dc2d  7404                 je 0x64dc33
// 0064dc2f  8b400c               mov eax, dword ptr [eax + 0xc]
// 0064dc32  c3                   ret 
// 0064dc33  33c0                 xor eax, eax
// 0064dc35  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_rowbytes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
