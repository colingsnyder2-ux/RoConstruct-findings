// from server: 100% by auto
// roc 2009-06 004d9390  unit: RBX::Network::VGuidRegistryService::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d9390
//
// 004d9390  56                   push esi
// 004d9391  8b742408             mov esi, dword ptr [esp + 8]
// 004d9395  85f6                 test esi, esi
// 004d9397  7410                 je 0x4d93a9
// 004d9399  8bce                 mov ecx, esi
// 004d939b  e8c0feffff           call 0x4d9260
// 004d93a0  56                   push esi
// 004d93a1  e88cf62300           call 0x718a32
// 004d93a6  83c404               add esp, 4
// 004d93a9  5e                   pop esi
// 004d93aa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
