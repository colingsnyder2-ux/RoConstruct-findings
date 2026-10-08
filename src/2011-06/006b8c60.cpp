// roc 2011-06 006b8c60  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::Vslot::?$callable  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b8c60
//
// 006b8c60  6aff                 push -1
// 006b8c62  6888179f00           push 0x9f1788
// 006b8c67  64a100000000         mov eax, dword ptr fs:[0]
// 006b8c6d  50                   push eax
// 006b8c6e  64892500000000       mov dword ptr fs:[0], esp
// 006b8c75  51                   push ecx
// 006b8c76  56                   push esi
// 006b8c77  8bf1                 mov esi, ecx
// 006b8c79  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006b8c7d  83ec30               sub esp, 0x30
// 006b8c80  8bc4                 mov eax, esp
// 006b8c82  c70600000000         mov dword ptr [esi], 0
// 006b8c88  8d542450             lea edx, [esp + 0x50]
// 006b8c8c  89642434             mov dword ptr [esp + 0x34], esp
// 006b8c90  8908                 mov dword ptr [eax], ecx
// 006b8c92  8d4808               lea ecx, [eax + 8]
// 006b8c95  52                   push edx
// 006b8c96  c744244400000000     mov dword ptr [esp + 0x44], 0
// 006b8c9e  e8cdadffff           call 0x6b3a70
// 006b8ca3  8bce                 mov ecx, esi
// 006b8ca5  e826e9ffff           call 0x6b75d0
// 006b8caa  8d4c2420             lea ecx, [esp + 0x20]
// 006b8cae  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006b8cb6  e865a3ffff           call 0x6b3020
// 006b8cbb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b8cbf  8bc6                 mov eax, esi
// 006b8cc1  64890d00000000       mov dword ptr fs:[0], ecx
// 006b8cc8  5e                   pop esi
// 006b8cc9  83c410               add esp, 0x10
// 006b8ccc  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$?0V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
