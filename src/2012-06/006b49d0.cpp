// roc 2012-06 006b49d0  unit: RBX::VScriptStats::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006b49d0
//
// 006b49d0  56                   push esi
// 006b49d1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006b49d4  85f6                 test esi, esi
// 006b49d6  7410                 je 0x6b49e8
// 006b49d8  8bce                 mov ecx, esi
// 006b49da  e8d1ccffff           call 0x6b16b0
// 006b49df  56                   push esi
// 006b49e0  e82fd72c00           call 0x982114
// 006b49e5  83c404               add esp, 4
// 006b49e8  5e                   pop esi
// 006b49e9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
