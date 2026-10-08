// roc 2009-12 0060a900  unit: seg_00600000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060a900
//
// 0060a900  837c240400           cmp dword ptr [esp + 4], 0
// 0060a905  7421                 je 0x60a928
// 0060a907  8b442408             mov eax, dword ptr [esp + 8]
// 0060a90b  85c0                 test eax, eax
// 0060a90d  7419                 je 0x60a928
// 0060a90f  f6400820             test byte ptr [eax + 8], 0x20
// 0060a913  7413                 je 0x60a928
// 0060a915  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060a919  85c9                 test ecx, ecx
// 0060a91b  740b                 je 0x60a928
// 0060a91d  83c05a               add eax, 0x5a
// 0060a920  8901                 mov dword ptr [ecx], eax
// 0060a922  b820000000           mov eax, 0x20
// 0060a927  c3                   ret 
// 0060a928  33c0                 xor eax, eax
// 0060a92a  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_bKGD)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
