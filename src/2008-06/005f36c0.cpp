// roc 2008-06 005f36c0  unit: std::D::V?$allocator::V?$zlib_compressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f36c0
//
// 005f36c0  56                   push esi
// 005f36c1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005f36c4  85f6                 test esi, esi
// 005f36c6  7410                 je 0x5f36d8
// 005f36c8  8bce                 mov ecx, esi
// 005f36ca  e811edffff           call 0x5f23e0
// 005f36cf  56                   push esi
// 005f36d0  e8a5cf0a00           call 0x6a067a
// 005f36d5  83c404               add esp, 4
// 005f36d8  5e                   pop esi
// 005f36d9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
