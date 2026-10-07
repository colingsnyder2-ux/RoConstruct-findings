// roc 2007-08 00727ad0  unit: boost::thread_resource_error  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00727ad0
//
// 00727ad0  53                   push ebx
// 00727ad1  56                   push esi
// 00727ad2  57                   push edi
// 00727ad3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00727ad7  807f2500             cmp byte ptr [edi + 0x25], 0
// 00727adb  8bd9                 mov ebx, ecx
// 00727add  8bf7                 mov esi, edi
// 00727adf  7526                 jne 0x727b07
// 00727ae1  8b4608               mov eax, dword ptr [esi + 8]
// 00727ae4  50                   push eax
// 00727ae5  8bcb                 mov ecx, ebx
// 00727ae7  e8e4ffffff           call 0x727ad0
// 00727aec  8b36                 mov esi, dword ptr [esi]
// 00727aee  8d4f0c               lea ecx, [edi + 0xc]
// 00727af1  e87afcffff           call 0x727770
// 00727af6  57                   push edi
// 00727af7  e86681f0ff           call 0x62fc62
// 00727afc  83c404               add esp, 4
// 00727aff  807e2500             cmp byte ptr [esi + 0x25], 0
// 00727b03  8bfe                 mov edi, esi
// 00727b05  74da                 je 0x727ae1
// 00727b07  5f                   pop edi
// 00727b08  5e                   pop esi
// 00727b09  5b                   pop ebx
// 00727b0a  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
