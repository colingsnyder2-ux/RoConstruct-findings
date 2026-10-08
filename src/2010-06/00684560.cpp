// from server: 100% by auto
// roc 2010-06 00684560  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::slot  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00684560
//
// 00684560  56                   push esi
// 00684561  8b742408             mov esi, dword ptr [esp + 8]
// 00684565  85f6                 test esi, esi
// 00684567  7410                 je 0x684579
// 00684569  8bce                 mov ecx, esi
// 0068456b  e8c0ccffff           call 0x681230
// 00684570  56                   push esi
// 00684571  e824341200           call 0x7a799a
// 00684576  83c404               add esp, 4
// 00684579  5e                   pop esi
// 0068457a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
