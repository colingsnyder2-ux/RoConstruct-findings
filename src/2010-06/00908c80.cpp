// roc 2010-06 00908c80  unit: Ogre::RbxCluster  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00908c80
//
// 00908c80  56                   push esi
// 00908c81  8b742408             mov esi, dword ptr [esp + 8]
// 00908c85  85f6                 test esi, esi
// 00908c87  7410                 je 0x908c99
// 00908c89  8bce                 mov ecx, esi
// 00908c8b  e8d0760600           call 0x970360
// 00908c90  56                   push esi
// 00908c91  e804ede9ff           call 0x7a799a
// 00908c96  83c404               add esp, 4
// 00908c99  5e                   pop esi
// 00908c9a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
