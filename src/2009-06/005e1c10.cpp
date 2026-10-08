// from server: 100% by auto
// roc 2009-06 005e1c10  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e1c10
//
// 005e1c10  56                   push esi
// 005e1c11  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005e1c14  85f6                 test esi, esi
// 005e1c16  7410                 je 0x5e1c28
// 005e1c18  8bce                 mov ecx, esi
// 005e1c1a  e8b1fdffff           call 0x5e19d0
// 005e1c1f  56                   push esi
// 005e1c20  e80d6e1300           call 0x718a32
// 005e1c25  83c404               add esp, 4
// 005e1c28  5e                   pop esi
// 005e1c29  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
