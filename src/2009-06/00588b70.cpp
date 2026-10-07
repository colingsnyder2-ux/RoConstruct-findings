// roc 2009-06 00588b70  unit: seg_00580000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00588b70
//
// 00588b70  837c240400           cmp dword ptr [esp + 4], 0
// 00588b75  7421                 je 0x588b98
// 00588b77  8b442408             mov eax, dword ptr [esp + 8]
// 00588b7b  85c0                 test eax, eax
// 00588b7d  7419                 je 0x588b98
// 00588b7f  f6400820             test byte ptr [eax + 8], 0x20
// 00588b83  7413                 je 0x588b98
// 00588b85  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00588b89  85c9                 test ecx, ecx
// 00588b8b  740b                 je 0x588b98
// 00588b8d  83c05a               add eax, 0x5a
// 00588b90  8901                 mov dword ptr [ecx], eax
// 00588b92  b820000000           mov eax, 0x20
// 00588b97  c3                   ret 
// 00588b98  33c0                 xor eax, eax
// 00588b9a  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_bKGD)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
