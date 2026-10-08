// from server: 100% by auto
// roc 2010-06 00592b50  unit: RBX::Reflection::VValue::V?$vector::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00592b50
//
// 00592b50  56                   push esi
// 00592b51  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00592b54  85f6                 test esi, esi
// 00592b56  7410                 je 0x592b68
// 00592b58  8bce                 mov ecx, esi
// 00592b5a  e8314ce9ff           call 0x427790
// 00592b5f  56                   push esi
// 00592b60  e8354e2100           call 0x7a799a
// 00592b65  83c404               add esp, 4
// 00592b68  5e                   pop esi
// 00592b69  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
