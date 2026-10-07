// roc 2009-06 0070e4f0  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070e4f0
//
// 0070e4f0  56                   push esi
// 0070e4f1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0070e4f4  85f6                 test esi, esi
// 0070e4f6  7410                 je 0x70e508
// 0070e4f8  8bce                 mov ecx, esi
// 0070e4fa  e8e1fcffff           call 0x70e1e0
// 0070e4ff  56                   push esi
// 0070e500  e82da50000           call 0x718a32
// 0070e505  83c404               add esp, 4
// 0070e508  5e                   pop esi
// 0070e509  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
