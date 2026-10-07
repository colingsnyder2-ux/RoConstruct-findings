// roc 2012-06 008605f0  unit: boost::iostreams::Uinput::V?$chain::?$chain_base::Uchain_impl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008605f0
//
// 008605f0  56                   push esi
// 008605f1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 008605f4  85f6                 test esi, esi
// 008605f6  7410                 je 0x860608
// 008605f8  8bce                 mov ecx, esi
// 008605fa  e8c1eaffff           call 0x85f0c0
// 008605ff  56                   push esi
// 00860600  e80f1b1200           call 0x982114
// 00860605  83c404               add esp, 4
// 00860608  5e                   pop esi
// 00860609  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
