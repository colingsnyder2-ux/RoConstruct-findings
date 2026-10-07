// roc 2008-06 0053d6b0  unit: seg_00530000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053d6b0
//
// 0053d6b0  8b442408             mov eax, dword ptr [esp + 8]
// 0053d6b4  8b4850               mov ecx, dword ptr [eax + 0x50]
// 0053d6b7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0053d6bb  0fbf02               movsx eax, word ptr [edx]
// 0053d6be  0faf01               imul eax, dword ptr [ecx]
// 0053d6c1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0053d6c5  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 0053d6cb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053d6cf  8b09                 mov ecx, dword ptr [ecx]
// 0053d6d1  83c004               add eax, 4
// 0053d6d4  c1f803               sar eax, 3
// 0053d6d7  25ff030000           and eax, 0x3ff
// 0053d6dc  8a941080000000       mov dl, byte ptr [eax + edx + 0x80]
// 0053d6e3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053d6e7  881408               mov byte ptr [eax + ecx], dl
// 0053d6ea  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_1x1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
