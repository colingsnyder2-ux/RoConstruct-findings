// roc 2009-06 0057f050  unit: G3D::_internal::DialogTemplate  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057f050
//
// 0057f050  56                   push esi
// 0057f051  8b742408             mov esi, dword ptr [esp + 8]
// 0057f055  8b4604               mov eax, dword ptr [esi + 4]
// 0057f058  57                   push edi
// 0057f059  33ff                 xor edi, edi
// 0057f05b  3bc7                 cmp eax, edi
// 0057f05d  7409                 je 0x57f068
// 0057f05f  8b4028               mov eax, dword ptr [eax + 0x28]
// 0057f062  56                   push esi
// 0057f063  ffd0                 call eax
// 0057f065  83c404               add esp, 4
// 0057f068  897e14               mov dword ptr [esi + 0x14], edi
// 0057f06b  897e04               mov dword ptr [esi + 4], edi
// 0057f06e  5f                   pop edi
// 0057f06f  5e                   pop esi
// 0057f070  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_destroy)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
