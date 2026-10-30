// roc 2009-06 005c8320  unit: seg_005c0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8320
//
// 005c8320  55                   push ebp
// 005c8321  8bec                 mov ebp, esp
// 005c8323  51                   push ecx
// 005c8324  894dfc               mov dword ptr [ebp - 4], ecx
// 005c8327  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005c832a  50                   push eax
// 005c832b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c832e  51                   push ecx
// 005c832f  e84c030000           call 0x5c8680
// 005c8334  83c408               add esp, 8
// 005c8337  8be5                 mov esp, ebp
// 005c8339  5d                   pop ebp
// 005c833a  c20800               ret 8
// copied from an identical function in another client (function ?construct@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@ABQAU342@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp