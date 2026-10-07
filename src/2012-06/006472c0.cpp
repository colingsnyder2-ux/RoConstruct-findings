// roc 2012-06 006472c0  unit: seg_00640000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006472c0
//
// 006472c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006472c4  85c9                 test ecx, ecx
// 006472c6  7426                 je 0x6472ee
// 006472c8  8b442408             mov eax, dword ptr [esp + 8]
// 006472cc  85c0                 test eax, eax
// 006472ce  741e                 je 0x6472ee
// 006472d0  ba00020000           mov edx, 0x200
// 006472d5  855168               test dword ptr [ecx + 0x68], edx
// 006472d8  7514                 jne 0x6472ee
// 006472da  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006472de  56                   push esi
// 006472df  8b31                 mov esi, dword ptr [ecx]
// 006472e1  89703c               mov dword ptr [eax + 0x3c], esi
// 006472e4  8b4904               mov ecx, dword ptr [ecx + 4]
// 006472e7  095008               or dword ptr [eax + 8], edx
// 006472ea  894840               mov dword ptr [eax + 0x40], ecx
// 006472ed  5e                   pop esi
// 006472ee  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_tIME)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
