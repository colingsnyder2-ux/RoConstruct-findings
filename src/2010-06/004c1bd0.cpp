// from server: 100% by auto
// roc 2010-06 004c1bd0  unit: RakNet::VBitStream::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c1bd0
//
// 004c1bd0  56                   push esi
// 004c1bd1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004c1bd4  85f6                 test esi, esi
// 004c1bd6  7410                 je 0x4c1be8
// 004c1bd8  8bce                 mov ecx, esi
// 004c1bda  e851b30100           call 0x4dcf30
// 004c1bdf  56                   push esi
// 004c1be0  e8b55d2e00           call 0x7a799a
// 004c1be5  83c404               add esp, 4
// 004c1be8  5e                   pop esi
// 004c1be9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
