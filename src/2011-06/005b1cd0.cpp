// roc 2011-06 005b1cd0  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b1cd0
//
// 005b1cd0  56                   push esi
// 005b1cd1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005b1cd4  85f6                 test esi, esi
// 005b1cd6  7410                 je 0x5b1ce8
// 005b1cd8  8bce                 mov ecx, esi
// 005b1cda  e871fdffff           call 0x5b1a50
// 005b1cdf  56                   push esi
// 005b1ce0  e873832500           call 0x80a058
// 005b1ce5  83c404               add esp, 4
// 005b1ce8  5e                   pop esi
// 005b1ce9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
