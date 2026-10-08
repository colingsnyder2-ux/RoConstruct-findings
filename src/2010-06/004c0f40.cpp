// from server: 100% by auto
// roc 2010-06 004c0f40  unit: RBX::Network::Players::W4ChatOption::?$holder  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c0f40
//
// 004c0f40  56                   push esi
// 004c0f41  8b742408             mov esi, dword ptr [esp + 8]
// 004c0f45  85f6                 test esi, esi
// 004c0f47  7410                 je 0x4c0f59
// 004c0f49  8bce                 mov ecx, esi
// 004c0f4b  e8e0bf0100           call 0x4dcf30
// 004c0f50  56                   push esi
// 004c0f51  e8446a2e00           call 0x7a799a
// 004c0f56  83c404               add esp, 4
// 004c0f59  5e                   pop esi
// 004c0f5a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
