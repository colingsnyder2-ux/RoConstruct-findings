// roc 2009-12 007293d0  unit: boost::iostreams::Uinput::V?$chain::?$chain_base::Uchain_impl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007293d0
//
// 007293d0  56                   push esi
// 007293d1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 007293d4  85f6                 test esi, esi
// 007293d6  7410                 je 0x7293e8
// 007293d8  8bce                 mov ecx, esi
// 007293da  e831eaffff           call 0x727e10
// 007293df  56                   push esi
// 007293e0  e875a40c00           call 0x7f385a
// 007293e5  83c404               add esp, 4
// 007293e8  5e                   pop esi
// 007293e9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
