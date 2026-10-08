// from server: 100% by auto
// roc 2009-06 0057f010  unit: G3D::_internal::DialogTemplate  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057f010
//
// 0057f010  56                   push esi
// 0057f011  8b742408             mov esi, dword ptr [esp + 8]
// 0057f015  8b4604               mov eax, dword ptr [esi + 4]
// 0057f018  85c0                 test eax, eax
// 0057f01a  742b                 je 0x57f047
// 0057f01c  8b4024               mov eax, dword ptr [eax + 0x24]
// 0057f01f  6a01                 push 1
// 0057f021  56                   push esi
// 0057f022  ffd0                 call eax
// 0057f024  83c408               add esp, 8
// 0057f027  807e1000             cmp byte ptr [esi + 0x10], 0
// 0057f02b  7413                 je 0x57f040
// 0057f02d  c74614c8000000       mov dword ptr [esi + 0x14], 0xc8
// 0057f034  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 0057f03e  5e                   pop esi
// 0057f03f  c3                   ret 
// 0057f040  c7461464000000       mov dword ptr [esi + 0x14], 0x64
// 0057f047  5e                   pop esi
// 0057f048  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_abort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
