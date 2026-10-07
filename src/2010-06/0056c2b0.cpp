// roc 2010-06 0056c2b0  unit: seg_00560000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056c2b0
//
// 0056c2b0  837c240400           cmp dword ptr [esp + 4], 0
// 0056c2b5  7421                 je 0x56c2d8
// 0056c2b7  8b442408             mov eax, dword ptr [esp + 8]
// 0056c2bb  85c0                 test eax, eax
// 0056c2bd  7419                 je 0x56c2d8
// 0056c2bf  f6400801             test byte ptr [eax + 8], 1
// 0056c2c3  7413                 je 0x56c2d8
// 0056c2c5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056c2c9  85c9                 test ecx, ecx
// 0056c2cb  740b                 je 0x56c2d8
// 0056c2cd  d94028               fld dword ptr [eax + 0x28]
// 0056c2d0  b801000000           mov eax, 1
// 0056c2d5  dd19                 fstp qword ptr [ecx]
// 0056c2d7  c3                   ret 
// 0056c2d8  33c0                 xor eax, eax
// 0056c2da  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_gAMA)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
