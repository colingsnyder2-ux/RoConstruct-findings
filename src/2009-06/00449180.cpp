// from server: 100% by auto
// roc 2009-06 00449180  unit: CRobloxApp  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00449180
//
// 00449180  56                   push esi
// 00449181  8b742408             mov esi, dword ptr [esp + 8]
// 00449185  85f6                 test esi, esi
// 00449187  7410                 je 0x449199
// 00449189  8bce                 mov ecx, esi
// 0044918b  e890fbffff           call 0x448d20
// 00449190  56                   push esi
// 00449191  e89cf82c00           call 0x718a32
// 00449196  83c404               add esp, 4
// 00449199  5e                   pop esi
// 0044919a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
