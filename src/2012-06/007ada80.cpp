// roc 2012-06 007ada80  unit: RBX::VCacheableContentProvider::?$NonFactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007ada80
//
// 007ada80  56                   push esi
// 007ada81  8b742408             mov esi, dword ptr [esp + 8]
// 007ada85  85f6                 test esi, esi
// 007ada87  7410                 je 0x7ada99
// 007ada89  8bce                 mov ecx, esi
// 007ada8b  e860feffff           call 0x7ad8f0
// 007ada90  56                   push esi
// 007ada91  e87e461d00           call 0x982114
// 007ada96  83c404               add esp, 4
// 007ada99  5e                   pop esi
// 007ada9a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
