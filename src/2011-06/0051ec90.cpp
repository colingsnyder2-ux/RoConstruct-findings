// roc 2011-06 0051ec90  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0051ec90
//
// 0051ec90  57                   push edi
// 0051ec91  8bf9                 mov edi, ecx
// 0051ec93  8b07                 mov eax, dword ptr [edi]
// 0051ec95  85c0                 test eax, eax
// 0051ec97  743f                 je 0x51ecd8
// 0051ec99  83f801               cmp eax, 1
// 0051ec9c  750e                 jne 0x51ecac
// 0051ec9e  8b4704               mov eax, dword ptr [edi + 4]
// 0051eca1  50                   push eax
// 0051eca2  e8b1b32e00           call 0x80a058
// 0051eca7  83c404               add esp, 4
// 0051ecaa  eb18                 jmp 0x51ecc4
// 0051ecac  56                   push esi
// 0051ecad  8b7704               mov esi, dword ptr [edi + 4]
// 0051ecb0  8bc6                 mov eax, esi
// 0051ecb2  8b7608               mov esi, dword ptr [esi + 8]
// 0051ecb5  50                   push eax
// 0051ecb6  e89db32e00           call 0x80a058
// 0051ecbb  83c404               add esp, 4
// 0051ecbe  3b7704               cmp esi, dword ptr [edi + 4]
// 0051ecc1  75ed                 jne 0x51ecb0
// 0051ecc3  5e                   pop esi
// 0051ecc4  c70700000000         mov dword ptr [edi], 0
// 0051ecca  c7470400000000       mov dword ptr [edi + 4], 0
// 0051ecd1  c7470800000000       mov dword ptr [edi + 8], 0
// 0051ecd8  5f                   pop edi
// 0051ecd9  c3                   ret 
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?Clear@?$CircularLinkedList@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
