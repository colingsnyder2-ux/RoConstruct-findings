// from server: 100% by auto
// roc 2008-06 0051b6b0  unit: G3D::_internal::DialogTemplate  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051b6b0
//
// 0051b6b0  56                   push esi
// 0051b6b1  8b742408             mov esi, dword ptr [esp + 8]
// 0051b6b5  8b4604               mov eax, dword ptr [esi + 4]
// 0051b6b8  57                   push edi
// 0051b6b9  33ff                 xor edi, edi
// 0051b6bb  3bc7                 cmp eax, edi
// 0051b6bd  7409                 je 0x51b6c8
// 0051b6bf  8b4028               mov eax, dword ptr [eax + 0x28]
// 0051b6c2  56                   push esi
// 0051b6c3  ffd0                 call eax
// 0051b6c5  83c404               add esp, 4
// 0051b6c8  897e14               mov dword ptr [esi + 0x14], edi
// 0051b6cb  897e04               mov dword ptr [esi + 4], edi
// 0051b6ce  5f                   pop edi
// 0051b6cf  5e                   pop esi
// 0051b6d0  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_destroy)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
