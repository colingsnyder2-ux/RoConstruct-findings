// roc 2009-12 00546f20  unit: RBX::Network::VSharedStringDictionary::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00546f20
//
// 00546f20  56                   push esi
// 00546f21  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00546f24  85f6                 test esi, esi
// 00546f26  7410                 je 0x546f38
// 00546f28  8bce                 mov ecx, esi
// 00546f2a  e841d5ffff           call 0x544470
// 00546f2f  56                   push esi
// 00546f30  e825c92a00           call 0x7f385a
// 00546f35  83c404               add esp, 4
// 00546f38  5e                   pop esi
// 00546f39  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
