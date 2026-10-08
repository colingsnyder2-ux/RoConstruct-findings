// roc 2009-12 0060a8e0  unit: seg_00600000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060a8e0
//
// 0060a8e0  837c240400           cmp dword ptr [esp + 4], 0
// 0060a8e5  740c                 je 0x60a8f3
// 0060a8e7  8b442408             mov eax, dword ptr [esp + 8]
// 0060a8eb  85c0                 test eax, eax
// 0060a8ed  7404                 je 0x60a8f3
// 0060a8ef  8a401d               mov al, byte ptr [eax + 0x1d]
// 0060a8f2  c3                   ret 
// 0060a8f3  32c0                 xor al, al
// 0060a8f5  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_channels)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
