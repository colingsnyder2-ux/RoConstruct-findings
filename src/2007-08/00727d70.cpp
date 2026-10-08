// from server: 100% by auto
// roc 2007-08 00727d70  unit: boost::thread_resource_error  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00727d70
//
// 00727d70  56                   push esi
// 00727d71  8b742408             mov esi, dword ptr [esp + 8]
// 00727d75  85f6                 test esi, esi
// 00727d77  7410                 je 0x727d89
// 00727d79  8bce                 mov ecx, esi
// 00727d7b  e800ffffff           call 0x727c80
// 00727d80  56                   push esi
// 00727d81  e8dc7ef0ff           call 0x62fc62
// 00727d86  83c404               add esp, 4
// 00727d89  5e                   pop esi
// 00727d8a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
