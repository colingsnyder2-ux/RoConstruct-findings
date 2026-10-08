// roc 2009-12 00546720  unit: RBX::Stats::_N::?$TypedStatsItem  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00546720
//
// 00546720  56                   push esi
// 00546721  8b742408             mov esi, dword ptr [esp + 8]
// 00546725  85f6                 test esi, esi
// 00546727  7410                 je 0x546739
// 00546729  8bce                 mov ecx, esi
// 0054672b  e8e0d9ffff           call 0x544110
// 00546730  56                   push esi
// 00546731  e824d12a00           call 0x7f385a
// 00546736  83c404               add esp, 4
// 00546739  5e                   pop esi
// 0054673a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
