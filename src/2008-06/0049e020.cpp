// roc 2008-06 0049e020  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049e020
//
// 0049e020  56                   push esi
// 0049e021  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0049e024  85f6                 test esi, esi
// 0049e026  7410                 je 0x49e038
// 0049e028  8bce                 mov ecx, esi
// 0049e02a  e811f1ffff           call 0x49d140
// 0049e02f  56                   push esi
// 0049e030  e845262000           call 0x6a067a
// 0049e035  83c404               add esp, 4
// 0049e038  5e                   pop esi
// 0049e039  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
