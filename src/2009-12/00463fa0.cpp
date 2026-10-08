// roc 2009-12 00463fa0  unit: Ogre::VRootManager::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00463fa0
//
// 00463fa0  56                   push esi
// 00463fa1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00463fa4  85f6                 test esi, esi
// 00463fa6  7410                 je 0x463fb8
// 00463fa8  8bce                 mov ecx, esi
// 00463faa  e851530200           call 0x489300
// 00463faf  56                   push esi
// 00463fb0  e8a5f83800           call 0x7f385a
// 00463fb5  83c404               add esp, 4
// 00463fb8  5e                   pop esi
// 00463fb9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
