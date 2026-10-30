// roc 2009-06 005ae7f0  unit: RBX::Mesh  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ae7f0
//
// 005ae7f0  55                   push ebp
// 005ae7f1  8bec                 mov ebp, esp
// 005ae7f3  51                   push ecx
// 005ae7f4  894dfc               mov dword ptr [ebp - 4], ecx
// 005ae7f7  6a00                 push 0
// 005ae7f9  8b4508               mov eax, dword ptr [ebp + 8]
// 005ae7fc  50                   push eax
// 005ae7fd  e8de050000           call 0x5aede0
// 005ae802  83c408               add esp, 8
// 005ae805  8be5                 mov esp, ebp
// 005ae807  5d                   pop ebp
// 005ae808  c20400               ret 4
// copied from an identical function in another client (function ?allocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@I@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp