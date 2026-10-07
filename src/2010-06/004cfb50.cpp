// roc 2010-06 004cfb50  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004cfb50
//
// 004cfb50  56                   push esi
// 004cfb51  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004cfb54  85f6                 test esi, esi
// 004cfb56  7410                 je 0x4cfb68
// 004cfb58  8bce                 mov ecx, esi
// 004cfb5a  e841dfffff           call 0x4cdaa0
// 004cfb5f  56                   push esi
// 004cfb60  e8357e2d00           call 0x7a799a
// 004cfb65  83c404               add esp, 4
// 004cfb68  5e                   pop esi
// 004cfb69  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
