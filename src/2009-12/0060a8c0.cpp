// roc 2009-12 0060a8c0  unit: seg_00600000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060a8c0
//
// 0060a8c0  837c240400           cmp dword ptr [esp + 4], 0
// 0060a8c5  740c                 je 0x60a8d3
// 0060a8c7  8b442408             mov eax, dword ptr [esp + 8]
// 0060a8cb  85c0                 test eax, eax
// 0060a8cd  7404                 je 0x60a8d3
// 0060a8cf  8b400c               mov eax, dword ptr [eax + 0xc]
// 0060a8d2  c3                   ret 
// 0060a8d3  33c0                 xor eax, eax
// 0060a8d5  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_rowbytes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
