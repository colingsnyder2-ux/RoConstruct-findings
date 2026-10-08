// from server: 100% by auto
// roc 2009-06 005801d0  unit: G3D::_internal::DialogTemplate  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005801d0
//
// 005801d0  837c240400           cmp dword ptr [esp + 4], 0
// 005801d5  7423                 je 0x5801fa
// 005801d7  8b442408             mov eax, dword ptr [esp + 8]
// 005801db  85c0                 test eax, eax
// 005801dd  741b                 je 0x5801fa
// 005801df  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005801e3  8b11                 mov edx, dword ptr [ecx]
// 005801e5  89505a               mov dword ptr [eax + 0x5a], edx
// 005801e8  8b5104               mov edx, dword ptr [ecx + 4]
// 005801eb  89505e               mov dword ptr [eax + 0x5e], edx
// 005801ee  668b4908             mov cx, word ptr [ecx + 8]
// 005801f2  83480820             or dword ptr [eax + 8], 0x20
// 005801f6  66894862             mov word ptr [eax + 0x62], cx
// 005801fa  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_bKGD)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
