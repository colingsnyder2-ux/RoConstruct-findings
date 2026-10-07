// roc 2007-08 0056d020  unit: RBX::Lua::FunctionRef  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d020
//
// 0056d020  56                   push esi
// 0056d021  8b742408             mov esi, dword ptr [esp + 8]
// 0056d025  85f6                 test esi, esi
// 0056d027  7410                 je 0x56d039
// 0056d029  8bce                 mov ecx, esi
// 0056d02b  e860fdffff           call 0x56cd90
// 0056d030  56                   push esi
// 0056d031  e82c2c0c00           call 0x62fc62
// 0056d036  83c404               add esp, 4
// 0056d039  5e                   pop esi
// 0056d03a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
