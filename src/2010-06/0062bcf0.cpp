// roc 2010-06 0062bcf0  unit: RBX::ContentProvider  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0062bcf0
//
// 0062bcf0  6a34                 push 0x34
// 0062bcf2  e8a9bc1700           call 0x7a79a0
// 0062bcf7  83c404               add esp, 4
// 0062bcfa  85c0                 test eax, eax
// 0062bcfc  7402                 je 0x62bd00
// 0062bcfe  8900                 mov dword ptr [eax], eax
// 0062bd00  8d4804               lea ecx, [eax + 4]
// 0062bd03  85c9                 test ecx, ecx
// 0062bd05  7402                 je 0x62bd09
// 0062bd07  8901                 mov dword ptr [ecx], eax
// 0062bd09  c3                   ret 
// library rbxgs-net/Players.cpp (function ?_Buynode@?$list@UChatMessage@Network@RBX@@V?$allocator@UChatMessage@Network@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UChatMessage@Network@RBX@@V?$allocator@UChatMessage@Network@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
