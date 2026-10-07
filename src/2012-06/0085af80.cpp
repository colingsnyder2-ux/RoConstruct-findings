// roc 2012-06 0085af80  unit: std::D::V?$allocator::V?$zlib_decompressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085af80
//
// 0085af80  56                   push esi
// 0085af81  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0085af84  85f6                 test esi, esi
// 0085af86  7410                 je 0x85af98
// 0085af88  8bce                 mov ecx, esi
// 0085af8a  e801e6ffff           call 0x859590
// 0085af8f  56                   push esi
// 0085af90  e87f711200           call 0x982114
// 0085af95  83c404               add esp, 4
// 0085af98  5e                   pop esi
// 0085af99  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
