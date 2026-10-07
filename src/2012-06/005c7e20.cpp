// roc 2012-06 005c7e20  unit: RakNet::RakPeer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c7e20
//
// 005c7e20  57                   push edi
// 005c7e21  8bf9                 mov edi, ecx
// 005c7e23  8b07                 mov eax, dword ptr [edi]
// 005c7e25  85c0                 test eax, eax
// 005c7e27  743f                 je 0x5c7e68
// 005c7e29  83f801               cmp eax, 1
// 005c7e2c  750e                 jne 0x5c7e3c
// 005c7e2e  8b4704               mov eax, dword ptr [edi + 4]
// 005c7e31  50                   push eax
// 005c7e32  e8dda23b00           call 0x982114
// 005c7e37  83c404               add esp, 4
// 005c7e3a  eb18                 jmp 0x5c7e54
// 005c7e3c  56                   push esi
// 005c7e3d  8b7704               mov esi, dword ptr [edi + 4]
// 005c7e40  8bc6                 mov eax, esi
// 005c7e42  8b7608               mov esi, dword ptr [esi + 8]
// 005c7e45  50                   push eax
// 005c7e46  e8c9a23b00           call 0x982114
// 005c7e4b  83c404               add esp, 4
// 005c7e4e  3b7704               cmp esi, dword ptr [edi + 4]
// 005c7e51  75ed                 jne 0x5c7e40
// 005c7e53  5e                   pop esi
// 005c7e54  c70700000000         mov dword ptr [edi], 0
// 005c7e5a  c7470400000000       mov dword ptr [edi + 4], 0
// 005c7e61  c7470800000000       mov dword ptr [edi + 8], 0
// 005c7e68  5f                   pop edi
// 005c7e69  c3                   ret 
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?Clear@?$CircularLinkedList@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
