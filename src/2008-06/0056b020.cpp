// roc 2008-06 0056b020  unit: RBX::VInstance::?$NonFactoryProduct  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056b020
//
// 0056b020  53                   push ebx
// 0056b021  56                   push esi
// 0056b022  57                   push edi
// 0056b023  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056b027  807f3500             cmp byte ptr [edi + 0x35], 0
// 0056b02b  8bd9                 mov ebx, ecx
// 0056b02d  8bf7                 mov esi, edi
// 0056b02f  7526                 jne 0x56b057
// 0056b031  8b4608               mov eax, dword ptr [esi + 8]
// 0056b034  50                   push eax
// 0056b035  8bcb                 mov ecx, ebx
// 0056b037  e8e4ffffff           call 0x56b020
// 0056b03c  8b36                 mov esi, dword ptr [esi]
// 0056b03e  8d4f0c               lea ecx, [edi + 0xc]
// 0056b041  e87afcffff           call 0x56acc0
// 0056b046  57                   push edi
// 0056b047  e82e561300           call 0x6a067a
// 0056b04c  83c404               add esp, 4
// 0056b04f  807e3500             cmp byte ptr [esi + 0x35], 0
// 0056b053  8bfe                 mov edi, esi
// 0056b055  74da                 je 0x56b031
// 0056b057  5f                   pop edi
// 0056b058  5e                   pop esi
// 0056b059  5b                   pop ebx
// 0056b05a  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
