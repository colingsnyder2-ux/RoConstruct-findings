// from server: 100% by auto
// roc 2012-06 005a3b30  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a3b30
//
// 005a3b30  56                   push esi
// 005a3b31  8b742408             mov esi, dword ptr [esp + 8]
// 005a3b35  85f6                 test esi, esi
// 005a3b37  7410                 je 0x5a3b49
// 005a3b39  8bce                 mov ecx, esi
// 005a3b3b  e890faffff           call 0x5a35d0
// 005a3b40  56                   push esi
// 005a3b41  e8cee53d00           call 0x982114
// 005a3b46  83c404               add esp, 4
// 005a3b49  5e                   pop esi
// 005a3b4a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
