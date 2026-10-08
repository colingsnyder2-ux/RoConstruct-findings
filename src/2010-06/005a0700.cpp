// from server: 100% by auto
// roc 2010-06 005a0700  unit: RBX::MD5HasherImpl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a0700
//
// 005a0700  56                   push esi
// 005a0701  8b742408             mov esi, dword ptr [esp + 8]
// 005a0705  85f6                 test esi, esi
// 005a0707  7410                 je 0x5a0719
// 005a0709  8bce                 mov ecx, esi
// 005a070b  e860feffff           call 0x5a0570
// 005a0710  56                   push esi
// 005a0711  e884722000           call 0x7a799a
// 005a0716  83c404               add esp, 4
// 005a0719  5e                   pop esi
// 005a071a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
