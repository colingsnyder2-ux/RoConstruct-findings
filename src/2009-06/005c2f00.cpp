// roc 2009-06 005c2f00  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c2f00
//
// 005c2f00  55                   push ebp
// 005c2f01  8bec                 mov ebp, esp
// 005c2f03  51                   push ecx
// 005c2f04  894dfc               mov dword ptr [ebp - 4], ecx
// 005c2f07  8b4508               mov eax, dword ptr [ebp + 8]
// 005c2f0a  50                   push eax
// 005c2f0b  e8b02c0000           call 0x5c5bc0
// 005c2f10  83c404               add esp, 4
// 005c2f13  8be5                 mov esp, ebp
// 005c2f15  5d                   pop ebp
// 005c2f16  c20400               ret 4
// copied from an identical function in another client (function ?destroy@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@QAEXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp