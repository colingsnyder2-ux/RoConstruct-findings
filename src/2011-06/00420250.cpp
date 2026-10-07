// roc 2011-06 00420250  unit: RBX::DSVideoCaptureEngine  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00420250
//
// 00420250  56                   push esi
// 00420251  8b742408             mov esi, dword ptr [esp + 8]
// 00420255  85f6                 test esi, esi
// 00420257  7410                 je 0x420269
// 00420259  8bce                 mov ecx, esi
// 0042025b  e8309efeff           call 0x40a090
// 00420260  56                   push esi
// 00420261  e8f29d3e00           call 0x80a058
// 00420266  83c404               add esp, 4
// 00420269  5e                   pop esi
// 0042026a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
