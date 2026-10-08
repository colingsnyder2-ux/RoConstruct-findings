// from server: 100% by auto
// roc 2010-06 006a73a0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a73a0
//
// 006a73a0  56                   push esi
// 006a73a1  8b742408             mov esi, dword ptr [esp + 8]
// 006a73a5  85f6                 test esi, esi
// 006a73a7  7410                 je 0x6a73b9
// 006a73a9  8bce                 mov ecx, esi
// 006a73ab  e8e0eeffff           call 0x6a6290
// 006a73b0  56                   push esi
// 006a73b1  e8e4051000           call 0x7a799a
// 006a73b6  83c404               add esp, 4
// 006a73b9  5e                   pop esi
// 006a73ba  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
