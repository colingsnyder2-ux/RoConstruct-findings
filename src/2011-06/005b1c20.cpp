// roc 2011-06 005b1c20  unit: RBX::MD5HasherImpl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b1c20
//
// 005b1c20  56                   push esi
// 005b1c21  8b742408             mov esi, dword ptr [esp + 8]
// 005b1c25  85f6                 test esi, esi
// 005b1c27  7410                 je 0x5b1c39
// 005b1c29  8bce                 mov ecx, esi
// 005b1c2b  e820feffff           call 0x5b1a50
// 005b1c30  56                   push esi
// 005b1c31  e822842500           call 0x80a058
// 005b1c36  83c404               add esp, 4
// 005b1c39  5e                   pop esi
// 005b1c3a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
