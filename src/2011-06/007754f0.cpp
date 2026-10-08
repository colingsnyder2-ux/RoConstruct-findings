// from server: 100% by auto
// roc 2011-06 007754f0  unit: RBX::LibraryService::VLibraryStateObject::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007754f0
//
// 007754f0  56                   push esi
// 007754f1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 007754f4  85f6                 test esi, esi
// 007754f6  7410                 je 0x775508
// 007754f8  8bce                 mov ecx, esi
// 007754fa  e85103ffff           call 0x765850
// 007754ff  56                   push esi
// 00775500  e8534b0900           call 0x80a058
// 00775505  83c404               add esp, 4
// 00775508  5e                   pop esi
// 00775509  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
