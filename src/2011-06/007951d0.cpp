// roc 2011-06 007951d0  unit: RBX::VHttp::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007951d0
//
// 007951d0  56                   push esi
// 007951d1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 007951d4  85f6                 test esi, esi
// 007951d6  7410                 je 0x7951e8
// 007951d8  8bce                 mov ecx, esi
// 007951da  e8b14ec7ff           call 0x40a090
// 007951df  56                   push esi
// 007951e0  e8734e0700           call 0x80a058
// 007951e5  83c404               add esp, 4
// 007951e8  5e                   pop esi
// 007951e9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
