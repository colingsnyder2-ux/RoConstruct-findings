// from server: 100% by auto
// roc 2012-06 007203a0  unit: RBX::P8Workspace::?$GetSetImpl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007203a0
//
// 007203a0  56                   push esi
// 007203a1  8b742408             mov esi, dword ptr [esp + 8]
// 007203a5  85f6                 test esi, esi
// 007203a7  7410                 je 0x7203b9
// 007203a9  8bce                 mov ecx, esi
// 007203ab  e8f058f5ff           call 0x675ca0
// 007203b0  56                   push esi
// 007203b1  e85e1d2600           call 0x982114
// 007203b6  83c404               add esp, 4
// 007203b9  5e                   pop esi
// 007203ba  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
