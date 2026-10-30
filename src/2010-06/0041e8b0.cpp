// from server: 100% by auto
// roc 2010-06 0041e8b0  unit: CSelectionTreeCtrl  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041e8b0
//
// 0041e8b0  53                   push ebx
// 0041e8b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0041e8b5  807b1500             cmp byte ptr [ebx + 0x15], 0
// 0041e8b9  55                   push ebp
// 0041e8ba  56                   push esi
// 0041e8bb  8be9                 mov ebp, ecx
// 0041e8bd  8bf3                 mov esi, ebx
// 0041e8bf  7551                 jne 0x41e912
// 0041e8c1  57                   push edi
// 0041e8c2  8b4608               mov eax, dword ptr [esi + 8]
// 0041e8c5  50                   push eax
// 0041e8c6  8bcd                 mov ecx, ebp
// 0041e8c8  e8e3ffffff           call 0x41e8b0
// 0041e8cd  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 0041e8d0  8b36                 mov esi, dword ptr [esi]
// 0041e8d2  85ff                 test edi, edi
// 0041e8d4  742a                 je 0x41e900
// 0041e8d6  8d4f04               lea ecx, [edi + 4]
// 0041e8d9  83caff               or edx, 0xffffffff
// 0041e8dc  f00fc111             lock xadd dword ptr [ecx], edx
// 0041e8e0  751e                 jne 0x41e900
// 0041e8e2  8b07                 mov eax, dword ptr [edi]
// 0041e8e4  8b5004               mov edx, dword ptr [eax + 4]
// 0041e8e7  8bcf                 mov ecx, edi
// 0041e8e9  ffd2                 call edx
// 0041e8eb  8d4708               lea eax, [edi + 8]
// 0041e8ee  83c9ff               or ecx, 0xffffffff
// 0041e8f1  f00fc108             lock xadd dword ptr [eax], ecx
// 0041e8f5  7509                 jne 0x41e900
// 0041e8f7  8b17                 mov edx, dword ptr [edi]
// 0041e8f9  8b4208               mov eax, dword ptr [edx + 8]
// 0041e8fc  8bcf                 mov ecx, edi
// 0041e8fe  ffd0                 call eax
// 0041e900  53                   push ebx
// 0041e901  e894903800           call 0x7a799a
// 0041e906  83c404               add esp, 4
// 0041e909  807e1500             cmp byte ptr [esi + 0x15], 0
// 0041e90d  8bde                 mov ebx, esi
// 0041e90f  74b1                 je 0x41e8c2
// 0041e911  5f                   pop edi
// 0041e912  5e                   pop esi
// 0041e913  5d                   pop ebp
// 0041e914  5b                   pop ebx
// 0041e915  c20400               ret 4
// library templates-boost-1_34_1/set_sp.cpp (function ?_Erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_sp.cpp
