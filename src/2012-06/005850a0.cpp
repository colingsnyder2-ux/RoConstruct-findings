// roc 2012-06 005850a0  unit: RBX::Network::VSharedStringProtectedDictionary::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005850a0
//
// 005850a0  56                   push esi
// 005850a1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005850a4  85f6                 test esi, esi
// 005850a6  7410                 je 0x5850b8
// 005850a8  8bce                 mov ecx, esi
// 005850aa  e881d2ffff           call 0x582330
// 005850af  56                   push esi
// 005850b0  e85fd03f00           call 0x982114
// 005850b5  83c404               add esp, 4
// 005850b8  5e                   pop esi
// 005850b9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
