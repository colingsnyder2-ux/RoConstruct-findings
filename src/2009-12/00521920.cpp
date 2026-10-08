// roc 2009-12 00521920  unit: RBX::Network::Players::Plugin  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00521920
//
// 00521920  56                   push esi
// 00521921  8b742408             mov esi, dword ptr [esp + 8]
// 00521925  85f6                 test esi, esi
// 00521927  7410                 je 0x521939
// 00521929  8bce                 mov ecx, esi
// 0052192b  e810e3ffff           call 0x51fc40
// 00521930  56                   push esi
// 00521931  e8241f2d00           call 0x7f385a
// 00521936  83c404               add esp, 4
// 00521939  5e                   pop esi
// 0052193a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
