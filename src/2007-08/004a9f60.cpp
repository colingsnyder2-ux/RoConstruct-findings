// from server: 100% by auto
// roc 2007-08 004a9f60  unit: RBX::VInstance::?$NonFactoryProduct  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a9f60
//
// 004a9f60  53                   push ebx
// 004a9f61  56                   push esi
// 004a9f62  57                   push edi
// 004a9f63  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a9f67  807f2500             cmp byte ptr [edi + 0x25], 0
// 004a9f6b  8bd9                 mov ebx, ecx
// 004a9f6d  8bf7                 mov esi, edi
// 004a9f6f  7526                 jne 0x4a9f97
// 004a9f71  8b4608               mov eax, dword ptr [esi + 8]
// 004a9f74  50                   push eax
// 004a9f75  8bcb                 mov ecx, ebx
// 004a9f77  e8e4ffffff           call 0x4a9f60
// 004a9f7c  8b36                 mov esi, dword ptr [esi]
// 004a9f7e  8d4f0c               lea ecx, [edi + 0xc]
// 004a9f81  e81acbffff           call 0x4a6aa0
// 004a9f86  57                   push edi
// 004a9f87  e8d65c1800           call 0x62fc62
// 004a9f8c  83c404               add esp, 4
// 004a9f8f  807e2500             cmp byte ptr [esi + 0x25], 0
// 004a9f93  8bfe                 mov edi, esi
// 004a9f95  74da                 je 0x4a9f71
// 004a9f97  5f                   pop edi
// 004a9f98  5e                   pop esi
// 004a9f99  5b                   pop ebx
// 004a9f9a  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
