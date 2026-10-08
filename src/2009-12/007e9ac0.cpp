// roc 2009-12 007e9ac0  unit: RBX::Tasks::Barrier  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e9ac0
//
// 007e9ac0  56                   push esi
// 007e9ac1  8b742408             mov esi, dword ptr [esp + 8]
// 007e9ac5  85f6                 test esi, esi
// 007e9ac7  7410                 je 0x7e9ad9
// 007e9ac9  8bce                 mov ecx, esi
// 007e9acb  e8e0feffff           call 0x7e99b0
// 007e9ad0  56                   push esi
// 007e9ad1  e8849d0000           call 0x7f385a
// 007e9ad6  83c404               add esp, 4
// 007e9ad9  5e                   pop esi
// 007e9ada  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
