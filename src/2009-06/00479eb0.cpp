// roc 2009-06 00479eb0  unit: Ogre::VRootManager::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00479eb0
//
// 00479eb0  56                   push esi
// 00479eb1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00479eb4  85f6                 test esi, esi
// 00479eb6  7410                 je 0x479ec8
// 00479eb8  8bce                 mov ecx, esi
// 00479eba  e8c1fbffff           call 0x479a80
// 00479ebf  56                   push esi
// 00479ec0  e86deb2900           call 0x718a32
// 00479ec5  83c404               add esp, 4
// 00479ec8  5e                   pop esi
// 00479ec9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
