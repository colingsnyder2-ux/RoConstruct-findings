// from server: 100% by auto
// roc 2011-06 00513ef0  unit: RBX::Network::InstancePacketCache::VCachedBitStream::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00513ef0
//
// 00513ef0  56                   push esi
// 00513ef1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00513ef4  85f6                 test esi, esi
// 00513ef6  7410                 je 0x513f08
// 00513ef8  8bce                 mov ecx, esi
// 00513efa  e8e1f6ffff           call 0x5135e0
// 00513eff  56                   push esi
// 00513f00  e853612f00           call 0x80a058
// 00513f05  83c404               add esp, 4
// 00513f08  5e                   pop esi
// 00513f09  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
