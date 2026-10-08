// from server: 100% by auto
// roc 2012-06 00554810  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00554810
//
// 00554810  56                   push esi
// 00554811  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00554814  85f6                 test esi, esi
// 00554816  7410                 je 0x554828
// 00554818  8bce                 mov ecx, esi
// 0055481a  e891b2ffff           call 0x54fab0
// 0055481f  56                   push esi
// 00554820  e8efd84200           call 0x982114
// 00554825  83c404               add esp, 4
// 00554828  5e                   pop esi
// 00554829  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
