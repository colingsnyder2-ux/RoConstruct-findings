// roc 2007-08 004214a0  unit: CSelectionTreeCtrl  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004214a0
//
// 004214a0  53                   push ebx
// 004214a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004214a5  807b1500             cmp byte ptr [ebx + 0x15], 0
// 004214a9  55                   push ebp
// 004214aa  56                   push esi
// 004214ab  8be9                 mov ebp, ecx
// 004214ad  8bf3                 mov esi, ebx
// 004214af  7551                 jne 0x421502
// 004214b1  57                   push edi
// 004214b2  8b4608               mov eax, dword ptr [esi + 8]
// 004214b5  50                   push eax
// 004214b6  8bcd                 mov ecx, ebp
// 004214b8  e8e3ffffff           call 0x4214a0
// 004214bd  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 004214c0  85ff                 test edi, edi
// 004214c2  8b36                 mov esi, dword ptr [esi]
// 004214c4  742a                 je 0x4214f0
// 004214c6  8d4f04               lea ecx, [edi + 4]
// 004214c9  83caff               or edx, 0xffffffff
// 004214cc  f00fc111             lock xadd dword ptr [ecx], edx
// 004214d0  751e                 jne 0x4214f0
// 004214d2  8b07                 mov eax, dword ptr [edi]
// 004214d4  8b5004               mov edx, dword ptr [eax + 4]
// 004214d7  8bcf                 mov ecx, edi
// 004214d9  ffd2                 call edx
// 004214db  8d4708               lea eax, [edi + 8]
// 004214de  83c9ff               or ecx, 0xffffffff
// 004214e1  f00fc108             lock xadd dword ptr [eax], ecx
// 004214e5  7509                 jne 0x4214f0
// 004214e7  8b17                 mov edx, dword ptr [edi]
// 004214e9  8b4208               mov eax, dword ptr [edx + 8]
// 004214ec  8bcf                 mov ecx, edi
// 004214ee  ffd0                 call eax
// 004214f0  53                   push ebx
// 004214f1  e86ce72000           call 0x62fc62
// 004214f6  83c404               add esp, 4
// 004214f9  807e1500             cmp byte ptr [esi + 0x15], 0
// 004214fd  8bde                 mov ebx, esi
// 004214ff  74b1                 je 0x4214b2
// 00421501  5f                   pop edi
// 00421502  5e                   pop esi
// 00421503  5d                   pop ebp
// 00421504  5b                   pop ebx
// 00421505  c20400               ret 4
// library templates-boost-1_34_1/set_sp.cpp (function ?_Erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_sp.cpp
