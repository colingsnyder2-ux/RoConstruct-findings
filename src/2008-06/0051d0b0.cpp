// roc 2008-06 0051d0b0  unit: seg_00510000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051d0b0
//
// 0051d0b0  837c240400           cmp dword ptr [esp + 4], 0
// 0051d0b5  7424                 je 0x51d0db
// 0051d0b7  8b442408             mov eax, dword ptr [esp + 8]
// 0051d0bb  85c0                 test eax, eax
// 0051d0bd  741c                 je 0x51d0db
// 0051d0bf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051d0c3  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051d0c7  81480800010000       or dword ptr [eax + 8], 0x100
// 0051d0ce  894864               mov dword ptr [eax + 0x64], ecx
// 0051d0d1  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0051d0d5  895068               mov dword ptr [eax + 0x68], edx
// 0051d0d8  88486c               mov byte ptr [eax + 0x6c], cl
// 0051d0db  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_oFFs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
