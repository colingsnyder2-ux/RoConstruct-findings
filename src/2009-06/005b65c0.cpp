// roc 2009-06 005b65c0  unit: seg_005b0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b65c0
//
// 005b65c0  55                   push ebp
// 005b65c1  8bec                 mov ebp, esp
// 005b65c3  51                   push ecx
// 005b65c4  894dfc               mov dword ptr [ebp - 4], ecx
// 005b65c7  8b4508               mov eax, dword ptr [ebp + 8]
// 005b65ca  50                   push eax
// 005b65cb  e8301d0000           call 0x5b8300
// 005b65d0  83c404               add esp, 4
// 005b65d3  8be5                 mov esp, ebp
// 005b65d5  5d                   pop ebp
// 005b65d6  c20400               ret 4
// copied from an identical function in another client (function ?destroy@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp