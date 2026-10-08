// from server: 100% by auto
// roc 2008-06 0051d2c0  unit: seg_00510000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051d2c0
//
// 0051d2c0  837c240400           cmp dword ptr [esp + 4], 0
// 0051d2c5  7424                 je 0x51d2eb
// 0051d2c7  8b442408             mov eax, dword ptr [esp + 8]
// 0051d2cb  85c0                 test eax, eax
// 0051d2cd  741c                 je 0x51d2eb
// 0051d2cf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051d2d3  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051d2d7  81480880000000       or dword ptr [eax + 8], 0x80
// 0051d2de  894870               mov dword ptr [eax + 0x70], ecx
// 0051d2e1  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0051d2e5  895074               mov dword ptr [eax + 0x74], edx
// 0051d2e8  884878               mov byte ptr [eax + 0x78], cl
// 0051d2eb  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_pHYs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
