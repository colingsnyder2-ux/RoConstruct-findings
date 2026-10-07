// roc 2008-06 005bb0f0  unit: RBX::Soundscape::VSound::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bb0f0
//
// 005bb0f0  56                   push esi
// 005bb0f1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005bb0f4  85f6                 test esi, esi
// 005bb0f6  7410                 je 0x5bb108
// 005bb0f8  8bce                 mov ecx, esi
// 005bb0fa  e811f3ffff           call 0x5ba410
// 005bb0ff  56                   push esi
// 005bb100  e875550e00           call 0x6a067a
// 005bb105  83c404               add esp, 4
// 005bb108  5e                   pop esi
// 005bb109  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
