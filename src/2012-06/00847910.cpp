// roc 2012-06 00847910  unit: RBX::LibraryService::VLibraryStateObject::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00847910
//
// 00847910  56                   push esi
// 00847911  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00847914  85f6                 test esi, esi
// 00847916  7410                 je 0x847928
// 00847918  8bce                 mov ecx, esi
// 0084791a  e811e3ffff           call 0x845c30
// 0084791f  56                   push esi
// 00847920  e8efa71300           call 0x982114
// 00847925  83c404               add esp, 4
// 00847928  5e                   pop esi
// 00847929  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
