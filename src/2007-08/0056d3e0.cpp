// roc 2007-08 0056d3e0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d3e0
//
// 0056d3e0  6a18                 push 0x18
// 0056d3e2  e80f2b0c00           call 0x62fef6
// 0056d3e7  83c404               add esp, 4
// 0056d3ea  85c0                 test eax, eax
// 0056d3ec  7402                 je 0x56d3f0
// 0056d3ee  8900                 mov dword ptr [eax], eax
// 0056d3f0  8d4804               lea ecx, [eax + 4]
// 0056d3f3  85c9                 test ecx, ecx
// 0056d3f5  7402                 je 0x56d3f9
// 0056d3f7  8901                 mov dword ptr [ecx], eax
// 0056d3f9  c3                   ret 
// library templates-boost-1_34_1/signal_b.cpp (function ?_Buynode@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 signal_b.cpp
