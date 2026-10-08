// roc 2009-12 007e9d90  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e9d90
//
// 007e9d90  56                   push esi
// 007e9d91  8b710c               mov esi, dword ptr [ecx + 0xc]
// 007e9d94  85f6                 test esi, esi
// 007e9d96  7410                 je 0x7e9da8
// 007e9d98  8bce                 mov ecx, esi
// 007e9d9a  e811fcffff           call 0x7e99b0
// 007e9d9f  56                   push esi
// 007e9da0  e8b59a0000           call 0x7f385a
// 007e9da5  83c404               add esp, 4
// 007e9da8  5e                   pop esi
// 007e9da9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
