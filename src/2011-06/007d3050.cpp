// roc 2011-06 007d3050  unit: RBX::ScoreHud  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d3050
//
// 007d3050  53                   push ebx
// 007d3051  56                   push esi
// 007d3052  57                   push edi
// 007d3053  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007d3057  807f3500             cmp byte ptr [edi + 0x35], 0
// 007d305b  8bd9                 mov ebx, ecx
// 007d305d  8bf7                 mov esi, edi
// 007d305f  7526                 jne 0x7d3087
// 007d3061  8b4608               mov eax, dword ptr [esi + 8]
// 007d3064  50                   push eax
// 007d3065  8bcb                 mov ecx, ebx
// 007d3067  e8e4ffffff           call 0x7d3050
// 007d306c  8b36                 mov esi, dword ptr [esi]
// 007d306e  8d4f0c               lea ecx, [edi + 0xc]
// 007d3071  e8aae0ffff           call 0x7d1120
// 007d3076  57                   push edi
// 007d3077  e8dc6f0300           call 0x80a058
// 007d307c  83c404               add esp, 4
// 007d307f  807e3500             cmp byte ptr [esi + 0x35], 0
// 007d3083  8bfe                 mov edi, esi
// 007d3085  74da                 je 0x7d3061
// 007d3087  5f                   pop edi
// 007d3088  5e                   pop esi
// 007d3089  5b                   pop ebx
// 007d308a  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
