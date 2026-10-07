// roc 2010-06 00451150  unit: ErrorUploader::Udata::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00451150
//
// 00451150  56                   push esi
// 00451151  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00451154  85f6                 test esi, esi
// 00451156  7410                 je 0x451168
// 00451158  8bce                 mov ecx, esi
// 0045115a  e8a1f3ffff           call 0x450500
// 0045115f  56                   push esi
// 00451160  e835683500           call 0x7a799a
// 00451165  83c404               add esp, 4
// 00451168  5e                   pop esi
// 00451169  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
