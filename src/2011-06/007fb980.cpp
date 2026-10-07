// roc 2011-06 007fb980  unit: RBX::TaskScheduler::PAVJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fb980
//
// 007fb980  56                   push esi
// 007fb981  8b742408             mov esi, dword ptr [esp + 8]
// 007fb985  85f6                 test esi, esi
// 007fb987  7410                 je 0x7fb999
// 007fb989  8bce                 mov ecx, esi
// 007fb98b  e8208fc0ff           call 0x4048b0
// 007fb990  56                   push esi
// 007fb991  e8c2e60000           call 0x80a058
// 007fb996  83c404               add esp, 4
// 007fb999  5e                   pop esi
// 007fb99a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
