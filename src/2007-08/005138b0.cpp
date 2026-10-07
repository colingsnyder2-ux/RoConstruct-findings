// roc 2007-08 005138b0  unit: G3D::_internal::DialogTemplate  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005138b0
//
// 005138b0  56                   push esi
// 005138b1  8b742408             mov esi, dword ptr [esp + 8]
// 005138b5  8b4604               mov eax, dword ptr [esi + 4]
// 005138b8  85c0                 test eax, eax
// 005138ba  742b                 je 0x5138e7
// 005138bc  8b4024               mov eax, dword ptr [eax + 0x24]
// 005138bf  6a01                 push 1
// 005138c1  56                   push esi
// 005138c2  ffd0                 call eax
// 005138c4  83c408               add esp, 8
// 005138c7  807e1000             cmp byte ptr [esi + 0x10], 0
// 005138cb  7413                 je 0x5138e0
// 005138cd  c74614c8000000       mov dword ptr [esi + 0x14], 0xc8
// 005138d4  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 005138de  5e                   pop esi
// 005138df  c3                   ret 
// 005138e0  c7461464000000       mov dword ptr [esi + 0x14], 0x64
// 005138e7  5e                   pop esi
// 005138e8  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_abort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
