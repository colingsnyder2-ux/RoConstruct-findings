// from server: 100% by auto
// roc 2012-06 0042c4b0  unit: CSelectionTreeCtrl  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0042c4b0
//
// 0042c4b0  53                   push ebx
// 0042c4b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0042c4b5  807b1500             cmp byte ptr [ebx + 0x15], 0
// 0042c4b9  55                   push ebp
// 0042c4ba  56                   push esi
// 0042c4bb  8be9                 mov ebp, ecx
// 0042c4bd  8bf3                 mov esi, ebx
// 0042c4bf  7551                 jne 0x42c512
// 0042c4c1  57                   push edi
// 0042c4c2  8b4608               mov eax, dword ptr [esi + 8]
// 0042c4c5  50                   push eax
// 0042c4c6  8bcd                 mov ecx, ebp
// 0042c4c8  e8e3ffffff           call 0x42c4b0
// 0042c4cd  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 0042c4d0  8b36                 mov esi, dword ptr [esi]
// 0042c4d2  85ff                 test edi, edi
// 0042c4d4  742a                 je 0x42c500
// 0042c4d6  8d4f04               lea ecx, [edi + 4]
// 0042c4d9  83caff               or edx, 0xffffffff
// 0042c4dc  f00fc111             lock xadd dword ptr [ecx], edx
// 0042c4e0  751e                 jne 0x42c500
// 0042c4e2  8b07                 mov eax, dword ptr [edi]
// 0042c4e4  8b5004               mov edx, dword ptr [eax + 4]
// 0042c4e7  8bcf                 mov ecx, edi
// 0042c4e9  ffd2                 call edx
// 0042c4eb  8d4708               lea eax, [edi + 8]
// 0042c4ee  83c9ff               or ecx, 0xffffffff
// 0042c4f1  f00fc108             lock xadd dword ptr [eax], ecx
// 0042c4f5  7509                 jne 0x42c500
// 0042c4f7  8b17                 mov edx, dword ptr [edi]
// 0042c4f9  8b4208               mov eax, dword ptr [edx + 8]
// 0042c4fc  8bcf                 mov ecx, edi
// 0042c4fe  ffd0                 call eax
// 0042c500  53                   push ebx
// 0042c501  e80e5c5500           call 0x982114
// 0042c506  83c404               add esp, 4
// 0042c509  807e1500             cmp byte ptr [esi + 0x15], 0
// 0042c50d  8bde                 mov ebx, esi
// 0042c50f  74b1                 je 0x42c4c2
// 0042c511  5f                   pop edi
// 0042c512  5e                   pop esi
// 0042c513  5d                   pop ebp
// 0042c514  5b                   pop ebx
// 0042c515  c20400               ret 4
// library templates-boost-1_34_1/set_sp.cpp (function ?_Erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_sp.cpp
