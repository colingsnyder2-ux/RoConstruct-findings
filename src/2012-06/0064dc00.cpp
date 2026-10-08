// from server: 100% by auto
// roc 2012-06 0064dc00  unit: seg_00640000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0064dc00
//
// 0064dc00  837c240400           cmp dword ptr [esp + 4], 0
// 0064dc05  7410                 je 0x64dc17
// 0064dc07  8b442408             mov eax, dword ptr [esp + 8]
// 0064dc0b  85c0                 test eax, eax
// 0064dc0d  7408                 je 0x64dc17
// 0064dc0f  8b4008               mov eax, dword ptr [eax + 8]
// 0064dc12  2344240c             and eax, dword ptr [esp + 0xc]
// 0064dc16  c3                   ret 
// 0064dc17  33c0                 xor eax, eax
// 0064dc19  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_valid)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
