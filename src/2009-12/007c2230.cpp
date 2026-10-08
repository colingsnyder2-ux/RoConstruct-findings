// roc 2009-12 007c2230  unit: RBX::ImageButton  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007c2230
//
// 007c2230  56                   push esi
// 007c2231  8b742408             mov esi, dword ptr [esp + 8]
// 007c2235  85f6                 test esi, esi
// 007c2237  7410                 je 0x7c2249
// 007c2239  8bce                 mov ecx, esi
// 007c223b  e830fdffff           call 0x7c1f70
// 007c2240  56                   push esi
// 007c2241  e814160300           call 0x7f385a
// 007c2246  83c404               add esp, 4
// 007c2249  5e                   pop esi
// 007c224a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
