// from server: 100% by auto
// roc 2010-06 004cf630  unit: RBX::Network::Players::Plugin  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004cf630
//
// 004cf630  56                   push esi
// 004cf631  8b742408             mov esi, dword ptr [esp + 8]
// 004cf635  85f6                 test esi, esi
// 004cf637  7410                 je 0x4cf649
// 004cf639  8bce                 mov ecx, esi
// 004cf63b  e860e4ffff           call 0x4cdaa0
// 004cf640  56                   push esi
// 004cf641  e854832d00           call 0x7a799a
// 004cf646  83c404               add esp, 4
// 004cf649  5e                   pop esi
// 004cf64a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
