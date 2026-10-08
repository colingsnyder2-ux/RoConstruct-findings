// roc 2011-06 00654ee0  unit: std::D::DU?$char_traits::V?$basic_string::V?$basic_path::?$basic_filesystem_error  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00654ee0
//
// 00654ee0  6a34                 push 0x34
// 00654ee2  e877511b00           call 0x80a05e
// 00654ee7  83c404               add esp, 4
// 00654eea  85c0                 test eax, eax
// 00654eec  7402                 je 0x654ef0
// 00654eee  8900                 mov dword ptr [eax], eax
// 00654ef0  8d4804               lea ecx, [eax + 4]
// 00654ef3  85c9                 test ecx, ecx
// 00654ef5  7402                 je 0x654ef9
// 00654ef7  8901                 mov dword ptr [ecx], eax
// 00654ef9  c3                   ret 
// library rbxgs-net/Players.cpp (function ?_Buynode@?$list@UChatMessage@Network@RBX@@V?$allocator@UChatMessage@Network@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UChatMessage@Network@RBX@@V?$allocator@UChatMessage@Network@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
