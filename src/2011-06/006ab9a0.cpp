// roc 2011-06 006ab9a0  unit: RBX::$$A6AXVUDim2::?$signal::Vslot::?$callable  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ab9a0
//
// 006ab9a0  6aff                 push -1
// 006ab9a2  68f8879f00           push 0x9f87f8
// 006ab9a7  64a100000000         mov eax, dword ptr fs:[0]
// 006ab9ad  50                   push eax
// 006ab9ae  64892500000000       mov dword ptr fs:[0], esp
// 006ab9b5  51                   push ecx
// 006ab9b6  56                   push esi
// 006ab9b7  8bf1                 mov esi, ecx
// 006ab9b9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ab9bd  83ec28               sub esp, 0x28
// 006ab9c0  8bc4                 mov eax, esp
// 006ab9c2  c70600000000         mov dword ptr [esi], 0
// 006ab9c8  8d542444             lea edx, [esp + 0x44]
// 006ab9cc  8964242c             mov dword ptr [esp + 0x2c], esp
// 006ab9d0  8908                 mov dword ptr [eax], ecx
// 006ab9d2  8d4804               lea ecx, [eax + 4]
// 006ab9d5  52                   push edx
// 006ab9d6  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 006ab9de  e8fdc30800           call 0x737de0
// 006ab9e3  8bce                 mov ecx, esi
// 006ab9e5  e8c6ebffff           call 0x6aa5b0
// 006ab9ea  8d4c241c             lea ecx, [esp + 0x1c]
// 006ab9ee  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006ab9f6  e855b20800           call 0x736c50
// 006ab9fb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ab9ff  8bc6                 mov eax, esi
// 006aba01  64890d00000000       mov dword ptr fs:[0], ecx
// 006aba08  5e                   pop esi
// 006aba09  83c410               add esp, 0x10
// 006aba0c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
