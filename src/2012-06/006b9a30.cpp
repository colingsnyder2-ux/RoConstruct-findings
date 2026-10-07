// roc 2012-06 006b9a30  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006b9a30
//
// 006b9a30  56                   push esi
// 006b9a31  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006b9a34  85f6                 test esi, esi
// 006b9a36  7410                 je 0x6b9a48
// 006b9a38  8bce                 mov ecx, esi
// 006b9a3a  e851feffff           call 0x6b9890
// 006b9a3f  56                   push esi
// 006b9a40  e8cf862c00           call 0x982114
// 006b9a45  83c404               add esp, 4
// 006b9a48  5e                   pop esi
// 006b9a49  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
