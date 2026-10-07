// roc 2010-06 006e7a90  unit: RBX::P8PVInstance::?$SetImpl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e7a90
//
// 006e7a90  6a18                 push 0x18
// 006e7a92  e809ff0b00           call 0x7a79a0
// 006e7a97  83c404               add esp, 4
// 006e7a9a  85c0                 test eax, eax
// 006e7a9c  7402                 je 0x6e7aa0
// 006e7a9e  8900                 mov dword ptr [eax], eax
// 006e7aa0  8d4804               lea ecx, [eax + 4]
// 006e7aa3  85c9                 test ecx, ecx
// 006e7aa5  7402                 je 0x6e7aa9
// 006e7aa7  8901                 mov dword ptr [ecx], eax
// 006e7aa9  c3                   ret 
// library templates-boost-1_34_1/signal_b.cpp (function ?_Buynode@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 signal_b.cpp
