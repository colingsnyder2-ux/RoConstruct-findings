// roc 2011-06 0050d370  unit: RBX::Network::VConcurrentRakPeer::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050d370
//
// 0050d370  56                   push esi
// 0050d371  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0050d374  85f6                 test esi, esi
// 0050d376  7410                 je 0x50d388
// 0050d378  8bce                 mov ecx, esi
// 0050d37a  e8810cfeff           call 0x4ee000
// 0050d37f  56                   push esi
// 0050d380  e8d3cc2f00           call 0x80a058
// 0050d385  83c404               add esp, 4
// 0050d388  5e                   pop esi
// 0050d389  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
