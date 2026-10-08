// from server: 100% by auto
// roc 2011-06 004ec510  unit: RBX::Network::VGuidRegistryService::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ec510
//
// 004ec510  56                   push esi
// 004ec511  8b742408             mov esi, dword ptr [esp + 8]
// 004ec515  85f6                 test esi, esi
// 004ec517  7410                 je 0x4ec529
// 004ec519  8bce                 mov ecx, esi
// 004ec51b  e8f0feffff           call 0x4ec410
// 004ec520  56                   push esi
// 004ec521  e832db3100           call 0x80a058
// 004ec526  83c404               add esp, 4
// 004ec529  5e                   pop esi
// 004ec52a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
