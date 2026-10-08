// roc 2009-12 00602ad0  unit: seg_00600000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00602ad0
//
// 00602ad0  837c240400           cmp dword ptr [esp + 4], 0
// 00602ad5  7424                 je 0x602afb
// 00602ad7  8b442408             mov eax, dword ptr [esp + 8]
// 00602adb  85c0                 test eax, eax
// 00602add  741c                 je 0x602afb
// 00602adf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00602ae3  8b542410             mov edx, dword ptr [esp + 0x10]
// 00602ae7  81480880000000       or dword ptr [eax + 8], 0x80
// 00602aee  894870               mov dword ptr [eax + 0x70], ecx
// 00602af1  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 00602af5  895074               mov dword ptr [eax + 0x74], edx
// 00602af8  884878               mov byte ptr [eax + 0x78], cl
// 00602afb  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_pHYs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
