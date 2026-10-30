// roc 2009-06 005b6e80  unit: seg_005b0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b6e80
//
// 005b6e80  55                   push ebp
// 005b6e81  8bec                 mov ebp, esp
// 005b6e83  51                   push ecx
// 005b6e84  894dfc               mov dword ptr [ebp - 4], ecx
// 005b6e87  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005b6e8a  50                   push eax
// 005b6e8b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b6e8e  51                   push ecx
// 005b6e8f  e86c150000           call 0x5b8400
// 005b6e94  83c408               add esp, 8
// 005b6e97  8be5                 mov esp, ebp
// 005b6e99  5d                   pop ebp
// 005b6e9a  c20800               ret 8
// copied from an identical function in another client (function ?construct@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@ABQAU342@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp