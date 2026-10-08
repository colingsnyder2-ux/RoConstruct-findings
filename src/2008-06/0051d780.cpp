// from server: 100% by auto
// roc 2008-06 0051d780  unit: seg_00510000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051d780
//
// 0051d780  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051d784  85c9                 test ecx, ecx
// 0051d786  7426                 je 0x51d7ae
// 0051d788  8b442408             mov eax, dword ptr [esp + 8]
// 0051d78c  85c0                 test eax, eax
// 0051d78e  741e                 je 0x51d7ae
// 0051d790  ba00020000           mov edx, 0x200
// 0051d795  855168               test dword ptr [ecx + 0x68], edx
// 0051d798  7514                 jne 0x51d7ae
// 0051d79a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051d79e  56                   push esi
// 0051d79f  8b31                 mov esi, dword ptr [ecx]
// 0051d7a1  89703c               mov dword ptr [eax + 0x3c], esi
// 0051d7a4  8b4904               mov ecx, dword ptr [ecx + 4]
// 0051d7a7  095008               or dword ptr [eax + 8], edx
// 0051d7aa  894840               mov dword ptr [eax + 0x40], ecx
// 0051d7ad  5e                   pop esi
// 0051d7ae  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_tIME)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
