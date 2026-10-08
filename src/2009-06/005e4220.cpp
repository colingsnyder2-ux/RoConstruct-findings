// from server: 100% by auto
// roc 2009-06 005e4220  unit: RBX::ThreadPool::UPoolData::XP6AXV?$shared_ptr::V?$bind_t::?$thread_data  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e4220
//
// 005e4220  56                   push esi
// 005e4221  8b742408             mov esi, dword ptr [esp + 8]
// 005e4225  85f6                 test esi, esi
// 005e4227  7410                 je 0x5e4239
// 005e4229  8bce                 mov ecx, esi
// 005e422b  e820feffff           call 0x5e4050
// 005e4230  56                   push esi
// 005e4231  e8fc471300           call 0x718a32
// 005e4236  83c404               add esp, 4
// 005e4239  5e                   pop esi
// 005e423a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
