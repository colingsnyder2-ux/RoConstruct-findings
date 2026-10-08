// from server: 100% by auto
// roc 2009-06 00645140  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00645140
//
// 00645140  53                   push ebx
// 00645141  56                   push esi
// 00645142  57                   push edi
// 00645143  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00645147  807f3500             cmp byte ptr [edi + 0x35], 0
// 0064514b  8bd9                 mov ebx, ecx
// 0064514d  8bf7                 mov esi, edi
// 0064514f  7526                 jne 0x645177
// 00645151  8b4608               mov eax, dword ptr [esi + 8]
// 00645154  50                   push eax
// 00645155  8bcb                 mov ecx, ebx
// 00645157  e8e4ffffff           call 0x645140
// 0064515c  8b36                 mov esi, dword ptr [esi]
// 0064515e  8d4f0c               lea ecx, [edi + 0xc]
// 00645161  e89ae8ffff           call 0x643a00
// 00645166  57                   push edi
// 00645167  e8c6380d00           call 0x718a32
// 0064516c  83c404               add esp, 4
// 0064516f  807e3500             cmp byte ptr [esi + 0x35], 0
// 00645173  8bfe                 mov edi, esi
// 00645175  74da                 je 0x645151
// 00645177  5f                   pop edi
// 00645178  5e                   pop esi
// 00645179  5b                   pop ebx
// 0064517a  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
