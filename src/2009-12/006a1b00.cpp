// roc 2009-12 006a1b00  unit: RBX::VScriptContext::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1b00
//
// 006a1b00  56                   push esi
// 006a1b01  8b742408             mov esi, dword ptr [esp + 8]
// 006a1b05  85f6                 test esi, esi
// 006a1b07  7410                 je 0x6a1b19
// 006a1b09  8bce                 mov ecx, esi
// 006a1b0b  e8c08e0900           call 0x73a9d0
// 006a1b10  56                   push esi
// 006a1b11  e8441d1500           call 0x7f385a
// 006a1b16  83c404               add esp, 4
// 006a1b19  5e                   pop esi
// 006a1b1a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
