// from server: 100% by auto
// roc 2007-08 005144c0  unit: G3D::_internal::DialogTemplate  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005144c0
//
// 005144c0  837c240400           cmp dword ptr [esp + 4], 0
// 005144c5  7424                 je 0x5144eb
// 005144c7  8b442408             mov eax, dword ptr [esp + 8]
// 005144cb  85c0                 test eax, eax
// 005144cd  741c                 je 0x5144eb
// 005144cf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005144d3  8b542410             mov edx, dword ptr [esp + 0x10]
// 005144d7  81480880000000       or dword ptr [eax + 8], 0x80
// 005144de  894870               mov dword ptr [eax + 0x70], ecx
// 005144e1  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 005144e5  895074               mov dword ptr [eax + 0x74], edx
// 005144e8  884878               mov byte ptr [eax + 0x78], cl
// 005144eb  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_pHYs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
