// roc 2010-06 004f5810  unit: RBX::Network::VSharedStringDictionary::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004f5810
//
// 004f5810  56                   push esi
// 004f5811  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004f5814  85f6                 test esi, esi
// 004f5816  7410                 je 0x4f5828
// 004f5818  8bce                 mov ecx, esi
// 004f581a  e8d1d4ffff           call 0x4f2cf0
// 004f581f  56                   push esi
// 004f5820  e875212b00           call 0x7a799a
// 004f5825  83c404               add esp, 4
// 004f5828  5e                   pop esi
// 004f5829  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
