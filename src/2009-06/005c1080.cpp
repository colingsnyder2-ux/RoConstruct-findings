// roc 2009-06 005c1080  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c1080
//
// 005c1080  55                   push ebp
// 005c1081  8bec                 mov ebp, esp
// 005c1083  51                   push ecx
// 005c1084  894dfc               mov dword ptr [ebp - 4], ecx
// 005c1087  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c108a  8b4818               mov ecx, dword ptr [eax + 0x18]
// 005c108d  51                   push ecx
// 005c108e  e8bd090000           call 0x5c1a50
// 005c1093  83c404               add esp, 4
// 005c1096  8be5                 mov esp, ebp
// 005c1098  5d                   pop ebp
// 005c1099  c3                   ret 
// copied from an identical function in another client (function ?_Lmost@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IBEAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp