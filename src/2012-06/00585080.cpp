// roc 2012-06 00585080  unit: RBX::Network::VSharedStringDictionary::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00585080
//
// 00585080  56                   push esi
// 00585081  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00585084  85f6                 test esi, esi
// 00585086  7410                 je 0x585098
// 00585088  8bce                 mov ecx, esi
// 0058508a  e841d2ffff           call 0x5822d0
// 0058508f  56                   push esi
// 00585090  e87fd03f00           call 0x982114
// 00585095  83c404               add esp, 4
// 00585098  5e                   pop esi
// 00585099  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
