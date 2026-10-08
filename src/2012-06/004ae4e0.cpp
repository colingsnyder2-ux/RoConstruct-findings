// from server: 100% by auto
// roc 2012-06 004ae4e0  unit: VerbBinderJob  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004ae4e0
//
// 004ae4e0  53                   push ebx
// 004ae4e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004ae4e5  807b1900             cmp byte ptr [ebx + 0x19], 0
// 004ae4e9  55                   push ebp
// 004ae4ea  56                   push esi
// 004ae4eb  8be9                 mov ebp, ecx
// 004ae4ed  8bf3                 mov esi, ebx
// 004ae4ef  7551                 jne 0x4ae542
// 004ae4f1  57                   push edi
// 004ae4f2  8b4608               mov eax, dword ptr [esi + 8]
// 004ae4f5  50                   push eax
// 004ae4f6  8bcd                 mov ecx, ebp
// 004ae4f8  e8e3ffffff           call 0x4ae4e0
// 004ae4fd  8b7b14               mov edi, dword ptr [ebx + 0x14]
// 004ae500  8b36                 mov esi, dword ptr [esi]
// 004ae502  85ff                 test edi, edi
// 004ae504  742a                 je 0x4ae530
// 004ae506  8d4f04               lea ecx, [edi + 4]
// 004ae509  83caff               or edx, 0xffffffff
// 004ae50c  f00fc111             lock xadd dword ptr [ecx], edx
// 004ae510  751e                 jne 0x4ae530
// 004ae512  8b07                 mov eax, dword ptr [edi]
// 004ae514  8b5004               mov edx, dword ptr [eax + 4]
// 004ae517  8bcf                 mov ecx, edi
// 004ae519  ffd2                 call edx
// 004ae51b  8d4708               lea eax, [edi + 8]
// 004ae51e  83c9ff               or ecx, 0xffffffff
// 004ae521  f00fc108             lock xadd dword ptr [eax], ecx
// 004ae525  7509                 jne 0x4ae530
// 004ae527  8b17                 mov edx, dword ptr [edi]
// 004ae529  8b4208               mov eax, dword ptr [edx + 8]
// 004ae52c  8bcf                 mov ecx, edi
// 004ae52e  ffd0                 call eax
// 004ae530  53                   push ebx
// 004ae531  e8de3b4d00           call 0x982114
// 004ae536  83c404               add esp, 4
// 004ae539  807e1900             cmp byte ptr [esi + 0x19], 0
// 004ae53d  8bde                 mov ebx, esi
// 004ae53f  74b1                 je 0x4ae4f2
// 004ae541  5f                   pop edi
// 004ae542  5e                   pop esi
// 004ae543  5d                   pop ebp
// 004ae544  5b                   pop ebx
// 004ae545  c20400               ret 4
// library templates-boost-1_34_1/map_int_sp.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_sp.cpp
