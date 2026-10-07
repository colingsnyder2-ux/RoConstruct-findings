// roc 2010-06 0079de50  unit: RBX::Tasks::Barrier  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0079de50
//
// 0079de50  56                   push esi
// 0079de51  8b742408             mov esi, dword ptr [esp + 8]
// 0079de55  85f6                 test esi, esi
// 0079de57  7410                 je 0x79de69
// 0079de59  8bce                 mov ecx, esi
// 0079de5b  e8e0feffff           call 0x79dd40
// 0079de60  56                   push esi
// 0079de61  e8349b0000           call 0x7a799a
// 0079de66  83c404               add esp, 4
// 0079de69  5e                   pop esi
// 0079de6a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
