// from server: 100% by auto
// roc 2008-06 005f8630  unit: boost::iostreams::Uinput::V?$chain::?$chain_base::Uchain_impl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f8630
//
// 005f8630  56                   push esi
// 005f8631  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005f8634  85f6                 test esi, esi
// 005f8636  7410                 je 0x5f8648
// 005f8638  8bce                 mov ecx, esi
// 005f863a  e8b1f9ffff           call 0x5f7ff0
// 005f863f  56                   push esi
// 005f8640  e835800a00           call 0x6a067a
// 005f8645  83c404               add esp, 4
// 005f8648  5e                   pop esi
// 005f8649  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
