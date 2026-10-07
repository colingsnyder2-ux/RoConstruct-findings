// roc 2009-06 005811e0  unit: seg_00580000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005811e0
//
// 005811e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005811e4  85c9                 test ecx, ecx
// 005811e6  7426                 je 0x58120e
// 005811e8  8b442408             mov eax, dword ptr [esp + 8]
// 005811ec  85c0                 test eax, eax
// 005811ee  741e                 je 0x58120e
// 005811f0  ba00020000           mov edx, 0x200
// 005811f5  855168               test dword ptr [ecx + 0x68], edx
// 005811f8  7514                 jne 0x58120e
// 005811fa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005811fe  56                   push esi
// 005811ff  8b31                 mov esi, dword ptr [ecx]
// 00581201  89703c               mov dword ptr [eax + 0x3c], esi
// 00581204  8b4904               mov ecx, dword ptr [ecx + 4]
// 00581207  095008               or dword ptr [eax + 8], edx
// 0058120a  894840               mov dword ptr [eax + 0x40], ecx
// 0058120d  5e                   pop esi
// 0058120e  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_tIME)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
