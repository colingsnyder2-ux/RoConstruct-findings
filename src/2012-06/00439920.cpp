// from server: 100% by auto
// roc 2012-06 00439920  unit: VCXTPImageManagerIconHandle::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00439920
//
// 00439920  56                   push esi
// 00439921  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00439924  85f6                 test esi, esi
// 00439926  7410                 je 0x439938
// 00439928  8bce                 mov ecx, esi
// 0043992a  e8311a5600           call 0x99b360
// 0043992f  56                   push esi
// 00439930  e8df875400           call 0x982114
// 00439935  83c404               add esp, 4
// 00439938  5e                   pop esi
// 00439939  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
