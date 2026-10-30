// roc 2009-06 005c48f0  unit: seg_005c0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c48f0
//
// 005c48f0  55                   push ebp
// 005c48f1  8bec                 mov ebp, esp
// 005c48f3  8b4508               mov eax, dword ptr [ebp + 8]
// 005c48f6  50                   push eax
// 005c48f7  e874d1ffff           call 0x5c1a70
// 005c48fc  83c404               add esp, 4
// 005c48ff  8b08                 mov ecx, dword ptr [eax]
// 005c4901  51                   push ecx
// 005c4902  e839d1ffff           call 0x5c1a40
// 005c4907  83c404               add esp, 4
// 005c490a  0fbe10               movsx edx, byte ptr [eax]
// 005c490d  85d2                 test edx, edx
// 005c490f  7513                 jne 0x5c4924
// 005c4911  8b4508               mov eax, dword ptr [ebp + 8]
// 005c4914  50                   push eax
// 005c4915  e856d1ffff           call 0x5c1a70
// 005c491a  83c404               add esp, 4
// 005c491d  8b08                 mov ecx, dword ptr [eax]
// 005c491f  894d08               mov dword ptr [ebp + 8], ecx
// 005c4922  ebcf                 jmp 0x5c48f3
// 005c4924  8b4508               mov eax, dword ptr [ebp + 8]
// 005c4927  5d                   pop ebp
// 005c4928  c3                   ret 
// copied from an identical function in another client (function ?_Min@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@PAU342@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp