// roc 2009-06 0070ada0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070ada0
//
// 0070ada0  56                   push esi
// 0070ada1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0070ada4  85f6                 test esi, esi
// 0070ada6  7410                 je 0x70adb8
// 0070ada8  8bce                 mov ecx, esi
// 0070adaa  e821300000           call 0x70ddd0
// 0070adaf  56                   push esi
// 0070adb0  e87ddc0000           call 0x718a32
// 0070adb5  83c404               add esp, 4
// 0070adb8  5e                   pop esi
// 0070adb9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
