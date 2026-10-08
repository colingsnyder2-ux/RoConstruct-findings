// roc 2009-12 00546700  unit: RBX::Stats::_N::?$TypedStatsItem  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00546700
//
// 00546700  56                   push esi
// 00546701  8b742408             mov esi, dword ptr [esp + 8]
// 00546705  85f6                 test esi, esi
// 00546707  7410                 je 0x546719
// 00546709  8bce                 mov ecx, esi
// 0054670b  e860ddffff           call 0x544470
// 00546710  56                   push esi
// 00546711  e844d12a00           call 0x7f385a
// 00546716  83c404               add esp, 4
// 00546719  5e                   pop esi
// 0054671a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
