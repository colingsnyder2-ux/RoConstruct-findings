// roc 2012-06 007ffa20  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::Vslot::?$callable  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007ffa20
//
// 007ffa20  6aff                 push -1
// 007ffa22  6878a8ac00           push 0xaca878
// 007ffa27  64a100000000         mov eax, dword ptr fs:[0]
// 007ffa2d  50                   push eax
// 007ffa2e  64892500000000       mov dword ptr fs:[0], esp
// 007ffa35  51                   push ecx
// 007ffa36  56                   push esi
// 007ffa37  8bf1                 mov esi, ecx
// 007ffa39  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ffa3d  83ec30               sub esp, 0x30
// 007ffa40  8bc4                 mov eax, esp
// 007ffa42  c70600000000         mov dword ptr [esi], 0
// 007ffa48  8d542450             lea edx, [esp + 0x50]
// 007ffa4c  89642434             mov dword ptr [esp + 0x34], esp
// 007ffa50  8908                 mov dword ptr [eax], ecx
// 007ffa52  8d4808               lea ecx, [eax + 8]
// 007ffa55  52                   push edx
// 007ffa56  c744244400000000     mov dword ptr [esp + 0x44], 0
// 007ffa5e  e8bdc3ffff           call 0x7fbe20
// 007ffa63  8bce                 mov ecx, esi
// 007ffa65  e886fbffff           call 0x7ff5f0
// 007ffa6a  8d4c2420             lea ecx, [esp + 0x20]
// 007ffa6e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007ffa76  e8a5b8ffff           call 0x7fb320
// 007ffa7b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007ffa7f  8bc6                 mov eax, esi
// 007ffa81  64890d00000000       mov dword ptr fs:[0], ecx
// 007ffa88  5e                   pop esi
// 007ffa89  83c410               add esp, 0x10
// 007ffa8c  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$?0V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
