// roc 2012-06 009736e0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009736e0
//
// 009736e0  8b442404             mov eax, dword ptr [esp + 4]
// 009736e4  8b00                 mov eax, dword ptr [eax]
// 009736e6  8d4810               lea ecx, [eax + 0x10]
// 009736e9  51                   push ecx
// 009736ea  8b4808               mov ecx, dword ptr [eax + 8]
// 009736ed  83ec08               sub esp, 8
// 009736f0  8bd4                 mov edx, esp
// 009736f2  890a                 mov dword ptr [edx], ecx
// 009736f4  8b480c               mov ecx, dword ptr [eax + 0xc]
// 009736f7  89642410             mov dword ptr [esp + 0x10], esp
// 009736fb  894a04               mov dword ptr [edx + 4], ecx
// 009736fe  85c9                 test ecx, ecx
// 00973700  740c                 je 0x97370e
// 00973702  83c104               add ecx, 4
// 00973705  ba01000000           mov edx, 1
// 0097370a  f00fc111             lock xadd dword ptr [ecx], edx
// 0097370e  8b00                 mov eax, dword ptr [eax]
// 00973710  ffd0                 call eax
// 00973712  83c40c               add esp, 0xc
// 00973715  c3                   ret 
// library rbxgs/util\boost.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
