// roc 2009-12 00602bc0  unit: seg_00600000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00602bc0
//
// 00602bc0  837c240400           cmp dword ptr [esp + 4], 0
// 00602bc5  741b                 je 0x602be2
// 00602bc7  8b442408             mov eax, dword ptr [esp + 8]
// 00602bcb  85c0                 test eax, eax
// 00602bcd  7413                 je 0x602be2
// 00602bcf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00602bd3  8b11                 mov edx, dword ptr [ecx]
// 00602bd5  895044               mov dword ptr [eax + 0x44], edx
// 00602bd8  8a4904               mov cl, byte ptr [ecx + 4]
// 00602bdb  83480802             or dword ptr [eax + 8], 2
// 00602bdf  884848               mov byte ptr [eax + 0x48], cl
// 00602be2  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sBIT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
