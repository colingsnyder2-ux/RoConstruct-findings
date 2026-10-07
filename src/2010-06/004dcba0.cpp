// roc 2010-06 004dcba0  unit: RBX::Network::VGuidRegistryService::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004dcba0
//
// 004dcba0  56                   push esi
// 004dcba1  8b742408             mov esi, dword ptr [esp + 8]
// 004dcba5  85f6                 test esi, esi
// 004dcba7  7410                 je 0x4dcbb9
// 004dcba9  8bce                 mov ecx, esi
// 004dcbab  e8c0feffff           call 0x4dca70
// 004dcbb0  56                   push esi
// 004dcbb1  e8e4ad2c00           call 0x7a799a
// 004dcbb6  83c404               add esp, 4
// 004dcbb9  5e                   pop esi
// 004dcbba  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
