// roc 2009-12 0060c870  unit: seg_00600000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060c870
//
// 0060c870  8b442408             mov eax, dword ptr [esp + 8]
// 0060c874  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060c878  8bd0                 mov edx, eax
// 0060c87a  c1ea18               shr edx, 0x18
// 0060c87d  8811                 mov byte ptr [ecx], dl
// 0060c87f  8bd0                 mov edx, eax
// 0060c881  c1ea10               shr edx, 0x10
// 0060c884  885101               mov byte ptr [ecx + 1], dl
// 0060c887  8bd0                 mov edx, eax
// 0060c889  c1ea08               shr edx, 8
// 0060c88c  885102               mov byte ptr [ecx + 2], dl
// 0060c88f  884103               mov byte ptr [ecx + 3], al
// 0060c892  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_save_uint_32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
