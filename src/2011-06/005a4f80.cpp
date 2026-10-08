// from server: 100% by auto
// roc 2011-06 005a4f80  unit: SoundServiceStatsItem  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a4f80
//
// 005a4f80  56                   push esi
// 005a4f81  8b742408             mov esi, dword ptr [esp + 8]
// 005a4f85  85f6                 test esi, esi
// 005a4f87  7410                 je 0x5a4f99
// 005a4f89  8bce                 mov ecx, esi
// 005a4f8b  e850f9ffff           call 0x5a48e0
// 005a4f90  56                   push esi
// 005a4f91  e8c2502600           call 0x80a058
// 005a4f96  83c404               add esp, 4
// 005a4f99  5e                   pop esi
// 005a4f9a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
