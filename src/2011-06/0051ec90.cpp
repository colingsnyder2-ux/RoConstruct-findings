// from server: 100% by tester
// roc 2007-03 004b8b40  unit: seg_004b0000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b8b40
//
// 004b8b40  57                   push edi
// 004b8b41  8bf9                 mov edi, ecx
// 004b8b43  8b07                 mov eax, dword ptr [edi]
// 004b8b45  85c0                 test eax, eax
// 004b8b47  743f                 je 0x4b8b88
// 004b8b49  83f801               cmp eax, 1
// 004b8b4c  750e                 jne 0x4b8b5c
// 004b8b4e  8b4704               mov eax, dword ptr [edi + 4]
// 004b8b51  50                   push eax
// 004b8b52  e899551600           call 0x61e0f0
// 004b8b57  83c404               add esp, 4
// 004b8b5a  eb18                 jmp 0x4b8b74
// 004b8b5c  56                   push esi
// 004b8b5d  8b7704               mov esi, dword ptr [edi + 4]
// 004b8b60  8bc6                 mov eax, esi
// 004b8b62  8b7608               mov esi, dword ptr [esi + 8]
// 004b8b65  50                   push eax
// 004b8b66  e885551600           call 0x61e0f0
// 004b8b6b  83c404               add esp, 4
// 004b8b6e  3b7704               cmp esi, dword ptr [edi + 4]
// 004b8b71  75ed                 jne 0x4b8b60
// 004b8b73  5e                   pop esi
// 004b8b74  c70700000000         mov dword ptr [edi], 0
// 004b8b7a  c7470400000000       mov dword ptr [edi + 4], 0
// 004b8b81  c7470800000000       mov dword ptr [edi + 8], 0
// 004b8b88  5f                   pop edi
// 004b8b89  c3                   ret 
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ?Clear@?$CircularLinkedList@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
