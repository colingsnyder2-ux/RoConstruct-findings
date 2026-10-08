// from server: 100% by auto
// roc 2011-06 004677d0  unit: TimerWindow  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004677d0
//
// 004677d0  56                   push esi
// 004677d1  8b742408             mov esi, dword ptr [esp + 8]
// 004677d5  85f6                 test esi, esi
// 004677d7  7410                 je 0x4677e9
// 004677d9  8bce                 mov ecx, esi
// 004677db  e890ebffff           call 0x466370
// 004677e0  56                   push esi
// 004677e1  e872283a00           call 0x80a058
// 004677e6  83c404               add esp, 4
// 004677e9  5e                   pop esi
// 004677ea  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
