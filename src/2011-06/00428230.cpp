// from server: 100% by auto
// roc 2011-06 00428230  unit: CSelectionTreeCtrl  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00428230
//
// 00428230  53                   push ebx
// 00428231  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00428235  807b1500             cmp byte ptr [ebx + 0x15], 0
// 00428239  55                   push ebp
// 0042823a  56                   push esi
// 0042823b  8be9                 mov ebp, ecx
// 0042823d  8bf3                 mov esi, ebx
// 0042823f  7551                 jne 0x428292
// 00428241  57                   push edi
// 00428242  8b4608               mov eax, dword ptr [esi + 8]
// 00428245  50                   push eax
// 00428246  8bcd                 mov ecx, ebp
// 00428248  e8e3ffffff           call 0x428230
// 0042824d  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 00428250  8b36                 mov esi, dword ptr [esi]
// 00428252  85ff                 test edi, edi
// 00428254  742a                 je 0x428280
// 00428256  8d4f04               lea ecx, [edi + 4]
// 00428259  83caff               or edx, 0xffffffff
// 0042825c  f00fc111             lock xadd dword ptr [ecx], edx
// 00428260  751e                 jne 0x428280
// 00428262  8b07                 mov eax, dword ptr [edi]
// 00428264  8b5004               mov edx, dword ptr [eax + 4]
// 00428267  8bcf                 mov ecx, edi
// 00428269  ffd2                 call edx
// 0042826b  8d4708               lea eax, [edi + 8]
// 0042826e  83c9ff               or ecx, 0xffffffff
// 00428271  f00fc108             lock xadd dword ptr [eax], ecx
// 00428275  7509                 jne 0x428280
// 00428277  8b17                 mov edx, dword ptr [edi]
// 00428279  8b4208               mov eax, dword ptr [edx + 8]
// 0042827c  8bcf                 mov ecx, edi
// 0042827e  ffd0                 call eax
// 00428280  53                   push ebx
// 00428281  e8d21d3e00           call 0x80a058
// 00428286  83c404               add esp, 4
// 00428289  807e1500             cmp byte ptr [esi + 0x15], 0
// 0042828d  8bde                 mov ebx, esi
// 0042828f  74b1                 je 0x428242
// 00428291  5f                   pop edi
// 00428292  5e                   pop esi
// 00428293  5d                   pop ebp
// 00428294  5b                   pop ebx
// 00428295  c20400               ret 4
// library templates-boost-1_34_1/set_sp.cpp (function ?_Erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_sp.cpp
