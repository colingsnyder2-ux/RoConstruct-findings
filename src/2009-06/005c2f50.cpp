// roc 2009-06 005c2f50  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c2f50
//
// 005c2f50  55                   push ebp
// 005c2f51  8bec                 mov ebp, esp
// 005c2f53  51                   push ecx
// 005c2f54  894dfc               mov dword ptr [ebp - 4], ecx
// 005c2f57  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c2f5a  e8a14a0000           call 0x5c7a00
// 005c2f5f  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c2f62  c7400400000000       mov dword ptr [eax + 4], 0
// 005c2f69  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c2f6c  8be5                 mov esp, ebp
// 005c2f6e  5d                   pop ebp
// 005c2f6f  c3                   ret 
// copied from an identical function in another client (function ??0const_iterator@?$_Tree@V?$_Tmap_traits@VTriangleKey@Wml@@PAVTriangle@ETManifoldMesh@2@U?$less@VTriangleKey@Wml@@@std@@V?$allocator@U?$pair@$$CBVTriangleKey@Wml@@PAVTriangle@ETManifoldMesh@2@@std@@@6@$0A@@std@@@std@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Containment/WmlConvexHull3.cpp