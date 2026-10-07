// roc 2011-06 004d97e0  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004d97e0
//
// 004d97e0  56                   push esi
// 004d97e1  8b742408             mov esi, dword ptr [esp + 8]
// 004d97e5  85f6                 test esi, esi
// 004d97e7  7410                 je 0x4d97f9
// 004d97e9  8bce                 mov ecx, esi
// 004d97eb  e800d4ffff           call 0x4d6bf0
// 004d97f0  56                   push esi
// 004d97f1  e862083300           call 0x80a058
// 004d97f6  83c404               add esp, 4
// 004d97f9  5e                   pop esi
// 004d97fa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
