// roc 2007-08 004b30e0  unit: RBX::Network::VSharedStringDictionary::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b30e0
//
// 004b30e0  56                   push esi
// 004b30e1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004b30e4  85f6                 test esi, esi
// 004b30e6  7410                 je 0x4b30f8
// 004b30e8  8bce                 mov ecx, esi
// 004b30ea  e841e9ffff           call 0x4b1a30
// 004b30ef  56                   push esi
// 004b30f0  e86dcb1700           call 0x62fc62
// 004b30f5  83c404               add esp, 4
// 004b30f8  5e                   pop esi
// 004b30f9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
