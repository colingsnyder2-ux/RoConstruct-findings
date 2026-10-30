// roc 2009-06 005b4a00  unit: seg_005b0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b4a00
//
// 005b4a00  55                   push ebp
// 005b4a01  8bec                 mov ebp, esp
// 005b4a03  51                   push ecx
// 005b4a04  894dfc               mov dword ptr [ebp - 4], ecx
// 005b4a07  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005b4a0a  50                   push eax
// 005b4a0b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b4a0e  51                   push ecx
// 005b4a0f  e83c360000           call 0x5b8050
// 005b4a14  83c408               add esp, 8
// 005b4a17  8be5                 mov esp, ebp
// 005b4a19  5d                   pop ebp
// 005b4a1a  c20800               ret 8
// copied from an identical function in another client (function ?construct@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@ABQAU342@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp