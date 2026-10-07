// roc 2007-08 004987c0  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004987c0
//
// 004987c0  56                   push esi
// 004987c1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004987c4  85f6                 test esi, esi
// 004987c6  7410                 je 0x4987d8
// 004987c8  8bce                 mov ecx, esi
// 004987ca  e821fcffff           call 0x4983f0
// 004987cf  56                   push esi
// 004987d0  e88d741900           call 0x62fc62
// 004987d5  83c404               add esp, 4
// 004987d8  5e                   pop esi
// 004987d9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
