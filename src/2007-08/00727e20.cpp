// roc 2007-08 00727e20  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00727e20
//
// 00727e20  56                   push esi
// 00727e21  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00727e24  85f6                 test esi, esi
// 00727e26  7410                 je 0x727e38
// 00727e28  8bce                 mov ecx, esi
// 00727e2a  e851feffff           call 0x727c80
// 00727e2f  56                   push esi
// 00727e30  e82d7ef0ff           call 0x62fc62
// 00727e35  83c404               add esp, 4
// 00727e38  5e                   pop esi
// 00727e39  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
