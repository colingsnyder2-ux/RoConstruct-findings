// roc 2009-12 005507c0  unit: RBX::Network::VConcurrentRakPeer::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005507c0
//
// 005507c0  56                   push esi
// 005507c1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005507c4  85f6                 test esi, esi
// 005507c6  7410                 je 0x5507d8
// 005507c8  8bce                 mov ecx, esi
// 005507ca  e801f2fdff           call 0x52f9d0
// 005507cf  56                   push esi
// 005507d0  e885302a00           call 0x7f385a
// 005507d5  83c404               add esp, 4
// 005507d8  5e                   pop esi
// 005507d9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
