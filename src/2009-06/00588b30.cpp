// from server: 100% by auto
// roc 2009-06 00588b30  unit: seg_00580000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00588b30
//
// 00588b30  837c240400           cmp dword ptr [esp + 4], 0
// 00588b35  740c                 je 0x588b43
// 00588b37  8b442408             mov eax, dword ptr [esp + 8]
// 00588b3b  85c0                 test eax, eax
// 00588b3d  7404                 je 0x588b43
// 00588b3f  8b400c               mov eax, dword ptr [eax + 0xc]
// 00588b42  c3                   ret 
// 00588b43  33c0                 xor eax, eax
// 00588b45  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_rowbytes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
