// roc 2012-06 0058df20  unit: RBX::Network::VClient::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0058df20
//
// 0058df20  56                   push esi
// 0058df21  8b742408             mov esi, dword ptr [esp + 8]
// 0058df25  85f6                 test esi, esi
// 0058df27  7410                 je 0x58df39
// 0058df29  8bce                 mov ecx, esi
// 0058df2b  e860b2fdff           call 0x569190
// 0058df30  56                   push esi
// 0058df31  e8de413f00           call 0x982114
// 0058df36  83c404               add esp, 4
// 0058df39  5e                   pop esi
// 0058df3a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
