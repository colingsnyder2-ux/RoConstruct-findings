// roc 2009-12 00519c90  unit: RBX::Network::Players::W4ChatOption::?$EnumDesc  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00519c90
//
// 00519c90  56                   push esi
// 00519c91  8b742408             mov esi, dword ptr [esp + 8]
// 00519c95  85f6                 test esi, esi
// 00519c97  7410                 je 0x519ca9
// 00519c99  8bce                 mov ecx, esi
// 00519c9b  e8c0492400           call 0x75e660
// 00519ca0  56                   push esi
// 00519ca1  e8b49b2d00           call 0x7f385a
// 00519ca6  83c404               add esp, 4
// 00519ca9  5e                   pop esi
// 00519caa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
