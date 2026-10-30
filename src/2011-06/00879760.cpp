// roc 2011-06 00879760  unit: CXTPPropertyGridItem  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00879760
//
// 00879760  56                   push esi
// 00879761  8bf1                 mov esi, ecx
// 00879763  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 0087976a  744b                 je 0x8797b7
// 0087976c  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00879772  83b94801000000       cmp dword ptr [ecx + 0x148], 0
// 00879779  7524                 jne 0x87979f
// 0087977b  85c9                 test ecx, ecx
// 0087977d  7420                 je 0x87979f
// 0087977f  83792000             cmp dword ptr [ecx + 0x20], 0
// 00879783  741a                 je 0x87979f
// 00879785  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 0087978c  7411                 je 0x87979f
// 0087978e  56                   push esi
// 0087978f  e80cd7ffff           call 0x876ea0
// 00879794  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0087979a  e821e0ffff           call 0x8777c0
// 0087979f  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 008797a5  56                   push esi
// 008797a6  6a07                 push 7
// 008797a8  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 008797b2  e819c6ffff           call 0x875dd0
// 008797b7  5e                   pop esi
// 008797b8  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Collapse@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
