// from server: 100% by auto
// roc 2009-06 004ce750  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ce750
//
// 004ce750  56                   push esi
// 004ce751  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004ce754  85f6                 test esi, esi
// 004ce756  7410                 je 0x4ce768
// 004ce758  8bce                 mov ecx, esi
// 004ce75a  e8d1e7ffff           call 0x4ccf30
// 004ce75f  56                   push esi
// 004ce760  e8cda22400           call 0x718a32
// 004ce765  83c404               add esp, 4
// 004ce768  5e                   pop esi
// 004ce769  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
