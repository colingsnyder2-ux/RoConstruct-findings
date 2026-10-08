// from server: 100% by auto
// roc 2007-08 00588e10  unit: RBX::VSound::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588e10
//
// 00588e10  56                   push esi
// 00588e11  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00588e14  85f6                 test esi, esi
// 00588e16  7410                 je 0x588e28
// 00588e18  8bce                 mov ecx, esi
// 00588e1a  e8e1f0ffff           call 0x587f00
// 00588e1f  56                   push esi
// 00588e20  e83d6e0a00           call 0x62fc62
// 00588e25  83c404               add esp, 4
// 00588e28  5e                   pop esi
// 00588e29  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
