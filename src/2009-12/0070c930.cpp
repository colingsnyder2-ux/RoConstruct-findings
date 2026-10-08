// roc 2009-12 0070c930  unit: std::D::DU?$char_traits::V?$basic_string::V?$map::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0070c930
//
// 0070c930  56                   push esi
// 0070c931  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0070c934  85f6                 test esi, esi
// 0070c936  7410                 je 0x70c948
// 0070c938  8bce                 mov ecx, esi
// 0070c93a  e831bcffff           call 0x708570
// 0070c93f  56                   push esi
// 0070c940  e8156f0e00           call 0x7f385a
// 0070c945  83c404               add esp, 4
// 0070c948  5e                   pop esi
// 0070c949  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
