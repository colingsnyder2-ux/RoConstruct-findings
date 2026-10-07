// roc 2011-06 006288d0  unit: RBX::VScriptStats::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006288d0
//
// 006288d0  56                   push esi
// 006288d1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006288d4  85f6                 test esi, esi
// 006288d6  7410                 je 0x6288e8
// 006288d8  8bce                 mov ecx, esi
// 006288da  e871c5ffff           call 0x624e50
// 006288df  56                   push esi
// 006288e0  e873171e00           call 0x80a058
// 006288e5  83c404               add esp, 4
// 006288e8  5e                   pop esi
// 006288e9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
