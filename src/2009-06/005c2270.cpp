// roc 2009-06 005c2270  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c2270
//
// 005c2270  55                   push ebp
// 005c2271  8bec                 mov ebp, esp
// 005c2273  51                   push ecx
// 005c2274  894dfc               mov dword ptr [ebp - 4], ecx
// 005c2277  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c227a  8b4818               mov ecx, dword ptr [eax + 0x18]
// 005c227d  51                   push ecx
// 005c227e  e8edf7ffff           call 0x5c1a70
// 005c2283  83c404               add esp, 4
// 005c2286  8be5                 mov esp, ebp
// 005c2288  5d                   pop ebp
// 005c2289  c3                   ret 
// copied from an identical function in another client (function ?_Lmost@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IBEAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp