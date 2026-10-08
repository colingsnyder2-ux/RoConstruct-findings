// from server: 100% by auto
// roc 2007-08 0051d5d0  unit: seg_00510000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051d5d0
//
// 0051d5d0  837c240400           cmp dword ptr [esp + 4], 0
// 0051d5d5  740c                 je 0x51d5e3
// 0051d5d7  8b442408             mov eax, dword ptr [esp + 8]
// 0051d5db  85c0                 test eax, eax
// 0051d5dd  7404                 je 0x51d5e3
// 0051d5df  8b400c               mov eax, dword ptr [eax + 0xc]
// 0051d5e2  c3                   ret 
// 0051d5e3  33c0                 xor eax, eax
// 0051d5e5  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_rowbytes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
