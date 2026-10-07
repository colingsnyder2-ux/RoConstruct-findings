// roc 2009-06 00588ba0  unit: seg_00580000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00588ba0
//
// 00588ba0  837c240400           cmp dword ptr [esp + 4], 0
// 00588ba5  7421                 je 0x588bc8
// 00588ba7  8b442408             mov eax, dword ptr [esp + 8]
// 00588bab  85c0                 test eax, eax
// 00588bad  7419                 je 0x588bc8
// 00588baf  f6400801             test byte ptr [eax + 8], 1
// 00588bb3  7413                 je 0x588bc8
// 00588bb5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00588bb9  85c9                 test ecx, ecx
// 00588bbb  740b                 je 0x588bc8
// 00588bbd  d94028               fld dword ptr [eax + 0x28]
// 00588bc0  b801000000           mov eax, 1
// 00588bc5  dd19                 fstp qword ptr [ecx]
// 00588bc7  c3                   ret 
// 00588bc8  33c0                 xor eax, eax
// 00588bca  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_gAMA)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
