// roc 2009-12 00864f80  unit: CXTPPropertyGridItem  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864f80
//
// 00864f80  56                   push esi
// 00864f81  8bf1                 mov esi, ecx
// 00864f83  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00864f8a  744b                 je 0x864fd7
// 00864f8c  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00864f92  83b94801000000       cmp dword ptr [ecx + 0x148], 0
// 00864f99  7524                 jne 0x864fbf
// 00864f9b  85c9                 test ecx, ecx
// 00864f9d  7420                 je 0x864fbf
// 00864f9f  83792000             cmp dword ptr [ecx + 0x20], 0
// 00864fa3  741a                 je 0x864fbf
// 00864fa5  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 00864fac  7411                 je 0x864fbf
// 00864fae  56                   push esi
// 00864faf  e8ac390000           call 0x868960
// 00864fb4  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00864fba  e8d1420000           call 0x869290
// 00864fbf  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00864fc5  56                   push esi
// 00864fc6  6a07                 push 7
// 00864fc8  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 00864fd2  e839290000           call 0x867910
// 00864fd7  5e                   pop esi
// 00864fd8  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Collapse@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
