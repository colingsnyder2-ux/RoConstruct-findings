// roc 2009-12 0060a8a0  unit: seg_00600000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060a8a0
//
// 0060a8a0  837c240400           cmp dword ptr [esp + 4], 0
// 0060a8a5  7410                 je 0x60a8b7
// 0060a8a7  8b442408             mov eax, dword ptr [esp + 8]
// 0060a8ab  85c0                 test eax, eax
// 0060a8ad  7408                 je 0x60a8b7
// 0060a8af  8b4008               mov eax, dword ptr [eax + 8]
// 0060a8b2  2344240c             and eax, dword ptr [esp + 0xc]
// 0060a8b6  c3                   ret 
// 0060a8b7  33c0                 xor eax, eax
// 0060a8b9  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_valid)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
