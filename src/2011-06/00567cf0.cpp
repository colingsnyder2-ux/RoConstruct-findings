// roc 2011-06 00567cf0  unit: seg_00560000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00567cf0
//
// 00567cf0  56                   push esi
// 00567cf1  8b742408             mov esi, dword ptr [esp + 8]
// 00567cf5  8b4604               mov eax, dword ptr [esi + 4]
// 00567cf8  85c0                 test eax, eax
// 00567cfa  742b                 je 0x567d27
// 00567cfc  8b4024               mov eax, dword ptr [eax + 0x24]
// 00567cff  6a01                 push 1
// 00567d01  56                   push esi
// 00567d02  ffd0                 call eax
// 00567d04  83c408               add esp, 8
// 00567d07  807e1000             cmp byte ptr [esi + 0x10], 0
// 00567d0b  7413                 je 0x567d20
// 00567d0d  c74614c8000000       mov dword ptr [esi + 0x14], 0xc8
// 00567d14  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 00567d1e  5e                   pop esi
// 00567d1f  c3                   ret 
// 00567d20  c7461464000000       mov dword ptr [esi + 0x14], 0x64
// 00567d27  5e                   pop esi
// 00567d28  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_abort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
