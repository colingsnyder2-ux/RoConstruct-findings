// roc 2007-08 0042b8a0  unit: CLuaHtmlView::Binder::VPropBinding::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042b8a0
//
// 0042b8a0  56                   push esi
// 0042b8a1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0042b8a4  85f6                 test esi, esi
// 0042b8a6  7410                 je 0x42b8b8
// 0042b8a8  8bce                 mov ecx, esi
// 0042b8aa  e801efffff           call 0x42a7b0
// 0042b8af  56                   push esi
// 0042b8b0  e8ad432000           call 0x62fc62
// 0042b8b5  83c404               add esp, 4
// 0042b8b8  5e                   pop esi
// 0042b8b9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
