// roc 2011-06 004c9920  unit: RakNet::VBitStream::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c9920
//
// 004c9920  56                   push esi
// 004c9921  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004c9924  85f6                 test esi, esi
// 004c9926  7410                 je 0x4c9938
// 004c9928  8bce                 mov ecx, esi
// 004c992a  e8e12f0200           call 0x4ec910
// 004c992f  56                   push esi
// 004c9930  e823073400           call 0x80a058
// 004c9935  83c404               add esp, 4
// 004c9938  5e                   pop esi
// 004c9939  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
