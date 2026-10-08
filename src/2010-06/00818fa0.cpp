// roc 2010-06 00818fa0  unit: CXTPPropertyGridItem  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00818fa0
//
// 00818fa0  56                   push esi
// 00818fa1  8bf1                 mov esi, ecx
// 00818fa3  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00818faa  755d                 jne 0x819009
// 00818fac  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00818fb2  83b94801000000       cmp dword ptr [ecx + 0x148], 0
// 00818fb9  7536                 jne 0x818ff1
// 00818fbb  85c9                 test ecx, ecx
// 00818fbd  7432                 je 0x818ff1
// 00818fbf  83792000             cmp dword ptr [ecx + 0x20], 0
// 00818fc3  742c                 je 0x818ff1
// 00818fc5  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 00818fcc  7423                 je 0x818ff1
// 00818fce  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00818fd4  50                   push eax
// 00818fd5  56                   push esi
// 00818fd6  e8d5380000           call 0x81c8b0
// 00818fdb  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00818fe1  e81a390000           call 0x81c900
// 00818fe6  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00818fec  e89f420000           call 0x81d290
// 00818ff1  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00818ff7  56                   push esi
// 00818ff8  6a07                 push 7
// 00818ffa  c786a000000001000000 mov dword ptr [esi + 0xa0], 1
// 00819004  e8b7280000           call 0x81b8c0
// 00819009  5e                   pop esi
// 0081900a  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Expand@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
