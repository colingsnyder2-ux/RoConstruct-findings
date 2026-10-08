// roc 2011-06 006b8bf0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::Vslot::?$callable  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b8bf0
//
// 006b8bf0  6aff                 push -1
// 006b8bf2  6838839f00           push 0x9f8338
// 006b8bf7  64a100000000         mov eax, dword ptr fs:[0]
// 006b8bfd  50                   push eax
// 006b8bfe  64892500000000       mov dword ptr fs:[0], esp
// 006b8c05  51                   push ecx
// 006b8c06  56                   push esi
// 006b8c07  8bf1                 mov esi, ecx
// 006b8c09  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006b8c0d  83ec28               sub esp, 0x28
// 006b8c10  8bc4                 mov eax, esp
// 006b8c12  c70600000000         mov dword ptr [esi], 0
// 006b8c18  8d542444             lea edx, [esp + 0x44]
// 006b8c1c  8964242c             mov dword ptr [esp + 0x2c], esp
// 006b8c20  8908                 mov dword ptr [eax], ecx
// 006b8c22  8d4804               lea ecx, [eax + 4]
// 006b8c25  52                   push edx
// 006b8c26  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 006b8c2e  e8ed562600           call 0x91e320
// 006b8c33  8bce                 mov ecx, esi
// 006b8c35  e816e9ffff           call 0x6b7550
// 006b8c3a  8d4c241c             lea ecx, [esp + 0x1c]
// 006b8c3e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006b8c46  e885af0b00           call 0x773bd0
// 006b8c4b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b8c4f  8bc6                 mov eax, esi
// 006b8c51  64890d00000000       mov dword ptr fs:[0], ecx
// 006b8c58  5e                   pop esi
// 006b8c59  83c410               add esp, 0x10
// 006b8c5c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
