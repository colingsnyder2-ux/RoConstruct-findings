// roc 2009-12 006028c0  unit: seg_00600000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006028c0
//
// 006028c0  837c240400           cmp dword ptr [esp + 4], 0
// 006028c5  7424                 je 0x6028eb
// 006028c7  8b442408             mov eax, dword ptr [esp + 8]
// 006028cb  85c0                 test eax, eax
// 006028cd  741c                 je 0x6028eb
// 006028cf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006028d3  8b542410             mov edx, dword ptr [esp + 0x10]
// 006028d7  81480800010000       or dword ptr [eax + 8], 0x100
// 006028de  894864               mov dword ptr [eax + 0x64], ecx
// 006028e1  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 006028e5  895068               mov dword ptr [eax + 0x68], edx
// 006028e8  88486c               mov byte ptr [eax + 0x6c], cl
// 006028eb  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_oFFs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
