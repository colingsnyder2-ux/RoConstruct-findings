// roc 2008-06 004cdf90  unit: RBX::Network::PhysicsSender  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cdf90
//
// 004cdf90  57                   push edi
// 004cdf91  8bf9                 mov edi, ecx
// 004cdf93  8b07                 mov eax, dword ptr [edi]
// 004cdf95  85c0                 test eax, eax
// 004cdf97  743f                 je 0x4cdfd8
// 004cdf99  83f801               cmp eax, 1
// 004cdf9c  750e                 jne 0x4cdfac
// 004cdf9e  8b4704               mov eax, dword ptr [edi + 4]
// 004cdfa1  50                   push eax
// 004cdfa2  e8d3261d00           call 0x6a067a
// 004cdfa7  83c404               add esp, 4
// 004cdfaa  eb18                 jmp 0x4cdfc4
// 004cdfac  56                   push esi
// 004cdfad  8b7704               mov esi, dword ptr [edi + 4]
// 004cdfb0  8bc6                 mov eax, esi
// 004cdfb2  8b7608               mov esi, dword ptr [esi + 8]
// 004cdfb5  50                   push eax
// 004cdfb6  e8bf261d00           call 0x6a067a
// 004cdfbb  83c404               add esp, 4
// 004cdfbe  3b7704               cmp esi, dword ptr [edi + 4]
// 004cdfc1  75ed                 jne 0x4cdfb0
// 004cdfc3  5e                   pop esi
// 004cdfc4  c70700000000         mov dword ptr [edi], 0
// 004cdfca  c7470400000000       mov dword ptr [edi + 4], 0
// 004cdfd1  c7470800000000       mov dword ptr [edi + 8], 0
// 004cdfd8  5f                   pop edi
// 004cdfd9  c3                   ret 
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?Clear@?$CircularLinkedList@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
