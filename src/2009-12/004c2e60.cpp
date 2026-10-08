// roc 2009-12 004c2e60  unit: Ogre::RbxCluster  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c2e60
//
// 004c2e60  56                   push esi
// 004c2e61  8b742408             mov esi, dword ptr [esp + 8]
// 004c2e65  85f6                 test esi, esi
// 004c2e67  7410                 je 0x4c2e79
// 004c2e69  8bce                 mov ecx, esi
// 004c2e6b  e810f50e00           call 0x5b2380
// 004c2e70  56                   push esi
// 004c2e71  e8e4093300           call 0x7f385a
// 004c2e76  83c404               add esp, 4
// 004c2e79  5e                   pop esi
// 004c2e7a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
