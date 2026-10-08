// roc 2007-08 00604c40  unit: RBX::SleepStage  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00604c40
//
// 00604c40  8b4104               mov eax, dword ptr [ecx + 4]
// 00604c43  8b4804               mov ecx, dword ptr [eax + 4]
// 00604c46  80791900             cmp byte ptr [ecx + 0x19], 0
// 00604c4a  55                   push ebp
// 00604c4b  8be8                 mov ebp, eax
// 00604c4d  7558                 jne 0x604ca7
// 00604c4f  56                   push esi
// 00604c50  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00604c54  57                   push edi
// 00604c55  8b3e                 mov edi, dword ptr [esi]
// 00604c57  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00604c5a  3bd7                 cmp edx, edi
// 00604c5c  743b                 je 0x604c99
// 00604c5e  8a4110               mov al, byte ptr [ecx + 0x10]
// 00604c61  3a4604               cmp al, byte ptr [esi + 4]
// 00604c64  7510                 jne 0x604c76
// 00604c66  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00604c69  3b4608               cmp eax, dword ptr [esi + 8]
// 00604c6c  7508                 jne 0x604c76
// 00604c6e  3bd7                 cmp edx, edi
// 00604c70  1bd2                 sbb edx, edx
// 00604c72  f7da                 neg edx
// 00604c74  eb1a                 jmp 0x604c90
// 00604c76  8a5604               mov dl, byte ptr [esi + 4]
// 00604c79  385110               cmp byte ptr [ecx + 0x10], dl
// 00604c7c  7405                 je 0x604c83
// 00604c7e  0fb6d2               movzx edx, dl
// 00604c81  eb0a                 jmp 0x604c8d
// 00604c83  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00604c86  3b5608               cmp edx, dword ptr [esi + 8]
// 00604c89  1bd2                 sbb edx, edx
// 00604c8b  f7da                 neg edx
// 00604c8d  0fb6d2               movzx edx, dl
// 00604c90  84d2                 test dl, dl
// 00604c92  7405                 je 0x604c99
// 00604c94  8b4908               mov ecx, dword ptr [ecx + 8]
// 00604c97  eb04                 jmp 0x604c9d
// 00604c99  8be9                 mov ebp, ecx
// 00604c9b  8b09                 mov ecx, dword ptr [ecx]
// 00604c9d  80791900             cmp byte ptr [ecx + 0x19], 0
// 00604ca1  74b4                 je 0x604c57
// 00604ca3  5f                   pop edi
// 00604ca4  8bc5                 mov eax, ebp
// 00604ca6  5e                   pop esi
// 00604ca7  5d                   pop ebp
// 00604ca8  c20400               ret 4
// library rbxgs/v8world\ClumpStage.cpp (function ?_Lbound@?$_Tree@V?$_Tset_traits@VRigidEntry@RBX@@VRigidSortCriterion@2@V?$allocator@VRigidEntry@RBX@@@std@@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tset_traits@VRigidEntry@RBX@@VRigidSortCriterion@2@V?$allocator@VRigidEntry@RBX@@@std@@$0A@@std@@@2@ABVRigidEntry@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
