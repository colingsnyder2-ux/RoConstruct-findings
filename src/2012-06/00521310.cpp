// roc 2012-06 00521310  unit: rbx::signals::$$A6AXXZ::?$signal::Vslot::?$callable  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00521310
//
// 00521310  8b442404             mov eax, dword ptr [esp + 4]
// 00521314  8b00                 mov eax, dword ptr [eax]
// 00521316  6a00                 push 0
// 00521318  8d4c2408             lea ecx, [esp + 8]
// 0052131c  51                   push ecx
// 0052131d  c644240c00           mov byte ptr [esp + 0xc], 0
// 00521322  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00521326  50                   push eax
// 00521327  52                   push edx
// 00521328  8d4804               lea ecx, [eax + 4]
// 0052132b  e890daffff           call 0x51edc0
// 00521330  c3                   ret 
// library rbxgs-net/Players.cpp (function ?invoke@?$function_obj_invoker0@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@W4work_result@worker_thread@RBX@@@function@detail@boost@@SA?AW4work_result@worker_thread@RBX@@AATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
