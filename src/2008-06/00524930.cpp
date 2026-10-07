// roc 2008-06 00524930  unit: seg_00520000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00524930
//
// 00524930  837c240400           cmp dword ptr [esp + 4], 0
// 00524935  7421                 je 0x524958
// 00524937  8b442408             mov eax, dword ptr [esp + 8]
// 0052493b  85c0                 test eax, eax
// 0052493d  7419                 je 0x524958
// 0052493f  f6400820             test byte ptr [eax + 8], 0x20
// 00524943  7413                 je 0x524958
// 00524945  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00524949  85c9                 test ecx, ecx
// 0052494b  740b                 je 0x524958
// 0052494d  83c05a               add eax, 0x5a
// 00524950  8901                 mov dword ptr [ecx], eax
// 00524952  b820000000           mov eax, 0x20
// 00524957  c3                   ret 
// 00524958  33c0                 xor eax, eax
// 0052495a  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_bKGD)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
