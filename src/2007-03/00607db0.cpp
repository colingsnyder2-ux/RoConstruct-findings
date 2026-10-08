// roc 2007-03 00607db0  unit: seg_00600000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00607db0
//
// 00607db0  8b442404             mov eax, dword ptr [esp + 4]
// 00607db4  8b08                 mov ecx, dword ptr [eax]
// 00607db6  80793500             cmp byte ptr [ecx + 0x35], 0
// 00607dba  750e                 jne 0x607dca
// 00607dbc  8d642400             lea esp, [esp]
// 00607dc0  8bc1                 mov eax, ecx
// 00607dc2  8b08                 mov ecx, dword ptr [eax]
// 00607dc4  80793500             cmp byte ptr [ecx + 0x35], 0
// 00607dc8  74f6                 je 0x607dc0
// 00607dca  c3                   ret 
// library rbxgs/humanoid\FallingDown.cpp (function ?_Min@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
