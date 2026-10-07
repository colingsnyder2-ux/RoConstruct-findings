// roc 2010-06 006286c0  unit: RBX::Soundscape::VSound::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006286c0
//
// 006286c0  56                   push esi
// 006286c1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006286c4  85f6                 test esi, esi
// 006286c6  7410                 je 0x6286d8
// 006286c8  8bce                 mov ecx, esi
// 006286ca  e891f7ffff           call 0x627e60
// 006286cf  56                   push esi
// 006286d0  e8c5f21700           call 0x7a799a
// 006286d5  83c404               add esp, 4
// 006286d8  5e                   pop esi
// 006286d9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
