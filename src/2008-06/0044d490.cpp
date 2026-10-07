// roc 2008-06 0044d490  unit: CRobloxApp  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044d490
//
// 0044d490  56                   push esi
// 0044d491  8b742408             mov esi, dword ptr [esp + 8]
// 0044d495  85f6                 test esi, esi
// 0044d497  7410                 je 0x44d4a9
// 0044d499  8bce                 mov ecx, esi
// 0044d49b  e8b0fbffff           call 0x44d050
// 0044d4a0  56                   push esi
// 0044d4a1  e8d4312500           call 0x6a067a
// 0044d4a6  83c404               add esp, 4
// 0044d4a9  5e                   pop esi
// 0044d4aa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
