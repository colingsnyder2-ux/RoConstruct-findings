// roc 2010-06 006f13b0  unit: RBX::ContentFilter  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f13b0
//
// 006f13b0  6aff                 push -1
// 006f13b2  68d80d9a00           push 0x9a0dd8
// 006f13b7  64a100000000         mov eax, dword ptr fs:[0]
// 006f13bd  50                   push eax
// 006f13be  64892500000000       mov dword ptr fs:[0], esp
// 006f13c5  51                   push ecx
// 006f13c6  56                   push esi
// 006f13c7  8bf1                 mov esi, ecx
// 006f13c9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006f13cd  83ec28               sub esp, 0x28
// 006f13d0  8bc4                 mov eax, esp
// 006f13d2  c70600000000         mov dword ptr [esi], 0
// 006f13d8  8d542444             lea edx, [esp + 0x44]
// 006f13dc  8964242c             mov dword ptr [esp + 0x2c], esp
// 006f13e0  8908                 mov dword ptr [eax], ecx
// 006f13e2  8d4804               lea ecx, [eax + 4]
// 006f13e5  52                   push edx
// 006f13e6  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 006f13ee  e83dacf8ff           call 0x67c030
// 006f13f3  8bce                 mov ecx, esi
// 006f13f5  e8d6fdffff           call 0x6f11d0
// 006f13fa  8d4c241c             lea ecx, [esp + 0x1c]
// 006f13fe  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006f1406  e8850bddff           call 0x4c1f90
// 006f140b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f140f  8bc6                 mov eax, esi
// 006f1411  64890d00000000       mov dword ptr fs:[0], ecx
// 006f1418  5e                   pop esi
// 006f1419  83c410               add esp, 0x10
// 006f141c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
