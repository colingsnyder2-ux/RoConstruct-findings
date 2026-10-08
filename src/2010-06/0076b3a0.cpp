// from server: 100% by auto
// roc 2010-06 0076b3a0  unit: RBX::ImageButton  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0076b3a0
//
// 0076b3a0  56                   push esi
// 0076b3a1  8b742408             mov esi, dword ptr [esp + 8]
// 0076b3a5  85f6                 test esi, esi
// 0076b3a7  7410                 je 0x76b3b9
// 0076b3a9  8bce                 mov ecx, esi
// 0076b3ab  e830fdffff           call 0x76b0e0
// 0076b3b0  56                   push esi
// 0076b3b1  e8e4c50300           call 0x7a799a
// 0076b3b6  83c404               add esp, 4
// 0076b3b9  5e                   pop esi
// 0076b3ba  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
