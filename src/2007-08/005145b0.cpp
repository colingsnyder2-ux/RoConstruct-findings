// roc 2007-08 005145b0  unit: G3D::_internal::DialogTemplate  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005145b0
//
// 005145b0  837c240400           cmp dword ptr [esp + 4], 0
// 005145b5  7416                 je 0x5145cd
// 005145b7  8b442408             mov eax, dword ptr [esp + 8]
// 005145bb  85c0                 test eax, eax
// 005145bd  740e                 je 0x5145cd
// 005145bf  8a4c240c             mov cl, byte ptr [esp + 0xc]
// 005145c3  81480800080000       or dword ptr [eax + 8], 0x800
// 005145ca  88482c               mov byte ptr [eax + 0x2c], cl
// 005145cd  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sRGB)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
