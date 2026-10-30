// roc 2009-06 005bdea0  unit: RBX::AggregateChunk  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bdea0
//
// 005bdea0  55                   push ebp
// 005bdea1  8bec                 mov ebp, esp
// 005bdea3  51                   push ecx
// 005bdea4  894dfc               mov dword ptr [ebp - 4], ecx
// 005bdea7  8b4508               mov eax, dword ptr [ebp + 8]
// 005bdeaa  50                   push eax
// 005bdeab  e882ab1500           call 0x718a32
// 005bdeb0  83c404               add esp, 4
// 005bdeb3  8be5                 mov esp, ebp
// 005bdeb5  5d                   pop ebp
// 005bdeb6  c20800               ret 8
// copied from an identical function in another client (function ?deallocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@I@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp