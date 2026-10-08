// from server: 100% by auto
// roc 2007-08 00417e70  unit: boost::signals::detail::slot_base::Udata_t::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00417e70
//
// 00417e70  56                   push esi
// 00417e71  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00417e74  85f6                 test esi, esi
// 00417e76  7410                 je 0x417e88
// 00417e78  8bce                 mov ecx, esi
// 00417e7a  e851fcffff           call 0x417ad0
// 00417e7f  56                   push esi
// 00417e80  e8dd7d2100           call 0x62fc62
// 00417e85  83c404               add esp, 4
// 00417e88  5e                   pop esi
// 00417e89  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
