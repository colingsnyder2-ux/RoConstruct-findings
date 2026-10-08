// from server: 100% by auto
// roc 2012-06 00518860  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00518860
//
// 00518860  56                   push esi
// 00518861  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00518864  85f6                 test esi, esi
// 00518866  7410                 je 0x518878
// 00518868  8bce                 mov ecx, esi
// 0051886a  e871b41500           call 0x673ce0
// 0051886f  56                   push esi
// 00518870  e89f984600           call 0x982114
// 00518875  83c404               add esp, 4
// 00518878  5e                   pop esi
// 00518879  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
