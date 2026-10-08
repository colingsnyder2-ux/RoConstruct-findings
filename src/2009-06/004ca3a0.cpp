// from server: 100% by auto
// roc 2009-06 004ca3a0  unit: RBX::VInstance::V?$shared_ptr::V?$vector::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ca3a0
//
// 004ca3a0  56                   push esi
// 004ca3a1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004ca3a4  85f6                 test esi, esi
// 004ca3a6  7410                 je 0x4ca3b8
// 004ca3a8  8bce                 mov ecx, esi
// 004ca3aa  e811162400           call 0x70b9c0
// 004ca3af  56                   push esi
// 004ca3b0  e87de62400           call 0x718a32
// 004ca3b5  83c404               add esp, 4
// 004ca3b8  5e                   pop esi
// 004ca3b9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
