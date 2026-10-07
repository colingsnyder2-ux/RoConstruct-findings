// roc 2010-06 0076b4c0  unit: RBX::VChatLine::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0076b4c0
//
// 0076b4c0  56                   push esi
// 0076b4c1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0076b4c4  85f6                 test esi, esi
// 0076b4c6  7410                 je 0x76b4d8
// 0076b4c8  8bce                 mov ecx, esi
// 0076b4ca  e811fcffff           call 0x76b0e0
// 0076b4cf  56                   push esi
// 0076b4d0  e8c5c40300           call 0x7a799a
// 0076b4d5  83c404               add esp, 4
// 0076b4d8  5e                   pop esi
// 0076b4d9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
