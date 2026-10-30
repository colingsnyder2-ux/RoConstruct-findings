// roc 2009-06 005b6180  unit: seg_005b0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b6180
//
// 005b6180  55                   push ebp
// 005b6181  8bec                 mov ebp, esp
// 005b6183  51                   push ecx
// 005b6184  894dfc               mov dword ptr [ebp - 4], ecx
// 005b6187  6a00                 push 0
// 005b6189  8b4508               mov eax, dword ptr [ebp + 8]
// 005b618c  50                   push eax
// 005b618d  e8ce200000           call 0x5b8260
// 005b6192  83c408               add esp, 8
// 005b6195  8be5                 mov esp, ebp
// 005b6197  5d                   pop ebp
// 005b6198  c20400               ret 4
// copied from an identical function in another client (function ?allocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@I@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp