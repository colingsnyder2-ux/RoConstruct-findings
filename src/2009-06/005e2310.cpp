// from server: 100% by auto
// roc 2009-06 005e2310  unit: boost::Vthread::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e2310
//
// 005e2310  56                   push esi
// 005e2311  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005e2314  85f6                 test esi, esi
// 005e2316  7410                 je 0x5e2328
// 005e2318  8bce                 mov ecx, esi
// 005e231a  e881791200           call 0x709ca0
// 005e231f  56                   push esi
// 005e2320  e80d671300           call 0x718a32
// 005e2325  83c404               add esp, 4
// 005e2328  5e                   pop esi
// 005e2329  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
