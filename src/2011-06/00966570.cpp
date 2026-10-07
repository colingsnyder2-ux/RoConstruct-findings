// roc 2011-06 00966570  unit: Ogre::RbxCluster  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00966570
//
// 00966570  56                   push esi
// 00966571  8b742408             mov esi, dword ptr [esp + 8]
// 00966575  85f6                 test esi, esi
// 00966577  7410                 je 0x966589
// 00966579  8bce                 mov ecx, esi
// 0096657b  e890da0300           call 0x9a4010
// 00966580  56                   push esi
// 00966581  e8d23aeaff           call 0x80a058
// 00966586  83c404               add esp, 4
// 00966589  5e                   pop esi
// 0096658a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
