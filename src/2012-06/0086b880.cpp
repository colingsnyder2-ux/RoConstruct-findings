// roc 2012-06 0086b880  unit: RBX::ContentFilter  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086b880
//
// 0086b880  6aff                 push -1
// 0086b882  6838f4ab00           push 0xabf438
// 0086b887  64a100000000         mov eax, dword ptr fs:[0]
// 0086b88d  50                   push eax
// 0086b88e  64892500000000       mov dword ptr fs:[0], esp
// 0086b895  51                   push ecx
// 0086b896  56                   push esi
// 0086b897  8bf1                 mov esi, ecx
// 0086b899  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0086b89d  83ec28               sub esp, 0x28
// 0086b8a0  8bc4                 mov eax, esp
// 0086b8a2  c70600000000         mov dword ptr [esi], 0
// 0086b8a8  8d542444             lea edx, [esp + 0x44]
// 0086b8ac  8964242c             mov dword ptr [esp + 0x2c], esp
// 0086b8b0  8908                 mov dword ptr [eax], ecx
// 0086b8b2  8d4804               lea ecx, [eax + 4]
// 0086b8b5  52                   push edx
// 0086b8b6  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0086b8be  e89d44cbff           call 0x51fd60
// 0086b8c3  8bce                 mov ecx, esi
// 0086b8c5  e8b6fcffff           call 0x86b580
// 0086b8ca  8d4c241c             lea ecx, [esp + 0x1c]
// 0086b8ce  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0086b8d6  e8751ef7ff           call 0x7dd750
// 0086b8db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0086b8df  8bc6                 mov eax, esi
// 0086b8e1  64890d00000000       mov dword ptr fs:[0], ecx
// 0086b8e8  5e                   pop esi
// 0086b8e9  83c410               add esp, 0x10
// 0086b8ec  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
