// roc 2012-06 006990a0  unit: SoundServiceStatsItem  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006990a0
//
// 006990a0  56                   push esi
// 006990a1  8b742408             mov esi, dword ptr [esp + 8]
// 006990a5  85f6                 test esi, esi
// 006990a7  7410                 je 0x6990b9
// 006990a9  8bce                 mov ecx, esi
// 006990ab  e8b0f9ffff           call 0x698a60
// 006990b0  56                   push esi
// 006990b1  e85e902e00           call 0x982114
// 006990b6  83c404               add esp, 4
// 006990b9  5e                   pop esi
// 006990ba  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
