// from server: 100% by auto
// roc 2011-06 0045fd00  unit: ErrorUploader::Udata::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045fd00
//
// 0045fd00  56                   push esi
// 0045fd01  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0045fd04  85f6                 test esi, esi
// 0045fd06  7410                 je 0x45fd18
// 0045fd08  8bce                 mov ecx, esi
// 0045fd0a  e8d1f0ffff           call 0x45ede0
// 0045fd0f  56                   push esi
// 0045fd10  e843a33a00           call 0x80a058
// 0045fd15  83c404               add esp, 4
// 0045fd18  5e                   pop esi
// 0045fd19  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
