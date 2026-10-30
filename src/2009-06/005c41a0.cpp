// roc 2009-06 005c41a0  unit: seg_005c0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c41a0
//
// 005c41a0  55                   push ebp
// 005c41a1  8bec                 mov ebp, esp
// 005c41a3  8b4508               mov eax, dword ptr [ebp + 8]
// 005c41a6  50                   push eax
// 005c41a7  e8a4d8ffff           call 0x5c1a50
// 005c41ac  83c404               add esp, 4
// 005c41af  8b08                 mov ecx, dword ptr [eax]
// 005c41b1  51                   push ecx
// 005c41b2  e8498ffeff           call 0x5ad100
// 005c41b7  83c404               add esp, 4
// 005c41ba  0fbe10               movsx edx, byte ptr [eax]
// 005c41bd  85d2                 test edx, edx
// 005c41bf  7513                 jne 0x5c41d4
// 005c41c1  8b4508               mov eax, dword ptr [ebp + 8]
// 005c41c4  50                   push eax
// 005c41c5  e886d8ffff           call 0x5c1a50
// 005c41ca  83c404               add esp, 4
// 005c41cd  8b08                 mov ecx, dword ptr [eax]
// 005c41cf  894d08               mov dword ptr [ebp + 8], ecx
// 005c41d2  ebcf                 jmp 0x5c41a3
// 005c41d4  8b4508               mov eax, dword ptr [ebp + 8]
// 005c41d7  5d                   pop ebp
// 005c41d8  c3                   ret 
// copied from an identical function in another client (function ?_Min@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@PAU342@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp