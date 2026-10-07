// roc 2007-08 00552850  unit: boost::iostreams::Uoutput::V?$chain::?$chain_base::Uchain_impl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552850
//
// 00552850  56                   push esi
// 00552851  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00552854  85f6                 test esi, esi
// 00552856  7410                 je 0x552868
// 00552858  8bce                 mov ecx, esi
// 0055285a  e851f4ffff           call 0x551cb0
// 0055285f  56                   push esi
// 00552860  e8fdd30d00           call 0x62fc62
// 00552865  83c404               add esp, 4
// 00552868  5e                   pop esi
// 00552869  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
