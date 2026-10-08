// from server: 100% by auto
// roc 2009-06 0070b460  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070b460
//
// 0070b460  53                   push ebx
// 0070b461  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0070b465  807b1500             cmp byte ptr [ebx + 0x15], 0
// 0070b469  55                   push ebp
// 0070b46a  56                   push esi
// 0070b46b  8be9                 mov ebp, ecx
// 0070b46d  8bf3                 mov esi, ebx
// 0070b46f  7551                 jne 0x70b4c2
// 0070b471  57                   push edi
// 0070b472  8b4608               mov eax, dword ptr [esi + 8]
// 0070b475  50                   push eax
// 0070b476  8bcd                 mov ecx, ebp
// 0070b478  e8e3ffffff           call 0x70b460
// 0070b47d  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 0070b480  8b36                 mov esi, dword ptr [esi]
// 0070b482  85ff                 test edi, edi
// 0070b484  742a                 je 0x70b4b0
// 0070b486  8d4f04               lea ecx, [edi + 4]
// 0070b489  83caff               or edx, 0xffffffff
// 0070b48c  f00fc111             lock xadd dword ptr [ecx], edx
// 0070b490  751e                 jne 0x70b4b0
// 0070b492  8b07                 mov eax, dword ptr [edi]
// 0070b494  8b5004               mov edx, dword ptr [eax + 4]
// 0070b497  8bcf                 mov ecx, edi
// 0070b499  ffd2                 call edx
// 0070b49b  8d4708               lea eax, [edi + 8]
// 0070b49e  83c9ff               or ecx, 0xffffffff
// 0070b4a1  f00fc108             lock xadd dword ptr [eax], ecx
// 0070b4a5  7509                 jne 0x70b4b0
// 0070b4a7  8b17                 mov edx, dword ptr [edi]
// 0070b4a9  8b4208               mov eax, dword ptr [edx + 8]
// 0070b4ac  8bcf                 mov ecx, edi
// 0070b4ae  ffd0                 call eax
// 0070b4b0  53                   push ebx
// 0070b4b1  e87cd50000           call 0x718a32
// 0070b4b6  83c404               add esp, 4
// 0070b4b9  807e1500             cmp byte ptr [esi + 0x15], 0
// 0070b4bd  8bde                 mov ebx, esi
// 0070b4bf  74b1                 je 0x70b472
// 0070b4c1  5f                   pop edi
// 0070b4c2  5e                   pop esi
// 0070b4c3  5d                   pop ebp
// 0070b4c4  5b                   pop ebx
// 0070b4c5  c20400               ret 4
// library templates-boost-1_34_1/set_sp.cpp (function ?_Erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_sp.cpp
