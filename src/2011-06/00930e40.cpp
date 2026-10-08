// from server: 100% by auto
// roc 2011-06 00930e40  unit: Ogre::VRootManager::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00930e40
//
// 00930e40  56                   push esi
// 00930e41  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00930e44  85f6                 test esi, esi
// 00930e46  7410                 je 0x930e58
// 00930e48  8bce                 mov ecx, esi
// 00930e4a  e871f3ffff           call 0x9301c0
// 00930e4f  56                   push esi
// 00930e50  e80392edff           call 0x80a058
// 00930e55  83c404               add esp, 4
// 00930e58  5e                   pop esi
// 00930e59  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
