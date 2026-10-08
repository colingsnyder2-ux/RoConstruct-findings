// from server: 100% by auto
// roc 2010-06 004ff0b0  unit: RBX::Network::VConcurrentRakPeer::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ff0b0
//
// 004ff0b0  56                   push esi
// 004ff0b1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004ff0b4  85f6                 test esi, esi
// 004ff0b6  7410                 je 0x4ff0c8
// 004ff0b8  8bce                 mov ecx, esi
// 004ff0ba  e801edfdff           call 0x4dddc0
// 004ff0bf  56                   push esi
// 004ff0c0  e8d5882a00           call 0x7a799a
// 004ff0c5  83c404               add esp, 4
// 004ff0c8  5e                   pop esi
// 004ff0c9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
