// from server: 100% by auto
// roc 2009-06 00588b50  unit: seg_00580000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00588b50
//
// 00588b50  837c240400           cmp dword ptr [esp + 4], 0
// 00588b55  740c                 je 0x588b63
// 00588b57  8b442408             mov eax, dword ptr [esp + 8]
// 00588b5b  85c0                 test eax, eax
// 00588b5d  7404                 je 0x588b63
// 00588b5f  8a401d               mov al, byte ptr [eax + 0x1d]
// 00588b62  c3                   ret 
// 00588b63  32c0                 xor al, al
// 00588b65  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_channels)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
