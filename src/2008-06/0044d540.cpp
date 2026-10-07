// roc 2008-06 0044d540  unit: ErrorUploader::Udata::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044d540
//
// 0044d540  56                   push esi
// 0044d541  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0044d544  85f6                 test esi, esi
// 0044d546  7410                 je 0x44d558
// 0044d548  8bce                 mov ecx, esi
// 0044d54a  e801fbffff           call 0x44d050
// 0044d54f  56                   push esi
// 0044d550  e825312500           call 0x6a067a
// 0044d555  83c404               add esp, 4
// 0044d558  5e                   pop esi
// 0044d559  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
