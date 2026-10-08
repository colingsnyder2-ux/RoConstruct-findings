// roc 2009-06 007060f0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007060f0
//
// 007060f0  8b442404             mov eax, dword ptr [esp + 4]
// 007060f4  8b00                 mov eax, dword ptr [eax]
// 007060f6  8d4810               lea ecx, [eax + 0x10]
// 007060f9  51                   push ecx
// 007060fa  8b4808               mov ecx, dword ptr [eax + 8]
// 007060fd  83ec08               sub esp, 8
// 00706100  8bd4                 mov edx, esp
// 00706102  890a                 mov dword ptr [edx], ecx
// 00706104  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00706107  89642410             mov dword ptr [esp + 0x10], esp
// 0070610b  894a04               mov dword ptr [edx + 4], ecx
// 0070610e  85c9                 test ecx, ecx
// 00706110  740c                 je 0x70611e
// 00706112  83c104               add ecx, 4
// 00706115  ba01000000           mov edx, 1
// 0070611a  f00fc111             lock xadd dword ptr [ecx], edx
// 0070611e  8b00                 mov eax, dword ptr [eax]
// 00706120  ffd0                 call eax
// 00706122  83c40c               add esp, 0xc
// 00706125  c3                   ret 
// library rbxgs/util\boost.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
