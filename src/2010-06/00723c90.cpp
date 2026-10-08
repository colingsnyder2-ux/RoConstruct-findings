// from server: 100% by auto
// roc 2010-06 00723c90  unit: RBX::Lua::VWeakThreadRef::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00723c90
//
// 00723c90  56                   push esi
// 00723c91  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00723c94  85f6                 test esi, esi
// 00723c96  7410                 je 0x723ca8
// 00723c98  8bce                 mov ecx, esi
// 00723c9a  e8a166f9ff           call 0x6ba340
// 00723c9f  56                   push esi
// 00723ca0  e8f53c0800           call 0x7a799a
// 00723ca5  83c404               add esp, 4
// 00723ca8  5e                   pop esi
// 00723ca9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
