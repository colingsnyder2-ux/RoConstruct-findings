// from server: 100% by auto
// roc 2009-06 004e7730  unit: RBX::Network::DirectPhysicsReceiver  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e7730
//
// 004e7730  53                   push ebx
// 004e7731  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004e7735  807b1900             cmp byte ptr [ebx + 0x19], 0
// 004e7739  55                   push ebp
// 004e773a  56                   push esi
// 004e773b  8be9                 mov ebp, ecx
// 004e773d  8bf3                 mov esi, ebx
// 004e773f  7551                 jne 0x4e7792
// 004e7741  57                   push edi
// 004e7742  8b4608               mov eax, dword ptr [esi + 8]
// 004e7745  50                   push eax
// 004e7746  8bcd                 mov ecx, ebp
// 004e7748  e8e3ffffff           call 0x4e7730
// 004e774d  8b7b14               mov edi, dword ptr [ebx + 0x14]
// 004e7750  8b36                 mov esi, dword ptr [esi]
// 004e7752  85ff                 test edi, edi
// 004e7754  742a                 je 0x4e7780
// 004e7756  8d4f04               lea ecx, [edi + 4]
// 004e7759  83caff               or edx, 0xffffffff
// 004e775c  f00fc111             lock xadd dword ptr [ecx], edx
// 004e7760  751e                 jne 0x4e7780
// 004e7762  8b07                 mov eax, dword ptr [edi]
// 004e7764  8b5004               mov edx, dword ptr [eax + 4]
// 004e7767  8bcf                 mov ecx, edi
// 004e7769  ffd2                 call edx
// 004e776b  8d4708               lea eax, [edi + 8]
// 004e776e  83c9ff               or ecx, 0xffffffff
// 004e7771  f00fc108             lock xadd dword ptr [eax], ecx
// 004e7775  7509                 jne 0x4e7780
// 004e7777  8b17                 mov edx, dword ptr [edi]
// 004e7779  8b4208               mov eax, dword ptr [edx + 8]
// 004e777c  8bcf                 mov ecx, edi
// 004e777e  ffd0                 call eax
// 004e7780  53                   push ebx
// 004e7781  e8ac122300           call 0x718a32
// 004e7786  83c404               add esp, 4
// 004e7789  807e1900             cmp byte ptr [esi + 0x19], 0
// 004e778d  8bde                 mov ebx, esi
// 004e778f  74b1                 je 0x4e7742
// 004e7791  5f                   pop edi
// 004e7792  5e                   pop esi
// 004e7793  5d                   pop ebp
// 004e7794  5b                   pop ebx
// 004e7795  c20400               ret 4
// library templates-boost-1_34_1/map_int_sp.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_sp.cpp
