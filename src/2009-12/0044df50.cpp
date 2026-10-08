// roc 2009-12 0044df50  unit: RBX::VProfanityFilter::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044df50
//
// 0044df50  56                   push esi
// 0044df51  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0044df54  85f6                 test esi, esi
// 0044df56  7410                 je 0x44df68
// 0044df58  8bce                 mov ecx, esi
// 0044df5a  e831c62700           call 0x6ca590
// 0044df5f  56                   push esi
// 0044df60  e8f5583a00           call 0x7f385a
// 0044df65  83c404               add esp, 4
// 0044df68  5e                   pop esi
// 0044df69  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
