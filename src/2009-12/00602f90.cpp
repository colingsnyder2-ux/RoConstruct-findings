// roc 2009-12 00602f90  unit: seg_00600000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00602f90
//
// 00602f90  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00602f94  85c9                 test ecx, ecx
// 00602f96  7426                 je 0x602fbe
// 00602f98  8b442408             mov eax, dword ptr [esp + 8]
// 00602f9c  85c0                 test eax, eax
// 00602f9e  741e                 je 0x602fbe
// 00602fa0  ba00020000           mov edx, 0x200
// 00602fa5  855168               test dword ptr [ecx + 0x68], edx
// 00602fa8  7514                 jne 0x602fbe
// 00602faa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00602fae  56                   push esi
// 00602faf  8b31                 mov esi, dword ptr [ecx]
// 00602fb1  89703c               mov dword ptr [eax + 0x3c], esi
// 00602fb4  8b4904               mov ecx, dword ptr [ecx + 4]
// 00602fb7  095008               or dword ptr [eax + 8], edx
// 00602fba  894840               mov dword ptr [eax + 0x40], ecx
// 00602fbd  5e                   pop esi
// 00602fbe  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_tIME)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
