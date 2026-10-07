// roc 2010-06 00513af0  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00513af0
//
// 00513af0  57                   push edi
// 00513af1  8bf9                 mov edi, ecx
// 00513af3  8b07                 mov eax, dword ptr [edi]
// 00513af5  85c0                 test eax, eax
// 00513af7  743f                 je 0x513b38
// 00513af9  83f801               cmp eax, 1
// 00513afc  750e                 jne 0x513b0c
// 00513afe  8b4704               mov eax, dword ptr [edi + 4]
// 00513b01  50                   push eax
// 00513b02  e8933e2900           call 0x7a799a
// 00513b07  83c404               add esp, 4
// 00513b0a  eb18                 jmp 0x513b24
// 00513b0c  56                   push esi
// 00513b0d  8b7704               mov esi, dword ptr [edi + 4]
// 00513b10  8bc6                 mov eax, esi
// 00513b12  8b7608               mov esi, dword ptr [esi + 8]
// 00513b15  50                   push eax
// 00513b16  e87f3e2900           call 0x7a799a
// 00513b1b  83c404               add esp, 4
// 00513b1e  3b7704               cmp esi, dword ptr [edi + 4]
// 00513b21  75ed                 jne 0x513b10
// 00513b23  5e                   pop esi
// 00513b24  c70700000000         mov dword ptr [edi], 0
// 00513b2a  c7470400000000       mov dword ptr [edi + 4], 0
// 00513b31  c7470800000000       mov dword ptr [edi + 8], 0
// 00513b38  5f                   pop edi
// 00513b39  c3                   ret 
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?Clear@?$CircularLinkedList@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
