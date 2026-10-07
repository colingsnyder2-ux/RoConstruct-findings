// roc 2007-08 005c4be0  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4be0
//
// 005c4be0  56                   push esi
// 005c4be1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005c4be4  85f6                 test esi, esi
// 005c4be6  7410                 je 0x5c4bf8
// 005c4be8  8bce                 mov ecx, esi
// 005c4bea  e8217ffaff           call 0x56cb10
// 005c4bef  56                   push esi
// 005c4bf0  e86db00600           call 0x62fc62
// 005c4bf5  83c404               add esp, 4
// 005c4bf8  5e                   pop esi
// 005c4bf9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
