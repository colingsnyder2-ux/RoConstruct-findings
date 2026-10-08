// from server: 100% by auto
// roc 2012-06 0064dc60  unit: seg_00640000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0064dc60
//
// 0064dc60  837c240400           cmp dword ptr [esp + 4], 0
// 0064dc65  7421                 je 0x64dc88
// 0064dc67  8b442408             mov eax, dword ptr [esp + 8]
// 0064dc6b  85c0                 test eax, eax
// 0064dc6d  7419                 je 0x64dc88
// 0064dc6f  f6400820             test byte ptr [eax + 8], 0x20
// 0064dc73  7413                 je 0x64dc88
// 0064dc75  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064dc79  85c9                 test ecx, ecx
// 0064dc7b  740b                 je 0x64dc88
// 0064dc7d  83c05a               add eax, 0x5a
// 0064dc80  8901                 mov dword ptr [ecx], eax
// 0064dc82  b820000000           mov eax, 0x20
// 0064dc87  c3                   ret 
// 0064dc88  33c0                 xor eax, eax
// 0064dc8a  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_bKGD)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
