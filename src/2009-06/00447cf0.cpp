// from server: 100% by auto
// roc 2009-06 00447cf0  unit: RBX::VProfanityFilter::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00447cf0
//
// 00447cf0  56                   push esi
// 00447cf1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00447cf4  85f6                 test esi, esi
// 00447cf6  7410                 je 0x447d08
// 00447cf8  8bce                 mov ecx, esi
// 00447cfa  e8318a2000           call 0x650730
// 00447cff  56                   push esi
// 00447d00  e82d0d2d00           call 0x718a32
// 00447d05  83c404               add esp, 4
// 00447d08  5e                   pop esi
// 00447d09  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
