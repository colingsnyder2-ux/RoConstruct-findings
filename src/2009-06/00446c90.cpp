// roc 2009-06 00446c90  unit: CBrowserDocManager  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00446c90
//
// 00446c90  56                   push esi
// 00446c91  8b742408             mov esi, dword ptr [esp + 8]
// 00446c95  85f6                 test esi, esi
// 00446c97  7410                 je 0x446ca9
// 00446c99  8bce                 mov ecx, esi
// 00446c9b  e8909a2000           call 0x650730
// 00446ca0  56                   push esi
// 00446ca1  e88c1d2d00           call 0x718a32
// 00446ca6  83c404               add esp, 4
// 00446ca9  5e                   pop esi
// 00446caa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
