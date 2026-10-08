// roc 2012-06 00480b70  unit: std::D::DU?$char_traits::V?$basic_string::V?$basic_path::V?$basic_filesystem_error::U?$error_info_injector::?$clone_impl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00480b70
//
// 00480b70  8b442404             mov eax, dword ptr [esp + 4]
// 00480b74  8b00                 mov eax, dword ptr [eax]
// 00480b76  6a00                 push 0
// 00480b78  8d4c2408             lea ecx, [esp + 8]
// 00480b7c  51                   push ecx
// 00480b7d  c644240c00           mov byte ptr [esp + 0xc], 0
// 00480b82  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00480b86  50                   push eax
// 00480b87  52                   push edx
// 00480b88  8d4804               lea ecx, [eax + 4]
// 00480b8b  e870dbffff           call 0x47e700
// 00480b90  c3                   ret 
// library rbxgs-net/Players.cpp (function ?invoke@?$function_obj_invoker0@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@W4work_result@worker_thread@RBX@@@function@detail@boost@@SA?AW4work_result@worker_thread@RBX@@AATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
