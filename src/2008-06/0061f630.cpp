// from server: 100% by auto
// roc 2008-06 0061f630  unit: boost::signals::Vconnection::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f630
//
// 0061f630  56                   push esi
// 0061f631  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0061f634  85f6                 test esi, esi
// 0061f636  7410                 je 0x61f648
// 0061f638  8bce                 mov ecx, esi
// 0061f63a  e8315df7ff           call 0x595370
// 0061f63f  56                   push esi
// 0061f640  e835100800           call 0x6a067a
// 0061f645  83c404               add esp, 4
// 0061f648  5e                   pop esi
// 0061f649  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
