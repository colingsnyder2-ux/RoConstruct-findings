// from server: 100% by auto
// roc 2009-06 00688af0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00688af0
//
// 00688af0  56                   push esi
// 00688af1  8b742408             mov esi, dword ptr [esp + 8]
// 00688af5  85f6                 test esi, esi
// 00688af7  7410                 je 0x688b09
// 00688af9  8bce                 mov ecx, esi
// 00688afb  e870f4ffff           call 0x687f70
// 00688b00  56                   push esi
// 00688b01  e82cff0800           call 0x718a32
// 00688b06  83c404               add esp, 4
// 00688b09  5e                   pop esi
// 00688b0a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
