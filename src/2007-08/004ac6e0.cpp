// roc 2007-08 004ac6e0  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ac6e0
//
// 004ac6e0  53                   push ebx
// 004ac6e1  8bd9                 mov ebx, ecx
// 004ac6e3  56                   push esi
// 004ac6e4  8b7304               mov esi, dword ptr [ebx + 4]
// 004ac6e7  85f6                 test esi, esi
// 004ac6e9  7423                 je 0x4ac70e
// 004ac6eb  57                   push edi
// 004ac6ec  8b7b08               mov edi, dword ptr [ebx + 8]
// 004ac6ef  3bf7                 cmp esi, edi
// 004ac6f1  740e                 je 0x4ac701
// 004ac6f3  8bce                 mov ecx, esi
// 004ac6f5  e866bd2700           call 0x728460
// 004ac6fa  83c610               add esi, 0x10
// 004ac6fd  3bf7                 cmp esi, edi
// 004ac6ff  75f2                 jne 0x4ac6f3
// 004ac701  8b4304               mov eax, dword ptr [ebx + 4]
// 004ac704  50                   push eax
// 004ac705  e858351800           call 0x62fc62
// 004ac70a  83c404               add esp, 4
// 004ac70d  5f                   pop edi
// 004ac70e  5e                   pop esi
// 004ac70f  c7430400000000       mov dword ptr [ebx + 4], 0
// 004ac716  c7430800000000       mov dword ptr [ebx + 8], 0
// 004ac71d  c7430c00000000       mov dword ptr [ebx + 0xc], 0
// 004ac724  5b                   pop ebx
// 004ac725  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ?_Tidy@?$vector@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
