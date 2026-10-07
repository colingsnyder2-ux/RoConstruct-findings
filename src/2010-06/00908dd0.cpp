// roc 2010-06 00908dd0  unit: Ogre::RbxCluster::RbxPartBinding  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00908dd0
//
// 00908dd0  56                   push esi
// 00908dd1  8b742408             mov esi, dword ptr [esp + 8]
// 00908dd5  85f6                 test esi, esi
// 00908dd7  7410                 je 0x908de9
// 00908dd9  8bce                 mov ecx, esi
// 00908ddb  e850d80000           call 0x916630
// 00908de0  56                   push esi
// 00908de1  e8b4ebe9ff           call 0x7a799a
// 00908de6  83c404               add esp, 4
// 00908de9  5e                   pop esi
// 00908dea  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
