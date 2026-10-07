// roc 2010-06 006a1e80  unit: std::D::V?$allocator::V?$zlib_decompressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a1e80
//
// 006a1e80  56                   push esi
// 006a1e81  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006a1e84  85f6                 test esi, esi
// 006a1e86  7410                 je 0x6a1e98
// 006a1e88  8bce                 mov ecx, esi
// 006a1e8a  e891e5ffff           call 0x6a0420
// 006a1e8f  56                   push esi
// 006a1e90  e8055b1000           call 0x7a799a
// 006a1e95  83c404               add esp, 4
// 006a1e98  5e                   pop esi
// 006a1e99  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
