// roc 2010-06 004fea40  unit: RBX::Network::VClient::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fea40
//
// 004fea40  56                   push esi
// 004fea41  8b742408             mov esi, dword ptr [esp + 8]
// 004fea45  85f6                 test esi, esi
// 004fea47  7410                 je 0x4fea59
// 004fea49  8bce                 mov ecx, esi
// 004fea4b  e870f3fdff           call 0x4dddc0
// 004fea50  56                   push esi
// 004fea51  e8448f2a00           call 0x7a799a
// 004fea56  83c404               add esp, 4
// 004fea59  5e                   pop esi
// 004fea5a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
