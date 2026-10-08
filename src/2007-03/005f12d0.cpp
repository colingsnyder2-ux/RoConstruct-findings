// roc 2007-03 005f12d0  unit: seg_005f0000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f12d0
//
// 005f12d0  8b4104               mov eax, dword ptr [ecx + 4]
// 005f12d3  8b4804               mov ecx, dword ptr [eax + 4]
// 005f12d6  80791500             cmp byte ptr [ecx + 0x15], 0
// 005f12da  7542                 jne 0x5f131e
// 005f12dc  53                   push ebx
// 005f12dd  55                   push ebp
// 005f12de  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005f12e2  8b5d00               mov ebx, dword ptr [ebp]
// 005f12e5  56                   push esi
// 005f12e6  57                   push edi
// 005f12e7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005f12ea  3bda                 cmp ebx, edx
// 005f12ec  7423                 je 0x5f1311
// 005f12ee  8b7504               mov esi, dword ptr [ebp + 4]
// 005f12f1  8b7910               mov edi, dword ptr [ecx + 0x10]
// 005f12f4  3bf7                 cmp esi, edi
// 005f12f6  7508                 jne 0x5f1300
// 005f12f8  3bda                 cmp ebx, edx
// 005f12fa  1bd2                 sbb edx, edx
// 005f12fc  f7da                 neg edx
// 005f12fe  eb07                 jmp 0x5f1307
// 005f1300  33d2                 xor edx, edx
// 005f1302  3bf7                 cmp esi, edi
// 005f1304  0f9cc2               setl dl
// 005f1307  84d2                 test dl, dl
// 005f1309  7406                 je 0x5f1311
// 005f130b  8bc1                 mov eax, ecx
// 005f130d  8b09                 mov ecx, dword ptr [ecx]
// 005f130f  eb03                 jmp 0x5f1314
// 005f1311  8b4908               mov ecx, dword ptr [ecx + 8]
// 005f1314  80791500             cmp byte ptr [ecx + 0x15], 0
// 005f1318  74cd                 je 0x5f12e7
// 005f131a  5f                   pop edi
// 005f131b  5e                   pop esi
// 005f131c  5d                   pop ebp
// 005f131d  5b                   pop ebx
// 005f131e  c20400               ret 4
// library rbxgs/v8world\ClumpStage.cpp (function ?_Ubound@?$_Tree@V?$_Tset_traits@VAnchorEntry@RBX@@VAnchorSortCriterion@2@V?$allocator@VAnchorEntry@RBX@@@std@@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tset_traits@VAnchorEntry@RBX@@VAnchorSortCriterion@2@V?$allocator@VAnchorEntry@RBX@@@std@@$0A@@std@@@2@ABVAnchorEntry@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
