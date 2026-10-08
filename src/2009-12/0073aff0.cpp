// roc 2009-12 0073aff0  unit: RBX::Lua::WeakThreadRef::VNode::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073aff0
//
// 0073aff0  56                   push esi
// 0073aff1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0073aff4  85f6                 test esi, esi
// 0073aff6  7410                 je 0x73b008
// 0073aff8  8bce                 mov ecx, esi
// 0073affa  e891fbffff           call 0x73ab90
// 0073afff  56                   push esi
// 0073b000  e855880b00           call 0x7f385a
// 0073b005  83c404               add esp, 4
// 0073b008  5e                   pop esi
// 0073b009  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
