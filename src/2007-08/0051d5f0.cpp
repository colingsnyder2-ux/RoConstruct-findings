// from server: 100% by auto
// roc 2007-08 0051d5f0  unit: seg_00510000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051d5f0
//
// 0051d5f0  837c240400           cmp dword ptr [esp + 4], 0
// 0051d5f5  740c                 je 0x51d603
// 0051d5f7  8b442408             mov eax, dword ptr [esp + 8]
// 0051d5fb  85c0                 test eax, eax
// 0051d5fd  7404                 je 0x51d603
// 0051d5ff  8a401d               mov al, byte ptr [eax + 0x1d]
// 0051d602  c3                   ret 
// 0051d603  32c0                 xor al, al
// 0051d605  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_channels)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
