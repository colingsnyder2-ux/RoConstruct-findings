// roc 2007-08 004b2950  unit: RBX::Network::Server::ClientProxy  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b2950
//
// 004b2950  56                   push esi
// 004b2951  8b742408             mov esi, dword ptr [esp + 8]
// 004b2955  85f6                 test esi, esi
// 004b2957  7410                 je 0x4b2969
// 004b2959  8bce                 mov ecx, esi
// 004b295b  e8d0f0ffff           call 0x4b1a30
// 004b2960  56                   push esi
// 004b2961  e8fcd21700           call 0x62fc62
// 004b2966  83c404               add esp, 4
// 004b2969  5e                   pop esi
// 004b296a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
