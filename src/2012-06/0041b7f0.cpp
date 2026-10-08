// from server: 100% by auto
// roc 2012-06 0041b7f0  unit: RBX::JavaScript::VMarshalledFunction::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041b7f0
//
// 0041b7f0  56                   push esi
// 0041b7f1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0041b7f4  85f6                 test esi, esi
// 0041b7f6  7410                 je 0x41b808
// 0041b7f8  8bce                 mov ecx, esi
// 0041b7fa  e891ac0200           call 0x446490
// 0041b7ff  56                   push esi
// 0041b800  e80f695600           call 0x982114
// 0041b805  83c404               add esp, 4
// 0041b808  5e                   pop esi
// 0041b809  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
