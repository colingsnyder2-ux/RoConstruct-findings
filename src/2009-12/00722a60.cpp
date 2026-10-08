// roc 2009-12 00722a60  unit: UString_sink::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722a60
//
// 00722a60  56                   push esi
// 00722a61  8b742408             mov esi, dword ptr [esp + 8]
// 00722a65  85f6                 test esi, esi
// 00722a67  7410                 je 0x722a79
// 00722a69  8bce                 mov ecx, esi
// 00722a6b  e8d0f5ffff           call 0x722040
// 00722a70  56                   push esi
// 00722a71  e8e40d0d00           call 0x7f385a
// 00722a76  83c404               add esp, 4
// 00722a79  5e                   pop esi
// 00722a7a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
