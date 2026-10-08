// from server: 100% by auto
// roc 2010-06 00564230  unit: seg_00560000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00564230
//
// 00564230  837c240400           cmp dword ptr [esp + 4], 0
// 00564235  7424                 je 0x56425b
// 00564237  8b442408             mov eax, dword ptr [esp + 8]
// 0056423b  85c0                 test eax, eax
// 0056423d  741c                 je 0x56425b
// 0056423f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00564243  8b542410             mov edx, dword ptr [esp + 0x10]
// 00564247  81480800010000       or dword ptr [eax + 8], 0x100
// 0056424e  894864               mov dword ptr [eax + 0x64], ecx
// 00564251  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 00564255  895068               mov dword ptr [eax + 0x68], edx
// 00564258  88486c               mov byte ptr [eax + 0x6c], cl
// 0056425b  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_oFFs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
