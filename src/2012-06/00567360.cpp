// from server: 100% by auto
// roc 2012-06 00567360  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00567360
//
// 00567360  56                   push esi
// 00567361  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00567364  85f6                 test esi, esi
// 00567366  7410                 je 0x567378
// 00567368  8bce                 mov ecx, esi
// 0056736a  e8f1fdffff           call 0x567160
// 0056736f  56                   push esi
// 00567370  e89fad4100           call 0x982114
// 00567375  83c404               add esp, 4
// 00567378  5e                   pop esi
// 00567379  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
