// roc 2007-08 00514580  unit: G3D::_internal::DialogTemplate  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00514580
//
// 00514580  837c240400           cmp dword ptr [esp + 4], 0
// 00514585  741b                 je 0x5145a2
// 00514587  8b442408             mov eax, dword ptr [esp + 8]
// 0051458b  85c0                 test eax, eax
// 0051458d  7413                 je 0x5145a2
// 0051458f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00514593  8b11                 mov edx, dword ptr [ecx]
// 00514595  895044               mov dword ptr [eax + 0x44], edx
// 00514598  8a4904               mov cl, byte ptr [ecx + 4]
// 0051459b  83480802             or dword ptr [eax + 8], 2
// 0051459f  884848               mov byte ptr [eax + 0x48], cl
// 005145a2  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sBIT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
