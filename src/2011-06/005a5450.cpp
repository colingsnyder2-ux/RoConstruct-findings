// roc 2011-06 005a5450  unit: RBX::Soundscape::VSound::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a5450
//
// 005a5450  56                   push esi
// 005a5451  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005a5454  85f6                 test esi, esi
// 005a5456  7410                 je 0x5a5468
// 005a5458  8bce                 mov ecx, esi
// 005a545a  e881f4ffff           call 0x5a48e0
// 005a545f  56                   push esi
// 005a5460  e8f34b2600           call 0x80a058
// 005a5465  83c404               add esp, 4
// 005a5468  5e                   pop esi
// 005a5469  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
