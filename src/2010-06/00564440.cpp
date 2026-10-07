// roc 2010-06 00564440  unit: seg_00560000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00564440
//
// 00564440  837c240400           cmp dword ptr [esp + 4], 0
// 00564445  7424                 je 0x56446b
// 00564447  8b442408             mov eax, dword ptr [esp + 8]
// 0056444b  85c0                 test eax, eax
// 0056444d  741c                 je 0x56446b
// 0056444f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00564453  8b542410             mov edx, dword ptr [esp + 0x10]
// 00564457  81480880000000       or dword ptr [eax + 8], 0x80
// 0056445e  894870               mov dword ptr [eax + 0x70], ecx
// 00564461  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 00564465  895074               mov dword ptr [eax + 0x74], edx
// 00564468  884878               mov byte ptr [eax + 0x78], cl
// 0056446b  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_pHYs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
