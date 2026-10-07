// roc 2010-06 008cfec0  unit: Ogre::RbxMeshLoader  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008cfec0
//
// 008cfec0  56                   push esi
// 008cfec1  8b742408             mov esi, dword ptr [esp + 8]
// 008cfec5  85f6                 test esi, esi
// 008cfec7  7410                 je 0x8cfed9
// 008cfec9  8bce                 mov ecx, esi
// 008cfecb  e890f5ffff           call 0x8cf460
// 008cfed0  56                   push esi
// 008cfed1  e8c47aedff           call 0x7a799a
// 008cfed6  83c404               add esp, 4
// 008cfed9  5e                   pop esi
// 008cfeda  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
