// roc 2009-06 0063c3e0  unit: RBX::ScriptContext  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063c3e0
//
// 0063c3e0  6a18                 push 0x18
// 0063c3e2  e851c60d00           call 0x718a38
// 0063c3e7  83c404               add esp, 4
// 0063c3ea  85c0                 test eax, eax
// 0063c3ec  7402                 je 0x63c3f0
// 0063c3ee  8900                 mov dword ptr [eax], eax
// 0063c3f0  8d4804               lea ecx, [eax + 4]
// 0063c3f3  85c9                 test ecx, ecx
// 0063c3f5  7402                 je 0x63c3f9
// 0063c3f7  8901                 mov dword ptr [ecx], eax
// 0063c3f9  c3                   ret 
// library templates-boost-1_34_1/signal_b.cpp (function ?_Buynode@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 signal_b.cpp
