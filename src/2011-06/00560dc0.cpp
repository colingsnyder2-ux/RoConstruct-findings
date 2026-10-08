// from server: 100% by auto
// roc 2011-06 00560dc0  unit: seg_00560000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00560dc0
//
// 00560dc0  837c240400           cmp dword ptr [esp + 4], 0
// 00560dc5  740c                 je 0x560dd3
// 00560dc7  8b442408             mov eax, dword ptr [esp + 8]
// 00560dcb  85c0                 test eax, eax
// 00560dcd  7404                 je 0x560dd3
// 00560dcf  8a401d               mov al, byte ptr [eax + 0x1d]
// 00560dd2  c3                   ret 
// 00560dd3  32c0                 xor al, al
// 00560dd5  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_channels)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
