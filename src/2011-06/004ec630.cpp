// roc 2011-06 004ec630  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ec630
//
// 004ec630  56                   push esi
// 004ec631  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004ec634  85f6                 test esi, esi
// 004ec636  7410                 je 0x4ec648
// 004ec638  8bce                 mov ecx, esi
// 004ec63a  e8d1fdffff           call 0x4ec410
// 004ec63f  56                   push esi
// 004ec640  e813da3100           call 0x80a058
// 004ec645  83c404               add esp, 4
// 004ec648  5e                   pop esi
// 004ec649  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
