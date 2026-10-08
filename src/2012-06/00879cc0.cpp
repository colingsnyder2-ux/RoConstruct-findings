// roc 2012-06 00879cc0  unit: RBX::VInstance::?$NonFactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00879cc0
//
// 00879cc0  8b442404             mov eax, dword ptr [esp + 4]
// 00879cc4  8b00                 mov eax, dword ptr [eax]
// 00879cc6  6a00                 push 0
// 00879cc8  8d4c2408             lea ecx, [esp + 8]
// 00879ccc  51                   push ecx
// 00879ccd  c644240c00           mov byte ptr [esp + 0xc], 0
// 00879cd2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00879cd6  50                   push eax
// 00879cd7  52                   push edx
// 00879cd8  8d4804               lea ecx, [eax + 4]
// 00879cdb  e850f5ffff           call 0x879230
// 00879ce0  c3                   ret 
// library rbxgs-net/Players.cpp (function ?invoke@?$function_obj_invoker0@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@W4work_result@worker_thread@RBX@@@function@detail@boost@@SA?AW4work_result@worker_thread@RBX@@AATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
