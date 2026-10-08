// from server: 100% by auto
// roc 2012-06 006b9980  unit: RBX::MD5HasherImpl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006b9980
//
// 006b9980  56                   push esi
// 006b9981  8b742408             mov esi, dword ptr [esp + 8]
// 006b9985  85f6                 test esi, esi
// 006b9987  7410                 je 0x6b9999
// 006b9989  8bce                 mov ecx, esi
// 006b998b  e800ffffff           call 0x6b9890
// 006b9990  56                   push esi
// 006b9991  e87e872c00           call 0x982114
// 006b9996  83c404               add esp, 4
// 006b9999  5e                   pop esi
// 006b999a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
