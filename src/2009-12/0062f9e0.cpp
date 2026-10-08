// roc 2009-12 0062f9e0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062f9e0
//
// 0062f9e0  56                   push esi
// 0062f9e1  8b742408             mov esi, dword ptr [esp + 8]
// 0062f9e5  85f6                 test esi, esi
// 0062f9e7  7410                 je 0x62f9f9
// 0062f9e9  8bce                 mov ecx, esi
// 0062f9eb  e84079dfff           call 0x427330
// 0062f9f0  56                   push esi
// 0062f9f1  e8643e1c00           call 0x7f385a
// 0062f9f6  83c404               add esp, 4
// 0062f9f9  5e                   pop esi
// 0062f9fa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
