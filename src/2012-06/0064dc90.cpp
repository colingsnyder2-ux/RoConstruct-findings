// roc 2012-06 0064dc90  unit: seg_00640000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0064dc90
//
// 0064dc90  837c240400           cmp dword ptr [esp + 4], 0
// 0064dc95  7421                 je 0x64dcb8
// 0064dc97  8b442408             mov eax, dword ptr [esp + 8]
// 0064dc9b  85c0                 test eax, eax
// 0064dc9d  7419                 je 0x64dcb8
// 0064dc9f  f6400801             test byte ptr [eax + 8], 1
// 0064dca3  7413                 je 0x64dcb8
// 0064dca5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064dca9  85c9                 test ecx, ecx
// 0064dcab  740b                 je 0x64dcb8
// 0064dcad  d94028               fld dword ptr [eax + 0x28]
// 0064dcb0  b801000000           mov eax, 1
// 0064dcb5  dd19                 fstp qword ptr [ecx]
// 0064dcb7  c3                   ret 
// 0064dcb8  33c0                 xor eax, eax
// 0064dcba  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_gAMA)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
