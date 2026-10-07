// roc 2011-06 0079b060  unit: RBX::Clump  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0079b060
//
// 0079b060  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0079b064  83c108               add ecx, 8
// 0079b067  e994301400           jmp 0x8de100
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??$_Destroy@U_Node@?$_List_nod@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@YAXPAU_Node@?$_List_nod@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
