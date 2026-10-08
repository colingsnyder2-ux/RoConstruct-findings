// roc 2007-03 007276d0  unit: seg_00720000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007276d0
//
// 007276d0  8b442404             mov eax, dword ptr [esp + 4]
// 007276d4  8b08                 mov ecx, dword ptr [eax]
// 007276d6  80792500             cmp byte ptr [ecx + 0x25], 0
// 007276da  750e                 jne 0x7276ea
// 007276dc  8d642400             lea esp, [esp]
// 007276e0  8bc1                 mov eax, ecx
// 007276e2  8b08                 mov ecx, dword ptr [eax]
// 007276e4  80792500             cmp byte ptr [ecx + 0x25], 0
// 007276e8  74f6                 je 0x7276e0
// 007276ea  c3                   ret 
// library rbxgs/humanoid\FallingDown.cpp (function ?_Min@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
