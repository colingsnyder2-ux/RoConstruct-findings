// from server: 100% by auto
// roc 2007-08 0056d1d0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d1d0
//
// 0056d1d0  56                   push esi
// 0056d1d1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0056d1d4  85f6                 test esi, esi
// 0056d1d6  7410                 je 0x56d1e8
// 0056d1d8  8bce                 mov ecx, esi
// 0056d1da  e8b1fbffff           call 0x56cd90
// 0056d1df  56                   push esi
// 0056d1e0  e87d2a0c00           call 0x62fc62
// 0056d1e5  83c404               add esp, 4
// 0056d1e8  5e                   pop esi
// 0056d1e9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
