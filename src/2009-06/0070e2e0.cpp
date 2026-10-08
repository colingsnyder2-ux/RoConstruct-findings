// from server: 100% by auto
// roc 2009-06 0070e2e0  unit: RBX::Tasks::Barrier  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070e2e0
//
// 0070e2e0  56                   push esi
// 0070e2e1  8b742408             mov esi, dword ptr [esp + 8]
// 0070e2e5  85f6                 test esi, esi
// 0070e2e7  7410                 je 0x70e2f9
// 0070e2e9  8bce                 mov ecx, esi
// 0070e2eb  e8f0feffff           call 0x70e1e0
// 0070e2f0  56                   push esi
// 0070e2f1  e83ca70000           call 0x718a32
// 0070e2f6  83c404               add esp, 4
// 0070e2f9  5e                   pop esi
// 0070e2fa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
