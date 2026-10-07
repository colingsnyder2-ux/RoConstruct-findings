// roc 2011-06 00560d80  unit: seg_00560000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00560d80
//
// 00560d80  837c240400           cmp dword ptr [esp + 4], 0
// 00560d85  7410                 je 0x560d97
// 00560d87  8b442408             mov eax, dword ptr [esp + 8]
// 00560d8b  85c0                 test eax, eax
// 00560d8d  7408                 je 0x560d97
// 00560d8f  8b4008               mov eax, dword ptr [eax + 8]
// 00560d92  2344240c             and eax, dword ptr [esp + 0xc]
// 00560d96  c3                   ret 
// 00560d97  33c0                 xor eax, eax
// 00560d99  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_valid)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
