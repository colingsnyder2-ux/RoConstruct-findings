// from server: 100% by auto
// roc 2009-06 004ed7e0  unit: RBX::Network::VSharedStringDictionary::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ed7e0
//
// 004ed7e0  56                   push esi
// 004ed7e1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004ed7e4  85f6                 test esi, esi
// 004ed7e6  7410                 je 0x4ed7f8
// 004ed7e8  8bce                 mov ecx, esi
// 004ed7ea  e821e2ffff           call 0x4eba10
// 004ed7ef  56                   push esi
// 004ed7f0  e83db22200           call 0x718a32
// 004ed7f5  83c404               add esp, 4
// 004ed7f8  5e                   pop esi
// 004ed7f9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
