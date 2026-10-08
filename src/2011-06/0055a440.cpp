// from server: 100% by auto
// roc 2011-06 0055a440  unit: seg_00550000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055a440
//
// 0055a440  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055a444  85c9                 test ecx, ecx
// 0055a446  7426                 je 0x55a46e
// 0055a448  8b442408             mov eax, dword ptr [esp + 8]
// 0055a44c  85c0                 test eax, eax
// 0055a44e  741e                 je 0x55a46e
// 0055a450  ba00020000           mov edx, 0x200
// 0055a455  855168               test dword ptr [ecx + 0x68], edx
// 0055a458  7514                 jne 0x55a46e
// 0055a45a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055a45e  56                   push esi
// 0055a45f  8b31                 mov esi, dword ptr [ecx]
// 0055a461  89703c               mov dword ptr [eax + 0x3c], esi
// 0055a464  8b4904               mov ecx, dword ptr [ecx + 4]
// 0055a467  095008               or dword ptr [eax + 8], edx
// 0055a46a  894840               mov dword ptr [eax + 0x40], ecx
// 0055a46d  5e                   pop esi
// 0055a46e  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_tIME)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
