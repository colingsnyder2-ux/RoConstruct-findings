// from server: 100% by auto
// roc 2007-08 0044adc0  unit: ErrorUploader::Udata::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044adc0
//
// 0044adc0  56                   push esi
// 0044adc1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0044adc4  85f6                 test esi, esi
// 0044adc6  7410                 je 0x44add8
// 0044adc8  8bce                 mov ecx, esi
// 0044adca  e8f1f7ffff           call 0x44a5c0
// 0044adcf  56                   push esi
// 0044add0  e88d4e1e00           call 0x62fc62
// 0044add5  83c404               add esp, 4
// 0044add8  5e                   pop esi
// 0044add9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
