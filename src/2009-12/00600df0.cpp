// roc 2009-12 00600df0  unit: G3D::_internal::DialogTemplate  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00600df0
//
// 00600df0  56                   push esi
// 00600df1  8b742408             mov esi, dword ptr [esp + 8]
// 00600df5  8b4604               mov eax, dword ptr [esi + 4]
// 00600df8  85c0                 test eax, eax
// 00600dfa  742b                 je 0x600e27
// 00600dfc  8b4024               mov eax, dword ptr [eax + 0x24]
// 00600dff  6a01                 push 1
// 00600e01  56                   push esi
// 00600e02  ffd0                 call eax
// 00600e04  83c408               add esp, 8
// 00600e07  807e1000             cmp byte ptr [esi + 0x10], 0
// 00600e0b  7413                 je 0x600e20
// 00600e0d  c74614c8000000       mov dword ptr [esi + 0x14], 0xc8
// 00600e14  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 00600e1e  5e                   pop esi
// 00600e1f  c3                   ret 
// 00600e20  c7461464000000       mov dword ptr [esi + 0x14], 0x64
// 00600e27  5e                   pop esi
// 00600e28  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_abort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
