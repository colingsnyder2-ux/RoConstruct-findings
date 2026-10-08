// roc 2009-12 00723aa0  unit: std::D::V?$allocator::V?$zlib_compressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00723aa0
//
// 00723aa0  56                   push esi
// 00723aa1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00723aa4  85f6                 test esi, esi
// 00723aa6  7410                 je 0x723ab8
// 00723aa8  8bce                 mov ecx, esi
// 00723aaa  e891e5ffff           call 0x722040
// 00723aaf  56                   push esi
// 00723ab0  e8a5fd0c00           call 0x7f385a
// 00723ab5  83c404               add esp, 4
// 00723ab8  5e                   pop esi
// 00723ab9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
