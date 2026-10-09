// roc 2009-12 007e3f70  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e3f70
//
// 007e3f70  6aff                 push -1
// 007e3f72  68d8789500           push 0x9578d8
// 007e3f77  64a100000000         mov eax, dword ptr fs:[0]
// 007e3f7d  50                   push eax
// 007e3f7e  64892500000000       mov dword ptr fs:[0], esp
// 007e3f85  51                   push ecx
// 007e3f86  56                   push esi
// 007e3f87  8bf1                 mov esi, ecx
// 007e3f89  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007e3f8d  83ec30               sub esp, 0x30
// 007e3f90  8bc4                 mov eax, esp
// 007e3f92  c70600000000         mov dword ptr [esi], 0
// 007e3f98  8d542450             lea edx, [esp + 0x50]
// 007e3f9c  89642434             mov dword ptr [esp + 0x34], esp
// 007e3fa0  8908                 mov dword ptr [eax], ecx
// 007e3fa2  8d4808               lea ecx, [eax + 8]
// 007e3fa5  52                   push edx
// 007e3fa6  c744244400000000     mov dword ptr [esp + 0x44], 0
// 007e3fae  e8fd1ff2ff           call 0x705fb0
// 007e3fb3  8bce                 mov ecx, esi
// 007e3fb5  e826feffff           call 0x7e3de0
// 007e3fba  8d4c2420             lea ecx, [esp + 0x20]
// 007e3fbe  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007e3fc6  e80507f2ff           call 0x7046d0
// 007e3fcb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007e3fcf  8bc6                 mov eax, esi
// 007e3fd1  64890d00000000       mov dword ptr fs:[0], ecx
// 007e3fd8  5e                   pop esi
// 007e3fd9  83c410               add esp, 0x10
// 007e3fdc  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$?0V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
