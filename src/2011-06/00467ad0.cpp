// from server: 100% by auto
// roc 2011-06 00467ad0  unit: RBX::Tasks::VSequence::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00467ad0
//
// 00467ad0  56                   push esi
// 00467ad1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00467ad4  85f6                 test esi, esi
// 00467ad6  7410                 je 0x467ae8
// 00467ad8  8bce                 mov ecx, esi
// 00467ada  e891e8ffff           call 0x466370
// 00467adf  56                   push esi
// 00467ae0  e873253a00           call 0x80a058
// 00467ae5  83c404               add esp, 4
// 00467ae8  5e                   pop esi
// 00467ae9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
