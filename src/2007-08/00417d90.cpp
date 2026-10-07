// roc 2007-08 00417d90  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00417d90
//
// 00417d90  56                   push esi
// 00417d91  8b742408             mov esi, dword ptr [esp + 8]
// 00417d95  85f6                 test esi, esi
// 00417d97  7410                 je 0x417da9
// 00417d99  8bce                 mov ecx, esi
// 00417d9b  e830fdffff           call 0x417ad0
// 00417da0  56                   push esi
// 00417da1  e8bc7e2100           call 0x62fc62
// 00417da6  83c404               add esp, 4
// 00417da9  5e                   pop esi
// 00417daa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
