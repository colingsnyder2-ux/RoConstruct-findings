// roc 2009-12 0044ce60  unit: CRbxPlayDocTemplate  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044ce60
//
// 0044ce60  56                   push esi
// 0044ce61  8b742408             mov esi, dword ptr [esp + 8]
// 0044ce65  85f6                 test esi, esi
// 0044ce67  7410                 je 0x44ce79
// 0044ce69  8bce                 mov ecx, esi
// 0044ce6b  e820d72700           call 0x6ca590
// 0044ce70  56                   push esi
// 0044ce71  e8e4693a00           call 0x7f385a
// 0044ce76  83c404               add esp, 4
// 0044ce79  5e                   pop esi
// 0044ce7a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
