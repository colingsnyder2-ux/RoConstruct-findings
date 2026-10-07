// roc 2011-06 006382e0  unit: RBX::VProfanityFilter::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006382e0
//
// 006382e0  56                   push esi
// 006382e1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006382e4  85f6                 test esi, esi
// 006382e6  7410                 je 0x6382f8
// 006382e8  8bce                 mov ecx, esi
// 006382ea  e851eb0800           call 0x6c6e40
// 006382ef  56                   push esi
// 006382f0  e8631d1d00           call 0x80a058
// 006382f5  83c404               add esp, 4
// 006382f8  5e                   pop esi
// 006382f9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
