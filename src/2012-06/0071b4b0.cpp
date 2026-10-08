// roc 2012-06 0071b4b0  unit: RBX::VScript::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0071b4b0
//
// 0071b4b0  8b442404             mov eax, dword ptr [esp + 4]
// 0071b4b4  8b00                 mov eax, dword ptr [eax]
// 0071b4b6  6a00                 push 0
// 0071b4b8  8d4c2408             lea ecx, [esp + 8]
// 0071b4bc  51                   push ecx
// 0071b4bd  c644240c00           mov byte ptr [esp + 0xc], 0
// 0071b4c2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0071b4c6  50                   push eax
// 0071b4c7  52                   push edx
// 0071b4c8  8d4804               lea ecx, [eax + 4]
// 0071b4cb  e8a0f5ffff           call 0x71aa70
// 0071b4d0  c3                   ret 
// library rbxgs-net/Players.cpp (function ?invoke@?$function_obj_invoker0@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@W4work_result@worker_thread@RBX@@@function@detail@boost@@SA?AW4work_result@worker_thread@RBX@@AATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
