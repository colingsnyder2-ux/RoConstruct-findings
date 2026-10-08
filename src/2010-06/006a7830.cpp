// from server: 100% by auto
// roc 2010-06 006a7830  unit: boost::iostreams::Uoutput::V?$chain::?$chain_base::Uchain_impl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a7830
//
// 006a7830  56                   push esi
// 006a7831  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006a7834  85f6                 test esi, esi
// 006a7836  7410                 je 0x6a7848
// 006a7838  8bce                 mov ecx, esi
// 006a783a  e8e1e9ffff           call 0x6a6220
// 006a783f  56                   push esi
// 006a7840  e855011000           call 0x7a799a
// 006a7845  83c404               add esp, 4
// 006a7848  5e                   pop esi
// 006a7849  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
