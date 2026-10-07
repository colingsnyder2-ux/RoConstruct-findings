// roc 2010-06 0056c220  unit: seg_00560000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056c220
//
// 0056c220  837c240400           cmp dword ptr [esp + 4], 0
// 0056c225  7410                 je 0x56c237
// 0056c227  8b442408             mov eax, dword ptr [esp + 8]
// 0056c22b  85c0                 test eax, eax
// 0056c22d  7408                 je 0x56c237
// 0056c22f  8b4008               mov eax, dword ptr [eax + 8]
// 0056c232  2344240c             and eax, dword ptr [esp + 0xc]
// 0056c236  c3                   ret 
// 0056c237  33c0                 xor eax, eax
// 0056c239  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_valid)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
