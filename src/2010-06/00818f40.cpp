// roc 2010-06 00818f40  unit: CXTPPropertyGridItem  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00818f40
//
// 00818f40  56                   push esi
// 00818f41  8bf1                 mov esi, ecx
// 00818f43  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00818f4a  744b                 je 0x818f97
// 00818f4c  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00818f52  83b94801000000       cmp dword ptr [ecx + 0x148], 0
// 00818f59  7524                 jne 0x818f7f
// 00818f5b  85c9                 test ecx, ecx
// 00818f5d  7420                 je 0x818f7f
// 00818f5f  83792000             cmp dword ptr [ecx + 0x20], 0
// 00818f63  741a                 je 0x818f7f
// 00818f65  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 00818f6c  7411                 je 0x818f7f
// 00818f6e  56                   push esi
// 00818f6f  e8fc390000           call 0x81c970
// 00818f74  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00818f7a  e811430000           call 0x81d290
// 00818f7f  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00818f85  56                   push esi
// 00818f86  6a07                 push 7
// 00818f88  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 00818f92  e829290000           call 0x81b8c0
// 00818f97  5e                   pop esi
// 00818f98  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Collapse@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
