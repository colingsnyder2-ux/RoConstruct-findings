// roc 2011-06 00627df0  unit: RBX::VScriptContext::?$EventDesc  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00627df0
//
// 00627df0  56                   push esi
// 00627df1  8b742408             mov esi, dword ptr [esp + 8]
// 00627df5  85f6                 test esi, esi
// 00627df7  7410                 je 0x627e09
// 00627df9  8bce                 mov ecx, esi
// 00627dfb  e850d0ffff           call 0x624e50
// 00627e00  56                   push esi
// 00627e01  e852221e00           call 0x80a058
// 00627e06  83c404               add esp, 4
// 00627e09  5e                   pop esi
// 00627e0a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
