// roc 2009-06 005b6430  unit: seg_005b0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b6430
//
// 005b6430  55                   push ebp
// 005b6431  8bec                 mov ebp, esp
// 005b6433  8b4508               mov eax, dword ptr [ebp + 8]
// 005b6436  50                   push eax
// 005b6437  e814b60000           call 0x5c1a50
// 005b643c  83c404               add esp, 4
// 005b643f  8b08                 mov ecx, dword ptr [eax]
// 005b6441  51                   push ecx
// 005b6442  e899efffff           call 0x5b53e0
// 005b6447  83c404               add esp, 4
// 005b644a  0fbe10               movsx edx, byte ptr [eax]
// 005b644d  85d2                 test edx, edx
// 005b644f  7513                 jne 0x5b6464
// 005b6451  8b4508               mov eax, dword ptr [ebp + 8]
// 005b6454  50                   push eax
// 005b6455  e8f6b50000           call 0x5c1a50
// 005b645a  83c404               add esp, 4
// 005b645d  8b08                 mov ecx, dword ptr [eax]
// 005b645f  894d08               mov dword ptr [ebp + 8], ecx
// 005b6462  ebcf                 jmp 0x5b6433
// 005b6464  8b4508               mov eax, dword ptr [ebp + 8]
// 005b6467  5d                   pop ebp
// 005b6468  c3                   ret 
// copied from an identical function in another client (function ?_Min@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@PAU342@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp