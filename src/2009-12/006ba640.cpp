// roc 2009-12 006ba640  unit: RBX::VStockSound::?$FactoryProduct::Creator  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ba640
//
// 006ba640  56                   push esi
// 006ba641  8b742408             mov esi, dword ptr [esp + 8]
// 006ba645  85f6                 test esi, esi
// 006ba647  7410                 je 0x6ba659
// 006ba649  8bce                 mov ecx, esi
// 006ba64b  e8f0f9ffff           call 0x6ba040
// 006ba650  56                   push esi
// 006ba651  e804921300           call 0x7f385a
// 006ba656  83c404               add esp, 4
// 006ba659  5e                   pop esi
// 006ba65a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
