// roc 2010-06 006a7850  unit: boost::iostreams::Uinput::V?$chain::?$chain_base::Uchain_impl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a7850
//
// 006a7850  56                   push esi
// 006a7851  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006a7854  85f6                 test esi, esi
// 006a7856  7410                 je 0x6a7868
// 006a7858  8bce                 mov ecx, esi
// 006a785a  e831eaffff           call 0x6a6290
// 006a785f  56                   push esi
// 006a7860  e835011000           call 0x7a799a
// 006a7865  83c404               add esp, 4
// 006a7868  5e                   pop esi
// 006a7869  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
