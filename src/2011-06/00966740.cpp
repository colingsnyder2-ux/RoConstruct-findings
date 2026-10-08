// from server: 100% by auto
// roc 2011-06 00966740  unit: Ogre::RbxCluster::RbxPartBinding  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00966740
//
// 00966740  56                   push esi
// 00966741  8b742408             mov esi, dword ptr [esp + 8]
// 00966745  85f6                 test esi, esi
// 00966747  7410                 je 0x966759
// 00966749  8bce                 mov ecx, esi
// 0096674b  e8f0220600           call 0x9c8a40
// 00966750  56                   push esi
// 00966751  e80239eaff           call 0x80a058
// 00966756  83c404               add esp, 4
// 00966759  5e                   pop esi
// 0096675a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
