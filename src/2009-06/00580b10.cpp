// roc 2009-06 00580b10  unit: seg_00580000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00580b10
//
// 00580b10  837c240400           cmp dword ptr [esp + 4], 0
// 00580b15  7424                 je 0x580b3b
// 00580b17  8b442408             mov eax, dword ptr [esp + 8]
// 00580b1b  85c0                 test eax, eax
// 00580b1d  741c                 je 0x580b3b
// 00580b1f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00580b23  8b542410             mov edx, dword ptr [esp + 0x10]
// 00580b27  81480800010000       or dword ptr [eax + 8], 0x100
// 00580b2e  894864               mov dword ptr [eax + 0x64], ecx
// 00580b31  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 00580b35  895068               mov dword ptr [eax + 0x68], edx
// 00580b38  88486c               mov byte ptr [eax + 0x6c], cl
// 00580b3b  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_oFFs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
