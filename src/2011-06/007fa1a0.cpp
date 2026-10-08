// roc 2011-06 007fa1a0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fa1a0
//
// 007fa1a0  6aff                 push -1
// 007fa1a2  68b80b9d00           push 0x9d0bb8
// 007fa1a7  64a100000000         mov eax, dword ptr fs:[0]
// 007fa1ad  50                   push eax
// 007fa1ae  64892500000000       mov dword ptr fs:[0], esp
// 007fa1b5  51                   push ecx
// 007fa1b6  56                   push esi
// 007fa1b7  8bf1                 mov esi, ecx
// 007fa1b9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fa1bd  83ec30               sub esp, 0x30
// 007fa1c0  8bc4                 mov eax, esp
// 007fa1c2  c70600000000         mov dword ptr [esi], 0
// 007fa1c8  8d542450             lea edx, [esp + 0x50]
// 007fa1cc  89642434             mov dword ptr [esp + 0x34], esp
// 007fa1d0  8908                 mov dword ptr [eax], ecx
// 007fa1d2  8d4808               lea ecx, [eax + 8]
// 007fa1d5  52                   push edx
// 007fa1d6  c744244400000000     mov dword ptr [esp + 0x44], 0
// 007fa1de  e8ed0fc4ff           call 0x43b1d0
// 007fa1e3  8bce                 mov ecx, esi
// 007fa1e5  e8f6feffff           call 0x7fa0e0
// 007fa1ea  8d4c2420             lea ecx, [esp + 0x20]
// 007fa1ee  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007fa1f6  e875f3ffff           call 0x7f9570
// 007fa1fb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007fa1ff  8bc6                 mov eax, esi
// 007fa201  64890d00000000       mov dword ptr fs:[0], ecx
// 007fa208  5e                   pop esi
// 007fa209  83c410               add esp, 0x10
// 007fa20c  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$?0V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
