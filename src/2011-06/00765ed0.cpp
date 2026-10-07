// roc 2011-06 00765ed0  unit: RBX::Lua::LuaArguments  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00765ed0
//
// 00765ed0  56                   push esi
// 00765ed1  8b742408             mov esi, dword ptr [esp + 8]
// 00765ed5  85f6                 test esi, esi
// 00765ed7  7410                 je 0x765ee9
// 00765ed9  8bce                 mov ecx, esi
// 00765edb  e830f0ffff           call 0x764f10
// 00765ee0  56                   push esi
// 00765ee1  e872410a00           call 0x80a058
// 00765ee6  83c404               add esp, 4
// 00765ee9  5e                   pop esi
// 00765eea  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
