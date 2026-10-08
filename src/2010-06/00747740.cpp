// from server: 100% by auto
// roc 2010-06 00747740  unit: RBX::Clump  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00747740
//
// 00747740  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00747744  83c108               add ecx, 8
// 00747747  e9f4ad0800           jmp 0x7d2540
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??$_Destroy@U_Node@?$_List_nod@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@YAXPAU_Node@?$_List_nod@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
