// roc 2007-08 00492660  unit: RBX::Network::Players  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00492660
//
// 00492660  6a34                 push 0x34
// 00492662  e88fd81900           call 0x62fef6
// 00492667  83c404               add esp, 4
// 0049266a  85c0                 test eax, eax
// 0049266c  7402                 je 0x492670
// 0049266e  8900                 mov dword ptr [eax], eax
// 00492670  8d4804               lea ecx, [eax + 4]
// 00492673  85c9                 test ecx, ecx
// 00492675  7402                 je 0x492679
// 00492677  8901                 mov dword ptr [ecx], eax
// 00492679  c3                   ret 
// library rbxgs-net/Players.cpp (function ?_Buynode@?$list@UChatMessage@Network@RBX@@V?$allocator@UChatMessage@Network@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UChatMessage@Network@RBX@@V?$allocator@UChatMessage@Network@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
