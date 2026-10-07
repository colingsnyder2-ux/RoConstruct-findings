// roc 2012-06 009759e0  unit: RBX::ExclusiveArbiter  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009759e0
//
// 009759e0  56                   push esi
// 009759e1  8b742408             mov esi, dword ptr [esp + 8]
// 009759e5  85f6                 test esi, esi
// 009759e7  7410                 je 0x9759f9
// 009759e9  8bce                 mov ecx, esi
// 009759eb  e870630000           call 0x97bd60
// 009759f0  56                   push esi
// 009759f1  e81ec70000           call 0x982114
// 009759f6  83c404               add esp, 4
// 009759f9  5e                   pop esi
// 009759fa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
