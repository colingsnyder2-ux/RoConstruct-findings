// from server: 100% by auto
// roc 2010-06 00724560  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00724560
//
// 00724560  56                   push esi
// 00724561  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00724564  85f6                 test esi, esi
// 00724566  7410                 je 0x724578
// 00724568  8bce                 mov ecx, esi
// 0072456a  e8d1f1ffff           call 0x723740
// 0072456f  56                   push esi
// 00724570  e825340800           call 0x7a799a
// 00724575  83c404               add esp, 4
// 00724578  5e                   pop esi
// 00724579  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
