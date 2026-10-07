// roc 2012-06 00653440  unit: seg_00650000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00653440
//
// 00653440  56                   push esi
// 00653441  8b742408             mov esi, dword ptr [esp + 8]
// 00653445  8b4604               mov eax, dword ptr [esi + 4]
// 00653448  57                   push edi
// 00653449  33ff                 xor edi, edi
// 0065344b  3bc7                 cmp eax, edi
// 0065344d  7409                 je 0x653458
// 0065344f  8b4028               mov eax, dword ptr [eax + 0x28]
// 00653452  56                   push esi
// 00653453  ffd0                 call eax
// 00653455  83c404               add esp, 4
// 00653458  897e14               mov dword ptr [esi + 0x14], edi
// 0065345b  897e04               mov dword ptr [esi + 4], edi
// 0065345e  5f                   pop edi
// 0065345f  5e                   pop esi
// 00653460  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_destroy)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
