// from server: 100% by auto
// roc 2012-06 005843c0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::Vslot::?$callable  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005843c0
//
// 005843c0  56                   push esi
// 005843c1  8b742408             mov esi, dword ptr [esp + 8]
// 005843c5  85f6                 test esi, esi
// 005843c7  7410                 je 0x5843d9
// 005843c9  8bce                 mov ecx, esi
// 005843cb  e800dfffff           call 0x5822d0
// 005843d0  56                   push esi
// 005843d1  e83edd3f00           call 0x982114
// 005843d6  83c404               add esp, 4
// 005843d9  5e                   pop esi
// 005843da  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
