// roc 2009-12 0044fed0  unit: ErrorUploader::Udata::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044fed0
//
// 0044fed0  56                   push esi
// 0044fed1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0044fed4  85f6                 test esi, esi
// 0044fed6  7410                 je 0x44fee8
// 0044fed8  8bce                 mov ecx, esi
// 0044feda  e881f0ffff           call 0x44ef60
// 0044fedf  56                   push esi
// 0044fee0  e875393a00           call 0x7f385a
// 0044fee5  83c404               add esp, 4
// 0044fee8  5e                   pop esi
// 0044fee9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
