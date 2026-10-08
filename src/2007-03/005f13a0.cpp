// roc 2007-03 005f13a0  unit: seg_005f0000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f13a0
//
// 005f13a0  8b4104               mov eax, dword ptr [ecx + 4]
// 005f13a3  8b4804               mov ecx, dword ptr [eax + 4]
// 005f13a6  80791900             cmp byte ptr [ecx + 0x19], 0
// 005f13aa  55                   push ebp
// 005f13ab  8be8                 mov ebp, eax
// 005f13ad  7558                 jne 0x5f1407
// 005f13af  56                   push esi
// 005f13b0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f13b4  57                   push edi
// 005f13b5  8b3e                 mov edi, dword ptr [esi]
// 005f13b7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005f13ba  3bd7                 cmp edx, edi
// 005f13bc  743b                 je 0x5f13f9
// 005f13be  8a4110               mov al, byte ptr [ecx + 0x10]
// 005f13c1  3a4604               cmp al, byte ptr [esi + 4]
// 005f13c4  7510                 jne 0x5f13d6
// 005f13c6  8b4114               mov eax, dword ptr [ecx + 0x14]
// 005f13c9  3b4608               cmp eax, dword ptr [esi + 8]
// 005f13cc  7508                 jne 0x5f13d6
// 005f13ce  3bd7                 cmp edx, edi
// 005f13d0  1bd2                 sbb edx, edx
// 005f13d2  f7da                 neg edx
// 005f13d4  eb1a                 jmp 0x5f13f0
// 005f13d6  8a5604               mov dl, byte ptr [esi + 4]
// 005f13d9  385110               cmp byte ptr [ecx + 0x10], dl
// 005f13dc  7405                 je 0x5f13e3
// 005f13de  0fb6d2               movzx edx, dl
// 005f13e1  eb0a                 jmp 0x5f13ed
// 005f13e3  8b5114               mov edx, dword ptr [ecx + 0x14]
// 005f13e6  3b5608               cmp edx, dword ptr [esi + 8]
// 005f13e9  1bd2                 sbb edx, edx
// 005f13eb  f7da                 neg edx
// 005f13ed  0fb6d2               movzx edx, dl
// 005f13f0  84d2                 test dl, dl
// 005f13f2  7405                 je 0x5f13f9
// 005f13f4  8b4908               mov ecx, dword ptr [ecx + 8]
// 005f13f7  eb04                 jmp 0x5f13fd
// 005f13f9  8be9                 mov ebp, ecx
// 005f13fb  8b09                 mov ecx, dword ptr [ecx]
// 005f13fd  80791900             cmp byte ptr [ecx + 0x19], 0
// 005f1401  74b4                 je 0x5f13b7
// 005f1403  5f                   pop edi
// 005f1404  8bc5                 mov eax, ebp
// 005f1406  5e                   pop esi
// 005f1407  5d                   pop ebp
// 005f1408  c20400               ret 4
// library rbxgs/v8world\ClumpStage.cpp (function ?_Lbound@?$_Tree@V?$_Tset_traits@VRigidEntry@RBX@@VRigidSortCriterion@2@V?$allocator@VRigidEntry@RBX@@@std@@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tset_traits@VRigidEntry@RBX@@VRigidSortCriterion@2@V?$allocator@VRigidEntry@RBX@@@std@@$0A@@std@@@2@ABVRigidEntry@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
