// roc 2008-06 004b5200  unit: RBX::Stats::_N::?$TypedStatsItem  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b5200
//
// 004b5200  56                   push esi
// 004b5201  8b742408             mov esi, dword ptr [esp + 8]
// 004b5205  85f6                 test esi, esi
// 004b5207  7410                 je 0x4b5219
// 004b5209  8bce                 mov ecx, esi
// 004b520b  e860ebffff           call 0x4b3d70
// 004b5210  56                   push esi
// 004b5211  e864b41e00           call 0x6a067a
// 004b5216  83c404               add esp, 4
// 004b5219  5e                   pop esi
// 004b521a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
