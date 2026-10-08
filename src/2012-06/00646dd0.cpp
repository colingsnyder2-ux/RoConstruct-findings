// from server: 100% by auto
// roc 2012-06 00646dd0  unit: seg_00640000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00646dd0
//
// 00646dd0  837c240400           cmp dword ptr [esp + 4], 0
// 00646dd5  7424                 je 0x646dfb
// 00646dd7  8b442408             mov eax, dword ptr [esp + 8]
// 00646ddb  85c0                 test eax, eax
// 00646ddd  741c                 je 0x646dfb
// 00646ddf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00646de3  8b542410             mov edx, dword ptr [esp + 0x10]
// 00646de7  81480880000000       or dword ptr [eax + 8], 0x80
// 00646dee  894870               mov dword ptr [eax + 0x70], ecx
// 00646df1  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 00646df5  895074               mov dword ptr [eax + 0x74], edx
// 00646df8  884878               mov byte ptr [eax + 0x78], cl
// 00646dfb  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_pHYs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
