// roc 2011-06 007392a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007392a0
//
// 007392a0  8b442404             mov eax, dword ptr [esp + 4]
// 007392a4  8b00                 mov eax, dword ptr [eax]
// 007392a6  6a00                 push 0
// 007392a8  8d4c2408             lea ecx, [esp + 8]
// 007392ac  51                   push ecx
// 007392ad  c644240c00           mov byte ptr [esp + 0xc], 0
// 007392b2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007392b6  50                   push eax
// 007392b7  52                   push edx
// 007392b8  8d4804               lea ecx, [eax + 4]
// 007392bb  e840f5ffff           call 0x738800
// 007392c0  c3                   ret 
// library rbxgs-net/Players.cpp (function ?invoke@?$function_obj_invoker0@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@W4work_result@worker_thread@RBX@@@function@detail@boost@@SA?AW4work_result@worker_thread@RBX@@AATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
