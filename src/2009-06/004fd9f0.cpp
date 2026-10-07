// roc 2009-06 004fd9f0  unit: RBX::Network::NetworkOwnerJob  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fd9f0
//
// 004fd9f0  57                   push edi
// 004fd9f1  8bf9                 mov edi, ecx
// 004fd9f3  8b07                 mov eax, dword ptr [edi]
// 004fd9f5  85c0                 test eax, eax
// 004fd9f7  743f                 je 0x4fda38
// 004fd9f9  83f801               cmp eax, 1
// 004fd9fc  750e                 jne 0x4fda0c
// 004fd9fe  8b4704               mov eax, dword ptr [edi + 4]
// 004fda01  50                   push eax
// 004fda02  e82bb02100           call 0x718a32
// 004fda07  83c404               add esp, 4
// 004fda0a  eb18                 jmp 0x4fda24
// 004fda0c  56                   push esi
// 004fda0d  8b7704               mov esi, dword ptr [edi + 4]
// 004fda10  8bc6                 mov eax, esi
// 004fda12  8b7608               mov esi, dword ptr [esi + 8]
// 004fda15  50                   push eax
// 004fda16  e817b02100           call 0x718a32
// 004fda1b  83c404               add esp, 4
// 004fda1e  3b7704               cmp esi, dword ptr [edi + 4]
// 004fda21  75ed                 jne 0x4fda10
// 004fda23  5e                   pop esi
// 004fda24  c70700000000         mov dword ptr [edi], 0
// 004fda2a  c7470400000000       mov dword ptr [edi + 4], 0
// 004fda31  c7470800000000       mov dword ptr [edi + 8], 0
// 004fda38  5f                   pop edi
// 004fda39  c3                   ret 
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?Clear@?$CircularLinkedList@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
