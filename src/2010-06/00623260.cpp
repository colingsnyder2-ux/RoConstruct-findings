// roc 2010-06 00623260  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00623260
//
// 00623260  53                   push ebx
// 00623261  56                   push esi
// 00623262  57                   push edi
// 00623263  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00623267  807f3500             cmp byte ptr [edi + 0x35], 0
// 0062326b  8bd9                 mov ebx, ecx
// 0062326d  8bf7                 mov esi, edi
// 0062326f  7526                 jne 0x623297
// 00623271  8b4608               mov eax, dword ptr [esi + 8]
// 00623274  50                   push eax
// 00623275  8bcb                 mov ecx, ebx
// 00623277  e8e4ffffff           call 0x623260
// 0062327c  8b36                 mov esi, dword ptr [esi]
// 0062327e  8d4f0c               lea ecx, [edi + 0xc]
// 00623281  e80ae9ffff           call 0x621b90
// 00623286  57                   push edi
// 00623287  e80e471800           call 0x7a799a
// 0062328c  83c404               add esp, 4
// 0062328f  807e3500             cmp byte ptr [esi + 0x35], 0
// 00623293  8bfe                 mov edi, esi
// 00623295  74da                 je 0x623271
// 00623297  5f                   pop edi
// 00623298  5e                   pop esi
// 00623299  5b                   pop ebx
// 0062329a  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
