// roc 2009-12 00697410  unit: RBX::VIAdornableCollector::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00697410
//
// 00697410  56                   push esi
// 00697411  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00697414  85f6                 test esi, esi
// 00697416  7410                 je 0x697428
// 00697418  8bce                 mov ecx, esi
// 0069741a  e8d1152800           call 0x9189f0
// 0069741f  56                   push esi
// 00697420  e835c41500           call 0x7f385a
// 00697425  83c404               add esp, 4
// 00697428  5e                   pop esi
// 00697429  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
