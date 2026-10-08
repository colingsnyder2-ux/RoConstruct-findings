// roc 2011-06 00736e50  unit: RBX::Network::P8Player::?$GetImpl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00736e50
//
// 00736e50  6a28                 push 0x28
// 00736e52  e807320d00           call 0x80a05e
// 00736e57  83c404               add esp, 4
// 00736e5a  85c0                 test eax, eax
// 00736e5c  7402                 je 0x736e60
// 00736e5e  8900                 mov dword ptr [eax], eax
// 00736e60  8d4804               lea ecx, [eax + 4]
// 00736e63  85c9                 test ecx, ecx
// 00736e65  7402                 je 0x736e69
// 00736e67  8901                 mov dword ptr [ecx], eax
// 00736e69  c3                   ret 
// library rbxgs-net/Players.cpp (function ?_Buynode@?$list@UMessage@AbuseReport@Network@RBX@@V?$allocator@UMessage@AbuseReport@Network@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UMessage@AbuseReport@Network@RBX@@V?$allocator@UMessage@AbuseReport@Network@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
