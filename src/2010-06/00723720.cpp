// from server: 100% by auto
// roc 2010-06 00723720  unit: RBX::UniversalTool  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00723720
//
// 00723720  56                   push esi
// 00723721  8b742408             mov esi, dword ptr [esp + 8]
// 00723725  85f6                 test esi, esi
// 00723727  7410                 je 0x723739
// 00723729  8bce                 mov ecx, esi
// 0072372b  e8106cf9ff           call 0x6ba340
// 00723730  56                   push esi
// 00723731  e864420800           call 0x7a799a
// 00723736  83c404               add esp, 4
// 00723739  5e                   pop esi
// 0072373a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
