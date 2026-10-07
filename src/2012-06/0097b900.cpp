// roc 2012-06 0097b900  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0097b900
//
// 0097b900  56                   push esi
// 0097b901  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0097b904  85f6                 test esi, esi
// 0097b906  7410                 je 0x97b918
// 0097b908  8bce                 mov ecx, esi
// 0097b90a  e851feffff           call 0x97b760
// 0097b90f  56                   push esi
// 0097b910  e8ff670000           call 0x982114
// 0097b915  83c404               add esp, 4
// 0097b918  5e                   pop esi
// 0097b919  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
