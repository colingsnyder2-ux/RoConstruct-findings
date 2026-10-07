// roc 2008-06 0061f3f0  unit: RBX::Lua::LuaArguments  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f3f0
//
// 0061f3f0  56                   push esi
// 0061f3f1  8b742408             mov esi, dword ptr [esp + 8]
// 0061f3f5  85f6                 test esi, esi
// 0061f3f7  7410                 je 0x61f409
// 0061f3f9  8bce                 mov ecx, esi
// 0061f3fb  e8705ff7ff           call 0x595370
// 0061f400  56                   push esi
// 0061f401  e874120800           call 0x6a067a
// 0061f406  83c404               add esp, 4
// 0061f409  5e                   pop esi
// 0061f40a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
