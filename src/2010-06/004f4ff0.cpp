// roc 2010-06 004f4ff0  unit: RBX::Stats::_N::?$TypedStatsItem  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004f4ff0
//
// 004f4ff0  56                   push esi
// 004f4ff1  8b742408             mov esi, dword ptr [esp + 8]
// 004f4ff5  85f6                 test esi, esi
// 004f4ff7  7410                 je 0x4f5009
// 004f4ff9  8bce                 mov ecx, esi
// 004f4ffb  e8f0dcffff           call 0x4f2cf0
// 004f5000  56                   push esi
// 004f5001  e894292b00           call 0x7a799a
// 004f5006  83c404               add esp, 4
// 004f5009  5e                   pop esi
// 004f500a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
