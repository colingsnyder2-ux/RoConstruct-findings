// from server: 100% by auto
// roc 2008-06 0041ae10  unit: VDHTMLWindow::?$BoundFuncDesc  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041ae10
//
// 0041ae10  56                   push esi
// 0041ae11  8b742408             mov esi, dword ptr [esp + 8]
// 0041ae15  85f6                 test esi, esi
// 0041ae17  7410                 je 0x41ae29
// 0041ae19  8bce                 mov ecx, esi
// 0041ae1b  e8c0fbffff           call 0x41a9e0
// 0041ae20  56                   push esi
// 0041ae21  e854582800           call 0x6a067a
// 0041ae26  83c404               add esp, 4
// 0041ae29  5e                   pop esi
// 0041ae2a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
