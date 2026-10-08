// from server: 100% by auto
// roc 2009-06 006c1b60  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c1b60
//
// 006c1b60  56                   push esi
// 006c1b61  8b742408             mov esi, dword ptr [esp + 8]
// 006c1b65  85f6                 test esi, esi
// 006c1b67  7410                 je 0x6c1b79
// 006c1b69  8bce                 mov ecx, esi
// 006c1b6b  e8c03cfdff           call 0x695830
// 006c1b70  56                   push esi
// 006c1b71  e8bc6e0500           call 0x718a32
// 006c1b76  83c404               add esp, 4
// 006c1b79  5e                   pop esi
// 006c1b7a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
