// roc 2009-06 00789f70  unit: CXTPPropertyGridItem  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00789f70
//
// 00789f70  56                   push esi
// 00789f71  8bf1                 mov esi, ecx
// 00789f73  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00789f7a  744b                 je 0x789fc7
// 00789f7c  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00789f82  83b94801000000       cmp dword ptr [ecx + 0x148], 0
// 00789f89  7524                 jne 0x789faf
// 00789f8b  85c9                 test ecx, ecx
// 00789f8d  7420                 je 0x789faf
// 00789f8f  83792000             cmp dword ptr [ecx + 0x20], 0
// 00789f93  741a                 je 0x789faf
// 00789f95  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 00789f9c  7411                 je 0x789faf
// 00789f9e  56                   push esi
// 00789f9f  e8ac390000           call 0x78d950
// 00789fa4  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00789faa  e8c1420000           call 0x78e270
// 00789faf  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00789fb5  56                   push esi
// 00789fb6  6a07                 push 7
// 00789fb8  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 00789fc2  e849290000           call 0x78c910
// 00789fc7  5e                   pop esi
// 00789fc8  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Collapse@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
