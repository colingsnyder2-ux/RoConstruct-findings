// roc 2009-12 0051bee0  unit: RBX::Network::Players::W4ChatOption::?$EnumDesc  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0051bee0
//
// 0051bee0  6aff                 push -1
// 0051bee2  68f8269500           push 0x9526f8
// 0051bee7  64a100000000         mov eax, dword ptr fs:[0]
// 0051beed  50                   push eax
// 0051beee  64892500000000       mov dword ptr fs:[0], esp
// 0051bef5  51                   push ecx
// 0051bef6  56                   push esi
// 0051bef7  8bf1                 mov esi, ecx
// 0051bef9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051befd  83ec28               sub esp, 0x28
// 0051bf00  8bc4                 mov eax, esp
// 0051bf02  c70600000000         mov dword ptr [esi], 0
// 0051bf08  8d542444             lea edx, [esp + 0x44]
// 0051bf0c  8964242c             mov dword ptr [esp + 0x2c], esp
// 0051bf10  8908                 mov dword ptr [eax], ecx
// 0051bf12  8d4804               lea ecx, [eax + 4]
// 0051bf15  52                   push edx
// 0051bf16  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0051bf1e  e86dcb2400           call 0x768a90
// 0051bf23  8bce                 mov ecx, esi
// 0051bf25  e8e6edffff           call 0x51ad10
// 0051bf2a  8d4c241c             lea ecx, [esp + 0x1c]
// 0051bf2e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0051bf36  e8754f1c00           call 0x6e0eb0
// 0051bf3b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051bf3f  8bc6                 mov eax, esi
// 0051bf41  64890d00000000       mov dword ptr fs:[0], ecx
// 0051bf48  5e                   pop esi
// 0051bf49  83c410               add esp, 0x10
// 0051bf4c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
