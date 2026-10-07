// roc 2011-06 00930cf0  unit: seg_00930000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00930cf0
//
// 00930cf0  56                   push esi
// 00930cf1  8b742408             mov esi, dword ptr [esp + 8]
// 00930cf5  85f6                 test esi, esi
// 00930cf7  7410                 je 0x930d09
// 00930cf9  8bce                 mov ecx, esi
// 00930cfb  e8c0f4ffff           call 0x9301c0
// 00930d00  56                   push esi
// 00930d01  e85293edff           call 0x80a058
// 00930d06  83c404               add esp, 4
// 00930d09  5e                   pop esi
// 00930d0a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
