// roc 2007-08 00545c80  unit: RBX::MD5HasherImpl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00545c80
//
// 00545c80  6a28                 push 0x28
// 00545c82  e86fa20e00           call 0x62fef6
// 00545c87  83c404               add esp, 4
// 00545c8a  85c0                 test eax, eax
// 00545c8c  7402                 je 0x545c90
// 00545c8e  8900                 mov dword ptr [eax], eax
// 00545c90  8d4804               lea ecx, [eax + 4]
// 00545c93  85c9                 test ecx, ecx
// 00545c95  7402                 je 0x545c99
// 00545c97  8901                 mov dword ptr [ecx], eax
// 00545c99  c3                   ret 
// library rbxgs-net/Players.cpp (function ?_Buynode@?$list@UMessage@AbuseReport@Network@RBX@@V?$allocator@UMessage@AbuseReport@Network@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UMessage@AbuseReport@Network@RBX@@V?$allocator@UMessage@AbuseReport@Network@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
