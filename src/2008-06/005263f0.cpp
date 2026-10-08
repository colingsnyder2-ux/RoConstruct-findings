// from server: 100% by auto
// roc 2008-06 005263f0  unit: G3D::Line  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005263f0
//
// 005263f0  8b442408             mov eax, dword ptr [esp + 8]
// 005263f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005263f8  8bd0                 mov edx, eax
// 005263fa  c1ea18               shr edx, 0x18
// 005263fd  8811                 mov byte ptr [ecx], dl
// 005263ff  8bd0                 mov edx, eax
// 00526401  c1ea10               shr edx, 0x10
// 00526404  885101               mov byte ptr [ecx + 1], dl
// 00526407  8bd0                 mov edx, eax
// 00526409  c1ea08               shr edx, 8
// 0052640c  885102               mov byte ptr [ecx + 2], dl
// 0052640f  884103               mov byte ptr [ecx + 3], al
// 00526412  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_save_uint_32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
