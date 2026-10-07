// roc 2009-06 004ce4e0  unit: RBX::Network::Players::Plugin  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ce4e0
//
// 004ce4e0  56                   push esi
// 004ce4e1  8b742408             mov esi, dword ptr [esp + 8]
// 004ce4e5  85f6                 test esi, esi
// 004ce4e7  7410                 je 0x4ce4f9
// 004ce4e9  8bce                 mov ecx, esi
// 004ce4eb  e840eaffff           call 0x4ccf30
// 004ce4f0  56                   push esi
// 004ce4f1  e83ca52400           call 0x718a32
// 004ce4f6  83c404               add esp, 4
// 004ce4f9  5e                   pop esi
// 004ce4fa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
