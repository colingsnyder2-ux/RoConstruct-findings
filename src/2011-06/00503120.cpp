// from server: 100% by auto
// roc 2011-06 00503120  unit: RBX::Stats::_K::?$TypedStatsItem  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00503120
//
// 00503120  56                   push esi
// 00503121  8b742408             mov esi, dword ptr [esp + 8]
// 00503125  85f6                 test esi, esi
// 00503127  7410                 je 0x503139
// 00503129  8bce                 mov ecx, esi
// 0050312b  e8d0e5ffff           call 0x501700
// 00503130  56                   push esi
// 00503131  e8226f3000           call 0x80a058
// 00503136  83c404               add esp, 4
// 00503139  5e                   pop esi
// 0050313a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
