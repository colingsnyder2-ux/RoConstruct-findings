// roc 2009-12 004fb7a0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004fb7a0
//
// 004fb7a0  8b442404             mov eax, dword ptr [esp + 4]
// 004fb7a4  8b00                 mov eax, dword ptr [eax]
// 004fb7a6  6a00                 push 0
// 004fb7a8  8d4c2408             lea ecx, [esp + 8]
// 004fb7ac  51                   push ecx
// 004fb7ad  c644240c00           mov byte ptr [esp + 0xc], 0
// 004fb7b2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004fb7b6  50                   push eax
// 004fb7b7  52                   push edx
// 004fb7b8  8d4804               lea ecx, [eax + 4]
// 004fb7bb  e8b0ceffff           call 0x4f8670
// 004fb7c0  c3                   ret 
// library rbxgs-net/Players.cpp (function ?invoke@?$function_obj_invoker0@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@W4work_result@worker_thread@RBX@@@function@detail@boost@@SA?AW4work_result@worker_thread@RBX@@AATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
