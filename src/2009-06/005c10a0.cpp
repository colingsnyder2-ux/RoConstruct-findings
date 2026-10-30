// roc 2009-06 005c10a0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c10a0
//
// 005c10a0  55                   push ebp
// 005c10a1  8bec                 mov ebp, esp
// 005c10a3  51                   push ecx
// 005c10a4  894dfc               mov dword ptr [ebp - 4], ecx
// 005c10a7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c10aa  8b4818               mov ecx, dword ptr [eax + 0x18]
// 005c10ad  51                   push ecx
// 005c10ae  e8ad090000           call 0x5c1a60
// 005c10b3  83c404               add esp, 4
// 005c10b6  8be5                 mov esp, ebp
// 005c10b8  5d                   pop ebp
// 005c10b9  c3                   ret 
// copied from an identical function in another client (function ?_Lmost@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IBEAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp