// roc 2009-06 005b63f0  unit: seg_005b0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b63f0
//
// 005b63f0  55                   push ebp
// 005b63f1  8bec                 mov ebp, esp
// 005b63f3  8b4508               mov eax, dword ptr [ebp + 8]
// 005b63f6  50                   push eax
// 005b63f7  e874b60000           call 0x5c1a70
// 005b63fc  83c404               add esp, 4
// 005b63ff  8b08                 mov ecx, dword ptr [eax]
// 005b6401  51                   push ecx
// 005b6402  e8d9efffff           call 0x5b53e0
// 005b6407  83c404               add esp, 4
// 005b640a  0fbe10               movsx edx, byte ptr [eax]
// 005b640d  85d2                 test edx, edx
// 005b640f  7513                 jne 0x5b6424
// 005b6411  8b4508               mov eax, dword ptr [ebp + 8]
// 005b6414  50                   push eax
// 005b6415  e856b60000           call 0x5c1a70
// 005b641a  83c404               add esp, 4
// 005b641d  8b08                 mov ecx, dword ptr [eax]
// 005b641f  894d08               mov dword ptr [ebp + 8], ecx
// 005b6422  ebcf                 jmp 0x5b63f3
// 005b6424  8b4508               mov eax, dword ptr [ebp + 8]
// 005b6427  5d                   pop ebp
// 005b6428  c3                   ret 
// copied from an identical function in another client (function ?_Min@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@PAU342@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp