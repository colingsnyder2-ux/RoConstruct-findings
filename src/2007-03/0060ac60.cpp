// roc 2007-03 0060ac60  unit: seg_00600000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0060ac60
//
// 0060ac60  53                   push ebx
// 0060ac61  56                   push esi
// 0060ac62  57                   push edi
// 0060ac63  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0060ac67  807f3500             cmp byte ptr [edi + 0x35], 0
// 0060ac6b  8bd9                 mov ebx, ecx
// 0060ac6d  8bf7                 mov esi, edi
// 0060ac6f  7526                 jne 0x60ac97
// 0060ac71  8b4608               mov eax, dword ptr [esi + 8]
// 0060ac74  50                   push eax
// 0060ac75  8bcb                 mov ecx, ebx
// 0060ac77  e8e4ffffff           call 0x60ac60
// 0060ac7c  8b36                 mov esi, dword ptr [esi]
// 0060ac7e  8d4f0c               lea ecx, [edi + 0xc]
// 0060ac81  e87adfffff           call 0x608c00
// 0060ac86  57                   push edi
// 0060ac87  e864340100           call 0x61e0f0
// 0060ac8c  83c404               add esp, 4
// 0060ac8f  807e3500             cmp byte ptr [esi + 0x35], 0
// 0060ac93  8bfe                 mov edi, esi
// 0060ac95  74da                 je 0x60ac71
// 0060ac97  5f                   pop edi
// 0060ac98  5e                   pop esi
// 0060ac99  5b                   pop ebx
// 0060ac9a  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
