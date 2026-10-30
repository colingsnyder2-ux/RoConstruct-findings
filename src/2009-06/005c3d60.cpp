// roc 2009-06 005c3d60  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c3d60
//
// 005c3d60  55                   push ebp
// 005c3d61  8bec                 mov ebp, esp
// 005c3d63  8b4508               mov eax, dword ptr [ebp + 8]
// 005c3d66  50                   push eax
// 005c3d67  e8e4dcffff           call 0x5c1a50
// 005c3d6c  83c404               add esp, 4
// 005c3d6f  8b08                 mov ecx, dword ptr [eax]
// 005c3d71  51                   push ecx
// 005c3d72  e8c9dcffff           call 0x5c1a40
// 005c3d77  83c404               add esp, 4
// 005c3d7a  0fbe10               movsx edx, byte ptr [eax]
// 005c3d7d  85d2                 test edx, edx
// 005c3d7f  7513                 jne 0x5c3d94
// 005c3d81  8b4508               mov eax, dword ptr [ebp + 8]
// 005c3d84  50                   push eax
// 005c3d85  e8c6dcffff           call 0x5c1a50
// 005c3d8a  83c404               add esp, 4
// 005c3d8d  8b08                 mov ecx, dword ptr [eax]
// 005c3d8f  894d08               mov dword ptr [ebp + 8], ecx
// 005c3d92  ebcf                 jmp 0x5c3d63
// 005c3d94  8b4508               mov eax, dword ptr [ebp + 8]
// 005c3d97  5d                   pop ebp
// 005c3d98  c3                   ret 
// copied from an identical function in another client (function ?_Min@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@PAU342@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp