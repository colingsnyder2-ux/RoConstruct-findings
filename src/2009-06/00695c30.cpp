// roc 2009-06 00695c30  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00695c30
//
// 00695c30  56                   push esi
// 00695c31  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00695c34  85f6                 test esi, esi
// 00695c36  7410                 je 0x695c48
// 00695c38  8bce                 mov ecx, esi
// 00695c3a  e8e1f9ffff           call 0x695620
// 00695c3f  56                   push esi
// 00695c40  e8ed2d0800           call 0x718a32
// 00695c45  83c404               add esp, 4
// 00695c48  5e                   pop esi
// 00695c49  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
