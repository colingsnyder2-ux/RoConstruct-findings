// from server: 100% by auto
// roc 2009-06 004ecd90  unit: RBX::Stats::_N::?$TypedStatsItem  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ecd90
//
// 004ecd90  56                   push esi
// 004ecd91  8b742408             mov esi, dword ptr [esp + 8]
// 004ecd95  85f6                 test esi, esi
// 004ecd97  7410                 je 0x4ecda9
// 004ecd99  8bce                 mov ecx, esi
// 004ecd9b  e870ecffff           call 0x4eba10
// 004ecda0  56                   push esi
// 004ecda1  e88cbc2200           call 0x718a32
// 004ecda6  83c404               add esp, 4
// 004ecda9  5e                   pop esi
// 004ecdaa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
