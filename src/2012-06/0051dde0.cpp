// roc 2012-06 0051dde0  unit: RBX::Network::P8Player::?$GetSetImpl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0051dde0
//
// 0051dde0  6a28                 push 0x28
// 0051dde2  e833434600           call 0x98211a
// 0051dde7  83c404               add esp, 4
// 0051ddea  85c0                 test eax, eax
// 0051ddec  7402                 je 0x51ddf0
// 0051ddee  8900                 mov dword ptr [eax], eax
// 0051ddf0  8d4804               lea ecx, [eax + 4]
// 0051ddf3  85c9                 test ecx, ecx
// 0051ddf5  7402                 je 0x51ddf9
// 0051ddf7  8901                 mov dword ptr [ecx], eax
// 0051ddf9  c3                   ret 
// library rbxgs-net/Players.cpp (function ?_Buynode@?$list@UMessage@AbuseReport@Network@RBX@@V?$allocator@UMessage@AbuseReport@Network@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UMessage@AbuseReport@Network@RBX@@V?$allocator@UMessage@AbuseReport@Network@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
