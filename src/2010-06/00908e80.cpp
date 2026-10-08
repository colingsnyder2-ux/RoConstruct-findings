// from server: 100% by auto
// roc 2010-06 00908e80  unit: RBX::VLevelCollector::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00908e80
//
// 00908e80  56                   push esi
// 00908e81  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00908e84  85f6                 test esi, esi
// 00908e86  7410                 je 0x908e98
// 00908e88  8bce                 mov ecx, esi
// 00908e8a  e8d1740600           call 0x970360
// 00908e8f  56                   push esi
// 00908e90  e805ebe9ff           call 0x7a799a
// 00908e95  83c404               add esp, 4
// 00908e98  5e                   pop esi
// 00908e99  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
