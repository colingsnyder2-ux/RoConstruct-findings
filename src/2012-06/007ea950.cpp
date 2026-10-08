// roc 2012-06 007ea950  unit: RBX::VUDim2::?$TypedPropertyDescriptor  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007ea950
//
// 007ea950  6aff                 push -1
// 007ea952  68c801ad00           push 0xad01c8
// 007ea957  64a100000000         mov eax, dword ptr fs:[0]
// 007ea95d  50                   push eax
// 007ea95e  64892500000000       mov dword ptr fs:[0], esp
// 007ea965  51                   push ecx
// 007ea966  56                   push esi
// 007ea967  8bf1                 mov esi, ecx
// 007ea969  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ea96d  83ec28               sub esp, 0x28
// 007ea970  8bc4                 mov eax, esp
// 007ea972  c70600000000         mov dword ptr [esi], 0
// 007ea978  8d542444             lea edx, [esp + 0x44]
// 007ea97c  8964242c             mov dword ptr [esp + 0x2c], esp
// 007ea980  8908                 mov dword ptr [eax], ecx
// 007ea982  8d4804               lea ecx, [eax + 4]
// 007ea985  52                   push edx
// 007ea986  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 007ea98e  e8ddde0800           call 0x878870
// 007ea993  8bce                 mov ecx, esi
// 007ea995  e8c6f8ffff           call 0x7ea260
// 007ea99a  8d4c241c             lea ecx, [esp + 0x1c]
// 007ea99e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007ea9a6  e865d9ffff           call 0x7e8310
// 007ea9ab  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007ea9af  8bc6                 mov eax, esi
// 007ea9b1  64890d00000000       mov dword ptr fs:[0], ecx
// 007ea9b8  5e                   pop esi
// 007ea9b9  83c410               add esp, 0x10
// 007ea9bc  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
