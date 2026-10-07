// roc 2011-06 00513b40  unit: RBX::Network::PhysicsPacketCache  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00513b40
//
// 00513b40  56                   push esi
// 00513b41  8b742408             mov esi, dword ptr [esp + 8]
// 00513b45  85f6                 test esi, esi
// 00513b47  7410                 je 0x513b59
// 00513b49  8bce                 mov ecx, esi
// 00513b4b  e890faffff           call 0x5135e0
// 00513b50  56                   push esi
// 00513b51  e802652f00           call 0x80a058
// 00513b56  83c404               add esp, 4
// 00513b59  5e                   pop esi
// 00513b5a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
