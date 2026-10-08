// from server: 100% by auto
// roc 2008-06 00593e20  unit: boost::Vrecursive_mutex::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00593e20
//
// 00593e20  56                   push esi
// 00593e21  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00593e24  85f6                 test esi, esi
// 00593e26  7410                 je 0x593e38
// 00593e28  8bce                 mov ecx, esi
// 00593e2a  e8810e0000           call 0x594cb0
// 00593e2f  56                   push esi
// 00593e30  e845c81000           call 0x6a067a
// 00593e35  83c404               add esp, 4
// 00593e38  5e                   pop esi
// 00593e39  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
