// from server: 100% by auto
// roc 2012-06 00720a50  unit: RBX::VIAdornableCollector::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00720a50
//
// 00720a50  56                   push esi
// 00720a51  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00720a54  85f6                 test esi, esi
// 00720a56  7410                 je 0x720a68
// 00720a58  8bce                 mov ecx, esi
// 00720a5a  e84152f5ff           call 0x675ca0
// 00720a5f  56                   push esi
// 00720a60  e8af162600           call 0x982114
// 00720a65  83c404               add esp, 4
// 00720a68  5e                   pop esi
// 00720a69  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
