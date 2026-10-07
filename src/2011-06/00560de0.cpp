// roc 2011-06 00560de0  unit: seg_00560000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00560de0
//
// 00560de0  837c240400           cmp dword ptr [esp + 4], 0
// 00560de5  7421                 je 0x560e08
// 00560de7  8b442408             mov eax, dword ptr [esp + 8]
// 00560deb  85c0                 test eax, eax
// 00560ded  7419                 je 0x560e08
// 00560def  f6400820             test byte ptr [eax + 8], 0x20
// 00560df3  7413                 je 0x560e08
// 00560df5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00560df9  85c9                 test ecx, ecx
// 00560dfb  740b                 je 0x560e08
// 00560dfd  83c05a               add eax, 0x5a
// 00560e00  8901                 mov dword ptr [ecx], eax
// 00560e02  b820000000           mov eax, 0x20
// 00560e07  c3                   ret 
// 00560e08  33c0                 xor eax, eax
// 00560e0a  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_bKGD)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
