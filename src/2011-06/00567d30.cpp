// roc 2011-06 00567d30  unit: seg_00560000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00567d30
//
// 00567d30  56                   push esi
// 00567d31  8b742408             mov esi, dword ptr [esp + 8]
// 00567d35  8b4604               mov eax, dword ptr [esi + 4]
// 00567d38  57                   push edi
// 00567d39  33ff                 xor edi, edi
// 00567d3b  3bc7                 cmp eax, edi
// 00567d3d  7409                 je 0x567d48
// 00567d3f  8b4028               mov eax, dword ptr [eax + 0x28]
// 00567d42  56                   push esi
// 00567d43  ffd0                 call eax
// 00567d45  83c404               add esp, 4
// 00567d48  897e14               mov dword ptr [esi + 0x14], edi
// 00567d4b  897e04               mov dword ptr [esi + 4], edi
// 00567d4e  5f                   pop edi
// 00567d4f  5e                   pop esi
// 00567d50  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_destroy)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
