// from server: 100% by auto
// roc 2007-08 005893e0  unit: VStockSound::?$FactoryProduct  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005893e0
//
// 005893e0  53                   push ebx
// 005893e1  56                   push esi
// 005893e2  57                   push edi
// 005893e3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005893e7  807f3500             cmp byte ptr [edi + 0x35], 0
// 005893eb  8bd9                 mov ebx, ecx
// 005893ed  8bf7                 mov esi, edi
// 005893ef  7526                 jne 0x589417
// 005893f1  8b4608               mov eax, dword ptr [esi + 8]
// 005893f4  50                   push eax
// 005893f5  8bcb                 mov ecx, ebx
// 005893f7  e8e4ffffff           call 0x5893e0
// 005893fc  8b36                 mov esi, dword ptr [esi]
// 005893fe  8d4f0c               lea ecx, [edi + 0xc]
// 00589401  e8eaebffff           call 0x587ff0
// 00589406  57                   push edi
// 00589407  e856680a00           call 0x62fc62
// 0058940c  83c404               add esp, 4
// 0058940f  807e3500             cmp byte ptr [esi + 0x35], 0
// 00589413  8bfe                 mov edi, esi
// 00589415  74da                 je 0x5893f1
// 00589417  5f                   pop edi
// 00589418  5e                   pop esi
// 00589419  5b                   pop ebx
// 0058941a  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
