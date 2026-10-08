// roc 2009-06 0078d750  unit: CXTPPropertyGridView  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078d750
//
// 0078d750  83ec14               sub esp, 0x14
// 0078d753  56                   push esi
// 0078d754  8bf1                 mov esi, ecx
// 0078d756  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 0078d75d  7426                 je 0x78d785
// 0078d75f  56                   push esi
// 0078d760  8d4c240c             lea ecx, [esp + 0xc]
// 0078d764  e8072dfeff           call 0x770470
// 0078d769  8b4808               mov ecx, dword ptr [eax + 8]
// 0078d76c  2b08                 sub ecx, dword ptr [eax]
// 0078d76e  894c2404             mov dword ptr [esp + 4], ecx
// 0078d772  db442404             fild dword ptr [esp + 4]
// 0078d776  dc8ec8000000         fmul qword ptr [esi + 0xc8]
// 0078d77c  5e                   pop esi
// 0078d77d  83c414               add esp, 0x14
// 0078d780  e93bc7f8ff           jmp 0x719ec0
// 0078d785  c744240401000000     mov dword ptr [esp + 4], 1
// 0078d78d  db442404             fild dword ptr [esp + 4]
// 0078d791  dc8ec8000000         fmul qword ptr [esi + 0xc8]
// 0078d797  5e                   pop esi
// 0078d798  83c414               add esp, 0x14
// 0078d79b  e920c7f8ff           jmp 0x719ec0
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetDividerPos@CXTPPropertyGridView@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
