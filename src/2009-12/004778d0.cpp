// roc 2009-12 004778d0  unit: RBX::Reflection::VValue::V?$vector::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004778d0
//
// 004778d0  56                   push esi
// 004778d1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004778d4  85f6                 test esi, esi
// 004778d6  7410                 je 0x4778e8
// 004778d8  8bce                 mov ecx, esi
// 004778da  e851fafaff           call 0x427330
// 004778df  56                   push esi
// 004778e0  e875bf3700           call 0x7f385a
// 004778e5  83c404               add esp, 4
// 004778e8  5e                   pop esi
// 004778e9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
