// roc 2011-06 005a06d0  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a06d0
//
// 005a06d0  53                   push ebx
// 005a06d1  56                   push esi
// 005a06d2  57                   push edi
// 005a06d3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005a06d7  807f3500             cmp byte ptr [edi + 0x35], 0
// 005a06db  8bd9                 mov ebx, ecx
// 005a06dd  8bf7                 mov esi, edi
// 005a06df  7526                 jne 0x5a0707
// 005a06e1  8b4608               mov eax, dword ptr [esi + 8]
// 005a06e4  50                   push eax
// 005a06e5  8bcb                 mov ecx, ebx
// 005a06e7  e8e4ffffff           call 0x5a06d0
// 005a06ec  8b36                 mov esi, dword ptr [esi]
// 005a06ee  8d4f0c               lea ecx, [edi + 0xc]
// 005a06f1  e81ae6ffff           call 0x59ed10
// 005a06f6  57                   push edi
// 005a06f7  e85c992600           call 0x80a058
// 005a06fc  83c404               add esp, 4
// 005a06ff  807e3500             cmp byte ptr [esi + 0x35], 0
// 005a0703  8bfe                 mov edi, esi
// 005a0705  74da                 je 0x5a06e1
// 005a0707  5f                   pop edi
// 005a0708  5e                   pop esi
// 005a0709  5b                   pop ebx
// 005a070a  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
