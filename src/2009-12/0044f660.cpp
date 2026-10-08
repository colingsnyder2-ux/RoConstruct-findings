// roc 2009-12 0044f660  unit: CRobloxApp  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044f660
//
// 0044f660  56                   push esi
// 0044f661  8b742408             mov esi, dword ptr [esp + 8]
// 0044f665  85f6                 test esi, esi
// 0044f667  7410                 je 0x44f679
// 0044f669  8bce                 mov ecx, esi
// 0044f66b  e8f0f8ffff           call 0x44ef60
// 0044f670  56                   push esi
// 0044f671  e8e4413a00           call 0x7f385a
// 0044f676  83c404               add esp, 4
// 0044f679  5e                   pop esi
// 0044f67a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
