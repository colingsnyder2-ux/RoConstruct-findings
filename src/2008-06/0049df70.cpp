// roc 2008-06 0049df70  unit: RBX::Network::Players::Plugin  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049df70
//
// 0049df70  56                   push esi
// 0049df71  8b742408             mov esi, dword ptr [esp + 8]
// 0049df75  85f6                 test esi, esi
// 0049df77  7410                 je 0x49df89
// 0049df79  8bce                 mov ecx, esi
// 0049df7b  e8c0f1ffff           call 0x49d140
// 0049df80  56                   push esi
// 0049df81  e8f4262000           call 0x6a067a
// 0049df86  83c404               add esp, 4
// 0049df89  5e                   pop esi
// 0049df8a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
