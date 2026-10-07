// roc 2009-06 0070ab80  unit: VThreadLogManager::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070ab80
//
// 0070ab80  56                   push esi
// 0070ab81  8b742408             mov esi, dword ptr [esp + 8]
// 0070ab85  85f6                 test esi, esi
// 0070ab87  7410                 je 0x70ab99
// 0070ab89  8bce                 mov ecx, esi
// 0070ab8b  e840320000           call 0x70ddd0
// 0070ab90  56                   push esi
// 0070ab91  e89cde0000           call 0x718a32
// 0070ab96  83c404               add esp, 4
// 0070ab99  5e                   pop esi
// 0070ab9a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
