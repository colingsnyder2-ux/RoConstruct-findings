// from server: 100% by auto
// roc 2008-06 007117e0  unit: CXTPPropertyGridItem  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007117e0
//
// 007117e0  56                   push esi
// 007117e1  8bf1                 mov esi, ecx
// 007117e3  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 007117ea  755d                 jne 0x711849
// 007117ec  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 007117f2  83b94801000000       cmp dword ptr [ecx + 0x148], 0
// 007117f9  7536                 jne 0x711831
// 007117fb  85c9                 test ecx, ecx
// 007117fd  7432                 je 0x711831
// 007117ff  83792000             cmp dword ptr [ecx + 0x20], 0
// 00711803  742c                 je 0x711831
// 00711805  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 0071180c  7423                 je 0x711831
// 0071180e  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00711814  50                   push eax
// 00711815  56                   push esi
// 00711816  e8d5380000           call 0x7150f0
// 0071181b  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00711821  e81a390000           call 0x715140
// 00711826  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0071182c  e89f420000           call 0x715ad0
// 00711831  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00711837  56                   push esi
// 00711838  6a07                 push 7
// 0071183a  c786a000000001000000 mov dword ptr [esi + 0xa0], 1
// 00711844  e8b7280000           call 0x714100
// 00711849  5e                   pop esi
// 0071184a  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Expand@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
