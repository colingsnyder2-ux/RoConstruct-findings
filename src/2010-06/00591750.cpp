// from server: 100% by auto
// roc 2010-06 00591750  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00591750
//
// 00591750  56                   push esi
// 00591751  8b742408             mov esi, dword ptr [esp + 8]
// 00591755  85f6                 test esi, esi
// 00591757  7410                 je 0x591769
// 00591759  8bce                 mov ecx, esi
// 0059175b  e83060e9ff           call 0x427790
// 00591760  56                   push esi
// 00591761  e834622100           call 0x7a799a
// 00591766  83c404               add esp, 4
// 00591769  5e                   pop esi
// 0059176a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
