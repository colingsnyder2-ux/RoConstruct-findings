// roc 2012-06 006b3930  unit: RBX::VScriptContext::?$EventDesc  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006b3930
//
// 006b3930  56                   push esi
// 006b3931  8b742408             mov esi, dword ptr [esp + 8]
// 006b3935  85f6                 test esi, esi
// 006b3937  7410                 je 0x6b3949
// 006b3939  8bce                 mov ecx, esi
// 006b393b  e870ddffff           call 0x6b16b0
// 006b3940  56                   push esi
// 006b3941  e8cee72c00           call 0x982114
// 006b3946  83c404               add esp, 4
// 006b3949  5e                   pop esi
// 006b394a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
