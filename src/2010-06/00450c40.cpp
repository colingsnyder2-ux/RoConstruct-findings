// roc 2010-06 00450c40  unit: CRobloxApp  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00450c40
//
// 00450c40  56                   push esi
// 00450c41  8b742408             mov esi, dword ptr [esp + 8]
// 00450c45  85f6                 test esi, esi
// 00450c47  7410                 je 0x450c59
// 00450c49  8bce                 mov ecx, esi
// 00450c4b  e8b0f8ffff           call 0x450500
// 00450c50  56                   push esi
// 00450c51  e8446d3500           call 0x7a799a
// 00450c56  83c404               add esp, 4
// 00450c59  5e                   pop esi
// 00450c5a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
