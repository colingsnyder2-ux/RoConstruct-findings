// roc 2009-12 004c3540  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c3540
//
// 004c3540  56                   push esi
// 004c3541  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004c3544  85f6                 test esi, esi
// 004c3546  7410                 je 0x4c3558
// 004c3548  8bce                 mov ecx, esi
// 004c354a  e8f1e80200           call 0x4f1e40
// 004c354f  56                   push esi
// 004c3550  e805033300           call 0x7f385a
// 004c3555  83c404               add esp, 4
// 004c3558  5e                   pop esi
// 004c3559  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
