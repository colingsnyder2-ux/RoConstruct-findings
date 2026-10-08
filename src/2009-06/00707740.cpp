// roc 2009-06 00707740  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00707740
//
// 00707740  6aff                 push -1
// 00707742  6838358700           push 0x873538
// 00707747  64a100000000         mov eax, dword ptr fs:[0]
// 0070774d  50                   push eax
// 0070774e  64892500000000       mov dword ptr fs:[0], esp
// 00707755  51                   push ecx
// 00707756  56                   push esi
// 00707757  8bf1                 mov esi, ecx
// 00707759  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0070775d  83ec30               sub esp, 0x30
// 00707760  8bc4                 mov eax, esp
// 00707762  c70600000000         mov dword ptr [esi], 0
// 00707768  8d542450             lea edx, [esp + 0x50]
// 0070776c  89642434             mov dword ptr [esp + 0x34], esp
// 00707770  8908                 mov dword ptr [eax], ecx
// 00707772  8d4808               lea ecx, [eax + 8]
// 00707775  52                   push edx
// 00707776  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0070777e  e80de4ffff           call 0x705b90
// 00707783  8bce                 mov ecx, esi
// 00707785  e8d6fdffff           call 0x707560
// 0070778a  8d4c2420             lea ecx, [esp + 0x20]
// 0070778e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00707796  e8f5e5ffff           call 0x705d90
// 0070779b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0070779f  8bc6                 mov eax, esi
// 007077a1  64890d00000000       mov dword ptr fs:[0], ecx
// 007077a8  5e                   pop esi
// 007077a9  83c410               add esp, 0x10
// 007077ac  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$?0V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
