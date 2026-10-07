// roc 2008-06 005947d0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005947d0
//
// 005947d0  56                   push esi
// 005947d1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005947d4  85f6                 test esi, esi
// 005947d6  7410                 je 0x5947e8
// 005947d8  8bce                 mov ecx, esi
// 005947da  e8b1faffff           call 0x594290
// 005947df  56                   push esi
// 005947e0  e895be1000           call 0x6a067a
// 005947e5  83c404               add esp, 4
// 005947e8  5e                   pop esi
// 005947e9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
