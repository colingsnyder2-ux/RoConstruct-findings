// roc 2009-12 00462f50  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00462f50
//
// 00462f50  56                   push esi
// 00462f51  8b742408             mov esi, dword ptr [esp + 8]
// 00462f55  85f6                 test esi, esi
// 00462f57  7410                 je 0x462f69
// 00462f59  8bce                 mov ecx, esi
// 00462f5b  e8a0630200           call 0x489300
// 00462f60  56                   push esi
// 00462f61  e8f4083900           call 0x7f385a
// 00462f66  83c404               add esp, 4
// 00462f69  5e                   pop esi
// 00462f6a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
