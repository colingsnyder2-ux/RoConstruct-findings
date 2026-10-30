// from server: 100% by auto
// roc 2007-08 0052c690  unit: seg_00520000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052c690
//
// 0052c690  8b442408             mov eax, dword ptr [esp + 8]
// 0052c694  8b4850               mov ecx, dword ptr [eax + 0x50]
// 0052c697  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0052c69b  0fb702               movzx eax, word ptr [edx]
// 0052c69e  0faf01               imul eax, dword ptr [ecx]
// 0052c6a1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0052c6a5  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 0052c6ab  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052c6af  8b09                 mov ecx, dword ptr [ecx]
// 0052c6b1  83c004               add eax, 4
// 0052c6b4  c1f803               sar eax, 3
// 0052c6b7  25ff030000           and eax, 0x3ff
// 0052c6bc  8a941080000000       mov dl, byte ptr [eax + edx + 0x80]
// 0052c6c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052c6c7  881408               mov byte ptr [eax + ecx], dl
// 0052c6ca  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_1x1)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
