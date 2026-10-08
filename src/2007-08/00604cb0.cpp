// roc 2007-08 00604cb0  unit: RBX::SleepStage  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00604cb0
//
// 00604cb0  8b4104               mov eax, dword ptr [ecx + 4]
// 00604cb3  8b4804               mov ecx, dword ptr [eax + 4]
// 00604cb6  80791900             cmp byte ptr [ecx + 0x19], 0
// 00604cba  55                   push ebp
// 00604cbb  8be8                 mov ebp, eax
// 00604cbd  7558                 jne 0x604d17
// 00604cbf  56                   push esi
// 00604cc0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00604cc4  57                   push edi
// 00604cc5  8b3e                 mov edi, dword ptr [esi]
// 00604cc7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00604cca  3bfa                 cmp edi, edx
// 00604ccc  743c                 je 0x604d0a
// 00604cce  8a4604               mov al, byte ptr [esi + 4]
// 00604cd1  3a4110               cmp al, byte ptr [ecx + 0x10]
// 00604cd4  7510                 jne 0x604ce6
// 00604cd6  8b4608               mov eax, dword ptr [esi + 8]
// 00604cd9  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 00604cdc  7508                 jne 0x604ce6
// 00604cde  3bfa                 cmp edi, edx
// 00604ce0  1bd2                 sbb edx, edx
// 00604ce2  f7da                 neg edx
// 00604ce4  eb1a                 jmp 0x604d00
// 00604ce6  8a5110               mov dl, byte ptr [ecx + 0x10]
// 00604ce9  385604               cmp byte ptr [esi + 4], dl
// 00604cec  7405                 je 0x604cf3
// 00604cee  0fb6d2               movzx edx, dl
// 00604cf1  eb0a                 jmp 0x604cfd
// 00604cf3  8b5608               mov edx, dword ptr [esi + 8]
// 00604cf6  3b5114               cmp edx, dword ptr [ecx + 0x14]
// 00604cf9  1bd2                 sbb edx, edx
// 00604cfb  f7da                 neg edx
// 00604cfd  0fb6d2               movzx edx, dl
// 00604d00  84d2                 test dl, dl
// 00604d02  7406                 je 0x604d0a
// 00604d04  8be9                 mov ebp, ecx
// 00604d06  8b09                 mov ecx, dword ptr [ecx]
// 00604d08  eb03                 jmp 0x604d0d
// 00604d0a  8b4908               mov ecx, dword ptr [ecx + 8]
// 00604d0d  80791900             cmp byte ptr [ecx + 0x19], 0
// 00604d11  74b4                 je 0x604cc7
// 00604d13  5f                   pop edi
// 00604d14  8bc5                 mov eax, ebp
// 00604d16  5e                   pop esi
// 00604d17  5d                   pop ebp
// 00604d18  c20400               ret 4
// library rbxgs/v8world\ClumpStage.cpp (function ?_Ubound@?$_Tree@V?$_Tset_traits@VRigidEntry@RBX@@VRigidSortCriterion@2@V?$allocator@VRigidEntry@RBX@@@std@@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tset_traits@VRigidEntry@RBX@@VRigidSortCriterion@2@V?$allocator@VRigidEntry@RBX@@@std@@$0A@@std@@@2@ABVRigidEntry@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
