// roc 2007-08 0051d640  unit: seg_00510000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051d640
//
// 0051d640  837c240400           cmp dword ptr [esp + 4], 0
// 0051d645  7421                 je 0x51d668
// 0051d647  8b442408             mov eax, dword ptr [esp + 8]
// 0051d64b  85c0                 test eax, eax
// 0051d64d  7419                 je 0x51d668
// 0051d64f  f6400801             test byte ptr [eax + 8], 1
// 0051d653  7413                 je 0x51d668
// 0051d655  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051d659  85c9                 test ecx, ecx
// 0051d65b  740b                 je 0x51d668
// 0051d65d  d94028               fld dword ptr [eax + 0x28]
// 0051d660  b801000000           mov eax, 1
// 0051d665  dd19                 fstp qword ptr [ecx]
// 0051d667  c3                   ret 
// 0051d668  33c0                 xor eax, eax
// 0051d66a  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_gAMA)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
