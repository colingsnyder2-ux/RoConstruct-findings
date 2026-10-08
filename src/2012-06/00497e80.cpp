// from server: 100% by auto
// roc 2012-06 00497e80  unit: RBX::Tasks::VSequence::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00497e80
//
// 00497e80  56                   push esi
// 00497e81  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00497e84  85f6                 test esi, esi
// 00497e86  7410                 je 0x497e98
// 00497e88  8bce                 mov ecx, esi
// 00497e8a  e8b1f9ffff           call 0x497840
// 00497e8f  56                   push esi
// 00497e90  e87fa24e00           call 0x982114
// 00497e95  83c404               add esp, 4
// 00497e98  5e                   pop esi
// 00497e99  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
