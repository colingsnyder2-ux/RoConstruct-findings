// from server: 100% by auto
// roc 2009-06 00614770  unit: std::D::V?$allocator::V?$zlib_compressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00614770
//
// 00614770  56                   push esi
// 00614771  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00614774  85f6                 test esi, esi
// 00614776  7410                 je 0x614788
// 00614778  8bce                 mov ecx, esi
// 0061477a  e841ecffff           call 0x6133c0
// 0061477f  56                   push esi
// 00614780  e8ad421000           call 0x718a32
// 00614785  83c404               add esp, 4
// 00614788  5e                   pop esi
// 00614789  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
