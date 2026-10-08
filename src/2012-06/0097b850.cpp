// from server: 100% by auto
// roc 2012-06 0097b850  unit: RBX::Limits::VCounter::V?$shared_ptr::?$thread_specific_ptr::delete_data  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0097b850
//
// 0097b850  56                   push esi
// 0097b851  8b742408             mov esi, dword ptr [esp + 8]
// 0097b855  85f6                 test esi, esi
// 0097b857  7410                 je 0x97b869
// 0097b859  8bce                 mov ecx, esi
// 0097b85b  e800ffffff           call 0x97b760
// 0097b860  56                   push esi
// 0097b861  e8ae680000           call 0x982114
// 0097b866  83c404               add esp, 4
// 0097b869  5e                   pop esi
// 0097b86a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
