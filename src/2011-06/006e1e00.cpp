// roc 2011-06 006e1e00  unit: UString_sink::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e1e00
//
// 006e1e00  56                   push esi
// 006e1e01  8b742408             mov esi, dword ptr [esp + 8]
// 006e1e05  85f6                 test esi, esi
// 006e1e07  7410                 je 0x6e1e19
// 006e1e09  8bce                 mov ecx, esi
// 006e1e0b  e810f6ffff           call 0x6e1420
// 006e1e10  56                   push esi
// 006e1e11  e842821200           call 0x80a058
// 006e1e16  83c404               add esp, 4
// 006e1e19  5e                   pop esi
// 006e1e1a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
