// roc 2009-06 005c49c0  unit: seg_005c0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c49c0
//
// 005c49c0  55                   push ebp
// 005c49c1  8bec                 mov ebp, esp
// 005c49c3  51                   push ecx
// 005c49c4  894dfc               mov dword ptr [ebp - 4], ecx
// 005c49c7  8b4508               mov eax, dword ptr [ebp + 8]
// 005c49ca  50                   push eax
// 005c49cb  e890120000           call 0x5c5c60
// 005c49d0  83c404               add esp, 4
// 005c49d3  8be5                 mov esp, ebp
// 005c49d5  5d                   pop ebp
// 005c49d6  c20400               ret 4
// copied from an identical function in another client (function ?destroy@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp