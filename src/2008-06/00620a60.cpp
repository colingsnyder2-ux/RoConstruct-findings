// from server: 100% by auto
// roc 2008-06 00620a60  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00620a60
//
// 00620a60  56                   push esi
// 00620a61  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00620a64  85f6                 test esi, esi
// 00620a66  7410                 je 0x620a78
// 00620a68  8bce                 mov ecx, esi
// 00620a6a  e81139f7ff           call 0x594380
// 00620a6f  56                   push esi
// 00620a70  e805fc0700           call 0x6a067a
// 00620a75  83c404               add esp, 4
// 00620a78  5e                   pop esi
// 00620a79  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
