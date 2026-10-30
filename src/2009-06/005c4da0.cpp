// roc 2009-06 005c4da0  unit: seg_005c0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c4da0
//
// 005c4da0  55                   push ebp
// 005c4da1  8bec                 mov ebp, esp
// 005c4da3  51                   push ecx
// 005c4da4  894dfc               mov dword ptr [ebp - 4], ecx
// 005c4da7  6a00                 push 0
// 005c4da9  8b4508               mov eax, dword ptr [ebp + 8]
// 005c4dac  50                   push eax
// 005c4dad  e8be0e0000           call 0x5c5c70
// 005c4db2  83c408               add esp, 8
// 005c4db5  8be5                 mov esp, ebp
// 005c4db7  5d                   pop ebp
// 005c4db8  c20400               ret 4
// copied from an identical function in another client (function ?allocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@I@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp