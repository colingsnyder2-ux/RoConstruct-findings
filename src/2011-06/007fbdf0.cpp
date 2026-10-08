// from server: 100% by auto
// roc 2011-06 007fbdf0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fbdf0
//
// 007fbdf0  56                   push esi
// 007fbdf1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 007fbdf4  85f6                 test esi, esi
// 007fbdf6  7410                 je 0x7fbe08
// 007fbdf8  8bce                 mov ecx, esi
// 007fbdfa  e8b18ac0ff           call 0x4048b0
// 007fbdff  56                   push esi
// 007fbe00  e853e20000           call 0x80a058
// 007fbe05  83c404               add esp, 4
// 007fbe08  5e                   pop esi
// 007fbe09  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
