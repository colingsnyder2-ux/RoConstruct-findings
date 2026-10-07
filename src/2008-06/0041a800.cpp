// roc 2008-06 0041a800  unit: boost::X::U?$last_value::?$holder  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a800
//
// 0041a800  6a18                 push 0x18
// 0041a802  e819612800           call 0x6a0920
// 0041a807  83c404               add esp, 4
// 0041a80a  85c0                 test eax, eax
// 0041a80c  7402                 je 0x41a810
// 0041a80e  8900                 mov dword ptr [eax], eax
// 0041a810  8d4804               lea ecx, [eax + 4]
// 0041a813  85c9                 test ecx, ecx
// 0041a815  7402                 je 0x41a819
// 0041a817  8901                 mov dword ptr [ecx], eax
// 0041a819  c3                   ret 
// library templates-boost-1_34_1/signal_b.cpp (function ?_Buynode@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 signal_b.cpp
