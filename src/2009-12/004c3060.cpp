// roc 2009-12 004c3060  unit: RBX::VLevelCollector::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c3060
//
// 004c3060  56                   push esi
// 004c3061  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004c3064  85f6                 test esi, esi
// 004c3066  7410                 je 0x4c3078
// 004c3068  8bce                 mov ecx, esi
// 004c306a  e811f30e00           call 0x5b2380
// 004c306f  56                   push esi
// 004c3070  e8e5073300           call 0x7f385a
// 004c3075  83c404               add esp, 4
// 004c3078  5e                   pop esi
// 004c3079  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
