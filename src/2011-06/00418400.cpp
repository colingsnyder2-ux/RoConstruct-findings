// roc 2011-06 00418400  unit: RBX::JavaScript::VMarshalledFunction::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00418400
//
// 00418400  56                   push esi
// 00418401  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00418404  85f6                 test esi, esi
// 00418406  7410                 je 0x418418
// 00418408  8bce                 mov ecx, esi
// 0041840a  e8e1270200           call 0x43abf0
// 0041840f  56                   push esi
// 00418410  e8431c3f00           call 0x80a058
// 00418415  83c404               add esp, 4
// 00418418  5e                   pop esi
// 00418419  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
