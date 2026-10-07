// roc 2011-06 005a0660  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a0660
//
// 005a0660  53                   push ebx
// 005a0661  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005a0665  807b1900             cmp byte ptr [ebx + 0x19], 0
// 005a0669  55                   push ebp
// 005a066a  56                   push esi
// 005a066b  8be9                 mov ebp, ecx
// 005a066d  8bf3                 mov esi, ebx
// 005a066f  7551                 jne 0x5a06c2
// 005a0671  57                   push edi
// 005a0672  8b4608               mov eax, dword ptr [esi + 8]
// 005a0675  50                   push eax
// 005a0676  8bcd                 mov ecx, ebp
// 005a0678  e8e3ffffff           call 0x5a0660
// 005a067d  8b7b14               mov edi, dword ptr [ebx + 0x14]
// 005a0680  8b36                 mov esi, dword ptr [esi]
// 005a0682  85ff                 test edi, edi
// 005a0684  742a                 je 0x5a06b0
// 005a0686  8d4f04               lea ecx, [edi + 4]
// 005a0689  83caff               or edx, 0xffffffff
// 005a068c  f00fc111             lock xadd dword ptr [ecx], edx
// 005a0690  751e                 jne 0x5a06b0
// 005a0692  8b07                 mov eax, dword ptr [edi]
// 005a0694  8b5004               mov edx, dword ptr [eax + 4]
// 005a0697  8bcf                 mov ecx, edi
// 005a0699  ffd2                 call edx
// 005a069b  8d4708               lea eax, [edi + 8]
// 005a069e  83c9ff               or ecx, 0xffffffff
// 005a06a1  f00fc108             lock xadd dword ptr [eax], ecx
// 005a06a5  7509                 jne 0x5a06b0
// 005a06a7  8b17                 mov edx, dword ptr [edi]
// 005a06a9  8b4208               mov eax, dword ptr [edx + 8]
// 005a06ac  8bcf                 mov ecx, edi
// 005a06ae  ffd0                 call eax
// 005a06b0  53                   push ebx
// 005a06b1  e8a2992600           call 0x80a058
// 005a06b6  83c404               add esp, 4
// 005a06b9  807e1900             cmp byte ptr [esi + 0x19], 0
// 005a06bd  8bde                 mov ebx, esi
// 005a06bf  74b1                 je 0x5a0672
// 005a06c1  5f                   pop edi
// 005a06c2  5e                   pop esi
// 005a06c3  5d                   pop ebp
// 005a06c4  5b                   pop ebx
// 005a06c5  c20400               ret 4
// library templates-boost-1_34_1/map_int_sp.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_sp.cpp
