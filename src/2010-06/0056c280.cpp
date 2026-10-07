// roc 2010-06 0056c280  unit: seg_00560000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056c280
//
// 0056c280  837c240400           cmp dword ptr [esp + 4], 0
// 0056c285  7421                 je 0x56c2a8
// 0056c287  8b442408             mov eax, dword ptr [esp + 8]
// 0056c28b  85c0                 test eax, eax
// 0056c28d  7419                 je 0x56c2a8
// 0056c28f  f6400820             test byte ptr [eax + 8], 0x20
// 0056c293  7413                 je 0x56c2a8
// 0056c295  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056c299  85c9                 test ecx, ecx
// 0056c29b  740b                 je 0x56c2a8
// 0056c29d  83c05a               add eax, 0x5a
// 0056c2a0  8901                 mov dword ptr [ecx], eax
// 0056c2a2  b820000000           mov eax, 0x20
// 0056c2a7  c3                   ret 
// 0056c2a8  33c0                 xor eax, eax
// 0056c2aa  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_bKGD)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
