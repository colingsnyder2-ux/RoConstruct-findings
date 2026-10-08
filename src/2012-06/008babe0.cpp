// from server: 100% by auto
// roc 2012-06 008babe0  unit: RBX::VHttp::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008babe0
//
// 008babe0  56                   push esi
// 008babe1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 008babe4  85f6                 test esi, esi
// 008babe6  7410                 je 0x8babf8
// 008babe8  8bce                 mov ecx, esi
// 008babea  e8610bb5ff           call 0x40b750
// 008babef  56                   push esi
// 008babf0  e81f750c00           call 0x982114
// 008babf5  83c404               add esp, 4
// 008babf8  5e                   pop esi
// 008babf9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
