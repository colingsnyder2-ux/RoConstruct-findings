// roc 2011-06 008797c0  unit: CXTPPropertyGridItem  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008797c0
//
// 008797c0  56                   push esi
// 008797c1  8bf1                 mov esi, ecx
// 008797c3  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 008797ca  755d                 jne 0x879829
// 008797cc  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 008797d2  83b94801000000       cmp dword ptr [ecx + 0x148], 0
// 008797d9  7536                 jne 0x879811
// 008797db  85c9                 test ecx, ecx
// 008797dd  7432                 je 0x879811
// 008797df  83792000             cmp dword ptr [ecx + 0x20], 0
// 008797e3  742c                 je 0x879811
// 008797e5  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 008797ec  7423                 je 0x879811
// 008797ee  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 008797f4  50                   push eax
// 008797f5  56                   push esi
// 008797f6  e8e5d5ffff           call 0x876de0
// 008797fb  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00879801  e82ad6ffff           call 0x876e30
// 00879806  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0087980c  e8afdfffff           call 0x8777c0
// 00879811  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00879817  56                   push esi
// 00879818  6a07                 push 7
// 0087981a  c786a000000001000000 mov dword ptr [esi + 0xa0], 1
// 00879824  e8a7c5ffff           call 0x875dd0
// 00879829  5e                   pop esi
// 0087982a  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Expand@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
