// from server: 100% by auto
// roc 2009-06 006173a0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006173a0
//
// 006173a0  56                   push esi
// 006173a1  8b742408             mov esi, dword ptr [esp + 8]
// 006173a5  85f6                 test esi, esi
// 006173a7  7410                 je 0x6173b9
// 006173a9  8bce                 mov ecx, esi
// 006173ab  e860f5ffff           call 0x616910
// 006173b0  56                   push esi
// 006173b1  e87c161000           call 0x718a32
// 006173b6  83c404               add esp, 4
// 006173b9  5e                   pop esi
// 006173ba  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
