// from server: 100% by auto
// roc 2011-06 00418120  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00418120
//
// 00418120  56                   push esi
// 00418121  8b742408             mov esi, dword ptr [esp + 8]
// 00418125  85f6                 test esi, esi
// 00418127  7410                 je 0x418139
// 00418129  8bce                 mov ecx, esi
// 0041812b  e8c02a0200           call 0x43abf0
// 00418130  56                   push esi
// 00418131  e8221f3f00           call 0x80a058
// 00418136  83c404               add esp, 4
// 00418139  5e                   pop esi
// 0041813a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
