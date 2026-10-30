// roc 2009-06 005be010  unit: RBX::AggregateChunk  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005be010
//
// 005be010  55                   push ebp
// 005be011  8bec                 mov ebp, esp
// 005be013  51                   push ecx
// 005be014  894dfc               mov dword ptr [ebp - 4], ecx
// 005be017  8b4508               mov eax, dword ptr [ebp + 8]
// 005be01a  50                   push eax
// 005be01b  e810000000           call 0x5be030
// 005be020  83c404               add esp, 4
// 005be023  8be5                 mov esp, ebp
// 005be025  5d                   pop ebp
// 005be026  c20400               ret 4
// copied from an identical function in another client (function ?destroy@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp