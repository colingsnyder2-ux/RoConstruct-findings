// roc 2011-06 0043c780  unit: RBX::Reflection::VValue::PAV?$vector::?$sp_counted_impl_pd  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043c780
//
// 0043c780  6aff                 push -1
// 0043c782  68b80b9d00           push 0x9d0bb8
// 0043c787  64a100000000         mov eax, dword ptr fs:[0]
// 0043c78d  50                   push eax
// 0043c78e  64892500000000       mov dword ptr fs:[0], esp
// 0043c795  51                   push ecx
// 0043c796  56                   push esi
// 0043c797  8bf1                 mov esi, ecx
// 0043c799  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0043c79d  83ec30               sub esp, 0x30
// 0043c7a0  8bc4                 mov eax, esp
// 0043c7a2  c70600000000         mov dword ptr [esi], 0
// 0043c7a8  8d542450             lea edx, [esp + 0x50]
// 0043c7ac  89642434             mov dword ptr [esp + 0x34], esp
// 0043c7b0  8908                 mov dword ptr [eax], ecx
// 0043c7b2  8d4808               lea ecx, [eax + 8]
// 0043c7b5  52                   push edx
// 0043c7b6  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0043c7be  e80deaffff           call 0x43b1d0
// 0043c7c3  8bce                 mov ecx, esi
// 0043c7c5  e816fdffff           call 0x43c4e0
// 0043c7ca  8d4c2420             lea ecx, [esp + 0x20]
// 0043c7ce  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0043c7d6  e895cd3b00           call 0x7f9570
// 0043c7db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043c7df  8bc6                 mov eax, esi
// 0043c7e1  64890d00000000       mov dword ptr fs:[0], ecx
// 0043c7e8  5e                   pop esi
// 0043c7e9  83c410               add esp, 0x10
// 0043c7ec  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$?0V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
