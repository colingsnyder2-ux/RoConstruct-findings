// roc 2011-06 00655460  unit: std::D::DU?$char_traits::V?$basic_string::?$sp_counted_impl_p  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00655460
//
// 00655460  56                   push esi
// 00655461  8b742408             mov esi, dword ptr [esp + 8]
// 00655465  85f6                 test esi, esi
// 00655467  7410                 je 0x655479
// 00655469  8bce                 mov ecx, esi
// 0065546b  e860eeffff           call 0x6542d0
// 00655470  56                   push esi
// 00655471  e8e24b1b00           call 0x80a058
// 00655476  83c404               add esp, 4
// 00655479  5e                   pop esi
// 0065547a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
