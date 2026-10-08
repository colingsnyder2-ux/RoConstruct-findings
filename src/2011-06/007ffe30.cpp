// from server: 100% by auto
// roc 2011-06 007ffe30  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ffe30
//
// 007ffe30  56                   push esi
// 007ffe31  8b710c               mov esi, dword ptr [ecx + 0xc]
// 007ffe34  85f6                 test esi, esi
// 007ffe36  7410                 je 0x7ffe48
// 007ffe38  8bce                 mov ecx, esi
// 007ffe3a  e841fbffff           call 0x7ff980
// 007ffe3f  56                   push esi
// 007ffe40  e813a20000           call 0x80a058
// 007ffe45  83c404               add esp, 4
// 007ffe48  5e                   pop esi
// 007ffe49  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
