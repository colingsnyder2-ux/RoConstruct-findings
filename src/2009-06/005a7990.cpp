// from server: 100% by auto
// roc 2009-06 005a7990  unit: seg_005a0000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a7990
//
// 005a7990  8b442408             mov eax, dword ptr [esp + 8]
// 005a7994  8b4850               mov ecx, dword ptr [eax + 0x50]
// 005a7997  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a799b  0fbf02               movsx eax, word ptr [edx]
// 005a799e  0faf01               imul eax, dword ptr [ecx]
// 005a79a1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a79a5  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 005a79ab  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a79af  8b09                 mov ecx, dword ptr [ecx]
// 005a79b1  83c004               add eax, 4
// 005a79b4  c1f803               sar eax, 3
// 005a79b7  25ff030000           and eax, 0x3ff
// 005a79bc  8a941080000000       mov dl, byte ptr [eax + edx + 0x80]
// 005a79c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a79c7  881408               mov byte ptr [eax + ecx], dl
// 005a79ca  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_1x1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
