// from server: 100% by auto
// roc 2009-06 004c9150  unit: boost::X::V?$function0::?$thread_data  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c9150
//
// 004c9150  56                   push esi
// 004c9151  8b742408             mov esi, dword ptr [esp + 8]
// 004c9155  85f6                 test esi, esi
// 004c9157  7410                 je 0x4c9169
// 004c9159  8bce                 mov ecx, esi
// 004c915b  e860282400           call 0x70b9c0
// 004c9160  56                   push esi
// 004c9161  e8ccf82400           call 0x718a32
// 004c9166  83c404               add esp, 4
// 004c9169  5e                   pop esi
// 004c916a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
