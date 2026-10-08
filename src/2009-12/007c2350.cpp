// roc 2009-12 007c2350  unit: RBX::VChatLine::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007c2350
//
// 007c2350  56                   push esi
// 007c2351  8b710c               mov esi, dword ptr [ecx + 0xc]
// 007c2354  85f6                 test esi, esi
// 007c2356  7410                 je 0x7c2368
// 007c2358  8bce                 mov ecx, esi
// 007c235a  e811fcffff           call 0x7c1f70
// 007c235f  56                   push esi
// 007c2360  e8f5140300           call 0x7f385a
// 007c2365  83c404               add esp, 4
// 007c2368  5e                   pop esi
// 007c2369  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
