// roc 2012-06 00973dd0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00973dd0
//
// 00973dd0  6aff                 push -1
// 00973dd2  6888e0a900           push 0xa9e088
// 00973dd7  64a100000000         mov eax, dword ptr fs:[0]
// 00973ddd  50                   push eax
// 00973dde  64892500000000       mov dword ptr fs:[0], esp
// 00973de5  51                   push ecx
// 00973de6  56                   push esi
// 00973de7  8bf1                 mov esi, ecx
// 00973de9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00973ded  83ec30               sub esp, 0x30
// 00973df0  8bc4                 mov eax, esp
// 00973df2  c70600000000         mov dword ptr [esi], 0
// 00973df8  8d542450             lea edx, [esp + 0x50]
// 00973dfc  89642434             mov dword ptr [esp + 0x34], esp
// 00973e00  8908                 mov dword ptr [eax], ecx
// 00973e02  8d4808               lea ecx, [eax + 8]
// 00973e05  52                   push edx
// 00973e06  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00973e0e  e82d2cadff           call 0x446a40
// 00973e13  8bce                 mov ecx, esi
// 00973e15  e8f6feffff           call 0x973d10
// 00973e1a  8d4c2420             lea ecx, [esp + 0x20]
// 00973e1e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00973e26  e8c5f5ffff           call 0x9733f0
// 00973e2b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00973e2f  8bc6                 mov eax, esi
// 00973e31  64890d00000000       mov dword ptr fs:[0], ecx
// 00973e38  5e                   pop esi
// 00973e39  83c410               add esp, 0x10
// 00973e3c  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$?0V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
