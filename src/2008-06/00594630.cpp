// from server: 100% by auto
// roc 2008-06 00594630  unit: RBX::Lua::VFunctionRef::?$holder  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594630
//
// 00594630  56                   push esi
// 00594631  8b742408             mov esi, dword ptr [esp + 8]
// 00594635  85f6                 test esi, esi
// 00594637  7410                 je 0x594649
// 00594639  8bce                 mov ecx, esi
// 0059463b  e850fcffff           call 0x594290
// 00594640  56                   push esi
// 00594641  e834c01000           call 0x6a067a
// 00594646  83c404               add esp, 4
// 00594649  5e                   pop esi
// 0059464a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
