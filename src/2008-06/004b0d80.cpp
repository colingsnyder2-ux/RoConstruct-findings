// roc 2008-06 004b0d80  unit: RBX::Network::Replicator::NewInstanceItem  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b0d80
//
// 004b0d80  53                   push ebx
// 004b0d81  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004b0d85  807b1900             cmp byte ptr [ebx + 0x19], 0
// 004b0d89  55                   push ebp
// 004b0d8a  56                   push esi
// 004b0d8b  8be9                 mov ebp, ecx
// 004b0d8d  8bf3                 mov esi, ebx
// 004b0d8f  7551                 jne 0x4b0de2
// 004b0d91  57                   push edi
// 004b0d92  8b4608               mov eax, dword ptr [esi + 8]
// 004b0d95  50                   push eax
// 004b0d96  8bcd                 mov ecx, ebp
// 004b0d98  e8e3ffffff           call 0x4b0d80
// 004b0d9d  8b7b14               mov edi, dword ptr [ebx + 0x14]
// 004b0da0  8b36                 mov esi, dword ptr [esi]
// 004b0da2  85ff                 test edi, edi
// 004b0da4  742a                 je 0x4b0dd0
// 004b0da6  8d4f04               lea ecx, [edi + 4]
// 004b0da9  83caff               or edx, 0xffffffff
// 004b0dac  f00fc111             lock xadd dword ptr [ecx], edx
// 004b0db0  751e                 jne 0x4b0dd0
// 004b0db2  8b07                 mov eax, dword ptr [edi]
// 004b0db4  8b5004               mov edx, dword ptr [eax + 4]
// 004b0db7  8bcf                 mov ecx, edi
// 004b0db9  ffd2                 call edx
// 004b0dbb  8d4708               lea eax, [edi + 8]
// 004b0dbe  83c9ff               or ecx, 0xffffffff
// 004b0dc1  f00fc108             lock xadd dword ptr [eax], ecx
// 004b0dc5  7509                 jne 0x4b0dd0
// 004b0dc7  8b17                 mov edx, dword ptr [edi]
// 004b0dc9  8b4208               mov eax, dword ptr [edx + 8]
// 004b0dcc  8bcf                 mov ecx, edi
// 004b0dce  ffd0                 call eax
// 004b0dd0  53                   push ebx
// 004b0dd1  e8a4f81e00           call 0x6a067a
// 004b0dd6  83c404               add esp, 4
// 004b0dd9  807e1900             cmp byte ptr [esi + 0x19], 0
// 004b0ddd  8bde                 mov ebx, esi
// 004b0ddf  74b1                 je 0x4b0d92
// 004b0de1  5f                   pop edi
// 004b0de2  5e                   pop esi
// 004b0de3  5d                   pop ebp
// 004b0de4  5b                   pop ebx
// 004b0de5  c20400               ret 4
// library templates-boost-1_34_1/map_int_sp.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_sp.cpp
