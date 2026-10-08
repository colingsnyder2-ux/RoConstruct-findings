// from server: 100% by auto
// roc 2007-08 00513960  unit: G3D::_internal::DialogTemplate  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00513960
//
// 00513960  837c240400           cmp dword ptr [esp + 4], 0
// 00513965  7423                 je 0x51398a
// 00513967  8b442408             mov eax, dword ptr [esp + 8]
// 0051396b  85c0                 test eax, eax
// 0051396d  741b                 je 0x51398a
// 0051396f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00513973  8b11                 mov edx, dword ptr [ecx]
// 00513975  89505a               mov dword ptr [eax + 0x5a], edx
// 00513978  8b5104               mov edx, dword ptr [ecx + 4]
// 0051397b  89505e               mov dword ptr [eax + 0x5e], edx
// 0051397e  668b4908             mov cx, word ptr [ecx + 8]
// 00513982  83480820             or dword ptr [eax + 8], 0x20
// 00513986  66894862             mov word ptr [eax + 0x62], cx
// 0051398a  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_bKGD)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
