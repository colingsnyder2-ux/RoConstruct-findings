// from server: 100% by auto
// roc 2012-06 008605d0  unit: boost::iostreams::Uoutput::V?$chain::?$chain_base::Uchain_impl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008605d0
//
// 008605d0  56                   push esi
// 008605d1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 008605d4  85f6                 test esi, esi
// 008605d6  7410                 je 0x8605e8
// 008605d8  8bce                 mov ecx, esi
// 008605da  e881eaffff           call 0x85f060
// 008605df  56                   push esi
// 008605e0  e82f1b1200           call 0x982114
// 008605e5  83c404               add esp, 4
// 008605e8  5e                   pop esi
// 008605e9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
