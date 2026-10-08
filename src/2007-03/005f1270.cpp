// roc 2007-03 005f1270  unit: seg_005f0000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f1270
//
// 005f1270  8b4104               mov eax, dword ptr [ecx + 4]
// 005f1273  8b4804               mov ecx, dword ptr [eax + 4]
// 005f1276  80791500             cmp byte ptr [ecx + 0x15], 0
// 005f127a  7542                 jne 0x5f12be
// 005f127c  53                   push ebx
// 005f127d  55                   push ebp
// 005f127e  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005f1282  8b5d00               mov ebx, dword ptr [ebp]
// 005f1285  56                   push esi
// 005f1286  57                   push edi
// 005f1287  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005f128a  3bd3                 cmp edx, ebx
// 005f128c  7422                 je 0x5f12b0
// 005f128e  8b7110               mov esi, dword ptr [ecx + 0x10]
// 005f1291  8b7d04               mov edi, dword ptr [ebp + 4]
// 005f1294  3bf7                 cmp esi, edi
// 005f1296  7508                 jne 0x5f12a0
// 005f1298  3bd3                 cmp edx, ebx
// 005f129a  1bd2                 sbb edx, edx
// 005f129c  f7da                 neg edx
// 005f129e  eb07                 jmp 0x5f12a7
// 005f12a0  33d2                 xor edx, edx
// 005f12a2  3bf7                 cmp esi, edi
// 005f12a4  0f9cc2               setl dl
// 005f12a7  84d2                 test dl, dl
// 005f12a9  7405                 je 0x5f12b0
// 005f12ab  8b4908               mov ecx, dword ptr [ecx + 8]
// 005f12ae  eb04                 jmp 0x5f12b4
// 005f12b0  8bc1                 mov eax, ecx
// 005f12b2  8b09                 mov ecx, dword ptr [ecx]
// 005f12b4  80791500             cmp byte ptr [ecx + 0x15], 0
// 005f12b8  74cd                 je 0x5f1287
// 005f12ba  5f                   pop edi
// 005f12bb  5e                   pop esi
// 005f12bc  5d                   pop ebp
// 005f12bd  5b                   pop ebx
// 005f12be  c20400               ret 4
// library rbxgs/v8world\ClumpStage.cpp (function ?_Lbound@?$_Tree@V?$_Tset_traits@VAnchorEntry@RBX@@VAnchorSortCriterion@2@V?$allocator@VAnchorEntry@RBX@@@std@@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tset_traits@VAnchorEntry@RBX@@VAnchorSortCriterion@2@V?$allocator@VAnchorEntry@RBX@@@std@@$0A@@std@@@2@ABVAnchorEntry@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
