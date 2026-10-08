// roc 2009-12 00723ac0  unit: std::D::V?$allocator::V?$zlib_decompressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00723ac0
//
// 00723ac0  56                   push esi
// 00723ac1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00723ac4  85f6                 test esi, esi
// 00723ac6  7410                 je 0x723ad8
// 00723ac8  8bce                 mov ecx, esi
// 00723aca  e8d1e5ffff           call 0x7220a0
// 00723acf  56                   push esi
// 00723ad0  e885fd0c00           call 0x7f385a
// 00723ad5  83c404               add esp, 4
// 00723ad8  5e                   pop esi
// 00723ad9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
