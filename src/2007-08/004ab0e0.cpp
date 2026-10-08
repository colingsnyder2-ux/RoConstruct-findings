// roc 2007-08 004ab0e0  unit: RBX::Network::Peer  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ab0e0
//
// 004ab0e0  56                   push esi
// 004ab0e1  8b742408             mov esi, dword ptr [esp + 8]
// 004ab0e5  57                   push edi
// 004ab0e6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004ab0ea  3bf7                 cmp esi, edi
// 004ab0ec  7410                 je 0x4ab0fe
// 004ab0ee  8bff                 mov edi, edi
// 004ab0f0  8bce                 mov ecx, esi
// 004ab0f2  e869d32700           call 0x728460
// 004ab0f7  83c610               add esi, 0x10
// 004ab0fa  3bf7                 cmp esi, edi
// 004ab0fc  75f2                 jne 0x4ab0f0
// 004ab0fe  5f                   pop edi
// 004ab0ff  5e                   pop esi
// 004ab100  c20800               ret 8
// library rbxgs-net/Replicator.cpp (function ?_Destroy@?$vector@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@IAEXPAVconnection@signals@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
