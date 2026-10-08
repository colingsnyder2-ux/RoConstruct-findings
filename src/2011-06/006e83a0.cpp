// from server: 100% by auto
// roc 2011-06 006e83a0  unit: boost::iostreams::Uoutput::V?$chain::?$chain_base::Uchain_impl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e83a0
//
// 006e83a0  56                   push esi
// 006e83a1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006e83a4  85f6                 test esi, esi
// 006e83a6  7410                 je 0x6e83b8
// 006e83a8  8bce                 mov ecx, esi
// 006e83aa  e881eaffff           call 0x6e6e30
// 006e83af  56                   push esi
// 006e83b0  e8a31c1200           call 0x80a058
// 006e83b5  83c404               add esp, 4
// 006e83b8  5e                   pop esi
// 006e83b9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
