// roc 2010-06 008cffc0  unit: Ogre::VRootManager::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008cffc0
//
// 008cffc0  56                   push esi
// 008cffc1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 008cffc4  85f6                 test esi, esi
// 008cffc6  7410                 je 0x8cffd8
// 008cffc8  8bce                 mov ecx, esi
// 008cffca  e891f4ffff           call 0x8cf460
// 008cffcf  56                   push esi
// 008cffd0  e8c579edff           call 0x7a799a
// 008cffd5  83c404               add esp, 4
// 008cffd8  5e                   pop esi
// 008cffd9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
