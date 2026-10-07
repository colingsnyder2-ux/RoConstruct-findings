// roc 2009-06 006c1c50  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c1c50
//
// 006c1c50  56                   push esi
// 006c1c51  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006c1c54  85f6                 test esi, esi
// 006c1c56  7410                 je 0x6c1c68
// 006c1c58  8bce                 mov ecx, esi
// 006c1c5a  e8d13bfdff           call 0x695830
// 006c1c5f  56                   push esi
// 006c1c60  e8cd6d0500           call 0x718a32
// 006c1c65  83c404               add esp, 4
// 006c1c68  5e                   pop esi
// 006c1c69  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
