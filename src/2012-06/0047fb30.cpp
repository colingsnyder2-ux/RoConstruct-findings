// from server: 100% by auto
// roc 2012-06 0047fb30  unit: std::D::DU?$char_traits::V?$basic_string::V?$basic_path::?$basic_filesystem_error::Um_imp::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047fb30
//
// 0047fb30  56                   push esi
// 0047fb31  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0047fb34  85f6                 test esi, esi
// 0047fb36  7410                 je 0x47fb48
// 0047fb38  8bce                 mov ecx, esi
// 0047fb3a  e891b9ffff           call 0x47b4d0
// 0047fb3f  56                   push esi
// 0047fb40  e8cf255000           call 0x982114
// 0047fb45  83c404               add esp, 4
// 0047fb48  5e                   pop esi
// 0047fb49  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
