// roc 2009-12 0070d160  unit: std::D::DU?$char_traits::V?$basic_string::V?$map::?$sp_counted_impl_p  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0070d160
//
// 0070d160  6aff                 push -1
// 0070d162  68f8269500           push 0x9526f8
// 0070d167  64a100000000         mov eax, dword ptr fs:[0]
// 0070d16d  50                   push eax
// 0070d16e  64892500000000       mov dword ptr fs:[0], esp
// 0070d175  51                   push ecx
// 0070d176  56                   push esi
// 0070d177  8bf1                 mov esi, ecx
// 0070d179  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0070d17d  83ec28               sub esp, 0x28
// 0070d180  8bc4                 mov eax, esp
// 0070d182  c70600000000         mov dword ptr [esi], 0
// 0070d188  8d542444             lea edx, [esp + 0x44]
// 0070d18c  8964242c             mov dword ptr [esp + 0x2c], esp
// 0070d190  8908                 mov dword ptr [eax], ecx
// 0070d192  8d4804               lea ecx, [eax + 4]
// 0070d195  52                   push edx
// 0070d196  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0070d19e  e8edb80500           call 0x768a90
// 0070d1a3  8bce                 mov ecx, esi
// 0070d1a5  e8a6f8ffff           call 0x70ca50
// 0070d1aa  8d4c241c             lea ecx, [esp + 0x1c]
// 0070d1ae  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0070d1b6  e8f53cfdff           call 0x6e0eb0
// 0070d1bb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0070d1bf  8bc6                 mov eax, esi
// 0070d1c1  64890d00000000       mov dword ptr fs:[0], ecx
// 0070d1c8  5e                   pop esi
// 0070d1c9  83c410               add esp, 0x10
// 0070d1cc  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
