// roc 2009-12 0060a930  unit: seg_00600000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060a930
//
// 0060a930  837c240400           cmp dword ptr [esp + 4], 0
// 0060a935  7421                 je 0x60a958
// 0060a937  8b442408             mov eax, dword ptr [esp + 8]
// 0060a93b  85c0                 test eax, eax
// 0060a93d  7419                 je 0x60a958
// 0060a93f  f6400801             test byte ptr [eax + 8], 1
// 0060a943  7413                 je 0x60a958
// 0060a945  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060a949  85c9                 test ecx, ecx
// 0060a94b  740b                 je 0x60a958
// 0060a94d  d94028               fld dword ptr [eax + 0x28]
// 0060a950  b801000000           mov eax, 1
// 0060a955  dd19                 fstp qword ptr [ecx]
// 0060a957  c3                   ret 
// 0060a958  33c0                 xor eax, eax
// 0060a95a  c3                   ret 
// library libpng-1.2.5/pngget.c (function _png_get_gAMA)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngget.c
