// from server: 100% by auto
// roc 2009-06 00613d40  unit: UString_sink::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00613d40
//
// 00613d40  56                   push esi
// 00613d41  8b742408             mov esi, dword ptr [esp + 8]
// 00613d45  85f6                 test esi, esi
// 00613d47  7410                 je 0x613d59
// 00613d49  8bce                 mov ecx, esi
// 00613d4b  e870f6ffff           call 0x6133c0
// 00613d50  56                   push esi
// 00613d51  e8dc4c1000           call 0x718a32
// 00613d56  83c404               add esp, 4
// 00613d59  5e                   pop esi
// 00613d5a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
