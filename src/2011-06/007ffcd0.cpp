// from server: 100% by auto
// roc 2011-06 007ffcd0  unit: RBX::Limits::VCounter::V?$shared_ptr::?$thread_specific_ptr::delete_data  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ffcd0
//
// 007ffcd0  56                   push esi
// 007ffcd1  8b742408             mov esi, dword ptr [esp + 8]
// 007ffcd5  85f6                 test esi, esi
// 007ffcd7  7410                 je 0x7ffce9
// 007ffcd9  8bce                 mov ecx, esi
// 007ffcdb  e8a0fcffff           call 0x7ff980
// 007ffce0  56                   push esi
// 007ffce1  e872a30000           call 0x80a058
// 007ffce6  83c404               add esp, 4
// 007ffce9  5e                   pop esi
// 007ffcea  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
