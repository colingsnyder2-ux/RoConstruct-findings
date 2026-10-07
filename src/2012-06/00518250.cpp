// roc 2012-06 00518250  unit: Ogre::RbxCluster::RbxPartBinding  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00518250
//
// 00518250  56                   push esi
// 00518251  8b742408             mov esi, dword ptr [esp + 8]
// 00518255  85f6                 test esi, esi
// 00518257  7410                 je 0x518269
// 00518259  8bce                 mov ecx, esi
// 0051825b  e880ba1500           call 0x673ce0
// 00518260  56                   push esi
// 00518261  e8ae9e4600           call 0x982114
// 00518266  83c404               add esp, 4
// 00518269  5e                   pop esi
// 0051826a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
