// roc 2009-12 0051ae20  unit: RBX::VInstance::V?$shared_ptr::V?$vector::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0051ae20
//
// 0051ae20  56                   push esi
// 0051ae21  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0051ae24  85f6                 test esi, esi
// 0051ae26  7410                 je 0x51ae38
// 0051ae28  8bce                 mov ecx, esi
// 0051ae2a  e831382400           call 0x75e660
// 0051ae2f  56                   push esi
// 0051ae30  e8258a2d00           call 0x7f385a
// 0051ae35  83c404               add esp, 4
// 0051ae38  5e                   pop esi
// 0051ae39  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
