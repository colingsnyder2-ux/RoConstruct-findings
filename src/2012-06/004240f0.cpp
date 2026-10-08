// from server: 100% by auto
// roc 2012-06 004240f0  unit: RBX::DSVideoCaptureEngine  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004240f0
//
// 004240f0  56                   push esi
// 004240f1  8b742408             mov esi, dword ptr [esp + 8]
// 004240f5  85f6                 test esi, esi
// 004240f7  7410                 je 0x424109
// 004240f9  8bce                 mov ecx, esi
// 004240fb  e85076feff           call 0x40b750
// 00424100  56                   push esi
// 00424101  e80ee05500           call 0x982114
// 00424106  83c404               add esp, 4
// 00424109  5e                   pop esi
// 0042410a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
