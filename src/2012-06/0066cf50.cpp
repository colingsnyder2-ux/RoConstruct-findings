// from server: 100% by auto
// roc 2012-06 0066cf50  unit: seg_00660000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066cf50
//
// 0066cf50  8b442408             mov eax, dword ptr [esp + 8]
// 0066cf54  8b4850               mov ecx, dword ptr [eax + 0x50]
// 0066cf57  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0066cf5b  0fbf02               movsx eax, word ptr [edx]
// 0066cf5e  0faf01               imul eax, dword ptr [ecx]
// 0066cf61  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066cf65  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 0066cf6b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066cf6f  8b09                 mov ecx, dword ptr [ecx]
// 0066cf71  83c004               add eax, 4
// 0066cf74  c1f803               sar eax, 3
// 0066cf77  25ff030000           and eax, 0x3ff
// 0066cf7c  8a941080000000       mov dl, byte ptr [eax + edx + 0x80]
// 0066cf83  8b442414             mov eax, dword ptr [esp + 0x14]
// 0066cf87  881408               mov byte ptr [eax + ecx], dl
// 0066cf8a  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_1x1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
