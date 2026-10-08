// from server: 100% by auto
// roc 2009-06 00649890  unit: RBX::VStockSound::?$FactoryProduct::Creator  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00649890
//
// 00649890  56                   push esi
// 00649891  8b742408             mov esi, dword ptr [esp + 8]
// 00649895  85f6                 test esi, esi
// 00649897  7410                 je 0x6498a9
// 00649899  8bce                 mov ecx, esi
// 0064989b  e800faffff           call 0x6492a0
// 006498a0  56                   push esi
// 006498a1  e88cf10c00           call 0x718a32
// 006498a6  83c404               add esp, 4
// 006498a9  5e                   pop esi
// 006498aa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
