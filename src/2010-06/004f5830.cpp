// from server: 100% by auto
// roc 2010-06 004f5830  unit: RBX::Network::VSharedStringProtectedDictionary::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004f5830
//
// 004f5830  56                   push esi
// 004f5831  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004f5834  85f6                 test esi, esi
// 004f5836  7410                 je 0x4f5848
// 004f5838  8bce                 mov ecx, esi
// 004f583a  e851d1ffff           call 0x4f2990
// 004f583f  56                   push esi
// 004f5840  e855212b00           call 0x7a799a
// 004f5845  83c404               add esp, 4
// 004f5848  5e                   pop esi
// 004f5849  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
