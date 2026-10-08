// from server: 100% by auto
// roc 2010-06 006024d0  unit: RBX::P8Workspace::?$GetSetImpl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006024d0
//
// 006024d0  56                   push esi
// 006024d1  8b742408             mov esi, dword ptr [esp + 8]
// 006024d5  85f6                 test esi, esi
// 006024d7  7410                 je 0x6024e9
// 006024d9  8bce                 mov ecx, esi
// 006024db  e8103c3100           call 0x9160f0
// 006024e0  56                   push esi
// 006024e1  e8b4541a00           call 0x7a799a
// 006024e6  83c404               add esp, 4
// 006024e9  5e                   pop esi
// 006024ea  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
