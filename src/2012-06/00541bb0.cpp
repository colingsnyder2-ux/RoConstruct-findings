// roc 2012-06 00541bb0  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00541bb0
//
// 00541bb0  56                   push esi
// 00541bb1  8b742408             mov esi, dword ptr [esp + 8]
// 00541bb5  85f6                 test esi, esi
// 00541bb7  7410                 je 0x541bc9
// 00541bb9  8bce                 mov ecx, esi
// 00541bbb  e8f05a0200           call 0x5676b0
// 00541bc0  56                   push esi
// 00541bc1  e84e054400           call 0x982114
// 00541bc6  83c404               add esp, 4
// 00541bc9  5e                   pop esi
// 00541bca  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
