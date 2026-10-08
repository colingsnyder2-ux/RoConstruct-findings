// roc 2009-12 00521e60  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00521e60
//
// 00521e60  56                   push esi
// 00521e61  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00521e64  85f6                 test esi, esi
// 00521e66  7410                 je 0x521e78
// 00521e68  8bce                 mov ecx, esi
// 00521e6a  e8d1ddffff           call 0x51fc40
// 00521e6f  56                   push esi
// 00521e70  e8e5192d00           call 0x7f385a
// 00521e75  83c404               add esp, 4
// 00521e78  5e                   pop esi
// 00521e79  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
