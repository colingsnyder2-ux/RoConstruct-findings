// from server: 100% by auto
// roc 2012-06 00653400  unit: seg_00650000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00653400
//
// 00653400  56                   push esi
// 00653401  8b742408             mov esi, dword ptr [esp + 8]
// 00653405  8b4604               mov eax, dword ptr [esi + 4]
// 00653408  85c0                 test eax, eax
// 0065340a  742b                 je 0x653437
// 0065340c  8b4024               mov eax, dword ptr [eax + 0x24]
// 0065340f  6a01                 push 1
// 00653411  56                   push esi
// 00653412  ffd0                 call eax
// 00653414  83c408               add esp, 8
// 00653417  807e1000             cmp byte ptr [esi + 0x10], 0
// 0065341b  7413                 je 0x653430
// 0065341d  c74614c8000000       mov dword ptr [esi + 0x14], 0xc8
// 00653424  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 0065342e  5e                   pop esi
// 0065342f  c3                   ret 
// 00653430  c7461464000000       mov dword ptr [esi + 0x14], 0x64
// 00653437  5e                   pop esi
// 00653438  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_abort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
