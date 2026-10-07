// roc 2010-06 007406b0  unit: seg_00740000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007406b0
//
// 007406b0  56                   push esi
// 007406b1  8b742408             mov esi, dword ptr [esp + 8]
// 007406b5  85f6                 test esi, esi
// 007406b7  7410                 je 0x7406c9
// 007406b9  8bce                 mov ecx, esi
// 007406bb  e8c086ccff           call 0x408d80
// 007406c0  56                   push esi
// 007406c1  e8d4720600           call 0x7a799a
// 007406c6  83c404               add esp, 4
// 007406c9  5e                   pop esi
// 007406ca  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
