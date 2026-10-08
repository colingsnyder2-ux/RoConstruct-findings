// roc 2008-06 0049aba0  unit: RBX::Network::VPlayers::?$SignalDesc  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049aba0
//
// 0049aba0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0049aba4  83f803               cmp eax, 3
// 0049aba7  741e                 je 0x49abc7
// 0049aba9  8b542408             mov edx, dword ptr [esp + 8]
// 0049abad  c644240c00           mov byte ptr [esp + 0xc], 0
// 0049abb2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049abb6  51                   push ecx
// 0049abb7  50                   push eax
// 0049abb8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0049abbc  52                   push edx
// 0049abbd  50                   push eax
// 0049abbe  e86df2ffff           call 0x499e30
// 0049abc3  83c410               add esp, 0x10
// 0049abc6  c3                   ret 
// 0049abc7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049abcb  c70118829300         mov dword ptr [ecx], 0x938218
// 0049abd1  c3                   ret 
// library rbxgs-net/Players.cpp (function ?manage@?$functor_manager@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
