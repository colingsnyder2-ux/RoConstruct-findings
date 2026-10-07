// roc 2012-06 00694670  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00694670
//
// 00694670  53                   push ebx
// 00694671  56                   push esi
// 00694672  57                   push edi
// 00694673  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00694677  807f3500             cmp byte ptr [edi + 0x35], 0
// 0069467b  8bd9                 mov ebx, ecx
// 0069467d  8bf7                 mov esi, edi
// 0069467f  7526                 jne 0x6946a7
// 00694681  8b4608               mov eax, dword ptr [esi + 8]
// 00694684  50                   push eax
// 00694685  8bcb                 mov ecx, ebx
// 00694687  e8e4ffffff           call 0x694670
// 0069468c  8b36                 mov esi, dword ptr [esi]
// 0069468e  8d4f0c               lea ecx, [edi + 0xc]
// 00694691  e8dae8ffff           call 0x692f70
// 00694696  57                   push edi
// 00694697  e878da2e00           call 0x982114
// 0069469c  83c404               add esp, 4
// 0069469f  807e3500             cmp byte ptr [esi + 0x35], 0
// 006946a3  8bfe                 mov edi, esi
// 006946a5  74da                 je 0x694681
// 006946a7  5f                   pop edi
// 006946a8  5e                   pop esi
// 006946a9  5b                   pop ebx
// 006946aa  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
