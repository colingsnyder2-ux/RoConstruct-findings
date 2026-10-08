// from server: 100% by auto
// roc 2011-06 006e7ef0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e7ef0
//
// 006e7ef0  56                   push esi
// 006e7ef1  8b742408             mov esi, dword ptr [esp + 8]
// 006e7ef5  85f6                 test esi, esi
// 006e7ef7  7410                 je 0x6e7f09
// 006e7ef9  8bce                 mov ecx, esi
// 006e7efb  e830efffff           call 0x6e6e30
// 006e7f00  56                   push esi
// 006e7f01  e852211200           call 0x80a058
// 006e7f06  83c404               add esp, 4
// 006e7f09  5e                   pop esi
// 006e7f0a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
