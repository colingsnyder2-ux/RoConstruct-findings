// roc 2007-08 00604be0  unit: RBX::SleepStage  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00604be0
//
// 00604be0  8b4104               mov eax, dword ptr [ecx + 4]
// 00604be3  8b4804               mov ecx, dword ptr [eax + 4]
// 00604be6  80791500             cmp byte ptr [ecx + 0x15], 0
// 00604bea  7542                 jne 0x604c2e
// 00604bec  53                   push ebx
// 00604bed  55                   push ebp
// 00604bee  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00604bf2  8b5d00               mov ebx, dword ptr [ebp]
// 00604bf5  56                   push esi
// 00604bf6  57                   push edi
// 00604bf7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00604bfa  3bda                 cmp ebx, edx
// 00604bfc  7423                 je 0x604c21
// 00604bfe  8b7504               mov esi, dword ptr [ebp + 4]
// 00604c01  8b7910               mov edi, dword ptr [ecx + 0x10]
// 00604c04  3bf7                 cmp esi, edi
// 00604c06  7508                 jne 0x604c10
// 00604c08  3bda                 cmp ebx, edx
// 00604c0a  1bd2                 sbb edx, edx
// 00604c0c  f7da                 neg edx
// 00604c0e  eb07                 jmp 0x604c17
// 00604c10  33d2                 xor edx, edx
// 00604c12  3bf7                 cmp esi, edi
// 00604c14  0f9cc2               setl dl
// 00604c17  84d2                 test dl, dl
// 00604c19  7406                 je 0x604c21
// 00604c1b  8bc1                 mov eax, ecx
// 00604c1d  8b09                 mov ecx, dword ptr [ecx]
// 00604c1f  eb03                 jmp 0x604c24
// 00604c21  8b4908               mov ecx, dword ptr [ecx + 8]
// 00604c24  80791500             cmp byte ptr [ecx + 0x15], 0
// 00604c28  74cd                 je 0x604bf7
// 00604c2a  5f                   pop edi
// 00604c2b  5e                   pop esi
// 00604c2c  5d                   pop ebp
// 00604c2d  5b                   pop ebx
// 00604c2e  c20400               ret 4
// library rbxgs/v8world\ClumpStage.cpp (function ?_Ubound@?$_Tree@V?$_Tset_traits@VAnchorEntry@RBX@@VAnchorSortCriterion@2@V?$allocator@VAnchorEntry@RBX@@@std@@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tset_traits@VAnchorEntry@RBX@@VAnchorSortCriterion@2@V?$allocator@VAnchorEntry@RBX@@@std@@$0A@@std@@@2@ABVAnchorEntry@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
