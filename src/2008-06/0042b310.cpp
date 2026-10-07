// roc 2008-06 0042b310  unit: CLuaHtmlView::Binder::VPropBinding::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b310
//
// 0042b310  56                   push esi
// 0042b311  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0042b314  85f6                 test esi, esi
// 0042b316  7410                 je 0x42b328
// 0042b318  8bce                 mov ecx, esi
// 0042b31a  e801f4ffff           call 0x42a720
// 0042b31f  56                   push esi
// 0042b320  e855532700           call 0x6a067a
// 0042b325  83c404               add esp, 4
// 0042b328  5e                   pop esi
// 0042b329  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
