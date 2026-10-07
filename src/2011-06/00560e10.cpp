// roc 2011-06 00560e10  unit: seg_00560000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00560e10
//
// 00560e10  837c240400           cmp dword ptr [esp + 4], 0
// 00560e15  7421                 je 0x560e38
// 00560e17  8b442408             mov eax, dword ptr [esp + 8]
// 00560e1b  85c0                 test eax, eax
// 00560e1d  7419                 je 0x560e38
// 00560e1f  f6400801             test byte ptr [eax + 8], 1
// 00560e23  7413                 je 0x560e38
// 00560e25  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00560e29  85c9                 test ecx, ecx
// 00560e2b  740b                 je 0x560e38
// 00560e2d  d94028               fld dword ptr [eax + 0x28]
// 00560e30  b801000000           mov eax, 1
// 00560e35  dd19                 fstp qword ptr [ecx]
// 00560e37  c3                   ret 
// 00560e38  33c0                 xor eax, eax
// 00560e3a  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_gAMA)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
