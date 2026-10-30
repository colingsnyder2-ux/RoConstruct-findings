// from server: 100% by auto
// roc 2011-06 00794ec0  unit: seg_00790000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00794ec0
//
// 00794ec0  6a18                 push 0x18
// 00794ec2  e897510700           call 0x80a05e
// 00794ec7  83c404               add esp, 4
// 00794eca  85c0                 test eax, eax
// 00794ecc  7402                 je 0x794ed0
// 00794ece  8900                 mov dword ptr [eax], eax
// 00794ed0  8d4804               lea ecx, [eax + 4]
// 00794ed3  85c9                 test ecx, ecx
// 00794ed5  7402                 je 0x794ed9
// 00794ed7  8901                 mov dword ptr [ecx], eax
// 00794ed9  c3                   ret 
// library templates-boost-1_34_1/signal_b.cpp (function ?_Buynode@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 signal_b.cpp
