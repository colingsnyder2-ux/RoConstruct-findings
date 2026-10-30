// roc 2009-06 005b9c50  unit: seg_005b0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b9c50
//
// 005b9c50  55                   push ebp
// 005b9c51  8bec                 mov ebp, esp
// 005b9c53  51                   push ecx
// 005b9c54  894dfc               mov dword ptr [ebp - 4], ecx
// 005b9c57  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005b9c5a  50                   push eax
// 005b9c5b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b9c5e  51                   push ecx
// 005b9c5f  e84c0d0000           call 0x5ba9b0
// 005b9c64  83c408               add esp, 8
// 005b9c67  8be5                 mov esp, ebp
// 005b9c69  5d                   pop ebp
// 005b9c6a  c20800               ret 8
// copied from an identical function in another client (function ?construct@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@ABQAU342@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp