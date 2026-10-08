// from server: 100% by auto
// roc 2010-06 00563910  unit: G3D::_internal::DialogTemplate  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00563910
//
// 00563910  837c240400           cmp dword ptr [esp + 4], 0
// 00563915  7423                 je 0x56393a
// 00563917  8b442408             mov eax, dword ptr [esp + 8]
// 0056391b  85c0                 test eax, eax
// 0056391d  741b                 je 0x56393a
// 0056391f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00563923  8b11                 mov edx, dword ptr [ecx]
// 00563925  89505a               mov dword ptr [eax + 0x5a], edx
// 00563928  8b5104               mov edx, dword ptr [ecx + 4]
// 0056392b  89505e               mov dword ptr [eax + 0x5e], edx
// 0056392e  668b4908             mov cx, word ptr [ecx + 8]
// 00563932  83480820             or dword ptr [eax + 8], 0x20
// 00563936  66894862             mov word ptr [eax + 0x62], cx
// 0056393a  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_bKGD)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
