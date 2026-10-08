// from server: 100% by auto
// roc 2010-06 00687a30  unit: std::D::DU?$char_traits::V?$basic_string::V?$map::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00687a30
//
// 00687a30  56                   push esi
// 00687a31  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00687a34  85f6                 test esi, esi
// 00687a36  7410                 je 0x687a48
// 00687a38  8bce                 mov ecx, esi
// 00687a3a  e8f197ffff           call 0x681230
// 00687a3f  56                   push esi
// 00687a40  e855ff1100           call 0x7a799a
// 00687a45  83c404               add esp, 4
// 00687a48  5e                   pop esi
// 00687a49  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
