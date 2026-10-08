// roc 2009-12 00601fa0  unit: G3D::_internal::DialogTemplate  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00601fa0
//
// 00601fa0  837c240400           cmp dword ptr [esp + 4], 0
// 00601fa5  7423                 je 0x601fca
// 00601fa7  8b442408             mov eax, dword ptr [esp + 8]
// 00601fab  85c0                 test eax, eax
// 00601fad  741b                 je 0x601fca
// 00601faf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00601fb3  8b11                 mov edx, dword ptr [ecx]
// 00601fb5  89505a               mov dword ptr [eax + 0x5a], edx
// 00601fb8  8b5104               mov edx, dword ptr [ecx + 4]
// 00601fbb  89505e               mov dword ptr [eax + 0x5e], edx
// 00601fbe  668b4908             mov cx, word ptr [ecx + 8]
// 00601fc2  83480820             or dword ptr [eax + 8], 0x20
// 00601fc6  66894862             mov word ptr [eax + 0x62], cx
// 00601fca  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_bKGD)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
