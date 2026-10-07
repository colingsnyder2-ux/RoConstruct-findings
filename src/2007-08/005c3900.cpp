// roc 2007-08 005c3900  unit: RBX::Lua::LuaArguments  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c3900
//
// 005c3900  56                   push esi
// 005c3901  8b742408             mov esi, dword ptr [esp + 8]
// 005c3905  85f6                 test esi, esi
// 005c3907  7410                 je 0x5c3919
// 005c3909  8bce                 mov ecx, esi
// 005c390b  e8504b1600           call 0x728460
// 005c3910  56                   push esi
// 005c3911  e84cc30600           call 0x62fc62
// 005c3916  83c404               add esp, 4
// 005c3919  5e                   pop esi
// 005c391a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
