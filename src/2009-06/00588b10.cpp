// from server: 100% by auto
// roc 2009-06 00588b10  unit: seg_00580000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00588b10
//
// 00588b10  837c240400           cmp dword ptr [esp + 4], 0
// 00588b15  7410                 je 0x588b27
// 00588b17  8b442408             mov eax, dword ptr [esp + 8]
// 00588b1b  85c0                 test eax, eax
// 00588b1d  7408                 je 0x588b27
// 00588b1f  8b4008               mov eax, dword ptr [eax + 8]
// 00588b22  2344240c             and eax, dword ptr [esp + 0xc]
// 00588b26  c3                   ret 
// 00588b27  33c0                 xor eax, eax
// 00588b29  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_valid)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
