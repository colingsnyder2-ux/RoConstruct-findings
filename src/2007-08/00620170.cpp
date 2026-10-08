// from server: 100% by auto
// roc 2007-08 00620170  unit: RBX::ScoreHud  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00620170
//
// 00620170  53                   push ebx
// 00620171  56                   push esi
// 00620172  57                   push edi
// 00620173  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00620177  807f3500             cmp byte ptr [edi + 0x35], 0
// 0062017b  8bd9                 mov ebx, ecx
// 0062017d  8bf7                 mov esi, edi
// 0062017f  7526                 jne 0x6201a7
// 00620181  8b4608               mov eax, dword ptr [esi + 8]
// 00620184  50                   push eax
// 00620185  8bcb                 mov ecx, ebx
// 00620187  e8e4ffffff           call 0x620170
// 0062018c  8b36                 mov esi, dword ptr [esi]
// 0062018e  8d4f0c               lea ecx, [edi + 0xc]
// 00620191  e88adfffff           call 0x61e120
// 00620196  57                   push edi
// 00620197  e8c6fa0000           call 0x62fc62
// 0062019c  83c404               add esp, 4
// 0062019f  807e3500             cmp byte ptr [esi + 0x35], 0
// 006201a3  8bfe                 mov edi, esi
// 006201a5  74da                 je 0x620181
// 006201a7  5f                   pop edi
// 006201a8  5e                   pop esi
// 006201a9  5b                   pop ebx
// 006201aa  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
