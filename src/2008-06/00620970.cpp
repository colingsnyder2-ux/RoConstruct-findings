// roc 2008-06 00620970  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00620970
//
// 00620970  56                   push esi
// 00620971  8b742408             mov esi, dword ptr [esp + 8]
// 00620975  85f6                 test esi, esi
// 00620977  7410                 je 0x620989
// 00620979  8bce                 mov ecx, esi
// 0062097b  e8003af7ff           call 0x594380
// 00620980  56                   push esi
// 00620981  e8f4fc0700           call 0x6a067a
// 00620986  83c404               add esp, 4
// 00620989  5e                   pop esi
// 0062098a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
