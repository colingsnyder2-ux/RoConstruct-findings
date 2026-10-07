// roc 2012-06 008354a0  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008354a0
//
// 008354a0  56                   push esi
// 008354a1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 008354a4  85f6                 test esi, esi
// 008354a6  7410                 je 0x8354b8
// 008354a8  8bce                 mov ecx, esi
// 008354aa  e841f2ffff           call 0x8346f0
// 008354af  56                   push esi
// 008354b0  e85fcc1400           call 0x982114
// 008354b5  83c404               add esp, 4
// 008354b8  5e                   pop esi
// 008354b9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
