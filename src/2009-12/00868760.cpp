// roc 2009-12 00868760  unit: CXTPPropertyGridView  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868760
//
// 00868760  83ec14               sub esp, 0x14
// 00868763  56                   push esi
// 00868764  8bf1                 mov esi, ecx
// 00868766  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 0086876d  7426                 je 0x868795
// 0086876f  56                   push esi
// 00868770  8d4c240c             lea ecx, [esp + 0xc]
// 00868774  e8f72afeff           call 0x84b270
// 00868779  8b4808               mov ecx, dword ptr [eax + 8]
// 0086877c  2b08                 sub ecx, dword ptr [eax]
// 0086877e  894c2404             mov dword ptr [esp + 4], ecx
// 00868782  db442404             fild dword ptr [esp + 4]
// 00868786  dc8ec8000000         fmul qword ptr [esi + 0xc8]
// 0086878c  5e                   pop esi
// 0086878d  83c414               add esp, 0x14
// 00868790  e95bc5f8ff           jmp 0x7f4cf0
// 00868795  c744240401000000     mov dword ptr [esp + 4], 1
// 0086879d  db442404             fild dword ptr [esp + 4]
// 008687a1  dc8ec8000000         fmul qword ptr [esi + 0xc8]
// 008687a7  5e                   pop esi
// 008687a8  83c414               add esp, 0x14
// 008687ab  e940c5f8ff           jmp 0x7f4cf0
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetDividerPos@CXTPPropertyGridView@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
