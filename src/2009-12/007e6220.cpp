// roc 2009-12 007e6220  unit: RBX::ExclusiveArbiter  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e6220
//
// 007e6220  56                   push esi
// 007e6221  8b742408             mov esi, dword ptr [esp + 8]
// 007e6225  85f6                 test esi, esi
// 007e6227  7410                 je 0x7e6239
// 007e6229  8bce                 mov ecx, esi
// 007e622b  e8b0160000           call 0x7e78e0
// 007e6230  56                   push esi
// 007e6231  e824d60000           call 0x7f385a
// 007e6236  83c404               add esp, 4
// 007e6239  5e                   pop esi
// 007e623a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
