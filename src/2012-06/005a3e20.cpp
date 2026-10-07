// roc 2012-06 005a3e20  unit: RBX::Network::InstancePacketCache::VCachedBitStream::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a3e20
//
// 005a3e20  56                   push esi
// 005a3e21  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005a3e24  85f6                 test esi, esi
// 005a3e26  7410                 je 0x5a3e38
// 005a3e28  8bce                 mov ecx, esi
// 005a3e2a  e8a1f7ffff           call 0x5a35d0
// 005a3e2f  56                   push esi
// 005a3e30  e8dfe23d00           call 0x982114
// 005a3e35  83c404               add esp, 4
// 005a3e38  5e                   pop esi
// 005a3e39  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
