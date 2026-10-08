// from server: 100% by auto
// roc 2007-08 005c3af0  unit: boost::signals::Vconnection::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c3af0
//
// 005c3af0  56                   push esi
// 005c3af1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005c3af4  85f6                 test esi, esi
// 005c3af6  7410                 je 0x5c3b08
// 005c3af8  8bce                 mov ecx, esi
// 005c3afa  e861491600           call 0x728460
// 005c3aff  56                   push esi
// 005c3b00  e85dc10600           call 0x62fc62
// 005c3b05  83c404               add esp, 4
// 005c3b08  5e                   pop esi
// 005c3b09  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
