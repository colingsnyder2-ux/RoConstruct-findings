// roc 2011-06 00512c00  unit: RBX::Network::PhysicsPacketCache::VCachedBitStream::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00512c00
//
// 00512c00  56                   push esi
// 00512c01  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00512c04  85f6                 test esi, esi
// 00512c06  7410                 je 0x512c18
// 00512c08  8bce                 mov ecx, esi
// 00512c0a  e8a1f9ffff           call 0x5125b0
// 00512c0f  56                   push esi
// 00512c10  e843742f00           call 0x80a058
// 00512c15  83c404               add esp, 4
// 00512c18  5e                   pop esi
// 00512c19  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
