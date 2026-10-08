// from server: 100% by auto
// roc 2010-06 00740ad0  unit: RBX::VHttp::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00740ad0
//
// 00740ad0  56                   push esi
// 00740ad1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00740ad4  85f6                 test esi, esi
// 00740ad6  7410                 je 0x740ae8
// 00740ad8  8bce                 mov ecx, esi
// 00740ada  e8a182ccff           call 0x408d80
// 00740adf  56                   push esi
// 00740ae0  e8b56e0600           call 0x7a799a
// 00740ae5  83c404               add esp, 4
// 00740ae8  5e                   pop esi
// 00740ae9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
