// roc 2009-06 004c4aa0  unit: RBX::Network::Players::Plugin  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c4aa0
//
// 004c4aa0  56                   push esi
// 004c4aa1  8b742408             mov esi, dword ptr [esp + 8]
// 004c4aa5  85f6                 test esi, esi
// 004c4aa7  7410                 je 0x4c4ab9
// 004c4aa9  8bce                 mov ecx, esi
// 004c4aab  e8704c0100           call 0x4d9720
// 004c4ab0  56                   push esi
// 004c4ab1  e87c3f2500           call 0x718a32
// 004c4ab6  83c404               add esp, 4
// 004c4ab9  5e                   pop esi
// 004c4aba  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
