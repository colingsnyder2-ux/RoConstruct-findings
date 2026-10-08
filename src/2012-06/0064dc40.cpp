// from server: 100% by auto
// roc 2012-06 0064dc40  unit: seg_00640000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0064dc40
//
// 0064dc40  837c240400           cmp dword ptr [esp + 4], 0
// 0064dc45  740c                 je 0x64dc53
// 0064dc47  8b442408             mov eax, dword ptr [esp + 8]
// 0064dc4b  85c0                 test eax, eax
// 0064dc4d  7404                 je 0x64dc53
// 0064dc4f  8a401d               mov al, byte ptr [eax + 0x1d]
// 0064dc52  c3                   ret 
// 0064dc53  32c0                 xor al, al
// 0064dc55  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_channels)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
