// roc 2007-03 0048c300  unit: seg_00480000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048c300
//
// 0048c300  6a34                 push 0x34
// 0048c302  e8011e1900           call 0x61e108
// 0048c307  83c404               add esp, 4
// 0048c30a  85c0                 test eax, eax
// 0048c30c  7402                 je 0x48c310
// 0048c30e  8900                 mov dword ptr [eax], eax
// 0048c310  8d4804               lea ecx, [eax + 4]
// 0048c313  85c9                 test ecx, ecx
// 0048c315  7402                 je 0x48c319
// 0048c317  8901                 mov dword ptr [ecx], eax
// 0048c319  c3                   ret 
// library rbxgs-net/Players.cpp (function ?_Buynode@?$list@UChatMessage@Network@RBX@@V?$allocator@UChatMessage@Network@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UChatMessage@Network@RBX@@V?$allocator@UChatMessage@Network@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
