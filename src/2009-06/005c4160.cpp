// roc 2009-06 005c4160  unit: seg_005c0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c4160
//
// 005c4160  55                   push ebp
// 005c4161  8bec                 mov ebp, esp
// 005c4163  8b4508               mov eax, dword ptr [ebp + 8]
// 005c4166  50                   push eax
// 005c4167  e804d9ffff           call 0x5c1a70
// 005c416c  83c404               add esp, 4
// 005c416f  8b08                 mov ecx, dword ptr [eax]
// 005c4171  51                   push ecx
// 005c4172  e8898ffeff           call 0x5ad100
// 005c4177  83c404               add esp, 4
// 005c417a  0fbe10               movsx edx, byte ptr [eax]
// 005c417d  85d2                 test edx, edx
// 005c417f  7513                 jne 0x5c4194
// 005c4181  8b4508               mov eax, dword ptr [ebp + 8]
// 005c4184  50                   push eax
// 005c4185  e8e6d8ffff           call 0x5c1a70
// 005c418a  83c404               add esp, 4
// 005c418d  8b08                 mov ecx, dword ptr [eax]
// 005c418f  894d08               mov dword ptr [ebp + 8], ecx
// 005c4192  ebcf                 jmp 0x5c4163
// 005c4194  8b4508               mov eax, dword ptr [ebp + 8]
// 005c4197  5d                   pop ebp
// 005c4198  c3                   ret 
// copied from an identical function in another client (function ?_Min@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@PAU342@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp