// roc 2012-06 00859fd0  unit: UString_sink::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00859fd0
//
// 00859fd0  56                   push esi
// 00859fd1  8b742408             mov esi, dword ptr [esp + 8]
// 00859fd5  85f6                 test esi, esi
// 00859fd7  7410                 je 0x859fe9
// 00859fd9  8bce                 mov ecx, esi
// 00859fdb  e8b0f5ffff           call 0x859590
// 00859fe0  56                   push esi
// 00859fe1  e82e811200           call 0x982114
// 00859fe6  83c404               add esp, 4
// 00859fe9  5e                   pop esi
// 00859fea  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
