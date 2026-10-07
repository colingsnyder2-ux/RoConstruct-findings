// roc 2012-06 00473cb0  unit: ErrorUploader::Udata::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00473cb0
//
// 00473cb0  56                   push esi
// 00473cb1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00473cb4  85f6                 test esi, esi
// 00473cb6  7410                 je 0x473cc8
// 00473cb8  8bce                 mov ecx, esi
// 00473cba  e861dcffff           call 0x471920
// 00473cbf  56                   push esi
// 00473cc0  e84fe45000           call 0x982114
// 00473cc5  83c404               add esp, 4
// 00473cc8  5e                   pop esi
// 00473cc9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
