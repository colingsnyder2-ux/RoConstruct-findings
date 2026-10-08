// from server: 100% by auto
// roc 2008-06 005767e0  unit: RBX::DataModel  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005767e0
//
// 005767e0  56                   push esi
// 005767e1  8b742408             mov esi, dword ptr [esp + 8]
// 005767e5  85f6                 test esi, esi
// 005767e7  7410                 je 0x5767f9
// 005767e9  8bce                 mov ecx, esi
// 005767eb  e8c0e40100           call 0x594cb0
// 005767f0  56                   push esi
// 005767f1  e8849e1200           call 0x6a067a
// 005767f6  83c404               add esp, 4
// 005767f9  5e                   pop esi
// 005767fa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
