// roc 2011-06 006559d0  unit: std::D::DU?$char_traits::V?$basic_string::V?$basic_path::?$basic_filesystem_error::Um_imp::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006559d0
//
// 006559d0  56                   push esi
// 006559d1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006559d4  85f6                 test esi, esi
// 006559d6  7410                 je 0x6559e8
// 006559d8  8bce                 mov ecx, esi
// 006559da  e8f1e8ffff           call 0x6542d0
// 006559df  56                   push esi
// 006559e0  e873461b00           call 0x80a058
// 006559e5  83c404               add esp, 4
// 006559e8  5e                   pop esi
// 006559e9  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
