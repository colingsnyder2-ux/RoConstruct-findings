// roc 2010-06 00602b90  unit: RBX::VIAdornableCollector::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00602b90
//
// 00602b90  56                   push esi
// 00602b91  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00602b94  85f6                 test esi, esi
// 00602b96  7410                 je 0x602ba8
// 00602b98  8bce                 mov ecx, esi
// 00602b9a  e851353100           call 0x9160f0
// 00602b9f  56                   push esi
// 00602ba0  e8f54d1a00           call 0x7a799a
// 00602ba5  83c404               add esp, 4
// 00602ba8  5e                   pop esi
// 00602ba9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
