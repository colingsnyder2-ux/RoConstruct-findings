// roc 2009-12 0063e880  unit: RBX::MD5HasherImpl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0063e880
//
// 0063e880  56                   push esi
// 0063e881  8b742408             mov esi, dword ptr [esp + 8]
// 0063e885  85f6                 test esi, esi
// 0063e887  7410                 je 0x63e899
// 0063e889  8bce                 mov ecx, esi
// 0063e88b  e860feffff           call 0x63e6f0
// 0063e890  56                   push esi
// 0063e891  e8c44f1b00           call 0x7f385a
// 0063e896  83c404               add esp, 4
// 0063e899  5e                   pop esi
// 0063e89a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
