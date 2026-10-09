// roc 2009-12 0076a4b0  unit: RBX::ContentFilter  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076a4b0
//
// 0076a4b0  6aff                 push -1
// 0076a4b2  68f8269500           push 0x9526f8
// 0076a4b7  64a100000000         mov eax, dword ptr fs:[0]
// 0076a4bd  50                   push eax
// 0076a4be  64892500000000       mov dword ptr fs:[0], esp
// 0076a4c5  51                   push ecx
// 0076a4c6  56                   push esi
// 0076a4c7  8bf1                 mov esi, ecx
// 0076a4c9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0076a4cd  83ec28               sub esp, 0x28
// 0076a4d0  8bc4                 mov eax, esp
// 0076a4d2  c70600000000         mov dword ptr [esi], 0
// 0076a4d8  8d542444             lea edx, [esp + 0x44]
// 0076a4dc  8964242c             mov dword ptr [esp + 0x2c], esp
// 0076a4e0  8908                 mov dword ptr [eax], ecx
// 0076a4e2  8d4804               lea ecx, [eax + 4]
// 0076a4e5  52                   push edx
// 0076a4e6  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0076a4ee  e89de5ffff           call 0x768a90
// 0076a4f3  8bce                 mov ecx, esi
// 0076a4f5  e846fdffff           call 0x76a240
// 0076a4fa  8d4c241c             lea ecx, [esp + 0x1c]
// 0076a4fe  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0076a506  e8a569f7ff           call 0x6e0eb0
// 0076a50b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0076a50f  8bc6                 mov eax, esi
// 0076a511  64890d00000000       mov dword ptr fs:[0], ecx
// 0076a518  5e                   pop esi
// 0076a519  83c410               add esp, 0x10
// 0076a51c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
