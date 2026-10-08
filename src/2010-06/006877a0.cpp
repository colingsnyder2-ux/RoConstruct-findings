// roc 2010-06 006877a0  unit: RBX::VInsertService::?$BoundFuncDesc  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006877a0
//
// 006877a0  6aff                 push -1
// 006877a2  68d80d9a00           push 0x9a0dd8
// 006877a7  64a100000000         mov eax, dword ptr fs:[0]
// 006877ad  50                   push eax
// 006877ae  64892500000000       mov dword ptr fs:[0], esp
// 006877b5  51                   push ecx
// 006877b6  56                   push esi
// 006877b7  8bf1                 mov esi, ecx
// 006877b9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006877bd  83ec28               sub esp, 0x28
// 006877c0  8bc4                 mov eax, esp
// 006877c2  c70600000000         mov dword ptr [esi], 0
// 006877c8  8d542444             lea edx, [esp + 0x44]
// 006877cc  8964242c             mov dword ptr [esp + 0x2c], esp
// 006877d0  8908                 mov dword ptr [eax], ecx
// 006877d2  8d4804               lea ecx, [eax + 4]
// 006877d5  52                   push edx
// 006877d6  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 006877de  e84d48ffff           call 0x67c030
// 006877e3  8bce                 mov ecx, esi
// 006877e5  e816d3ffff           call 0x684b00
// 006877ea  8d4c241c             lea ecx, [esp + 0x1c]
// 006877ee  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006877f6  e895a7e3ff           call 0x4c1f90
// 006877fb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006877ff  8bc6                 mov eax, esi
// 00687801  64890d00000000       mov dword ptr fs:[0], ecx
// 00687808  5e                   pop esi
// 00687809  83c410               add esp, 0x10
// 0068780c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
