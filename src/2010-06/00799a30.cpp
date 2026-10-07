// roc 2010-06 00799a30  unit: RBX::Security::VContext::?$thread_specific_ptr::delete_data  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00799a30
//
// 00799a30  56                   push esi
// 00799a31  8b742408             mov esi, dword ptr [esp + 8]
// 00799a35  85f6                 test esi, esi
// 00799a37  7410                 je 0x799a49
// 00799a39  8bce                 mov ecx, esi
// 00799a3b  e8d0b8ffff           call 0x795310
// 00799a40  56                   push esi
// 00799a41  e854df0000           call 0x7a799a
// 00799a46  83c404               add esp, 4
// 00799a49  5e                   pop esi
// 00799a4a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
