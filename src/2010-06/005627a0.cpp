// roc 2010-06 005627a0  unit: G3D::_internal::DialogTemplate  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005627a0
//
// 005627a0  56                   push esi
// 005627a1  8b742408             mov esi, dword ptr [esp + 8]
// 005627a5  8b4604               mov eax, dword ptr [esi + 4]
// 005627a8  57                   push edi
// 005627a9  33ff                 xor edi, edi
// 005627ab  3bc7                 cmp eax, edi
// 005627ad  7409                 je 0x5627b8
// 005627af  8b4028               mov eax, dword ptr [eax + 0x28]
// 005627b2  56                   push esi
// 005627b3  ffd0                 call eax
// 005627b5  83c404               add esp, 4
// 005627b8  897e14               mov dword ptr [esi + 0x14], edi
// 005627bb  897e04               mov dword ptr [esi + 4], edi
// 005627be  5f                   pop edi
// 005627bf  5e                   pop esi
// 005627c0  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_destroy)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
