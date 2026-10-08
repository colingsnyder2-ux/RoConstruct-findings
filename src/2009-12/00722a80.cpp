// roc 2009-12 00722a80  unit: UString_sink::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722a80
//
// 00722a80  56                   push esi
// 00722a81  8b742408             mov esi, dword ptr [esp + 8]
// 00722a85  85f6                 test esi, esi
// 00722a87  7410                 je 0x722a99
// 00722a89  8bce                 mov ecx, esi
// 00722a8b  e810f6ffff           call 0x7220a0
// 00722a90  56                   push esi
// 00722a91  e8c40d0d00           call 0x7f385a
// 00722a96  83c404               add esp, 4
// 00722a99  5e                   pop esi
// 00722a9a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
