// roc 2009-06 00685c80  unit: std::D::V?$allocator::V?$zlib_decompressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00685c80
//
// 00685c80  56                   push esi
// 00685c81  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00685c84  85f6                 test esi, esi
// 00685c86  7410                 je 0x685c98
// 00685c88  8bce                 mov ecx, esi
// 00685c8a  e871f5ffff           call 0x685200
// 00685c8f  56                   push esi
// 00685c90  e89d2d0900           call 0x718a32
// 00685c95  83c404               add esp, 4
// 00685c98  5e                   pop esi
// 00685c99  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
