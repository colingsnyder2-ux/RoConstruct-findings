// from server: 100% by auto
// roc 2008-06 0051c770  unit: G3D::_internal::DialogTemplate  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051c770
//
// 0051c770  837c240400           cmp dword ptr [esp + 4], 0
// 0051c775  7423                 je 0x51c79a
// 0051c777  8b442408             mov eax, dword ptr [esp + 8]
// 0051c77b  85c0                 test eax, eax
// 0051c77d  741b                 je 0x51c79a
// 0051c77f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051c783  8b11                 mov edx, dword ptr [ecx]
// 0051c785  89505a               mov dword ptr [eax + 0x5a], edx
// 0051c788  8b5104               mov edx, dword ptr [ecx + 4]
// 0051c78b  89505e               mov dword ptr [eax + 0x5e], edx
// 0051c78e  668b4908             mov cx, word ptr [ecx + 8]
// 0051c792  83480820             or dword ptr [eax + 8], 0x20
// 0051c796  66894862             mov word ptr [eax + 0x62], cx
// 0051c79a  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_bKGD)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
