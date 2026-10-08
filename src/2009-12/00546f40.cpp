// roc 2009-12 00546f40  unit: RBX::Network::VSharedStringProtectedDictionary::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00546f40
//
// 00546f40  56                   push esi
// 00546f41  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00546f44  85f6                 test esi, esi
// 00546f46  7410                 je 0x546f58
// 00546f48  8bce                 mov ecx, esi
// 00546f4a  e8c1d1ffff           call 0x544110
// 00546f4f  56                   push esi
// 00546f50  e805c92a00           call 0x7f385a
// 00546f55  83c404               add esp, 4
// 00546f58  5e                   pop esi
// 00546f59  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
