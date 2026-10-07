// roc 2012-06 00437df0  unit: std::D::DU?$char_traits::V?$basic_ifstream::?$sp_counted_impl_p  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00437df0
//
// 00437df0  56                   push esi
// 00437df1  8b742408             mov esi, dword ptr [esp + 8]
// 00437df5  85f6                 test esi, esi
// 00437df7  7410                 je 0x437e09
// 00437df9  8bce                 mov ecx, esi
// 00437dfb  e860355600           call 0x99b360
// 00437e00  56                   push esi
// 00437e01  e80ea35400           call 0x982114
// 00437e06  83c404               add esp, 4
// 00437e09  5e                   pop esi
// 00437e0a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
