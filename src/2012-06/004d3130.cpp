// from server: 100% by auto
// roc 2012-06 004d3130  unit: Ogre::VRootManager::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004d3130
//
// 004d3130  56                   push esi
// 004d3131  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004d3134  85f6                 test esi, esi
// 004d3136  7410                 je 0x4d3148
// 004d3138  8bce                 mov ecx, esi
// 004d313a  e8e1ecffff           call 0x4d1e20
// 004d313f  56                   push esi
// 004d3140  e8cfef4a00           call 0x982114
// 004d3145  83c404               add esp, 4
// 004d3148  5e                   pop esi
// 004d3149  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
