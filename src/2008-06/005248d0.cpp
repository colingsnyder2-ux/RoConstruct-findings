// from server: 100% by auto
// roc 2008-06 005248d0  unit: seg_00520000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005248d0
//
// 005248d0  837c240400           cmp dword ptr [esp + 4], 0
// 005248d5  7410                 je 0x5248e7
// 005248d7  8b442408             mov eax, dword ptr [esp + 8]
// 005248db  85c0                 test eax, eax
// 005248dd  7408                 je 0x5248e7
// 005248df  8b4008               mov eax, dword ptr [eax + 8]
// 005248e2  2344240c             and eax, dword ptr [esp + 0xc]
// 005248e6  c3                   ret 
// 005248e7  33c0                 xor eax, eax
// 005248e9  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_valid)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
