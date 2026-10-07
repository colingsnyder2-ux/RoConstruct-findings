// roc 2010-06 00628490  unit: RBX::VStockSound::?$FactoryProduct::Creator  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00628490
//
// 00628490  56                   push esi
// 00628491  8b742408             mov esi, dword ptr [esp + 8]
// 00628495  85f6                 test esi, esi
// 00628497  7410                 je 0x6284a9
// 00628499  8bce                 mov ecx, esi
// 0062849b  e8c0f9ffff           call 0x627e60
// 006284a0  56                   push esi
// 006284a1  e8f4f41700           call 0x7a799a
// 006284a6  83c404               add esp, 4
// 006284a9  5e                   pop esi
// 006284aa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
