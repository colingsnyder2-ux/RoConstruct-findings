// roc 2009-06 00580e10  unit: seg_00580000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00580e10
//
// 00580e10  837c240400           cmp dword ptr [esp + 4], 0
// 00580e15  741b                 je 0x580e32
// 00580e17  8b442408             mov eax, dword ptr [esp + 8]
// 00580e1b  85c0                 test eax, eax
// 00580e1d  7413                 je 0x580e32
// 00580e1f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00580e23  8b11                 mov edx, dword ptr [ecx]
// 00580e25  895044               mov dword ptr [eax + 0x44], edx
// 00580e28  8a4904               mov cl, byte ptr [ecx + 4]
// 00580e2b  83480802             or dword ptr [eax + 8], 2
// 00580e2f  884848               mov byte ptr [eax + 0x48], cl
// 00580e32  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sBIT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
