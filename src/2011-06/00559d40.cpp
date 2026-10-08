// from server: 100% by auto
// roc 2011-06 00559d40  unit: seg_00550000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00559d40
//
// 00559d40  837c240400           cmp dword ptr [esp + 4], 0
// 00559d45  7424                 je 0x559d6b
// 00559d47  8b442408             mov eax, dword ptr [esp + 8]
// 00559d4b  85c0                 test eax, eax
// 00559d4d  741c                 je 0x559d6b
// 00559d4f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00559d53  8b542410             mov edx, dword ptr [esp + 0x10]
// 00559d57  81480800010000       or dword ptr [eax + 8], 0x100
// 00559d5e  894864               mov dword ptr [eax + 0x64], ecx
// 00559d61  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 00559d65  895068               mov dword ptr [eax + 0x68], edx
// 00559d68  88486c               mov byte ptr [eax + 0x6c], cl
// 00559d6b  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_oFFs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
