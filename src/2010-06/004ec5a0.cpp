// from server: 100% by auto
// roc 2010-06 004ec5a0  unit: RBX::Network::DirectPhysicsReceiver  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ec5a0
//
// 004ec5a0  53                   push ebx
// 004ec5a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004ec5a5  807b1900             cmp byte ptr [ebx + 0x19], 0
// 004ec5a9  55                   push ebp
// 004ec5aa  56                   push esi
// 004ec5ab  8be9                 mov ebp, ecx
// 004ec5ad  8bf3                 mov esi, ebx
// 004ec5af  7551                 jne 0x4ec602
// 004ec5b1  57                   push edi
// 004ec5b2  8b4608               mov eax, dword ptr [esi + 8]
// 004ec5b5  50                   push eax
// 004ec5b6  8bcd                 mov ecx, ebp
// 004ec5b8  e8e3ffffff           call 0x4ec5a0
// 004ec5bd  8b7b14               mov edi, dword ptr [ebx + 0x14]
// 004ec5c0  8b36                 mov esi, dword ptr [esi]
// 004ec5c2  85ff                 test edi, edi
// 004ec5c4  742a                 je 0x4ec5f0
// 004ec5c6  8d4f04               lea ecx, [edi + 4]
// 004ec5c9  83caff               or edx, 0xffffffff
// 004ec5cc  f00fc111             lock xadd dword ptr [ecx], edx
// 004ec5d0  751e                 jne 0x4ec5f0
// 004ec5d2  8b07                 mov eax, dword ptr [edi]
// 004ec5d4  8b5004               mov edx, dword ptr [eax + 4]
// 004ec5d7  8bcf                 mov ecx, edi
// 004ec5d9  ffd2                 call edx
// 004ec5db  8d4708               lea eax, [edi + 8]
// 004ec5de  83c9ff               or ecx, 0xffffffff
// 004ec5e1  f00fc108             lock xadd dword ptr [eax], ecx
// 004ec5e5  7509                 jne 0x4ec5f0
// 004ec5e7  8b17                 mov edx, dword ptr [edi]
// 004ec5e9  8b4208               mov eax, dword ptr [edx + 8]
// 004ec5ec  8bcf                 mov ecx, edi
// 004ec5ee  ffd0                 call eax
// 004ec5f0  53                   push ebx
// 004ec5f1  e8a4b32b00           call 0x7a799a
// 004ec5f6  83c404               add esp, 4
// 004ec5f9  807e1900             cmp byte ptr [esi + 0x19], 0
// 004ec5fd  8bde                 mov ebx, esi
// 004ec5ff  74b1                 je 0x4ec5b2
// 004ec601  5f                   pop edi
// 004ec602  5e                   pop esi
// 004ec603  5d                   pop ebp
// 004ec604  5b                   pop ebx
// 004ec605  c20400               ret 4
// library templates-boost-1_34_1/map_int_sp.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_sp.cpp
