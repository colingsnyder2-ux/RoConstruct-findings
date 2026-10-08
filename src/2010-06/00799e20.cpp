// from server: 100% by auto
// roc 2010-06 00799e20  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00799e20
//
// 00799e20  56                   push esi
// 00799e21  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00799e24  85f6                 test esi, esi
// 00799e26  7410                 je 0x799e38
// 00799e28  8bce                 mov ecx, esi
// 00799e2a  e8e1b4ffff           call 0x795310
// 00799e2f  56                   push esi
// 00799e30  e865db0000           call 0x7a799a
// 00799e35  83c404               add esp, 4
// 00799e38  5e                   pop esi
// 00799e39  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
