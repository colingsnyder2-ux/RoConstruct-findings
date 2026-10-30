// roc 2009-06 005b67f0  unit: seg_005b0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b67f0
//
// 005b67f0  55                   push ebp
// 005b67f1  8bec                 mov ebp, esp
// 005b67f3  51                   push ecx
// 005b67f4  894dfc               mov dword ptr [ebp - 4], ecx
// 005b67f7  6a00                 push 0
// 005b67f9  8b4508               mov eax, dword ptr [ebp + 8]
// 005b67fc  50                   push eax
// 005b67fd  e85e1b0000           call 0x5b8360
// 005b6802  83c408               add esp, 8
// 005b6805  8be5                 mov esp, ebp
// 005b6807  5d                   pop ebp
// 005b6808  c20400               ret 4
// copied from an identical function in another client (function ?allocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@I@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp