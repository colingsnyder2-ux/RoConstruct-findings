// roc 2012-06 00975c10  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00975c10
//
// 00975c10  56                   push esi
// 00975c11  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00975c14  85f6                 test esi, esi
// 00975c16  7410                 je 0x975c28
// 00975c18  8bce                 mov ecx, esi
// 00975c1a  e841610000           call 0x97bd60
// 00975c1f  56                   push esi
// 00975c20  e8efc40000           call 0x982114
// 00975c25  83c404               add esp, 4
// 00975c28  5e                   pop esi
// 00975c29  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
