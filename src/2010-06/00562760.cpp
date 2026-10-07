// roc 2010-06 00562760  unit: G3D::_internal::DialogTemplate  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00562760
//
// 00562760  56                   push esi
// 00562761  8b742408             mov esi, dword ptr [esp + 8]
// 00562765  8b4604               mov eax, dword ptr [esi + 4]
// 00562768  85c0                 test eax, eax
// 0056276a  742b                 je 0x562797
// 0056276c  8b4024               mov eax, dword ptr [eax + 0x24]
// 0056276f  6a01                 push 1
// 00562771  56                   push esi
// 00562772  ffd0                 call eax
// 00562774  83c408               add esp, 8
// 00562777  807e1000             cmp byte ptr [esi + 0x10], 0
// 0056277b  7413                 je 0x562790
// 0056277d  c74614c8000000       mov dword ptr [esi + 0x14], 0xc8
// 00562784  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 0056278e  5e                   pop esi
// 0056278f  c3                   ret 
// 00562790  c7461464000000       mov dword ptr [esi + 0x14], 0x64
// 00562797  5e                   pop esi
// 00562798  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_abort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
