// from server: 100% by auto
// roc 2008-06 005f2e10  unit: UString_sink::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f2e10
//
// 005f2e10  56                   push esi
// 005f2e11  8b742408             mov esi, dword ptr [esp + 8]
// 005f2e15  85f6                 test esi, esi
// 005f2e17  7410                 je 0x5f2e29
// 005f2e19  8bce                 mov ecx, esi
// 005f2e1b  e820f6ffff           call 0x5f2440
// 005f2e20  56                   push esi
// 005f2e21  e854d80a00           call 0x6a067a
// 005f2e26  83c404               add esp, 4
// 005f2e29  5e                   pop esi
// 005f2e2a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
