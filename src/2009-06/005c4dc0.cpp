// roc 2009-06 005c4dc0  unit: seg_005c0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c4dc0
//
// 005c4dc0  55                   push ebp
// 005c4dc1  8bec                 mov ebp, esp
// 005c4dc3  51                   push ecx
// 005c4dc4  894dfc               mov dword ptr [ebp - 4], ecx
// 005c4dc7  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005c4dca  50                   push eax
// 005c4dcb  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c4dce  51                   push ecx
// 005c4dcf  e8ec0e0000           call 0x5c5cc0
// 005c4dd4  83c408               add esp, 8
// 005c4dd7  8be5                 mov esp, ebp
// 005c4dd9  5d                   pop ebp
// 005c4dda  c20800               ret 8
// copied from an identical function in another client (function ?construct@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@ABQAU342@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp