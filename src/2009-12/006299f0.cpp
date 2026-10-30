// roc 2009-12 006299f0  unit: seg_00620000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006299f0
//
// 006299f0  8b442408             mov eax, dword ptr [esp + 8]
// 006299f4  8b4850               mov ecx, dword ptr [eax + 0x50]
// 006299f7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006299fb  0fbf02               movsx eax, word ptr [edx]
// 006299fe  0faf01               imul eax, dword ptr [ecx]
// 00629a01  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00629a05  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 00629a0b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00629a0f  8b09                 mov ecx, dword ptr [ecx]
// 00629a11  83c004               add eax, 4
// 00629a14  c1f803               sar eax, 3
// 00629a17  25ff030000           and eax, 0x3ff
// 00629a1c  8a941080000000       mov dl, byte ptr [eax + edx + 0x80]
// 00629a23  8b442414             mov eax, dword ptr [esp + 0x14]
// 00629a27  881408               mov byte ptr [eax + ecx], dl
// 00629a2a  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_1x1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
