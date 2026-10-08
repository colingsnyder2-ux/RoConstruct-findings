// roc 2009-12 0063e930  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0063e930
//
// 0063e930  56                   push esi
// 0063e931  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0063e934  85f6                 test esi, esi
// 0063e936  7410                 je 0x63e948
// 0063e938  8bce                 mov ecx, esi
// 0063e93a  e8b1fdffff           call 0x63e6f0
// 0063e93f  56                   push esi
// 0063e940  e8154f1b00           call 0x7f385a
// 0063e945  83c404               add esp, 4
// 0063e948  5e                   pop esi
// 0063e949  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
