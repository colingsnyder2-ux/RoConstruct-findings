// roc 2011-06 00581840  unit: seg_00580000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00581840
//
// 00581840  8b442408             mov eax, dword ptr [esp + 8]
// 00581844  8b4850               mov ecx, dword ptr [eax + 0x50]
// 00581847  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0058184b  0fbf02               movsx eax, word ptr [edx]
// 0058184e  0faf01               imul eax, dword ptr [ecx]
// 00581851  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00581855  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 0058185b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058185f  8b09                 mov ecx, dword ptr [ecx]
// 00581861  83c004               add eax, 4
// 00581864  c1f803               sar eax, 3
// 00581867  25ff030000           and eax, 0x3ff
// 0058186c  8a941080000000       mov dl, byte ptr [eax + edx + 0x80]
// 00581873  8b442414             mov eax, dword ptr [esp + 0x14]
// 00581877  881408               mov byte ptr [eax + ecx], dl
// 0058187a  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_1x1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
