// roc 2007-08 005c4b30  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4b30
//
// 005c4b30  56                   push esi
// 005c4b31  8b742408             mov esi, dword ptr [esp + 8]
// 005c4b35  85f6                 test esi, esi
// 005c4b37  7410                 je 0x5c4b49
// 005c4b39  8bce                 mov ecx, esi
// 005c4b3b  e8d07ffaff           call 0x56cb10
// 005c4b40  56                   push esi
// 005c4b41  e81cb10600           call 0x62fc62
// 005c4b46  83c404               add esp, 4
// 005c4b49  5e                   pop esi
// 005c4b4a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
