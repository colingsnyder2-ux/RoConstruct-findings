// roc 2008-06 00596430  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00596430
//
// 00596430  8b442404             mov eax, dword ptr [esp + 4]
// 00596434  8b00                 mov eax, dword ptr [eax]
// 00596436  8d4810               lea ecx, [eax + 0x10]
// 00596439  51                   push ecx
// 0059643a  8b4808               mov ecx, dword ptr [eax + 8]
// 0059643d  83ec08               sub esp, 8
// 00596440  8bd4                 mov edx, esp
// 00596442  890a                 mov dword ptr [edx], ecx
// 00596444  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00596447  89642410             mov dword ptr [esp + 0x10], esp
// 0059644b  894a04               mov dword ptr [edx + 4], ecx
// 0059644e  85c9                 test ecx, ecx
// 00596450  740c                 je 0x59645e
// 00596452  83c104               add ecx, 4
// 00596455  ba01000000           mov edx, 1
// 0059645a  f00fc111             lock xadd dword ptr [ecx], edx
// 0059645e  8b00                 mov eax, dword ptr [eax]
// 00596460  ffd0                 call eax
// 00596462  83c40c               add esp, 0xc
// 00596465  c3                   ret 
// library rbxgs/util\boost.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
