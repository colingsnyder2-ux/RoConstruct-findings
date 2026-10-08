// from server: 100% by auto
// roc 2007-08 0044a9d0  unit: CRobloxApp  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044a9d0
//
// 0044a9d0  56                   push esi
// 0044a9d1  8b742408             mov esi, dword ptr [esp + 8]
// 0044a9d5  85f6                 test esi, esi
// 0044a9d7  7410                 je 0x44a9e9
// 0044a9d9  8bce                 mov ecx, esi
// 0044a9db  e8e0fbffff           call 0x44a5c0
// 0044a9e0  56                   push esi
// 0044a9e1  e87c521e00           call 0x62fc62
// 0044a9e6  83c404               add esp, 4
// 0044a9e9  5e                   pop esi
// 0044a9ea  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
