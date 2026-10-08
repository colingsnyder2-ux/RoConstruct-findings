// from server: 100% by auto
// roc 2012-06 00846cf0  unit: seg_00840000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00846cf0
//
// 00846cf0  56                   push esi
// 00846cf1  8b742408             mov esi, dword ptr [esp + 8]
// 00846cf5  85f6                 test esi, esi
// 00846cf7  7410                 je 0x846d09
// 00846cf9  8bce                 mov ecx, esi
// 00846cfb  e830efffff           call 0x845c30
// 00846d00  56                   push esi
// 00846d01  e80eb41300           call 0x982114
// 00846d06  83c404               add esp, 4
// 00846d09  5e                   pop esi
// 00846d0a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
