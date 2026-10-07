// roc 2011-06 004db2f0  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004db2f0
//
// 004db2f0  56                   push esi
// 004db2f1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004db2f4  85f6                 test esi, esi
// 004db2f6  7410                 je 0x4db308
// 004db2f8  8bce                 mov ecx, esi
// 004db2fa  e8f1b8ffff           call 0x4d6bf0
// 004db2ff  56                   push esi
// 004db300  e853ed3200           call 0x80a058
// 004db305  83c404               add esp, 4
// 004db308  5e                   pop esi
// 004db309  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
