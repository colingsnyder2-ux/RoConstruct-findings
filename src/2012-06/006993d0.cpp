// roc 2012-06 006993d0  unit: RBX::Soundscape::VSound::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006993d0
//
// 006993d0  56                   push esi
// 006993d1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006993d4  85f6                 test esi, esi
// 006993d6  7410                 je 0x6993e8
// 006993d8  8bce                 mov ecx, esi
// 006993da  e881f6ffff           call 0x698a60
// 006993df  56                   push esi
// 006993e0  e82f8d2e00           call 0x982114
// 006993e5  83c404               add esp, 4
// 006993e8  5e                   pop esi
// 006993e9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
