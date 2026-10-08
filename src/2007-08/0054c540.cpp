// from server: 100% by auto
// roc 2007-08 0054c540  unit: UString_sink::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054c540
//
// 0054c540  56                   push esi
// 0054c541  8b742408             mov esi, dword ptr [esp + 8]
// 0054c545  85f6                 test esi, esi
// 0054c547  7410                 je 0x54c559
// 0054c549  8bce                 mov ecx, esi
// 0054c54b  e800eaffff           call 0x54af50
// 0054c550  56                   push esi
// 0054c551  e80c370e00           call 0x62fc62
// 0054c556  83c404               add esp, 4
// 0054c559  5e                   pop esi
// 0054c55a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
