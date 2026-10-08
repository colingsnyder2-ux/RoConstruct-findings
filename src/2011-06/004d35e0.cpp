// roc 2011-06 004d35e0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004d35e0
//
// 004d35e0  6aff                 push -1
// 004d35e2  68e8b39f00           push 0x9fb3e8
// 004d35e7  64a100000000         mov eax, dword ptr fs:[0]
// 004d35ed  50                   push eax
// 004d35ee  64892500000000       mov dword ptr fs:[0], esp
// 004d35f5  51                   push ecx
// 004d35f6  56                   push esi
// 004d35f7  8bf1                 mov esi, ecx
// 004d35f9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d35fd  83ec28               sub esp, 0x28
// 004d3600  8bc4                 mov eax, esp
// 004d3602  c70600000000         mov dword ptr [esi], 0
// 004d3608  8d542444             lea edx, [esp + 0x44]
// 004d360c  8964242c             mov dword ptr [esp + 0x2c], esp
// 004d3610  8908                 mov dword ptr [eax], ecx
// 004d3612  8d4804               lea ecx, [eax + 4]
// 004d3615  52                   push edx
// 004d3616  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 004d361e  e82d122a00           call 0x774850
// 004d3623  8bce                 mov ecx, esi
// 004d3625  e886ddffff           call 0x4d13b0
// 004d362a  8d4c241c             lea ecx, [esp + 0x1c]
// 004d362e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004d3636  e8b50b2a00           call 0x7741f0
// 004d363b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d363f  8bc6                 mov eax, esi
// 004d3641  64890d00000000       mov dword ptr fs:[0], ecx
// 004d3648  5e                   pop esi
// 004d3649  83c410               add esp, 0x10
// 004d364c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
