// roc 2009-06 00789fd0  unit: CXTPPropertyGridItem  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00789fd0
//
// 00789fd0  56                   push esi
// 00789fd1  8bf1                 mov esi, ecx
// 00789fd3  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00789fda  755d                 jne 0x78a039
// 00789fdc  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00789fe2  83b94801000000       cmp dword ptr [ecx + 0x148], 0
// 00789fe9  7536                 jne 0x78a021
// 00789feb  85c9                 test ecx, ecx
// 00789fed  7432                 je 0x78a021
// 00789fef  83792000             cmp dword ptr [ecx + 0x20], 0
// 00789ff3  742c                 je 0x78a021
// 00789ff5  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 00789ffc  7423                 je 0x78a021
// 00789ffe  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0078a004  50                   push eax
// 0078a005  56                   push esi
// 0078a006  e885380000           call 0x78d890
// 0078a00b  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0078a011  e8ca380000           call 0x78d8e0
// 0078a016  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0078a01c  e84f420000           call 0x78e270
// 0078a021  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0078a027  56                   push esi
// 0078a028  6a07                 push 7
// 0078a02a  c786a000000001000000 mov dword ptr [esi + 0xa0], 1
// 0078a034  e8d7280000           call 0x78c910
// 0078a039  5e                   pop esi
// 0078a03a  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Expand@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
