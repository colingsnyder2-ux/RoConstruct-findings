// roc 2009-12 00864fe0  unit: CXTPPropertyGridItem  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864fe0
//
// 00864fe0  56                   push esi
// 00864fe1  8bf1                 mov esi, ecx
// 00864fe3  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00864fea  755d                 jne 0x865049
// 00864fec  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00864ff2  83b94801000000       cmp dword ptr [ecx + 0x148], 0
// 00864ff9  7536                 jne 0x865031
// 00864ffb  85c9                 test ecx, ecx
// 00864ffd  7432                 je 0x865031
// 00864fff  83792000             cmp dword ptr [ecx + 0x20], 0
// 00865003  742c                 je 0x865031
// 00865005  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 0086500c  7423                 je 0x865031
// 0086500e  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00865014  50                   push eax
// 00865015  56                   push esi
// 00865016  e885380000           call 0x8688a0
// 0086501b  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00865021  e8ca380000           call 0x8688f0
// 00865026  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0086502c  e85f420000           call 0x869290
// 00865031  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00865037  56                   push esi
// 00865038  6a07                 push 7
// 0086503a  c786a000000001000000 mov dword ptr [esi + 0xa0], 1
// 00865044  e8c7280000           call 0x867910
// 00865049  5e                   pop esi
// 0086504a  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Expand@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
