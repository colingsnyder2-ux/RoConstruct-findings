// roc 2010-06 00564900  unit: seg_00560000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00564900
//
// 00564900  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00564904  85c9                 test ecx, ecx
// 00564906  7426                 je 0x56492e
// 00564908  8b442408             mov eax, dword ptr [esp + 8]
// 0056490c  85c0                 test eax, eax
// 0056490e  741e                 je 0x56492e
// 00564910  ba00020000           mov edx, 0x200
// 00564915  855168               test dword ptr [ecx + 0x68], edx
// 00564918  7514                 jne 0x56492e
// 0056491a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056491e  56                   push esi
// 0056491f  8b31                 mov esi, dword ptr [ecx]
// 00564921  89703c               mov dword ptr [eax + 0x3c], esi
// 00564924  8b4904               mov ecx, dword ptr [ecx + 4]
// 00564927  095008               or dword ptr [eax + 8], edx
// 0056492a  894840               mov dword ptr [eax + 0x40], ecx
// 0056492d  5e                   pop esi
// 0056492e  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_tIME)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
