// roc 2009-12 007e63f0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e63f0
//
// 007e63f0  56                   push esi
// 007e63f1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 007e63f4  85f6                 test esi, esi
// 007e63f6  7410                 je 0x7e6408
// 007e63f8  8bce                 mov ecx, esi
// 007e63fa  e8e1140000           call 0x7e78e0
// 007e63ff  56                   push esi
// 007e6400  e855d40000           call 0x7f385a
// 007e6405  83c404               add esp, 4
// 007e6408  5e                   pop esi
// 007e6409  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
