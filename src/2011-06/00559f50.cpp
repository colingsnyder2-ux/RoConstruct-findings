// roc 2011-06 00559f50  unit: seg_00550000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00559f50
//
// 00559f50  837c240400           cmp dword ptr [esp + 4], 0
// 00559f55  7424                 je 0x559f7b
// 00559f57  8b442408             mov eax, dword ptr [esp + 8]
// 00559f5b  85c0                 test eax, eax
// 00559f5d  741c                 je 0x559f7b
// 00559f5f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00559f63  8b542410             mov edx, dword ptr [esp + 0x10]
// 00559f67  81480880000000       or dword ptr [eax + 8], 0x80
// 00559f6e  894870               mov dword ptr [eax + 0x70], ecx
// 00559f71  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 00559f75  895074               mov dword ptr [eax + 0x74], edx
// 00559f78  884878               mov byte ptr [eax + 0x78], cl
// 00559f7b  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_pHYs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
