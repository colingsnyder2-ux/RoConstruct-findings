// roc 2009-12 007e2b30  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e2b30
//
// 007e2b30  8b442404             mov eax, dword ptr [esp + 4]
// 007e2b34  8b00                 mov eax, dword ptr [eax]
// 007e2b36  8d4810               lea ecx, [eax + 0x10]
// 007e2b39  51                   push ecx
// 007e2b3a  8b4808               mov ecx, dword ptr [eax + 8]
// 007e2b3d  83ec08               sub esp, 8
// 007e2b40  8bd4                 mov edx, esp
// 007e2b42  890a                 mov dword ptr [edx], ecx
// 007e2b44  8b480c               mov ecx, dword ptr [eax + 0xc]
// 007e2b47  89642410             mov dword ptr [esp + 0x10], esp
// 007e2b4b  894a04               mov dword ptr [edx + 4], ecx
// 007e2b4e  85c9                 test ecx, ecx
// 007e2b50  740c                 je 0x7e2b5e
// 007e2b52  83c104               add ecx, 4
// 007e2b55  ba01000000           mov edx, 1
// 007e2b5a  f00fc111             lock xadd dword ptr [ecx], edx
// 007e2b5e  8b00                 mov eax, dword ptr [eax]
// 007e2b60  ffd0                 call eax
// 007e2b62  83c40c               add esp, 0xc
// 007e2b65  c3                   ret 
// library rbxgs/util\boost.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
