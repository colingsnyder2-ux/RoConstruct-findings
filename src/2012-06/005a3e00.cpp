// from server: 100% by auto
// roc 2012-06 005a3e00  unit: RBX::Network::PhysicsPacketCache::VCachedBitStream::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a3e00
//
// 005a3e00  56                   push esi
// 005a3e01  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005a3e04  85f6                 test esi, esi
// 005a3e06  7410                 je 0x5a3e18
// 005a3e08  8bce                 mov ecx, esi
// 005a3e0a  e861f7ffff           call 0x5a3570
// 005a3e0f  56                   push esi
// 005a3e10  e8ffe23d00           call 0x982114
// 005a3e15  83c404               add esp, 4
// 005a3e18  5e                   pop esi
// 005a3e19  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
