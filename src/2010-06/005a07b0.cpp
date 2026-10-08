// from server: 100% by auto
// roc 2010-06 005a07b0  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a07b0
//
// 005a07b0  56                   push esi
// 005a07b1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005a07b4  85f6                 test esi, esi
// 005a07b6  7410                 je 0x5a07c8
// 005a07b8  8bce                 mov ecx, esi
// 005a07ba  e8b1fdffff           call 0x5a0570
// 005a07bf  56                   push esi
// 005a07c0  e8d5712000           call 0x7a799a
// 005a07c5  83c404               add esp, 4
// 005a07c8  5e                   pop esi
// 005a07c9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
