// roc 2012-06 00859fb0  unit: UString_sink::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00859fb0
//
// 00859fb0  56                   push esi
// 00859fb1  8b742408             mov esi, dword ptr [esp + 8]
// 00859fb5  85f6                 test esi, esi
// 00859fb7  7410                 je 0x859fc9
// 00859fb9  8bce                 mov ecx, esi
// 00859fbb  e870f5ffff           call 0x859530
// 00859fc0  56                   push esi
// 00859fc1  e84e811200           call 0x982114
// 00859fc6  83c404               add esp, 4
// 00859fc9  5e                   pop esi
// 00859fca  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
