// roc 2008-06 0051b670  unit: G3D::_internal::DialogTemplate  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051b670
//
// 0051b670  56                   push esi
// 0051b671  8b742408             mov esi, dword ptr [esp + 8]
// 0051b675  8b4604               mov eax, dword ptr [esi + 4]
// 0051b678  85c0                 test eax, eax
// 0051b67a  742b                 je 0x51b6a7
// 0051b67c  8b4024               mov eax, dword ptr [eax + 0x24]
// 0051b67f  6a01                 push 1
// 0051b681  56                   push esi
// 0051b682  ffd0                 call eax
// 0051b684  83c408               add esp, 8
// 0051b687  807e1000             cmp byte ptr [esi + 0x10], 0
// 0051b68b  7413                 je 0x51b6a0
// 0051b68d  c74614c8000000       mov dword ptr [esi + 0x14], 0xc8
// 0051b694  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 0051b69e  5e                   pop esi
// 0051b69f  c3                   ret 
// 0051b6a0  c7461464000000       mov dword ptr [esi + 0x14], 0x64
// 0051b6a7  5e                   pop esi
// 0051b6a8  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_abort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
