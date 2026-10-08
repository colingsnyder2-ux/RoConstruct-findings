// from server: 100% by auto
// roc 2008-06 005f83c0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f83c0
//
// 005f83c0  56                   push esi
// 005f83c1  8b742408             mov esi, dword ptr [esp + 8]
// 005f83c5  85f6                 test esi, esi
// 005f83c7  7410                 je 0x5f83d9
// 005f83c9  8bce                 mov ecx, esi
// 005f83cb  e8b0fbffff           call 0x5f7f80
// 005f83d0  56                   push esi
// 005f83d1  e8a4820a00           call 0x6a067a
// 005f83d6  83c404               add esp, 4
// 005f83d9  5e                   pop esi
// 005f83da  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
