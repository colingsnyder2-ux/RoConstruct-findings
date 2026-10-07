// roc 2007-08 005142b0  unit: G3D::_internal::DialogTemplate  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005142b0
//
// 005142b0  837c240400           cmp dword ptr [esp + 4], 0
// 005142b5  7424                 je 0x5142db
// 005142b7  8b442408             mov eax, dword ptr [esp + 8]
// 005142bb  85c0                 test eax, eax
// 005142bd  741c                 je 0x5142db
// 005142bf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005142c3  8b542410             mov edx, dword ptr [esp + 0x10]
// 005142c7  81480800010000       or dword ptr [eax + 8], 0x100
// 005142ce  894864               mov dword ptr [eax + 0x64], ecx
// 005142d1  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 005142d5  895068               mov dword ptr [eax + 0x68], edx
// 005142d8  88486c               mov byte ptr [eax + 0x6c], cl
// 005142db  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_oFFs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
