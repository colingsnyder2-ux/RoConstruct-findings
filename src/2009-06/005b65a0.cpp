// roc 2009-06 005b65a0  unit: seg_005b0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b65a0
//
// 005b65a0  55                   push ebp
// 005b65a1  8bec                 mov ebp, esp
// 005b65a3  51                   push ecx
// 005b65a4  894dfc               mov dword ptr [ebp - 4], ecx
// 005b65a7  6a00                 push 0
// 005b65a9  8b4508               mov eax, dword ptr [ebp + 8]
// 005b65ac  50                   push eax
// 005b65ad  e8fe1c0000           call 0x5b82b0
// 005b65b2  83c408               add esp, 8
// 005b65b5  8be5                 mov esp, ebp
// 005b65b7  5d                   pop ebp
// 005b65b8  c20400               ret 4
// copied from an identical function in another client (function ?allocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@I@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp