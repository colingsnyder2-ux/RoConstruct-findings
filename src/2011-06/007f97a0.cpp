// roc 2011-06 007f97a0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f97a0
//
// 007f97a0  8b442404             mov eax, dword ptr [esp + 4]
// 007f97a4  8b00                 mov eax, dword ptr [eax]
// 007f97a6  8d4810               lea ecx, [eax + 0x10]
// 007f97a9  51                   push ecx
// 007f97aa  8b4808               mov ecx, dword ptr [eax + 8]
// 007f97ad  83ec08               sub esp, 8
// 007f97b0  8bd4                 mov edx, esp
// 007f97b2  890a                 mov dword ptr [edx], ecx
// 007f97b4  8b480c               mov ecx, dword ptr [eax + 0xc]
// 007f97b7  89642410             mov dword ptr [esp + 0x10], esp
// 007f97bb  894a04               mov dword ptr [edx + 4], ecx
// 007f97be  85c9                 test ecx, ecx
// 007f97c0  740c                 je 0x7f97ce
// 007f97c2  83c104               add ecx, 4
// 007f97c5  ba01000000           mov edx, 1
// 007f97ca  f00fc111             lock xadd dword ptr [ecx], edx
// 007f97ce  8b00                 mov eax, dword ptr [eax]
// 007f97d0  ffd0                 call eax
// 007f97d2  83c40c               add esp, 0xc
// 007f97d5  c3                   ret 
// library rbxgs/util\boost.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
