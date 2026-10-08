// from server: 100% by auto
// roc 2010-06 00909360  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00909360
//
// 00909360  56                   push esi
// 00909361  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00909364  85f6                 test esi, esi
// 00909366  7410                 je 0x909378
// 00909368  8bce                 mov ecx, esi
// 0090936a  e8c1d20000           call 0x916630
// 0090936f  56                   push esi
// 00909370  e825e6e9ff           call 0x7a799a
// 00909375  83c404               add esp, 4
// 00909378  5e                   pop esi
// 00909379  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
