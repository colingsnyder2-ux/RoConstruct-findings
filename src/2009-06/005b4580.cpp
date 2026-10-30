// roc 2009-06 005b4580  unit: seg_005b0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b4580
//
// 005b4580  55                   push ebp
// 005b4581  8bec                 mov ebp, esp
// 005b4583  51                   push ecx
// 005b4584  894dfc               mov dword ptr [ebp - 4], ecx
// 005b4587  8b4508               mov eax, dword ptr [ebp + 8]
// 005b458a  50                   push eax
// 005b458b  e8100e0000           call 0x5b53a0
// 005b4590  83c404               add esp, 4
// 005b4593  8be5                 mov esp, ebp
// 005b4595  5d                   pop ebp
// 005b4596  c20400               ret 4
// copied from an identical function in another client (function ?destroy@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp