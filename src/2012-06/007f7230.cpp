// roc 2012-06 007f7230  unit: RBX::ScriptInformationProvider  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007f7230
//
// 007f7230  6a34                 push 0x34
// 007f7232  e8e3ae1800           call 0x98211a
// 007f7237  83c404               add esp, 4
// 007f723a  85c0                 test eax, eax
// 007f723c  7402                 je 0x7f7240
// 007f723e  8900                 mov dword ptr [eax], eax
// 007f7240  8d4804               lea ecx, [eax + 4]
// 007f7243  85c9                 test ecx, ecx
// 007f7245  7402                 je 0x7f7249
// 007f7247  8901                 mov dword ptr [ecx], eax
// 007f7249  c3                   ret 
// library rbxgs-net/Players.cpp (function ?_Buynode@?$list@UChatMessage@Network@RBX@@V?$allocator@UChatMessage@Network@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UChatMessage@Network@RBX@@V?$allocator@UChatMessage@Network@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
