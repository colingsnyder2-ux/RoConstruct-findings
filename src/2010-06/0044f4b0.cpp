// roc 2010-06 0044f4b0  unit: RBX::VProfanityFilter::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044f4b0
//
// 0044f4b0  56                   push esi
// 0044f4b1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0044f4b4  85f6                 test esi, esi
// 0044f4b6  7410                 je 0x44f4c8
// 0044f4b8  8bce                 mov ecx, esi
// 0044f4ba  e8d16c1e00           call 0x636190
// 0044f4bf  56                   push esi
// 0044f4c0  e8d5843500           call 0x7a799a
// 0044f4c5  83c404               add esp, 4
// 0044f4c8  5e                   pop esi
// 0044f4c9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
