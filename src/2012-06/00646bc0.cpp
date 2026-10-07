// roc 2012-06 00646bc0  unit: seg_00640000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00646bc0
//
// 00646bc0  837c240400           cmp dword ptr [esp + 4], 0
// 00646bc5  7424                 je 0x646beb
// 00646bc7  8b442408             mov eax, dword ptr [esp + 8]
// 00646bcb  85c0                 test eax, eax
// 00646bcd  741c                 je 0x646beb
// 00646bcf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00646bd3  8b542410             mov edx, dword ptr [esp + 0x10]
// 00646bd7  81480800010000       or dword ptr [eax + 8], 0x100
// 00646bde  894864               mov dword ptr [eax + 0x64], ecx
// 00646be1  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 00646be5  895068               mov dword ptr [eax + 0x68], edx
// 00646be8  88486c               mov byte ptr [eax + 0x6c], cl
// 00646beb  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_oFFs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
