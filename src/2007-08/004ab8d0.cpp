// from server: 100% by auto
// roc 2007-08 004ab8d0  unit: RBX::Network::Peer  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ab8d0
//
// 004ab8d0  53                   push ebx
// 004ab8d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004ab8d5  807b1900             cmp byte ptr [ebx + 0x19], 0
// 004ab8d9  55                   push ebp
// 004ab8da  56                   push esi
// 004ab8db  8be9                 mov ebp, ecx
// 004ab8dd  8bf3                 mov esi, ebx
// 004ab8df  7551                 jne 0x4ab932
// 004ab8e1  57                   push edi
// 004ab8e2  8b4608               mov eax, dword ptr [esi + 8]
// 004ab8e5  50                   push eax
// 004ab8e6  8bcd                 mov ecx, ebp
// 004ab8e8  e8e3ffffff           call 0x4ab8d0
// 004ab8ed  8b7b14               mov edi, dword ptr [ebx + 0x14]
// 004ab8f0  85ff                 test edi, edi
// 004ab8f2  8b36                 mov esi, dword ptr [esi]
// 004ab8f4  742a                 je 0x4ab920
// 004ab8f6  8d4f04               lea ecx, [edi + 4]
// 004ab8f9  83caff               or edx, 0xffffffff
// 004ab8fc  f00fc111             lock xadd dword ptr [ecx], edx
// 004ab900  751e                 jne 0x4ab920
// 004ab902  8b07                 mov eax, dword ptr [edi]
// 004ab904  8b5004               mov edx, dword ptr [eax + 4]
// 004ab907  8bcf                 mov ecx, edi
// 004ab909  ffd2                 call edx
// 004ab90b  8d4708               lea eax, [edi + 8]
// 004ab90e  83c9ff               or ecx, 0xffffffff
// 004ab911  f00fc108             lock xadd dword ptr [eax], ecx
// 004ab915  7509                 jne 0x4ab920
// 004ab917  8b17                 mov edx, dword ptr [edi]
// 004ab919  8b4208               mov eax, dword ptr [edx + 8]
// 004ab91c  8bcf                 mov ecx, edi
// 004ab91e  ffd0                 call eax
// 004ab920  53                   push ebx
// 004ab921  e83c431800           call 0x62fc62
// 004ab926  83c404               add esp, 4
// 004ab929  807e1900             cmp byte ptr [esi + 0x19], 0
// 004ab92d  8bde                 mov ebx, esi
// 004ab92f  74b1                 je 0x4ab8e2
// 004ab931  5f                   pop edi
// 004ab932  5e                   pop esi
// 004ab933  5d                   pop ebp
// 004ab934  5b                   pop ebx
// 004ab935  c20400               ret 4
// library templates-boost-1_34_1/map_int_sp.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_sp.cpp
