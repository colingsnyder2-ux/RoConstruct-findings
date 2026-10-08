// from server: 100% by auto
// roc 2010-06 0079e060  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0079e060
//
// 0079e060  56                   push esi
// 0079e061  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0079e064  85f6                 test esi, esi
// 0079e066  7410                 je 0x79e078
// 0079e068  8bce                 mov ecx, esi
// 0079e06a  e8d1fcffff           call 0x79dd40
// 0079e06f  56                   push esi
// 0079e070  e825990000           call 0x7a799a
// 0079e075  83c404               add esp, 4
// 0079e078  5e                   pop esi
// 0079e079  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
