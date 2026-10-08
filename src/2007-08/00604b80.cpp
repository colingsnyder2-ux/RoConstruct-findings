// roc 2007-08 00604b80  unit: RBX::SleepStage  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00604b80
//
// 00604b80  8b4104               mov eax, dword ptr [ecx + 4]
// 00604b83  8b4804               mov ecx, dword ptr [eax + 4]
// 00604b86  80791500             cmp byte ptr [ecx + 0x15], 0
// 00604b8a  7542                 jne 0x604bce
// 00604b8c  53                   push ebx
// 00604b8d  55                   push ebp
// 00604b8e  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00604b92  8b5d00               mov ebx, dword ptr [ebp]
// 00604b95  56                   push esi
// 00604b96  57                   push edi
// 00604b97  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00604b9a  3bd3                 cmp edx, ebx
// 00604b9c  7422                 je 0x604bc0
// 00604b9e  8b7110               mov esi, dword ptr [ecx + 0x10]
// 00604ba1  8b7d04               mov edi, dword ptr [ebp + 4]
// 00604ba4  3bf7                 cmp esi, edi
// 00604ba6  7508                 jne 0x604bb0
// 00604ba8  3bd3                 cmp edx, ebx
// 00604baa  1bd2                 sbb edx, edx
// 00604bac  f7da                 neg edx
// 00604bae  eb07                 jmp 0x604bb7
// 00604bb0  33d2                 xor edx, edx
// 00604bb2  3bf7                 cmp esi, edi
// 00604bb4  0f9cc2               setl dl
// 00604bb7  84d2                 test dl, dl
// 00604bb9  7405                 je 0x604bc0
// 00604bbb  8b4908               mov ecx, dword ptr [ecx + 8]
// 00604bbe  eb04                 jmp 0x604bc4
// 00604bc0  8bc1                 mov eax, ecx
// 00604bc2  8b09                 mov ecx, dword ptr [ecx]
// 00604bc4  80791500             cmp byte ptr [ecx + 0x15], 0
// 00604bc8  74cd                 je 0x604b97
// 00604bca  5f                   pop edi
// 00604bcb  5e                   pop esi
// 00604bcc  5d                   pop ebp
// 00604bcd  5b                   pop ebx
// 00604bce  c20400               ret 4
// library rbxgs/v8world\ClumpStage.cpp (function ?_Lbound@?$_Tree@V?$_Tset_traits@VAnchorEntry@RBX@@VAnchorSortCriterion@2@V?$allocator@VAnchorEntry@RBX@@@std@@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tset_traits@VAnchorEntry@RBX@@VAnchorSortCriterion@2@V?$allocator@VAnchorEntry@RBX@@@std@@$0A@@std@@@2@ABVAnchorEntry@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
