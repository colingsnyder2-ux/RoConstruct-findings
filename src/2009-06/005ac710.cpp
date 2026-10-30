// roc 2009-06 005ac710  unit: RBX::Mesh  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ac710
//
// 005ac710  55                   push ebp
// 005ac711  8bec                 mov ebp, esp
// 005ac713  8b4508               mov eax, dword ptr [ebp + 8]
// 005ac716  50                   push eax
// 005ac717  e8f4090000           call 0x5ad110
// 005ac71c  83c404               add esp, 4
// 005ac71f  50                   push eax
// 005ac720  e82b530100           call 0x5c1a50
// 005ac725  83c404               add esp, 4
// 005ac728  5d                   pop ebp
// 005ac729  c3                   ret 
// copied from an identical function in another client (function ?_Key@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@KAABHPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp