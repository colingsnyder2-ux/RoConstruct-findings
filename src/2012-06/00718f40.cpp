// roc 2012-06 00718f40  unit: RBX::VProfanityFilter::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00718f40
//
// 00718f40  56                   push esi
// 00718f41  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00718f44  85f6                 test esi, esi
// 00718f46  7410                 je 0x718f58
// 00718f48  8bce                 mov ecx, esi
// 00718f4a  e841120f00           call 0x80a190
// 00718f4f  56                   push esi
// 00718f50  e8bf912600           call 0x982114
// 00718f55  83c404               add esp, 4
// 00718f58  5e                   pop esi
// 00718f59  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
