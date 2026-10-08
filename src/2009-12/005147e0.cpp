// roc 2009-12 005147e0  unit: RakNet::VBitStream::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005147e0
//
// 005147e0  56                   push esi
// 005147e1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005147e4  85f6                 test esi, esi
// 005147e6  7410                 je 0x5147f8
// 005147e8  8bce                 mov ecx, esi
// 005147ea  e831a30100           call 0x52eb20
// 005147ef  56                   push esi
// 005147f0  e865f02d00           call 0x7f385a
// 005147f5  83c404               add esp, 4
// 005147f8  5e                   pop esi
// 005147f9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
