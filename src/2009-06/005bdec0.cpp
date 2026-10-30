// roc 2009-06 005bdec0  unit: RBX::AggregateChunk  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bdec0
//
// 005bdec0  55                   push ebp
// 005bdec1  8bec                 mov ebp, esp
// 005bdec3  51                   push ecx
// 005bdec4  894dfc               mov dword ptr [ebp - 4], ecx
// 005bdec7  6a00                 push 0
// 005bdec9  8b4508               mov eax, dword ptr [ebp + 8]
// 005bdecc  50                   push eax
// 005bdecd  e87e000000           call 0x5bdf50
// 005bded2  83c408               add esp, 8
// 005bded5  8be5                 mov esp, ebp
// 005bded7  5d                   pop ebp
// 005bded8  c20400               ret 4
// copied from an identical function in another client (function ?allocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@I@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp