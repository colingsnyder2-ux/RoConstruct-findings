// roc 2009-12 007293b0  unit: boost::iostreams::Uoutput::V?$chain::?$chain_base::Uchain_impl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007293b0
//
// 007293b0  56                   push esi
// 007293b1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 007293b4  85f6                 test esi, esi
// 007293b6  7410                 je 0x7293c8
// 007293b8  8bce                 mov ecx, esi
// 007293ba  e8e1e9ffff           call 0x727da0
// 007293bf  56                   push esi
// 007293c0  e895a40c00           call 0x7f385a
// 007293c5  83c404               add esp, 4
// 007293c8  5e                   pop esi
// 007293c9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
