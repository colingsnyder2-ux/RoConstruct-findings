// from server: 100% by auto
// roc 2010-06 00564530  unit: seg_00560000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00564530
//
// 00564530  837c240400           cmp dword ptr [esp + 4], 0
// 00564535  741b                 je 0x564552
// 00564537  8b442408             mov eax, dword ptr [esp + 8]
// 0056453b  85c0                 test eax, eax
// 0056453d  7413                 je 0x564552
// 0056453f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00564543  8b11                 mov edx, dword ptr [ecx]
// 00564545  895044               mov dword ptr [eax + 0x44], edx
// 00564548  8a4904               mov cl, byte ptr [ecx + 4]
// 0056454b  83480802             or dword ptr [eax + 8], 2
// 0056454f  884848               mov byte ptr [eax + 0x48], cl
// 00564552  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sBIT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
