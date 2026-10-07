// roc 2009-06 004d9440  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d9440
//
// 004d9440  56                   push esi
// 004d9441  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004d9444  85f6                 test esi, esi
// 004d9446  7410                 je 0x4d9458
// 004d9448  8bce                 mov ecx, esi
// 004d944a  e811feffff           call 0x4d9260
// 004d944f  56                   push esi
// 004d9450  e8ddf52300           call 0x718a32
// 004d9455  83c404               add esp, 4
// 004d9458  5e                   pop esi
// 004d9459  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
