// roc 2008-06 00524910  unit: seg_00520000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00524910
//
// 00524910  837c240400           cmp dword ptr [esp + 4], 0
// 00524915  740c                 je 0x524923
// 00524917  8b442408             mov eax, dword ptr [esp + 8]
// 0052491b  85c0                 test eax, eax
// 0052491d  7404                 je 0x524923
// 0052491f  8a401d               mov al, byte ptr [eax + 0x1d]
// 00524922  c3                   ret 
// 00524923  32c0                 xor al, al
// 00524925  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_channels)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
