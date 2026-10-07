// roc 2011-06 00966d40  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00966d40
//
// 00966d40  56                   push esi
// 00966d41  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00966d44  85f6                 test esi, esi
// 00966d46  7410                 je 0x966d58
// 00966d48  8bce                 mov ecx, esi
// 00966d4a  e8f11c0600           call 0x9c8a40
// 00966d4f  56                   push esi
// 00966d50  e80333eaff           call 0x80a058
// 00966d55  83c404               add esp, 4
// 00966d58  5e                   pop esi
// 00966d59  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
