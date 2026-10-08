// roc 2007-03 0048c2e0  unit: seg_00480000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048c2e0
//
// 0048c2e0  6a28                 push 0x28
// 0048c2e2  e8211e1900           call 0x61e108
// 0048c2e7  83c404               add esp, 4
// 0048c2ea  85c0                 test eax, eax
// 0048c2ec  7402                 je 0x48c2f0
// 0048c2ee  8900                 mov dword ptr [eax], eax
// 0048c2f0  8d4804               lea ecx, [eax + 4]
// 0048c2f3  85c9                 test ecx, ecx
// 0048c2f5  7402                 je 0x48c2f9
// 0048c2f7  8901                 mov dword ptr [ecx], eax
// 0048c2f9  c3                   ret 
// library rbxgs-net/Players.cpp (function ?_Buynode@?$list@UMessage@AbuseReport@Network@RBX@@V?$allocator@UMessage@AbuseReport@Network@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UMessage@AbuseReport@Network@RBX@@V?$allocator@UMessage@AbuseReport@Network@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
