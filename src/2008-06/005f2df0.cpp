// roc 2008-06 005f2df0  unit: UString_sink::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f2df0
//
// 005f2df0  56                   push esi
// 005f2df1  8b742408             mov esi, dword ptr [esp + 8]
// 005f2df5  85f6                 test esi, esi
// 005f2df7  7410                 je 0x5f2e09
// 005f2df9  8bce                 mov ecx, esi
// 005f2dfb  e8e0f5ffff           call 0x5f23e0
// 005f2e00  56                   push esi
// 005f2e01  e874d80a00           call 0x6a067a
// 005f2e06  83c404               add esp, 4
// 005f2e09  5e                   pop esi
// 005f2e0a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
