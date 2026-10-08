// roc 2007-03 0061a700  unit: seg_00610000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061a700
//
// 0061a700  56                   push esi
// 0061a701  8bf1                 mov esi, ecx
// 0061a703  e8e8fcffff           call 0x61a3f0
// 0061a708  8bc6                 mov eax, esi
// 0061a70a  5e                   pop esi
// 0061a70b  c3                   ret 
// library rbxgs/humanoid\FallingDown.cpp (function ??Econst_iterator@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@QAEAAV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
