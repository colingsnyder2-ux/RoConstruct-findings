// roc 2012-06 009f1d30  unit: CXTPPropertyGridItem  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f1d30
//
// 009f1d30  56                   push esi
// 009f1d31  8bf1                 mov esi, ecx
// 009f1d33  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 009f1d3a  755d                 jne 0x9f1d99
// 009f1d3c  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 009f1d42  83b94801000000       cmp dword ptr [ecx + 0x148], 0
// 009f1d49  7536                 jne 0x9f1d81
// 009f1d4b  85c9                 test ecx, ecx
// 009f1d4d  7432                 je 0x9f1d81
// 009f1d4f  83792000             cmp dword ptr [ecx + 0x20], 0
// 009f1d53  742c                 je 0x9f1d81
// 009f1d55  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 009f1d5c  7423                 je 0x9f1d81
// 009f1d5e  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 009f1d64  50                   push eax
// 009f1d65  56                   push esi
// 009f1d66  e8f5d5ffff           call 0x9ef360
// 009f1d6b  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 009f1d71  e83ad6ffff           call 0x9ef3b0
// 009f1d76  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 009f1d7c  e8bfdfffff           call 0x9efd40
// 009f1d81  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 009f1d87  56                   push esi
// 009f1d88  6a07                 push 7
// 009f1d8a  c786a000000001000000 mov dword ptr [esi + 0xa0], 1
// 009f1d94  e8d7c5ffff           call 0x9ee370
// 009f1d99  5e                   pop esi
// 009f1d9a  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Expand@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
