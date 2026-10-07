// roc 2008-06 0041aec0  unit: boost::signals::detail::slot_base::Udata_t::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041aec0
//
// 0041aec0  56                   push esi
// 0041aec1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0041aec4  85f6                 test esi, esi
// 0041aec6  7410                 je 0x41aed8
// 0041aec8  8bce                 mov ecx, esi
// 0041aeca  e811fbffff           call 0x41a9e0
// 0041aecf  56                   push esi
// 0041aed0  e8a5572800           call 0x6a067a
// 0041aed5  83c404               add esp, 4
// 0041aed8  5e                   pop esi
// 0041aed9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
