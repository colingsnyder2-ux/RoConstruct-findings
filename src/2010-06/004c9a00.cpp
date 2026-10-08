// roc 2010-06 004c9a00  unit: RBX::Network::Players::W4ChatOption::?$EnumDesc  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c9a00
//
// 004c9a00  6aff                 push -1
// 004c9a02  68d80d9a00           push 0x9a0dd8
// 004c9a07  64a100000000         mov eax, dword ptr fs:[0]
// 004c9a0d  50                   push eax
// 004c9a0e  64892500000000       mov dword ptr fs:[0], esp
// 004c9a15  51                   push ecx
// 004c9a16  56                   push esi
// 004c9a17  8bf1                 mov esi, ecx
// 004c9a19  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c9a1d  83ec28               sub esp, 0x28
// 004c9a20  8bc4                 mov eax, esp
// 004c9a22  c70600000000         mov dword ptr [esi], 0
// 004c9a28  8d542444             lea edx, [esp + 0x44]
// 004c9a2c  8964242c             mov dword ptr [esp + 0x2c], esp
// 004c9a30  8908                 mov dword ptr [eax], ecx
// 004c9a32  8d4804               lea ecx, [eax + 4]
// 004c9a35  52                   push edx
// 004c9a36  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 004c9a3e  e8ed251b00           call 0x67c030
// 004c9a43  8bce                 mov ecx, esi
// 004c9a45  e896eeffff           call 0x4c88e0
// 004c9a4a  8d4c241c             lea ecx, [esp + 0x1c]
// 004c9a4e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004c9a56  e83585ffff           call 0x4c1f90
// 004c9a5b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c9a5f  8bc6                 mov eax, esi
// 004c9a61  64890d00000000       mov dword ptr fs:[0], ecx
// 004c9a68  5e                   pop esi
// 004c9a69  83c410               add esp, 0x10
// 004c9a6c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
