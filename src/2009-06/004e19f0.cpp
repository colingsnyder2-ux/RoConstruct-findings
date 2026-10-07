// roc 2009-06 004e19f0  unit: PacketReceiveJob  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e19f0
//
// 004e19f0  56                   push esi
// 004e19f1  8b742408             mov esi, dword ptr [esp + 8]
// 004e19f5  85f6                 test esi, esi
// 004e19f7  7410                 je 0x4e1a09
// 004e19f9  8bce                 mov ecx, esi
// 004e19fb  e8408bffff           call 0x4da540
// 004e1a00  56                   push esi
// 004e1a01  e82c702300           call 0x718a32
// 004e1a06  83c404               add esp, 4
// 004e1a09  5e                   pop esi
// 004e1a0a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
