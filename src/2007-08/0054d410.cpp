// from server: 100% by auto
// roc 2007-08 0054d410  unit: std::D::V?$allocator::V?$zlib_compressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054d410
//
// 0054d410  56                   push esi
// 0054d411  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0054d414  85f6                 test esi, esi
// 0054d416  7410                 je 0x54d428
// 0054d418  8bce                 mov ecx, esi
// 0054d41a  e831dbffff           call 0x54af50
// 0054d41f  56                   push esi
// 0054d420  e83d280e00           call 0x62fc62
// 0054d425  83c404               add esp, 4
// 0054d428  5e                   pop esi
// 0054d429  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
