// roc 2012-06 007eb3b0  unit: RBX::VUDim2::?$TypedPropertyDescriptor  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007eb3b0
//
// 007eb3b0  6aff                 push -1
// 007eb3b2  68c801ad00           push 0xad01c8
// 007eb3b7  64a100000000         mov eax, dword ptr fs:[0]
// 007eb3bd  50                   push eax
// 007eb3be  64892500000000       mov dword ptr fs:[0], esp
// 007eb3c5  51                   push ecx
// 007eb3c6  56                   push esi
// 007eb3c7  8bf1                 mov esi, ecx
// 007eb3c9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007eb3cd  83ec28               sub esp, 0x28
// 007eb3d0  8bc4                 mov eax, esp
// 007eb3d2  c70600000000         mov dword ptr [esi], 0
// 007eb3d8  8d542444             lea edx, [esp + 0x44]
// 007eb3dc  8964242c             mov dword ptr [esp + 0x2c], esp
// 007eb3e0  8908                 mov dword ptr [eax], ecx
// 007eb3e2  8d4804               lea ecx, [eax + 4]
// 007eb3e5  52                   push edx
// 007eb3e6  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 007eb3ee  e87dd40800           call 0x878870
// 007eb3f3  8bce                 mov ecx, esi
// 007eb3f5  e866f7ffff           call 0x7eab60
// 007eb3fa  8d4c241c             lea ecx, [esp + 0x1c]
// 007eb3fe  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007eb406  e805cfffff           call 0x7e8310
// 007eb40b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007eb40f  8bc6                 mov eax, esi
// 007eb411  64890d00000000       mov dword ptr fs:[0], ecx
// 007eb418  5e                   pop esi
// 007eb419  83c410               add esp, 0x10
// 007eb41c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
