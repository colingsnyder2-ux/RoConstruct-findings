// roc 2007-03 005f1330  unit: seg_005f0000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f1330
//
// 005f1330  8b4104               mov eax, dword ptr [ecx + 4]
// 005f1333  8b4804               mov ecx, dword ptr [eax + 4]
// 005f1336  80791900             cmp byte ptr [ecx + 0x19], 0
// 005f133a  55                   push ebp
// 005f133b  8be8                 mov ebp, eax
// 005f133d  7558                 jne 0x5f1397
// 005f133f  56                   push esi
// 005f1340  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f1344  57                   push edi
// 005f1345  8b3e                 mov edi, dword ptr [esi]
// 005f1347  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005f134a  3bfa                 cmp edi, edx
// 005f134c  743c                 je 0x5f138a
// 005f134e  8a4604               mov al, byte ptr [esi + 4]
// 005f1351  3a4110               cmp al, byte ptr [ecx + 0x10]
// 005f1354  7510                 jne 0x5f1366
// 005f1356  8b4608               mov eax, dword ptr [esi + 8]
// 005f1359  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 005f135c  7508                 jne 0x5f1366
// 005f135e  3bfa                 cmp edi, edx
// 005f1360  1bd2                 sbb edx, edx
// 005f1362  f7da                 neg edx
// 005f1364  eb1a                 jmp 0x5f1380
// 005f1366  8a5110               mov dl, byte ptr [ecx + 0x10]
// 005f1369  385604               cmp byte ptr [esi + 4], dl
// 005f136c  7405                 je 0x5f1373
// 005f136e  0fb6d2               movzx edx, dl
// 005f1371  eb0a                 jmp 0x5f137d
// 005f1373  8b5608               mov edx, dword ptr [esi + 8]
// 005f1376  3b5114               cmp edx, dword ptr [ecx + 0x14]
// 005f1379  1bd2                 sbb edx, edx
// 005f137b  f7da                 neg edx
// 005f137d  0fb6d2               movzx edx, dl
// 005f1380  84d2                 test dl, dl
// 005f1382  7406                 je 0x5f138a
// 005f1384  8be9                 mov ebp, ecx
// 005f1386  8b09                 mov ecx, dword ptr [ecx]
// 005f1388  eb03                 jmp 0x5f138d
// 005f138a  8b4908               mov ecx, dword ptr [ecx + 8]
// 005f138d  80791900             cmp byte ptr [ecx + 0x19], 0
// 005f1391  74b4                 je 0x5f1347
// 005f1393  5f                   pop edi
// 005f1394  8bc5                 mov eax, ebp
// 005f1396  5e                   pop esi
// 005f1397  5d                   pop ebp
// 005f1398  c20400               ret 4
// library rbxgs/v8world\ClumpStage.cpp (function ?_Ubound@?$_Tree@V?$_Tset_traits@VRigidEntry@RBX@@VRigidSortCriterion@2@V?$allocator@VRigidEntry@RBX@@@std@@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tset_traits@VRigidEntry@RBX@@VRigidSortCriterion@2@V?$allocator@VRigidEntry@RBX@@@std@@$0A@@std@@@2@ABVRigidEntry@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
