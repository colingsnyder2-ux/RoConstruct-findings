// roc 2008-06 005b9e00  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b9e00
//
// 005b9e00  53                   push ebx
// 005b9e01  56                   push esi
// 005b9e02  57                   push edi
// 005b9e03  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005b9e07  807f3500             cmp byte ptr [edi + 0x35], 0
// 005b9e0b  8bd9                 mov ebx, ecx
// 005b9e0d  8bf7                 mov esi, edi
// 005b9e0f  7526                 jne 0x5b9e37
// 005b9e11  8b4608               mov eax, dword ptr [esi + 8]
// 005b9e14  50                   push eax
// 005b9e15  8bcb                 mov ecx, ebx
// 005b9e17  e8e4ffffff           call 0x5b9e00
// 005b9e1c  8b36                 mov esi, dword ptr [esi]
// 005b9e1e  8d4f0c               lea ecx, [edi + 0xc]
// 005b9e21  e86ad3ffff           call 0x5b7190
// 005b9e26  57                   push edi
// 005b9e27  e84e680e00           call 0x6a067a
// 005b9e2c  83c404               add esp, 4
// 005b9e2f  807e3500             cmp byte ptr [esi + 0x35], 0
// 005b9e33  8bfe                 mov edi, esi
// 005b9e35  74da                 je 0x5b9e11
// 005b9e37  5f                   pop edi
// 005b9e38  5e                   pop esi
// 005b9e39  5b                   pop ebx
// 005b9e3a  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
