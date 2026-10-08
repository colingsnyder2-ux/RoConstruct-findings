// roc 2009-12 0073ae50  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073ae50
//
// 0073ae50  56                   push esi
// 0073ae51  8b742408             mov esi, dword ptr [esp + 8]
// 0073ae55  85f6                 test esi, esi
// 0073ae57  7410                 je 0x73ae69
// 0073ae59  8bce                 mov ecx, esi
// 0073ae5b  e830fdffff           call 0x73ab90
// 0073ae60  56                   push esi
// 0073ae61  e8f4890b00           call 0x7f385a
// 0073ae66  83c404               add esp, 4
// 0073ae69  5e                   pop esi
// 0073ae6a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
