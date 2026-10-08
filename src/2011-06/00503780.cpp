// from server: 100% by auto
// roc 2011-06 00503780  unit: RBX::Network::VSharedStringDictionary::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00503780
//
// 00503780  56                   push esi
// 00503781  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00503784  85f6                 test esi, esi
// 00503786  7410                 je 0x503798
// 00503788  8bce                 mov ecx, esi
// 0050378a  e811dfffff           call 0x5016a0
// 0050378f  56                   push esi
// 00503790  e8c3683000           call 0x80a058
// 00503795  83c404               add esp, 4
// 00503798  5e                   pop esi
// 00503799  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
