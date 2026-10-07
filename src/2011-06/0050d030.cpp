// roc 2011-06 0050d030  unit: RBX::Network::VClient::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050d030
//
// 0050d030  56                   push esi
// 0050d031  8b742408             mov esi, dword ptr [esp + 8]
// 0050d035  85f6                 test esi, esi
// 0050d037  7410                 je 0x50d049
// 0050d039  8bce                 mov ecx, esi
// 0050d03b  e8c00ffeff           call 0x4ee000
// 0050d040  56                   push esi
// 0050d041  e812d02f00           call 0x80a058
// 0050d046  83c404               add esp, 4
// 0050d049  5e                   pop esi
// 0050d04a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
