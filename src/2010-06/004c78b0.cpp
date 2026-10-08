// from server: 100% by auto
// roc 2010-06 004c78b0  unit: RBX::Network::Players::W4ChatOption::?$EnumDesc  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c78b0
//
// 004c78b0  56                   push esi
// 004c78b1  8b742408             mov esi, dword ptr [esp + 8]
// 004c78b5  85f6                 test esi, esi
// 004c78b7  7410                 je 0x4c78c9
// 004c78b9  8bce                 mov ecx, esi
// 004c78bb  e8104b2d00           call 0x79c3d0
// 004c78c0  56                   push esi
// 004c78c1  e8d4002e00           call 0x7a799a
// 004c78c6  83c404               add esp, 4
// 004c78c9  5e                   pop esi
// 004c78ca  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
