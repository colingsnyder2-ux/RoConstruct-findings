// roc 2010-06 0056e190  unit: G3D::LineSegment  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056e190
//
// 0056e190  8b442408             mov eax, dword ptr [esp + 8]
// 0056e194  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056e198  8bd0                 mov edx, eax
// 0056e19a  c1ea18               shr edx, 0x18
// 0056e19d  8811                 mov byte ptr [ecx], dl
// 0056e19f  8bd0                 mov edx, eax
// 0056e1a1  c1ea10               shr edx, 0x10
// 0056e1a4  885101               mov byte ptr [ecx + 1], dl
// 0056e1a7  8bd0                 mov edx, eax
// 0056e1a9  c1ea08               shr edx, 8
// 0056e1ac  885102               mov byte ptr [ecx + 2], dl
// 0056e1af  884103               mov byte ptr [ecx + 3], al
// 0056e1b2  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_save_uint_32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
