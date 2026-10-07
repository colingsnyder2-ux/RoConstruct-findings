// roc 2010-06 00617970  unit: RBX::ScriptContext  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00617970
//
// 00617970  56                   push esi
// 00617971  8b742408             mov esi, dword ptr [esp + 8]
// 00617975  85f6                 test esi, esi
// 00617977  7410                 je 0x617989
// 00617979  8bce                 mov ecx, esi
// 0061797b  e810e0ffff           call 0x615990
// 00617980  56                   push esi
// 00617981  e814001900           call 0x7a799a
// 00617986  83c404               add esp, 4
// 00617989  5e                   pop esi
// 0061798a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
