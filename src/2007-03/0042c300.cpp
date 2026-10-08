// roc 2007-03 0042c300  unit: seg_00420000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042c300
//
// 0042c300  6a10                 push 0x10
// 0042c302  e8011e1f00           call 0x61e108
// 0042c307  83c404               add esp, 4
// 0042c30a  85c0                 test eax, eax
// 0042c30c  7402                 je 0x42c310
// 0042c30e  8900                 mov dword ptr [eax], eax
// 0042c310  8d4804               lea ecx, [eax + 4]
// 0042c313  85c9                 test ecx, ecx
// 0042c315  7402                 je 0x42c319
// 0042c317  8901                 mov dword ptr [ecx], eax
// 0042c319  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ?_Buynode@?$list@V?$shared_ptr@VItem@Replicator@Network@RBX@@@boost@@V?$allocator@V?$shared_ptr@VItem@Replicator@Network@RBX@@@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@V?$shared_ptr@VItem@Replicator@Network@RBX@@@boost@@V?$allocator@V?$shared_ptr@VItem@Replicator@Network@RBX@@@boost@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
