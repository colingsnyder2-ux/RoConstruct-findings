// roc 2007-08 005138f0  unit: G3D::_internal::DialogTemplate  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005138f0
//
// 005138f0  56                   push esi
// 005138f1  8b742408             mov esi, dword ptr [esp + 8]
// 005138f5  8b4604               mov eax, dword ptr [esi + 4]
// 005138f8  57                   push edi
// 005138f9  33ff                 xor edi, edi
// 005138fb  3bc7                 cmp eax, edi
// 005138fd  7409                 je 0x513908
// 005138ff  8b4028               mov eax, dword ptr [eax + 0x28]
// 00513902  56                   push esi
// 00513903  ffd0                 call eax
// 00513905  83c404               add esp, 4
// 00513908  897e14               mov dword ptr [esi + 0x14], edi
// 0051390b  897e04               mov dword ptr [esi + 4], edi
// 0051390e  5f                   pop edi
// 0051390f  5e                   pop esi
// 00513910  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_destroy)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
