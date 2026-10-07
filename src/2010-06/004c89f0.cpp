// roc 2010-06 004c89f0  unit: RBX::VInstance::V?$shared_ptr::V?$vector::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c89f0
//
// 004c89f0  56                   push esi
// 004c89f1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004c89f4  85f6                 test esi, esi
// 004c89f6  7410                 je 0x4c8a08
// 004c89f8  8bce                 mov ecx, esi
// 004c89fa  e8d1392d00           call 0x79c3d0
// 004c89ff  56                   push esi
// 004c8a00  e895ef2d00           call 0x7a799a
// 004c8a05  83c404               add esp, 4
// 004c8a08  5e                   pop esi
// 004c8a09  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
