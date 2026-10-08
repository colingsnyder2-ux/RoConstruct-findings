// roc 2009-12 0078af40  unit: RBX::UniversalTool  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078af40
//
// 0078af40  56                   push esi
// 0078af41  8b742408             mov esi, dword ptr [esp + 8]
// 0078af45  85f6                 test esi, esi
// 0078af47  7410                 je 0x78af59
// 0078af49  8bce                 mov ecx, esi
// 0078af4b  e830fdfaff           call 0x73ac80
// 0078af50  56                   push esi
// 0078af51  e804890600           call 0x7f385a
// 0078af56  83c404               add esp, 4
// 0078af59  5e                   pop esi
// 0078af5a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
