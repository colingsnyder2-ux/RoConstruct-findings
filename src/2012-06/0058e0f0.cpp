// from server: 100% by auto
// roc 2012-06 0058e0f0  unit: RBX::Network::VConcurrentRakPeer::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0058e0f0
//
// 0058e0f0  56                   push esi
// 0058e0f1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0058e0f4  85f6                 test esi, esi
// 0058e0f6  7410                 je 0x58e108
// 0058e0f8  8bce                 mov ecx, esi
// 0058e0fa  e891b0fdff           call 0x569190
// 0058e0ff  56                   push esi
// 0058e100  e80f403f00           call 0x982114
// 0058e105  83c404               add esp, 4
// 0058e108  5e                   pop esi
// 0058e109  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
