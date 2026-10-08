// roc 2009-12 00600e30  unit: G3D::_internal::DialogTemplate  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00600e30
//
// 00600e30  56                   push esi
// 00600e31  8b742408             mov esi, dword ptr [esp + 8]
// 00600e35  8b4604               mov eax, dword ptr [esi + 4]
// 00600e38  57                   push edi
// 00600e39  33ff                 xor edi, edi
// 00600e3b  3bc7                 cmp eax, edi
// 00600e3d  7409                 je 0x600e48
// 00600e3f  8b4028               mov eax, dword ptr [eax + 0x28]
// 00600e42  56                   push esi
// 00600e43  ffd0                 call eax
// 00600e45  83c404               add esp, 4
// 00600e48  897e14               mov dword ptr [esi + 0x14], edi
// 00600e4b  897e04               mov dword ptr [esi + 4], edi
// 00600e4e  5f                   pop edi
// 00600e4f  5e                   pop esi
// 00600e50  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_destroy)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
