// roc 2011-06 007662e0  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007662e0
//
// 007662e0  56                   push esi
// 007662e1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 007662e4  85f6                 test esi, esi
// 007662e6  7410                 je 0x7662f8
// 007662e8  8bce                 mov ecx, esi
// 007662ea  e821ecffff           call 0x764f10
// 007662ef  56                   push esi
// 007662f0  e8633d0a00           call 0x80a058
// 007662f5  83c404               add esp, 4
// 007662f8  5e                   pop esi
// 007662f9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
