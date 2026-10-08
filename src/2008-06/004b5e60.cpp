// from server: 100% by auto
// roc 2008-06 004b5e60  unit: RBX::Network::VSharedStringDictionary::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b5e60
//
// 004b5e60  56                   push esi
// 004b5e61  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004b5e64  85f6                 test esi, esi
// 004b5e66  7410                 je 0x4b5e78
// 004b5e68  8bce                 mov ecx, esi
// 004b5e6a  e801dfffff           call 0x4b3d70
// 004b5e6f  56                   push esi
// 004b5e70  e805a81e00           call 0x6a067a
// 004b5e75  83c404               add esp, 4
// 004b5e78  5e                   pop esi
// 004b5e79  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
