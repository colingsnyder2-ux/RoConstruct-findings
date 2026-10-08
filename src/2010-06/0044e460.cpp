// from server: 100% by auto
// roc 2010-06 0044e460  unit: CRbxPlayDocTemplate  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044e460
//
// 0044e460  56                   push esi
// 0044e461  8b742408             mov esi, dword ptr [esp + 8]
// 0044e465  85f6                 test esi, esi
// 0044e467  7410                 je 0x44e479
// 0044e469  8bce                 mov ecx, esi
// 0044e46b  e8207d1e00           call 0x636190
// 0044e470  56                   push esi
// 0044e471  e824953500           call 0x7a799a
// 0044e476  83c404               add esp, 4
// 0044e479  5e                   pop esi
// 0044e47a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
