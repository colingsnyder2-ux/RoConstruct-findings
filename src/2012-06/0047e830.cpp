// roc 2012-06 0047e830  unit: std::D::DU?$char_traits::V?$basic_string::V?$basic_path::V?$basic_filesystem_error::?$error_info_injector  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047e830
//
// 0047e830  56                   push esi
// 0047e831  8b742408             mov esi, dword ptr [esp + 8]
// 0047e835  85f6                 test esi, esi
// 0047e837  7410                 je 0x47e849
// 0047e839  8bce                 mov ecx, esi
// 0047e83b  e890ccffff           call 0x47b4d0
// 0047e840  56                   push esi
// 0047e841  e8ce385000           call 0x982114
// 0047e846  83c404               add esp, 4
// 0047e849  5e                   pop esi
// 0047e84a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
