// roc 2008-06 005f8610  unit: boost::iostreams::Uoutput::V?$chain::?$chain_base::Uchain_impl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f8610
//
// 005f8610  56                   push esi
// 005f8611  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005f8614  85f6                 test esi, esi
// 005f8616  7410                 je 0x5f8628
// 005f8618  8bce                 mov ecx, esi
// 005f861a  e861f9ffff           call 0x5f7f80
// 005f861f  56                   push esi
// 005f8620  e855800a00           call 0x6a067a
// 005f8625  83c404               add esp, 4
// 005f8628  5e                   pop esi
// 005f8629  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
