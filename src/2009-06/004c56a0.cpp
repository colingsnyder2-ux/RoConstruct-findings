// roc 2009-06 004c56a0  unit: RakNet::VBitStream::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c56a0
//
// 004c56a0  56                   push esi
// 004c56a1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004c56a4  85f6                 test esi, esi
// 004c56a6  7410                 je 0x4c56b8
// 004c56a8  8bce                 mov ecx, esi
// 004c56aa  e871400100           call 0x4d9720
// 004c56af  56                   push esi
// 004c56b0  e87d332500           call 0x718a32
// 004c56b5  83c404               add esp, 4
// 004c56b8  5e                   pop esi
// 004c56b9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
