// from server: 100% by auto
// roc 2007-08 0051d610  unit: seg_00510000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051d610
//
// 0051d610  837c240400           cmp dword ptr [esp + 4], 0
// 0051d615  7421                 je 0x51d638
// 0051d617  8b442408             mov eax, dword ptr [esp + 8]
// 0051d61b  85c0                 test eax, eax
// 0051d61d  7419                 je 0x51d638
// 0051d61f  f6400820             test byte ptr [eax + 8], 0x20
// 0051d623  7413                 je 0x51d638
// 0051d625  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051d629  85c9                 test ecx, ecx
// 0051d62b  740b                 je 0x51d638
// 0051d62d  83c05a               add eax, 0x5a
// 0051d630  8901                 mov dword ptr [ecx], eax
// 0051d632  b820000000           mov eax, 0x20
// 0051d637  c3                   ret 
// 0051d638  33c0                 xor eax, eax
// 0051d63a  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_bKGD)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
