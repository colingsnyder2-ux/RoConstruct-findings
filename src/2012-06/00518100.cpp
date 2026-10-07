// roc 2012-06 00518100  unit: Ogre::RbxCluster  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00518100
//
// 00518100  56                   push esi
// 00518101  8b742408             mov esi, dword ptr [esp + 8]
// 00518105  85f6                 test esi, esi
// 00518107  7410                 je 0x518119
// 00518109  8bce                 mov ecx, esi
// 0051810b  e890df0e00           call 0x6060a0
// 00518110  56                   push esi
// 00518111  e8fe9f4600           call 0x982114
// 00518116  83c404               add esp, 4
// 00518119  5e                   pop esi
// 0051811a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
