// roc 2010-06 0058b550  unit: seg_00580000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058b550
//
// 0058b550  8b442408             mov eax, dword ptr [esp + 8]
// 0058b554  8b4850               mov ecx, dword ptr [eax + 0x50]
// 0058b557  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0058b55b  0fbf02               movsx eax, word ptr [edx]
// 0058b55e  0faf01               imul eax, dword ptr [ecx]
// 0058b561  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058b565  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 0058b56b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058b56f  8b09                 mov ecx, dword ptr [ecx]
// 0058b571  83c004               add eax, 4
// 0058b574  c1f803               sar eax, 3
// 0058b577  25ff030000           and eax, 0x3ff
// 0058b57c  8a941080000000       mov dl, byte ptr [eax + edx + 0x80]
// 0058b583  8b442414             mov eax, dword ptr [esp + 0x14]
// 0058b587  881408               mov byte ptr [eax + ecx], dl
// 0058b58a  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_1x1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
