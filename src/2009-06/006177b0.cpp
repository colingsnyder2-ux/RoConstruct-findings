// roc 2009-06 006177b0  unit: boost::iostreams::Uoutput::V?$chain::?$chain_base::Uchain_impl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006177b0
//
// 006177b0  56                   push esi
// 006177b1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006177b4  85f6                 test esi, esi
// 006177b6  7410                 je 0x6177c8
// 006177b8  8bce                 mov ecx, esi
// 006177ba  e851f1ffff           call 0x616910
// 006177bf  56                   push esi
// 006177c0  e86d121000           call 0x718a32
// 006177c5  83c404               add esp, 4
// 006177c8  5e                   pop esi
// 006177c9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
