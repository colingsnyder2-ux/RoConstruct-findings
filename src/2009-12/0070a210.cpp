// roc 2009-12 0070a210  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::slot  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0070a210
//
// 0070a210  56                   push esi
// 0070a211  8b742408             mov esi, dword ptr [esp + 8]
// 0070a215  85f6                 test esi, esi
// 0070a217  7410                 je 0x70a229
// 0070a219  8bce                 mov ecx, esi
// 0070a21b  e850e3ffff           call 0x708570
// 0070a220  56                   push esi
// 0070a221  e834960e00           call 0x7f385a
// 0070a226  83c404               add esp, 4
// 0070a229  5e                   pop esi
// 0070a22a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
