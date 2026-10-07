// roc 2012-06 005a3b10  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a3b10
//
// 005a3b10  56                   push esi
// 005a3b11  8b742408             mov esi, dword ptr [esp + 8]
// 005a3b15  85f6                 test esi, esi
// 005a3b17  7410                 je 0x5a3b29
// 005a3b19  8bce                 mov ecx, esi
// 005a3b1b  e850faffff           call 0x5a3570
// 005a3b20  56                   push esi
// 005a3b21  e8eee53d00           call 0x982114
// 005a3b26  83c404               add esp, 4
// 005a3b29  5e                   pop esi
// 005a3b2a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
