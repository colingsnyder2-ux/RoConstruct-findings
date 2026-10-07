// roc 2012-06 008b8100  unit: seg_008b0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008b8100
//
// 008b8100  6a18                 push 0x18
// 008b8102  e813a00c00           call 0x98211a
// 008b8107  83c404               add esp, 4
// 008b810a  85c0                 test eax, eax
// 008b810c  7402                 je 0x8b8110
// 008b810e  8900                 mov dword ptr [eax], eax
// 008b8110  8d4804               lea ecx, [eax + 4]
// 008b8113  85c9                 test ecx, ecx
// 008b8115  7402                 je 0x8b8119
// 008b8117  8901                 mov dword ptr [ecx], eax
// 008b8119  c3                   ret 
// library templates-boost-1_34_1/signal_b.cpp (function ?_Buynode@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 signal_b.cpp
