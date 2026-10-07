// roc 2008-06 00423a50  unit: CSelectionTreeCtrl  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00423a50
//
// 00423a50  53                   push ebx
// 00423a51  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00423a55  807b1500             cmp byte ptr [ebx + 0x15], 0
// 00423a59  55                   push ebp
// 00423a5a  56                   push esi
// 00423a5b  8be9                 mov ebp, ecx
// 00423a5d  8bf3                 mov esi, ebx
// 00423a5f  7551                 jne 0x423ab2
// 00423a61  57                   push edi
// 00423a62  8b4608               mov eax, dword ptr [esi + 8]
// 00423a65  50                   push eax
// 00423a66  8bcd                 mov ecx, ebp
// 00423a68  e8e3ffffff           call 0x423a50
// 00423a6d  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 00423a70  8b36                 mov esi, dword ptr [esi]
// 00423a72  85ff                 test edi, edi
// 00423a74  742a                 je 0x423aa0
// 00423a76  8d4f04               lea ecx, [edi + 4]
// 00423a79  83caff               or edx, 0xffffffff
// 00423a7c  f00fc111             lock xadd dword ptr [ecx], edx
// 00423a80  751e                 jne 0x423aa0
// 00423a82  8b07                 mov eax, dword ptr [edi]
// 00423a84  8b5004               mov edx, dword ptr [eax + 4]
// 00423a87  8bcf                 mov ecx, edi
// 00423a89  ffd2                 call edx
// 00423a8b  8d4708               lea eax, [edi + 8]
// 00423a8e  83c9ff               or ecx, 0xffffffff
// 00423a91  f00fc108             lock xadd dword ptr [eax], ecx
// 00423a95  7509                 jne 0x423aa0
// 00423a97  8b17                 mov edx, dword ptr [edi]
// 00423a99  8b4208               mov eax, dword ptr [edx + 8]
// 00423a9c  8bcf                 mov ecx, edi
// 00423a9e  ffd0                 call eax
// 00423aa0  53                   push ebx
// 00423aa1  e8d4cb2700           call 0x6a067a
// 00423aa6  83c404               add esp, 4
// 00423aa9  807e1500             cmp byte ptr [esi + 0x15], 0
// 00423aad  8bde                 mov ebx, esi
// 00423aaf  74b1                 je 0x423a62
// 00423ab1  5f                   pop edi
// 00423ab2  5e                   pop esi
// 00423ab3  5d                   pop ebp
// 00423ab4  5b                   pop ebx
// 00423ab5  c20400               ret 4
// library templates-boost-1_34_1/set_sp.cpp (function ?_Erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_sp.cpp
