// from server: 100% by auto
// roc 2009-06 00580d20  unit: seg_00580000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00580d20
//
// 00580d20  837c240400           cmp dword ptr [esp + 4], 0
// 00580d25  7424                 je 0x580d4b
// 00580d27  8b442408             mov eax, dword ptr [esp + 8]
// 00580d2b  85c0                 test eax, eax
// 00580d2d  741c                 je 0x580d4b
// 00580d2f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00580d33  8b542410             mov edx, dword ptr [esp + 0x10]
// 00580d37  81480880000000       or dword ptr [eax + 8], 0x80
// 00580d3e  894870               mov dword ptr [eax + 0x70], ecx
// 00580d41  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 00580d45  895074               mov dword ptr [eax + 0x74], edx
// 00580d48  884878               mov byte ptr [eax + 0x78], cl
// 00580d4b  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_pHYs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
