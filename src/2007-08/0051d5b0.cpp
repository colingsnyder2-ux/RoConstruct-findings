// from server: 100% by auto
// roc 2007-08 0051d5b0  unit: seg_00510000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051d5b0
//
// 0051d5b0  837c240400           cmp dword ptr [esp + 4], 0
// 0051d5b5  7410                 je 0x51d5c7
// 0051d5b7  8b442408             mov eax, dword ptr [esp + 8]
// 0051d5bb  85c0                 test eax, eax
// 0051d5bd  7408                 je 0x51d5c7
// 0051d5bf  8b4008               mov eax, dword ptr [eax + 8]
// 0051d5c2  2344240c             and eax, dword ptr [esp + 0xc]
// 0051d5c6  c3                   ret 
// 0051d5c7  33c0                 xor eax, eax
// 0051d5c9  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_valid)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
