// roc 2010-06 00796290  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00796290
//
// 00796290  8b442404             mov eax, dword ptr [esp + 4]
// 00796294  8b00                 mov eax, dword ptr [eax]
// 00796296  8d4810               lea ecx, [eax + 0x10]
// 00796299  51                   push ecx
// 0079629a  8b4808               mov ecx, dword ptr [eax + 8]
// 0079629d  83ec08               sub esp, 8
// 007962a0  8bd4                 mov edx, esp
// 007962a2  890a                 mov dword ptr [edx], ecx
// 007962a4  8b480c               mov ecx, dword ptr [eax + 0xc]
// 007962a7  89642410             mov dword ptr [esp + 0x10], esp
// 007962ab  894a04               mov dword ptr [edx + 4], ecx
// 007962ae  85c9                 test ecx, ecx
// 007962b0  740c                 je 0x7962be
// 007962b2  83c104               add ecx, 4
// 007962b5  ba01000000           mov edx, 1
// 007962ba  f00fc111             lock xadd dword ptr [ecx], edx
// 007962be  8b00                 mov eax, dword ptr [eax]
// 007962c0  ffd0                 call eax
// 007962c2  83c40c               add esp, 0xc
// 007962c5  c3                   ret 
// library rbxgs/util\boost.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
