// from server: 100% by auto
// roc 2008-06 00499eb0  unit: RBX::Network::VPlayers::?$SignalDesc  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499eb0
//
// 00499eb0  56                   push esi
// 00499eb1  8b742408             mov esi, dword ptr [esp + 8]
// 00499eb5  85f6                 test esi, esi
// 00499eb7  7410                 je 0x499ec9
// 00499eb9  8bce                 mov ecx, esi
// 00499ebb  e820911000           call 0x5a2fe0
// 00499ec0  56                   push esi
// 00499ec1  e8b4672000           call 0x6a067a
// 00499ec6  83c404               add esp, 4
// 00499ec9  5e                   pop esi
// 00499eca  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
